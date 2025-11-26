#include <sun/font/NativeGlyphMapper.h>

#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/NativeFont.h>
#include <sun/font/XMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $NativeFont = ::sun::font::NativeFont;
using $XMap = ::sun::font::XMap;

namespace sun {
	namespace font {

$FieldInfo _NativeGlyphMapper_FieldInfo_[] = {
	{"font", "Lsun/font/NativeFont;", nullptr, 0, $field(NativeGlyphMapper, font)},
	{"xmapper", "Lsun/font/XMap;", nullptr, 0, $field(NativeGlyphMapper, xmapper)},
	{"numGlyphs", "I", nullptr, 0, $field(NativeGlyphMapper, numGlyphs)},
	{}
};

$MethodInfo _NativeGlyphMapper_MethodInfo_[] = {
	{"<init>", "(Lsun/font/NativeFont;)V", nullptr, 0, $method(static_cast<void(NativeGlyphMapper::*)($NativeFont*)>(&NativeGlyphMapper::init$))},
	{"charToGlyph", "(C)I", nullptr, $PUBLIC},
	{"charToGlyph", "(I)I", nullptr, $PUBLIC},
	{"charsToGlyphs", "(I[C[I)V", nullptr, $PUBLIC},
	{"charsToGlyphs", "(I[I[I)V", nullptr, $PUBLIC},
	{"charsToGlyphsNS", "(I[C[I)Z", nullptr, $PUBLIC},
	{"getNumGlyphs", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NativeGlyphMapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.font.NativeGlyphMapper",
	"sun.font.CharToGlyphMapper",
	nullptr,
	_NativeGlyphMapper_FieldInfo_,
	_NativeGlyphMapper_MethodInfo_
};

$Object* allocate$NativeGlyphMapper($Class* clazz) {
	return $of($alloc(NativeGlyphMapper));
}

void NativeGlyphMapper::init$($NativeFont* f) {
	$CharToGlyphMapper::init$();
	$set(this, font, f);
	$set(this, xmapper, $XMap::getXMapper($nc(this->font)->encoding));
	this->numGlyphs = $nc(f)->getNumGlyphs();
	this->missingGlyph = 0;
}

int32_t NativeGlyphMapper::getNumGlyphs() {
	return this->numGlyphs;
}

int32_t NativeGlyphMapper::charToGlyph(char16_t unicode) {
	if (unicode >= $nc($nc(this->xmapper)->convertedGlyphs)->length) {
		return 0;
	} else {
		return $nc($nc(this->xmapper)->convertedGlyphs)->get(unicode);
	}
}

int32_t NativeGlyphMapper::charToGlyph(int32_t unicode) {
	if (unicode >= $nc($nc(this->xmapper)->convertedGlyphs)->length) {
		return 0;
	} else {
		return $nc($nc(this->xmapper)->convertedGlyphs)->get(unicode);
	}
}

void NativeGlyphMapper::charsToGlyphs(int32_t count, $chars* unicodes, $ints* glyphs) {
	for (int32_t i = 0; i < count; ++i) {
		char16_t code = $nc(unicodes)->get(i);
		if (code >= $nc($nc(this->xmapper)->convertedGlyphs)->length) {
			$nc(glyphs)->set(i, 0);
		} else {
			$nc(glyphs)->set(i, $nc($nc(this->xmapper)->convertedGlyphs)->get(code));
		}
	}
}

bool NativeGlyphMapper::charsToGlyphsNS(int32_t count, $chars* unicodes, $ints* glyphs) {
	charsToGlyphs(count, unicodes, glyphs);
	return false;
}

void NativeGlyphMapper::charsToGlyphs(int32_t count, $ints* unicodes, $ints* glyphs) {
	for (int32_t i = 0; i < count; ++i) {
		char16_t code = (char16_t)$nc(unicodes)->get(i);
		if (code >= $nc($nc(this->xmapper)->convertedGlyphs)->length) {
			$nc(glyphs)->set(i, 0);
		} else {
			$nc(glyphs)->set(i, $nc($nc(this->xmapper)->convertedGlyphs)->get(code));
		}
	}
}

NativeGlyphMapper::NativeGlyphMapper() {
}

$Class* NativeGlyphMapper::load$($String* name, bool initialize) {
	$loadClass(NativeGlyphMapper, name, initialize, &_NativeGlyphMapper_ClassInfo_, allocate$NativeGlyphMapper);
	return class$;
}

$Class* NativeGlyphMapper::class$ = nullptr;

	} // font
} // sun