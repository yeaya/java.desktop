#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSSpeed.h>

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

$MethodInfo _ExifGPSTagSet$GPSSpeed_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSSpeed::*)()>(&ExifGPSTagSet$GPSSpeed::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSSpeed_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSpeed", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSSpeed", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSSpeed_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSpeed",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSSpeed_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSSpeed_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSSpeed($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSSpeed));
}

void ExifGPSTagSet$GPSSpeed::init$() {
	$TIFFTag::init$("GPSSpeed"_s, 13, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSSpeed::ExifGPSTagSet$GPSSpeed() {
}

$Class* ExifGPSTagSet$GPSSpeed::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSSpeed, name, initialize, &_ExifGPSTagSet$GPSSpeed_ClassInfo_, allocate$ExifGPSTagSet$GPSSpeed);
	return class$;
}

$Class* ExifGPSTagSet$GPSSpeed::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax