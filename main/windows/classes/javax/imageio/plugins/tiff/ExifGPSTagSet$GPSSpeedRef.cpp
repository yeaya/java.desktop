#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSSpeedRef.h>

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

$MethodInfo _ExifGPSTagSet$GPSSpeedRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSSpeedRef::*)()>(&ExifGPSTagSet$GPSSpeedRef::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSSpeedRef_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSpeedRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSSpeedRef", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSSpeedRef_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSpeedRef",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSSpeedRef_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSSpeedRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSSpeedRef($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSSpeedRef));
}

void ExifGPSTagSet$GPSSpeedRef::init$() {
	$TIFFTag::init$("GPSSpeedRef"_s, 12, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSSpeedRef::ExifGPSTagSet$GPSSpeedRef() {
}

$Class* ExifGPSTagSet$GPSSpeedRef::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSSpeedRef, name, initialize, &_ExifGPSTagSet$GPSSpeedRef_ClassInfo_, allocate$ExifGPSTagSet$GPSSpeedRef);
	return class$;
}

$Class* ExifGPSTagSet$GPSSpeedRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax