#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$Sharpness.h>

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

$MethodInfo _ExifTIFFTagSet$Sharpness_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$Sharpness::*)()>(&ExifTIFFTagSet$Sharpness::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$Sharpness_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$Sharpness", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "Sharpness", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$Sharpness_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$Sharpness",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$Sharpness_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$Sharpness_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$Sharpness($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$Sharpness));
}

void ExifTIFFTagSet$Sharpness::init$() {
	$TIFFTag::init$("Sharpness"_s, 0x0000A40A, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Normal"_s);
	addValueName(1, "Soft"_s);
	addValueName(2, "Hard"_s);
}

ExifTIFFTagSet$Sharpness::ExifTIFFTagSet$Sharpness() {
}

$Class* ExifTIFFTagSet$Sharpness::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$Sharpness, name, initialize, &_ExifTIFFTagSet$Sharpness_ClassInfo_, allocate$ExifTIFFTagSet$Sharpness);
	return class$;
}

$Class* ExifTIFFTagSet$Sharpness::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax