#ifndef _java_awt_font_NumericShaper$Range_h_
#define _java_awt_font_NumericShaper$Range_h_
//$ class java.awt.font.NumericShaper$Range
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ARABIC")
#undef ARABIC
#pragma push_macro("BALINESE")
#undef BALINESE
#pragma push_macro("BENGALI")
#undef BENGALI
#pragma push_macro("CHAM")
#undef CHAM
#pragma push_macro("DEVANAGARI")
#undef DEVANAGARI
#pragma push_macro("EASTERN_ARABIC")
#undef EASTERN_ARABIC
#pragma push_macro("ETHIOPIC")
#undef ETHIOPIC
#pragma push_macro("EUROPEAN")
#undef EUROPEAN
#pragma push_macro("GUJARATI")
#undef GUJARATI
#pragma push_macro("GURMUKHI")
#undef GURMUKHI
#pragma push_macro("JAVANESE")
#undef JAVANESE
#pragma push_macro("KANNADA")
#undef KANNADA
#pragma push_macro("KAYAH_LI")
#undef KAYAH_LI
#pragma push_macro("KHMER")
#undef KHMER
#pragma push_macro("LAO")
#undef LAO
#pragma push_macro("LEPCHA")
#undef LEPCHA
#pragma push_macro("LIMBU")
#undef LIMBU
#pragma push_macro("MALAYALAM")
#undef MALAYALAM
#pragma push_macro("MEETEI_MAYEK")
#undef MEETEI_MAYEK
#pragma push_macro("MONGOLIAN")
#undef MONGOLIAN
#pragma push_macro("MYANMAR")
#undef MYANMAR
#pragma push_macro("MYANMAR_SHAN")
#undef MYANMAR_SHAN
#pragma push_macro("MYANMAR_TAI_LAING")
#undef MYANMAR_TAI_LAING
#pragma push_macro("NEW_TAI_LUE")
#undef NEW_TAI_LUE
#pragma push_macro("NKO")
#undef NKO
#pragma push_macro("OL_CHIKI")
#undef OL_CHIKI
#pragma push_macro("ORIYA")
#undef ORIYA
#pragma push_macro("SAURASHTRA")
#undef SAURASHTRA
#pragma push_macro("SINHALA")
#undef SINHALA
#pragma push_macro("SUNDANESE")
#undef SUNDANESE
#pragma push_macro("TAI_THAM_HORA")
#undef TAI_THAM_HORA
#pragma push_macro("TAI_THAM_THAM")
#undef TAI_THAM_THAM
#pragma push_macro("TAMIL")
#undef TAMIL
#pragma push_macro("TELUGU")
#undef TELUGU
#pragma push_macro("THAI")
#undef THAI
#pragma push_macro("TIBETAN")
#undef TIBETAN
#pragma push_macro("VAI")
#undef VAI

namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace awt {
		namespace font {

class $import NumericShaper$Range : public ::java::lang::Enum {
	$class(NumericShaper$Range, 0, ::java::lang::Enum)
public:
	NumericShaper$Range();
	static $Array<::java::awt::font::NumericShaper$Range>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, int32_t base, int32_t start, int32_t end);
	int32_t getDigitBase();
	virtual char16_t getNumericBase();
	bool inRange(int32_t c);
	static ::java::awt::font::NumericShaper$Range* indexToRange(int32_t index);
	static ::java::util::Set* maskToRangeSet(int32_t mask);
	static int32_t toRangeIndex(::java::awt::font::NumericShaper$Range* script);
	static int32_t toRangeMask(::java::util::Set* ranges);
	static ::java::awt::font::NumericShaper$Range* valueOf($String* name);
	static $Array<::java::awt::font::NumericShaper$Range>* values();
	static ::java::awt::font::NumericShaper$Range* EUROPEAN;
	static ::java::awt::font::NumericShaper$Range* ARABIC;
	static ::java::awt::font::NumericShaper$Range* EASTERN_ARABIC;
	static ::java::awt::font::NumericShaper$Range* DEVANAGARI;
	static ::java::awt::font::NumericShaper$Range* BENGALI;
	static ::java::awt::font::NumericShaper$Range* GURMUKHI;
	static ::java::awt::font::NumericShaper$Range* GUJARATI;
	static ::java::awt::font::NumericShaper$Range* ORIYA;
	static ::java::awt::font::NumericShaper$Range* TAMIL;
	static ::java::awt::font::NumericShaper$Range* TELUGU;
	static ::java::awt::font::NumericShaper$Range* KANNADA;
	static ::java::awt::font::NumericShaper$Range* MALAYALAM;
	static ::java::awt::font::NumericShaper$Range* THAI;
	static ::java::awt::font::NumericShaper$Range* LAO;
	static ::java::awt::font::NumericShaper$Range* TIBETAN;
	static ::java::awt::font::NumericShaper$Range* MYANMAR;
	static ::java::awt::font::NumericShaper$Range* ETHIOPIC;
	static ::java::awt::font::NumericShaper$Range* KHMER;
	static ::java::awt::font::NumericShaper$Range* MONGOLIAN;
	static ::java::awt::font::NumericShaper$Range* NKO;
	static ::java::awt::font::NumericShaper$Range* MYANMAR_SHAN;
	static ::java::awt::font::NumericShaper$Range* LIMBU;
	static ::java::awt::font::NumericShaper$Range* NEW_TAI_LUE;
	static ::java::awt::font::NumericShaper$Range* BALINESE;
	static ::java::awt::font::NumericShaper$Range* SUNDANESE;
	static ::java::awt::font::NumericShaper$Range* LEPCHA;
	static ::java::awt::font::NumericShaper$Range* OL_CHIKI;
	static ::java::awt::font::NumericShaper$Range* VAI;
	static ::java::awt::font::NumericShaper$Range* SAURASHTRA;
	static ::java::awt::font::NumericShaper$Range* KAYAH_LI;
	static ::java::awt::font::NumericShaper$Range* CHAM;
	static ::java::awt::font::NumericShaper$Range* TAI_THAM_HORA;
	static ::java::awt::font::NumericShaper$Range* TAI_THAM_THAM;
	static ::java::awt::font::NumericShaper$Range* JAVANESE;
	static ::java::awt::font::NumericShaper$Range* MEETEI_MAYEK;
	static ::java::awt::font::NumericShaper$Range* SINHALA;
	static ::java::awt::font::NumericShaper$Range* MYANMAR_TAI_LAING;
	static $Array<::java::awt::font::NumericShaper$Range>* $VALUES;
	int32_t base = 0;
	int32_t start = 0;
	int32_t end = 0;
};

		} // font
	} // awt
} // java

#pragma pop_macro("ARABIC")
#pragma pop_macro("BALINESE")
#pragma pop_macro("BENGALI")
#pragma pop_macro("CHAM")
#pragma pop_macro("DEVANAGARI")
#pragma pop_macro("EASTERN_ARABIC")
#pragma pop_macro("ETHIOPIC")
#pragma pop_macro("EUROPEAN")
#pragma pop_macro("GUJARATI")
#pragma pop_macro("GURMUKHI")
#pragma pop_macro("JAVANESE")
#pragma pop_macro("KANNADA")
#pragma pop_macro("KAYAH_LI")
#pragma pop_macro("KHMER")
#pragma pop_macro("LAO")
#pragma pop_macro("LEPCHA")
#pragma pop_macro("LIMBU")
#pragma pop_macro("MALAYALAM")
#pragma pop_macro("MEETEI_MAYEK")
#pragma pop_macro("MONGOLIAN")
#pragma pop_macro("MYANMAR")
#pragma pop_macro("MYANMAR_SHAN")
#pragma pop_macro("MYANMAR_TAI_LAING")
#pragma pop_macro("NEW_TAI_LUE")
#pragma pop_macro("NKO")
#pragma pop_macro("OL_CHIKI")
#pragma pop_macro("ORIYA")
#pragma pop_macro("SAURASHTRA")
#pragma pop_macro("SINHALA")
#pragma pop_macro("SUNDANESE")
#pragma pop_macro("TAI_THAM_HORA")
#pragma pop_macro("TAI_THAM_THAM")
#pragma pop_macro("TAMIL")
#pragma pop_macro("TELUGU")
#pragma pop_macro("THAI")
#pragma pop_macro("TIBETAN")
#pragma pop_macro("VAI")

#endif // _java_awt_font_NumericShaper$Range_h_