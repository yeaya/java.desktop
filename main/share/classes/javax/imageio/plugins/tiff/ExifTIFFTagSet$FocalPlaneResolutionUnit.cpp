#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FocalPlaneResolutionUnit.h>

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

$MethodInfo _ExifTIFFTagSet$FocalPlaneResolutionUnit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$FocalPlaneResolutionUnit::*)()>(&ExifTIFFTagSet$FocalPlaneResolutionUnit::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$FocalPlaneResolutionUnit_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneResolutionUnit", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FocalPlaneResolutionUnit", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$FocalPlaneResolutionUnit_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneResolutionUnit",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FocalPlaneResolutionUnit_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FocalPlaneResolutionUnit_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$FocalPlaneResolutionUnit($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$FocalPlaneResolutionUnit));
}

void ExifTIFFTagSet$FocalPlaneResolutionUnit::init$() {
	$TIFFTag::init$("FocalPlaneResolutionUnit"_s, 0x0000A210, $sl(1, $TIFFTag::TIFF_SHORT), 1);
	addValueName(1, "None"_s);
	addValueName(2, "Inch"_s);
	addValueName(3, "Centimeter"_s);
}

ExifTIFFTagSet$FocalPlaneResolutionUnit::ExifTIFFTagSet$FocalPlaneResolutionUnit() {
}

$Class* ExifTIFFTagSet$FocalPlaneResolutionUnit::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$FocalPlaneResolutionUnit, name, initialize, &_ExifTIFFTagSet$FocalPlaneResolutionUnit_ClassInfo_, allocate$ExifTIFFTagSet$FocalPlaneResolutionUnit);
	return class$;
}

$Class* ExifTIFFTagSet$FocalPlaneResolutionUnit::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax