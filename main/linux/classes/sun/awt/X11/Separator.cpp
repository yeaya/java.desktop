#include <sun/awt/X11/Separator.h>

#include <java/awt/Canvas.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $Canvas = ::java::awt::Canvas;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _Separator_FieldInfo_[] = {
	{"HORIZONTAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Separator, HORIZONTAL)},
	{"VERTICAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Separator, VERTICAL)},
	{"orientation", "I", nullptr, 0, $field(Separator, orientation)},
	{}
};

$MethodInfo _Separator_MethodInfo_[] = {
	{"<init>", "(III)V", nullptr, $PUBLIC, $method(static_cast<void(Separator::*)(int32_t,int32_t,int32_t)>(&Separator::init$))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Separator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.Separator",
	"java.awt.Canvas",
	nullptr,
	_Separator_FieldInfo_,
	_Separator_MethodInfo_
};

$Object* allocate$Separator($Class* clazz) {
	return $of($alloc(Separator));
}

void Separator::init$(int32_t length, int32_t thickness, int32_t orient) {
	$Canvas::init$();
	this->orientation = orient;
	if (orient == Separator::HORIZONTAL) {
		resize(length, thickness);
	} else {
		resize(thickness, length);
	}
}

void Separator::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	int32_t x1 = 0;
	int32_t y1 = 0;
	int32_t x2 = 0;
	int32_t y2 = 0;
	$var($Rectangle, bbox, bounds());
	$var($Color, c, getBackground());
	$var($Color, brighter, $nc(c)->brighter());
	$var($Color, darker, c->darker());
	if (this->orientation == Separator::HORIZONTAL) {
		x1 = 0;
		x2 = $nc(bbox)->width - 1;
		y1 = (y2 = bbox->height / 2 - 1);
	} else {
		x1 = (x2 = $nc(bbox)->width / 2 - 1);
		y1 = 0;
		y2 = bbox->height - 1;
	}
	$nc(g)->setColor(darker);
	g->drawLine(x1, y2, x2, y2);
	g->setColor(brighter);
	if (this->orientation == Separator::HORIZONTAL) {
		g->drawLine(x1, y2 + 1, x2, y2 + 1);
	} else {
		g->drawLine(x1 + 1, y2, x2 + 1, y2);
	}
}

Separator::Separator() {
}

$Class* Separator::load$($String* name, bool initialize) {
	$loadClass(Separator, name, initialize, &_Separator_ClassInfo_, allocate$Separator);
	return class$;
}

$Class* Separator::class$ = nullptr;

		} // X11
	} // awt
} // sun