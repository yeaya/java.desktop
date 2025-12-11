#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ApertureValue.h>

#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_RATIONAL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$ApertureValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$ApertureValue::*)()>(&ExifTIFFTagSet$ApertureValue::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$ApertureValue_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ApertureValue", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ApertureValue", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$ApertureValue_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$ApertureValue",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ApertureValue_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$ApertureValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$ApertureValue($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$ApertureValue));
}

void ExifTIFFTagSet$ApertureValue::init$() {
	$TIFFTag::init$("ApertureValue"_s, 0x00009202, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$ApertureValue::ExifTIFFTagSet$ApertureValue() {
}

$Class* ExifTIFFTagSet$ApertureValue::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$ApertureValue, name, initialize, &_ExifTIFFTagSet$ApertureValue_ClassInfo_, allocate$ExifTIFFTagSet$ApertureValue);
	return class$;
}

$Class* ExifTIFFTagSet$ApertureValue::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax