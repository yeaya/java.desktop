#include <sun/awt/event/IgnorePaintEvent.h>

#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/PaintEvent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace event {

$MethodInfo _IgnorePaintEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;ILjava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(static_cast<void(IgnorePaintEvent::*)($Component*,int32_t,$Rectangle*)>(&IgnorePaintEvent::init$))},
	{}
};

$ClassInfo _IgnorePaintEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.event.IgnorePaintEvent",
	"java.awt.event.PaintEvent",
	nullptr,
	nullptr,
	_IgnorePaintEvent_MethodInfo_
};

$Object* allocate$IgnorePaintEvent($Class* clazz) {
	return $of($alloc(IgnorePaintEvent));
}

void IgnorePaintEvent::init$($Component* source, int32_t id, $Rectangle* updateRect) {
	$PaintEvent::init$(source, id, updateRect);
}

IgnorePaintEvent::IgnorePaintEvent() {
}

$Class* IgnorePaintEvent::load$($String* name, bool initialize) {
	$loadClass(IgnorePaintEvent, name, initialize, &_IgnorePaintEvent_ClassInfo_, allocate$IgnorePaintEvent);
	return class$;
}

$Class* IgnorePaintEvent::class$ = nullptr;

		} // event
	} // awt
} // sun