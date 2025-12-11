#include <sun/font/CCharToGlyphMapper.h>

#include <sun/font/CCharToGlyphMapper$Cache.h>
#include <sun/font/CFont.h>
#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/FontUtilities.h>
#include <jcpp.h>

#undef HI_SURROGATE_END
#undef HI_SURROGATE_START
#undef INVISIBLE_GLYPH_ID
#undef LO_SURROGATE_END
#undef LO_SURROGATE_START
#undef MIN_LAYOUT_CHARCODE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CCharToGlyphMapper$Cache = ::sun::font::CCharToGlyphMapper$Cache;
using $CFont = ::sun::font::CFont;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $FontUtilities = ::sun::font::FontUtilities;

namespace sun {
	namespace font {

$FieldInfo _CCharToGlyphMapper_FieldInfo_[] = {
	{"cache", "Lsun/font/CCharToGlyphMapper$Cache;", nullptr, $PRIVATE, $field(CCharToGlyphMapper, cache)},
	{"fFont", "Lsun/font/CFont;", nullptr, 0, $field(CCharToGlyphMapper, fFont)},
	{"numGlyphs", "I", nullptr, 0, $field(CCharToGlyphMapper, numGlyphs)},
	{}
};

$MethodInfo _CCharToGlyphMapper_MethodInfo_[] = {
	{"<init>", "(Lsun/font/CFont;)V", nullptr, $PUBLIC, $method(static_cast<void(CCharToGlyphMapper::*)($CFont*)>(&CCharToGlyphMapper::init$))},
	{"canDisplay", "(C)Z", nullptr, $PUBLIC},
	{"canDisplay", "(I)Z", nullptr, $PUBLIC},
	{"charToGlyph", "(C)I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"charToGlyph", "(I)I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"charsToGlyphs", "(I[C[I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"charsToGlyphs", "(I[I[I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"charsToGlyphsNS", "(I[C[I)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"countGlyphs", "(J)I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t)>(&CCharToGlyphMapper::countGlyphs))},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC},
	{"nativeCharsToGlyphs", "(JI[C[I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t,int32_t,$chars*,$ints*)>(&CCharToGlyphMapper::nativeCharsToGlyphs))},
	{}
};

#define _METHOD_INDEX_countGlyphs 8
#define _METHOD_INDEX_nativeCharsToGlyphs 10

$InnerClassInfo _CCharToGlyphMapper_InnerClassesInfo_[] = {
	{"sun.font.CCharToGlyphMapper$Cache", "sun.font.CCharToGlyphMapper", "Cache", $PRIVATE},
	{}
};

$ClassInfo _CCharToGlyphMapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.CCharToGlyphMapper",
	"sun.font.CharToGlyphMapper",
	nullptr,
	_CCharToGlyphMapper_FieldInfo_,
	_CCharToGlyphMapper_MethodInfo_,
	nullptr,
	nullptr,
	_CCharToGlyphMapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.CCharToGlyphMapper$Cache,sun.font.CCharToGlyphMapper$Cache$SparseBitShiftingTwoLayerArray"
};

$Object* allocate$CCharToGlyphMapper($Class* clazz) {
	return $of($alloc(CCharToGlyphMapper));
}

int32_t CCharToGlyphMapper::countGlyphs(int64_t nativeFontPtr) {
	$init(CCharToGlyphMapper);
	int32_t $ret = 0;
	$prepareNativeStatic(CCharToGlyphMapper, countGlyphs, int32_t, int64_t nativeFontPtr);
	$ret = $invokeNativeStatic(nativeFontPtr);
	$finishNativeStatic();
	return $ret;
}

void CCharToGlyphMapper::init$($CFont* font) {
	$CharToGlyphMapper::init$();
	$set(this, cache, $new($CCharToGlyphMapper$Cache, this));
	this->numGlyphs = -1;
	$set(this, fFont, font);
	this->missingGlyph = 0;
}

int32_t CCharToGlyphMapper::getNumGlyphs() {
	if (this->numGlyphs == -1) {
		this->numGlyphs = countGlyphs($nc(this->fFont)->getNativeFontPtr());
	}
	return this->numGlyphs;
}

bool CCharToGlyphMapper::canDisplay(char16_t ch) {
	int32_t glyph = charToGlyph(ch);
	return glyph != this->missingGlyph;
}

bool CCharToGlyphMapper::canDisplay(int32_t cp) {
	int32_t glyph = charToGlyph(cp);
	return glyph != this->missingGlyph;
}

bool CCharToGlyphMapper::charsToGlyphsNS(int32_t count, $chars* unicodes, $ints* glyphs) {
	$synchronized(this) {
		charsToGlyphs(count, unicodes, glyphs);
		for (int32_t i = 0; i < count; ++i) {
			int32_t code = $nc(unicodes)->get(i);
			if (code >= $CharToGlyphMapper::HI_SURROGATE_START && code <= $CharToGlyphMapper::HI_SURROGATE_END && i < count - 1) {
				char16_t low = unicodes->get(i + 1);
				if (low >= $CharToGlyphMapper::LO_SURROGATE_START && low <= $CharToGlyphMapper::LO_SURROGATE_END) {
					code = (code - $CharToGlyphMapper::HI_SURROGATE_START) * 1024 + low - $CharToGlyphMapper::LO_SURROGATE_START + 0x00010000;
					$nc(glyphs)->set(i + 1, $CharToGlyphMapper::INVISIBLE_GLYPH_ID);
				}
			}
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
}

int32_t CCharToGlyphMapper::charToGlyph(char16_t unicode) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		int32_t glyph = $nc(this->cache)->get(unicode);
		if (glyph != 0) {
			return glyph;
		}
		$var($chars, unicodeArray, $new($chars, {unicode}));
		$var($ints, glyphArray, $new($ints, 1));
		nativeCharsToGlyphs($nc(this->fFont)->getNativeFontPtr(), 1, unicodeArray, glyphArray);
		$nc(this->cache)->put(unicode, glyphArray->get(0));
		return glyphArray->get(0);
	}
}

int32_t CCharToGlyphMapper::charToGlyph(int32_t unicode) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (unicode >= 0x00010000) {
			$var($ints, glyphs, $new($ints, 2));
			$var($chars, surrogates, $new($chars, 2));
			int32_t base = unicode - 0x00010000;
			surrogates->set(0, (char16_t)(((int32_t)((uint32_t)base >> 10)) + $CharToGlyphMapper::HI_SURROGATE_START));
			surrogates->set(1, (char16_t)((base % 1024) + $CharToGlyphMapper::LO_SURROGATE_START));
			charsToGlyphs(2, surrogates, glyphs);
			return glyphs->get(0);
		} else {
			return charToGlyph((char16_t)unicode);
		}
	}
}

void CCharToGlyphMapper::charsToGlyphs(int32_t count, $chars* unicodes, $ints* glyphs) {
	$synchronized(this) {
		$nc(this->cache)->get(count, unicodes, glyphs);
	}
}

void CCharToGlyphMapper::charsToGlyphs(int32_t count, $ints* unicodes, $ints* glyphs) {
	$synchronized(this) {
		for (int32_t i = 0; i < count; ++i) {
			$nc(glyphs)->set(i, charToGlyph($nc(unicodes)->get(i)));
		}
	}
}

void CCharToGlyphMapper::nativeCharsToGlyphs(int64_t nativeFontPtr, int32_t count, $chars* unicodes, $ints* glyphs) {
	$init(CCharToGlyphMapper);
	$prepareNativeStatic(CCharToGlyphMapper, nativeCharsToGlyphs, void, int64_t nativeFontPtr, int32_t count, $chars* unicodes, $ints* glyphs);
	$invokeNativeStatic(nativeFontPtr, count, unicodes, glyphs);
	$finishNativeStatic();
}

CCharToGlyphMapper::CCharToGlyphMapper() {
}

$Class* CCharToGlyphMapper::load$($String* name, bool initialize) {
	$loadClass(CCharToGlyphMapper, name, initialize, &_CCharToGlyphMapper_ClassInfo_, allocate$CCharToGlyphMapper);
	return class$;
}

$Class* CCharToGlyphMapper::class$ = nullptr;

	} // font
} // sun