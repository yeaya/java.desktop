#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$MeteringMode.h>

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

$MethodInfo _ExifTIFFTagSet$MeteringMode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$MeteringMode::*)()>(&ExifTIFFTagSet$MeteringMode::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$MeteringMode_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$MeteringMode", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "MeteringMode", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$MeteringMode_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$MeteringMode",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$MeteringMode_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$MeteringMode_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$MeteringMode($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$MeteringMode));
}

void ExifTIFFTagSet$MeteringMode::init$() {
	$TIFFTag::init$("MeteringMode"_s, 0x00009207, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Unknown"_s);
	addValueName(1, "Average"_s);
	addValueName(2, "CenterWeightedAverage"_s);
	addValueName(3, "Spot"_s);
	addValueName(4, "MultiSpot"_s);
	addValueName(5, "Pattern"_s);
	addValueName(6, "Partial"_s);
	addValueName(255, "Other"_s);
}

ExifTIFFTagSet$MeteringMode::ExifTIFFTagSet$MeteringMode() {
}

$Class* ExifTIFFTagSet$MeteringMode::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$MeteringMode, name, initialize, &_ExifTIFFTagSet$MeteringMode_ClassInfo_, allocate$ExifTIFFTagSet$MeteringMode);
	return class$;
}

$Class* ExifTIFFTagSet$MeteringMode::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax