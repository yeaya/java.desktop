#include <javax/imageio/plugins/tiff/GeoTIFFTagSet$ModelTiepoint.h>

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

$MethodInfo _GeoTIFFTagSet$ModelTiepoint_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GeoTIFFTagSet$ModelTiepoint::*)()>(&GeoTIFFTagSet$ModelTiepoint::init$))},
	{}
};

$InnerClassInfo _GeoTIFFTagSet$ModelTiepoint_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelTiepoint", "javax.imageio.plugins.tiff.GeoTIFFTagSet", "ModelTiepoint", $STATIC},
	{}
};

$ClassInfo _GeoTIFFTagSet$ModelTiepoint_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.plugins.tiff.GeoTIFFTagSet$ModelTiepoint",
	"javax.imageio.plugins.tiff.TIFFTag",
	nullptr,
	nullptr,
	_GeoTIFFTagSet$ModelTiepoint_MethodInfo_,
	nullptr,
	nullptr,
	_GeoTIFFTagSet$ModelTiepoint_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.GeoTIFFTagSet"
};

$Object* allocate$GeoTIFFTagSet$ModelTiepoint($Class* clazz) {
	return $of($alloc(GeoTIFFTagSet$ModelTiepoint));
}

void GeoTIFFTagSet$ModelTiepoint::init$() {
	$TIFFTag::init$("ModelTiepointTag"_s, 0x00008482, $sl(1, $TIFFTag::TIFF_DOUBLE));
}

GeoTIFFTagSet$ModelTiepoint::GeoTIFFTagSet$ModelTiepoint() {
}

$Class* GeoTIFFTagSet$ModelTiepoint::load$($String* name, bool initialize) {
	$loadClass(GeoTIFFTagSet$ModelTiepoint, name, initialize, &_GeoTIFFTagSet$ModelTiepoint_ClassInfo_, allocate$GeoTIFFTagSet$ModelTiepoint);
	return class$;
}

$Class* GeoTIFFTagSet$ModelTiepoint::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax