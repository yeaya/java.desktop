#include <java/awt/EventQueue$4$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventQueue$4.h>
#include <java/awt/EventQueue.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $EventDispatchThread = ::java::awt::EventDispatchThread;
using $EventQueue = ::java::awt::EventQueue;
using $EventQueue$4 = ::java::awt::EventQueue$4;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace java {
	namespace awt {

$FieldInfo _EventQueue$4$1_FieldInfo_[] = {
	{"this$1", "Ljava/awt/EventQueue$4;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$4$1, this$1)},
	{}
};

$MethodInfo _EventQueue$4$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/EventQueue$4;)V", nullptr, 0, $method(static_cast<void(EventQueue$4$1::*)($EventQueue$4*)>(&EventQueue$4$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _EventQueue$4$1_EnclosingMethodInfo_ = {
	"java.awt.EventQueue$4",
	"run",
	"()Ljava/lang/Void;"
};

$InnerClassInfo _EventQueue$4$1_InnerClassesInfo_[] = {
	{"java.awt.EventQueue$4", nullptr, nullptr, 0},
	{"java.awt.EventQueue$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EventQueue$4$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.EventQueue$4$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_EventQueue$4$1_FieldInfo_,
	_EventQueue$4$1_MethodInfo_,
	nullptr,
	&_EventQueue$4$1_EnclosingMethodInfo_,
	_EventQueue$4$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.EventQueue"
};

$Object* allocate$EventQueue$4$1($Class* clazz) {
	return $of($alloc(EventQueue$4$1));
}

void EventQueue$4$1::init$($EventQueue$4* this$1) {
	$set(this, this$1, this$1);
}

void EventQueue$4$1::run() {
	if ($nc($nc(this->this$1->this$0)->dispatchThread)->filterAndCheckEvent(this->this$1->val$event)) {
		$nc(this->this$1->this$0)->dispatchEventImpl(this->this$1->val$event, this->this$1->val$src);
	}
}

EventQueue$4$1::EventQueue$4$1() {
}

$Class* EventQueue$4$1::load$($String* name, bool initialize) {
	$loadClass(EventQueue$4$1, name, initialize, &_EventQueue$4$1_ClassInfo_, allocate$EventQueue$4$1);
	return class$;
}

$Class* EventQueue$4$1::class$ = nullptr;

	} // awt
} // java