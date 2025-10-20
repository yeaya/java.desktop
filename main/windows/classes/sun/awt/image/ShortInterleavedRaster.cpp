#include <sun/awt/image/ShortInterleavedRaster.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferUShort.h>
#include <java/awt/image/PixelInterleavedSampleModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RasterFormatException.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/ShortComponentRaster.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $PixelInterleavedSampleModel = ::java::awt::image::PixelInterleavedSampleModel;
using $Raster = ::java::awt::image::Raster;
using $RasterFormatException = ::java::awt::image::RasterFormatException;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ShortComponentRaster = ::sun::awt::image::ShortComponentRaster;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ShortInterleavedRaster_FieldInfo_[] = {
	{"maxX", "I", nullptr, $PRIVATE, $field(ShortInterleavedRaster, maxX)},
	{"maxY", "I", nullptr, $PRIVATE, $field(ShortInterleavedRaster, maxY)},
	{}
};

$MethodInfo _ShortInterleavedRaster_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(ShortInterleavedRaster::*)($SampleModel*,$Point*)>(&ShortInterleavedRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferUShort;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(ShortInterleavedRaster::*)($SampleModel*,$DataBufferUShort*,$Point*)>(&ShortInterleavedRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferUShort;Ljava/awt/Rectangle;Ljava/awt/Point;Lsun/awt/image/ShortInterleavedRaster;)V", nullptr, $PUBLIC, $method(static_cast<void(ShortInterleavedRaster::*)($SampleModel*,$DataBufferUShort*,$Rectangle*,$Point*,ShortInterleavedRaster*)>(&ShortInterleavedRaster::init$))},
	{"createChild", "(IIIIII[I)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "()Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createWritableChild", "(IIIIII[I)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"getDataElements", "(IILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDataElements", "(IIIILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDataOffset", "(I)I", nullptr, $PUBLIC},
	{"getDataOffsets", "()[I", nullptr, $PUBLIC},
	{"getDataStorage", "()[S", nullptr, $PUBLIC},
	{"getPixelStride", "()I", nullptr, $PUBLIC},
	{"getScanlineStride", "()I", nullptr, $PUBLIC},
	{"getShortData", "(IIIII[S)[S", nullptr, $PUBLIC},
	{"getShortData", "(IIII[S)[S", nullptr, $PUBLIC},
	{"putShortData", "(IIIII[S)V", nullptr, $PUBLIC},
	{"putShortData", "(IIII[S)V", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/awt/image/Raster;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IIIILjava/awt/image/Raster;)V", nullptr, $PRIVATE, $method(static_cast<void(ShortInterleavedRaster::*)(int32_t,int32_t,int32_t,int32_t,$Raster*)>(&ShortInterleavedRaster::setDataElements))},
	{"setDataElements", "(IIIILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ShortInterleavedRaster_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.ShortInterleavedRaster",
	"sun.awt.image.ShortComponentRaster",
	nullptr,
	_ShortInterleavedRaster_FieldInfo_,
	_ShortInterleavedRaster_MethodInfo_
};

$Object* allocate$ShortInterleavedRaster($Class* clazz) {
	return $of($alloc(ShortInterleavedRaster));
}

void ShortInterleavedRaster::init$($SampleModel* sampleModel, $Point* origin) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, var$0, sampleModel);
	$var($DataBufferUShort, var$1, $cast($DataBufferUShort, $nc(sampleModel)->createDataBuffer()));
	int32_t var$2 = $nc(origin)->x;
	int32_t var$3 = origin->y;
	int32_t var$4 = sampleModel->getWidth();
	ShortInterleavedRaster::init$(var$0, var$1, $$new($Rectangle, var$2, var$3, var$4, sampleModel->getHeight()), origin, nullptr);
}

void ShortInterleavedRaster::init$($SampleModel* sampleModel, $DataBufferUShort* dataBuffer, $Point* origin) {
	int32_t var$0 = $nc(origin)->x;
	int32_t var$1 = origin->y;
	int32_t var$2 = $nc(sampleModel)->getWidth();
	ShortInterleavedRaster::init$(sampleModel, dataBuffer, $$new($Rectangle, var$0, var$1, var$2, sampleModel->getHeight()), origin, nullptr);
}

void ShortInterleavedRaster::init$($SampleModel* sampleModel, $DataBufferUShort* dataBuffer, $Rectangle* aRegion, $Point* origin, ShortInterleavedRaster* parent) {
	$useLocalCurrentObjectStackCache();
	$ShortComponentRaster::init$(sampleModel, dataBuffer, aRegion, origin, parent);
	this->maxX = this->minX + this->width;
	this->maxY = this->minY + this->height;
	$set(this, data, stealData(dataBuffer, 0));
	if (($instanceOf($PixelInterleavedSampleModel, sampleModel)) || ($instanceOf($ComponentSampleModel, sampleModel) && $nc(sampleModel)->getNumBands() == 1)) {
		$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, sampleModel));
		this->scanlineStride = csm->getScanlineStride();
		this->pixelStride = csm->getPixelStride();
		$set(this, dataOffsets, csm->getBandOffsets());
		int32_t xOffset = $nc(aRegion)->x - $nc(origin)->x;
		int32_t yOffset = aRegion->y - origin->y;
		for (int32_t i = 0; i < getNumDataElements(); ++i) {
			(*$nc(this->dataOffsets))[i] += xOffset * this->pixelStride + yOffset * this->scanlineStride;
		}
	} else if ($instanceOf($SinglePixelPackedSampleModel, sampleModel)) {
		$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sampleModel));
		this->scanlineStride = sppsm->getScanlineStride();
		this->pixelStride = 1;
		$set(this, dataOffsets, $new($ints, 1));
		$nc(this->dataOffsets)->set(0, $nc(dataBuffer)->getOffset());
		int32_t xOffset = $nc(aRegion)->x - $nc(origin)->x;
		int32_t yOffset = aRegion->y - origin->y;
		(*$nc(this->dataOffsets))[0] += xOffset + yOffset * this->scanlineStride;
	} else {
		$throwNew($RasterFormatException, $$str({"ShortInterleavedRasters must have PixelInterleavedSampleModel, SinglePixelPackedSampleModel or 1 band ComponentSampleModel.  Sample model is "_s, sampleModel}));
	}
	this->bandOffset = $nc(this->dataOffsets)->get(0);
	verify();
}

$ints* ShortInterleavedRaster::getDataOffsets() {
	return $cast($ints, $nc(this->dataOffsets)->clone());
}

int32_t ShortInterleavedRaster::getDataOffset(int32_t band) {
	return $nc(this->dataOffsets)->get(band);
}

int32_t ShortInterleavedRaster::getScanlineStride() {
	return this->scanlineStride;
}

int32_t ShortInterleavedRaster::getPixelStride() {
	return this->pixelStride;
}

$shorts* ShortInterleavedRaster::getDataStorage() {
	return this->data;
}

$Object* ShortInterleavedRaster::getDataElements(int32_t x, int32_t y, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($shorts, outData, nullptr);
	if (obj == nullptr) {
		$assign(outData, $new($shorts, this->numDataElements));
	} else {
		$assign(outData, $cast($shorts, obj));
	}
	int32_t off = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	for (int32_t band = 0; band < this->numDataElements; ++band) {
		$nc(outData)->set(band, $nc(this->data)->get($nc(this->dataOffsets)->get(band) + off));
	}
	return $of(outData);
}

$Object* ShortInterleavedRaster::getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($shorts, outData, nullptr);
	if (obj == nullptr) {
		$assign(outData, $new($shorts, w * h * this->numDataElements));
	} else {
		$assign(outData, $cast($shorts, obj));
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	int32_t xoff = 0;
	int32_t off = 0;
	int32_t xstart = 0;
	int32_t ystart = 0;
	for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
		xoff = yoff;
		for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
			for (int32_t c = 0; c < this->numDataElements; ++c) {
				$nc(outData)->set(off++, $nc(this->data)->get($nc(this->dataOffsets)->get(c) + xoff));
			}
		}
	}
	return $of(outData);
}

$shorts* ShortInterleavedRaster::getShortData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $shorts* outData$renamed) {
	$var($shorts, outData, outData$renamed);
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (outData == nullptr) {
		$assign(outData, $new($shorts, this->numDataElements * w * h));
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride + $nc(this->dataOffsets)->get(band);
	int32_t xoff = 0;
	int32_t off = 0;
	int32_t xstart = 0;
	int32_t ystart = 0;
	if (this->pixelStride == 1) {
		if (this->scanlineStride == w) {
			$System::arraycopy(this->data, yoff, outData, 0, w * h);
		} else {
			for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
				$System::arraycopy(this->data, yoff, outData, off, w);
				off += w;
			}
		}
	} else {
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(outData)->set(off++, $nc(this->data)->get(xoff));
			}
		}
	}
	return outData;
}

$shorts* ShortInterleavedRaster::getShortData(int32_t x, int32_t y, int32_t w, int32_t h, $shorts* outData$renamed) {
	$var($shorts, outData, outData$renamed);
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (outData == nullptr) {
		$assign(outData, $new($shorts, this->numDataElements * w * h));
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	int32_t xoff = 0;
	int32_t off = 0;
	int32_t xstart = 0;
	int32_t ystart = 0;
	for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
		xoff = yoff;
		for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
			for (int32_t c = 0; c < this->numDataElements; ++c) {
				$nc(outData)->set(off++, $nc(this->data)->get($nc(this->dataOffsets)->get(c) + xoff));
			}
		}
	}
	return outData;
}

void ShortInterleavedRaster::setDataElements(int32_t x, int32_t y, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($shorts, inData, $cast($shorts, obj));
	int32_t off = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	for (int32_t i = 0; i < this->numDataElements; ++i) {
		$nc(this->data)->set($nc(this->dataOffsets)->get(i) + off, $nc(inData)->get(i));
	}
	markDirty();
}

void ShortInterleavedRaster::setDataElements(int32_t x, int32_t y, $Raster* inRaster) {
	int32_t dstOffX = x + $nc(inRaster)->getMinX();
	int32_t dstOffY = y + inRaster->getMinY();
	int32_t width = inRaster->getWidth();
	int32_t height = inRaster->getHeight();
	if ((dstOffX < this->minX) || (dstOffY < this->minY) || (dstOffX + width > this->maxX) || (dstOffY + height > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	setDataElements(dstOffX, dstOffY, width, height, inRaster);
}

void ShortInterleavedRaster::setDataElements(int32_t dstX, int32_t dstY, int32_t width, int32_t height, $Raster* inRaster) {
	if (width <= 0 || height <= 0) {
		return;
	}
	int32_t srcOffX = $nc(inRaster)->getMinX();
	int32_t srcOffY = inRaster->getMinY();
	$var($Object, tdata, nullptr);
	for (int32_t startY = 0; startY < height; ++startY) {
		$assign(tdata, inRaster->getDataElements(srcOffX, srcOffY + startY, width, 1, tdata));
		setDataElements(dstX, dstY + startY, width, 1, tdata);
	}
}

void ShortInterleavedRaster::setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($shorts, inData, $cast($shorts, obj));
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	int32_t xoff = 0;
	int32_t off = 0;
	int32_t xstart = 0;
	int32_t ystart = 0;
	for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
		xoff = yoff;
		for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
			for (int32_t c = 0; c < this->numDataElements; ++c) {
				$nc(this->data)->set($nc(this->dataOffsets)->get(c) + xoff, $nc(inData)->get(off++));
			}
		}
	}
	markDirty();
}

void ShortInterleavedRaster::putShortData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $shorts* inData) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride + $nc(this->dataOffsets)->get(band);
	int32_t xoff = 0;
	int32_t off = 0;
	int32_t xstart = 0;
	int32_t ystart = 0;
	if (this->pixelStride == 1) {
		if (this->scanlineStride == w) {
			$System::arraycopy(inData, 0, this->data, yoff, w * h);
		} else {
			for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
				$System::arraycopy(inData, off, this->data, yoff, w);
				off += w;
			}
		}
	} else {
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(this->data)->set(xoff, $nc(inData)->get(off++));
			}
		}
	}
	markDirty();
}

void ShortInterleavedRaster::putShortData(int32_t x, int32_t y, int32_t w, int32_t h, $shorts* inData) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	int32_t xoff = 0;
	int32_t off = 0;
	int32_t xstart = 0;
	int32_t ystart = 0;
	for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
		xoff = yoff;
		for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
			for (int32_t c = 0; c < this->numDataElements; ++c) {
				$nc(this->data)->set($nc(this->dataOffsets)->get(c) + xoff, $nc(inData)->get(off++));
			}
		}
	}
	markDirty();
}

$Raster* ShortInterleavedRaster::createChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
	$var($WritableRaster, newRaster, createWritableChild(x, y, width, height, x0, y0, bandList));
	return static_cast<$Raster*>(newRaster);
}

$WritableRaster* ShortInterleavedRaster::createWritableChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
	$useLocalCurrentObjectStackCache();
	if (x < this->minX) {
		$throwNew($RasterFormatException, "x lies outside the raster"_s);
	}
	if (y < this->minY) {
		$throwNew($RasterFormatException, "y lies outside the raster"_s);
	}
	if ((x + width < x) || (x + width > this->minX + this->width)) {
		$throwNew($RasterFormatException, "(x + width) is outside of Raster"_s);
	}
	if ((y + height < y) || (y + height > this->minY + this->height)) {
		$throwNew($RasterFormatException, "(y + height) is outside of Raster"_s);
	}
	$var($SampleModel, sm, nullptr);
	if (bandList != nullptr) {
		$assign(sm, $nc(this->sampleModel)->createSubsetSampleModel(bandList));
	} else {
		$assign(sm, this->sampleModel);
	}
	int32_t deltaX = x0 - x;
	int32_t deltaY = y0 - y;
	$var($SampleModel, var$0, sm);
	$var($DataBufferUShort, var$1, $cast($DataBufferUShort, this->dataBuffer));
	$var($Rectangle, var$2, $new($Rectangle, x0, y0, width, height));
	return $new(ShortInterleavedRaster, var$0, var$1, var$2, $$new($Point, this->sampleModelTranslateX + deltaX, this->sampleModelTranslateY + deltaY), this);
}

$WritableRaster* ShortInterleavedRaster::createCompatibleWritableRaster(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (w <= 0 || h <= 0) {
		$throwNew($RasterFormatException, $$str({"negative "_s, ((w <= 0) ? "width"_s : "height"_s)}));
	}
	$var($SampleModel, sm, $nc(this->sampleModel)->createCompatibleSampleModel(w, h));
	return $new(ShortInterleavedRaster, sm, $$new($Point, 0, 0));
}

$WritableRaster* ShortInterleavedRaster::createCompatibleWritableRaster() {
	return createCompatibleWritableRaster(this->width, this->height);
}

$String* ShortInterleavedRaster::toString() {
	$useLocalCurrentObjectStackCache();
	return $new($String, $$str({"ShortInterleavedRaster: width = "_s, $$str(this->width), " height = "_s, $$str(this->height), " #numDataElements "_s, $$str(this->numDataElements)}));
}

ShortInterleavedRaster::ShortInterleavedRaster() {
}

$Class* ShortInterleavedRaster::load$($String* name, bool initialize) {
	$loadClass(ShortInterleavedRaster, name, initialize, &_ShortInterleavedRaster_ClassInfo_, allocate$ShortInterleavedRaster);
	return class$;
}

$Class* ShortInterleavedRaster::class$ = nullptr;

		} // image
	} // awt
} // sun