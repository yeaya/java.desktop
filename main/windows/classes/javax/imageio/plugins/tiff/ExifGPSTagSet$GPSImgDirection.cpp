#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSImgDirection.h>

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

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifGPSTagSet = ::javax::imageio::plugins::tiff::ExifGPSTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifGPSTagSet$GPSImgDirection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSImgDirection::*)()>(&ExifGPSTagSet$GPSImgDirection::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSImgDirection_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSImgDirection", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSImgDirection", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSImgDirection_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSImgDirection",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSImgDirection_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSImgDirection_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSImgDirection($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSImgDirection));
}

void ExifGPSTagSet$GPSImgDirection::init$() {
	$TIFFTag::init$("GPSImgDirection"_s, 17, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSImgDirection::ExifGPSTagSet$GPSImgDirection() {
}

$Class* ExifGPSTagSet$GPSImgDirection::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSImgDirection, name, initialize, &_ExifGPSTagSet$GPSImgDirection_ClassInfo_, allocate$ExifGPSTagSet$GPSImgDirection);
	return class$;
}

$Class* ExifGPSTagSet$GPSImgDirection::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax