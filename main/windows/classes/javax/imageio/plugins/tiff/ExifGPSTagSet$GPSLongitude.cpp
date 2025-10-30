#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSLongitude.h>

#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifGPSTagSet = ::javax::imageio::plugins::tiff::ExifGPSTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifGPSTagSet$GPSLongitude_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSLongitude::*)()>(&ExifGPSTagSet$GPSLongitude::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSLongitude_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLongitude", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSLongitude", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSLongitude_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLongitude",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSLongitude_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSLongitude_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSLongitude($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSLongitude));
}

void ExifGPSTagSet$GPSLongitude::init$() {
	$TIFFTag::init$("GPSLongitude"_s, 4, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSLongitude::ExifGPSTagSet$GPSLongitude() {
}

$Class* ExifGPSTagSet$GPSLongitude::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSLongitude, name, initialize, &_ExifGPSTagSet$GPSLongitude_ClassInfo_, allocate$ExifGPSTagSet$GPSLongitude);
	return class$;
}

$Class* ExifGPSTagSet$GPSLongitude::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax