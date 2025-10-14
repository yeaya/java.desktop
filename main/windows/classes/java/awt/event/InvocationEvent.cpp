#include <java/awt/event/InvocationEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/event/InvocationEvent$1.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor$InvocationEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

#undef INVOCATION_DEFAULT
#undef INVOCATION_FIRST
#undef INVOCATION_LAST

using $AWTEvent = ::java::awt::AWTEvent;
using $ActiveEvent = ::java::awt::ActiveEvent;
using $InvocationEvent$1 = ::java::awt::event::InvocationEvent$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$InvocationEventAccessor = ::sun::awt::AWTAccessor$InvocationEventAccessor;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _InvocationEvent_FieldInfo_[] = {
	{"INVOCATION_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InvocationEvent, INVOCATION_FIRST)},
	{"INVOCATION_DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InvocationEvent, INVOCATION_DEFAULT)},
	{"INVOCATION_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InvocationEvent, INVOCATION_LAST)},
	{"runnable", "Ljava/lang/Runnable;", nullptr, $PROTECTED, $field(InvocationEvent, runnable)},
	{"notifier", "Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE, $field(InvocationEvent, notifier)},
	{"listener", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(InvocationEvent, listener)},
	{"dispatched", "Z", nullptr, $PRIVATE | $VOLATILE, $field(InvocationEvent, dispatched$)},
	{"catchExceptions", "Z", nullptr, $PROTECTED, $field(InvocationEvent, catchExceptions)},
	{"exception", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(InvocationEvent, exception)},
	{"throwable", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(InvocationEvent, throwable)},
	{"when", "J", nullptr, $PRIVATE, $field(InvocationEvent, when)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvocationEvent, serialVersionUID)},
	{}
};

$MethodInfo _InvocationEvent_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(static_cast<void(InvocationEvent::*)(Object$*,$Runnable*)>(&InvocationEvent::init$))},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Runnable;Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $method(static_cast<void(InvocationEvent::*)(Object$*,$Runnable*,Object$*,bool)>(&InvocationEvent::init$))},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Runnable;Ljava/lang/Runnable;Z)V", nullptr, $PUBLIC, $method(static_cast<void(InvocationEvent::*)(Object$*,$Runnable*,$Runnable*,bool)>(&InvocationEvent::init$))},
	{"<init>", "(Ljava/lang/Object;ILjava/lang/Runnable;Ljava/lang/Object;Z)V", nullptr, $PROTECTED, $method(static_cast<void(InvocationEvent::*)(Object$*,int32_t,$Runnable*,Object$*,bool)>(&InvocationEvent::init$))},
	{"<init>", "(Ljava/lang/Object;ILjava/lang/Runnable;Ljava/lang/Object;Ljava/lang/Runnable;Z)V", nullptr, $PRIVATE, $method(static_cast<void(InvocationEvent::*)(Object$*,int32_t,$Runnable*,Object$*,$Runnable*,bool)>(&InvocationEvent::init$))},
	{"dispatch", "()V", nullptr, $PUBLIC},
	{"finishedDispatching", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(InvocationEvent::*)(bool)>(&InvocationEvent::finishedDispatching))},
	{"getException", "()Ljava/lang/Exception;", nullptr, $PUBLIC},
	{"getThrowable", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getWhen", "()J", nullptr, $PUBLIC},
	{"isDispatched", "()Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _InvocationEvent_InnerClassesInfo_[] = {
	{"java.awt.event.InvocationEvent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InvocationEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.event.InvocationEvent",
	"java.awt.AWTEvent",
	"java.awt.ActiveEvent",
	_InvocationEvent_FieldInfo_,
	_InvocationEvent_MethodInfo_,
	nullptr,
	nullptr,
	_InvocationEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.event.InvocationEvent$1"
};

$Object* allocate$InvocationEvent($Class* clazz) {
	return $of($alloc(InvocationEvent));
}

$String* InvocationEvent::toString() {
	 return this->$AWTEvent::toString();
}

int32_t InvocationEvent::hashCode() {
	 return this->$AWTEvent::hashCode();
}

bool InvocationEvent::equals(Object$* arg0) {
	 return this->$AWTEvent::equals(arg0);
}

$Object* InvocationEvent::clone() {
	 return this->$AWTEvent::clone();
}

void InvocationEvent::finalize() {
	this->$AWTEvent::finalize();
}

void InvocationEvent::init$(Object$* source, $Runnable* runnable) {
	InvocationEvent::init$(source, InvocationEvent::INVOCATION_DEFAULT, runnable, nullptr, nullptr, false);
}

void InvocationEvent::init$(Object$* source, $Runnable* runnable, Object$* notifier, bool catchThrowables) {
	InvocationEvent::init$(source, InvocationEvent::INVOCATION_DEFAULT, runnable, notifier, nullptr, catchThrowables);
}

void InvocationEvent::init$(Object$* source, $Runnable* runnable, $Runnable* listener, bool catchThrowables) {
	InvocationEvent::init$(source, InvocationEvent::INVOCATION_DEFAULT, runnable, nullptr, listener, catchThrowables);
}

void InvocationEvent::init$(Object$* source, int32_t id, $Runnable* runnable, Object$* notifier, bool catchThrowables) {
	InvocationEvent::init$(source, id, runnable, notifier, nullptr, catchThrowables);
}

void InvocationEvent::init$(Object$* source, int32_t id, $Runnable* runnable, Object$* notifier, $Runnable* listener, bool catchThrowables) {
	$AWTEvent::init$(source, id);
	this->dispatched$ = false;
	$set(this, exception, nullptr);
	$set(this, throwable, nullptr);
	$set(this, runnable, runnable);
	$set(this, notifier, notifier);
	$set(this, listener, listener);
	this->catchExceptions = catchThrowables;
	this->when = $System::currentTimeMillis();
}

void InvocationEvent::dispatch() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->catchExceptions) {
				try {
					$nc(this->runnable)->run();
				} catch ($Throwable&) {
					$var($Throwable, t, $catch());
					if ($instanceOf($Exception, t)) {
						$set(this, exception, $cast($Exception, t));
					}
					$set(this, throwable, t);
				}
			} else {
				$nc(this->runnable)->run();
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			finishedDispatching(true);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Exception* InvocationEvent::getException() {
	return (this->catchExceptions) ? this->exception : ($Exception*)nullptr;
}

$Throwable* InvocationEvent::getThrowable() {
	return (this->catchExceptions) ? this->throwable : ($Throwable*)nullptr;
}

int64_t InvocationEvent::getWhen() {
	return this->when;
}

bool InvocationEvent::isDispatched() {
	return this->dispatched$;
}

void InvocationEvent::finishedDispatching(bool dispatched) {
	this->dispatched$ = dispatched;
	if (this->notifier != nullptr) {
		$synchronized(this->notifier) {
			$nc($of(this->notifier))->notifyAll();
		}
	}
	if (this->listener != nullptr) {
		$nc(this->listener)->run();
	}
}

$String* InvocationEvent::paramString() {
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case InvocationEvent::INVOCATION_DEFAULT:
		{
			$assign(typeStr, "INVOCATION_DEFAULT"_s);
			break;
		}
	default:
		{
			$assign(typeStr, "unknown type"_s);
		}
	}
	return $str({typeStr, ",runnable="_s, this->runnable, ",notifier="_s, this->notifier, ",catchExceptions="_s, $$str(this->catchExceptions), ",when="_s, $$str(this->when)});
}

void clinit$InvocationEvent($Class* class$) {
	{
		$AWTAccessor::setInvocationEventAccessor($$new($InvocationEvent$1));
	}
}

InvocationEvent::InvocationEvent() {
}

$Class* InvocationEvent::load$($String* name, bool initialize) {
	$loadClass(InvocationEvent, name, initialize, &_InvocationEvent_ClassInfo_, clinit$InvocationEvent, allocate$InvocationEvent);
	return class$;
}

$Class* InvocationEvent::class$ = nullptr;

		} // event
	} // awt
} // java