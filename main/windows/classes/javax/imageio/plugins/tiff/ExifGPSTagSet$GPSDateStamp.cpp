#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDateStamp.h>

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

$MethodInfo _ExifGPSTagSet$GPSDateStamp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifGPSTagSet$GPSDateStamp::*)()>(&ExifGPSTagSet$GPSDateStamp::init$))},
	{}
};

$InnerClassInfo _ExifGPSTagSet$GPSDateStamp_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDateStamp", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDateStamp", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet$GPSDateStamp_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDateStamp",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDateStamp_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet$GPSDateStamp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet"
};

$Object* allocate$ExifGPSTagSet$GPSDateStamp($Class* clazz) {
	return $of($alloc(ExifGPSTagSet$GPSDateStamp));
}

void ExifGPSTagSet$GPSDateStamp::init$() {
	$TIFFTag::init$("GPSDateStamp"_s, 29, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifGPSTagSet$GPSDateStamp::ExifGPSTagSet$GPSDateStamp() {
}

$Class* ExifGPSTagSet$GPSDateStamp::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet$GPSDateStamp, name, initialize, &_ExifGPSTagSet$GPSDateStamp_ClassInfo_, allocate$ExifGPSTagSet$GPSDateStamp);
	return class$;
}

$Class* ExifGPSTagSet$GPSDateStamp::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax