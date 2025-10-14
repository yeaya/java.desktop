#ifndef _java_awt_font_NumericShaper_h_
#define _java_awt_font_NumericShaper_h_
//$ class java.awt.font.NumericShaper
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("ALL_RANGES")
#undef ALL_RANGES
#pragma push_macro("ARABIC")
#undef ARABIC
#pragma push_macro("ARABIC_KEY")
#undef ARABIC_KEY
#pragma push_macro("BENGALI")
#undef BENGALI
#pragma push_macro("BENGALI_KEY")
#undef BENGALI_KEY
#pragma push_macro("BSEARCH_THRESHOLD")
#undef BSEARCH_THRESHOLD
#pragma push_macro("CONTEXTUAL_MASK")
#undef CONTEXTUAL_MASK
#pragma push_macro("DEVANAGARI")
#undef DEVANAGARI
#pragma push_macro("DEVANAGARI_KEY")
#undef DEVANAGARI_KEY
#pragma push_macro("EASTERN_ARABIC")
#undef EASTERN_ARABIC
#pragma push_macro("EASTERN_ARABIC_KEY")
#undef EASTERN_ARABIC_KEY
#pragma push_macro("ETHIOPIC")
#undef ETHIOPIC
#pragma push_macro("ETHIOPIC_KEY")
#undef ETHIOPIC_KEY
#pragma push_macro("EUROPEAN")
#undef EUROPEAN
#pragma push_macro("EUROPEAN_KEY")
#undef EUROPEAN_KEY
#pragma push_macro("GUJARATI")
#undef GUJARATI
#pragma push_macro("GUJARATI_KEY")
#undef GUJARATI_KEY
#pragma push_macro("GURMUKHI")
#undef GURMUKHI
#pragma push_macro("GURMUKHI_KEY")
#undef GURMUKHI_KEY
#pragma push_macro("KANNADA")
#undef KANNADA
#pragma push_macro("KANNADA_KEY")
#undef KANNADA_KEY
#pragma push_macro("KHMER")
#undef KHMER
#pragma push_macro("KHMER_KEY")
#undef KHMER_KEY
#pragma push_macro("LAO")
#undef LAO
#pragma push_macro("LAO_KEY")
#undef LAO_KEY
#pragma push_macro("MALAYALAM")
#undef MALAYALAM
#pragma push_macro("MALAYALAM_KEY")
#undef MALAYALAM_KEY
#pragma push_macro("MONGOLIAN")
#undef MONGOLIAN
#pragma push_macro("MONGOLIAN_KEY")
#undef MONGOLIAN_KEY
#pragma push_macro("MYANMAR")
#undef MYANMAR
#pragma push_macro("MYANMAR_KEY")
#undef MYANMAR_KEY
#pragma push_macro("NUM_KEYS")
#undef NUM_KEYS
#pragma push_macro("ORIYA")
#undef ORIYA
#pragma push_macro("ORIYA_KEY")
#undef ORIYA_KEY
#pragma push_macro("TAMIL")
#undef TAMIL
#pragma push_macro("TAMIL_KEY")
#undef TAMIL_KEY
#pragma push_macro("TELUGU")
#undef TELUGU
#pragma push_macro("TELUGU_KEY")
#undef TELUGU_KEY
#pragma push_macro("THAI")
#undef THAI
#pragma push_macro("THAI_KEY")
#undef THAI_KEY
#pragma push_macro("TIBETAN")
#undef TIBETAN
#pragma push_macro("TIBETAN_KEY")
#undef TIBETAN_KEY

namespace java {
	namespace awt {
		namespace font {
			class NumericShaper$Range;
		}
	}
}
namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace awt {
		namespace font {

class $import NumericShaper : public ::java::io::Serializable {
	$class(NumericShaper, 0, ::java::io::Serializable)
public:
	NumericShaper();
	void init$(int32_t key, int32_t mask);
	void init$(::java::awt::font::NumericShaper$Range* defaultContext, ::java::util::Set* ranges);
	void checkParams($chars* text, int32_t start, int32_t count);
	virtual bool equals(Object$* o) override;
	static int32_t getContextKey(char16_t c);
	static ::java::awt::font::NumericShaper* getContextualShaper(int32_t ranges);
	static ::java::awt::font::NumericShaper* getContextualShaper(::java::util::Set* ranges);
	static ::java::awt::font::NumericShaper* getContextualShaper(int32_t ranges, int32_t defaultContext);
	static ::java::awt::font::NumericShaper* getContextualShaper(::java::util::Set* ranges, ::java::awt::font::NumericShaper$Range* defaultContext);
	static int32_t getHighBit(int32_t value);
	static int32_t getKeyFromMask(int32_t mask);
	::java::util::Set* getRangeSet();
	int32_t getRanges();
	static ::java::awt::font::NumericShaper* getShaper(int32_t singleRange);
	static ::java::awt::font::NumericShaper* getShaper(::java::awt::font::NumericShaper$Range* singleRange);
	virtual int32_t hashCode() override;
	bool isContextual();
	bool isStrongDirectional(char16_t c);
	::java::awt::font::NumericShaper$Range* rangeForCodePoint(int32_t codepoint);
	static int32_t search(int32_t value, $ints* array, int32_t start, int32_t length);
	void shape($chars* text, int32_t start, int32_t count);
	void shape($chars* text, int32_t start, int32_t count, int32_t context);
	void shape($chars* text, int32_t start, int32_t count, ::java::awt::font::NumericShaper$Range* context);
	void shapeContextually($chars* text, int32_t start, int32_t count, int32_t ctxKey);
	void shapeContextually($chars* text, int32_t start, int32_t count, ::java::awt::font::NumericShaper$Range* ctxKey);
	void shapeNonContextually($chars* text, int32_t start, int32_t count);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* stream);
	int32_t key = 0;
	int32_t mask = 0;
	::java::awt::font::NumericShaper$Range* shapingRange = nullptr;
	::java::util::Set* rangeSet = nullptr;
	$Array<::java::awt::font::NumericShaper$Range>* rangeArray = nullptr;
	static const int32_t BSEARCH_THRESHOLD = 3;
	static const int64_t serialVersionUID = (int64_t)0x90A96A01A2DFF47C;
	static const int32_t EUROPEAN = 1; // 1 << 0
	static const int32_t ARABIC = 2; // 1 << 1
	static const int32_t EASTERN_ARABIC = 4; // 1 << 2
	static const int32_t DEVANAGARI = 8; // 1 << 3
	static const int32_t BENGALI = 16; // 1 << 4
	static const int32_t GURMUKHI = 32; // 1 << 5
	static const int32_t GUJARATI = 64; // 1 << 6
	static const int32_t ORIYA = 128; // 1 << 7
	static const int32_t TAMIL = 256; // 1 << 8
	static const int32_t TELUGU = 512; // 1 << 9
	static const int32_t KANNADA = 1024; // 1 << 10
	static const int32_t MALAYALAM = 2048; // 1 << 11
	static const int32_t THAI = 4096; // 1 << 12
	static const int32_t LAO = 8192; // 1 << 13
	static const int32_t TIBETAN = 16384; // 1 << 14
	static const int32_t MYANMAR = 32768; // 1 << 15
	static const int32_t ETHIOPIC = 65536; // 1 << 16
	static const int32_t KHMER = 131072; // 1 << 17
	static const int32_t MONGOLIAN = 262144; // 1 << 18
	static const int32_t ALL_RANGES = 0x0007FFFF;
	static const int32_t EUROPEAN_KEY = 0;
	static const int32_t ARABIC_KEY = 1;
	static const int32_t EASTERN_ARABIC_KEY = 2;
	static const int32_t DEVANAGARI_KEY = 3;
	static const int32_t BENGALI_KEY = 4;
	static const int32_t GURMUKHI_KEY = 5;
	static const int32_t GUJARATI_KEY = 6;
	static const int32_t ORIYA_KEY = 7;
	static const int32_t TAMIL_KEY = 8;
	static const int32_t TELUGU_KEY = 9;
	static const int32_t KANNADA_KEY = 10;
	static const int32_t MALAYALAM_KEY = 11;
	static const int32_t THAI_KEY = 12;
	static const int32_t LAO_KEY = 13;
	static const int32_t TIBETAN_KEY = 14;
	static const int32_t MYANMAR_KEY = 15;
	static const int32_t ETHIOPIC_KEY = 16;
	static const int32_t KHMER_KEY = 17;
	static const int32_t MONGOLIAN_KEY = 18;
	static const int32_t NUM_KEYS = 19; // MONGOLIAN_KEY + 1
	static const int32_t CONTEXTUAL_MASK = 0x80000000; // 1 << 31
	static $chars* bases;
	static $chars* contexts;
	static int32_t ctCache;
	static int32_t ctCacheLimit;
	$volatile(::java::awt::font::NumericShaper$Range*) currentRange = nullptr;
	static $ints* strongTable;
	$volatile(int32_t) stCache = 0;
};

		} // font
	} // awt
} // java

#pragma pop_macro("ALL_RANGES")
#pragma pop_macro("ARABIC")
#pragma pop_macro("ARABIC_KEY")
#pragma pop_macro("BENGALI")
#pragma pop_macro("BENGALI_KEY")
#pragma pop_macro("BSEARCH_THRESHOLD")
#pragma pop_macro("CONTEXTUAL_MASK")
#pragma pop_macro("DEVANAGARI")
#pragma pop_macro("DEVANAGARI_KEY")
#pragma pop_macro("EASTERN_ARABIC")
#pragma pop_macro("EASTERN_ARABIC_KEY")
#pragma pop_macro("ETHIOPIC")
#pragma pop_macro("ETHIOPIC_KEY")
#pragma pop_macro("EUROPEAN")
#pragma pop_macro("EUROPEAN_KEY")
#pragma pop_macro("GUJARATI")
#pragma pop_macro("GUJARATI_KEY")
#pragma pop_macro("GURMUKHI")
#pragma pop_macro("GURMUKHI_KEY")
#pragma pop_macro("KANNADA")
#pragma pop_macro("KANNADA_KEY")
#pragma pop_macro("KHMER")
#pragma pop_macro("KHMER_KEY")
#pragma pop_macro("LAO")
#pragma pop_macro("LAO_KEY")
#pragma pop_macro("MALAYALAM")
#pragma pop_macro("MALAYALAM_KEY")
#pragma pop_macro("MONGOLIAN")
#pragma pop_macro("MONGOLIAN_KEY")
#pragma pop_macro("MYANMAR")
#pragma pop_macro("MYANMAR_KEY")
#pragma pop_macro("NUM_KEYS")
#pragma pop_macro("ORIYA")
#pragma pop_macro("ORIYA_KEY")
#pragma pop_macro("TAMIL")
#pragma pop_macro("TAMIL_KEY")
#pragma pop_macro("TELUGU")
#pragma pop_macro("TELUGU_KEY")
#pragma pop_macro("THAI")
#pragma pop_macro("THAI_KEY")
#pragma pop_macro("TIBETAN")
#pragma pop_macro("TIBETAN_KEY")

#endif // _java_awt_font_NumericShaper_h_