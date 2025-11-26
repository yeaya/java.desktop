#include <java/awt/Queue.h>

#include <sun/awt/EventQueueItem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventQueueItem = ::sun::awt::EventQueueItem;

namespace java {
	namespace awt {

$FieldInfo _Queue_FieldInfo_[] = {
	{"head", "Lsun/awt/EventQueueItem;", nullptr, 0, $field(Queue, head)},
	{"tail", "Lsun/awt/EventQueueItem;", nullptr, 0, $field(Queue, tail)},
	{}
};

$MethodInfo _Queue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Queue::*)()>(&Queue::init$))},
	{}
};

$ClassInfo _Queue_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Queue",
	"java.lang.Object",
	nullptr,
	_Queue_FieldInfo_,
	_Queue_MethodInfo_
};

$Object* allocate$Queue($Class* clazz) {
	return $of($alloc(Queue));
}

void Queue::init$() {
}

Queue::Queue() {
}

$Class* Queue::load$($String* name, bool initialize) {
	$loadClass(Queue, name, initialize, &_Queue_ClassInfo_, allocate$Queue);
	return class$;
}

$Class* Queue::class$ = nullptr;

	} // awt
} // java