#ifndef _sun_awt_X11_XEmbedCanvasPeer$9_h_
#define _sun_awt_X11_XEmbedCanvasPeer$9_h_
//$ class sun.awt.X11.XEmbedCanvasPeer$9
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace X11 {
			class XEmbedCanvasPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XEmbedCanvasPeer$9 : public ::java::lang::Runnable {
	$class(XEmbedCanvasPeer$9, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XEmbedCanvasPeer$9();
	void init$(::sun::awt::X11::XEmbedCanvasPeer* this$0);
	virtual void run() override;
	::sun::awt::X11::XEmbedCanvasPeer* this$0 = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XEmbedCanvasPeer$9_h_