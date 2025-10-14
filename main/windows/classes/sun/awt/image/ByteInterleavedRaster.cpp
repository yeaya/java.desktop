#include <sun/awt/image/ByteInterleavedRaster.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
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
#include <sun/awt/image/ByteComponentRaster.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
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
using $ByteComponentRaster = ::sun::awt::image::ByteComponentRaster;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ByteInterleavedRaster_FieldInfo_[] = {
	{"inOrder", "Z", nullptr, 0, $field(ByteInterleavedRaster, inOrder)},
	{"dbOffset", "I", nullptr, 0, $field(ByteInterleavedRaster, dbOffset)},
	{"dbOffsetPacked", "I", nullptr, 0, $field(ByteInterleavedRaster, dbOffsetPacked)},
	{"packed", "Z", nullptr, 0, $field(ByteInterleavedRaster, packed)},
	{"bitMasks", "[I", nullptr, 0, $field(ByteInterleavedRaster, bitMasks)},
	{"bitOffsets", "[I", nullptr, 0, $field(ByteInterleavedRaster, bitOffsets)},
	{"maxX", "I", nullptr, $PRIVATE, $field(ByteInterleavedRaster, maxX)},
	{"maxY", "I", nullptr, $PRIVATE, $field(ByteInterleavedRaster, maxY)},
	{}
};

$MethodInfo _ByteInterleavedRaster_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(ByteInterleavedRaster::*)($SampleModel*,$Point*)>(&ByteInterleavedRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferByte;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(ByteInterleavedRaster::*)($SampleModel*,$DataBufferByte*,$Point*)>(&ByteInterleavedRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferByte;Ljava/awt/Rectangle;Ljava/awt/Point;Lsun/awt/image/ByteInterleavedRaster;)V", nullptr, $PUBLIC, $method(static_cast<void(ByteInterleavedRaster::*)($SampleModel*,$DataBufferByte*,$Rectangle*,$Point*,ByteInterleavedRaster*)>(&ByteInterleavedRaster::init$))},
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
	{"getPixels", "(IIII[I)[I", nullptr, $PUBLIC},
	{"getSample", "(III)I", nullptr, $PUBLIC},
	{"getSamples", "(IIIII[I)[I", nullptr, $PUBLIC},
	{"getScanlineStride", "()I", nullptr, $PUBLIC},
	{"isInterleaved", "(Ljava/awt/image/ComponentSampleModel;)Z", nullptr, $PRIVATE, $method(static_cast<bool(ByteInterleavedRaster::*)($ComponentSampleModel*)>(&ByteInterleavedRaster::isInterleaved))},
	{"putByteData", "(IIIII[B)V", nullptr, $PUBLIC},
	{"putByteData", "(IIII[B)V", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/awt/image/Raster;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IIIIIILjava/awt/image/Raster;)V", nullptr, $PRIVATE, $method(static_cast<void(ByteInterleavedRaster::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$Raster*)>(&ByteInterleavedRaster::setDataElements))},
	{"setDataElements", "(IIIILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"setPixels", "(IIII[I)V", nullptr, $PUBLIC},
	{"setRect", "(IILjava/awt/image/Raster;)V", nullptr, $PUBLIC},
	{"setSample", "(IIII)V", nullptr, $PUBLIC},
	{"setSamples", "(IIIII[I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ByteInterleavedRaster_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.ByteInterleavedRaster",
	"sun.awt.image.ByteComponentRaster",
	nullptr,
	_ByteInterleavedRaster_FieldInfo_,
	_ByteInterleavedRaster_MethodInfo_
};

$Object* allocate$ByteInterleavedRaster($Class* clazz) {
	return $of($alloc(ByteInterleavedRaster));
}

void ByteInterleavedRaster::init$($SampleModel* sampleModel, $Point* origin) {
	$var($SampleModel, var$0, sampleModel);
	$var($DataBufferByte, var$1, $cast($DataBufferByte, $nc(sampleModel)->createDataBuffer()));
	int32_t var$2 = $nc(origin)->x;
	int32_t var$3 = origin->y;
	int32_t var$4 = sampleModel->getWidth();
	ByteInterleavedRaster::init$(var$0, var$1, $$new($Rectangle, var$2, var$3, var$4, sampleModel->getHeight()), origin, nullptr);
}

void ByteInterleavedRaster::init$($SampleModel* sampleModel, $DataBufferByte* dataBuffer, $Point* origin) {
	int32_t var$0 = $nc(origin)->x;
	int32_t var$1 = origin->y;
	int32_t var$2 = $nc(sampleModel)->getWidth();
	ByteInterleavedRaster::init$(sampleModel, dataBuffer, $$new($Rectangle, var$0, var$1, var$2, sampleModel->getHeight()), origin, nullptr);
}

bool ByteInterleavedRaster::isInterleaved($ComponentSampleModel* sm) {
	int32_t numBands = $nc(this->sampleModel)->getNumBands();
	if (numBands == 1) {
		return true;
	}
	$var($ints, bankIndices, $nc(sm)->getBankIndices());
	for (int32_t i = 0; i < numBands; ++i) {
		if ($nc(bankIndices)->get(i) != 0) {
			return false;
		}
	}
	$var($ints, bandOffsets, sm->getBandOffsets());
	int32_t minOffset = $nc(bandOffsets)->get(0);
	int32_t maxOffset = minOffset;
	for (int32_t i = 1; i < numBands; ++i) {
		int32_t offset = bandOffsets->get(i);
		if (offset < minOffset) {
			minOffset = offset;
		}
		if (offset > maxOffset) {
			maxOffset = offset;
		}
	}
	if (maxOffset - minOffset >= sm->getPixelStride()) {
		return false;
	}
	return true;
}

void ByteInterleavedRaster::init$($SampleModel* sampleModel, $DataBufferByte* dataBuffer, $Rectangle* aRegion, $Point* origin, ByteInterleavedRaster* parent) {
	$ByteComponentRaster::init$(sampleModel, dataBuffer, aRegion, origin, parent);
	this->packed = false;
	this->maxX = this->minX + this->width;
	this->maxY = this->minY + this->height;
	$set(this, data, stealData(dataBuffer, 0));
	int32_t xOffset = $nc(aRegion)->x - $nc(origin)->x;
	int32_t yOffset = aRegion->y - origin->y;
	if ($instanceOf($PixelInterleavedSampleModel, sampleModel) || ($instanceOf($ComponentSampleModel, sampleModel) && isInterleaved($cast($ComponentSampleModel, sampleModel)))) {
		$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, sampleModel));
		this->scanlineStride = $nc(csm)->getScanlineStride();
		this->pixelStride = csm->getPixelStride();
		$set(this, dataOffsets, csm->getBandOffsets());
		for (int32_t i = 0; i < getNumDataElements(); ++i) {
			(*$nc(this->dataOffsets))[i] += xOffset * this->pixelStride + yOffset * this->scanlineStride;
		}
	} else if ($instanceOf($SinglePixelPackedSampleModel, sampleModel)) {
		$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sampleModel));
		this->packed = true;
		$set(this, bitMasks, $nc(sppsm)->getBitMasks());
		$set(this, bitOffsets, sppsm->getBitOffsets());
		this->scanlineStride = sppsm->getScanlineStride();
		this->pixelStride = 1;
		$set(this, dataOffsets, $new($ints, 1));
		$nc(this->dataOffsets)->set(0, $nc(dataBuffer)->getOffset());
		(*$nc(this->dataOffsets))[0] += xOffset * this->pixelStride + yOffset * this->scanlineStride;
	} else {
		$throwNew($RasterFormatException, $$str({"ByteInterleavedRasters must have PixelInterleavedSampleModel, SinglePixelPackedSampleModel or interleaved ComponentSampleModel.  Sample model is "_s, sampleModel}));
	}
	this->bandOffset = $nc(this->dataOffsets)->get(0);
	this->dbOffsetPacked = $nc(dataBuffer)->getOffset() - this->sampleModelTranslateY * this->scanlineStride - this->sampleModelTranslateX * this->pixelStride;
	this->dbOffset = this->dbOffsetPacked - (xOffset * this->pixelStride + yOffset * this->scanlineStride);
	this->inOrder = false;
	if (this->numDataElements == this->pixelStride) {
		this->inOrder = true;
		for (int32_t i = 1; i < this->numDataElements; ++i) {
			if ($nc(this->dataOffsets)->get(i) - $nc(this->dataOffsets)->get(0) != i) {
				this->inOrder = false;
				break;
			}
		}
	}
	verify();
}

$ints* ByteInterleavedRaster::getDataOffsets() {
	return $cast($ints, $nc(this->dataOffsets)->clone());
}

int32_t ByteInterleavedRaster::getDataOffset(int32_t band) {
	return $nc(this->dataOffsets)->get(band);
}

int32_t ByteInterleavedRaster::getScanlineStride() {
	return this->scanlineStride;
}

int32_t ByteInterleavedRaster::getPixelStride() {
	return this->pixelStride;
}

$bytes* ByteInterleavedRaster::getDataStorage() {
	return this->data;
}

$Object* ByteInterleavedRaster::getDataElements(int32_t x, int32_t y, Object$* obj) {
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

$Object* ByteInterleavedRaster::getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	return $of(getByteData(x, y, w, h, $cast($bytes, obj)));
}

$bytes* ByteInterleavedRaster::getByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* outData$renamed) {
	$var($bytes, outData, outData$renamed);
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (outData == nullptr) {
		$assign(outData, $new($bytes, w * h));
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

$bytes* ByteInterleavedRaster::getByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* outData$renamed) {
	$var($bytes, outData, outData$renamed);
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (outData == nullptr) {
		$assign(outData, $new($bytes, this->numDataElements * w * h));
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	int32_t xoff = 0;
	int32_t off = 0;
	int32_t xstart = 0;
	int32_t ystart = 0;
	if (this->inOrder) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t rowBytes = w * this->pixelStride;
		if (this->scanlineStride == rowBytes) {
			$System::arraycopy(this->data, yoff, outData, off, rowBytes * h);
		} else {
			for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
				$System::arraycopy(this->data, yoff, outData, off, rowBytes);
				off += rowBytes;
			}
		}
	} else if (this->numDataElements == 1) {
		yoff += $nc(this->dataOffsets)->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(outData)->set(off++, $nc(this->data)->get(xoff));
			}
		}
	} else if (this->numDataElements == 2) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t d1 = $nc(this->dataOffsets)->get(1) - $nc(this->dataOffsets)->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(outData)->set(off++, $nc(this->data)->get(xoff));
				outData->set(off++, $nc(this->data)->get(xoff + d1));
			}
		}
	} else if (this->numDataElements == 3) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t d1 = $nc(this->dataOffsets)->get(1) - $nc(this->dataOffsets)->get(0);
		int32_t d2 = $nc(this->dataOffsets)->get(2) - $nc(this->dataOffsets)->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(outData)->set(off++, $nc(this->data)->get(xoff));
				outData->set(off++, $nc(this->data)->get(xoff + d1));
				outData->set(off++, $nc(this->data)->get(xoff + d2));
			}
		}
	} else if (this->numDataElements == 4) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t d1 = $nc(this->dataOffsets)->get(1) - $nc(this->dataOffsets)->get(0);
		int32_t d2 = $nc(this->dataOffsets)->get(2) - $nc(this->dataOffsets)->get(0);
		int32_t d3 = $nc(this->dataOffsets)->get(3) - $nc(this->dataOffsets)->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(outData)->set(off++, $nc(this->data)->get(xoff));
				outData->set(off++, $nc(this->data)->get(xoff + d1));
				outData->set(off++, $nc(this->data)->get(xoff + d2));
				outData->set(off++, $nc(this->data)->get(xoff + d3));
			}
		}
	} else {
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				for (int32_t c = 0; c < this->numDataElements; ++c) {
					$nc(outData)->set(off++, $nc(this->data)->get($nc(this->dataOffsets)->get(c) + xoff));
				}
			}
		}
	}
	return outData;
}

void ByteInterleavedRaster::setDataElements(int32_t x, int32_t y, Object$* obj) {
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

void ByteInterleavedRaster::setDataElements(int32_t x, int32_t y, $Raster* inRaster) {
	int32_t srcOffX = $nc(inRaster)->getMinX();
	int32_t srcOffY = inRaster->getMinY();
	int32_t dstOffX = x + srcOffX;
	int32_t dstOffY = y + srcOffY;
	int32_t width = inRaster->getWidth();
	int32_t height = inRaster->getHeight();
	if ((dstOffX < this->minX) || (dstOffY < this->minY) || (dstOffX + width > this->maxX) || (dstOffY + height > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	setDataElements(dstOffX, dstOffY, srcOffX, srcOffY, width, height, inRaster);
}

void ByteInterleavedRaster::setDataElements(int32_t dstX, int32_t dstY, int32_t srcX, int32_t srcY, int32_t width, int32_t height, $Raster* inRaster) {
	if (width <= 0 || height <= 0) {
		return;
	}
	int32_t srcOffX = $nc(inRaster)->getMinX();
	int32_t srcOffY = inRaster->getMinY();
	$var($Object, tdata, nullptr);
	if ($instanceOf(ByteInterleavedRaster, inRaster)) {
		$var(ByteInterleavedRaster, bct, $cast(ByteInterleavedRaster, inRaster));
		$var($bytes, bdata, bct->getDataStorage());
		if (this->inOrder && bct->inOrder && this->pixelStride == bct->pixelStride) {
			int32_t toff = bct->getDataOffset(0);
			int32_t tss = bct->getScanlineStride();
			int32_t tps = bct->getPixelStride();
			int32_t srcOffset = toff + (srcY - srcOffY) * tss + (srcX - srcOffX) * tps;
			int32_t dstOffset = $nc(this->dataOffsets)->get(0) + (dstY - this->minY) * this->scanlineStride + (dstX - this->minX) * this->pixelStride;
			int32_t nbytes = width * this->pixelStride;
			for (int32_t tmpY = 0; tmpY < height; ++tmpY) {
				$System::arraycopy(bdata, srcOffset, this->data, dstOffset, nbytes);
				srcOffset += tss;
				dstOffset += this->scanlineStride;
			}
			markDirty();
			return;
		}
	}
	for (int32_t startY = 0; startY < height; ++startY) {
		$assign(tdata, inRaster->getDataElements(srcOffX, srcOffY + startY, width, 1, tdata));
		setDataElements(dstX, dstY + startY, width, 1, tdata);
	}
}

void ByteInterleavedRaster::setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	putByteData(x, y, w, h, $cast($bytes, obj));
}

void ByteInterleavedRaster::putByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* inData) {
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

void ByteInterleavedRaster::putByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* inData) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	int32_t xoff = 0;
	int32_t off = 0;
	int32_t xstart = 0;
	int32_t ystart = 0;
	if (this->inOrder) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t rowBytes = w * this->pixelStride;
		if (rowBytes == this->scanlineStride) {
			$System::arraycopy(inData, 0, this->data, yoff, rowBytes * h);
		} else {
			for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
				$System::arraycopy(inData, off, this->data, yoff, rowBytes);
				off += rowBytes;
			}
		}
	} else if (this->numDataElements == 1) {
		yoff += $nc(this->dataOffsets)->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(this->data)->set(xoff, $nc(inData)->get(off++));
			}
		}
	} else if (this->numDataElements == 2) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t d1 = $nc(this->dataOffsets)->get(1) - $nc(this->dataOffsets)->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(this->data)->set(xoff, $nc(inData)->get(off++));
				$nc(this->data)->set(xoff + d1, inData->get(off++));
			}
		}
	} else if (this->numDataElements == 3) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t d1 = $nc(this->dataOffsets)->get(1) - $nc(this->dataOffsets)->get(0);
		int32_t d2 = $nc(this->dataOffsets)->get(2) - $nc(this->dataOffsets)->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(this->data)->set(xoff, $nc(inData)->get(off++));
				$nc(this->data)->set(xoff + d1, inData->get(off++));
				$nc(this->data)->set(xoff + d2, inData->get(off++));
			}
		}
	} else if (this->numDataElements == 4) {
		yoff += $nc(this->dataOffsets)->get(0);
		int32_t d1 = $nc(this->dataOffsets)->get(1) - $nc(this->dataOffsets)->get(0);
		int32_t d2 = $nc(this->dataOffsets)->get(2) - $nc(this->dataOffsets)->get(0);
		int32_t d3 = $nc(this->dataOffsets)->get(3) - $nc(this->dataOffsets)->get(0);
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			xoff = yoff;
			for (xstart = 0; xstart < w; ++xstart, xoff += this->pixelStride) {
				$nc(this->data)->set(xoff, $nc(inData)->get(off++));
				$nc(this->data)->set(xoff + d1, inData->get(off++));
				$nc(this->data)->set(xoff + d2, inData->get(off++));
				$nc(this->data)->set(xoff + d3, inData->get(off++));
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

int32_t ByteInterleavedRaster::getSample(int32_t x, int32_t y, int32_t b) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (this->packed) {
		int32_t offset = y * this->scanlineStride + x + this->dbOffsetPacked;
		int8_t sample = $nc(this->data)->get(offset);
		return $usr((int32_t)(sample & (uint32_t)$nc(this->bitMasks)->get(b)), $nc(this->bitOffsets)->get(b));
	} else {
		int32_t offset = y * this->scanlineStride + x * this->pixelStride + this->dbOffset;
		return (int32_t)($nc(this->data)->get(offset + $nc(this->dataOffsets)->get(b)) & (uint32_t)255);
	}
}

void ByteInterleavedRaster::setSample(int32_t x, int32_t y, int32_t b, int32_t s) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (this->packed) {
		int32_t offset = y * this->scanlineStride + x + this->dbOffsetPacked;
		int32_t bitMask = $nc(this->bitMasks)->get(b);
		int8_t value = $nc(this->data)->get(offset);
		value &= (uint8_t)~bitMask;
		value |= (int32_t)(($sl(s, $nc(this->bitOffsets)->get(b))) & (uint32_t)bitMask);
		$nc(this->data)->set(offset, value);
	} else {
		int32_t offset = y * this->scanlineStride + x * this->pixelStride + this->dbOffset;
		$nc(this->data)->set(offset + $nc(this->dataOffsets)->get(b), (int8_t)s);
	}
	markDirty();
}

$ints* ByteInterleavedRaster::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, samples, nullptr);
	if (iArray != nullptr) {
		$assign(samples, iArray);
	} else {
		$assign(samples, $new($ints, w * h));
	}
	int32_t lineOffset = y * this->scanlineStride + x * this->pixelStride;
	int32_t dstOffset = 0;
	if (this->packed) {
		lineOffset += this->dbOffsetPacked;
		int32_t bitMask = $nc(this->bitMasks)->get(b);
		int32_t bitOffset = $nc(this->bitOffsets)->get(b);
		for (int32_t j = 0; j < h; ++j) {
			int32_t sampleOffset = lineOffset;
			for (int32_t i = 0; i < w; ++i) {
				int32_t value = $nc(this->data)->get(sampleOffset++);
				$nc(samples)->set(dstOffset++, ($usr((int32_t)(value & (uint32_t)bitMask), bitOffset)));
			}
			lineOffset += this->scanlineStride;
		}
	} else {
		lineOffset += this->dbOffset + $nc(this->dataOffsets)->get(b);
		for (int32_t j = 0; j < h; ++j) {
			int32_t sampleOffset = lineOffset;
			for (int32_t i = 0; i < w; ++i) {
				$nc(samples)->set(dstOffset++, (int32_t)($nc(this->data)->get(sampleOffset) & (uint32_t)255));
				sampleOffset += this->pixelStride;
			}
			lineOffset += this->scanlineStride;
		}
	}
	return samples;
}

void ByteInterleavedRaster::setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t lineOffset = y * this->scanlineStride + x * this->pixelStride;
	int32_t srcOffset = 0;
	if (this->packed) {
		lineOffset += this->dbOffsetPacked;
		int32_t bitMask = $nc(this->bitMasks)->get(b);
		for (int32_t j = 0; j < h; ++j) {
			int32_t sampleOffset = lineOffset;
			for (int32_t i = 0; i < w; ++i) {
				int8_t value = $nc(this->data)->get(sampleOffset);
				value &= (uint8_t)~bitMask;
				int32_t sample = $nc(iArray)->get(srcOffset++);
				value |= (int32_t)(($sl(sample, $nc(this->bitOffsets)->get(b))) & (uint32_t)bitMask);
				$nc(this->data)->set(sampleOffset++, value);
			}
			lineOffset += this->scanlineStride;
		}
	} else {
		lineOffset += this->dbOffset + $nc(this->dataOffsets)->get(b);
		for (int32_t i = 0; i < h; ++i) {
			int32_t sampleOffset = lineOffset;
			for (int32_t j = 0; j < w; ++j) {
				$nc(this->data)->set(sampleOffset, (int8_t)$nc(iArray)->get(srcOffset++));
				sampleOffset += this->pixelStride;
			}
			lineOffset += this->scanlineStride;
		}
	}
	markDirty();
}

$ints* ByteInterleavedRaster::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, pixels, nullptr);
	if (iArray != nullptr) {
		$assign(pixels, iArray);
	} else {
		$assign(pixels, $new($ints, w * h * this->numBands));
	}
	int32_t lineOffset = y * this->scanlineStride + x * this->pixelStride;
	int32_t dstOffset = 0;
	if (this->packed) {
		lineOffset += this->dbOffsetPacked;
		for (int32_t j = 0; j < h; ++j) {
			for (int32_t i = 0; i < w; ++i) {
				int32_t value = $nc(this->data)->get(lineOffset + i);
				for (int32_t k = 0; k < this->numBands; ++k) {
					$nc(pixels)->set(dstOffset++, $usr((int32_t)(value & (uint32_t)$nc(this->bitMasks)->get(k)), $nc(this->bitOffsets)->get(k)));
				}
			}
			lineOffset += this->scanlineStride;
		}
	} else {
		lineOffset += this->dbOffset;
		int32_t d0 = $nc(this->dataOffsets)->get(0);
		if (this->numBands == 1) {
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(pixels)->set(dstOffset++, (int32_t)($nc(this->data)->get(pixelOffset) & (uint32_t)255));
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else if (this->numBands == 2) {
			int32_t d1 = $nc(this->dataOffsets)->get(1) - d0;
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(pixels)->set(dstOffset++, (int32_t)($nc(this->data)->get(pixelOffset) & (uint32_t)255));
					pixels->set(dstOffset++, (int32_t)($nc(this->data)->get(pixelOffset + d1) & (uint32_t)255));
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else if (this->numBands == 3) {
			int32_t d1 = $nc(this->dataOffsets)->get(1) - d0;
			int32_t d2 = $nc(this->dataOffsets)->get(2) - d0;
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(pixels)->set(dstOffset++, (int32_t)($nc(this->data)->get(pixelOffset) & (uint32_t)255));
					pixels->set(dstOffset++, (int32_t)($nc(this->data)->get(pixelOffset + d1) & (uint32_t)255));
					pixels->set(dstOffset++, (int32_t)($nc(this->data)->get(pixelOffset + d2) & (uint32_t)255));
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else if (this->numBands == 4) {
			int32_t d1 = $nc(this->dataOffsets)->get(1) - d0;
			int32_t d2 = $nc(this->dataOffsets)->get(2) - d0;
			int32_t d3 = $nc(this->dataOffsets)->get(3) - d0;
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(pixels)->set(dstOffset++, (int32_t)($nc(this->data)->get(pixelOffset) & (uint32_t)255));
					pixels->set(dstOffset++, (int32_t)($nc(this->data)->get(pixelOffset + d1) & (uint32_t)255));
					pixels->set(dstOffset++, (int32_t)($nc(this->data)->get(pixelOffset + d2) & (uint32_t)255));
					pixels->set(dstOffset++, (int32_t)($nc(this->data)->get(pixelOffset + d3) & (uint32_t)255));
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else {
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset;
				for (int32_t i = 0; i < w; ++i) {
					for (int32_t k = 0; k < this->numBands; ++k) {
						$nc(pixels)->set(dstOffset++, (int32_t)($nc(this->data)->get(pixelOffset + $nc(this->dataOffsets)->get(k)) & (uint32_t)255));
					}
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		}
	}
	return pixels;
}

void ByteInterleavedRaster::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t lineOffset = y * this->scanlineStride + x * this->pixelStride;
	int32_t srcOffset = 0;
	if (this->packed) {
		lineOffset += this->dbOffsetPacked;
		for (int32_t j = 0; j < h; ++j) {
			for (int32_t i = 0; i < w; ++i) {
				int32_t value = 0;
				for (int32_t k = 0; k < this->numBands; ++k) {
					int32_t srcValue = $nc(iArray)->get(srcOffset++);
					value |= ((int32_t)(($sl(srcValue, $nc(this->bitOffsets)->get(k))) & (uint32_t)$nc(this->bitMasks)->get(k)));
				}
				$nc(this->data)->set(lineOffset + i, (int8_t)value);
			}
			lineOffset += this->scanlineStride;
		}
	} else {
		lineOffset += this->dbOffset;
		int32_t d0 = $nc(this->dataOffsets)->get(0);
		if (this->numBands == 1) {
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(this->data)->set(pixelOffset, (int8_t)$nc(iArray)->get(srcOffset++));
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else if (this->numBands == 2) {
			int32_t d1 = $nc(this->dataOffsets)->get(1) - d0;
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(this->data)->set(pixelOffset, (int8_t)$nc(iArray)->get(srcOffset++));
					$nc(this->data)->set(pixelOffset + d1, (int8_t)iArray->get(srcOffset++));
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else if (this->numBands == 3) {
			int32_t d1 = $nc(this->dataOffsets)->get(1) - d0;
			int32_t d2 = $nc(this->dataOffsets)->get(2) - d0;
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(this->data)->set(pixelOffset, (int8_t)$nc(iArray)->get(srcOffset++));
					$nc(this->data)->set(pixelOffset + d1, (int8_t)iArray->get(srcOffset++));
					$nc(this->data)->set(pixelOffset + d2, (int8_t)iArray->get(srcOffset++));
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else if (this->numBands == 4) {
			int32_t d1 = $nc(this->dataOffsets)->get(1) - d0;
			int32_t d2 = $nc(this->dataOffsets)->get(2) - d0;
			int32_t d3 = $nc(this->dataOffsets)->get(3) - d0;
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset + d0;
				for (int32_t i = 0; i < w; ++i) {
					$nc(this->data)->set(pixelOffset, (int8_t)$nc(iArray)->get(srcOffset++));
					$nc(this->data)->set(pixelOffset + d1, (int8_t)iArray->get(srcOffset++));
					$nc(this->data)->set(pixelOffset + d2, (int8_t)iArray->get(srcOffset++));
					$nc(this->data)->set(pixelOffset + d3, (int8_t)iArray->get(srcOffset++));
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		} else {
			for (int32_t j = 0; j < h; ++j) {
				int32_t pixelOffset = lineOffset;
				for (int32_t i = 0; i < w; ++i) {
					for (int32_t k = 0; k < this->numBands; ++k) {
						$nc(this->data)->set(pixelOffset + $nc(this->dataOffsets)->get(k), (int8_t)$nc(iArray)->get(srcOffset++));
					}
					pixelOffset += this->pixelStride;
				}
				lineOffset += this->scanlineStride;
			}
		}
	}
	markDirty();
}

void ByteInterleavedRaster::setRect(int32_t dx, int32_t dy, $Raster* srcRaster) {
	if (!($instanceOf(ByteInterleavedRaster, srcRaster))) {
		$ByteComponentRaster::setRect(dx, dy, srcRaster);
		return;
	}
	int32_t width = $nc(srcRaster)->getWidth();
	int32_t height = srcRaster->getHeight();
	int32_t srcOffX = srcRaster->getMinX();
	int32_t srcOffY = srcRaster->getMinY();
	int32_t dstOffX = dx + srcOffX;
	int32_t dstOffY = dy + srcOffY;
	if (dstOffX < this->minX) {
		int32_t skipX = this->minX - dstOffX;
		width -= skipX;
		srcOffX += skipX;
		dstOffX = this->minX;
	}
	if (dstOffY < this->minY) {
		int32_t skipY = this->minY - dstOffY;
		height -= skipY;
		srcOffY += skipY;
		dstOffY = this->minY;
	}
	if (dstOffX + width > this->maxX) {
		width = this->maxX - dstOffX;
	}
	if (dstOffY + height > this->maxY) {
		height = this->maxY - dstOffY;
	}
	setDataElements(dstOffX, dstOffY, srcOffX, srcOffY, width, height, srcRaster);
}

$Raster* ByteInterleavedRaster::createChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
	$var($WritableRaster, newRaster, createWritableChild(x, y, width, height, x0, y0, bandList));
	return static_cast<$Raster*>(newRaster);
}

$WritableRaster* ByteInterleavedRaster::createWritableChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
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
	return $new(ByteInterleavedRaster, var$0, var$1, var$2, $$new($Point, this->sampleModelTranslateX + deltaX, this->sampleModelTranslateY + deltaY), this);
}

$WritableRaster* ByteInterleavedRaster::createCompatibleWritableRaster(int32_t w, int32_t h) {
	if (w <= 0 || h <= 0) {
		$throwNew($RasterFormatException, $$str({"negative "_s, ((w <= 0) ? "width"_s : "height"_s)}));
	}
	$var($SampleModel, sm, $nc(this->sampleModel)->createCompatibleSampleModel(w, h));
	return $new(ByteInterleavedRaster, sm, $$new($Point, 0, 0));
}

$WritableRaster* ByteInterleavedRaster::createCompatibleWritableRaster() {
	return createCompatibleWritableRaster(this->width, this->height);
}

$String* ByteInterleavedRaster::toString() {
	return $new($String, $$str({"ByteInterleavedRaster: width = "_s, $$str(this->width), " height = "_s, $$str(this->height), " #numDataElements "_s, $$str(this->numDataElements), " dataOff[0] = "_s, $$str($nc(this->dataOffsets)->get(0))}));
}

ByteInterleavedRaster::ByteInterleavedRaster() {
}

$Class* ByteInterleavedRaster::load$($String* name, bool initialize) {
	$loadClass(ByteInterleavedRaster, name, initialize, &_ByteInterleavedRaster_ClassInfo_, allocate$ByteInterleavedRaster);
	return class$;
}

$Class* ByteInterleavedRaster::class$ = nullptr;

		} // image
	} // awt
} // sun