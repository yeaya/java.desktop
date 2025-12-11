#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExposureBiasValue.h>

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

$MethodInfo _ExifTIFFTagSet$ExposureBiasValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$ExposureBiasValue::*)()>(&ExifTIFFTagSet$ExposureBiasValue::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$ExposureBiasValue_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureBiasValue", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExposureBiasValue", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$ExposureBiasValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureBiasValue",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ExposureBiasValue_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ExposureBiasValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$ExposureBiasValue($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$ExposureBiasValue));
}

void ExifTIFFTagSet$ExposureBiasValue::init$() {
	$TIFFTag::init$("ExposureBiasValue"_s, 0x00009204, $sl(1, $TIFFTag::TIFF_SRATIONAL), 1);
}

ExifTIFFTagSet$ExposureBiasValue::ExifTIFFTagSet$ExposureBiasValue() {
}

$Class* ExifTIFFTagSet$ExposureBiasValue::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$ExposureBiasValue, name, initialize, &_ExifTIFFTagSet$ExposureBiasValue_ClassInfo_, allocate$ExifTIFFTagSet$ExposureBiasValue);
	return class$;
}

$Class* ExifTIFFTagSet$ExposureBiasValue::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax