#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSMapDatum.h>

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

$MethodInfo _ExifGPSTagSet$GPSMapDatum_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSMapDatum::*)()>(&ExifGPSTagSet$GPSMapDatum::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSMapDatum_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSMapDatum", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSMapDatum", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSMapDatum_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSMapDatum",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSMapDatum_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSMapDatum_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSMapDatum($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSMapDatum));
}

void ExifGPSTagSet$GPSMapDatum::init$() {
	$TIFFTag::init$("GPSMapDatum"_s, 18, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSMapDatum::ExifGPSTagSet$GPSMapDatum() {
}

$Class* ExifGPSTagSet$GPSMapDatum::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSMapDatum, name, initialize, &_ExifGPSTagSet$GPSMapDatum_ClassInfo_, allocate$ExifGPSTagSet$GPSMapDatum);
	return class$;
}

$Class* ExifGPSTagSet$GPSMapDatum::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax