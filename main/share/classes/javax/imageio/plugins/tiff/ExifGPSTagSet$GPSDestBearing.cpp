#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestBearing.h>

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

$MethodInfo _ExifGPSTagSet$GPSDestBearing_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSDestBearing::*)()>(&ExifGPSTagSet$GPSDestBearing::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSDestBearing_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestBearing", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestBearing", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSDestBearing_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestBearing",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestBearing_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestBearing_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSDestBearing($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSDestBearing));
}

void ExifGPSTagSet$GPSDestBearing::init$() {
	$TIFFTag::init$("GPSDestBearing"_s, 24, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSDestBearing::ExifGPSTagSet$GPSDestBearing() {
}

$Class* ExifGPSTagSet$GPSDestBearing::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSDestBearing, name, initialize, &_ExifGPSTagSet$GPSDestBearing_ClassInfo_, allocate$ExifGPSTagSet$GPSDestBearing);
	return class$;
}

$Class* ExifGPSTagSet$GPSDestBearing::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax