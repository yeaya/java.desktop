#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubSecTime.h>

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

$MethodInfo _ExifTIFFTagSet$SubSecTime_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$SubSecTime::*)()>(&ExifTIFFTagSet$SubSecTime::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$SubSecTime_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTime", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubSecTime", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$SubSecTime_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTime",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SubSecTime_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SubSecTime_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$SubSecTime($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$SubSecTime));
}

void ExifTIFFTagSet$SubSecTime::init$() {
	$TIFFTag::init$("SubSecTime"_s, 0x00009290, $sl(1, $TIFFTag::TIFF_ASCII));
}

ExifTIFFTagSet$SubSecTime::ExifTIFFTagSet$SubSecTime() {
}

$Class* ExifTIFFTagSet$SubSecTime::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$SubSecTime, name, initialize, &_ExifTIFFTagSet$SubSecTime_ClassInfo_, allocate$ExifTIFFTagSet$SubSecTime);
	return class$;
}

$Class* ExifTIFFTagSet$SubSecTime::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax