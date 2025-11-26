#ifndef _sun_awt_X11_XTrayIconPeer$XTrayIconEmbeddedFrame_h_
#define _sun_awt_X11_XTrayIconPeer$XTrayIconEmbeddedFrame_h_
//$ class sun.awt.X11.XTrayIconPeer$XTrayIconEmbeddedFrame
//$ extends sun.awt.X11.XEmbeddedFrame

#include <sun/awt/X11/XEmbeddedFrame.h>

namespace sun {
	namespace awt {
		namespace X11 {

class XTrayIconPeer$XTrayIconEmbeddedFrame : public ::sun::awt::X11::XEmbeddedFrame {
	$class(XTrayIconPeer$XTrayIconEmbeddedFrame, $NO_CLASS_INIT, ::sun::awt::X11::XEmbeddedFrame)
public:
	XTrayIconPeer$XTrayIconEmbeddedFrame();
	using ::sun::awt::X11::XEmbeddedFrame::add;
	using ::sun::awt::X11::XEmbeddedFrame::getMousePosition;
	void init$();
	virtual void dispose() override;
	using ::sun::awt::X11::XEmbeddedFrame::isFocusCycleRoot;
	virtual bool isResizable() override;
	virtual bool isUndecorated() override;
	using ::sun::awt::X11::XEmbeddedFrame::list;
	virtual void realDispose();
	using ::sun::awt::X11::XEmbeddedFrame::show;
	using ::sun::awt::X11::XEmbeddedFrame::remove;
	using ::sun::awt::X11::XEmbeddedFrame::setCursor;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XTrayIconPeer$XTrayIconEmbeddedFrame_h_