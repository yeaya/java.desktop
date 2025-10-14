#include <sun/awt/Win32ColorModel24.h>

#include <java/awt/Point.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/PixelInterleavedSampleModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef OPAQUE
#undef TYPE_BYTE

using $Point = ::java::awt::Point;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $PixelInterleavedSampleModel = ::java::awt::image::PixelInterleavedSampleModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _Win32ColorModel24_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Win32ColorModel24::*)()>(&Win32ColorModel24::init$))},
	{"createCompatibleSampleModel", "(II)Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Win32ColorModel24_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.Win32ColorModel24",
	"java.awt.image.ComponentColorModel",
	nullptr,
	nullptr,
	_Win32ColorModel24_MethodInfo_
};

$Object* allocate$Win32ColorModel24($Class* clazz) {
	return $of($alloc(Win32ColorModel24));
}

void Win32ColorModel24::init$() {
	$ComponentColorModel::init$($($ColorSpace::getInstance($ColorSpace::CS_sRGB)), $$new($ints, {
		8,
		8,
		8
	}), false, false, $Transparency::OPAQUE, $DataBuffer::TYPE_BYTE);
}

$WritableRaster* Win32ColorModel24::createCompatibleWritableRaster(int32_t w, int32_t h) {
	$var($ints, bOffs, $new($ints, {
		2,
		1,
		0
	}));
	return $Raster::createInterleavedRaster($DataBuffer::TYPE_BYTE, w, h, w * 3, 3, bOffs, ($Point*)nullptr);
}

$SampleModel* Win32ColorModel24::createCompatibleSampleModel(int32_t w, int32_t h) {
	$var($ints, bOffs, $new($ints, {
		2,
		1,
		0
	}));
	return $new($PixelInterleavedSampleModel, $DataBuffer::TYPE_BYTE, w, h, 3, w * 3, bOffs);
}

Win32ColorModel24::Win32ColorModel24() {
}

$Class* Win32ColorModel24::load$($String* name, bool initialize) {
	$loadClass(Win32ColorModel24, name, initialize, &_Win32ColorModel24_ClassInfo_, allocate$Win32ColorModel24);
	return class$;
}

$Class* Win32ColorModel24::class$ = nullptr;

	} // awt
} // sun