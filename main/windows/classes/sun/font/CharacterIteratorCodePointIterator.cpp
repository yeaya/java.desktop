#include <sun/font/CharacterIteratorCodePointIterator.h>

#include <java/text/CharacterIterator.h>
#include <sun/font/CodePointIterator.h>
#include <jcpp.h>

#undef DONE

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterIterator = ::java::text::CharacterIterator;
using $CodePointIterator = ::sun::font::CodePointIterator;

namespace sun {
	namespace font {

$FieldInfo _CharacterIteratorCodePointIterator_FieldInfo_[] = {
	{"iter", "Ljava/text/CharacterIterator;", nullptr, $PRIVATE, $field(CharacterIteratorCodePointIterator, iter)},
	{}
};

$MethodInfo _CharacterIteratorCodePointIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/text/CharacterIterator;)V", nullptr, $PUBLIC, $method(static_cast<void(CharacterIteratorCodePointIterator::*)($CharacterIterator*)>(&CharacterIteratorCodePointIterator::init$))},
	{"charIndex", "()I", nullptr, $PUBLIC},
	{"next", "()I", nullptr, $PUBLIC},
	{"prev", "()I", nullptr, $PUBLIC},
	{"setToLimit", "()V", nullptr, $PUBLIC},
	{"setToStart", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CharacterIteratorCodePointIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.font.CharacterIteratorCodePointIterator",
	"sun.font.CodePointIterator",
	nullptr,
	_CharacterIteratorCodePointIterator_FieldInfo_,
	_CharacterIteratorCodePointIterator_MethodInfo_
};

$Object* allocate$CharacterIteratorCodePointIterator($Class* clazz) {
	return $of($alloc(CharacterIteratorCodePointIterator));
}

void CharacterIteratorCodePointIterator::init$($CharacterIterator* iter) {
	$CodePointIterator::init$();
	$set(this, iter, iter);
}

void CharacterIteratorCodePointIterator::setToStart() {
	$nc(this->iter)->setIndex($nc(this->iter)->getBeginIndex());
}

void CharacterIteratorCodePointIterator::setToLimit() {
	$nc(this->iter)->setIndex($nc(this->iter)->getEndIndex());
}

int32_t CharacterIteratorCodePointIterator::next() {
	char16_t cp1 = $nc(this->iter)->current();
	if (cp1 != $CharacterIterator::DONE) {
		char16_t cp2 = $nc(this->iter)->next();
		if ($Character::isHighSurrogate(cp1) && cp2 != $CharacterIterator::DONE) {
			if ($Character::isLowSurrogate(cp2)) {
				$nc(this->iter)->next();
				return $Character::toCodePoint(cp1, cp2);
			}
		}
		return cp1;
	}
	return $CodePointIterator::DONE;
}

int32_t CharacterIteratorCodePointIterator::prev() {
	char16_t cp2 = $nc(this->iter)->previous();
	if (cp2 != $CharacterIterator::DONE) {
		if ($Character::isLowSurrogate(cp2)) {
			char16_t cp1 = $nc(this->iter)->previous();
			if ($Character::isHighSurrogate(cp1)) {
				return $Character::toCodePoint(cp1, cp2);
			}
			$nc(this->iter)->next();
		}
		return cp2;
	}
	return $CodePointIterator::DONE;
}

int32_t CharacterIteratorCodePointIterator::charIndex() {
	return $nc(this->iter)->getIndex();
}

CharacterIteratorCodePointIterator::CharacterIteratorCodePointIterator() {
}

$Class* CharacterIteratorCodePointIterator::load$($String* name, bool initialize) {
	$loadClass(CharacterIteratorCodePointIterator, name, initialize, &_CharacterIteratorCodePointIterator_ClassInfo_, allocate$CharacterIteratorCodePointIterator);
	return class$;
}

$Class* CharacterIteratorCodePointIterator::class$ = nullptr;

	} // font
} // sun