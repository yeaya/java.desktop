#ifndef _sun_awt_X11_XFontPeer_h_
#define _sun_awt_X11_XFontPeer_h_
//$ class sun.awt.X11.XFontPeer
//$ extends sun.awt.PlatformFont

#include <sun/awt/PlatformFont.h>

namespace sun {
	namespace awt {
		namespace X11 {

class XFontPeer : public ::sun::awt::PlatformFont {
	$class(XFontPeer, $NO_CLASS_INIT, ::sun::awt::PlatformFont)
public:
	XFontPeer();
	void init$($String* name, int32_t style);
	virtual char16_t getMissingGlyphCharacter() override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XFontPeer_h_