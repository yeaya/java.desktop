#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExposureMode.h>

#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$ExposureMode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$ExposureMode::*)()>(&ExifTIFFTagSet$ExposureMode::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$ExposureMode_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureMode", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExposureMode", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$ExposureMode_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureMode",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ExposureMode_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ExposureMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$ExposureMode($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$ExposureMode));
}

void ExifTIFFTagSet$ExposureMode::init$() {
	$TIFFTag::init$("ExposureMode"_s, 0x0000A402, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Auto exposure"_s);
	addValueName(1, "Manual exposure"_s);
	addValueName(2, "Auto bracket"_s);
}

ExifTIFFTagSet$ExposureMode::ExifTIFFTagSet$ExposureMode() {
}

$Class* ExifTIFFTagSet$ExposureMode::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$ExposureMode, name, initialize, &_ExifTIFFTagSet$ExposureMode_ClassInfo_, allocate$ExifTIFFTagSet$ExposureMode);
	return class$;
}

$Class* ExifTIFFTagSet$ExposureMode::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax