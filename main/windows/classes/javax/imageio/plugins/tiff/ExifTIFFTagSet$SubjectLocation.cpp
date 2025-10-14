#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubjectLocation.h>

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

$MethodInfo _ExifTIFFTagSet$SubjectLocation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$SubjectLocation::*)()>(&ExifTIFFTagSet$SubjectLocation::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$SubjectLocation_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectLocation", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubjectLocation", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$SubjectLocation_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectLocation",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SubjectLocation_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SubjectLocation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$SubjectLocation($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$SubjectLocation));
}

void ExifTIFFTagSet$SubjectLocation::init$() {
	$TIFFTag::init$("SubjectLocation"_s, 0x0000A214, $sl(1, $TIFFTag::TIFF_SHORT), 2);
}

ExifTIFFTagSet$SubjectLocation::ExifTIFFTagSet$SubjectLocation() {
}

$Class* ExifTIFFTagSet$SubjectLocation::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$SubjectLocation, name, initialize, &_ExifTIFFTagSet$SubjectLocation_ClassInfo_, allocate$ExifTIFFTagSet$SubjectLocation);
	return class$;
}

$Class* ExifTIFFTagSet$SubjectLocation::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax