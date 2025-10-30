#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSTimeStamp.h>

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

$MethodInfo _ExifGPSTagSet$GPSTimeStamp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSTimeStamp::*)()>(&ExifGPSTagSet$GPSTimeStamp::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSTimeStamp_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTimeStamp", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSTimeStamp", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSTimeStamp_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTimeStamp",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSTimeStamp_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSTimeStamp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSTimeStamp($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSTimeStamp));
}

void ExifGPSTagSet$GPSTimeStamp::init$() {
	$TIFFTag::init$("GPSTimeStamp"_s, 7, $sl(1, $TIFFTag::TIFF_RATIONAL));
}

ExifGPSTagSet$GPSTimeStamp::ExifGPSTagSet$GPSTimeStamp() {
}

$Class* ExifGPSTagSet$GPSTimeStamp::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSTimeStamp, name, initialize, &_ExifGPSTagSet$GPSTimeStamp_ClassInfo_, allocate$ExifGPSTagSet$GPSTimeStamp);
	return class$;
}

$Class* ExifGPSTagSet$GPSTimeStamp::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax