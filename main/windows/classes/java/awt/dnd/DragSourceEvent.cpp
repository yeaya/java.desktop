#include <java/awt/dnd/DragSourceEvent.h>

#include <java/awt/Point.h>
#include <java/awt/dnd/DragSourceContext.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $DragSourceContext = ::java::awt::dnd::DragSourceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _DragSourceEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DragSourceEvent, serialVersionUID)},
	{"locationSpecified", "Z", nullptr, $PRIVATE | $FINAL, $field(DragSourceEvent, locationSpecified)},
	{"x", "I", nullptr, $PRIVATE | $FINAL, $field(DragSourceEvent, x)},
	{"y", "I", nullptr, $PRIVATE | $FINAL, $field(DragSourceEvent, y)},
	{}
};

$MethodInfo _DragSourceEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DragSourceContext;)V", nullptr, $PUBLIC, $method(static_cast<void(DragSourceEvent::*)($DragSourceContext*)>(&DragSourceEvent::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSourceContext;II)V", nullptr, $PUBLIC, $method(static_cast<void(DragSourceEvent::*)($DragSourceContext*,int32_t,int32_t)>(&DragSourceEvent::init$))},
	{"getDragSourceContext", "()Ljava/awt/dnd/DragSourceContext;", nullptr, $PUBLIC},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getX", "()I", nullptr, $PUBLIC},
	{"getY", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DragSourceEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.dnd.DragSourceEvent",
	"java.util.EventObject",
	nullptr,
	_DragSourceEvent_FieldInfo_,
	_DragSourceEvent_MethodInfo_
};

$Object* allocate$DragSourceEvent($Class* clazz) {
	return $of($alloc(DragSourceEvent));
}

void DragSourceEvent::init$($DragSourceContext* dsc) {
	$EventObject::init$(dsc);
	this->locationSpecified = false;
	this->x = 0;
	this->y = 0;
}

void DragSourceEvent::init$($DragSourceContext* dsc, int32_t x, int32_t y) {
	$EventObject::init$(dsc);
	this->locationSpecified = true;
	this->x = x;
	this->y = y;
}

$DragSourceContext* DragSourceEvent::getDragSourceContext() {
	return $cast($DragSourceContext, getSource());
}

$Point* DragSourceEvent::getLocation() {
	if (this->locationSpecified) {
		return $new($Point, this->x, this->y);
	} else {
		return nullptr;
	}
}

int32_t DragSourceEvent::getX() {
	return this->x;
}

int32_t DragSourceEvent::getY() {
	return this->y;
}

DragSourceEvent::DragSourceEvent() {
}

$Class* DragSourceEvent::load$($String* name, bool initialize) {
	$loadClass(DragSourceEvent, name, initialize, &_DragSourceEvent_ClassInfo_, allocate$DragSourceEvent);
	return class$;
}

$Class* DragSourceEvent::class$ = nullptr;

		} // dnd
	} // awt
} // java