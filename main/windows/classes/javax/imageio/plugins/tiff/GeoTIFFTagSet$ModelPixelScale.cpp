#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$ModelPixelScale.h>

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

$MethodInfo _GeoTIFFTagSet$ModelPixelScale_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GeoTIFFTagSet$ModelPixelScale::*)()>(&GeoTIFFTagSet$ModelPixelScale::init$))},
	{}
};

$InnerClassInfo _GeoTIFFTagSet$ModelPixelScale_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelPixelScale", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "ModelPixelScale", $STATIC},
	{}
};

$ClassInfo _GeoTIFFTagSet$ModelPixelScale_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelPixelScale",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_GeoTIFFTagSet$ModelPixelScale_MethodInfo_,
	nullptr,
	nullptr,
	_GeoTIFFTagSet$ModelPixelScale_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.GeoTIFFTagSet"
};

$Object* allocate$GeoTIFFTagSet$ModelPixelScale($Class* clazz) {
	return $of($alloc(GeoTIFFTagSet$ModelPixelScale));
}

void GeoTIFFTagSet$ModelPixelScale::init$() {
	$TIFFTag::init$("ModelPixelScaleTag"_s, 0x0000830E, $sl(1, $TIFFTag::TIFF_DOUBLE));
}

GeoTIFFTagSet$ModelPixelScale::GeoTIFFTagSet$ModelPixelScale() {
}

$Class* GeoTIFFTagSet$ModelPixelScale::load$($String* name, bool initialize) {
	$loadClass(GeoTIFFTagSet$ModelPixelScale, name, initialize, &_GeoTIFFTagSet$ModelPixelScale_ClassInfo_, allocate$GeoTIFFTagSet$ModelPixelScale);
	return class$;
}

$Class* GeoTIFFTagSet$ModelPixelScale::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax