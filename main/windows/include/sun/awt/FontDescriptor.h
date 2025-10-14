#ifndef _sun_awt_FontDescriptor_h_
#define _sun_awt_FontDescriptor_h_
//$ class sun.awt.FontDescriptor
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace nio {
		namespace charset {
			class CharsetEncoder;
		}
	}
}

namespace sun {
	namespace awt {

class $import FontDescriptor : public ::java::lang::Cloneable {
	$class(FontDescriptor, 0, ::java::lang::Cloneable)
public:
	FontDescriptor();
	void init$($String* nativeName, ::java::nio::charset::CharsetEncoder* encoder, $ints* exclusionRanges);
	virtual $ints* getExclusionRanges();
	virtual ::java::nio::charset::CharsetEncoder* getFontCharsetEncoder();
	virtual $String* getFontCharsetName();
	virtual $String* getNativeName();
	static void initIDs();
	virtual bool isExcluded(char16_t ch);
	virtual $String* toString() override;
	virtual bool useUnicode();
	$String* nativeName = nullptr;
	::java::nio::charset::CharsetEncoder* encoder = nullptr;
	$String* charsetName = nullptr;
	$ints* exclusionRanges = nullptr;
	::java::nio::charset::CharsetEncoder* unicodeEncoder = nullptr;
	bool useUnicode$ = false;
	static bool isLE;
};

	} // awt
} // sun

#endif // _sun_awt_FontDescriptor_h_