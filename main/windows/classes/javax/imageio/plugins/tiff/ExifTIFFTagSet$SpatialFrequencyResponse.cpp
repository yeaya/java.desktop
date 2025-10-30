#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SpatialFrequencyResponse.h>

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

$MethodInfo _ExifTIFFTagSet$SpatialFrequencyResponse_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExifTIFFTagSet$SpatialFrequencyResponse::*)()>(&ExifTIFFTagSet$SpatialFrequencyResponse::init$))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet$SpatialFrequencyResponse_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SpatialFrequencyResponse", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SpatialFrequencyResponse", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet$SpatialFrequencyResponse_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$SpatialFrequencyResponse",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SpatialFrequencyResponse_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet$SpatialFrequencyResponse_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet"
};

$Object* allocate$ExifTIFFTagSet$SpatialFrequencyResponse($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet$SpatialFrequencyResponse));
}

void ExifTIFFTagSet$SpatialFrequencyResponse::init$() {
	$TIFFTag::init$("SpatialFrequencyResponse"_s, 0x0000A20C, $sl(1, $TIFFTag::TIFF_UNDEFINED));
}

ExifTIFFTagSet$SpatialFrequencyResponse::ExifTIFFTagSet$SpatialFrequencyResponse() {
}

$Class* ExifTIFFTagSet$SpatialFrequencyResponse::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet$SpatialFrequencyResponse, name, initialize, &_ExifTIFFTagSet$SpatialFrequencyResponse_ClassInfo_, allocate$ExifTIFFTagSet$SpatialFrequencyResponse);
	return class$;
}

$Class* ExifTIFFTagSet$SpatialFrequencyResponse::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax