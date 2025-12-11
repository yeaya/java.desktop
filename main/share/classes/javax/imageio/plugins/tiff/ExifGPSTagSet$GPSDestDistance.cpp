#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestDistance.h>

#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifGPSTagSet$GPSDestDistance_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSDestDistance::*)()>(&ExifGPSTagSet$GPSDestDistance::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSDestDistance_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestDistance", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestDistance", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSDestDistance_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestDistance",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestDistance_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestDistance_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSDestDistance($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSDestDistance));
}

void ExifGPSTagSet$GPSDestDistance::init$() {
	$TIFFTag::init$("GPSDestDistance"_s, 26, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSDestDistance::ExifGPSTagSet$GPSDestDistance() {
}

$Class* ExifGPSTagSet$GPSDestDistance::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSDestDistance, name, initialize, &_ExifGPSTagSet$GPSDestDistance_ClassInfo_, allocate$ExifGPSTagSet$GPSDestDistance);
	return class$;
}

$Class* ExifGPSTagSet$GPSDestDistance::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax