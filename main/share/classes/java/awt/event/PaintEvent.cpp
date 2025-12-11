#include <java/awt/event/PaintEvent.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ComponentEvent.h>
#include <jcpp.h>

#undef PAINT
#undef PAINT_FIRST
#undef PAINT_LAST
#undef UPDATE

using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

$FieldInfo _PaintEvent_FieldInfo_[] = {
	{"PAINT_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PaintEvent, PAINT_FIRST)},
	{"PAINT_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PaintEvent, PAINT_LAST)},
	{"PAINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PaintEvent, PAINT)},
	{"UPDATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PaintEvent, UPDATE)},
	{"updateRect", "Ljava/awt/Rectangle;", nullptr, 0, $field(PaintEvent, updateRect)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PaintEvent, serialVersionUID)},
	{}
};

$MethodInfo _PaintEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;ILjava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(static_cast<void(PaintEvent::*)($Component*,int32_t,$Rectangle*)>(&PaintEvent::init$))},
	{"getUpdateRect", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setUpdateRect", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PaintEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.event.PaintEvent",
	"java.awt.event.ComponentEvent",
	nullptr,
	_PaintEvent_FieldInfo_,
	_PaintEvent_MethodInfo_
};

$Object* allocate$PaintEvent($Class* clazz) {
	return $of($alloc(PaintEvent));
}

void PaintEvent::init$($Component* source, int32_t id, $Rectangle* updateRect) {
	$ComponentEvent::init$(source, id);
	$set(this, updateRect, updateRect);
}

$Rectangle* PaintEvent::getUpdateRect() {
	return this->updateRect;
}

void PaintEvent::setUpdateRect($Rectangle* updateRect) {
	$set(this, updateRect, updateRect);
}

$String* PaintEvent::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case PaintEvent::PAINT:
		{
			$assign(typeStr, "PAINT"_s);
			break;
		}
	case PaintEvent::UPDATE:
		{
			$assign(typeStr, "UPDATE"_s);
			break;
		}
	default:
		{
			$assign(typeStr, "unknown type"_s);
		}
	}
	return $str({typeStr, ",updateRect="_s, (this->updateRect != nullptr ? $($nc(this->updateRect)->toString()) : "null"_s)});
}

PaintEvent::PaintEvent() {
}

$Class* PaintEvent::load$($String* name, bool initialize) {
	$loadClass(PaintEvent, name, initialize, &_PaintEvent_ClassInfo_, allocate$PaintEvent);
	return class$;
}

$Class* PaintEvent::class$ = nullptr;

		} // event
	} // awt
} // java