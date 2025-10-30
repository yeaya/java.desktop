#include <java/awt/EventQueue$FwSecondaryLoopWrapper.h>

#include <java/awt/EventDispatchThread.h>
#include <java/awt/EventFilter.h>
#include <java/awt/EventQueue.h>
#include <java/awt/SecondaryLoop.h>
#include <jcpp.h>

using $EventDispatchThread = ::java::awt::EventDispatchThread;
using $EventFilter = ::java::awt::EventFilter;
using $EventQueue = ::java::awt::EventQueue;
using $SecondaryLoop = ::java::awt::SecondaryLoop;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _EventQueue$FwSecondaryLoopWrapper_FieldInfo_[] = {
	{"this$0", "Ljava/awt/EventQueue;", nullptr, $FINAL | $SYNTHETIC, $field(EventQueue$FwSecondaryLoopWrapper, this$0)},
	{"loop", "Ljava/awt/SecondaryLoop;", nullptr, $PRIVATE | $FINAL, $field(EventQueue$FwSecondaryLoopWrapper, loop)},
	{"filter", "Ljava/awt/EventFilter;", nullptr, $PRIVATE | $FINAL, $field(EventQueue$FwSecondaryLoopWrapper, filter)},
	{}
};

$MethodInfo _EventQueue$FwSecondaryLoopWrapper_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/EventQueue;Ljava/awt/SecondaryLoop;Ljava/awt/EventFilter;)V", nullptr, $PUBLIC, $method(static_cast<void(EventQueue$FwSecondaryLoopWrapper::*)($EventQueue*,$SecondaryLoop*,$EventFilter*)>(&EventQueue$FwSecondaryLoopWrapper::init$))},
	{"enter", "()Z", nullptr, $PUBLIC},
	{"exit", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _EventQueue$FwSecondaryLoopWrapper_InnerClassesInfo_[] = {
	{"java.awt.EventQueue$FwSecondaryLoopWrapper", "java.awt.EventQueue", "FwSecondaryLoopWrapper", $PRIVATE},
	{}
};

$ClassInfo _EventQueue$FwSecondaryLoopWrapper_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.EventQueue$FwSecondaryLoopWrapper",
	"java.lang.Object",
	"java.awt.SecondaryLoop",
	_EventQueue$FwSecondaryLoopWrapper_FieldInfo_,
	_EventQueue$FwSecondaryLoopWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_EventQueue$FwSecondaryLoopWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.EventQueue"
};

$Object* allocate$EventQueue$FwSecondaryLoopWrapper($Class* clazz) {
	return $of($alloc(EventQueue$FwSecondaryLoopWrapper));
}

void EventQueue$FwSecondaryLoopWrapper::init$($EventQueue* this$0, $SecondaryLoop* loop, $EventFilter* filter) {
	$set(this, this$0, this$0);
	$set(this, loop, loop);
	$set(this, filter, filter);
}

bool EventQueue$FwSecondaryLoopWrapper::enter() {
	if (this->filter != nullptr) {
		$nc(this->this$0->dispatchThread)->addEventFilter(this->filter);
	}
	return $nc(this->loop)->enter();
}

bool EventQueue$FwSecondaryLoopWrapper::exit() {
	if (this->filter != nullptr) {
		$nc(this->this$0->dispatchThread)->removeEventFilter(this->filter);
	}
	return $nc(this->loop)->exit();
}

EventQueue$FwSecondaryLoopWrapper::EventQueue$FwSecondaryLoopWrapper() {
}

$Class* EventQueue$FwSecondaryLoopWrapper::load$($String* name, bool initialize) {
	$loadClass(EventQueue$FwSecondaryLoopWrapper, name, initialize, &_EventQueue$FwSecondaryLoopWrapper_ClassInfo_, allocate$EventQueue$FwSecondaryLoopWrapper);
	return class$;
}

$Class* EventQueue$FwSecondaryLoopWrapper::class$ = nullptr;

	} // awt
} // java