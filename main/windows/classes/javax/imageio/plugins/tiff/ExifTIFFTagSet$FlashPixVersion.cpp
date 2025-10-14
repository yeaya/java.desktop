#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FlashPixVersion.h>

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

$MethodInfo _ExifTIFFTagSet$FlashPixVersion_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$FlashPixVersion::*)()>(&ExifTIFFTagSet$FlashPixVersion::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$FlashPixVersion_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FlashPixVersion", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FlashPixVersion", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$FlashPixVersion_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$FlashPixVersion",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FlashPixVersion_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FlashPixVersion_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$FlashPixVersion($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$FlashPixVersion));
}

void ExifTIFFTagSet$FlashPixVersion::init$() {
	$TIFFTag::init$("FlashPixVersion"_s, 0x0000A000, $sl(1, $TIFFTag::TIFF_UNDEFINED), 4);
}

ExifTIFFTagSet$FlashPixVersion::ExifTIFFTagSet$FlashPixVersion() {
}

$Class* ExifTIFFTagSet$FlashPixVersion::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$FlashPixVersion, name, initialize, &_ExifTIFFTagSet$FlashPixVersion_ClassInfo_, allocate$ExifTIFFTagSet$FlashPixVersion);
	return class$;
}

$Class* ExifTIFFTagSet$FlashPixVersion::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax