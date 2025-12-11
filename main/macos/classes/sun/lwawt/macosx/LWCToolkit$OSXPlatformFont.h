#ifndef _sun_lwawt_macosx_LWCToolkit$OSXPlatformFont_h_
#define _sun_lwawt_macosx_LWCToolkit$OSXPlatformFont_h_
//$ class sun.lwawt.macosx.LWCToolkit$OSXPlatformFont
//$ extends sun.awt.PlatformFont

#include <sun/awt/PlatformFont.h>

namespace sun {
	namespace lwawt {
		namespace macosx {
			class LWCToolkit;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class LWCToolkit$OSXPlatformFont : public ::sun::awt::PlatformFont {
	$class(LWCToolkit$OSXPlatformFont, $NO_CLASS_INIT, ::sun::awt::PlatformFont)
public:
	LWCToolkit$OSXPlatformFont();
	void init$(::sun::lwawt::macosx::LWCToolkit* this$0, $String* name, int32_t style);
	virtual char16_t getMissingGlyphCharacter() override;
	::sun::lwawt::macosx::LWCToolkit* this$0 = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_LWCToolkit$OSXPlatformFont_h_