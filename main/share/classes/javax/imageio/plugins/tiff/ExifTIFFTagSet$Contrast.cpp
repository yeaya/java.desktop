#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$Contrast.h>

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

$MethodInfo _ExifTIFFTagSet$Contrast_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$Contrast::*)()>(&ExifTIFFTagSet$Contrast::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$Contrast_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$Contrast", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "Contrast", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$Contrast_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$Contrast",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$Contrast_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$Contrast_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$Contrast($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$Contrast));
}

void ExifTIFFTagSet$Contrast::init$() {
	$TIFFTag::init$("Contrast"_s, 0x0000A408, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Normal"_s);
	addValueName(1, "Soft"_s);
	addValueName(2, "Hard"_s);
}

ExifTIFFTagSet$Contrast::ExifTIFFTagSet$Contrast() {
}

$Class* ExifTIFFTagSet$Contrast::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$Contrast, name, initialize, &_ExifTIFFTagSet$Contrast_ClassInfo_, allocate$ExifTIFFTagSet$Contrast);
	return class$;
}

$Class* ExifTIFFTagSet$Contrast::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax