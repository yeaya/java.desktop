#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$ModelTransformation.h>

#include <javax/imageio/plugins/tiff/GeoTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <jcpp.h>

#undef TIFF_DOUBLE

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$MethodInfo _GeoTIFFTagSet$ModelTransformation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GeoTIFFTagSet$ModelTransformation::*)()>(&GeoTIFFTagSet$ModelTransformation::init$))},
	{}
};

$InnerClassInfo _GeoTIFFTagSet$ModelTransformation_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelTransformation", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "ModelTransformation", $STATIC},
	{}
};

$ClassInfo _GeoTIFFTagSet$ModelTransformation_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelTransformation",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_GeoTIFFTagSet$ModelTransformation_MethodInfo_,
	nullptr,
	nullptr,
	_GeoTIFFTagSet$ModelTransformation_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.GeoTIFFTagSet"
};

$Object* allocate$GeoTIFFTagSet$ModelTransformation($Class* clazz) {
	return $of($alloc(GeoTIFFTagSet$ModelTransformation));
}

void GeoTIFFTagSet$ModelTransformation::init$() {
	$TIFFTag::init$("ModelTransformationTag"_s, 0x000085D8, $sl(1, $TIFFTag::TIFF_DOUBLE));
}

GeoTIFFTagSet$ModelTransformation::GeoTIFFTagSet$ModelTransformation() {
}

$Class* GeoTIFFTagSet$ModelTransformation::load$($String* name, bool initialize) {
	$loadClass(GeoTIFFTagSet$ModelTransformation, name, initialize, &_GeoTIFFTagSet$ModelTransformation_ClassInfo_, allocate$GeoTIFFTagSet$ModelTransformation);
	return class$;
}

$Class* GeoTIFFTagSet$ModelTransformation::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax