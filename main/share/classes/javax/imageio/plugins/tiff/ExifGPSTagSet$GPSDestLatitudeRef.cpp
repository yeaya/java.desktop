#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestLatitudeRef.h>

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

$MethodInfo _ExifGPSTagSet$GPSDestLatitudeRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSDestLatitudeRef::*)()>(&ExifGPSTagSet$GPSDestLatitudeRef::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSDestLatitudeRef_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLatitudeRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestLatitudeRef", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSDestLatitudeRef_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLatitudeRef",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestLatitudeRef_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDestLatitudeRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSDestLatitudeRef($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSDestLatitudeRef));
}

void ExifGPSTagSet$GPSDestLatitudeRef::init$() {
	$TIFFTag::init$("GPSDestLatitudeRef"_s, 19, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSDestLatitudeRef::ExifGPSTagSet$GPSDestLatitudeRef() {
}

$Class* ExifGPSTagSet$GPSDestLatitudeRef::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSDestLatitudeRef, name, initialize, &_ExifGPSTagSet$GPSDestLatitudeRef_ClassInfo_, allocate$ExifGPSTagSet$GPSDestLatitudeRef);
	return class$;
}

$Class* ExifGPSTagSet$GPSDestLatitudeRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax