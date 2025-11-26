#include <sun/font/FontRunIterator.h>

#include <sun/font/CharToGlyphMapper.h>
#include <sun/font/CompositeFont.h>
#include <sun/font/CompositeGlyphMapper.h>
#include <sun/font/PhysicalFont.h>
#include <sun/font/Script.h>
#include <jcpp.h>

#undef COMMON
#undef DONE
#undef LEAD_LIMIT
#undef LEAD_START
#undef LEAD_SURROGATE_SHIFT
#undef SLOTMASK
#undef SURROGATE_OFFSET
#undef SURROGATE_START
#undef TAIL_LIMIT
#undef TAIL_START

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharToGlyphMapper = ::sun::font::CharToGlyphMapper;
using $CompositeFont = ::sun::font::CompositeFont;
using $CompositeGlyphMapper = ::sun::font::CompositeGlyphMapper;
using $PhysicalFont = ::sun::font::PhysicalFont;
using $Script = ::sun::font::Script;

namespace sun {
	namespace font {

$FieldInfo _FontRunIterator_FieldInfo_[] = {
	{"font", "Lsun/font/CompositeFont;", nullptr, 0, $field(FontRunIterator, font)},
	{"text", "[C", nullptr, 0, $field(FontRunIterator, text)},
	{"start", "I", nullptr, 0, $field(FontRunIterator, start)},
	{"limit", "I", nullptr, 0, $field(FontRunIterator, limit)},
	{"mapper", "Lsun/font/CompositeGlyphMapper;", nullptr, 0, $field(FontRunIterator, mapper)},
	{"slot", "I", nullptr, 0, $field(FontRunIterator, slot)},
	{"pos", "I", nullptr, 0, $field(FontRunIterator, pos)},
	{"SURROGATE_START", "I", nullptr, $STATIC | $FINAL, $constField(FontRunIterator, SURROGATE_START)},
	{"LEAD_START", "I", nullptr, $STATIC | $FINAL, $constField(FontRunIterator, LEAD_START)},
	{"LEAD_LIMIT", "I", nullptr, $STATIC | $FINAL, $constField(FontRunIterator, LEAD_LIMIT)},
	{"TAIL_START", "I", nullptr, $STATIC | $FINAL, $constField(FontRunIterator, TAIL_START)},
	{"TAIL_LIMIT", "I", nullptr, $STATIC | $FINAL, $constField(FontRunIterator, TAIL_LIMIT)},
	{"LEAD_SURROGATE_SHIFT", "I", nullptr, $STATIC | $FINAL, $constField(FontRunIterator, LEAD_SURROGATE_SHIFT)},
	{"SURROGATE_OFFSET", "I", nullptr, $STATIC | $FINAL, $constField(FontRunIterator, SURROGATE_OFFSET)},
	{"DONE", "I", nullptr, $STATIC | $FINAL, $constField(FontRunIterator, DONE)},
	{}
};

$MethodInfo _FontRunIterator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontRunIterator::*)()>(&FontRunIterator::init$))},
	{"getFont", "()Lsun/font/PhysicalFont;", nullptr, $PUBLIC, $method(static_cast<$PhysicalFont*(FontRunIterator::*)()>(&FontRunIterator::getFont))},
	{"getGlyphMask", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(FontRunIterator::*)()>(&FontRunIterator::getGlyphMask))},
	{"getPos", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(FontRunIterator::*)()>(&FontRunIterator::getPos))},
	{"init", "(Lsun/font/CompositeFont;[CII)V", nullptr, $PUBLIC, $method(static_cast<void(FontRunIterator::*)($CompositeFont*,$chars*,int32_t,int32_t)>(&FontRunIterator::init))},
	{"next", "(II)Z", nullptr, $PUBLIC, $method(static_cast<bool(FontRunIterator::*)(int32_t,int32_t)>(&FontRunIterator::next))},
	{"next", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(FontRunIterator::*)()>(&FontRunIterator::next))},
	{"nextCodePoint", "()I", nullptr, 0, $method(static_cast<int32_t(FontRunIterator::*)()>(&FontRunIterator::nextCodePoint))},
	{"nextCodePoint", "(I)I", nullptr, 0, $method(static_cast<int32_t(FontRunIterator::*)(int32_t)>(&FontRunIterator::nextCodePoint))},
	{"pushback", "(I)V", nullptr, 0, $method(static_cast<void(FontRunIterator::*)(int32_t)>(&FontRunIterator::pushback))},
	{}
};

$ClassInfo _FontRunIterator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.font.FontRunIterator",
	"java.lang.Object",
	nullptr,
	_FontRunIterator_FieldInfo_,
	_FontRunIterator_MethodInfo_
};

$Object* allocate$FontRunIterator($Class* clazz) {
	return $of($alloc(FontRunIterator));
}

void FontRunIterator::init$() {
	this->slot = -1;
}

void FontRunIterator::init($CompositeFont* font, $chars* text, int32_t start, int32_t limit) {
	if (font == nullptr || text == nullptr || start < 0 || limit < start || limit > $nc(text)->length) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, font, font);
	$set(this, text, text);
	this->start = start;
	this->limit = limit;
	$set(this, mapper, $cast($CompositeGlyphMapper, $nc(font)->getMapper()));
	this->slot = -1;
	this->pos = start;
}

$PhysicalFont* FontRunIterator::getFont() {
	return this->slot == -1 ? ($PhysicalFont*)nullptr : $nc(this->font)->getSlotFont(this->slot);
}

int32_t FontRunIterator::getGlyphMask() {
	return this->slot << 24;
}

int32_t FontRunIterator::getPos() {
	return this->pos;
}

bool FontRunIterator::next(int32_t script, int32_t lim) {
	if (this->pos == lim) {
		return false;
	}
	int32_t ch = nextCodePoint(lim);
	int32_t sl = (int32_t)($nc(this->mapper)->charToGlyph(ch) & (uint32_t)$CompositeGlyphMapper::SLOTMASK);
	this->slot = (int32_t)((uint32_t)sl >> 24);
	while (true) {
		bool var$0 = (ch = nextCodePoint(lim)) != FontRunIterator::DONE;
		if (!(var$0 && ((int32_t)($nc(this->mapper)->charToGlyph(ch) & (uint32_t)$CompositeGlyphMapper::SLOTMASK)) == sl)) {
			break;
		}
		{
		}
	}
	pushback(ch);
	return true;
}

bool FontRunIterator::next() {
	return next($Script::COMMON, this->limit);
}

int32_t FontRunIterator::nextCodePoint() {
	return nextCodePoint(this->limit);
}

int32_t FontRunIterator::nextCodePoint(int32_t lim) {
	if (this->pos >= lim) {
		return FontRunIterator::DONE;
	}
	int32_t ch = $nc(this->text)->get(this->pos++);
	if (ch >= FontRunIterator::LEAD_START && ch < FontRunIterator::LEAD_LIMIT && this->pos < lim) {
		int32_t nch = $nc(this->text)->get(this->pos);
		if (nch >= FontRunIterator::TAIL_START && nch < FontRunIterator::TAIL_LIMIT) {
			++this->pos;
			ch = ($sl(ch, FontRunIterator::LEAD_SURROGATE_SHIFT)) + nch + FontRunIterator::SURROGATE_OFFSET;
		}
	}
	return ch;
}

void FontRunIterator::pushback(int32_t ch) {
	if (ch >= 0) {
		if (ch >= 0x00010000) {
			this->pos -= 2;
		} else {
			this->pos -= 1;
		}
	}
}

FontRunIterator::FontRunIterator() {
}

$Class* FontRunIterator::load$($String* name, bool initialize) {
	$loadClass(FontRunIterator, name, initialize, &_FontRunIterator_ClassInfo_, allocate$FontRunIterator);
	return class$;
}

$Class* FontRunIterator::class$ = nullptr;

	} // font
} // sun