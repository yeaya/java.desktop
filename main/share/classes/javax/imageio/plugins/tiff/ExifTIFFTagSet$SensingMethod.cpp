#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SensingMethod.h>

#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _ExifTIFFTagSet$SensingMethod_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$SensingMethod::*)()>(&ExifTIFFTagSet$SensingMethod::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$SensingMethod_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SensingMethod", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SensingMethod", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$SensingMethod_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$SensingMethod",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SensingMethod_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SensingMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$SensingMethod($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$SensingMethod));
}

void ExifTIFFTagSet$SensingMethod::init$() {
	$TIFFTag::init$("SensingMethod"_s, 0x0000A217, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "Not Defined"_s);
	addValueName(2, "One-chip color area sensor"_s);
	addValueName(3, "Two-chip color area sensor"_s);
	addValueName(4, "Three-chip color area sensor"_s);
	addValueName(5, "Color sequential area sensor"_s);
	addValueName(7, "Trilinear sensor"_s);
	addValueName(8, "Color sequential linear sensor"_s);
}

ExifTIFFTagSet$SensingMethod::ExifTIFFTagSet$SensingMethod() {
}

$Class* ExifTIFFTagSet$SensingMethod::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$SensingMethod, name, initialize, &_ExifTIFFTagSet$SensingMethod_ClassInfo_, allocate$ExifTIFFTagSet$SensingMethod);
	return class$;
}

$Class* ExifTIFFTagSet$SensingMethod::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax