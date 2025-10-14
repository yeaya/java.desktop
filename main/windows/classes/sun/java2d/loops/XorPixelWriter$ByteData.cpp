#include <sun/java2d/loops/XorPixelWriter$ByteData.h>

#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/XorPixelWriter.h>
#include <jcpp.h>

using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;
using $XorPixelWriter = ::sun::java2d::loops::XorPixelWriter;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _XorPixelWriter$ByteData_FieldInfo_[] = {
	{"xorData", "[B", nullptr, 0, $field(XorPixelWriter$ByteData, xorData)},
	{}
};

$MethodInfo _XorPixelWriter$ByteData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(XorPixelWriter$ByteData::*)(Object$*,Object$*)>(&XorPixelWriter$ByteData::init$))},
	{"setRaster", "(Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"writePixel", "(II)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"xorPixel", "(Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _XorPixelWriter$ByteData_InnerClassesInfo_[] = {
	{"sun.java2d.loops.XorPixelWriter$ByteData", "sun.java2d.loops.XorPixelWriter", "ByteData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XorPixelWriter$ByteData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.XorPixelWriter$ByteData",
	"sun.java2d.loops.XorPixelWriter",
	nullptr,
	_XorPixelWriter$ByteData_FieldInfo_,
	_XorPixelWriter$ByteData_MethodInfo_,
	nullptr,
	nullptr,
	_XorPixelWriter$ByteData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.XorPixelWriter"
};

$Object* allocate$XorPixelWriter$ByteData($Class* clazz) {
	return $of($alloc(XorPixelWriter$ByteData));
}

void XorPixelWriter$ByteData::init$(Object$* srcPixel, Object$* xorPixel) {
	$XorPixelWriter::init$();
	$set(this, xorData, $cast($bytes, srcPixel));
	this->xorPixel(xorPixel);
	$set(this, xorData, $cast($bytes, xorPixel));
}

void XorPixelWriter$ByteData::xorPixel(Object$* pixData) {
	$var($bytes, dstData, $cast($bytes, pixData));
	for (int32_t i = 0; i < $nc(dstData)->length; ++i) {
		(*dstData)[i] ^= $nc(this->xorData)->get(i);
	}
}

void XorPixelWriter$ByteData::writePixel(int32_t x, int32_t y) {
	$XorPixelWriter::writePixel(x, y);
}

void XorPixelWriter$ByteData::setRaster($WritableRaster* dstRast) {
	$XorPixelWriter::setRaster(dstRast);
}

XorPixelWriter$ByteData::XorPixelWriter$ByteData() {
}

$Class* XorPixelWriter$ByteData::load$($String* name, bool initialize) {
	$loadClass(XorPixelWriter$ByteData, name, initialize, &_XorPixelWriter$ByteData_ClassInfo_, allocate$XorPixelWriter$ByteData);
	return class$;
}

$Class* XorPixelWriter$ByteData::class$ = nullptr;

		} // loops
	} // java2d
} // sun