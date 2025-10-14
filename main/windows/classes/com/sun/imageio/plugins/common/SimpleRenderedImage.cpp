#include <com/sun/imageio/plugins/common/SimpleRenderedImage.h>

#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$FieldInfo _SimpleRenderedImage_FieldInfo_[] = {
	{"minX", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, minX)},
	{"minY", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, minY)},
	{"width", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, width)},
	{"height", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, height)},
	{"tileWidth", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, tileWidth)},
	{"tileHeight", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, tileHeight)},
	{"tileGridXOffset", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, tileGridXOffset)},
	{"tileGridYOffset", "I", nullptr, $PROTECTED, $field(SimpleRenderedImage, tileGridYOffset)},
	{"sampleModel", "Ljava/awt/image/SampleModel;", nullptr, $PROTECTED, $field(SimpleRenderedImage, sampleModel)},
	{"colorModel", "Ljava/awt/image/ColorModel;", nullptr, $PROTECTED, $field(SimpleRenderedImage, colorModel)},
	{"sources", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/awt/image/RenderedImage;>;", $PROTECTED, $field(SimpleRenderedImage, sources)},
	{"properties", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PROTECTED, $field(SimpleRenderedImage, properties)},
	{}
};

$MethodInfo _SimpleRenderedImage_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SimpleRenderedImage::*)()>(&SimpleRenderedImage::init$))},
	{"XToTileX", "(III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&SimpleRenderedImage::XToTileX))},
	{"XToTileX", "(I)I", nullptr, $PUBLIC},
	{"YToTileY", "(III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&SimpleRenderedImage::YToTileY))},
	{"YToTileY", "(I)I", nullptr, $PUBLIC},
	{"copyData", "(Ljava/awt/image/WritableRaster;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getData", "()Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getData", "(Ljava/awt/Rectangle;)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getHeight", "()I", nullptr, $PUBLIC},
	{"getMaxTileX", "()I", nullptr, $PUBLIC},
	{"getMaxTileY", "()I", nullptr, $PUBLIC},
	{"getMaxX", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(SimpleRenderedImage::*)()>(&SimpleRenderedImage::getMaxX))},
	{"getMaxY", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(SimpleRenderedImage::*)()>(&SimpleRenderedImage::getMaxY))},
	{"getMinTileX", "()I", nullptr, $PUBLIC},
	{"getMinTileY", "()I", nullptr, $PUBLIC},
	{"getMinX", "()I", nullptr, $PUBLIC},
	{"getMinY", "()I", nullptr, $PUBLIC},
	{"getNumXTiles", "()I", nullptr, $PUBLIC},
	{"getNumYTiles", "()I", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPropertyNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPropertyNames", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSampleModel", "()Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"getSources", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/awt/image/RenderedImage;>;", $PUBLIC},
	{"getTileGridXOffset", "()I", nullptr, $PUBLIC},
	{"getTileGridYOffset", "()I", nullptr, $PUBLIC},
	{"getTileHeight", "()I", nullptr, $PUBLIC},
	{"getTileWidth", "()I", nullptr, $PUBLIC},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{"tileXToX", "(III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&SimpleRenderedImage::tileXToX))},
	{"tileXToX", "(I)I", nullptr, $PUBLIC},
	{"tileYToY", "(III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&SimpleRenderedImage::tileYToY))},
	{"tileYToY", "(I)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SimpleRenderedImage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.imageio.plugins.common.SimpleRenderedImage",
	"java.lang.Object",
	"java.awt.image.RenderedImage",
	_SimpleRenderedImage_FieldInfo_,
	_SimpleRenderedImage_MethodInfo_
};

$Object* allocate$SimpleRenderedImage($Class* clazz) {
	return $of($alloc(SimpleRenderedImage));
}

void SimpleRenderedImage::init$() {
	this->tileGridXOffset = 0;
	this->tileGridYOffset = 0;
	$set(this, sources, $new($Vector));
	$set(this, properties, $new($Hashtable));
}

int32_t SimpleRenderedImage::getMinX() {
	return this->minX;
}

int32_t SimpleRenderedImage::getMaxX() {
	int32_t var$0 = getMinX();
	return var$0 + getWidth();
}

int32_t SimpleRenderedImage::getMinY() {
	return this->minY;
}

int32_t SimpleRenderedImage::getMaxY() {
	int32_t var$0 = getMinY();
	return var$0 + getHeight();
}

int32_t SimpleRenderedImage::getWidth() {
	return this->width;
}

int32_t SimpleRenderedImage::getHeight() {
	return this->height;
}

$Rectangle* SimpleRenderedImage::getBounds() {
	int32_t var$0 = getMinX();
	int32_t var$1 = getMinY();
	int32_t var$2 = getWidth();
	return $new($Rectangle, var$0, var$1, var$2, getHeight());
}

int32_t SimpleRenderedImage::getTileWidth() {
	return this->tileWidth;
}

int32_t SimpleRenderedImage::getTileHeight() {
	return this->tileHeight;
}

int32_t SimpleRenderedImage::getTileGridXOffset() {
	return this->tileGridXOffset;
}

int32_t SimpleRenderedImage::getTileGridYOffset() {
	return this->tileGridYOffset;
}

int32_t SimpleRenderedImage::getMinTileX() {
	return XToTileX(getMinX());
}

int32_t SimpleRenderedImage::getMaxTileX() {
	return XToTileX(getMaxX() - 1);
}

int32_t SimpleRenderedImage::getNumXTiles() {
	int32_t var$0 = getMaxTileX();
	return var$0 - getMinTileX() + 1;
}

int32_t SimpleRenderedImage::getMinTileY() {
	return YToTileY(getMinY());
}

int32_t SimpleRenderedImage::getMaxTileY() {
	return YToTileY(getMaxY() - 1);
}

int32_t SimpleRenderedImage::getNumYTiles() {
	int32_t var$0 = getMaxTileY();
	return var$0 - getMinTileY() + 1;
}

$SampleModel* SimpleRenderedImage::getSampleModel() {
	return this->sampleModel;
}

$ColorModel* SimpleRenderedImage::getColorModel() {
	return this->colorModel;
}

$Object* SimpleRenderedImage::getProperty($String* name$renamed) {
	$var($String, name, name$renamed);
	$assign(name, $nc(name)->toLowerCase());
	$var($Object, value, $nc(this->properties)->get(name));
	$init($Image);
	return $of(value != nullptr ? value : $Image::UndefinedProperty);
}

$StringArray* SimpleRenderedImage::getPropertyNames() {
	$var($StringArray, names, nullptr);
	if ($nc(this->properties)->size() > 0) {
		$assign(names, $new($StringArray, $nc(this->properties)->size()));
		int32_t index = 0;
		$var($Enumeration, e, $nc(this->properties)->keys());
		while ($nc(e)->hasMoreElements()) {
			$var($String, name, $cast($String, e->nextElement()));
			names->set(index++, name);
		}
	}
	return names;
}

$StringArray* SimpleRenderedImage::getPropertyNames($String* prefix$renamed) {
	$var($String, prefix, prefix$renamed);
	$var($StringArray, propertyNames, getPropertyNames());
	if (propertyNames == nullptr) {
		return nullptr;
	}
	$assign(prefix, $nc(prefix)->toLowerCase());
	$var($Vector, names, $new($Vector));
	for (int32_t i = 0; i < $nc(propertyNames)->length; ++i) {
		if ($nc(propertyNames->get(i))->startsWith(prefix)) {
			names->addElement(propertyNames->get(i));
		}
	}
	if (names->size() == 0) {
		return nullptr;
	}
	$var($StringArray, prefixNames, $new($StringArray, names->size()));
	int32_t count = 0;
	{
		$var($Iterator, it, names->iterator());
		for (; $nc(it)->hasNext();) {
			prefixNames->set(count++, $cast($String, $(it->next())));
		}
	}
	return prefixNames;
}

int32_t SimpleRenderedImage::XToTileX(int32_t x, int32_t tileGridXOffset, int32_t tileWidth) {
	$init(SimpleRenderedImage);
	x -= tileGridXOffset;
	if (x < 0) {
		x += 1 - tileWidth;
	}
	return $div(x, tileWidth);
}

int32_t SimpleRenderedImage::YToTileY(int32_t y, int32_t tileGridYOffset, int32_t tileHeight) {
	$init(SimpleRenderedImage);
	y -= tileGridYOffset;
	if (y < 0) {
		y += 1 - tileHeight;
	}
	return $div(y, tileHeight);
}

int32_t SimpleRenderedImage::XToTileX(int32_t x) {
	int32_t var$0 = x;
	int32_t var$1 = getTileGridXOffset();
	return XToTileX(var$0, var$1, getTileWidth());
}

int32_t SimpleRenderedImage::YToTileY(int32_t y) {
	int32_t var$0 = y;
	int32_t var$1 = getTileGridYOffset();
	return YToTileY(var$0, var$1, getTileHeight());
}

int32_t SimpleRenderedImage::tileXToX(int32_t tx, int32_t tileGridXOffset, int32_t tileWidth) {
	$init(SimpleRenderedImage);
	return tx * tileWidth + tileGridXOffset;
}

int32_t SimpleRenderedImage::tileYToY(int32_t ty, int32_t tileGridYOffset, int32_t tileHeight) {
	$init(SimpleRenderedImage);
	return ty * tileHeight + tileGridYOffset;
}

int32_t SimpleRenderedImage::tileXToX(int32_t tx) {
	return tx * this->tileWidth + this->tileGridXOffset;
}

int32_t SimpleRenderedImage::tileYToY(int32_t ty) {
	return ty * this->tileHeight + this->tileGridYOffset;
}

$Vector* SimpleRenderedImage::getSources() {
	return nullptr;
}

$Raster* SimpleRenderedImage::getData() {
	int32_t var$0 = getMinX();
	int32_t var$1 = getMinY();
	int32_t var$2 = getWidth();
	$var($Rectangle, rect, $new($Rectangle, var$0, var$1, var$2, getHeight()));
	return getData(rect);
}

$Raster* SimpleRenderedImage::getData($Rectangle* bounds$renamed) {
	$var($Rectangle, bounds, bounds$renamed);
	$var($Rectangle, imageBounds, getBounds());
	if (bounds == nullptr) {
		$assign(bounds, imageBounds);
	} else if (!$nc(bounds)->intersects(imageBounds)) {
		$throwNew($IllegalArgumentException, "The provided region doesn\'t intersect with the image bounds."_s);
	}
	int32_t startX = XToTileX($nc(bounds)->x);
	int32_t startY = YToTileY($nc(bounds)->y);
	int32_t endX = XToTileX($nc(bounds)->x + bounds->width - 1);
	int32_t endY = YToTileY($nc(bounds)->y + bounds->height - 1);
	if ((startX == endX) && (startY == endY)) {
		$var($Raster, tile, getTile(startX, startY));
		return $nc(tile)->createChild($nc(bounds)->x, bounds->y, bounds->width, bounds->height, bounds->x, bounds->y, nullptr);
	} else {
		if (!$nc(imageBounds)->contains(bounds)) {
			$var($Rectangle, xsect, $nc(bounds)->intersection(imageBounds));
			startX = XToTileX($nc(xsect)->x);
			startY = YToTileY($nc(xsect)->y);
			endX = XToTileX($nc(xsect)->x + xsect->width - 1);
			endY = YToTileY($nc(xsect)->y + xsect->height - 1);
		}
		$var($SampleModel, sm, $nc(this->sampleModel)->createCompatibleSampleModel($nc(bounds)->width, bounds->height));
		$var($WritableRaster, dest, $Raster::createWritableRaster(sm, $($nc(bounds)->getLocation())));
		for (int32_t j = startY; j <= endY; ++j) {
			for (int32_t i = startX; i <= endX; ++i) {
				$var($Raster, tile, getTile(i, j));
				$var($Rectangle, tileRect, $nc(tile)->getBounds());
				$var($Rectangle, intersectRect, $nc(bounds)->intersection($(tile->getBounds())));
				$var($Raster, liveRaster, tile->createChild($nc(intersectRect)->x, intersectRect->y, intersectRect->width, intersectRect->height, intersectRect->x, intersectRect->y, nullptr));
				$nc(dest)->setRect(liveRaster);
			}
		}
		return dest;
	}
}

$WritableRaster* SimpleRenderedImage::copyData($WritableRaster* dest$renamed) {
	$var($WritableRaster, dest, dest$renamed);
	$var($Rectangle, imageBounds, getBounds());
	$var($Rectangle, bounds, nullptr);
	if (dest == nullptr) {
		$assign(bounds, imageBounds);
		$var($Point, p, $new($Point, this->minX, this->minY));
		$var($SampleModel, sm, $nc(this->sampleModel)->createCompatibleSampleModel(this->width, this->height));
		$assign(dest, $Raster::createWritableRaster(sm, p));
	} else {
		$assign(bounds, $nc(dest)->getBounds());
	}
	$var($Rectangle, xsect, $nc(imageBounds)->contains(bounds) ? bounds : $nc(bounds)->intersection(imageBounds));
	int32_t startX = XToTileX($nc(xsect)->x);
	int32_t startY = YToTileY($nc(xsect)->y);
	int32_t endX = XToTileX($nc(xsect)->x + xsect->width - 1);
	int32_t endY = YToTileY($nc(xsect)->y + xsect->height - 1);
	for (int32_t j = startY; j <= endY; ++j) {
		for (int32_t i = startX; i <= endX; ++i) {
			$var($Raster, tile, getTile(i, j));
			$var($Rectangle, tileRect, $nc(tile)->getBounds());
			$var($Rectangle, intersectRect, bounds->intersection($(tile->getBounds())));
			$var($Raster, liveRaster, tile->createChild($nc(intersectRect)->x, intersectRect->y, intersectRect->width, intersectRect->height, intersectRect->x, intersectRect->y, nullptr));
			$nc(dest)->setRect(liveRaster);
		}
	}
	return dest;
}

SimpleRenderedImage::SimpleRenderedImage() {
}

$Class* SimpleRenderedImage::load$($String* name, bool initialize) {
	$loadClass(SimpleRenderedImage, name, initialize, &_SimpleRenderedImage_ClassInfo_, allocate$SimpleRenderedImage);
	return class$;
}

$Class* SimpleRenderedImage::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com