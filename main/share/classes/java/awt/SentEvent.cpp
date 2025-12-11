#include <java/awt/SentEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Toolkit.h>
#include <java/util/EventObject.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef ID

using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {

$FieldInfo _SentEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SentEvent, serialVersionUID)},
	{"ID", "I", nullptr, $STATIC | $FINAL, $constField(SentEvent, ID)},
	{"dispatched", "Z", nullptr, 0, $field(SentEvent, dispatched$)},
	{"nested", "Ljava/awt/AWTEvent;", nullptr, $PRIVATE, $field(SentEvent, nested)},
	{"toNotify", "Lsun/awt/AppContext;", nullptr, $PRIVATE, $field(SentEvent, toNotify)},
	{}
};

$MethodInfo _SentEvent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SentEvent::*)()>(&SentEvent::init$))},
	{"<init>", "(Ljava/awt/AWTEvent;)V", nullptr, 0, $method(static_cast<void(SentEvent::*)($AWTEvent*)>(&SentEvent::init$))},
	{"<init>", "(Ljava/awt/AWTEvent;Lsun/awt/AppContext;)V", nullptr, 0, $method(static_cast<void(SentEvent::*)($AWTEvent*,$AppContext*)>(&SentEvent::init$))},
	{"dispatch", "()V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $FINAL, $method(static_cast<void(SentEvent::*)()>(&SentEvent::dispose))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SentEvent_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.SentEvent",
	"java.awt.AWTEvent",
	"java.awt.ActiveEvent",
	_SentEvent_FieldInfo_,
	_SentEvent_MethodInfo_
};

$Object* allocate$SentEvent($Class* clazz) {
	return $of($alloc(SentEvent));
}

$String* SentEvent::toString() {
	 return this->$AWTEvent::toString();
}

int32_t SentEvent::hashCode() {
	 return this->$AWTEvent::hashCode();
}

bool SentEvent::equals(Object$* arg0) {
	 return this->$AWTEvent::equals(arg0);
}

$Object* SentEvent::clone() {
	 return this->$AWTEvent::clone();
}

void SentEvent::finalize() {
	this->$AWTEvent::finalize();
}

void SentEvent::init$() {
	SentEvent::init$(nullptr);
}

void SentEvent::init$($AWTEvent* nested) {
	SentEvent::init$(nested, nullptr);
}

void SentEvent::init$($AWTEvent* nested, $AppContext* toNotify) {
	$useLocalCurrentObjectStackCache();
	$AWTEvent::init$((nested != nullptr) ? $($nc(nested)->getSource()) : $($of($Toolkit::getDefaultToolkit())), SentEvent::ID);
	$set(this, nested, nested);
	$set(this, toNotify, toNotify);
}

void SentEvent::dispatch() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->nested != nullptr) {
				$nc($($Toolkit::getEventQueue()))->dispatchEvent(this->nested);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->dispatched$ = true;
			if (this->toNotify != nullptr) {
				$SunToolkit::postEvent(this->toNotify, $$new(SentEvent));
			}
			$synchronized(this) {
				$of(this)->notifyAll();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SentEvent::dispose() {
	this->dispatched$ = true;
	if (this->toNotify != nullptr) {
		$SunToolkit::postEvent(this->toNotify, $$new(SentEvent));
	}
	$synchronized(this) {
		$of(this)->notifyAll();
	}
}

SentEvent::SentEvent() {
}

$Class* SentEvent::load$($String* name, bool initialize) {
	$loadClass(SentEvent, name, initialize, &_SentEvent_ClassInfo_, allocate$SentEvent);
	return class$;
}

$Class* SentEvent::class$ = nullptr;

	} // awt
} // java