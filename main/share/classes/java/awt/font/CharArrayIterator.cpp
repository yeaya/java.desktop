#include <java/awt/font/CharArrayIterator.h>

#include <java/text/CharacterIterator.h>
#include <jcpp.h>

#undef DONE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterIterator = ::java::text::CharacterIterator;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _CharArrayIterator_FieldInfo_[] = {
	{"chars", "[C", nullptr, $PRIVATE, $field(CharArrayIterator, chars)},
	{"pos", "I", nullptr, $PRIVATE, $field(CharArrayIterator, pos)},
	{"begin", "I", nullptr, $PRIVATE, $field(CharArrayIterator, begin)},
	{}
};

$MethodInfo _CharArrayIterator_MethodInfo_[] = {
	{"<init>", "([C)V", nullptr, 0, $method(static_cast<void(CharArrayIterator::*)($chars*)>(&CharArrayIterator::init$))},
	{"<init>", "([CI)V", nullptr, 0, $method(static_cast<void(CharArrayIterator::*)($chars*,int32_t)>(&CharArrayIterator::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"current", "()C", nullptr, $PUBLIC},
	{"first", "()C", nullptr, $PUBLIC},
	{"getBeginIndex", "()I", nullptr, $PUBLIC},
	{"getEndIndex", "()I", nullptr, $PUBLIC},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"last", "()C", nullptr, $PUBLIC},
	{"next", "()C", nullptr, $PUBLIC},
	{"previous", "()C", nullptr, $PUBLIC},
	{"reset", "([C)V", nullptr, 0},
	{"reset", "([CI)V", nullptr, 0},
	{"setIndex", "(I)C", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CharArrayIterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.font.CharArrayIterator",
	"java.lang.Object",
	"java.text.CharacterIterator",
	_CharArrayIterator_FieldInfo_,
	_CharArrayIterator_MethodInfo_
};

$Object* allocate$CharArrayIterator($Class* clazz) {
	return $of($alloc(CharArrayIterator));
}

void CharArrayIterator::init$($chars* chars) {
	reset(chars, 0);
}

void CharArrayIterator::init$($chars* chars, int32_t begin) {
	reset(chars, begin);
}

char16_t CharArrayIterator::first() {
	this->pos = 0;
	return current();
}

char16_t CharArrayIterator::last() {
	if ($nc(this->chars)->length > 0) {
		this->pos = $nc(this->chars)->length - 1;
	} else {
		this->pos = 0;
	}
	return current();
}

char16_t CharArrayIterator::current() {
	if (this->pos >= 0 && this->pos < $nc(this->chars)->length) {
		return $nc(this->chars)->get(this->pos);
	} else {
		return $CharacterIterator::DONE;
	}
}

char16_t CharArrayIterator::next() {
	if (this->pos < $nc(this->chars)->length - 1) {
		++this->pos;
		return $nc(this->chars)->get(this->pos);
	} else {
		this->pos = $nc(this->chars)->length;
		return $CharacterIterator::DONE;
	}
}

char16_t CharArrayIterator::previous() {
	if (this->pos > 0) {
		--this->pos;
		return $nc(this->chars)->get(this->pos);
	} else {
		this->pos = 0;
		return $CharacterIterator::DONE;
	}
}

char16_t CharArrayIterator::setIndex(int32_t position) {
	position -= this->begin;
	if (position < 0 || position > $nc(this->chars)->length) {
		$throwNew($IllegalArgumentException, "Invalid index"_s);
	}
	this->pos = position;
	return current();
}

int32_t CharArrayIterator::getBeginIndex() {
	return this->begin;
}

int32_t CharArrayIterator::getEndIndex() {
	return this->begin + $nc(this->chars)->length;
}

int32_t CharArrayIterator::getIndex() {
	return this->begin + this->pos;
}

$Object* CharArrayIterator::clone() {
	$var(CharArrayIterator, c, $new(CharArrayIterator, this->chars, this->begin));
	c->pos = this->pos;
	return $of(c);
}

void CharArrayIterator::reset($chars* chars) {
	reset(chars, 0);
}

void CharArrayIterator::reset($chars* chars, int32_t begin) {
	$set(this, chars, chars);
	this->begin = begin;
	this->pos = 0;
}

CharArrayIterator::CharArrayIterator() {
}

$Class* CharArrayIterator::load$($String* name, bool initialize) {
	$loadClass(CharArrayIterator, name, initialize, &_CharArrayIterator_ClassInfo_, allocate$CharArrayIterator);
	return class$;
}

$Class* CharArrayIterator::class$ = nullptr;

		} // font
	} // awt
} // java