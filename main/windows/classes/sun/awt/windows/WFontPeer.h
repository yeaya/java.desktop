#ifndef _sun_awt_windows_WFontPeer_h_
#define _sun_awt_windows_WFontPeer_h_
//$ class sun.awt.windows.WFontPeer
//$ extends sun.awt.PlatformFont

#include <sun/awt/PlatformFont.h>

namespace sun {
	namespace awt {
		namespace windows {

class WFontPeer : public ::sun::awt::PlatformFont {
	$class(WFontPeer, 0, ::sun::awt::PlatformFont)
public:
	WFontPeer();
	void init$($String* name, int32_t style);
	virtual char16_t getMissingGlyphCharacter() override;
	static void initIDs();
	$String* textComponentFontName = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WFontPeer_h_