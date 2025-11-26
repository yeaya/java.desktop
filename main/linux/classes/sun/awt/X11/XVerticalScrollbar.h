#ifndef _sun_awt_X11_XVerticalScrollbar_h_
#define _sun_awt_X11_XVerticalScrollbar_h_
//$ class sun.awt.X11.XVerticalScrollbar
//$ extends sun.awt.X11.XScrollbar

#include <sun/awt/X11/XScrollbar.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XScrollbarClient;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XVerticalScrollbar : public ::sun::awt::X11::XScrollbar {
	$class(XVerticalScrollbar, $NO_CLASS_INIT, ::sun::awt::X11::XScrollbar)
public:
	XVerticalScrollbar();
	void init$(::sun::awt::X11::XScrollbarClient* sb);
	virtual bool beforeThumb(int32_t x, int32_t y) override;
	virtual ::java::awt::Rectangle* getThumbArea() override;
	virtual void rebuildArrows() override;
	virtual void setSize(int32_t width, int32_t height) override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XVerticalScrollbar_h_