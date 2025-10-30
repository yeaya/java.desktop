#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSMeasureMode.h>

#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifGPSTagSet = ::javax::imageio::plugins::tiff::ExifGPSTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifGPSTagSet$GPSMeasureMode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSMeasureMode::*)()>(&ExifGPSTagSet$GPSMeasureMode::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSMeasureMode_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSMeasureMode", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSMeasureMode", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSMeasureMode_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSMeasureMode",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSMeasureMode_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSMeasureMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSMeasureMode($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSMeasureMode));
}

void ExifGPSTagSet$GPSMeasureMode::init$() {
	$TIFFTag::init$("GPSMeasureMode"_s, 10, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSMeasureMode::ExifGPSTagSet$GPSMeasureMode() {
}

$Class* ExifGPSTagSet$GPSMeasureMode::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSMeasureMode, name, initialize, &_ExifGPSTagSet$GPSMeasureMode_ClassInfo_, allocate$ExifGPSTagSet$GPSMeasureMode);
	return class$;
}

$Class* ExifGPSTagSet$GPSMeasureMode::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax