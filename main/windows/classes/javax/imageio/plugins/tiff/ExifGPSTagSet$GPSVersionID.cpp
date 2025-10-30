#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSVersionID.h>

#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_BYTE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifGPSTagSet = ::javax::imageio::plugins::tiff::ExifGPSTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifGPSTagSet$GPSVersionID_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSVersionID::*)()>(&ExifGPSTagSet$GPSVersionID::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSVersionID_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSVersionID", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSVersionID", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSVersionID_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSVersionID",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSVersionID_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSVersionID_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSVersionID($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSVersionID));
}

void ExifGPSTagSet$GPSVersionID::init$() {
	$TIFFTag::init$("GPSVersionID"_s, 0, $sl(1, $TIFFTag::TIFF_BYTE));
}

ExifGPSTagSet$GPSVersionID::ExifGPSTagSet$GPSVersionID() {
}

$Class* ExifGPSTagSet$GPSVersionID::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSVersionID, name, initialize, &_ExifGPSTagSet$GPSVersionID_ClassInfo_, allocate$ExifGPSTagSet$GPSVersionID);
	return class$;
}

$Class* ExifGPSTagSet$GPSVersionID::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax