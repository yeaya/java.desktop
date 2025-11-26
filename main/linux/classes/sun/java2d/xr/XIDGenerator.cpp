#include <sun/java2d/xr/XIDGenerator.h>

#include <jcpp.h>

#undef XID_BUFFER_SIZE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XIDGenerator_FieldInfo_[] = {
	{"XID_BUFFER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XIDGenerator, XID_BUFFER_SIZE)},
	{"xidBuffer", "[I", nullptr, 0, $field(XIDGenerator, xidBuffer)},
	{"currentIndex", "I", nullptr, 0, $field(XIDGenerator, currentIndex)},
	{}
};

$MethodInfo _XIDGenerator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XIDGenerator::*)()>(&XIDGenerator::init$))},
	{"bufferXIDs", "([II)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)($ints*,int32_t)>(&XIDGenerator::bufferXIDs))},
	{"getNextXID", "()I", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_bufferXIDs 1

$ClassInfo _XIDGenerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XIDGenerator",
	"java.lang.Object",
	nullptr,
	_XIDGenerator_FieldInfo_,
	_XIDGenerator_MethodInfo_
};

$Object* allocate$XIDGenerator($Class* clazz) {
	return $of($alloc(XIDGenerator));
}

void XIDGenerator::init$() {
	$set(this, xidBuffer, $new($ints, XIDGenerator::XID_BUFFER_SIZE));
	this->currentIndex = XIDGenerator::XID_BUFFER_SIZE;
}

int32_t XIDGenerator::getNextXID() {
	if (this->currentIndex >= XIDGenerator::XID_BUFFER_SIZE) {
		bufferXIDs(this->xidBuffer, $nc(this->xidBuffer)->length);
		this->currentIndex = 0;
	}
	return $nc(this->xidBuffer)->get(this->currentIndex++);
}

void XIDGenerator::bufferXIDs($ints* buffer, int32_t arraySize) {
	$init(XIDGenerator);
	$prepareNativeStatic(XIDGenerator, bufferXIDs, void, $ints* buffer, int32_t arraySize);
	$invokeNativeStatic(XIDGenerator, bufferXIDs, buffer, arraySize);
	$finishNativeStatic();
}

XIDGenerator::XIDGenerator() {
}

$Class* XIDGenerator::load$($String* name, bool initialize) {
	$loadClass(XIDGenerator, name, initialize, &_XIDGenerator_ClassInfo_, allocate$XIDGenerator);
	return class$;
}

$Class* XIDGenerator::class$ = nullptr;

		} // xr
	} // java2d
} // sun