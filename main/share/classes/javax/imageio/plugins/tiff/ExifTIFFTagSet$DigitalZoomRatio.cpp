#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$DigitalZoomRatio.h>

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

$MethodInfo _ExifTIFFTagSet$DigitalZoomRatio_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$DigitalZoomRatio::*)()>(&ExifTIFFTagSet$DigitalZoomRatio::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$DigitalZoomRatio_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$DigitalZoomRatio", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "DigitalZoomRatio", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$DigitalZoomRatio_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$DigitalZoomRatio",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$DigitalZoomRatio_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$DigitalZoomRatio_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$DigitalZoomRatio($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$DigitalZoomRatio));
}

void ExifTIFFTagSet$DigitalZoomRatio::init$() {
	$TIFFTag::init$("DigitalZoomRatio"_s, 0x0000A404, $sl(1, $TIFFTag::TIFF_RATIONAL), 1);
}

ExifTIFFTagSet$DigitalZoomRatio::ExifTIFFTagSet$DigitalZoomRatio() {
}

$Class* ExifTIFFTagSet$DigitalZoomRatio::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$DigitalZoomRatio, name, initialize, &_ExifTIFFTagSet$DigitalZoomRatio_ClassInfo_, allocate$ExifTIFFTagSet$DigitalZoomRatio);
	return class$;
}

$Class* ExifTIFFTagSet$DigitalZoomRatio::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax