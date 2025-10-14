#include <sun/font/CharToGlyphMapper.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef HI_SURROGATE_END
#undef HI_SURROGATE_START
#undef INVISIBLE_GLYPHS
#undef INVISIBLE_GLYPH_ID
#undef LO_SURROGATE_END
#undef LO_SURROGATE_START
#undef UNINITIALIZED_GLYPH
#undef VSS_END
#undef VSS_START
#undef VS_END
#undef VS_START

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

$FieldInfo _CharToGlyphMapper_FieldInfo_[] = {
	{"HI_SURROGATE_START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharToGlyphMapper, HI_SURROGATE_START)},
	{"HI_SURROGATE_END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharToGlyphMapper, HI_SURROGATE_END)},
	{"LO_SURROGATE_START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharToGlyphMapper, LO_SURROGATE_START)},
	{"LO_SURROGATE_END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharToGlyphMapper, LO_SURROGATE_END)},
	{"VS_START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharToGlyphMapper, VS_START)},
	{"VS_END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharToGlyphMapper, VS_END)},
	{"VSS_START", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharToGlyphMapper, VSS_START)},
	{"VSS_END", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharToGlyphMapper, VSS_END)},
	{"UNINITIALIZED_GLYPH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharToGlyphMapper, UNINITIALIZED_GLYPH)},
	{"INVISIBLE_GLYPH_ID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharToGlyphMapper, INVISIBLE_GLYPH_ID)},
	{"INVISIBLE_GLYPHS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(CharToGlyphMapper, INVISIBLE_GLYPHS)},
	{"missingGlyph", "I", nullptr, $PROTECTED, $field(CharToGlyphMapper, missingGlyph)},
	{}
};

$MethodInfo _CharToGlyphMapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharToGlyphMapper::*)()>(&CharToGlyphMapper::init$))},
	{"canDisplay", "(C)Z", nullptr, $PUBLIC},
	{"canDisplay", "(I)Z", nullptr, $PUBLIC},
	{"charToGlyph", "(C)I", nullptr, $PUBLIC},
	{"charToGlyph", "(I)I", nullptr, $PUBLIC},
	{"charToVariationGlyph", "(II)I", nullptr, $PUBLIC},
	{"charsToGlyphs", "(I[C[I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"charsToGlyphs", "(I[I[I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"charsToGlyphsNS", "(I[C[I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getMissingGlyphCode", "()I", nullptr, $PUBLIC},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isVariationSelector", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&CharToGlyphMapper::isVariationSelector))},
	{}
};

$ClassInfo _CharToGlyphMapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.font.CharToGlyphMapper",
	"java.lang.Object",
	nullptr,
	_CharToGlyphMapper_FieldInfo_,
	_CharToGlyphMapper_MethodInfo_
};

$Object* allocate$CharToGlyphMapper($Class* clazz) {
	return $of($alloc(CharToGlyphMapper));
}

void CharToGlyphMapper::init$() {
	this->missingGlyph = CharToGlyphMapper::UNINITIALIZED_GLYPH;
}

int32_t CharToGlyphMapper::getMissingGlyphCode() {
	return this->missingGlyph;
}

bool CharToGlyphMapper::canDisplay(char16_t ch) {
	int32_t glyph = charToGlyph(ch);
	return glyph != this->missingGlyph;
}

bool CharToGlyphMapper::canDisplay(int32_t cp) {
	int32_t glyph = charToGlyph(cp);
	return glyph != this->missingGlyph;
}

int32_t CharToGlyphMapper::charToGlyph(char16_t unicode) {
	$var($chars, chars, $new($chars, 1));
	$var($ints, glyphs, $new($ints, 1));
	chars->set(0, unicode);
	charsToGlyphs(1, chars, glyphs);
	return glyphs->get(0);
}

int32_t CharToGlyphMapper::charToGlyph(int32_t unicode) {
	$var($ints, chars, $new($ints, 1));
	$var($ints, glyphs, $new($ints, 1));
	chars->set(0, unicode);
	charsToGlyphs(1, chars, glyphs);
	return glyphs->get(0);
}

int32_t CharToGlyphMapper::charToVariationGlyph(int32_t unicode, int32_t variationSelector) {
	return charToGlyph(unicode);
}

bool CharToGlyphMapper::isVariationSelector(int32_t charCode) {
	return ((charCode >= CharToGlyphMapper::VSS_START && charCode <= CharToGlyphMapper::VSS_END) || (charCode >= CharToGlyphMapper::VS_START && charCode <= CharToGlyphMapper::VS_END));
}

CharToGlyphMapper::CharToGlyphMapper() {
}

$Class* CharToGlyphMapper::load$($String* name, bool initialize) {
	$loadClass(CharToGlyphMapper, name, initialize, &_CharToGlyphMapper_ClassInfo_, allocate$CharToGlyphMapper);
	return class$;
}

$Class* CharToGlyphMapper::class$ = nullptr;

	} // font
} // sun