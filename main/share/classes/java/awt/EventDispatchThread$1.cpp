#include <java/awt/EventDispatchThread$1.h>

#include <java/awt/EventDispatchThread.h>
#include <jcpp.h>

using $Conditional = ::java::awt::Conditional;
using $EventDispatchThread = ::java::awt::EventDispatchThread;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _EventDispatchThread$1_FieldInfo_[] = {
	{"this$0", "Ljava/awt/EventDispatchThread;", nullptr, $FINAL | $SYNTHETIC, $field(EventDispatchThread$1, this$0)},
	{}
};

$MethodInfo _EventDispatchThread$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/EventDispatchThread;)V", nullptr, 0, $method(static_cast<void(EventDispatchThread$1::*)($EventDispatchThread*)>(&EventDispatchThread$1::init$))},
	{"evaluate", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _EventDispatchThread$1_EnclosingMethodInfo_ = {
	"java.awt.EventDispatchThread",
	"run",
	"()V"
};

$InnerClassInfo _EventDispatchThread$1_InnerClassesInfo_[] = {
	{"java.awt.EventDispatchThread$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _EventDispatchThread$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.EventDispatchThread$1",
	"java.lang.Object",
	"java.awt.Conditional",
	_EventDispatchThread$1_FieldInfo_,
	_EventDispatchThread$1_MethodInfo_,
	nullptr,
	&_EventDispatchThread$1_EnclosingMethodInfo_,
	_EventDispatchThread$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.EventDispatchThread"
};

$Object* allocate$EventDispatchThread$1($Class* clazz) {
	return $of($alloc(EventDispatchThread$1));
}

void EventDispatchThread$1::init$($EventDispatchThread* this$0) {
	$set(this, this$0, this$0);
}

bool EventDispatchThread$1::evaluate() {
	return true;
}

EventDispatchThread$1::EventDispatchThread$1() {
}

$Class* EventDispatchThread$1::load$($String* name, bool initialize) {
	$loadClass(EventDispatchThread$1, name, initialize, &_EventDispatchThread$1_ClassInfo_, allocate$EventDispatchThread$1);
	return class$;
}

$Class* EventDispatchThread$1::class$ = nullptr;

	} // awt
} // java