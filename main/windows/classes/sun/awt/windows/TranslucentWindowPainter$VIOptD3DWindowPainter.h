#ifndef _sun_awt_windows_TranslucentWindowPainter$VIOptD3DWindowPainter_h_
#define _sun_awt_windows_TranslucentWindowPainter$VIOptD3DWindowPainter_h_
//$ class sun.awt.windows.TranslucentWindowPainter$VIOptD3DWindowPainter
//$ extends sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter

#include <sun/awt/windows/TranslucentWindowPainter$VIOptWindowPainter.h>

namespace sun {
	namespace awt {
		namespace windows {
			class WWindowPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class TranslucentWindowPainter$VIOptD3DWindowPainter : public ::sun::awt::windows::TranslucentWindowPainter$VIOptWindowPainter {
	$class(TranslucentWindowPainter$VIOptD3DWindowPainter, $NO_CLASS_INIT, ::sun::awt::windows::TranslucentWindowPainter$VIOptWindowPainter)
public:
	TranslucentWindowPainter$VIOptD3DWindowPainter();
	void init$(::sun::awt::windows::WWindowPeer* peer);
	virtual bool updateWindowAccel(int64_t psdops, int32_t w, int32_t h) override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_TranslucentWindowPainter$VIOptD3DWindowPainter_h_