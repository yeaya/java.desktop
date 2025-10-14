#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSLatitudeRef.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _ExifGPSTagSet$GPSLatitudeRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSLatitudeRef::*)()>(&ExifGPSTagSet$GPSLatitudeRef::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSLatitudeRef_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLatitudeRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSLatitudeRef", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSLatitudeRef_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLatitudeRef",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSLatitudeRef_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSLatitudeRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSLatitudeRef($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSLatitudeRef));
}

void ExifGPSTagSet$GPSLatitudeRef::init$() {
	$TIFFTag::init$("GPSLatitudeRef"_s, 1, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSLatitudeRef::ExifGPSTagSet$GPSLatitudeRef() {
}

$Class* ExifGPSTagSet$GPSLatitudeRef::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSLatitudeRef, name, initialize, &_ExifGPSTagSet$GPSLatitudeRef_ClassInfo_, allocate$ExifGPSTagSet$GPSLatitudeRef);
	return class$;
}

$Class* ExifGPSTagSet$GPSLatitudeRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax