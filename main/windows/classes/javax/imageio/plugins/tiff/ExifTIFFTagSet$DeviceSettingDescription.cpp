#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$DeviceSettingDescription.h>

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

$MethodInfo _ExifTIFFTagSet$DeviceSettingDescription_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$DeviceSettingDescription::*)()>(&ExifTIFFTagSet$DeviceSettingDescription::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$DeviceSettingDescription_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$DeviceSettingDescription", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "DeviceSettingDescription", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$DeviceSettingDescription_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$DeviceSettingDescription",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$DeviceSettingDescription_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$DeviceSettingDescription_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$DeviceSettingDescription($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$DeviceSettingDescription));
}

void ExifTIFFTagSet$DeviceSettingDescription::init$() {
	$TIFFTag::init$("DeviceSettingDescription"_s, 0x0000A40B, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

ExifTIFFTagSet$DeviceSettingDescription::ExifTIFFTagSet$DeviceSettingDescription() {
}

$Class* ExifTIFFTagSet$DeviceSettingDescription::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$DeviceSettingDescription, name, initialize, &_ExifTIFFTagSet$DeviceSettingDescription_ClassInfo_, allocate$ExifTIFFTagSet$DeviceSettingDescription);
	return class$;
}

$Class* ExifTIFFTagSet$DeviceSettingDescription::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax