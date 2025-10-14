#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExposureTime.h>

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

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$ExposureTime_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$ExposureTime::*)()>(&ExifTIFFTagSet$ExposureTime::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$ExposureTime_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureTime", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExposureTime", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$ExposureTime_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureTime",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ExposureTime_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ExposureTime_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$ExposureTime($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$ExposureTime));
}

void ExifTIFFTagSet$ExposureTime::init$() {
	$TIFFTag::init$("ExposureTime"_s, 0x0000829A, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$ExposureTime::ExifTIFFTagSet$ExposureTime() {
}

$Class* ExifTIFFTagSet$ExposureTime::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$ExposureTime, name, initialize, &_ExifTIFFTagSet$ExposureTime_ClassInfo_, allocate$ExifTIFFTagSet$ExposureTime);
	return class$;
}

$Class* ExifTIFFTagSet$ExposureTime::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax