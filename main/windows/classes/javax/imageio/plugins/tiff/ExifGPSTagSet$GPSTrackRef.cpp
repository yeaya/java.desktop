#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSTrackRef.h>

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

$MethodInfo _ExifGPSTagSet$GPSTrackRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSTrackRef::*)()>(&ExifGPSTagSet$GPSTrackRef::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSTrackRef_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTrackRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSTrackRef", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSTrackRef_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTrackRef",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSTrackRef_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSTrackRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSTrackRef($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSTrackRef));
}

void ExifGPSTagSet$GPSTrackRef::init$() {
	$TIFFTag::init$("GPSTrackRef"_s, 14, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSTrackRef::ExifGPSTagSet$GPSTrackRef() {
}

$Class* ExifGPSTagSet$GPSTrackRef::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSTrackRef, name, initialize, &_ExifGPSTagSet$GPSTrackRef_ClassInfo_, allocate$ExifGPSTagSet$GPSTrackRef);
	return class$;
}

$Class* ExifGPSTagSet$GPSTrackRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax