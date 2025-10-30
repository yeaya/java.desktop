#include <sun/java2d/loops/XorPixelWriter$DoubleData.h>

#include <java/awt/image/WritableRaster.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/XorPixelWriter.h>
#include <jcpp.h>

using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PixelWriter = ::sun::java2d::loops::PixelWriter;
using $XorPixelWriter = ::sun::java2d::loops::XorPixelWriter;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _XorPixelWriter$DoubleData_FieldInfo_[] = {
	{"xorData", "[J", nullptr, 0, $field(XorPixelWriter$DoubleData, xorData)},
	{}
};

$MethodInfo _XorPixelWriter$DoubleData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(XorPixelWriter$DoubleData::*)(Object$*,Object$*)>(&XorPixelWriter$DoubleData::init$))},
	{"setRaster", "(Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"writePixel", "(II)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"xorPixel", "(Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _XorPixelWriter$DoubleData_InnerClassesInfo_[] = {
	{"sun.java2d.loops.XorPixelWriter$DoubleData", "sun.java2d.loops.XorPixelWriter", "DoubleData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XorPixelWriter$DoubleData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.XorPixelWriter$DoubleData",
	"sun.java2d.loops.XorPixelWriter",
	nullptr,
	_XorPixelWriter$DoubleData_FieldInfo_,
	_XorPixelWriter$DoubleData_MethodInfo_,
	nullptr,
	nullptr,
	_XorPixelWriter$DoubleData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.XorPixelWriter"
};

$Object* allocate$XorPixelWriter$DoubleData($Class* clazz) {
	return $of($alloc(XorPixelWriter$DoubleData));
}

void XorPixelWriter$DoubleData::init$(Object$* srcPixel, Object$* xorPixel) {
	$useLocalCurrentObjectStackCache();
	$XorPixelWriter::init$();
	$var($doubles, srcData, $cast($doubles, srcPixel));
	$var($doubles, xorData, $cast($doubles, xorPixel));
	$set(this, xorData, $new($longs, $nc(srcData)->length));
	for (int32_t i = 0; i < srcData->length; ++i) {
		int64_t var$0 = $Double::doubleToLongBits(srcData->get(i));
		$nc(this->xorData)->set(i, (var$0 ^ $Double::doubleToLongBits($nc(xorData)->get(i))));
	}
}

void XorPixelWriter$DoubleData::xorPixel(Object$* pixData) {
	$var($doubles, dstData, $cast($doubles, pixData));
	for (int32_t i = 0; i < $nc(dstData)->length; ++i) {
		int64_t v = $Double::doubleToLongBits(dstData->get(i)) ^ $nc(this->xorData)->get(i);
		dstData->set(i, $Double::longBitsToDouble(v));
	}
}

void XorPixelWriter$DoubleData::writePixel(int32_t x, int32_t y) {
	$XorPixelWriter::writePixel(x, y);
}

void XorPixelWriter$DoubleData::setRaster($WritableRaster* dstRast) {
	$XorPixelWriter::setRaster(dstRast);
}

XorPixelWriter$DoubleData::XorPixelWriter$DoubleData() {
}

$Class* XorPixelWriter$DoubleData::load$($String* name, bool initialize) {
	$loadClass(XorPixelWriter$DoubleData, name, initialize, &_XorPixelWriter$DoubleData_ClassInfo_, allocate$XorPixelWriter$DoubleData);
	return class$;
}

$Class* XorPixelWriter$DoubleData::class$ = nullptr;

		} // loops
	} // java2d
} // sun