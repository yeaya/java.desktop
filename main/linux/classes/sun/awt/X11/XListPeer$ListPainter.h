#ifndef _sun_awt_X11_XListPeer$ListPainter_h_
#define _sun_awt_X11_XListPeer$ListPainter_h_
//$ class sun.awt.X11.XListPeer$ListPainter
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class VolatileImage;
		}
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XListPeer;
			class XScrollbar;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XListPeer$ListPainter : public ::java::lang::Object {
	$class(XListPeer$ListPainter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XListPeer$ListPainter();
	void init$(::sun::awt::X11::XListPeer* this$0);
	bool createBuffer();
	::java::awt::Color* getDisabledColor();
	::java::awt::Color* getListBackground();
	::java::awt::Color* getListForeground();
	virtual void invalidate();
	void paint(::java::awt::Graphics* listG, int32_t firstItem, int32_t lastItem, int32_t options);
	void paint(::java::awt::Graphics* listG, int32_t firstItem, int32_t lastItem, int32_t options, ::java::awt::Rectangle* source, ::java::awt::Point* distance);
	void paintBackground(::java::awt::Graphics* g);
	void paintFocus(::java::awt::Graphics* g, int32_t options);
	virtual void paintHorScrollbar(::java::awt::Graphics* g, bool paintAll);
	void paintItem(::java::awt::Graphics* g, int32_t index);
	void paintItems(::java::awt::Graphics* g, int32_t firstItem, int32_t lastItem, int32_t options);
	virtual void paintScrollBar(::sun::awt::X11::XScrollbar* scr, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height, bool paintAll);
	virtual void paintVerScrollbar(::java::awt::Graphics* g, bool paintAll);
	::sun::awt::X11::XListPeer* this$0 = nullptr;
	::java::awt::image::VolatileImage* buffer = nullptr;
	$Array<::java::awt::Color>* colors = nullptr;
	::java::awt::Rectangle* prevFocusRect = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XListPeer$ListPainter_h_