#ifndef _sun_awt_windows_WDefaultFontCharset_h_
#define _sun_awt_windows_WDefaultFontCharset_h_
//$ class sun.awt.windows.WDefaultFontCharset
//$ extends sun.awt.AWTCharset

#include <sun/awt/AWTCharset.h>

namespace java {
	namespace nio {
		namespace charset {
			class CharsetEncoder;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WDefaultFontCharset : public ::sun::awt::AWTCharset {
	$class(WDefaultFontCharset, 0, ::sun::awt::AWTCharset)
public:
	WDefaultFontCharset();
	void init$($String* name);
	bool canConvert(char16_t ch);
	static void initIDs();
	virtual ::java::nio::charset::CharsetEncoder* newEncoder() override;
	$String* fontName = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WDefaultFontCharset_h_