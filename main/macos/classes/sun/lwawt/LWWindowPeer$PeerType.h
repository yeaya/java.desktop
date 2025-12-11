#ifndef _sun_lwawt_LWWindowPeer$PeerType_h_
#define _sun_lwawt_LWWindowPeer$PeerType_h_
//$ class sun.lwawt.LWWindowPeer$PeerType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("DIALOG")
#undef DIALOG
#pragma push_macro("EMBEDDED_FRAME")
#undef EMBEDDED_FRAME
#pragma push_macro("FRAME")
#undef FRAME
#pragma push_macro("LW_FRAME")
#undef LW_FRAME
#pragma push_macro("SIMPLEWINDOW")
#undef SIMPLEWINDOW
#pragma push_macro("VIEW_EMBEDDED_FRAME")
#undef VIEW_EMBEDDED_FRAME

namespace sun {
	namespace lwawt {

class LWWindowPeer$PeerType : public ::java::lang::Enum {
	$class(LWWindowPeer$PeerType, 0, ::java::lang::Enum)
public:
	LWWindowPeer$PeerType();
	static $Array<::sun::lwawt::LWWindowPeer$PeerType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::lwawt::LWWindowPeer$PeerType* valueOf($String* name);
	static $Array<::sun::lwawt::LWWindowPeer$PeerType>* values();
	static ::sun::lwawt::LWWindowPeer$PeerType* SIMPLEWINDOW;
	static ::sun::lwawt::LWWindowPeer$PeerType* FRAME;
	static ::sun::lwawt::LWWindowPeer$PeerType* DIALOG;
	static ::sun::lwawt::LWWindowPeer$PeerType* EMBEDDED_FRAME;
	static ::sun::lwawt::LWWindowPeer$PeerType* VIEW_EMBEDDED_FRAME;
	static ::sun::lwawt::LWWindowPeer$PeerType* LW_FRAME;
	static $Array<::sun::lwawt::LWWindowPeer$PeerType>* $VALUES;
};

	} // lwawt
} // sun

#pragma pop_macro("DIALOG")
#pragma pop_macro("EMBEDDED_FRAME")
#pragma pop_macro("FRAME")
#pragma pop_macro("LW_FRAME")
#pragma pop_macro("SIMPLEWINDOW")
#pragma pop_macro("VIEW_EMBEDDED_FRAME")

#endif // _sun_lwawt_LWWindowPeer$PeerType_h_