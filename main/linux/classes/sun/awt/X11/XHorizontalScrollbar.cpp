#include <sun/awt/X11/XHorizontalScrollbar.h>

#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <sun/awt/X11/XScrollbar.h>
#include <sun/awt/X11/XScrollbarClient.h>
#include <jcpp.h>

#undef ALIGNMENT_HORIZONTAL

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XScrollbar = ::sun::awt::X11::XScrollbar;
using $XScrollbarClient = ::sun::awt::X11::XScrollbarClient;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XHorizontalScrollbar_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XScrollbarClient;)V", nullptr, $PUBLIC, $method(static_cast<void(XHorizontalScrollbar::*)($XScrollbarClient*)>(&XHorizontalScrollbar::init$))},
	{"beforeThumb", "(II)Z", nullptr, 0},
	{"getThumbArea", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"rebuildArrows", "()V", nullptr, $PROTECTED},
	{"setSize", "(II)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XHorizontalScrollbar_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XHorizontalScrollbar",
	"sun.awt.X11.XScrollbar",
	nullptr,
	nullptr,
	_XHorizontalScrollbar_MethodInfo_
};

$Object* allocate$XHorizontalScrollbar($Class* clazz) {
	return $of($alloc(XHorizontalScrollbar));
}

void XHorizontalScrollbar::init$($XScrollbarClient* sb) {
	$XScrollbar::init$($XScrollbar::ALIGNMENT_HORIZONTAL, sb);
}

void XHorizontalScrollbar::setSize(int32_t width, int32_t height) {
	$XScrollbar::setSize(width, height);
	this->barWidth = height;
	this->barLength = width;
	calculateArrowWidth();
	rebuildArrows();
}

void XHorizontalScrollbar::rebuildArrows() {
	$set(this, firstArrow, createArrowShape(false, true));
	$set(this, secondArrow, createArrowShape(false, false));
}

bool XHorizontalScrollbar::beforeThumb(int32_t x, int32_t y) {
	$var($Rectangle, pos, calculateThumbRect());
	return (x < $nc(pos)->x);
}

$Rectangle* XHorizontalScrollbar::getThumbArea() {
	int32_t var$0 = getArrowAreaWidth();
	return $new($Rectangle, var$0, 2, this->width - 2 * getArrowAreaWidth(), this->height - 4);
}

XHorizontalScrollbar::XHorizontalScrollbar() {
}

$Class* XHorizontalScrollbar::load$($String* name, bool initialize) {
	$loadClass(XHorizontalScrollbar, name, initialize, &_XHorizontalScrollbar_ClassInfo_, allocate$XHorizontalScrollbar);
	return class$;
}

$Class* XHorizontalScrollbar::class$ = nullptr;

		} // X11
	} // awt
} // sun