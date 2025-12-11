#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSAreaInformation.h>

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

$MethodInfo _ExifGPSTagSet$GPSAreaInformation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSAreaInformation::*)()>(&ExifGPSTagSet$GPSAreaInformation::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSAreaInformation_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAreaInformation", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSAreaInformation", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSAreaInformation_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAreaInformation",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSAreaInformation_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSAreaInformation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSAreaInformation($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSAreaInformation));
}

void ExifGPSTagSet$GPSAreaInformation::init$() {
	$TIFFTag::init$("GPSAreaInformation"_s, 28, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

ExifGPSTagSet$GPSAreaInformation::ExifGPSTagSet$GPSAreaInformation() {
}

$Class* ExifGPSTagSet$GPSAreaInformation::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSAreaInformation, name, initialize, &_ExifGPSTagSet$GPSAreaInformation_ClassInfo_, allocate$ExifGPSTagSet$GPSAreaInformation);
	return class$;
}

$Class* ExifGPSTagSet$GPSAreaInformation::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax