#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestLatitude.h>

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

$MethodInfo _ExifGPSTagSet$GPSDestLatitude_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSDestLatitude::*)()>(&ExifGPSTagSet$GPSDestLatitude::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSDestLatitude_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLatitude", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestLatitude", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSDestLatitude_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLatitude",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestLatitude_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestLatitude_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSDestLatitude($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSDestLatitude));
}

void ExifGPSTagSet$GPSDestLatitude::init$() {
	$TIFFTag::init$("GPSDestLatitude"_s, 20, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSDestLatitude::ExifGPSTagSet$GPSDestLatitude() {
}

$Class* ExifGPSTagSet$GPSDestLatitude::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSDestLatitude, name, initialize, &_ExifGPSTagSet$GPSDestLatitude_ClassInfo_, allocate$ExifGPSTagSet$GPSDestLatitude);
	return class$;
}

$Class* ExifGPSTagSet$GPSDestLatitude::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax