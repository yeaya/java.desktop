#include <com/sun/imageio/plugins/tiff/TIFFRenderedImage.h>

#include <com/sun/imageio/plugins/tiff/TIFFImageReader.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/plugins/tiff/TIFFImageReadParam.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

using $TIFFImageReader = ::com::sun::imageio::plugins::tiff::TIFFImageReader;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $IIOParam = ::javax::imageio::IIOParam;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $TIFFImageReadParam = ::javax::imageio::plugins::tiff::TIFFImageReadParam;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFRenderedImage_FieldInfo_[] = {
	{"reader", "Lcom/sun/imageio/plugins/tiff/TIFFImageReader;", nullptr, $PRIVATE, $field(TIFFRenderedImage, reader)},
	{"imageIndex", "I", nullptr, $PRIVATE, $field(TIFFRenderedImage, imageIndex)},
	{"tileParam", "Ljavax/imageio/ImageReadParam;", nullptr, $PRIVATE, $field(TIFFRenderedImage, tileParam)},
	{"subsampleX", "I", nullptr, $PRIVATE, $field(TIFFRenderedImage, subsampleX)},
	{"subsampleY", "I", nullptr, $PRIVATE, $field(TIFFRenderedImage, subsampleY)},
	{"isSubsampling", "Z", nullptr, $PRIVATE, $field(TIFFRenderedImage, isSubsampling)},
	{"width", "I", nullptr, $PRIVATE, $field(TIFFRenderedImage, width)},
	{"height", "I", nullptr, $PRIVATE, $field(TIFFRenderedImage, height)},
	{"tileWidth", "I", nullptr, $PRIVATE, $field(TIFFRenderedImage, tileWidth)},
	{"tileHeight", "I", nullptr, $PRIVATE, $field(TIFFRenderedImage, tileHeight)},
	{"its", "Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PRIVATE, $field(TIFFRenderedImage, its)},
	{}
};

$MethodInfo _TIFFRenderedImage_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/tiff/TIFFImageReader;ILjavax/imageio/ImageReadParam;II)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFRenderedImage::*)($TIFFImageReader*,int32_t,$ImageReadParam*,int32_t,int32_t)>(&TIFFRenderedImage::init$)), "java.io.IOException"},
	{"cloneImageReadParam", "(Ljavax/imageio/ImageReadParam;Z)Ljavax/imageio/ImageReadParam;", nullptr, $PRIVATE, $method(static_cast<$ImageReadParam*(TIFFRenderedImage::*)($ImageReadParam*,bool)>(&TIFFRenderedImage::cloneImageReadParam))},
	{"copyData", "(Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getData", "()Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getData", "(Ljava/awt/Rectangle;)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getMinTileX", "()I", nullptr, $PUBLIC},
	{"getMinTileY", "()I", nullptr, $PUBLIC},
	{"getMinX", "()I", nullptr, $PUBLIC},
	{"getMinY", "()I", nullptr, $PUBLIC},
	{"getNumXTiles", "()I", nullptr, $PUBLIC},
	{"getNumYTiles", "()I", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPropertyNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSampleModel", "()Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"getSources", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/awt/image/RenderedImage;>;", $PUBLIC},
	{"getTile", "(II)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getTileGridXOffset", "()I", nullptr, $PUBLIC},
	{"getTileGridYOffset", "()I", nullptr, $PUBLIC},
	{"getTileHeight", "()I", nullptr, $PUBLIC},
	{"getTileWidth", "()I", nullptr, $PUBLIC},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"read", "(Ljava/awt/Rectangle;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _TIFFRenderedImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFRenderedImage",
	"java.lang.Object",
	"java.awt.image.RenderedImage",
	_TIFFRenderedImage_FieldInfo_,
	_TIFFRenderedImage_MethodInfo_
};

$Object* allocate$TIFFRenderedImage($Class* clazz) {
	return $of($alloc(TIFFRenderedImage));
}

void TIFFRenderedImage::init$($TIFFImageReader* reader, int32_t imageIndex, $ImageReadParam* readParam, int32_t width, int32_t height) {
	$set(this, reader, reader);
	this->imageIndex = imageIndex;
	$set(this, tileParam, cloneImageReadParam(readParam, false));
	this->subsampleX = $nc(this->tileParam)->getSourceXSubsampling();
	this->subsampleY = $nc(this->tileParam)->getSourceYSubsampling();
	this->isSubsampling = this->subsampleX != 1 || this->subsampleY != 1;
	this->width = $div(width, this->subsampleX);
	this->height = $div(height, this->subsampleY);
	this->tileWidth = $div($nc(reader)->getTileWidth(imageIndex), this->subsampleX);
	this->tileHeight = $div(reader->getTileHeight(imageIndex), this->subsampleY);
	$var($Iterator, iter, reader->getImageTypes(imageIndex));
	$set(this, its, $cast($ImageTypeSpecifier, $nc(iter)->next()));
	$nc(this->tileParam)->setDestinationType(this->its);
}

$ImageReadParam* TIFFRenderedImage::cloneImageReadParam($ImageReadParam* param, bool copyTagSets) {
	$var($TIFFImageReadParam, newParam, $new($TIFFImageReadParam));
	int32_t var$0 = $nc(param)->getSourceXSubsampling();
	int32_t var$1 = param->getSourceYSubsampling();
	int32_t var$2 = param->getSubsamplingXOffset();
	newParam->setSourceSubsampling(var$0, var$1, var$2, param->getSubsamplingYOffset());
	newParam->setSourceBands($($nc(param)->getSourceBands()));
	newParam->setDestinationBands($($nc(param)->getDestinationBands()));
	newParam->setDestinationOffset($($nc(param)->getDestinationOffset()));
	if ($instanceOf($TIFFImageReadParam, param) && copyTagSets) {
		$var($TIFFImageReadParam, tparam, $cast($TIFFImageReadParam, param));
		$var($List, tagSets, $nc(tparam)->getAllowedTagSets());
		if (tagSets != nullptr) {
			$var($Iterator, tagSetIter, tagSets->iterator());
			if (tagSetIter != nullptr) {
				while (tagSetIter->hasNext()) {
					$var($TIFFTagSet, tagSet, $cast($TIFFTagSet, tagSetIter->next()));
					newParam->addAllowedTagSet(tagSet);
				}
			}
		}
	}
	return newParam;
}

$Vector* TIFFRenderedImage::getSources() {
	return nullptr;
}

$Object* TIFFRenderedImage::getProperty($String* name) {
	$init($Image);
	return $of($Image::UndefinedProperty);
}

$StringArray* TIFFRenderedImage::getPropertyNames() {
	return nullptr;
}

$ColorModel* TIFFRenderedImage::getColorModel() {
	return $nc(this->its)->getColorModel();
}

$SampleModel* TIFFRenderedImage::getSampleModel() {
	return $nc(this->its)->getSampleModel();
}

int32_t TIFFRenderedImage::getWidth() {
	return this->width;
}

int32_t TIFFRenderedImage::getHeight() {
	return this->height;
}

int32_t TIFFRenderedImage::getMinX() {
	return 0;
}

int32_t TIFFRenderedImage::getMinY() {
	return 0;
}

int32_t TIFFRenderedImage::getNumXTiles() {
	return $div((this->width + this->tileWidth - 1), this->tileWidth);
}

int32_t TIFFRenderedImage::getNumYTiles() {
	return $div((this->height + this->tileHeight - 1), this->tileHeight);
}

int32_t TIFFRenderedImage::getMinTileX() {
	return 0;
}

int32_t TIFFRenderedImage::getMinTileY() {
	return 0;
}

int32_t TIFFRenderedImage::getTileWidth() {
	return this->tileWidth;
}

int32_t TIFFRenderedImage::getTileHeight() {
	return this->tileHeight;
}

int32_t TIFFRenderedImage::getTileGridXOffset() {
	return 0;
}

int32_t TIFFRenderedImage::getTileGridYOffset() {
	return 0;
}

$Raster* TIFFRenderedImage::getTile(int32_t tileX, int32_t tileY) {
	$var($Rectangle, tileRect, $new($Rectangle, tileX * this->tileWidth, tileY * this->tileHeight, this->tileWidth, this->tileHeight));
	return getData(tileRect);
}

$Raster* TIFFRenderedImage::getData() {
	int32_t var$0 = getWidth();
	return read($$new($Rectangle, 0, 0, var$0, getHeight()));
}

$Raster* TIFFRenderedImage::getData($Rectangle* rect) {
	return read(rect);
}

$WritableRaster* TIFFRenderedImage::read($Rectangle* rect) {
	$synchronized(this) {
		$nc(this->tileParam)->setSourceRegion(this->isSubsampling ? $$new($Rectangle, this->subsampleX * $nc(rect)->x, this->subsampleY * rect->y, this->subsampleX * rect->width, this->subsampleY * rect->height) : rect);
		try {
			$var($BufferedImage, bi, $nc(this->reader)->read(this->imageIndex, this->tileParam));
			$var($WritableRaster, ras, $nc(bi)->getRaster());
			int32_t var$0 = ras->getWidth();
			return $nc(ras)->createWritableChild(0, 0, var$0, ras->getHeight(), $nc(rect)->x, rect->y, nullptr);
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		}
	}
	$shouldNotReachHere();
}

$WritableRaster* TIFFRenderedImage::copyData($WritableRaster* raster) {
	if (raster == nullptr) {
		int32_t var$0 = getWidth();
		return read($$new($Rectangle, 0, 0, var$0, getHeight()));
	} else {
		$var($Raster, src, read($($nc(raster)->getBounds())));
		$nc(raster)->setRect(src);
		return raster;
	}
}

TIFFRenderedImage::TIFFRenderedImage() {
}

$Class* TIFFRenderedImage::load$($String* name, bool initialize) {
	$loadClass(TIFFRenderedImage, name, initialize, &_TIFFRenderedImage_ClassInfo_, allocate$TIFFRenderedImage);
	return class$;
}

$Class* TIFFRenderedImage::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com