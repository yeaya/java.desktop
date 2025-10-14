#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SceneCaptureType.h>

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

$MethodInfo _ExifTIFFTagSet$SceneCaptureType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$SceneCaptureType::*)()>(&ExifTIFFTagSet$SceneCaptureType::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$SceneCaptureType_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SceneCaptureType", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SceneCaptureType", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$SceneCaptureType_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$SceneCaptureType",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SceneCaptureType_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SceneCaptureType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$SceneCaptureType($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$SceneCaptureType));
}

void ExifTIFFTagSet$SceneCaptureType::init$() {
	$TIFFTag::init$("SceneCaptureType"_s, 0x0000A406, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(0, "Standard"_s);
	addValueName(1, "Landscape"_s);
	addValueName(2, "Portrait"_s);
	addValueName(3, "Night scene"_s);
}

ExifTIFFTagSet$SceneCaptureType::ExifTIFFTagSet$SceneCaptureType() {
}

$Class* ExifTIFFTagSet$SceneCaptureType::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$SceneCaptureType, name, initialize, &_ExifTIFFTagSet$SceneCaptureType_ClassInfo_, allocate$ExifTIFFTagSet$SceneCaptureType);
	return class$;
}

$Class* ExifTIFFTagSet$SceneCaptureType::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax