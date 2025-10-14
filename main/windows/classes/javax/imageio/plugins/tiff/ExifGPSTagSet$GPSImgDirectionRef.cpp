#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSImgDirectionRef.h>

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

$MethodInfo _ExifGPSTagSet$GPSImgDirectionRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSImgDirectionRef::*)()>(&ExifGPSTagSet$GPSImgDirectionRef::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSImgDirectionRef_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSImgDirectionRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSImgDirectionRef", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSImgDirectionRef_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSImgDirectionRef",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSImgDirectionRef_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSImgDirectionRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSImgDirectionRef($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSImgDirectionRef));
}

void ExifGPSTagSet$GPSImgDirectionRef::init$() {
	$TIFFTag::init$("GPSImgDirectionRef"_s, 16, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSImgDirectionRef::ExifGPSTagSet$GPSImgDirectionRef() {
}

$Class* ExifGPSTagSet$GPSImgDirectionRef::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSImgDirectionRef, name, initialize, &_ExifGPSTagSet$GPSImgDirectionRef_ClassInfo_, allocate$ExifGPSTagSet$GPSImgDirectionRef);
	return class$;
}

$Class* ExifGPSTagSet$GPSImgDirectionRef::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax