#include <java/awt/event/ContainerEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

#undef COMPONENT_ADDED
#undef COMPONENT_REMOVED
#undef CONTAINER_FIRST
#undef CONTAINER_LAST

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _ContainerEvent_FieldInfo_[] = {
	{"CONTAINER_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContainerEvent, CONTAINER_FIRST)},
	{"CONTAINER_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContainerEvent, CONTAINER_LAST)},
	{"COMPONENT_ADDED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContainerEvent, COMPONENT_ADDED)},
	{"COMPONENT_REMOVED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContainerEvent, COMPONENT_REMOVED)},
	{"child", "Ljava/awt/Component;", nullptr, 0, $field(ContainerEvent, child)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ContainerEvent, serialVersionUID)},
	{}
};

$MethodInfo _ContainerEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;ILjava/awt/Component;)V", nullptr, $PUBLIC, $method(static_cast<void(ContainerEvent::*)($Component*,int32_t,$Component*)>(&ContainerEvent::init$))},
	{"getChild", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getContainer", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ContainerEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.event.ContainerEvent",
	"java.awt.event.ComponentEvent",
	nullptr,
	_ContainerEvent_FieldInfo_,
	_ContainerEvent_MethodInfo_
};

$Object* allocate$ContainerEvent($Class* clazz) {
	return $of($alloc(ContainerEvent));
}

void ContainerEvent::init$($Component* source, int32_t id, $Component* child) {
	$ComponentEvent::init$(source, id);
	$set(this, child, child);
}

$Container* ContainerEvent::getContainer() {
	return ($instanceOf($Container, this->source)) ? $cast($Container, this->source) : ($Container*)nullptr;
}

$Component* ContainerEvent::getChild() {
	return this->child;
}

$String* ContainerEvent::paramString() {
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case ContainerEvent::COMPONENT_ADDED:
		{
			$assign(typeStr, "COMPONENT_ADDED"_s);
			break;
		}
	case ContainerEvent::COMPONENT_REMOVED:
		{
			$assign(typeStr, "COMPONENT_REMOVED"_s);
			break;
		}
	default:
		{
			$assign(typeStr, "unknown type"_s);
		}
	}
	return $str({typeStr, ",child="_s, $($nc(this->child)->getName())});
}

ContainerEvent::ContainerEvent() {
}

$Class* ContainerEvent::load$($String* name, bool initialize) {
	$loadClass(ContainerEvent, name, initialize, &_ContainerEvent_ClassInfo_, allocate$ContainerEvent);
	return class$;
}

$Class* ContainerEvent::class$ = nullptr;

		} // event
	} // awt
} // java