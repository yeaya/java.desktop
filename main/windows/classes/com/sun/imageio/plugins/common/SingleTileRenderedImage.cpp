#include <com/sun/imageio/plugins/common/SingleTileRenderedImage.h>

#include <com/sun/imageio/plugins/common/SimpleRenderedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SimpleRenderedImage = ::com::sun::imageio::plugins::common::SimpleRenderedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$FieldInfo _SingleTileRenderedImage_FieldInfo_[] = {
	{"ras", "Ljava/awt/image/Raster;", nullptr, 0, $field(SingleTileRenderedImage, ras)},
	{}
};

$MethodInfo _SingleTileRenderedImage_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/Raster;Ljava/awt/image/ColorModel;)V", nullptr, $PUBLIC, $method(static_cast<void(SingleTileRenderedImage::*)($Raster*,$ColorModel*)>(&SingleTileRenderedImage::init$))},
	{"getTile", "(II)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SingleTileRenderedImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.common.SingleTileRenderedImage",
	"com.sun.imageio.plugins.common.SimpleRenderedImage",
	nullptr,
	_SingleTileRenderedImage_FieldInfo_,
	_SingleTileRenderedImage_MethodInfo_
};

$Object* allocate$SingleTileRenderedImage($Class* clazz) {
	return $of($alloc(SingleTileRenderedImage));
}

void SingleTileRenderedImage::init$($Raster* ras, $ColorModel* colorModel) {
	$SimpleRenderedImage::init$();
	$set(this, ras, ras);
	this->tileGridXOffset = (this->minX = $nc(ras)->getMinX());
	this->tileGridYOffset = (this->minY = ras->getMinY());
	this->tileWidth = (this->width = ras->getWidth());
	this->tileHeight = (this->height = ras->getHeight());
	$set(this, sampleModel, ras->getSampleModel());
	$set(this, colorModel, colorModel);
}

$Raster* SingleTileRenderedImage::getTile(int32_t tileX, int32_t tileY) {
	if (tileX != 0 || tileY != 0) {
		$throwNew($IllegalArgumentException, "tileX != 0 || tileY != 0"_s);
	}
	return this->ras;
}

SingleTileRenderedImage::SingleTileRenderedImage() {
}

$Class* SingleTileRenderedImage::load$($String* name, bool initialize) {
	$loadClass(SingleTileRenderedImage, name, initialize, &_SingleTileRenderedImage_ClassInfo_, allocate$SingleTileRenderedImage);
	return class$;
}

$Class* SingleTileRenderedImage::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com