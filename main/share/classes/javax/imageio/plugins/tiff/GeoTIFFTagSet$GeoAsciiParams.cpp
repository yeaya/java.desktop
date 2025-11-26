#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$GeoAsciiParams.h>

#include <javax/imageio/plugins/tiff/GeoTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_ASCII

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeoTIFFTagSet = ::javax::imageio::plugins::tiff::GeoTIFFTagSet;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _GeoTIFFTagSet$GeoAsciiParams_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GeoTIFFTagSet$GeoAsciiParams::*)()>(&GeoTIFFTagSet$GeoAsciiParams::init$))},
	{}
};

$InnerClassInfo _GeoTIFFTagSet$GeoAsciiParams_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoAsciiParams", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "GeoAsciiParams", $STATIC},
	{}
};

$ClassInfo _GeoTIFFTagSet$GeoAsciiParams_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.GeoTIFFTagSet$GeoAsciiParams",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_GeoTIFFTagSet$GeoAsciiParams_MethodInfo_,
	nullptr,
	nullptr,
	_GeoTIFFTagSet$GeoAsciiParams_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.GeoTIFFTagSet"
};

$Object* allocate$GeoTIFFTagSet$GeoAsciiParams($Class* clazz) {
	return $of($alloc(GeoTIFFTagSet$GeoAsciiParams));
}

void GeoTIFFTagSet$GeoAsciiParams::init$() {
	$TIFFTag::init$("GeoAsciiParamsTag"_s, 0x000087B1, $sl(1, $TIFFTag::TIFF_ASCII));
}

GeoTIFFTagSet$GeoAsciiParams::GeoTIFFTagSet$GeoAsciiParams() {
}

$Class* GeoTIFFTagSet$GeoAsciiParams::load$($String* name, bool initialize) {
	$loadClass(GeoTIFFTagSet$GeoAsciiParams, name, initialize, &_GeoTIFFTagSet$GeoAsciiParams_ClassInfo_, allocate$GeoTIFFTagSet$GeoAsciiParams);
	return class$;
}

$Class* GeoTIFFTagSet$GeoAsciiParams::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax