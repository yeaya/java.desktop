#ifndef _sun_awt_X11_XIconWindow_h_
#define _sun_awt_X11_XIconWindow_h_
//$ class sun.awt.X11.XIconWindow
//$ extends sun.awt.X11.XBaseWindow

#include <java/lang/Array.h>
#include <sun/awt/X11/XBaseWindow.h>

namespace java {
	namespace awt {
		class Dimension;
		class Image;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XCreateWindowParams;
			class XDecoratedPeer;
			class XIconSize;
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

class XIconWindow : public ::sun::awt::X11::XBaseWindow {
	$class(XIconWindow, 0, ::sun::awt::X11::XBaseWindow)
public:
	XIconWindow();
	void init$(::sun::awt::X11::XDecoratedPeer* parent);
	::java::awt::Dimension* calcIconSize(int32_t widthHint, int32_t heightHint);
	virtual ::java::awt::Dimension* getIconSize(int32_t widthHint, int32_t heightHint);
	$Array<::sun::awt::X11::XIconSize>* getIconSizes();
	virtual void instantPreInit(::sun::awt::X11::XCreateWindowParams* params) override;
	static int32_t paddedwidth(int32_t number, int32_t boundary);
	virtual void replaceImage(::java::awt::Image* img);
	virtual void replaceMask(::java::awt::Image* img);
	virtual void setIconImage(::java::awt::Image* img);
	virtual void setIconImages(::java::util::List* icons);
	static ::sun::util::logging::PlatformLogger* log;
	::sun::awt::X11::XDecoratedPeer* parent = nullptr;
	::java::awt::Dimension* size = nullptr;
	int64_t iconPixmap = 0;
	int64_t iconMask = 0;
	int32_t iconWidth = 0;
	int32_t iconHeight = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XIconWindow_h_