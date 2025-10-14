#ifndef _sun_awt_PlatformFont_h_
#define _sun_awt_PlatformFont_h_
//$ class sun.awt.PlatformFont
//$ extends java.awt.peer.FontPeer

#include <java/awt/peer/FontPeer.h>
#include <java/lang/Array.h>

#pragma push_macro("FONTCACHEMASK")
#undef FONTCACHEMASK
#pragma push_macro("FONTCACHESIZE")
#undef FONTCACHESIZE

namespace sun {
	namespace awt {
		class CharsetString;
		class FontConfiguration;
		class FontDescriptor;
	}
}

namespace sun {
	namespace awt {

class $export PlatformFont : public ::java::awt::peer::FontPeer {
	$class(PlatformFont, 0, ::java::awt::peer::FontPeer)
public:
	PlatformFont();
	void init$($String* name, int32_t style);
	$ObjectArray* getFontCache();
	virtual char16_t getMissingGlyphCharacter() {return 0;}
	static void initIDs();
	virtual $ObjectArray* makeConvertedMultiFontChars($chars* data, int32_t start, int32_t len);
	virtual $ObjectArray* makeConvertedMultiFontString($String* str);
	virtual $Array<::sun::awt::CharsetString>* makeMultiCharsetString($String* str);
	virtual $Array<::sun::awt::CharsetString>* makeMultiCharsetString($String* str, bool allowdefault);
	virtual $Array<::sun::awt::CharsetString>* makeMultiCharsetString($chars* str, int32_t offset, int32_t len);
	virtual $Array<::sun::awt::CharsetString>* makeMultiCharsetString($chars* str, int32_t offset, int32_t len, bool allowDefault);
	virtual bool mightHaveMultiFontMetrics();
	$Array<::sun::awt::FontDescriptor>* componentFonts = nullptr;
	char16_t defaultChar = 0;
	::sun::awt::FontConfiguration* fontConfig = nullptr;
	::sun::awt::FontDescriptor* defaultFont = nullptr;
	$String* familyName = nullptr;
	$ObjectArray* fontCache = nullptr;
	static int32_t FONTCACHESIZE;
	static int32_t FONTCACHEMASK;
	static $String* osVersion;
};

	} // awt
} // sun

#pragma pop_macro("FONTCACHEMASK")
#pragma pop_macro("FONTCACHESIZE")

#endif // _sun_awt_PlatformFont_h_