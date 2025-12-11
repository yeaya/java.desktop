#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$Saturation.h>

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

$MethodInfo _ExifTIFFTagSet$Saturation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$Saturation::*)()>(&ExifTIFFTagSet$Saturation::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$Saturation_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$Saturation", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "Saturation", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$Saturation_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$Saturation",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$Saturation_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$Saturation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$Saturation($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$Saturation));
}

void ExifTIFFTagSet$Saturation::init$() {
	$TIFFTag::init$("Saturation"_s, 0x0000A409, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Normal"_s);
	addValueName(1, "Low saturation"_s);
	addValueName(2, "High saturation"_s);
}

ExifTIFFTagSet$Saturation::ExifTIFFTagSet$Saturation() {
}

$Class* ExifTIFFTagSet$Saturation::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$Saturation, name, initialize, &_ExifTIFFTagSet$Saturation_ClassInfo_, allocate$ExifTIFFTagSet$Saturation);
	return class$;
}

$Class* ExifTIFFTagSet$Saturation::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax