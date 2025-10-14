#include <java/awt/EventQueue$4.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue$4$1.h>
#include <java/awt/EventQueue.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/FwDispatcher.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $EventQueue$4$1 = ::java::awt::EventQueue$4$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $FwDispatcher = ::sun::awt::FwDispatcher;

namespace java {
	namespace awt {

$FieldInfo _EventQueue$4_FieldInfo_[] = {
	{"this$0", "Ljava/awt/EventQueue;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$4, this$0)},
	{"val$src", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$4, val$src)},
	{"val$event", "Ljava/awt/AWTEvent;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$4, val$event)},
	{}
};

$MethodInfo _EventQueue$4_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/EventQueue;Ljava/awt/AWTEvent;Ljava/lang/Object;)V", "()V", 0, $method(static_cast<void(EventQueue$4::*)($EventQueue*,$AWTEvent*,Object$*)>(&EventQueue$4::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _EventQueue$4_EnclosingMethodInfo_ = {
	"java.awt.EventQueue",
	"dispatchEvent",
	"(Ljava/awt/AWTEvent;)V"
};

$InnerClassInfo _EventQueue$4_InnerClassesInfo_[] = {
	{"java.awt.EventQueue$4", nullptr, nullptr, 0},
	{"java.awt.EventQueue$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EventQueue$4_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.EventQueue$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_EventQueue$4_FieldInfo_,
	_EventQueue$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_EventQueue$4_EnclosingMethodInfo_,
	_EventQueue$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.EventQueue"
};

$Object* allocate$EventQueue$4($Class* clazz) {
	return $of($alloc(EventQueue$4));
}

void EventQueue$4::init$($EventQueue* this$0, $AWTEvent* val$event, Object$* val$src) {
	$set(this, this$0, this$0);
	$set(this, val$event, val$event);
	$set(this, val$src, val$src);
}

$Object* EventQueue$4::run() {
	if (this->this$0->fwDispatcher == nullptr || this->this$0->isDispatchThreadImpl()) {
		this->this$0->dispatchEventImpl(this->val$event, this->val$src);
	} else {
		$nc(this->this$0->fwDispatcher)->scheduleDispatch($$new($EventQueue$4$1, this));
	}
	return $of(nullptr);
}

EventQueue$4::EventQueue$4() {
}

$Class* EventQueue$4::load$($String* name, bool initialize) {
	$loadClass(EventQueue$4, name, initialize, &_EventQueue$4_ClassInfo_, allocate$EventQueue$4);
	return class$;
}

$Class* EventQueue$4::class$ = nullptr;

	} // awt
} // java