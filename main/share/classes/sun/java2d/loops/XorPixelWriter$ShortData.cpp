#include <sun/java2d/loops/XorPixelWriter$ShortData.h>

#include <java/awt/image/WritableRaster.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/XorPixelWriter.h>
#include <jcpp.h>

using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XorPixelWriter = ::sun::java2d::loops::XorPixelWriter;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _XorPixelWriter$ShortData_FieldInfo_[] = {
	{"xorData", "[S", nullptr, 0, $field(XorPixelWriter$ShortData, xorData)},
	{}
};

$MethodInfo _XorPixelWriter$ShortData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(XorPixelWriter$ShortData::*)(Object$*,Object$*)>(&XorPixelWriter$ShortData::init$))},
	{"setRaster", "(Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"writePixel", "(II)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"xorPixel", "(Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _XorPixelWriter$ShortData_InnerClassesInfo_[] = {
	{"sun.java2d.loops.XorPixelWriter$ShortData", "sun.java2d.loops.XorPixelWriter", "ShortData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XorPixelWriter$ShortData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.XorPixelWriter$ShortData",
	"sun.java2d.loops.XorPixelWriter",
	nullptr,
	_XorPixelWriter$ShortData_FieldInfo_,
	_XorPixelWriter$ShortData_MethodInfo_,
	nullptr,
	nullptr,
	_XorPixelWriter$ShortData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.XorPixelWriter"
};

$Object* allocate$XorPixelWriter$ShortData($Class* clazz) {
	return $of($alloc(XorPixelWriter$ShortData));
}

void XorPixelWriter$ShortData::init$(Object$* srcPixel, Object$* xorPixel) {
	$XorPixelWriter::init$();
	$set(this, xorData, $cast($shorts, srcPixel));
	this->xorPixel(xorPixel);
	$set(this, xorData, $cast($shorts, xorPixel));
}

void XorPixelWriter$ShortData::xorPixel(Object$* pixData) {
	$var($shorts, dstData, $cast($shorts, pixData));
	for (int32_t i = 0; i < $nc(dstData)->length; ++i) {
		(*dstData)[i] ^= $nc(this->xorData)->get(i);
	}
}

void XorPixelWriter$ShortData::writePixel(int32_t x, int32_t y) {
	$XorPixelWriter::writePixel(x, y);
}

void XorPixelWriter$ShortData::setRaster($WritableRaster* dstRast) {
	$XorPixelWriter::setRaster(dstRast);
}

XorPixelWriter$ShortData::XorPixelWriter$ShortData() {
}

$Class* XorPixelWriter$ShortData::load$($String* name, bool initialize) {
	$loadClass(XorPixelWriter$ShortData, name, initialize, &_XorPixelWriter$ShortData_ClassInfo_, allocate$XorPixelWriter$ShortData);
	return class$;
}

$Class* XorPixelWriter$ShortData::class$ = nullptr;

		} // loops
	} // java2d
} // sun