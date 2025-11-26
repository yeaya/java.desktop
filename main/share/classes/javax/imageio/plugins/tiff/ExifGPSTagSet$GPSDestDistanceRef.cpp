#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestDistanceRef.h>

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

$MethodInfo _ExifGPSTagSet$GPSDestDistanceRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSDestDistanceRef::*)()>(&ExifGPSTagSet$GPSDestDistanceRef::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSDestDistanceRef_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestDistanceRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestDistanceRef", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSDestDistanceRef_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestDistanceRef",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestDistanceRef_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestDistanceRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSDestDistanceRef($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSDestDistanceRef));
}

void ExifGPSTagSet$GPSDestDistanceRef::init$() {
	$TIFFTag::init$("GPSDestDistanceRef"_s, 25, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSDestDistanceRef::ExifGPSTagSet$GPSDestDistanceRef() {
}

$Class* ExifGPSTagSet$GPSDestDistanceRef::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSDestDistanceRef, name, initialize, &_ExifGPSTagSet$GPSDestDistanceRef_ClassInfo_, allocate$ExifGPSTagSet$GPSDestDistanceRef);
	return class$;
}

$Class* ExifGPSTagSet$GPSDestDistanceRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax