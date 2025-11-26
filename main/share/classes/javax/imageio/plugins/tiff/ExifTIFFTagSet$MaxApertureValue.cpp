#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$MaxApertureValue.h>

#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$MaxApertureValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$MaxApertureValue::*)()>(&ExifTIFFTagSet$MaxApertureValue::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$MaxApertureValue_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$MaxApertureValue", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "MaxApertureValue", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$MaxApertureValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$MaxApertureValue",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$MaxApertureValue_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$MaxApertureValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$MaxApertureValue($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$MaxApertureValue));
}

void ExifTIFFTagSet$MaxApertureValue::init$() {
	$TIFFTag::init$("MaxApertureValue"_s, 0x00009205, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$MaxApertureValue::ExifTIFFTagSet$MaxApertureValue() {
}

$Class* ExifTIFFTagSet$MaxApertureValue::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$MaxApertureValue, name, initialize, &_ExifTIFFTagSet$MaxApertureValue_ClassInfo_, allocate$ExifTIFFTagSet$MaxApertureValue);
	return class$;
}

$Class* ExifTIFFTagSet$MaxApertureValue::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax