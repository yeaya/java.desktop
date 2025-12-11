#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSLongitudeRef.h>

#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifGPSTagSet$GPSLongitudeRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSLongitudeRef::*)()>(&ExifGPSTagSet$GPSLongitudeRef::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSLongitudeRef_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLongitudeRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSLongitudeRef", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSLongitudeRef_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLongitudeRef",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSLongitudeRef_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSLongitudeRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSLongitudeRef($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSLongitudeRef));
}

void ExifGPSTagSet$GPSLongitudeRef::init$() {
	$TIFFTag::init$("GPSLongitudeRef"_s, 3, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSLongitudeRef::ExifGPSTagSet$GPSLongitudeRef() {
}

$Class* ExifGPSTagSet$GPSLongitudeRef::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSLongitudeRef, name, initialize, &_ExifGPSTagSet$GPSLongitudeRef_ClassInfo_, allocate$ExifGPSTagSet$GPSLongitudeRef);
	return class$;
}

$Class* ExifGPSTagSet$GPSLongitudeRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax