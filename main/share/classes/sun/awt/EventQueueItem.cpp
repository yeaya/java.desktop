#include <sun/awt/EventQueueItem.h>

#include <java/awt/AWTEvent.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$FieldInfo _EventQueueItem_FieldInfo_[] = {
	{"event", "Ljava/awt/AWTEvent;", nullptr, $PUBLIC, $field(EventQueueItem, event)},
	{"next", "Lsun/awt/EventQueueItem;", nullptr, $PUBLIC, $field(EventQueueItem, next)},
	{}
};

$MethodInfo _EventQueueItem_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(EventQueueItem::*)($AWTEvent*)>(&EventQueueItem::init$))},
	{}
};

$ClassInfo _EventQueueItem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.EventQueueItem",
	"java.lang.Object",
	nullptr,
	_EventQueueItem_FieldInfo_,
	_EventQueueItem_MethodInfo_
};

$Object* allocate$EventQueueItem($Class* clazz) {
	return $of($alloc(EventQueueItem));
}

void EventQueueItem::init$($AWTEvent* evt) {
	$set(this, event, evt);
}

EventQueueItem::EventQueueItem() {
}

$Class* EventQueueItem::load$($String* name, bool initialize) {
	$loadClass(EventQueueItem, name, initialize, &_EventQueueItem_ClassInfo_, allocate$EventQueueItem);
	return class$;
}

$Class* EventQueueItem::class$ = nullptr;

	} // awt
} // sun