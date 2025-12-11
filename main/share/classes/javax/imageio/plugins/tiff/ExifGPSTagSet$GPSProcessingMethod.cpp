#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSProcessingMethod.h>

#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_UNDEFINED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifGPSTagSet$GPSProcessingMethod_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSProcessingMethod::*)()>(&ExifGPSTagSet$GPSProcessingMethod::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSProcessingMethod_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSProcessingMethod", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSProcessingMethod", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSProcessingMethod_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSProcessingMethod",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSProcessingMethod_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSProcessingMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSProcessingMethod($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSProcessingMethod));
}

void ExifGPSTagSet$GPSProcessingMethod::init$() {
	$TIFFTag::init$("GPSProcessingMethod"_s, 27, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

ExifGPSTagSet$GPSProcessingMethod::ExifGPSTagSet$GPSProcessingMethod() {
}

$Class* ExifGPSTagSet$GPSProcessingMethod::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSProcessingMethod, name, initialize, &_ExifGPSTagSet$GPSProcessingMethod_ClassInfo_, allocate$ExifGPSTagSet$GPSProcessingMethod);
	return class$;
}

$Class* ExifGPSTagSet$GPSProcessingMethod::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax