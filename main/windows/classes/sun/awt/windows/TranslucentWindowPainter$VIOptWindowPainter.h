#ifndef _sun_awt_windows_TranslucentWindowPainter$VIOptWindowPainter_h_
#define _sun_awt_windows_TranslucentWindowPainter$VIOptWindowPainter_h_
//$ class sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter
//$ extends sun.awt.windows.TranslucentWindowPainter$VIWindowPainter

#include <sun/awt/windows/TranslucentWindowPainter$VIWindowPainter.h>

namespace java {
	namespace awt {
		class Image;
	}
}
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

class TranslucentWindowPainter$VIOptWindowPainter : public ::sun::awt::windows::TranslucentWindowPainter$VIWindowPainter {
	$class(TranslucentWindowPainter$VIOptWindowPainter, $NO_CLASS_INIT, ::sun::awt::windows::TranslucentWindowPainter$VIWindowPainter)
public:
	TranslucentWindowPainter$VIOptWindowPainter();
	void init$(::sun::awt::windows::WWindowPeer* peer);
	virtual bool update(::java::awt::Image* bb) override;
	virtual bool updateWindowAccel(int64_t psdops, int32_t w, int32_t h) {return false;}
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_TranslucentWindowPainter$VIOptWindowPainter_h_