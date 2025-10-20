#include <sun/awt/image/ByteComponentRaster.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
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
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <sun/awt/image/NativeLibLoader.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef TYPE_BYTE_PACKED_SAMPLES
#undef TYPE_BYTE_SAMPLES

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $Raster = ::java::awt::image::Raster;
using $RasterFormatException = ::java::awt::image::RasterFormatException;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $NativeLibLoader = ::sun::awt::image::NativeLibLoader;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ByteComponentRaster_FieldInfo_[] = {
	{"bandOffset", "I", nullptr, $PROTECTED, $field(ByteComponentRaster, bandOffset)},
	{"dataOffsets", "[I", nullptr, $PROTECTED, $field(ByteComponentRaster, dataOffsets)},
	{"scanlineStride", "I", nullptr, $PROTECTED, $field(ByteComponentRaster, scanlineStride)},
	{"pixelStride", "I", nullptr, $PROTECTED, $field(ByteComponentRaster, pixelStride)},
	{"data", "[B", nullptr, $PROTECTED, $field(ByteComponentRaster, data)},
	{"type", "I", nullptr, 0, $field(ByteComponentRaster, type)},
	{"maxX", "I", nullptr, $PRIVATE, $field(ByteComponentRaster, maxX)},
	{"maxY", "I", nullptr, $PRIVATE, $field(ByteComponentRaster, maxY)},
	{}
};

$MethodInfo _ByteComponentRaster_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(ByteComponentRaster::*)($SampleModel*,$Point*)>(&ByteComponentRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferByte;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(ByteComponentRaster::*)($SampleModel*,$DataBufferByte*,$Point*)>(&ByteComponentRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferByte;Ljava/awt/Rectangle;Ljava/awt/Point;Lsun/awt/image/ByteComponentRaster;)V", nullptr, $PUBLIC, $method(static_cast<void(ByteComponentRaster::*)($SampleModel*,$DataBufferByte*,$Rectangle*,$Point*,ByteComponentRaster*)>(&ByteComponentRaster::init$))},
	{"createChild", "(IIIIII[I)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "()Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createWritableChild", "(IIIIII[I)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"getByteData", "(IIIII[B)[B", nullptr, $PUBLIC},
	{"getByteData", "(IIII[B)[B", nullptr, $PUBLIC},
	{"getDataElements", "(IILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDataElements", "(IIIILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDataOffset", "(I)I", nullptr, $PUBLIC},
	{"getDataOffsets", "()[I", nullptr, $PUBLIC},
	{"getDataStorage", "()[B", nullptr, $PUBLIC},
	{"getPixelStride", "()I", nullptr, $PUBLIC},
	{"getScanlineStride", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&ByteComponentRaster::initIDs))},
	{"putByteData", "(IIIII[B)V", nullptr, $PUBLIC},
	{"putByteData", "(IIII[B)V", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/awt/image/Raster;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IIIILjava/awt/image/Raster;)V", nullptr, $PRIVATE, $method(static_cast<void(ByteComponentRaster::*)(int32_t,int32_t,int32_t,int32_t,$Raster*)>(&ByteComponentRaster::setDataElements))},
	{"setDataElements", "(IIIILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"verify", "()V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(ByteComponentRaster::*)()>(&ByteComponentRaster::verify))},
	{}
};

#define _METHOD_INDEX_initIDs 16

$ClassInfo _ByteComponentRaster_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.ByteComponentRaster",
	"sun.awt.image.SunWritableRaster",
	nullptr,
	_ByteComponentRaster_FieldInfo_,
	_ByteComponentRaster_MethodInfo_
};

$Object* allocate$ByteComponentRaster($Class* clazz) {
	return $of($alloc(ByteComponentRaster));
}

void ByteComponentRaster::initIDs() {
	$init(ByteComponentRaster);
	$prepareNativeStatic(ByteComponentRaster, initIDs, void);
	$invokeNativeStatic(ByteComponentRaster, initIDs);
	$finishNativeStatic();
}

void ByteComponentRaster::init$($SampleModel* sampleModel, $Point* origin) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, var$0, sampleModel);
	$var($DataBufferByte, var$1, $cast($DataBufferByte, $nc(sampleModel)->createDataBuffer()));
	int32_t var$2 = $nc(origin)->x;
	int32_t var$3 = origin->y;
	int32_t var$4 = sampleModel->getWidth();
	ByteComponentRaster::init$(var$0, var$1, $$new($Rectangle, var$2, var$3, var$4, sampleModel->getHeight()), origin, nullptr);
}

void ByteComponentRaster::init$($SampleModel* sampleModel, $DataBufferByte* dataBuffer, $Point* origin) {
	int32_t var$0 = $nc(origin)->x;
	int32_t var$1 = origin->y;
	int32_t var$2 = $nc(sampleModel)->getWidth();
	ByteComponentRaster::init$(sampleModel, dataBuffer, $$new($Rectangle, var$0, var$1, var$2, sampleModel->getHeight()), origin, nullptr);
}

void ByteComponentRaster::init$($SampleModel* sampleModel, $DataBufferByte* dataBuffer, $Rectangle* aRegion, $Point* origin, ByteComponentRaster* parent) {
	$useLocalCurrentObjectStackCache();
	$SunWritableRaster::init$(sampleModel, dataBuffer, aRegion, origin, parent);
	this->maxX = this->minX + this->width;
	this->maxY = this->minY + this->height;
	$set(this, data, stealData(dataBuffer, 0));
	if ($nc(dataBuffer)->getNumBanks() != 1) {
		$throwNew($RasterFormatException, "DataBuffer for ByteComponentRasters must only have 1 bank."_s);
	}
	int32_t dbOffset = $nc(dataBuffer)->getOffset();
	if ($instanceOf($ComponentSampleModel, sampleModel)) {
		$var($ComponentSampleModel, ism, $cast($ComponentSampleModel, sampleModel));
		this->type = $IntegerComponentRaster::TYPE_BYTE_SAMPLES;
		this->scanlineStride = $nc(ism)->getScanlineStride();
		this->pixelStride = ism->getPixelStride();
		$set(this, dataOffsets, ism->getBandOffsets());
		int32_t xOffset = $nc(aRegion)->x - $nc(origin)->x;
		int32_t yOffset = aRegion->y - origin->y;
		for (int32_t i = 0; i < getNumDataElements(); ++i) {
			(*$nc(this->dataOffsets))[i] += dbOffset + xOffset * this->pixelStride + yOffset * this->scanlineStride;
		}
	} else if ($instanceOf($SinglePixelPackedSampleModel, sampleModel)) {
		$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sampleModel));
		this->type = $IntegerComponentRaster::TYPE_BYTE_PACKED_SAMPLES;
		this->scanlineStride = $nc(sppsm)->getScanlineStride();
		this->pixelStride = 1;
		$set(this, dataOffsets, $new($ints, 1));
		$nc(this->dataOffsets)->set(0, dbOffset);
		int32_t xOffset = $nc(aRegion)->x - $nc(origin)->x;
		int32_t yOffset = aRegion->y - origin->y;
		(*$nc(this->dataOffsets))[0] += xOffset * this->pixelStride + yOffset * this->scanlineStride;
	} else {
		$throwNew($RasterFormatException, "IntegerComponentRasters must have ComponentSampleModel or SinglePixelPackedSampleModel"_s);
	}
	this->bandOffset = $nc(this->dataOffsets)->get(0);
	verify();
}

$ints* ByteComponentRaster::getDataOffsets() {
	return $cast($ints, $nc(this->dataOffsets)->clone());
}

int32_t ByteComponentRaster::getDataOffset(int32_t band) {
	return $nc(this->dataOffsets)->get(band);
}

int32_t ByteComponentRaster::getScanlineStride() {
	return this->scanlineStride;
}

int32_t ByteComponentRaster::getPixelStride() {
	return this->pixelStride;
}

$bytes* ByteComponentRaster::getDataStorage() {
	return this->data;
}

$Object* ByteComponentRaster::getDataElements(int32_t x, int32_t y, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($bytes, outData, nullptr);
	if (obj == nullptr) {
		$assign(outData, $new($bytes, this->numDataElements));
	} else {
		$assign(outData, $cast($bytes, obj));
	}
	int32_t off = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	for (int32_t band = 0; band < this->numDataElements; ++band) {
		$nc(outData)->set(band, $nc(this->data)->get($nc(this->dataOffsets)->get(band) + off));
	}
	return $of(outData);
}

$Object* ByteComponentRaster::getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($bytes, outData, nullptr);
	if (obj == nullptr) {
		$assign(outData, $new($bytes, w * h * this->numDataElements));
	} else {
		$assign(outData, $cast($bytes, obj));
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

$bytes* ByteComponentRaster::getByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* outData$renamed) {
	$var($bytes, outData, outData$renamed);
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (outData == nullptr) {
		$assign(outData, $new($bytes, this->scanlineStride * h));
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

$bytes* ByteComponentRaster::getByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* outData$renamed) {
	$var($bytes, outData, outData$renamed);
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (outData == nullptr) {
		$assign(outData, $new($bytes, this->numDataElements * this->scanlineStride * h));
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

void ByteComponentRaster::setDataElements(int32_t x, int32_t y, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($bytes, inData, $cast($bytes, obj));
	int32_t off = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	for (int32_t i = 0; i < this->numDataElements; ++i) {
		$nc(this->data)->set($nc(this->dataOffsets)->get(i) + off, $nc(inData)->get(i));
	}
	markDirty();
}

void ByteComponentRaster::setDataElements(int32_t x, int32_t y, $Raster* inRaster) {
	int32_t dstOffX = $nc(inRaster)->getMinX() + x;
	int32_t dstOffY = inRaster->getMinY() + y;
	int32_t width = inRaster->getWidth();
	int32_t height = inRaster->getHeight();
	if ((dstOffX < this->minX) || (dstOffY < this->minY) || (dstOffX + width > this->maxX) || (dstOffY + height > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	setDataElements(dstOffX, dstOffY, width, height, inRaster);
}

void ByteComponentRaster::setDataElements(int32_t dstX, int32_t dstY, int32_t width, int32_t height, $Raster* inRaster) {
	$useLocalCurrentObjectStackCache();
	if (width <= 0 || height <= 0) {
		return;
	}
	int32_t srcOffX = $nc(inRaster)->getMinX();
	int32_t srcOffY = inRaster->getMinY();
	$var($Object, tdata, nullptr);
	if ($instanceOf(ByteComponentRaster, inRaster)) {
		$var(ByteComponentRaster, bct, $cast(ByteComponentRaster, inRaster));
		$var($bytes, bdata, bct->getDataStorage());
		if (this->numDataElements == 1) {
			int32_t toff = bct->getDataOffset(0);
			int32_t tss = bct->getScanlineStride();
			int32_t srcOffset = toff;
			int32_t dstOffset = $nc(this->dataOffsets)->get(0) + (dstY - this->minY) * this->scanlineStride + (dstX - this->minX);
			if (this->pixelStride == bct->getPixelStride()) {
				width *= this->pixelStride;
				for (int32_t tmpY = 0; tmpY < height; ++tmpY) {
					$System::arraycopy(bdata, srcOffset, this->data, dstOffset, width);
					srcOffset += tss;
					dstOffset += this->scanlineStride;
				}
				markDirty();
				return;
			}
		}
	}
	for (int32_t startY = 0; startY < height; ++startY) {
		$assign(tdata, inRaster->getDataElements(srcOffX, srcOffY + startY, width, 1, tdata));
		setDataElements(dstX, dstY + startY, width, 1, tdata);
	}
}

void ByteComponentRaster::setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($bytes, inData, $cast($bytes, obj));
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	int32_t xoff = 0;
	int32_t off = 0;
	int32_t xstart = 0;
	int32_t ystart = 0;
	if (this->numDataElements == 1) {
		int32_t srcOffset = 0;
		int32_t dstOffset = yoff + $nc(this->dataOffsets)->get(0);
		for (ystart = 0; ystart < h; ++ystart) {
			xoff = yoff;
			$System::arraycopy(inData, srcOffset, this->data, dstOffset, w);
			srcOffset += w;
			dstOffset += this->scanlineStride;
		}
		markDirty();
		return;
	}
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

void ByteComponentRaster::putByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* inData) {
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

void ByteComponentRaster::putByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* inData) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	int32_t xoff = 0;
	int32_t off = 0;
	int32_t xstart = 0;
	int32_t ystart = 0;
	if (this->numDataElements == 1) {
		yoff += $nc(this->dataOffsets)->get(0);
		if (this->pixelStride == 1) {
			if (this->scanlineStride == w) {
				$System::arraycopy(inData, 0, this->data, yoff, w * h);
			} else {
				for (ystart = 0; ystart < h; ++ystart) {
					$System::arraycopy(inData, off, this->data, yoff, w);
					off += w;
					yoff += this->scanlineStride;
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
	} else {
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				for (int32_t c = 0; c < this->numDataElements; ++c) {
					$nc(this->data)->set($nc(this->dataOffsets)->get(c) + xoff, $nc(inData)->get(off++));
				}
			}
		}
	}
	markDirty();
}

$Raster* ByteComponentRaster::createChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
	$var($WritableRaster, newRaster, createWritableChild(x, y, width, height, x0, y0, bandList));
	return static_cast<$Raster*>(newRaster);
}

$WritableRaster* ByteComponentRaster::createWritableChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
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
	$var($DataBufferByte, var$1, $cast($DataBufferByte, this->dataBuffer));
	$var($Rectangle, var$2, $new($Rectangle, x0, y0, width, height));
	return $new(ByteComponentRaster, var$0, var$1, var$2, $$new($Point, this->sampleModelTranslateX + deltaX, this->sampleModelTranslateY + deltaY), this);
}

$WritableRaster* ByteComponentRaster::createCompatibleWritableRaster(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (w <= 0 || h <= 0) {
		$throwNew($RasterFormatException, $$str({"negative "_s, ((w <= 0) ? "width"_s : "height"_s)}));
	}
	$var($SampleModel, sm, $nc(this->sampleModel)->createCompatibleSampleModel(w, h));
	return $new(ByteComponentRaster, sm, $$new($Point, 0, 0));
}

$WritableRaster* ByteComponentRaster::createCompatibleWritableRaster() {
	return createCompatibleWritableRaster(this->width, this->height);
}

void ByteComponentRaster::verify() {
	$useLocalCurrentObjectStackCache();
	if (this->width <= 0 || this->height <= 0 || this->height > ($div($Integer::MAX_VALUE, this->width))) {
		$throwNew($RasterFormatException, "Invalid raster dimension"_s);
	}
	for (int32_t i = 0; i < $nc(this->dataOffsets)->length; ++i) {
		if ($nc(this->dataOffsets)->get(i) < 0) {
			$throwNew($RasterFormatException, $$str({"Data offsets for band "_s, $$str(i), "("_s, $$str($nc(this->dataOffsets)->get(i)), ") must be >= 0"_s}));
		}
	}
	if ((int64_t)this->minX - this->sampleModelTranslateX < 0 || (int64_t)this->minY - this->sampleModelTranslateY < 0) {
		$throwNew($RasterFormatException, $$str({"Incorrect origin/translate: ("_s, $$str(this->minX), ", "_s, $$str(this->minY), ") / ("_s, $$str(this->sampleModelTranslateX), ", "_s, $$str(this->sampleModelTranslateY), ")"_s}));
	}
	if (this->scanlineStride < 0 || this->scanlineStride > ($div($Integer::MAX_VALUE, this->height))) {
		$throwNew($RasterFormatException, $$str({"Incorrect scanline stride: "_s, $$str(this->scanlineStride)}));
	}
	if (this->height > 1 || this->minY - this->sampleModelTranslateY > 0) {
		if (this->scanlineStride > $nc(this->data)->length) {
			$throwNew($RasterFormatException, $$str({"Incorrect scanline stride: "_s, $$str(this->scanlineStride)}));
		}
	}
	int32_t lastScanOffset = (this->height - 1) * this->scanlineStride;
	if (this->pixelStride < 0 || this->pixelStride > ($div($Integer::MAX_VALUE, this->width)) || this->pixelStride > $nc(this->data)->length) {
		$throwNew($RasterFormatException, $$str({"Incorrect pixel stride: "_s, $$str(this->pixelStride)}));
	}
	int32_t lastPixelOffset = (this->width - 1) * this->pixelStride;
	if (lastPixelOffset > ($Integer::MAX_VALUE - lastScanOffset)) {
		$throwNew($RasterFormatException, "Incorrect raster attributes"_s);
	}
	lastPixelOffset += lastScanOffset;
	int32_t index = 0;
	int32_t maxIndex = 0;
	for (int32_t i = 0; i < this->numDataElements; ++i) {
		if ($nc(this->dataOffsets)->get(i) > ($Integer::MAX_VALUE - lastPixelOffset)) {
			$throwNew($RasterFormatException, $$str({"Incorrect band offset: "_s, $$str($nc(this->dataOffsets)->get(i))}));
		}
		index = lastPixelOffset + $nc(this->dataOffsets)->get(i);
		if (index > maxIndex) {
			maxIndex = index;
		}
	}
	if ($nc(this->data)->length <= maxIndex) {
		$throwNew($RasterFormatException, $$str({"Data array too small (should be > "_s, $$str(maxIndex), " )"_s}));
	}
}

$String* ByteComponentRaster::toString() {
	$useLocalCurrentObjectStackCache();
	return $new($String, $$str({"ByteComponentRaster: width = "_s, $$str(this->width), " height = "_s, $$str(this->height), " #numDataElements "_s, $$str(this->numDataElements), " dataOff[0] = "_s, $$str($nc(this->dataOffsets)->get(0))}));
}

void clinit$ByteComponentRaster($Class* class$) {
	{
		$NativeLibLoader::loadLibraries();
		ByteComponentRaster::initIDs();
	}
}

ByteComponentRaster::ByteComponentRaster() {
}

$Class* ByteComponentRaster::load$($String* name, bool initialize) {
	$loadClass(ByteComponentRaster, name, initialize, &_ByteComponentRaster_ClassInfo_, clinit$ByteComponentRaster, allocate$ByteComponentRaster);
	return class$;
}

$Class* ByteComponentRaster::class$ = nullptr;

		} // image
	} // awt
} // sun