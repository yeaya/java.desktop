#ifndef _sun_awt_X11_XLayerProtocol_h_
#define _sun_awt_X11_XLayerProtocol_h_
//$ interface sun.awt.X11.XLayerProtocol
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LAYER_ALWAYS_ON_TOP")
#undef LAYER_ALWAYS_ON_TOP
#pragma push_macro("LAYER_NORMAL")
#undef LAYER_NORMAL

namespace sun {
	namespace awt {
		namespace X11 {
			class XWindowPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XLayerProtocol : public ::java::lang::Object {
	$interface(XLayerProtocol, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void setLayer(::sun::awt::X11::XWindowPeer* window, int32_t layer) {}
	virtual bool supportsLayer(int32_t layer) {return false;}
	static const int32_t LAYER_NORMAL = 0;
	static const int32_t LAYER_ALWAYS_ON_TOP = 1;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("LAYER_ALWAYS_ON_TOP")
#pragma pop_macro("LAYER_NORMAL")

#endif // _sun_awt_X11_XLayerProtocol_h_