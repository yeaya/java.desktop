#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSTrack.h>

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

$MethodInfo _ExifGPSTagSet$GPSTrack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSTrack::*)()>(&ExifGPSTagSet$GPSTrack::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSTrack_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTrack", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSTrack", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSTrack_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTrack",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSTrack_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSTrack_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSTrack($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSTrack));
}

void ExifGPSTagSet$GPSTrack::init$() {
	$TIFFTag::init$("GPSTrack"_s, 15, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSTrack::ExifGPSTagSet$GPSTrack() {
}

$Class* ExifGPSTagSet$GPSTrack::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSTrack, name, initialize, &_ExifGPSTagSet$GPSTrack_ClassInfo_, allocate$ExifGPSTagSet$GPSTrack);
	return class$;
}

$Class* ExifGPSTagSet$GPSTrack::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax