#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SceneType.h>

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

#undef TIFF_UNDEFINED

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$SceneType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$SceneType::*)()>(&ExifTIFFTagSet$SceneType::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$SceneType_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SceneType", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SceneType", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$SceneType_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$SceneType",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SceneType_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SceneType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$SceneType($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$SceneType));
}

void ExifTIFFTagSet$SceneType::init$() {
	$TIFFTag::init$("SceneType"_s, 0x0000A301, $sl(1, $TIFFTag::TIFF_UNDEFINED), 1);
	addValueName(1, "A directly photographed image"_s);
}

ExifTIFFTagSet$SceneType::ExifTIFFTagSet$SceneType() {
}

$Class* ExifTIFFTagSet$SceneType::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$SceneType, name, initialize, &_ExifTIFFTagSet$SceneType_ClassInfo_, allocate$ExifTIFFTagSet$SceneType);
	return class$;
}

$Class* ExifTIFFTagSet$SceneType::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax