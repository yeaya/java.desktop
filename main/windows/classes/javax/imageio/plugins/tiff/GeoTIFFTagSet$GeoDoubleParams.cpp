#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$GeoDoubleParams.h>

#include <javax/imageio/plugins/tiff/GeoTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_DOUBLE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeoTIFFTagSet = ::javax::imageio::plugins::tiff::GeoTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _GeoTIFFTagSet$GeoDoubleParams_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GeoTIFFTagSet$GeoDoubleParams::*)()>(&GeoTIFFTagSet$GeoDoubleParams::init$))},
	{}
};

$InnerClassInfo _GeoTIFFTagSet$GeoDoubleParams_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoDoubleParams", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "GeoDoubleParams", $STATIC},
	{}
};

$ClassInfo _GeoTIFFTagSet$GeoDoubleParams_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoDoubleParams",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_GeoTIFFTagSet$GeoDoubleParams_MethodInfo_,
	nullptr,
	nullptr,
	_GeoTIFFTagSet$GeoDoubleParams_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.GeoTIFFTagSet"
};

$Object* allocate$GeoTIFFTagSet$GeoDoubleParams($Class* clazz) {
	return $of($alloc(GeoTIFFTagSet$GeoDoubleParams));
}

void GeoTIFFTagSet$GeoDoubleParams::init$() {
	$TIFFTag::init$("GeoDoubleParamsTag"_s, 0x000087B0, $sl(1, $TIFFTag::TIFF_DOUBLE));
}

GeoTIFFTagSet$GeoDoubleParams::GeoTIFFTagSet$GeoDoubleParams() {
}

$Class* GeoTIFFTagSet$GeoDoubleParams::load$($String* name, bool initialize) {
	$loadClass(GeoTIFFTagSet$GeoDoubleParams, name, initialize, &_GeoTIFFTagSet$GeoDoubleParams_ClassInfo_, allocate$GeoTIFFTagSet$GeoDoubleParams);
	return class$;
}

$Class* GeoTIFFTagSet$GeoDoubleParams::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax