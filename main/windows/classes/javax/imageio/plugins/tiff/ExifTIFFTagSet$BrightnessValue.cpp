#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$BrightnessValue.h>

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

#undef TIFF_SRATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$BrightnessValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$BrightnessValue::*)()>(&ExifTIFFTagSet$BrightnessValue::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$BrightnessValue_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$BrightnessValue", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "BrightnessValue", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$BrightnessValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$BrightnessValue",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$BrightnessValue_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$BrightnessValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$BrightnessValue($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$BrightnessValue));
}

void ExifTIFFTagSet$BrightnessValue::init$() {
	$TIFFTag::init$("BrightnessValue"_s, 0x00009203, $sl(1, $TIFFTag::TIFF_SRATIONAL), 1);
}

ExifTIFFTagSet$BrightnessValue::ExifTIFFTagSet$BrightnessValue() {
}

$Class* ExifTIFFTagSet$BrightnessValue::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$BrightnessValue, name, initialize, &_ExifTIFFTagSet$BrightnessValue_ClassInfo_, allocate$ExifTIFFTagSet$BrightnessValue);
	return class$;
}

$Class* ExifTIFFTagSet$BrightnessValue::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax