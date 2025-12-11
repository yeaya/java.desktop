#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSAltitudeRef.h>

#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_BYTE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifGPSTagSet$GPSAltitudeRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSAltitudeRef::*)()>(&ExifGPSTagSet$GPSAltitudeRef::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSAltitudeRef_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAltitudeRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSAltitudeRef", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSAltitudeRef_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAltitudeRef",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSAltitudeRef_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSAltitudeRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSAltitudeRef($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSAltitudeRef));
}

void ExifGPSTagSet$GPSAltitudeRef::init$() {
	$TIFFTag::init$("GPSAltitudeRef"_s, 5, $sl(1, $TIFFTag::TIFF_BYTE));
	addValueName(0, "Sea level"_s);
	addValueName(1, "Sea level reference (negative value)"_s);
}

ExifGPSTagSet$GPSAltitudeRef::ExifGPSTagSet$GPSAltitudeRef() {
}

$Class* ExifGPSTagSet$GPSAltitudeRef::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSAltitudeRef, name, initialize, &_ExifGPSTagSet$GPSAltitudeRef_ClassInfo_, allocate$ExifGPSTagSet$GPSAltitudeRef);
	return class$;
}

$Class* ExifGPSTagSet$GPSAltitudeRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax