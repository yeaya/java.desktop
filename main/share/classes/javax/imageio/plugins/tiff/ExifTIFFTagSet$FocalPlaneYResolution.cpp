#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FocalPlaneYResolution.h>

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

$MethodInfo _ExifTIFFTagSet$FocalPlaneYResolution_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$FocalPlaneYResolution::*)()>(&ExifTIFFTagSet$FocalPlaneYResolution::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$FocalPlaneYResolution_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneYResolution", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FocalPlaneYResolution", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$FocalPlaneYResolution_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneYResolution",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FocalPlaneYResolution_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$FocalPlaneYResolution_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$FocalPlaneYResolution($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$FocalPlaneYResolution));
}

void ExifTIFFTagSet$FocalPlaneYResolution::init$() {
	$TIFFTag::init$("FocalPlaneYResolution"_s, 0x0000A20F, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$FocalPlaneYResolution::ExifTIFFTagSet$FocalPlaneYResolution() {
}

$Class* ExifTIFFTagSet$FocalPlaneYResolution::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$FocalPlaneYResolution, name, initialize, &_ExifTIFFTagSet$FocalPlaneYResolution_ClassInfo_, allocate$ExifTIFFTagSet$FocalPlaneYResolution);
	return class$;
}

$Class* ExifTIFFTagSet$FocalPlaneYResolution::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax