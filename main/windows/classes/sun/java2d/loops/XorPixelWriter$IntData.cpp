#include <sun/java2d/loops/XorPixelWriter$IntData.h>

#include <java/awt/image/WritableRaster.h>
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

$FieldInfo _XorPixelWriter$IntData_FieldInfo_[] = {
	{"xorData", "[I", nullptr, 0, $field(XorPixelWriter$IntData, xorData)},
	{}
};

$MethodInfo _XorPixelWriter$IntData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(XorPixelWriter$IntData::*)(Object$*,Object$*)>(&XorPixelWriter$IntData::init$))},
	{"setRaster", "(Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"writePixel", "(II)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"xorPixel", "(Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _XorPixelWriter$IntData_InnerClassesInfo_[] = {
	{"sun.java2d.loops.XorPixelWriter$IntData", "sun.java2d.loops.XorPixelWriter", "IntData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XorPixelWriter$IntData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.XorPixelWriter$IntData",
	"sun.java2d.loops.XorPixelWriter",
	nullptr,
	_XorPixelWriter$IntData_FieldInfo_,
	_XorPixelWriter$IntData_MethodInfo_,
	nullptr,
	nullptr,
	_XorPixelWriter$IntData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.XorPixelWriter"
};

$Object* allocate$XorPixelWriter$IntData($Class* clazz) {
	return $of($alloc(XorPixelWriter$IntData));
}

void XorPixelWriter$IntData::init$(Object$* srcPixel, Object$* xorPixel) {
	$XorPixelWriter::init$();
	$set(this, xorData, $cast($ints, srcPixel));
	this->xorPixel(xorPixel);
	$set(this, xorData, $cast($ints, xorPixel));
}

void XorPixelWriter$IntData::xorPixel(Object$* pixData) {
	$var($ints, dstData, $cast($ints, pixData));
	for (int32_t i = 0; i < $nc(dstData)->length; ++i) {
		(*dstData)[i] ^= $nc(this->xorData)->get(i);
	}
}

void XorPixelWriter$IntData::writePixel(int32_t x, int32_t y) {
	$XorPixelWriter::writePixel(x, y);
}

void XorPixelWriter$IntData::setRaster($WritableRaster* dstRast) {
	$XorPixelWriter::setRaster(dstRast);
}

XorPixelWriter$IntData::XorPixelWriter$IntData() {
}

$Class* XorPixelWriter$IntData::load$($String* name, bool initialize) {
	$loadClass(XorPixelWriter$IntData, name, initialize, &_XorPixelWriter$IntData_ClassInfo_, allocate$XorPixelWriter$IntData);
	return class$;
}

$Class* XorPixelWriter$IntData::class$ = nullptr;

		} // loops
	} // java2d
} // sun