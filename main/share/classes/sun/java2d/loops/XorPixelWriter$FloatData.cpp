#include <sun/java2d/loops/XorPixelWriter$FloatData.h>

#include <java/awt/image/WritableRaster.h>
#include <sun/java2d/loops/PixelWriter.h>
#include <sun/java2d/loops/XorPixelWriter.h>
#include <jcpp.h>

using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XorPixelWriter = ::sun::java2d::loops::XorPixelWriter;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _XorPixelWriter$FloatData_FieldInfo_[] = {
	{"xorData", "[I", nullptr, 0, $field(XorPixelWriter$FloatData, xorData)},
	{}
};

$MethodInfo _XorPixelWriter$FloatData_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(XorPixelWriter$FloatData::*)(Object$*,Object$*)>(&XorPixelWriter$FloatData::init$))},
	{"setRaster", "(Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"writePixel", "(II)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"xorPixel", "(Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _XorPixelWriter$FloatData_InnerClassesInfo_[] = {
	{"sun.java2d.loops.XorPixelWriter$FloatData", "sun.java2d.loops.XorPixelWriter", "FloatData", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XorPixelWriter$FloatData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.loops.XorPixelWriter$FloatData",
	"sun.java2d.loops.XorPixelWriter",
	nullptr,
	_XorPixelWriter$FloatData_FieldInfo_,
	_XorPixelWriter$FloatData_MethodInfo_,
	nullptr,
	nullptr,
	_XorPixelWriter$FloatData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.loops.XorPixelWriter"
};

$Object* allocate$XorPixelWriter$FloatData($Class* clazz) {
	return $of($alloc(XorPixelWriter$FloatData));
}

void XorPixelWriter$FloatData::init$(Object$* srcPixel, Object$* xorPixel) {
	$useLocalCurrentObjectStackCache();
	$XorPixelWriter::init$();
	$var($floats, srcData, $cast($floats, srcPixel));
	$var($floats, xorData, $cast($floats, xorPixel));
	$set(this, xorData, $new($ints, $nc(srcData)->length));
	for (int32_t i = 0; i < srcData->length; ++i) {
		int32_t var$0 = $Float::floatToIntBits(srcData->get(i));
		$nc(this->xorData)->set(i, (var$0 ^ $Float::floatToIntBits($nc(xorData)->get(i))));
	}
}

void XorPixelWriter$FloatData::xorPixel(Object$* pixData) {
	$var($floats, dstData, $cast($floats, pixData));
	for (int32_t i = 0; i < $nc(dstData)->length; ++i) {
		int32_t v = $Float::floatToIntBits(dstData->get(i)) ^ $nc(this->xorData)->get(i);
		dstData->set(i, $Float::intBitsToFloat(v));
	}
}

void XorPixelWriter$FloatData::writePixel(int32_t x, int32_t y) {
	$XorPixelWriter::writePixel(x, y);
}

void XorPixelWriter$FloatData::setRaster($WritableRaster* dstRast) {
	$XorPixelWriter::setRaster(dstRast);
}

XorPixelWriter$FloatData::XorPixelWriter$FloatData() {
}

$Class* XorPixelWriter$FloatData::load$($String* name, bool initialize) {
	$loadClass(XorPixelWriter$FloatData, name, initialize, &_XorPixelWriter$FloatData_ClassInfo_, allocate$XorPixelWriter$FloatData);
	return class$;
}

$Class* XorPixelWriter$FloatData::class$ = nullptr;

		} // loops
	} // java2d
} // sun