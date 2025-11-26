#include <sun/awt/Mutex.h>

#include <java/lang/IllegalMonitorStateException.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalMonitorStateException = ::java::lang::IllegalMonitorStateException;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$FieldInfo _Mutex_FieldInfo_[] = {
	{"locked", "Z", nullptr, $PRIVATE, $field(Mutex, locked)},
	{"owner", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(Mutex, owner)},
	{}
};

$MethodInfo _Mutex_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Mutex::*)()>(&Mutex::init$))},
	{"isOwned", "()Z", nullptr, $PROTECTED},
	{"lock", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"unlock", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _Mutex_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.Mutex",
	"java.lang.Object",
	nullptr,
	_Mutex_FieldInfo_,
	_Mutex_MethodInfo_
};

$Object* allocate$Mutex($Class* clazz) {
	return $of($alloc(Mutex));
}

void Mutex::init$() {
}

void Mutex::lock() {
	$synchronized(this) {
		if (this->locked && $Thread::currentThread() == this->owner) {
			$throwNew($IllegalMonitorStateException);
		}
		do {
			if (!this->locked) {
				this->locked = true;
				$set(this, owner, $Thread::currentThread());
			} else {
				try {
					$of(this)->wait();
				} catch ($InterruptedException& e) {
				}
			}
		} while (this->owner != $Thread::currentThread());
	}
}

void Mutex::unlock() {
	$synchronized(this) {
		if ($Thread::currentThread() != this->owner) {
			$throwNew($IllegalMonitorStateException);
		}
		$set(this, owner, nullptr);
		this->locked = false;
		$of(this)->notify();
	}
}

bool Mutex::isOwned() {
	return (this->locked && $Thread::currentThread() == this->owner);
}

Mutex::Mutex() {
}

$Class* Mutex::load$($String* name, bool initialize) {
	$loadClass(Mutex, name, initialize, &_Mutex_ClassInfo_, allocate$Mutex);
	return class$;
}

$Class* Mutex::class$ = nullptr;

	} // awt
} // sun