#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestLongitude.h>

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

$MethodInfo _ExifGPSTagSet$GPSDestLongitude_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSDestLongitude::*)()>(&ExifGPSTagSet$GPSDestLongitude::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSDestLongitude_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLongitude", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestLongitude", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSDestLongitude_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLongitude",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestLongitude_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestLongitude_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSDestLongitude($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSDestLongitude));
}

void ExifGPSTagSet$GPSDestLongitude::init$() {
	$TIFFTag::init$("GPSDestLongitude"_s, 22, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSDestLongitude::ExifGPSTagSet$GPSDestLongitude() {
}

$Class* ExifGPSTagSet$GPSDestLongitude::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSDestLongitude, name, initialize, &_ExifGPSTagSet$GPSDestLongitude_ClassInfo_, allocate$ExifGPSTagSet$GPSDestLongitude);
	return class$;
}

$Class* ExifGPSTagSet$GPSDestLongitude::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax