#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$LightSource.h>

#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$LightSource_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$LightSource::*)()>(&ExifTIFFTagSet$LightSource::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$LightSource_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$LightSource", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "LightSource", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$LightSource_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$LightSource",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$LightSource_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$LightSource_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$LightSource($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$LightSource));
}

void ExifTIFFTagSet$LightSource::init$() {
	$TIFFTag::init$("LightSource"_s, 0x00009208, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Unknown"_s);
	addValueName(1, "Daylight"_s);
	addValueName(2, "Fluorescent"_s);
	addValueName(3, "Tungsten"_s);
	addValueName(17, "Standard Light A"_s);
	addValueName(18, "Standard Light B"_s);
	addValueName(19, "Standard Light C"_s);
	addValueName(20, "D55"_s);
	addValueName(21, "D65"_s);
	addValueName(22, "D75"_s);
	addValueName(255, "Other"_s);
}

ExifTIFFTagSet$LightSource::ExifTIFFTagSet$LightSource() {
}

$Class* ExifTIFFTagSet$LightSource::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$LightSource, name, initialize, &_ExifTIFFTagSet$LightSource_ClassInfo_, allocate$ExifTIFFTagSet$LightSource);
	return class$;
}

$Class* ExifTIFFTagSet$LightSource::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax