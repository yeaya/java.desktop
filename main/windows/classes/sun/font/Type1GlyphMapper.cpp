#include <sun/font/Type1GlyphMapper.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/FontScaler.h>
#include <sun/font/FontScalerException.h>
#include <sun/font/FontUtilities.h>
#include <sun/font/Type1Font.h>
#include <jcpp.h>

#undef HI_SURROGATE_END
#undef HI_SURROGATE_START
#undef INVISIBLE_GLYPH_ID
#undef LO_SURROGATE_END
#undef LO_SURROGATE_START
#undef MIN_LAYOUT_CHARCODE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $FontScaler = ::sun::font::FontScaler;
using $FontScalerException = ::sun::font::FontScalerException;
using $FontUtilities = ::sun::font::FontUtilities;
using $Type1Font = ::sun::font::Type1Font;

namespace sun {
	namespace font {

$FieldInfo _Type1GlyphMapper_FieldInfo_[] = {
	{"font", "Lsun/font/Type1Font;", nullptr, 0, $field(Type1GlyphMapper, font)},
	{"scaler", "Lsun/font/FontScaler;", nullptr, 0, $field(Type1GlyphMapper, scaler)},
	{}
};

$MethodInfo _Type1GlyphMapper_MethodInfo_[] = {
	{"<init>", "(Lsun/font/Type1Font;)V", nullptr, $PUBLIC, $method(static_cast<void(Type1GlyphMapper::*)($Type1Font*)>(&Type1GlyphMapper::init$))},
	{"canDisplay", "(C)Z", nullptr, $PUBLIC},
	{"charToGlyph", "(C)I", nullptr, $PUBLIC},
	{"charToGlyph", "(I)I", nullptr, $PUBLIC},
	{"charsToGlyphs", "(I[C[I)V", nullptr, $PUBLIC},
	{"charsToGlyphs", "(I[I[I)V", nullptr, $PUBLIC},
	{"charsToGlyphsNS", "(I[C[I)Z", nullptr, $PUBLIC},
	{"getMissingGlyphCode", "()I", nullptr, $PUBLIC},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC},
	{"initMapper", "()V", nullptr, $PRIVATE, $method(static_cast<void(Type1GlyphMapper::*)()>(&Type1GlyphMapper::initMapper))},
	{}
};

$ClassInfo _Type1GlyphMapper_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.Type1GlyphMapper",
	"sun.font.CharToGlyphMapper",
	nullptr,
	_Type1GlyphMapper_FieldInfo_,
	_Type1GlyphMapper_MethodInfo_
};

$Object* allocate$Type1GlyphMapper($Class* clazz) {
	return $of($alloc(Type1GlyphMapper));
}

void Type1GlyphMapper::init$($Type1Font* font) {
	$CharToGlyphMapper::init$();
	$set(this, font, font);
	initMapper();
}

void Type1GlyphMapper::initMapper() {
	$useLocalCurrentObjectStackCache();
	$set(this, scaler, $nc(this->font)->getScaler());
	try {
		this->missingGlyph = $nc(this->scaler)->getMissingGlyphCode();
	} catch ($FontScalerException&) {
		$var($FontScalerException, fe, $catch());
		$set(this, scaler, $FontScaler::getNullScaler());
		try {
			this->missingGlyph = $nc(this->scaler)->getMissingGlyphCode();
		} catch ($FontScalerException&) {
			$var($FontScalerException, e, $catch());
			this->missingGlyph = 0;
		}
	}
}

int32_t Type1GlyphMapper::getNumGlyphs() {
	try {
		return $nc(this->scaler)->getNumGlyphs();
	} catch ($FontScalerException&) {
		$var($FontScalerException, e, $catch());
		$set(this, scaler, $FontScaler::getNullScaler());
		return getNumGlyphs();
	}
	$shouldNotReachHere();
}

int32_t Type1GlyphMapper::getMissingGlyphCode() {
	return this->missingGlyph;
}

bool Type1GlyphMapper::canDisplay(char16_t ch) {
	try {
		return $nc(this->scaler)->getGlyphCode(ch) != this->missingGlyph;
	} catch ($FontScalerException&) {
		$var($FontScalerException, e, $catch());
		$set(this, scaler, $FontScaler::getNullScaler());
		return canDisplay(ch);
	}
	$shouldNotReachHere();
}

int32_t Type1GlyphMapper::charToGlyph(char16_t ch) {
	try {
		return $nc(this->scaler)->getGlyphCode(ch);
	} catch ($FontScalerException&) {
		$var($FontScalerException, e, $catch());
		$set(this, scaler, $FontScaler::getNullScaler());
		return charToGlyph(ch);
	}
	$shouldNotReachHere();
}

int32_t Type1GlyphMapper::charToGlyph(int32_t ch) {
	if (ch < 0 || ch > 0x0000FFFF) {
		return this->missingGlyph;
	} else {
		try {
			return $nc(this->scaler)->getGlyphCode((char16_t)ch);
		} catch ($FontScalerException&) {
			$var($FontScalerException, e, $catch());
			$set(this, scaler, $FontScaler::getNullScaler());
			return charToGlyph(ch);
		}
	}
	$shouldNotReachHere();
}

void Type1GlyphMapper::charsToGlyphs(int32_t count, $chars* unicodes, $ints* glyphs) {
	for (int32_t i = 0; i < count; ++i) {
		int32_t code = $nc(unicodes)->get(i);
		if (code >= $CharToGlyphMapper::HI_SURROGATE_START && code <= $CharToGlyphMapper::HI_SURROGATE_END && i < count - 1) {
			char16_t low = unicodes->get(i + 1);
			if (low >= $CharToGlyphMapper::LO_SURROGATE_START && low <= $CharToGlyphMapper::LO_SURROGATE_END) {
				code = (code - $CharToGlyphMapper::HI_SURROGATE_START) * 1024 + low - $CharToGlyphMapper::LO_SURROGATE_START + 0x00010000;
				$nc(glyphs)->set(i + 1, 0x0000FFFF);
			}
		}
		$nc(glyphs)->set(i, charToGlyph(code));
		if (code >= 0x00010000) {
			i += 1;
		}
	}
}

void Type1GlyphMapper::charsToGlyphs(int32_t count, $ints* unicodes, $ints* glyphs) {
	for (int32_t i = 0; i < count; ++i) {
		$nc(glyphs)->set(i, charToGlyph($nc(unicodes)->get(i)));
	}
}

bool Type1GlyphMapper::charsToGlyphsNS(int32_t count, $chars* unicodes, $ints* glyphs) {
	for (int32_t i = 0; i < count; ++i) {
		int32_t code = $nc(unicodes)->get(i);
		if (code >= $CharToGlyphMapper::HI_SURROGATE_START && code <= $CharToGlyphMapper::HI_SURROGATE_END && i < count - 1) {
			char16_t low = unicodes->get(i + 1);
			if (low >= $CharToGlyphMapper::LO_SURROGATE_START && low <= $CharToGlyphMapper::LO_SURROGATE_END) {
				code = (code - $CharToGlyphMapper::HI_SURROGATE_START) * 1024 + low - $CharToGlyphMapper::LO_SURROGATE_START + 0x00010000;
				$nc(glyphs)->set(i + 1, $CharToGlyphMapper::INVISIBLE_GLYPH_ID);
			}
		}
		$nc(glyphs)->set(i, charToGlyph(code));
		if (code < $FontUtilities::MIN_LAYOUT_CHARCODE) {
			continue;
		} else if ($FontUtilities::isComplexCharCode(code)) {
			return true;
		} else if (code >= 0x00010000) {
			i += 1;
			continue;
		}
	}
	return false;
}

Type1GlyphMapper::Type1GlyphMapper() {
}

$Class* Type1GlyphMapper::load$($String* name, bool initialize) {
	$loadClass(Type1GlyphMapper, name, initialize, &_Type1GlyphMapper_ClassInfo_, allocate$Type1GlyphMapper);
	return class$;
}

$Class* Type1GlyphMapper::class$ = nullptr;

	} // font
} // sun