#include <javax/swing/text/Segment.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringIndexOutOfBoundsException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/CharacterIterator.h>
#include <jcpp.h>

#undef DONE

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringIndexOutOfBoundsException = ::java::lang::StringIndexOutOfBoundsException;
using $CharacterIterator = ::java::text::CharacterIterator;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _Segment_FieldInfo_[] = {
	{"array", "[C", nullptr, $PUBLIC, $field(Segment, array)},
	{"offset", "I", nullptr, $PUBLIC, $field(Segment, offset)},
	{"count", "I", nullptr, $PUBLIC, $field(Segment, count)},
	{"copy", "Z", nullptr, 0, $field(Segment, copy)},
	{"partialReturn", "Z", nullptr, $PRIVATE, $field(Segment, partialReturn)},
	{"pos", "I", nullptr, $PRIVATE, $field(Segment, pos)},
	{}
};

$MethodInfo _Segment_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Segment::*)()>(&Segment::init$))},
	{"<init>", "([CII)V", nullptr, $PUBLIC, $method(static_cast<void(Segment::*)($chars*,int32_t,int32_t)>(&Segment::init$))},
	{"charAt", "(I)C", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"current", "()C", nullptr, $PUBLIC},
	{"first", "()C", nullptr, $PUBLIC},
	{"getBeginIndex", "()I", nullptr, $PUBLIC},
	{"getEndIndex", "()I", nullptr, $PUBLIC},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"isPartialReturn", "()Z", nullptr, $PUBLIC},
	{"last", "()C", nullptr, $PUBLIC},
	{"length", "()I", nullptr, $PUBLIC},
	{"next", "()C", nullptr, $PUBLIC},
	{"previous", "()C", nullptr, $PUBLIC},
	{"setIndex", "(I)C", nullptr, $PUBLIC},
	{"setPartialReturn", "(Z)V", nullptr, $PUBLIC},
	{"subSequence", "(II)Ljava/lang/CharSequence;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Segment_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.Segment",
	"java.lang.Object",
	"java.text.CharacterIterator,java.lang.CharSequence",
	_Segment_FieldInfo_,
	_Segment_MethodInfo_
};

$Object* allocate$Segment($Class* clazz) {
	return $of($alloc(Segment));
}

int32_t Segment::hashCode() {
	 return this->$CharacterIterator::hashCode();
}

bool Segment::equals(Object$* arg0) {
	 return this->$CharacterIterator::equals(arg0);
}

void Segment::finalize() {
	this->$CharacterIterator::finalize();
}

void Segment::init$() {
	Segment::init$(nullptr, 0, 0);
}

void Segment::init$($chars* array, int32_t offset, int32_t count) {
	$set(this, array, array);
	this->offset = offset;
	this->count = count;
	this->partialReturn = false;
}

void Segment::setPartialReturn(bool p) {
	this->partialReturn = p;
}

bool Segment::isPartialReturn() {
	return this->partialReturn;
}

$String* Segment::toString() {
	if (this->array != nullptr) {
		return $new($String, this->array, this->offset, this->count);
	}
	return ""_s;
}

char16_t Segment::first() {
	this->pos = this->offset;
	if (this->count != 0) {
		return $nc(this->array)->get(this->pos);
	}
	return $CharacterIterator::DONE;
}

char16_t Segment::last() {
	this->pos = this->offset + this->count;
	if (this->count != 0) {
		this->pos -= 1;
		return $nc(this->array)->get(this->pos);
	}
	return $CharacterIterator::DONE;
}

char16_t Segment::current() {
	if (this->count != 0 && this->pos < this->offset + this->count) {
		return $nc(this->array)->get(this->pos);
	}
	return $CharacterIterator::DONE;
}

char16_t Segment::next() {
	this->pos += 1;
	int32_t end = this->offset + this->count;
	if (this->pos >= end) {
		this->pos = end;
		return $CharacterIterator::DONE;
	}
	return current();
}

char16_t Segment::previous() {
	if (this->pos == this->offset) {
		return $CharacterIterator::DONE;
	}
	this->pos -= 1;
	return current();
}

char16_t Segment::setIndex(int32_t position) {
	$useLocalCurrentObjectStackCache();
	int32_t end = this->offset + this->count;
	if ((position < this->offset) || (position > end)) {
		$throwNew($IllegalArgumentException, $$str({"bad position: "_s, $$str(position)}));
	}
	this->pos = position;
	if ((this->pos != end) && (this->count != 0)) {
		return $nc(this->array)->get(this->pos);
	}
	return $CharacterIterator::DONE;
}

int32_t Segment::getBeginIndex() {
	return this->offset;
}

int32_t Segment::getEndIndex() {
	return this->offset + this->count;
}

int32_t Segment::getIndex() {
	return this->pos;
}

char16_t Segment::charAt(int32_t index) {
	if (index < 0 || index >= this->count) {
		$throwNew($StringIndexOutOfBoundsException, index);
	}
	return $nc(this->array)->get(this->offset + index);
}

int32_t Segment::length() {
	return this->count;
}

$CharSequence* Segment::subSequence(int32_t start, int32_t end) {
	if (start < 0) {
		$throwNew($StringIndexOutOfBoundsException, start);
	}
	if (end > this->count) {
		$throwNew($StringIndexOutOfBoundsException, end);
	}
	if (start > end) {
		$throwNew($StringIndexOutOfBoundsException, end - start);
	}
	$var(Segment, segment, $new(Segment));
	$set(segment, array, this->array);
	segment->offset = this->offset + start;
	segment->count = end - start;
	return segment;
}

$Object* Segment::clone() {
	$useLocalCurrentObjectStackCache();
	$var($Object, o, nullptr);
	try {
		$assign(o, $CharacterIterator::clone());
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, cnse, $catch());
		$assign(o, nullptr);
	}
	return $of(o);
}

Segment::Segment() {
}

$Class* Segment::load$($String* name, bool initialize) {
	$loadClass(Segment, name, initialize, &_Segment_ClassInfo_, allocate$Segment);
	return class$;
}

$Class* Segment::class$ = nullptr;

		} // text
	} // swing
} // javax