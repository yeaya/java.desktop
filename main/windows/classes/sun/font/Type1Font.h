#ifndef _sun_font_Type1Font_h_
#define _sun_font_Type1Font_h_
//$ class sun.font.Type1Font
//$ extends sun.font.FileFont

#include <sun/font/FileFont.h>

#pragma push_macro("PSEOFTOKEN")
#undef PSEOFTOKEN
#pragma push_macro("PSNAMETOKEN")
#undef PSNAMETOKEN
#pragma push_macro("PSSTRINGTOKEN")
#undef PSSTRINGTOKEN

namespace java {
	namespace lang {
		namespace ref {
			class WeakReference;
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class HashSet;
	}
}
namespace sun {
	namespace font {
		class CharToGlyphMapper;
		class FontScaler;
	}
}

namespace sun {
	namespace font {

class Type1Font : public ::sun::font::FileFont {
	$class(Type1Font, 0, ::sun::font::FileFont)
public:
	Type1Font();
	using ::sun::font::FileFont::getFontMetrics;
	void init$($String* platname, Object$* nativeNames);
	void init$($String* platname, Object$* nativeNames, bool createdCopy);
	virtual void close() override;
	$String* expandAbbreviation($String* abbr);
	$String* expandName($String* s, bool tryExpandAbbreviations);
	$String* fullName2FamilyName($String* name);
	::java::nio::ByteBuffer* getBuffer();
	virtual int32_t getFileSize();
	virtual int32_t getGlyphCode(char16_t charCode);
	virtual ::sun::font::CharToGlyphMapper* getMapper() override;
	virtual int32_t getMissingGlyphCode() override;
	virtual int32_t getNumGlyphs() override;
	virtual $String* getPostscriptName() override;
	virtual ::sun::font::FontScaler* getScaler() override;
	$String* getSimpleToken(::java::nio::ByteBuffer* bb);
	$String* getString(::java::nio::ByteBuffer* bb);
	void initNames(::java::nio::ByteBuffer* bb);
	bool isStyleToken($String* token);
	int32_t nextCapitalLetter($String* s, int32_t off);
	int32_t nextTokenType(::java::nio::ByteBuffer* bb);
	$String* psName2FamilyName($String* name);
	$String* psName2FullName($String* name);
	virtual ::java::nio::ByteBuffer* readBlock(int32_t offset, int32_t length) override;
	virtual void readFile(::java::nio::ByteBuffer* buffer);
	int8_t skip(::java::nio::ByteBuffer* bb);
	virtual $String* toString() override;
	void verify();
	void verifyPFA(::java::nio::ByteBuffer* bb);
	void verifyPFB(::java::nio::ByteBuffer* bb);
	::java::lang::ref::WeakReference* bufferRef = nullptr;
	$String* psName = nullptr;
	static ::java::util::HashMap* styleAbbreviationsMapping;
	static ::java::util::HashSet* styleNameTokes;
	static const int32_t PSEOFTOKEN = 0;
	static const int32_t PSNAMETOKEN = 1;
	static const int32_t PSSTRINGTOKEN = 2;
};

	} // font
} // sun

#pragma pop_macro("PSEOFTOKEN")
#pragma pop_macro("PSNAMETOKEN")
#pragma pop_macro("PSSTRINGTOKEN")

#endif // _sun_font_Type1Font_h_