#include <sun/awt/X11InputMethodBase$IntBuffer.h>

#include <sun/awt/X11InputMethodBase.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11InputMethodBase = ::sun::awt::X11InputMethodBase;

namespace sun {
	namespace awt {

$FieldInfo _X11InputMethodBase$IntBuffer_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11InputMethodBase;", nullptr, $FINAL | $SYNTHETIC, $field(X11InputMethodBase$IntBuffer, this$0)},
	{"intArray", "[I", nullptr, $PRIVATE, $field(X11InputMethodBase$IntBuffer, intArray)},
	{"size", "I", nullptr, $PRIVATE, $field(X11InputMethodBase$IntBuffer, size)},
	{"index", "I", nullptr, $PRIVATE, $field(X11InputMethodBase$IntBuffer, index)},
	{}
};

$MethodInfo _X11InputMethodBase$IntBuffer_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11InputMethodBase;I)V", nullptr, 0, $method(static_cast<void(X11InputMethodBase$IntBuffer::*)($X11InputMethodBase*,int32_t)>(&X11InputMethodBase$IntBuffer::init$))},
	{"getNext", "()I", nullptr, 0, $method(static_cast<int32_t(X11InputMethodBase$IntBuffer::*)()>(&X11InputMethodBase$IntBuffer::getNext))},
	{"getOffset", "()I", nullptr, 0, $method(static_cast<int32_t(X11InputMethodBase$IntBuffer::*)()>(&X11InputMethodBase$IntBuffer::getOffset))},
	{"insert", "(I[I)V", nullptr, 0, $method(static_cast<void(X11InputMethodBase$IntBuffer::*)(int32_t,$ints*)>(&X11InputMethodBase$IntBuffer::insert))},
	{"remove", "(II)V", nullptr, 0, $method(static_cast<void(X11InputMethodBase$IntBuffer::*)(int32_t,int32_t)>(&X11InputMethodBase$IntBuffer::remove))},
	{"removeAll", "()V", nullptr, 0, $method(static_cast<void(X11InputMethodBase$IntBuffer::*)()>(&X11InputMethodBase$IntBuffer::removeAll))},
	{"replace", "(I[I)V", nullptr, 0, $method(static_cast<void(X11InputMethodBase$IntBuffer::*)(int32_t,$ints*)>(&X11InputMethodBase$IntBuffer::replace))},
	{"rewind", "()V", nullptr, 0, $method(static_cast<void(X11InputMethodBase$IntBuffer::*)()>(&X11InputMethodBase$IntBuffer::rewind))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unget", "()V", nullptr, 0, $method(static_cast<void(X11InputMethodBase$IntBuffer::*)()>(&X11InputMethodBase$IntBuffer::unget))},
	{}
};

$InnerClassInfo _X11InputMethodBase$IntBuffer_InnerClassesInfo_[] = {
	{"sun.awt.X11InputMethodBase$IntBuffer", "sun.awt.X11InputMethodBase", "IntBuffer", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _X11InputMethodBase$IntBuffer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11InputMethodBase$IntBuffer",
	"java.lang.Object",
	nullptr,
	_X11InputMethodBase$IntBuffer_FieldInfo_,
	_X11InputMethodBase$IntBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_X11InputMethodBase$IntBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11InputMethodBase"
};

$Object* allocate$X11InputMethodBase$IntBuffer($Class* clazz) {
	return $of($alloc(X11InputMethodBase$IntBuffer));
}

void X11InputMethodBase$IntBuffer::init$($X11InputMethodBase* this$0, int32_t initialCapacity) {
	$set(this, this$0, this$0);
	$set(this, intArray, $new($ints, initialCapacity));
	this->size = 0;
	this->index = 0;
}

void X11InputMethodBase$IntBuffer::insert(int32_t offset, $ints* values) {
	int32_t newSize = this->size + $nc(values)->length;
	if ($nc(this->intArray)->length < newSize) {
		$var($ints, newIntArray, $new($ints, newSize * 2));
		$System::arraycopy(this->intArray, 0, newIntArray, 0, this->size);
		$set(this, intArray, newIntArray);
	}
	$System::arraycopy(this->intArray, offset, this->intArray, offset + values->length, this->size - offset);
	$System::arraycopy(values, 0, this->intArray, offset, values->length);
	this->size += values->length;
	if (this->index > offset) {
		this->index = offset;
	}
}

void X11InputMethodBase$IntBuffer::remove(int32_t offset, int32_t length) {
	if (offset + length != this->size) {
		$System::arraycopy(this->intArray, offset + length, this->intArray, offset, this->size - offset - length);
	}
	this->size -= length;
	if (this->index > offset) {
		this->index = offset;
	}
}

void X11InputMethodBase$IntBuffer::replace(int32_t offset, $ints* values) {
	$System::arraycopy(values, 0, this->intArray, offset, $nc(values)->length);
}

void X11InputMethodBase$IntBuffer::removeAll() {
	this->size = 0;
	this->index = 0;
}

void X11InputMethodBase$IntBuffer::rewind() {
	this->index = 0;
}

int32_t X11InputMethodBase$IntBuffer::getNext() {
	if (this->index == this->size) {
		return -1;
	}
	return $nc(this->intArray)->get(this->index++);
}

void X11InputMethodBase$IntBuffer::unget() {
	if (this->index != 0) {
		--this->index;
	}
}

int32_t X11InputMethodBase$IntBuffer::getOffset() {
	return this->index;
}

$String* X11InputMethodBase$IntBuffer::toString() {
	$var($StringBuilder, s, $new($StringBuilder));
	for (int32_t i = 0; i < this->size;) {
		s->append($nc(this->intArray)->get(i++));
		if (i < this->size) {
			s->append(","_s);
		}
	}
	return s->toString();
}

X11InputMethodBase$IntBuffer::X11InputMethodBase$IntBuffer() {
}

$Class* X11InputMethodBase$IntBuffer::load$($String* name, bool initialize) {
	$loadClass(X11InputMethodBase$IntBuffer, name, initialize, &_X11InputMethodBase$IntBuffer_ClassInfo_, allocate$X11InputMethodBase$IntBuffer);
	return class$;
}

$Class* X11InputMethodBase$IntBuffer::class$ = nullptr;

	} // awt
} // sun