#ifndef _sun_awt_X11_XScrollbar_h_
#define _sun_awt_X11_XScrollbar_h_
//$ class sun.awt.X11.XScrollbar
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALIGNMENT_HORIZONTAL")
#undef ALIGNMENT_HORIZONTAL
#pragma push_macro("ALIGNMENT_VERTICAL")
#undef ALIGNMENT_VERTICAL
#pragma push_macro("ARROW_IND")
#undef ARROW_IND
#pragma push_macro("MIN_THUMB_H")
#undef MIN_THUMB_H

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Graphics2D;
		class Point;
		class Polygon;
		class Rectangle;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XScrollRepeater;
			class XScrollbarClient;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XScrollbar : public ::java::lang::Object {
	$class(XScrollbar, 0, ::java::lang::Object)
public:
	XScrollbar();
	void init$(int32_t alignment, ::sun::awt::X11::XScrollbarClient* sb);
	virtual bool beforeThumb(int32_t x, int32_t y) {return false;}
	virtual void calculateArrowWidth();
	int32_t calculateCursorOffset(int32_t x, int32_t y);
	virtual ::java::awt::Rectangle* calculateThumbRect();
	virtual ::java::awt::Polygon* createArrowShape(bool vertical, bool up);
	virtual int32_t getArrowAreaWidth();
	virtual int32_t getArrowWidth();
	virtual int32_t getBlockIncrement();
	virtual int32_t getMaximum();
	virtual int32_t getMinimum();
	double getScaleFactor();
	virtual ::java::awt::Rectangle* getThumbArea() {return nullptr;}
	virtual int32_t getUnitIncrement();
	virtual int32_t getValue();
	virtual int32_t getVisibleAmount();
	virtual void handleMouseEvent(int32_t id, int32_t modifiers, int32_t x, int32_t y);
	void handleTrackEvent(int32_t x, int32_t y, bool isAdjusting);
	virtual bool isInArrow(int32_t x, int32_t y);
	virtual bool isInThumb(int32_t x, int32_t y);
	virtual bool needsRepaint();
	virtual void notifyValue(int32_t v);
	virtual void notifyValue(int32_t v, bool isAdjusting);
	virtual void paint(::java::awt::Graphics* g, $Array<::java::awt::Color>* colors, bool paintAll);
	virtual void paintArrows(::java::awt::Graphics2D* g, ::java::awt::Color* background, ::java::awt::Color* darkShadow, ::java::awt::Color* lightShadow);
	virtual void rebuildArrows() {}
	virtual void scroll();
	virtual void setBlockIncrement(int32_t blockSize);
	virtual void setMaximum(int32_t newMaximum);
	virtual void setMinimum(int32_t newMinimum);
	virtual void setMode(int32_t mode);
	virtual void setSize(int32_t width, int32_t height);
	virtual void setUnitIncrement(int32_t unitSize);
	virtual void setValue(int32_t newValue);
	virtual void setValues(int32_t value, int32_t visible, int32_t minimum, int32_t maximum);
	virtual void setValues(int32_t value, int32_t visible, int32_t minimum, int32_t maximum, int32_t unitSize, int32_t blockSize);
	virtual void setVisibleAmount(int32_t newAmount);
	virtual void startScrolling();
	virtual void startScrollingInstance();
	virtual void stopScrollingInstance();
	virtual $String* toString() override;
	static ::sun::util::logging::PlatformLogger* log;
	static ::sun::awt::X11::XScrollRepeater* scroller;
	::sun::awt::X11::XScrollRepeater* i_scroller = nullptr;
	static const int32_t MIN_THUMB_H = 5;
	static const int32_t ARROW_IND = 1;
	::sun::awt::X11::XScrollbarClient* sb = nullptr;
	int32_t val = 0;
	int32_t min = 0;
	int32_t max = 0;
	int32_t vis = 0;
	int32_t line = 0;
	int32_t page = 0;
	bool needsRepaint$ = false;
	bool pressed = false;
	bool dragging = false;
	::java::awt::Polygon* firstArrow = nullptr;
	::java::awt::Polygon* secondArrow = nullptr;
	int32_t width = 0;
	int32_t height = 0;
	int32_t barWidth = 0;
	int32_t barLength = 0;
	int32_t arrowArea = 0;
	int32_t alignment = 0;
	static const int32_t ALIGNMENT_VERTICAL = 1;
	static const int32_t ALIGNMENT_HORIZONTAL = 2;
	int32_t mode = 0;
	::java::awt::Point* thumbOffset = nullptr;
	::java::awt::Rectangle* prevThumb = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("ALIGNMENT_HORIZONTAL")
#pragma pop_macro("ALIGNMENT_VERTICAL")
#pragma pop_macro("ARROW_IND")
#pragma pop_macro("MIN_THUMB_H")

#endif // _sun_awt_X11_XScrollbar_h_