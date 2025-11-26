#ifndef _sun_awt_X11_XScrollRepeater_h_
#define _sun_awt_X11_XScrollRepeater_h_
//$ class sun.awt.X11.XScrollRepeater
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XScrollbar;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XScrollRepeater : public ::java::lang::Runnable {
	$class(XScrollRepeater, 0, ::java::lang::Runnable)
public:
	XScrollRepeater();
	void init$(::sun::awt::X11::XScrollbar* sb);
	virtual void run() override;
	virtual void setScrollbar(::sun::awt::X11::XScrollbar* sb);
	virtual void start();
	virtual void stop();
	static int32_t beginPause;
	static int32_t repeatPause;
	::sun::awt::X11::XScrollbar* sb = nullptr;
	bool newScroll = false;
	bool shouldSkip = false;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XScrollRepeater_h_