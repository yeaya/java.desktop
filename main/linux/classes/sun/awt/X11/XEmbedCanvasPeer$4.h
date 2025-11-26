#ifndef _sun_awt_X11_XEmbedCanvasPeer$4_h_
#define _sun_awt_X11_XEmbedCanvasPeer$4_h_
//$ class sun.awt.X11.XEmbedCanvasPeer$4
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

class XEmbedCanvasPeer$4 : public ::java::lang::Runnable {
	$class(XEmbedCanvasPeer$4, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XEmbedCanvasPeer$4();
	void init$(::sun::awt::X11::XEmbedCanvasPeer* this$0, int64_t val$keysym, int64_t val$modifiers);
	virtual void run() override;
	::sun::awt::X11::XEmbedCanvasPeer* this$0 = nullptr;
	int64_t val$modifiers = 0;
	int64_t val$keysym = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XEmbedCanvasPeer$4_h_