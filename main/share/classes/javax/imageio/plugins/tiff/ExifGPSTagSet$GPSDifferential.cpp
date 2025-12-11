#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDifferential.h>

#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifGPSTagSet$GPSDifferential_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSDifferential::*)()>(&ExifGPSTagSet$GPSDifferential::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSDifferential_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDifferential", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDifferential", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSDifferential_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDifferential",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDifferential_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDifferential_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSDifferential($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSDifferential));
}

void ExifGPSTagSet$GPSDifferential::init$() {
	$TIFFTag::init$("GPSDifferential"_s, 30, $sl(1, $TIFFTag::TIFF_SHORT));
	addValueName(0, "Measurement without differential correction"_s);
	addValueName(1, "Differential correction applied"_s);
}

ExifGPSTagSet$GPSDifferential::ExifGPSTagSet$GPSDifferential() {
}

$Class* ExifGPSTagSet$GPSDifferential::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSDifferential, name, initialize, &_ExifGPSTagSet$GPSDifferential_ClassInfo_, allocate$ExifGPSTagSet$GPSDifferential);
	return class$;
}

$Class* ExifGPSTagSet$GPSDifferential::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax