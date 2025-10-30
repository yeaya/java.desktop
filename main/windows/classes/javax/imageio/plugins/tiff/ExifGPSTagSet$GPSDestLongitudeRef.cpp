#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestLongitudeRef.h>

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

$MethodInfo _ExifGPSTagSet$GPSDestLongitudeRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSDestLongitudeRef::*)()>(&ExifGPSTagSet$GPSDestLongitudeRef::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSDestLongitudeRef_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLongitudeRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestLongitudeRef", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSDestLongitudeRef_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLongitudeRef",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestLongitudeRef_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestLongitudeRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSDestLongitudeRef($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSDestLongitudeRef));
}

void ExifGPSTagSet$GPSDestLongitudeRef::init$() {
	$TIFFTag::init$("GPSDestLongitudeRef"_s, 21, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSDestLongitudeRef::ExifGPSTagSet$GPSDestLongitudeRef() {
}

$Class* ExifGPSTagSet$GPSDestLongitudeRef::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSDestLongitudeRef, name, initialize, &_ExifGPSTagSet$GPSDestLongitudeRef_ClassInfo_, allocate$ExifGPSTagSet$GPSDestLongitudeRef);
	return class$;
}

$Class* ExifGPSTagSet$GPSDestLongitudeRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax