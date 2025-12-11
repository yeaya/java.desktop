#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubjectDistance.h>

#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$SubjectDistance_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$SubjectDistance::*)()>(&ExifTIFFTagSet$SubjectDistance::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$SubjectDistance_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectDistance", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubjectDistance", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$SubjectDistance_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectDistance",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SubjectDistance_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SubjectDistance_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$SubjectDistance($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$SubjectDistance));
}

void ExifTIFFTagSet$SubjectDistance::init$() {
	$TIFFTag::init$("SubjectDistance"_s, 0x00009206, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$SubjectDistance::ExifTIFFTagSet$SubjectDistance() {
}

$Class* ExifTIFFTagSet$SubjectDistance::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$SubjectDistance, name, initialize, &_ExifTIFFTagSet$SubjectDistance_ClassInfo_, allocate$ExifTIFFTagSet$SubjectDistance);
	return class$;
}

$Class* ExifTIFFTagSet$SubjectDistance::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax