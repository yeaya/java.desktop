#ifndef _sun_awt_X11_XDnDConstants_h_
#define _sun_awt_X11_XDnDConstants_h_
//$ class sun.awt.X11.XDnDConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("XDND_ACCEPT_DROP_FLAG")
#undef XDND_ACCEPT_DROP_FLAG
#pragma push_macro("XDND_DATA_TYPES_BIT")
#undef XDND_DATA_TYPES_BIT
#pragma push_macro("XDND_MIN_PROTOCOL_VERSION")
#undef XDND_MIN_PROTOCOL_VERSION
#pragma push_macro("XDND_PROTOCOL_MASK")
#undef XDND_PROTOCOL_MASK
#pragma push_macro("XDND_PROTOCOL_SHIFT")
#undef XDND_PROTOCOL_SHIFT
#pragma push_macro("XDND_PROTOCOL_VERSION")
#undef XDND_PROTOCOL_VERSION

namespace sun {
	namespace awt {
		namespace X11 {
			class XAtom;
			class XSelection;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XDnDConstants : public ::java::lang::Object {
	$class(XDnDConstants, 0, ::java::lang::Object)
public:
	XDnDConstants();
	void init$();
	static int32_t getJavaActionForXDnDAction(int64_t xdndAction);
	static int64_t getXDnDActionForJavaAction(int32_t javaAction);
	static ::sun::awt::X11::XAtom* XA_XdndActionCopy;
	static ::sun::awt::X11::XAtom* XA_XdndActionMove;
	static ::sun::awt::X11::XAtom* XA_XdndActionLink;
	static ::sun::awt::X11::XAtom* XA_XdndActionList;
	static ::sun::awt::X11::XAtom* XA_XdndTypeList;
	static ::sun::awt::X11::XAtom* XA_XdndAware;
	static ::sun::awt::X11::XAtom* XA_XdndProxy;
	static ::sun::awt::X11::XAtom* XA_XdndSelection;
	static ::sun::awt::X11::XAtom* XA_XdndEnter;
	static ::sun::awt::X11::XAtom* XA_XdndPosition;
	static ::sun::awt::X11::XAtom* XA_XdndLeave;
	static ::sun::awt::X11::XAtom* XA_XdndDrop;
	static ::sun::awt::X11::XAtom* XA_XdndStatus;
	static ::sun::awt::X11::XAtom* XA_XdndFinished;
	static ::sun::awt::X11::XSelection* XDnDSelection;
	static const int32_t XDND_MIN_PROTOCOL_VERSION = 3;
	static const int32_t XDND_PROTOCOL_VERSION = 5;
	static const int32_t XDND_PROTOCOL_MASK = 0xFF000000;
	static const int32_t XDND_PROTOCOL_SHIFT = 24;
	static const int32_t XDND_DATA_TYPES_BIT = 1;
	static const int32_t XDND_ACCEPT_DROP_FLAG = 1;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("XDND_ACCEPT_DROP_FLAG")
#pragma pop_macro("XDND_DATA_TYPES_BIT")
#pragma pop_macro("XDND_MIN_PROTOCOL_VERSION")
#pragma pop_macro("XDND_PROTOCOL_MASK")
#pragma pop_macro("XDND_PROTOCOL_SHIFT")
#pragma pop_macro("XDND_PROTOCOL_VERSION")

#endif // _sun_awt_X11_XDnDConstants_h_