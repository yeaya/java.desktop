#include <sun/font/Script.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ARABIC
#undef ARMENIAN
#undef BENGALI
#undef BOPOMOFO
#undef BUHID
#undef CANADIAN_ABORIGINAL
#undef CHEROKEE
#undef CODE_LIMIT
#undef COMMON
#undef COPTIC
#undef CYRILLIC
#undef DESERET
#undef DEVANAGARI
#undef ETHIOPIC
#undef GEORGIAN
#undef GOTHIC
#undef GREEK
#undef GUJARATI
#undef GURMUKHI
#undef HAN
#undef HANGUL
#undef HANUNOO
#undef HEBREW
#undef HIRAGANA
#undef INHERITED
#undef INVALID_CODE
#undef KANNADA
#undef KATAKANA
#undef KHMER
#undef LAO
#undef LATIN
#undef MALAYALAM
#undef MONGOLIAN
#undef MYANMAR
#undef OGHAM
#undef OLD_ITALIC
#undef ORIYA
#undef RUNIC
#undef SINHALA
#undef SYRIAC
#undef TAGALOG
#undef TAGBANWA
#undef TAMIL
#undef TELUGU
#undef THAANA
#undef THAI
#undef TIBETAN
#undef UCAS
#undef YI

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$FieldInfo _Script_FieldInfo_[] = {
	{"INVALID_CODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, INVALID_CODE)},
	{"COMMON", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, COMMON)},
	{"INHERITED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, INHERITED)},
	{"ARABIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, ARABIC)},
	{"ARMENIAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, ARMENIAN)},
	{"BENGALI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, BENGALI)},
	{"BOPOMOFO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, BOPOMOFO)},
	{"CHEROKEE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, CHEROKEE)},
	{"COPTIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, COPTIC)},
	{"CYRILLIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, CYRILLIC)},
	{"DESERET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, DESERET)},
	{"DEVANAGARI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, DEVANAGARI)},
	{"ETHIOPIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, ETHIOPIC)},
	{"GEORGIAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, GEORGIAN)},
	{"GOTHIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, GOTHIC)},
	{"GREEK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, GREEK)},
	{"GUJARATI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, GUJARATI)},
	{"GURMUKHI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, GURMUKHI)},
	{"HAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, HAN)},
	{"HANGUL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, HANGUL)},
	{"HEBREW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, HEBREW)},
	{"HIRAGANA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, HIRAGANA)},
	{"KANNADA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, KANNADA)},
	{"KATAKANA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, KATAKANA)},
	{"KHMER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, KHMER)},
	{"LAO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, LAO)},
	{"LATIN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, LATIN)},
	{"MALAYALAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, MALAYALAM)},
	{"MONGOLIAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, MONGOLIAN)},
	{"MYANMAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, MYANMAR)},
	{"OGHAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, OGHAM)},
	{"OLD_ITALIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, OLD_ITALIC)},
	{"ORIYA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, ORIYA)},
	{"RUNIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, RUNIC)},
	{"SINHALA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, SINHALA)},
	{"SYRIAC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, SYRIAC)},
	{"TAMIL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, TAMIL)},
	{"TELUGU", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, TELUGU)},
	{"THAANA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, THAANA)},
	{"THAI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, THAI)},
	{"TIBETAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, TIBETAN)},
	{"CANADIAN_ABORIGINAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, CANADIAN_ABORIGINAL)},
	{"UCAS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, UCAS)},
	{"YI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, YI)},
	{"TAGALOG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, TAGALOG)},
	{"HANUNOO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, HANUNOO)},
	{"BUHID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, BUHID)},
	{"TAGBANWA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, TAGBANWA)},
	{"CODE_LIMIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Script, CODE_LIMIT)},
	{}
};

$MethodInfo _Script_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Script::*)()>(&Script::init$))},
	{}
};

$ClassInfo _Script_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.Script",
	"java.lang.Object",
	nullptr,
	_Script_FieldInfo_,
	_Script_MethodInfo_
};

$Object* allocate$Script($Class* clazz) {
	return $of($alloc(Script));
}

void Script::init$() {
}

Script::Script() {
}

$Class* Script::load$($String* name, bool initialize) {
	$loadClass(Script, name, initialize, &_Script_ClassInfo_, allocate$Script);
	return class$;
}

$Class* Script::class$ = nullptr;

	} // font
} // sun