#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubSecTimeOriginal.h>

#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$SubSecTimeOriginal_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$SubSecTimeOriginal::*)()>(&ExifTIFFTagSet$SubSecTimeOriginal::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$SubSecTimeOriginal_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTimeOriginal", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubSecTimeOriginal", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$SubSecTimeOriginal_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTimeOriginal",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SubSecTimeOriginal_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SubSecTimeOriginal_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$SubSecTimeOriginal($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$SubSecTimeOriginal));
}

void ExifTIFFTagSet$SubSecTimeOriginal::init$() {
	$TIFFTag::init$("SubSecTimeOriginal"_s, 0x00009291, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifTIFFTagSet$SubSecTimeOriginal::ExifTIFFTagSet$SubSecTimeOriginal() {
}

$Class* ExifTIFFTagSet$SubSecTimeOriginal::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$SubSecTimeOriginal, name, initialize, &_ExifTIFFTagSet$SubSecTimeOriginal_ClassInfo_, allocate$ExifTIFFTagSet$SubSecTimeOriginal);
	return class$;
}

$Class* ExifTIFFTagSet$SubSecTimeOriginal::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax