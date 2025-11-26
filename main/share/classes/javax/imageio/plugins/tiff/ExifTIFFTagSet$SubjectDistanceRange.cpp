#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubjectDistanceRange.h>

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

$MethodInfo _ExifTIFFTagSet$SubjectDistanceRange_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$SubjectDistanceRange::*)()>(&ExifTIFFTagSet$SubjectDistanceRange::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$SubjectDistanceRange_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectDistanceRange", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubjectDistanceRange", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$SubjectDistanceRange_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectDistanceRange",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SubjectDistanceRange_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SubjectDistanceRange_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$SubjectDistanceRange($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$SubjectDistanceRange));
}

void ExifTIFFTagSet$SubjectDistanceRange::init$() {
	$TIFFTag::init$("SubjectDistanceRange"_s, 0x0000A40C, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "unknown"_s);
	addValueName(1, "Macro"_s);
	addValueName(2, "Close view"_s);
	addValueName(3, "Distant view"_s);
}

ExifTIFFTagSet$SubjectDistanceRange::ExifTIFFTagSet$SubjectDistanceRange() {
}

$Class* ExifTIFFTagSet$SubjectDistanceRange::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$SubjectDistanceRange, name, initialize, &_ExifTIFFTagSet$SubjectDistanceRange_ClassInfo_, allocate$ExifTIFFTagSet$SubjectDistanceRange);
	return class$;
}

$Class* ExifTIFFTagSet$SubjectDistanceRange::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax