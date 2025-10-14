#ifndef _sun_font_Script_h_
#define _sun_font_Script_h_
//$ class sun.font.Script
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ARABIC")
#undef ARABIC
#pragma push_macro("ARMENIAN")
#undef ARMENIAN
#pragma push_macro("BENGALI")
#undef BENGALI
#pragma push_macro("BOPOMOFO")
#undef BOPOMOFO
#pragma push_macro("BUHID")
#undef BUHID
#pragma push_macro("CANADIAN_ABORIGINAL")
#undef CANADIAN_ABORIGINAL
#pragma push_macro("CHEROKEE")
#undef CHEROKEE
#pragma push_macro("CODE_LIMIT")
#undef CODE_LIMIT
#pragma push_macro("COMMON")
#undef COMMON
#pragma push_macro("COPTIC")
#undef COPTIC
#pragma push_macro("CYRILLIC")
#undef CYRILLIC
#pragma push_macro("DESERET")
#undef DESERET
#pragma push_macro("DEVANAGARI")
#undef DEVANAGARI
#pragma push_macro("ETHIOPIC")
#undef ETHIOPIC
#pragma push_macro("GEORGIAN")
#undef GEORGIAN
#pragma push_macro("GOTHIC")
#undef GOTHIC
#pragma push_macro("GREEK")
#undef GREEK
#pragma push_macro("GUJARATI")
#undef GUJARATI
#pragma push_macro("GURMUKHI")
#undef GURMUKHI
#pragma push_macro("HAN")
#undef HAN
#pragma push_macro("HANGUL")
#undef HANGUL
#pragma push_macro("HANUNOO")
#undef HANUNOO
#pragma push_macro("HEBREW")
#undef HEBREW
#pragma push_macro("HIRAGANA")
#undef HIRAGANA
#pragma push_macro("INHERITED")
#undef INHERITED
#pragma push_macro("INVALID_CODE")
#undef INVALID_CODE
#pragma push_macro("KANNADA")
#undef KANNADA
#pragma push_macro("KATAKANA")
#undef KATAKANA
#pragma push_macro("KHMER")
#undef KHMER
#pragma push_macro("LAO")
#undef LAO
#pragma push_macro("LATIN")
#undef LATIN
#pragma push_macro("MALAYALAM")
#undef MALAYALAM
#pragma push_macro("MONGOLIAN")
#undef MONGOLIAN
#pragma push_macro("MYANMAR")
#undef MYANMAR
#pragma push_macro("OGHAM")
#undef OGHAM
#pragma push_macro("OLD_ITALIC")
#undef OLD_ITALIC
#pragma push_macro("ORIYA")
#undef ORIYA
#pragma push_macro("RUNIC")
#undef RUNIC
#pragma push_macro("SINHALA")
#undef SINHALA
#pragma push_macro("SYRIAC")
#undef SYRIAC
#pragma push_macro("TAGALOG")
#undef TAGALOG
#pragma push_macro("TAGBANWA")
#undef TAGBANWA
#pragma push_macro("TAMIL")
#undef TAMIL
#pragma push_macro("TELUGU")
#undef TELUGU
#pragma push_macro("THAANA")
#undef THAANA
#pragma push_macro("THAI")
#undef THAI
#pragma push_macro("TIBETAN")
#undef TIBETAN
#pragma push_macro("UCAS")
#undef UCAS
#pragma push_macro("YI")
#undef YI

namespace sun {
	namespace font {

class Script : public ::java::lang::Object {
	$class(Script, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Script();
	void init$();
	static const int32_t INVALID_CODE = (-1);
	static const int32_t COMMON = 0;
	static const int32_t INHERITED = 1;
	static const int32_t ARABIC = 2;
	static const int32_t ARMENIAN = 3;
	static const int32_t BENGALI = 4;
	static const int32_t BOPOMOFO = 5;
	static const int32_t CHEROKEE = 6;
	static const int32_t COPTIC = 7;
	static const int32_t CYRILLIC = 8;
	static const int32_t DESERET = 9;
	static const int32_t DEVANAGARI = 10;
	static const int32_t ETHIOPIC = 11;
	static const int32_t GEORGIAN = 12;
	static const int32_t GOTHIC = 13;
	static const int32_t GREEK = 14;
	static const int32_t GUJARATI = 15;
	static const int32_t GURMUKHI = 16;
	static const int32_t HAN = 17;
	static const int32_t HANGUL = 18;
	static const int32_t HEBREW = 19;
	static const int32_t HIRAGANA = 20;
	static const int32_t KANNADA = 21;
	static const int32_t KATAKANA = 22;
	static const int32_t KHMER = 23;
	static const int32_t LAO = 24;
	static const int32_t LATIN = 25;
	static const int32_t MALAYALAM = 26;
	static const int32_t MONGOLIAN = 27;
	static const int32_t MYANMAR = 28;
	static const int32_t OGHAM = 29;
	static const int32_t OLD_ITALIC = 30;
	static const int32_t ORIYA = 31;
	static const int32_t RUNIC = 32;
	static const int32_t SINHALA = 33;
	static const int32_t SYRIAC = 34;
	static const int32_t TAMIL = 35;
	static const int32_t TELUGU = 36;
	static const int32_t THAANA = 37;
	static const int32_t THAI = 38;
	static const int32_t TIBETAN = 39;
	static const int32_t CANADIAN_ABORIGINAL = 40;
	static const int32_t UCAS = CANADIAN_ABORIGINAL;
	static const int32_t YI = 41;
	static const int32_t TAGALOG = 42;
	static const int32_t HANUNOO = 43;
	static const int32_t BUHID = 44;
	static const int32_t TAGBANWA = 45;
	static const int32_t CODE_LIMIT = 46;
};

	} // font
} // sun

#pragma pop_macro("ARABIC")
#pragma pop_macro("ARMENIAN")
#pragma pop_macro("BENGALI")
#pragma pop_macro("BOPOMOFO")
#pragma pop_macro("BUHID")
#pragma pop_macro("CANADIAN_ABORIGINAL")
#pragma pop_macro("CHEROKEE")
#pragma pop_macro("CODE_LIMIT")
#pragma pop_macro("COMMON")
#pragma pop_macro("COPTIC")
#pragma pop_macro("CYRILLIC")
#pragma pop_macro("DESERET")
#pragma pop_macro("DEVANAGARI")
#pragma pop_macro("ETHIOPIC")
#pragma pop_macro("GEORGIAN")
#pragma pop_macro("GOTHIC")
#pragma pop_macro("GREEK")
#pragma pop_macro("GUJARATI")
#pragma pop_macro("GURMUKHI")
#pragma pop_macro("HAN")
#pragma pop_macro("HANGUL")
#pragma pop_macro("HANUNOO")
#pragma pop_macro("HEBREW")
#pragma pop_macro("HIRAGANA")
#pragma pop_macro("INHERITED")
#pragma pop_macro("INVALID_CODE")
#pragma pop_macro("KANNADA")
#pragma pop_macro("KATAKANA")
#pragma pop_macro("KHMER")
#pragma pop_macro("LAO")
#pragma pop_macro("LATIN")
#pragma pop_macro("MALAYALAM")
#pragma pop_macro("MONGOLIAN")
#pragma pop_macro("MYANMAR")
#pragma pop_macro("OGHAM")
#pragma pop_macro("OLD_ITALIC")
#pragma pop_macro("ORIYA")
#pragma pop_macro("RUNIC")
#pragma pop_macro("SINHALA")
#pragma pop_macro("SYRIAC")
#pragma pop_macro("TAGALOG")
#pragma pop_macro("TAGBANWA")
#pragma pop_macro("TAMIL")
#pragma pop_macro("TELUGU")
#pragma pop_macro("THAANA")
#pragma pop_macro("THAI")
#pragma pop_macro("TIBETAN")
#pragma pop_macro("UCAS")
#pragma pop_macro("YI")

#endif // _sun_font_Script_h_