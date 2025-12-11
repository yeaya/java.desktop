#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubjectArea.h>

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

$MethodInfo _ExifTIFFTagSet$SubjectArea_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$SubjectArea::*)()>(&ExifTIFFTagSet$SubjectArea::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$SubjectArea_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectArea", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubjectArea", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$SubjectArea_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectArea",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SubjectArea_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SubjectArea_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$SubjectArea($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$SubjectArea));
}

void ExifTIFFTagSet$SubjectArea::init$() {
	$TIFFTag::init$("SubjectArea"_s, 0x00009214, $sl(1, $TIFFTag::TIFF_SHORT));
}

ExifTIFFTagSet$SubjectArea::ExifTIFFTagSet$SubjectArea() {
}

$Class* ExifTIFFTagSet$SubjectArea::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$SubjectArea, name, initialize, &_ExifTIFFTagSet$SubjectArea_ClassInfo_, allocate$ExifTIFFTagSet$SubjectArea);
	return class$;
}

$Class* ExifTIFFTagSet$SubjectArea::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax