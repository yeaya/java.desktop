#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ComponentsConfiguration.h>

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

$MethodInfo _ExifTIFFTagSet$ComponentsConfiguration_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$ComponentsConfiguration::*)()>(&ExifTIFFTagSet$ComponentsConfiguration::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$ComponentsConfiguration_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ComponentsConfiguration", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ComponentsConfiguration", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$ComponentsConfiguration_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$ComponentsConfiguration",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ComponentsConfiguration_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ComponentsConfiguration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$ComponentsConfiguration($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$ComponentsConfiguration));
}

void ExifTIFFTagSet$ComponentsConfiguration::init$() {
	$TIFFTag::init$("ComponentsConfiguration"_s, 0x00009101, $sl(1, $TIFFTag::TIFF_UNDEFINED), 4);
	addValueName(0, "DoesNotExist"_s);
	addValueName(1, "Y"_s);
	addValueName(2, "Cb"_s);
	addValueName(3, "Cr"_s);
	addValueName(4, "R"_s);
	addValueName(5, "G"_s);
	addValueName(6, "B"_s);
}

ExifTIFFTagSet$ComponentsConfiguration::ExifTIFFTagSet$ComponentsConfiguration() {
}

$Class* ExifTIFFTagSet$ComponentsConfiguration::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$ComponentsConfiguration, name, initialize, &_ExifTIFFTagSet$ComponentsConfiguration_ClassInfo_, allocate$ExifTIFFTagSet$ComponentsConfiguration);
	return class$;
}

$Class* ExifTIFFTagSet$ComponentsConfiguration::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax