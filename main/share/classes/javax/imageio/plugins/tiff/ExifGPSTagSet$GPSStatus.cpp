#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSStatus.h>

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

$MethodInfo _ExifGPSTagSet$GPSStatus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSStatus::*)()>(&ExifGPSTagSet$GPSStatus::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSStatus_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSStatus", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSStatus", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSStatus_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSStatus",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSStatus_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSStatus_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSStatus($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSStatus));
}

void ExifGPSTagSet$GPSStatus::init$() {
	$TIFFTag::init$("GPSStatus"_s, 9, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSStatus::ExifGPSTagSet$GPSStatus() {
}

$Class* ExifGPSTagSet$GPSStatus::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSStatus, name, initialize, &_ExifGPSTagSet$GPSStatus_ClassInfo_, allocate$ExifGPSTagSet$GPSStatus);
	return class$;
}

$Class* ExifGPSTagSet$GPSStatus::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax