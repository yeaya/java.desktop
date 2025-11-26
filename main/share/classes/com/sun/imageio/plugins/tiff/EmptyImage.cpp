#include <com/sun/imageio/plugins/tiff/EmptyImage.h>

#include <com/sun/imageio/plugins/common/SimpleRenderedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <jcpp.h>

using $SimpleRenderedImage = ::com::sun::imageio::plugins::common::SimpleRenderedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$MethodInfo _EmptyImage_MethodInfo_[] = {
	{"<init>", "(IIIIIIIILjava/awt/image/SampleModel;Ljava/awt/image/ColorModel;)V", nullptr, 0, $method(static_cast<void(EmptyImage::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$SampleModel*,$ColorModel*)>(&EmptyImage::init$))},
	{"getTile", "(II)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EmptyImage_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.tiff.EmptyImage",
	"com.sun.imageio.plugins.common.SimpleRenderedImage",
	nullptr,
	nullptr,
	_EmptyImage_MethodInfo_
};

$Object* allocate$EmptyImage($Class* clazz) {
	return $of($alloc(EmptyImage));
}

void EmptyImage::init$(int32_t minX, int32_t minY, int32_t width, int32_t height, int32_t tileGridXOffset, int32_t tileGridYOffset, int32_t tileWidth, int32_t tileHeight, $SampleModel* sampleModel, $ColorModel* colorModel) {
	$SimpleRenderedImage::init$();
	this->minX = minX;
	this->minY = minY;
	this->width = width;
	this->height = height;
	this->tileGridXOffset = tileGridXOffset;
	this->tileGridYOffset = tileGridYOffset;
	this->tileWidth = tileWidth;
	this->tileHeight = tileHeight;
	$set(this, sampleModel, sampleModel);
	$set(this, colorModel, colorModel);
}

$Raster* EmptyImage::getTile(int32_t tileX, int32_t tileY) {
	return nullptr;
}

EmptyImage::EmptyImage() {
}

$Class* EmptyImage::load$($String* name, bool initialize) {
	$loadClass(EmptyImage, name, initialize, &_EmptyImage_ClassInfo_, allocate$EmptyImage);
	return class$;
}

$Class* EmptyImage::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com