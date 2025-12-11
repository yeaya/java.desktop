#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSLatitude.h>

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

$MethodInfo _ExifGPSTagSet$GPSLatitude_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSLatitude::*)()>(&ExifGPSTagSet$GPSLatitude::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSLatitude_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLatitude", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSLatitude", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSLatitude_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLatitude",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSLatitude_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSLatitude_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSLatitude($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSLatitude));
}

void ExifGPSTagSet$GPSLatitude::init$() {
	$TIFFTag::init$("GPSLatitude"_s, 2, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSLatitude::ExifGPSTagSet$GPSLatitude() {
}

$Class* ExifGPSTagSet$GPSLatitude::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSLatitude, name, initialize, &_ExifGPSTagSet$GPSLatitude_ClassInfo_, allocate$ExifGPSTagSet$GPSLatitude);
	return class$;
}

$Class* ExifGPSTagSet$GPSLatitude::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax