#ifndef _sun_awt_X11_XTextAreaPeer$JavaMouseEventHandler$Pointer$Type_h_
#define _sun_awt_X11_XTextAreaPeer$JavaMouseEventHandler$Pointer$Type_h_
//$ class sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler$Pointer$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BAR")
#undef BAR
#pragma push_macro("BUTTON")
#undef BUTTON
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("TEXT")
#undef TEXT

namespace sun {
	namespace awt {
		namespace X11 {

class XTextAreaPeer$JavaMouseEventHandler$Pointer$Type : public ::java::lang::Enum {
	$class(XTextAreaPeer$JavaMouseEventHandler$Pointer$Type, 0, ::java::lang::Enum)
public:
	XTextAreaPeer$JavaMouseEventHandler$Pointer$Type();
	static $Array<::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type* valueOf($String* name);
	static $Array<::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type>* values();
	static ::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type* NONE;
	static ::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type* TEXT;
	static ::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type* BAR;
	static ::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type* BUTTON;
	static $Array<::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type>* $VALUES;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("BAR")
#pragma pop_macro("BUTTON")
#pragma pop_macro("NONE")
#pragma pop_macro("TEXT")

#endif // _sun_awt_X11_XTextAreaPeer$JavaMouseEventHandler$Pointer$Type_h_