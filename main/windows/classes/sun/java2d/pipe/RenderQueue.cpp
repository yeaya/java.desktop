#include <sun/java2d/pipe/RenderQueue.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/pipe/BufferedOpCodes.h>
#include <sun/java2d/pipe/RenderBuffer.h>
#include <jcpp.h>

#undef BUFFER_SIZE
#undef NOOP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $SunToolkit = ::sun::awt::SunToolkit;
using $BufferedOpCodes = ::sun::java2d::pipe::BufferedOpCodes;
using $RenderBuffer = ::sun::java2d::pipe::RenderBuffer;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _RenderQueue_FieldInfo_[] = {
	{"BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RenderQueue, BUFFER_SIZE)},
	{"buf", "Lsun/java2d/pipe/RenderBuffer;", nullptr, $PROTECTED, $field(RenderQueue, buf)},
	{"refSet", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Object;>;", $PROTECTED, $field(RenderQueue, refSet)},
	{}
};

$MethodInfo _RenderQueue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(RenderQueue::*)()>(&RenderQueue::init$))},
	{"addReference", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(RenderQueue::*)(Object$*)>(&RenderQueue::addReference))},
	{"ensureAlignment", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(RenderQueue::*)(int32_t)>(&RenderQueue::ensureAlignment))},
	{"ensureCapacity", "(I)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(RenderQueue::*)(int32_t)>(&RenderQueue::ensureCapacity))},
	{"ensureCapacityAndAlignment", "(II)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(RenderQueue::*)(int32_t,int32_t)>(&RenderQueue::ensureCapacityAndAlignment))},
	{"flushAndInvokeNow", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"flushNow", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"flushNow", "(I)V", nullptr, $PUBLIC},
	{"getBuffer", "()Lsun/java2d/pipe/RenderBuffer;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$RenderBuffer*(RenderQueue::*)()>(&RenderQueue::getBuffer))},
	{"lock", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(RenderQueue::*)()>(&RenderQueue::lock))},
	{"tryLock", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(RenderQueue::*)()>(&RenderQueue::tryLock))},
	{"unlock", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(RenderQueue::*)()>(&RenderQueue::unlock))},
	{}
};

$ClassInfo _RenderQueue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.pipe.RenderQueue",
	"java.lang.Object",
	nullptr,
	_RenderQueue_FieldInfo_,
	_RenderQueue_MethodInfo_
};

$Object* allocate$RenderQueue($Class* clazz) {
	return $of($alloc(RenderQueue));
}

void RenderQueue::init$() {
	$set(this, refSet, $new($HashSet));
	$set(this, buf, $RenderBuffer::allocate(RenderQueue::BUFFER_SIZE));
}

void RenderQueue::lock() {
	$SunToolkit::awtLock();
}

bool RenderQueue::tryLock() {
	return $SunToolkit::awtTryLock();
}

void RenderQueue::unlock() {
	$SunToolkit::awtUnlock();
}

void RenderQueue::addReference(Object$* ref) {
	$nc(this->refSet)->add(ref);
}

$RenderBuffer* RenderQueue::getBuffer() {
	return this->buf;
}

void RenderQueue::ensureCapacity(int32_t opsize) {
	if ($nc(this->buf)->remaining() < opsize) {
		flushNow();
	}
}

void RenderQueue::ensureCapacityAndAlignment(int32_t opsize, int32_t first8ByteValueOffset) {
	ensureCapacity(opsize + 4);
	ensureAlignment(first8ByteValueOffset);
}

void RenderQueue::ensureAlignment(int32_t first8ByteValueOffset) {
	int32_t first8ByteValuePosition = $nc(this->buf)->position() + first8ByteValueOffset;
	if (((int32_t)(first8ByteValuePosition & (uint32_t)7)) != 0) {
		$nc(this->buf)->putInt($BufferedOpCodes::NOOP);
	}
}

void RenderQueue::flushNow(int32_t position) {
	$nc(this->buf)->position(position);
	flushNow();
}

RenderQueue::RenderQueue() {
}

$Class* RenderQueue::load$($String* name, bool initialize) {
	$loadClass(RenderQueue, name, initialize, &_RenderQueue_ClassInfo_, allocate$RenderQueue);
	return class$;
}

$Class* RenderQueue::class$ = nullptr;

		} // pipe
	} // java2d
} // sun