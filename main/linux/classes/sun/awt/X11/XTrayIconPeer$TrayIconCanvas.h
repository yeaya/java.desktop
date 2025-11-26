#ifndef _sun_awt_X11_XTrayIconPeer$TrayIconCanvas_h_
#define _sun_awt_X11_XTrayIconPeer$TrayIconCanvas_h_
//$ class sun.awt.X11.XTrayIconPeer$TrayIconCanvas
//$ extends sun.awt.X11.XTrayIconPeer$IconCanvas

#include <sun/awt/X11/XTrayIconPeer$IconCanvas.h>

namespace java {
	namespace awt {
		class TrayIcon;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XTrayIconPeer$TrayIconCanvas : public ::sun::awt::X11::XTrayIconPeer$IconCanvas {
	$class(XTrayIconPeer$TrayIconCanvas, $NO_CLASS_INIT, ::sun::awt::X11::XTrayIconPeer$IconCanvas)
public:
	XTrayIconPeer$TrayIconCanvas();
	void init$(::java::awt::TrayIcon* target, int32_t width, int32_t height);
	virtual void dispose() override;
	virtual void repaintImage(bool doClear) override;
	::java::awt::TrayIcon* target = nullptr;
	bool autosize = false;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTrayIconPeer$TrayIconCanvas_h_