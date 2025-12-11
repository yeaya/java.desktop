#ifndef _sun_awt_X11_XWINProtocol_h_
#define _sun_awt_X11_XWINProtocol_h_
//$ class sun.awt.X11.XWINProtocol
//$ extends sun.awt.X11.XProtocol
//$ implements sun.awt.X11.XStateProtocol,sun.awt.X11.XLayerProtocol

#include <sun/awt/X11/XLayerProtocol.h>
#include <sun/awt/X11/XProtocol.h>
#include <sun/awt/X11/XStateProtocol.h>

#pragma push_macro("WIN_LAYER_NORMAL")
#undef WIN_LAYER_NORMAL
#pragma push_macro("WIN_LAYER_ONTOP")
#undef WIN_LAYER_ONTOP
#pragma push_macro("WIN_STATE_HIDDEN")
#undef WIN_STATE_HIDDEN
#pragma push_macro("WIN_STATE_MAXIMIZED_HORIZ")
#undef WIN_STATE_MAXIMIZED_HORIZ
#pragma push_macro("WIN_STATE_MAXIMIZED_VERT")
#undef WIN_STATE_MAXIMIZED_VERT
#pragma push_macro("WIN_STATE_MINIMIZED")
#undef WIN_STATE_MINIMIZED
#pragma push_macro("WIN_STATE_SHADED")
#undef WIN_STATE_SHADED
#pragma push_macro("WIN_STATE_STICKY")
#undef WIN_STATE_STICKY
#pragma push_macro("XA_WIN_LAYER")
#undef XA_WIN_LAYER
#pragma push_macro("XA_WIN_PROTOCOLS")
#undef XA_WIN_PROTOCOLS
#pragma push_macro("XA_WIN_STATE")
#undef XA_WIN_STATE
#pragma push_macro("XA_WIN_SUPPORTING_WM_CHECK")
#undef XA_WIN_SUPPORTING_WM_CHECK

namespace sun {
	namespace awt {
		namespace X11 {
			class XAtom;
			class XPropertyEvent;
			class XWindowPeer;
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

class XWINProtocol : public ::sun::awt::X11::XProtocol, public ::sun::awt::X11::XStateProtocol, public ::sun::awt::X11::XLayerProtocol {
	$class(XWINProtocol, 0, ::sun::awt::X11::XProtocol, ::sun::awt::X11::XStateProtocol, ::sun::awt::X11::XLayerProtocol)
public:
	XWINProtocol();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool active();
	virtual void detect();
	virtual bool doLayerProtocol();
	virtual bool doStateProtocol();
	virtual int32_t getState(::sun::awt::X11::XWindowPeer* window) override;
	virtual bool isStateChange(::sun::awt::X11::XPropertyEvent* e) override;
	virtual void setLayer(::sun::awt::X11::XWindowPeer* window, int32_t layer) override;
	virtual void setState(::sun::awt::X11::XWindowPeer* window, int32_t state) override;
	virtual bool supportsLayer(int32_t layer) override;
	virtual bool supportsState(int32_t state) override;
	virtual $String* toString() override;
	virtual void unshadeKludge(::sun::awt::X11::XWindowPeer* window) override;
	static ::sun::util::logging::PlatformLogger* log;
	::sun::awt::X11::XAtom* XA_WIN_SUPPORTING_WM_CHECK = nullptr;
	::sun::awt::X11::XAtom* XA_WIN_PROTOCOLS = nullptr;
	::sun::awt::X11::XAtom* XA_WIN_STATE = nullptr;
	::sun::awt::X11::XAtom* XA_WIN_LAYER = nullptr;
	static const int32_t WIN_STATE_STICKY = 1; // (1 << 0)
	static const int32_t WIN_STATE_MINIMIZED = 2; // (1 << 1)
	static const int32_t WIN_STATE_MAXIMIZED_VERT = 4; // (1 << 2)
	static const int32_t WIN_STATE_MAXIMIZED_HORIZ = 8; // (1 << 3)
	static const int32_t WIN_STATE_HIDDEN = 16; // (1 << 4)
	static const int32_t WIN_STATE_SHADED = 32; // (1 << 5)
	static const int32_t WIN_LAYER_ONTOP = 6;
	static const int32_t WIN_LAYER_NORMAL = 4;
	int64_t WinWindow = 0;
	bool supportChecked = false;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("WIN_LAYER_NORMAL")
#pragma pop_macro("WIN_LAYER_ONTOP")
#pragma pop_macro("WIN_STATE_HIDDEN")
#pragma pop_macro("WIN_STATE_MAXIMIZED_HORIZ")
#pragma pop_macro("WIN_STATE_MAXIMIZED_VERT")
#pragma pop_macro("WIN_STATE_MINIMIZED")
#pragma pop_macro("WIN_STATE_SHADED")
#pragma pop_macro("WIN_STATE_STICKY")
#pragma pop_macro("XA_WIN_LAYER")
#pragma pop_macro("XA_WIN_PROTOCOLS")
#pragma pop_macro("XA_WIN_STATE")
#pragma pop_macro("XA_WIN_SUPPORTING_WM_CHECK")

#endif // _sun_awt_X11_XWINProtocol_h_