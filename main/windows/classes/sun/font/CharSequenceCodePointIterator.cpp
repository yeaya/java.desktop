#include <sun/font/CharSequenceCodePointIterator.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/CodePointIterator.h>
#include <jcpp.h>

#undef DONE

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodePointIterator = ::sun::font::CodePointIterator;

namespace sun {
	namespace font {

$FieldInfo _CharSequenceCodePointIterator_FieldInfo_[] = {
	{"text", "Ljava/lang/CharSequence;", nullptr, $PRIVATE, $field(CharSequenceCodePointIterator, text)},
	{"index", "I", nullptr, $PRIVATE, $field(CharSequenceCodePointIterator, index)},
	{}
};

$MethodInfo _CharSequenceCodePointIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $method(static_cast<void(CharSequenceCodePointIterator::*)($CharSequence*)>(&CharSequenceCodePointIterator::init$))},
	{"charIndex", "()I", nullptr, $PUBLIC},
	{"next", "()I", nullptr, $PUBLIC},
	{"prev", "()I", nullptr, $PUBLIC},
	{"setToLimit", "()V", nullptr, $PUBLIC},
	{"setToStart", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CharSequenceCodePointIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.font.CharSequenceCodePointIterator",
	"sun.font.CodePointIterator",
	nullptr,
	_CharSequenceCodePointIterator_FieldInfo_,
	_CharSequenceCodePointIterator_MethodInfo_
};

$Object* allocate$CharSequenceCodePointIterator($Class* clazz) {
	return $of($alloc(CharSequenceCodePointIterator));
}

void CharSequenceCodePointIterator::init$($CharSequence* text) {
	$CodePointIterator::init$();
	$set(this, text, text);
}

void CharSequenceCodePointIterator::setToStart() {
	this->index = 0;
}

void CharSequenceCodePointIterator::setToLimit() {
	this->index = $nc(this->text)->length();
}

int32_t CharSequenceCodePointIterator::next() {
	if (this->index < $nc(this->text)->length()) {
		char16_t cp1 = $nc(this->text)->charAt(this->index++);
		bool var$0 = $Character::isHighSurrogate(cp1);
		if (var$0 && this->index < $nc(this->text)->length()) {
			char16_t cp2 = $nc(this->text)->charAt(this->index + 1);
			if ($Character::isLowSurrogate(cp2)) {
				++this->index;
				return $Character::toCodePoint(cp1, cp2);
			}
		}
		return cp1;
	}
	return $CodePointIterator::DONE;
}

int32_t CharSequenceCodePointIterator::prev() {
	if (this->index > 0) {
		char16_t cp2 = $nc(this->text)->charAt(--this->index);
		if ($Character::isLowSurrogate(cp2) && this->index > 0) {
			char16_t cp1 = $nc(this->text)->charAt(this->index - 1);
			if ($Character::isHighSurrogate(cp1)) {
				--this->index;
				return $Character::toCodePoint(cp1, cp2);
			}
		}
		return cp2;
	}
	return $CodePointIterator::DONE;
}

int32_t CharSequenceCodePointIterator::charIndex() {
	return this->index;
}

CharSequenceCodePointIterator::CharSequenceCodePointIterator() {
}

$Class* CharSequenceCodePointIterator::load$($String* name, bool initialize) {
	$loadClass(CharSequenceCodePointIterator, name, initialize, &_CharSequenceCodePointIterator_ClassInfo_, allocate$CharSequenceCodePointIterator);
	return class$;
}

$Class* CharSequenceCodePointIterator::class$ = nullptr;

	} // font
} // sun