#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$DateTimeOriginal.h>

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

$MethodInfo _ExifTIFFTagSet$DateTimeOriginal_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$DateTimeOriginal::*)()>(&ExifTIFFTagSet$DateTimeOriginal::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$DateTimeOriginal_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$DateTimeOriginal", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "DateTimeOriginal", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$DateTimeOriginal_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$DateTimeOriginal",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$DateTimeOriginal_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$DateTimeOriginal_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$DateTimeOriginal($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$DateTimeOriginal));
}

void ExifTIFFTagSet$DateTimeOriginal::init$() {
	$TIFFTag::init$("DateTimeOriginal"_s, 0x00009003, $sl(1, $TIFFTag::TIFF_ASCII), 20);
}

ExifTIFFTagSet$DateTimeOriginal::ExifTIFFTagSet$DateTimeOriginal() {
}

$Class* ExifTIFFTagSet$DateTimeOriginal::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$DateTimeOriginal, name, initialize, &_ExifTIFFTagSet$DateTimeOriginal_ClassInfo_, allocate$ExifTIFFTagSet$DateTimeOriginal);
	return class$;
}

$Class* ExifTIFFTagSet$DateTimeOriginal::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax