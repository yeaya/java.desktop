#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExposureProgram.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _ExifTIFFTagSet$ExposureProgram_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$ExposureProgram::*)()>(&ExifTIFFTagSet$ExposureProgram::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$ExposureProgram_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureProgram", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExposureProgram", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$ExposureProgram_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureProgram",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ExposureProgram_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ExposureProgram_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$ExposureProgram($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$ExposureProgram));
}

void ExifTIFFTagSet$ExposureProgram::init$() {
	$TIFFTag::init$("ExposureProgram"_s, 0x00008822, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Not Defined"_s);
	addValueName(1, "Manual"_s);
	addValueName(2, "Normal Program"_s);
	addValueName(3, "Aperture Priority"_s);
	addValueName(4, "Shutter Priority"_s);
	addValueName(5, "Creative Program"_s);
	addValueName(6, "Action Program"_s);
	addValueName(7, "Portrait Mode"_s);
	addValueName(8, "Landscape Mode"_s);
}

ExifTIFFTagSet$ExposureProgram::ExifTIFFTagSet$ExposureProgram() {
}

$Class* ExifTIFFTagSet$ExposureProgram::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$ExposureProgram, name, initialize, &_ExifTIFFTagSet$ExposureProgram_ClassInfo_, allocate$ExifTIFFTagSet$ExposureProgram);
	return class$;
}

$Class* ExifTIFFTagSet$ExposureProgram::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax