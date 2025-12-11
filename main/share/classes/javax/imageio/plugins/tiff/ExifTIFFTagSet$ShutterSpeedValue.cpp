#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ShutterSpeedValue.h>

#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SRATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$ShutterSpeedValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$ShutterSpeedValue::*)()>(&ExifTIFFTagSet$ShutterSpeedValue::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$ShutterSpeedValue_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ShutterSpeedValue", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ShutterSpeedValue", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$ShutterSpeedValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$ShutterSpeedValue",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ShutterSpeedValue_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ShutterSpeedValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$ShutterSpeedValue($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$ShutterSpeedValue));
}

void ExifTIFFTagSet$ShutterSpeedValue::init$() {
	$TIFFTag::init$("ShutterSpeedValue"_s, 0x00009201, $sl(1, $TIFFTag::TIFF_SRATIONAL), 1);
}

ExifTIFFTagSet$ShutterSpeedValue::ExifTIFFTagSet$ShutterSpeedValue() {
}

$Class* ExifTIFFTagSet$ShutterSpeedValue::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$ShutterSpeedValue, name, initialize, &_ExifTIFFTagSet$ShutterSpeedValue_ClassInfo_, allocate$ExifTIFFTagSet$ShutterSpeedValue);
	return class$;
}

$Class* ExifTIFFTagSet$ShutterSpeedValue::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax