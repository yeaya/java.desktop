#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSAltitude.h>

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

$MethodInfo _ExifGPSTagSet$GPSAltitude_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSAltitude::*)()>(&ExifGPSTagSet$GPSAltitude::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSAltitude_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAltitude", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSAltitude", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSAltitude_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAltitude",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSAltitude_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSAltitude_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSAltitude($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSAltitude));
}

void ExifGPSTagSet$GPSAltitude::init$() {
	$TIFFTag::init$("GPSAltitude"_s, 6, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSAltitude::ExifGPSTagSet$GPSAltitude() {
}

$Class* ExifGPSTagSet$GPSAltitude::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSAltitude, name, initialize, &_ExifGPSTagSet$GPSAltitude_ClassInfo_, allocate$ExifGPSTagSet$GPSAltitude);
	return class$;
}

$Class* ExifGPSTagSet$GPSAltitude::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax