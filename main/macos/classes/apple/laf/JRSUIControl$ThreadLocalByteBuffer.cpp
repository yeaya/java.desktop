#include <apple/laf/JRSUIControl$ThreadLocalByteBuffer.h>

#include <apple/laf/JRSUIControl.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <jcpp.h>

using $JRSUIControl = ::apple::laf::JRSUIControl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIControl$ThreadLocalByteBuffer_FieldInfo_[] = {
	{"buffer", "Ljava/nio/ByteBuffer;", nullptr, $FINAL, $field(JRSUIControl$ThreadLocalByteBuffer, buffer)},
	{"ptr", "J", nullptr, $FINAL, $field(JRSUIControl$ThreadLocalByteBuffer, ptr)},
	{}
};

$MethodInfo _JRSUIControl$ThreadLocalByteBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JRSUIControl$ThreadLocalByteBuffer::*)()>(&JRSUIControl$ThreadLocalByteBuffer::init$))},
	{}
};

$InnerClassInfo _JRSUIControl$ThreadLocalByteBuffer_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIControl$ThreadLocalByteBuffer", "apple.laf.JRSUIControl", "ThreadLocalByteBuffer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _JRSUIControl$ThreadLocalByteBuffer_ClassInfo_ = {
	$ACC_SUPER,
	"apple.laf.JRSUIControl$ThreadLocalByteBuffer",
	"java.lang.Object",
	nullptr,
	_JRSUIControl$ThreadLocalByteBuffer_FieldInfo_,
	_JRSUIControl$ThreadLocalByteBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIControl$ThreadLocalByteBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIControl"
};

$Object* allocate$JRSUIControl$ThreadLocalByteBuffer($Class* clazz) {
	return $of($alloc(JRSUIControl$ThreadLocalByteBuffer));
}

void JRSUIControl$ThreadLocalByteBuffer::init$() {
	$set(this, buffer, $ByteBuffer::allocateDirect(128));
	$nc(this->buffer)->order($($ByteOrder::nativeOrder()));
	this->ptr = $JRSUIControl::getPtrOfBuffer(this->buffer);
}

JRSUIControl$ThreadLocalByteBuffer::JRSUIControl$ThreadLocalByteBuffer() {
}

$Class* JRSUIControl$ThreadLocalByteBuffer::load$($String* name, bool initialize) {
	$loadClass(JRSUIControl$ThreadLocalByteBuffer, name, initialize, &_JRSUIControl$ThreadLocalByteBuffer_ClassInfo_, allocate$JRSUIControl$ThreadLocalByteBuffer);
	return class$;
}

$Class* JRSUIControl$ThreadLocalByteBuffer::class$ = nullptr;

	} // laf
} // apple