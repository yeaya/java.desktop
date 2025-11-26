#include <sun/awt/SunToolkit$3.h>

#include <java/lang/Runnable.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <sun/awt/PeerEvent.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $PeerEvent = ::sun::awt::PeerEvent;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

$FieldInfo _SunToolkit$3_FieldInfo_[] = {
	{"this$0", "Lsun/awt/SunToolkit;", nullptr, $FINAL | $SYNTHETIC, $field(SunToolkit$3, this$0)},
	{"val$eventDispatched", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $FINAL | $SYNTHETIC, $field(SunToolkit$3, val$eventDispatched)},
	{"val$queueEmpty", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $FINAL | $SYNTHETIC, $field(SunToolkit$3, val$queueEmpty)},
	{"val$end", "J", nullptr, $FINAL | $SYNTHETIC, $field(SunToolkit$3, val$end)},
	{}
};

$MethodInfo _SunToolkit$3_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/SunToolkit;Ljava/lang/Object;Ljava/lang/Runnable;JJLjava/util/concurrent/atomic/AtomicBoolean;Ljava/util/concurrent/atomic/AtomicBoolean;)V", nullptr, 0, $method(static_cast<void(SunToolkit$3::*)($SunToolkit*,Object$*,$Runnable*,int64_t,int64_t,$AtomicBoolean*,$AtomicBoolean*)>(&SunToolkit$3::init$))},
	{"dispatch", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunToolkit$3_EnclosingMethodInfo_ = {
	"sun.awt.SunToolkit",
	"waitForIdle",
	"(J)Z"
};

$InnerClassInfo _SunToolkit$3_InnerClassesInfo_[] = {
	{"sun.awt.SunToolkit$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunToolkit$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.SunToolkit$3",
	"sun.awt.PeerEvent",
	nullptr,
	_SunToolkit$3_FieldInfo_,
	_SunToolkit$3_MethodInfo_,
	nullptr,
	&_SunToolkit$3_EnclosingMethodInfo_,
	_SunToolkit$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.SunToolkit"
};

$Object* allocate$SunToolkit$3($Class* clazz) {
	return $of($alloc(SunToolkit$3));
}

void SunToolkit$3::init$($SunToolkit* this$0, Object$* source, $Runnable* runnable, int64_t flags, int64_t val$end, $AtomicBoolean* val$queueEmpty, $AtomicBoolean* val$eventDispatched) {
	$set(this, this$0, this$0);
	this->val$end = val$end;
	$set(this, val$queueEmpty, val$queueEmpty);
	$set(this, val$eventDispatched, val$eventDispatched);
	$PeerEvent::init$(source, runnable, flags);
}

void SunToolkit$3::dispatch() {
	int32_t iters = 0;
	while (iters < 1) {
		this->this$0->syncNativeQueue(this->this$0->timeout(this->val$end));
		++iters;
	}
	while (this->this$0->syncNativeQueue(this->this$0->timeout(this->val$end)) && iters < 100) {
		++iters;
	}
	$SunToolkit::flushPendingEvents();
	$synchronized(this->this$0->waitLock) {
		$nc(this->val$queueEmpty)->set(this->this$0->isEQEmpty());
		$nc(this->val$eventDispatched)->set(true);
		$nc($of(this->this$0->waitLock))->notifyAll();
	}
}

SunToolkit$3::SunToolkit$3() {
}

$Class* SunToolkit$3::load$($String* name, bool initialize) {
	$loadClass(SunToolkit$3, name, initialize, &_SunToolkit$3_ClassInfo_, allocate$SunToolkit$3);
	return class$;
}

$Class* SunToolkit$3::class$ = nullptr;

	} // awt
} // sun