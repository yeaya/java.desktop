#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ISOSpeedRatings.h>

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

$MethodInfo _ExifTIFFTagSet$ISOSpeedRatings_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$ISOSpeedRatings::*)()>(&ExifTIFFTagSet$ISOSpeedRatings::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$ISOSpeedRatings_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ISOSpeedRatings", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ISOSpeedRatings", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$ISOSpeedRatings_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$ISOSpeedRatings",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ISOSpeedRatings_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ISOSpeedRatings_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$ISOSpeedRatings($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$ISOSpeedRatings));
}

void ExifTIFFTagSet$ISOSpeedRatings::init$() {
	$TIFFTag::init$("ISOSpeedRatings"_s, 0x00008827, $sl(1, $TIFFTag::TIFF_SHORT));
}

ExifTIFFTagSet$ISOSpeedRatings::ExifTIFFTagSet$ISOSpeedRatings() {
}

$Class* ExifTIFFTagSet$ISOSpeedRatings::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$ISOSpeedRatings, name, initialize, &_ExifTIFFTagSet$ISOSpeedRatings_ClassInfo_, allocate$ExifTIFFTagSet$ISOSpeedRatings);
	return class$;
}

$Class* ExifTIFFTagSet$ISOSpeedRatings::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax