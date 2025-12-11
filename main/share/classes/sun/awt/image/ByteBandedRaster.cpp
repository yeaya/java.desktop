#include <sun/awt/image/ByteBandedRaster.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/BandedSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RasterFormatException.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <jcpp.h>

#undef MAX_VALUE

using $byteArray2 = $Array<int8_t, 2>;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $BandedSampleModel = ::java::awt::image::BandedSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $Raster = ::java::awt::image::Raster;
using $RasterFormatException = ::java::awt::image::RasterFormatException;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _ByteBandedRaster_FieldInfo_[] = {
	{"dataOffsets", "[I", nullptr, 0, $field(ByteBandedRaster, dataOffsets)},
	{"scanlineStride", "I", nullptr, 0, $field(ByteBandedRaster, scanlineStride)},
	{"data", "[[B", nullptr, 0, $field(ByteBandedRaster, data)},
	{"maxX", "I", nullptr, $PRIVATE, $field(ByteBandedRaster, maxX)},
	{"maxY", "I", nullptr, $PRIVATE, $field(ByteBandedRaster, maxY)},
	{}
};

$MethodInfo _ByteBandedRaster_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(ByteBandedRaster::*)($SampleModel*,$Point*)>(&ByteBandedRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferByte;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(ByteBandedRaster::*)($SampleModel*,$DataBufferByte*,$Point*)>(&ByteBandedRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferByte;Ljava/awt/Rectangle;Ljava/awt/Point;Lsun/awt/image/ByteBandedRaster;)V", nullptr, $PUBLIC, $method(static_cast<void(ByteBandedRaster::*)($SampleModel*,$DataBufferByte*,$Rectangle*,$Point*,ByteBandedRaster*)>(&ByteBandedRaster::init$))},
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
	{"getDataStorage", "()[[B", nullptr, $PUBLIC},
	{"getDataStorage", "(I)[B", nullptr, $PUBLIC},
	{"getPixelStride", "()I", nullptr, $PUBLIC},
	{"getScanlineStride", "()I", nullptr, $PUBLIC},
	{"putByteData", "(IIIII[B)V", nullptr, $PUBLIC},
	{"putByteData", "(IIII[B)V", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/awt/image/Raster;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IIIILjava/awt/image/Raster;)V", nullptr, $PRIVATE, $method(static_cast<void(ByteBandedRaster::*)(int32_t,int32_t,int32_t,int32_t,$Raster*)>(&ByteBandedRaster::setDataElements))},
	{"setDataElements", "(IIIILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"verify", "()V", nullptr, $PRIVATE, $method(static_cast<void(ByteBandedRaster::*)()>(&ByteBandedRaster::verify))},
	{}
};

$ClassInfo _ByteBandedRaster_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.ByteBandedRaster",
	"sun.awt.image.SunWritableRaster",
	nullptr,
	_ByteBandedRaster_FieldInfo_,
	_ByteBandedRaster_MethodInfo_
};

$Object* allocate$ByteBandedRaster($Class* clazz) {
	return $of($alloc(ByteBandedRaster));
}

void ByteBandedRaster::init$($SampleModel* sampleModel, $Point* origin) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, var$0, sampleModel);
	$var($DataBufferByte, var$1, $cast($DataBufferByte, $nc(sampleModel)->createDataBuffer()));
	int32_t var$2 = $nc(origin)->x;
	int32_t var$3 = origin->y;
	int32_t var$4 = sampleModel->getWidth();
	ByteBandedRaster::init$(var$0, var$1, $$new($Rectangle, var$2, var$3, var$4, sampleModel->getHeight()), origin, nullptr);
}

void ByteBandedRaster::init$($SampleModel* sampleModel, $DataBufferByte* dataBuffer, $Point* origin) {
	int32_t var$0 = $nc(origin)->x;
	int32_t var$1 = origin->y;
	int32_t var$2 = $nc(sampleModel)->getWidth();
	ByteBandedRaster::init$(sampleModel, dataBuffer, $$new($Rectangle, var$0, var$1, var$2, sampleModel->getHeight()), origin, nullptr);
}

void ByteBandedRaster::init$($SampleModel* sampleModel, $DataBufferByte* dataBuffer, $Rectangle* aRegion, $Point* origin, ByteBandedRaster* parent) {
	$useLocalCurrentObjectStackCache();
	$SunWritableRaster::init$(sampleModel, dataBuffer, aRegion, origin, parent);
	this->maxX = this->minX + this->width;
	this->maxY = this->minY + this->height;
	if ($instanceOf($BandedSampleModel, sampleModel)) {
		$var($BandedSampleModel, bsm, $cast($BandedSampleModel, sampleModel));
		this->scanlineStride = $nc(bsm)->getScanlineStride();
		$var($ints, bankIndices, bsm->getBankIndices());
		$var($ints, bandOffsets, bsm->getBandOffsets());
		$var($ints, dOffsets, $nc(dataBuffer)->getOffsets());
		$set(this, dataOffsets, $new($ints, $nc(bankIndices)->length));
		$set(this, data, $new($byteArray2, bankIndices->length));
		int32_t xOffset = $nc(aRegion)->x - $nc(origin)->x;
		int32_t yOffset = aRegion->y - origin->y;
		for (int32_t i = 0; i < bankIndices->length; ++i) {
			$nc(this->data)->set(i, $(stealData(dataBuffer, bankIndices->get(i))));
			$nc(this->dataOffsets)->set(i, $nc(dOffsets)->get(bankIndices->get(i)) + xOffset + yOffset * this->scanlineStride + $nc(bandOffsets)->get(i));
		}
	} else {
		$throwNew($RasterFormatException, "ByteBandedRasters must haveBandedSampleModels"_s);
	}
	verify();
}

$ints* ByteBandedRaster::getDataOffsets() {
	return $cast($ints, $nc(this->dataOffsets)->clone());
}

int32_t ByteBandedRaster::getDataOffset(int32_t band) {
	return $nc(this->dataOffsets)->get(band);
}

int32_t ByteBandedRaster::getScanlineStride() {
	return this->scanlineStride;
}

int32_t ByteBandedRaster::getPixelStride() {
	return 1;
}

$byteArray2* ByteBandedRaster::getDataStorage() {
	return this->data;
}

$bytes* ByteBandedRaster::getDataStorage(int32_t band) {
	return $nc(this->data)->get(band);
}

$Object* ByteBandedRaster::getDataElements(int32_t x, int32_t y, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($bytes, outData, nullptr);
	if (obj == nullptr) {
		$assign(outData, $new($bytes, this->numDataElements));
	} else {
		$assign(outData, $cast($bytes, obj));
	}
	int32_t off = (y - this->minY) * this->scanlineStride + (x - this->minX);
	for (int32_t band = 0; band < this->numDataElements; ++band) {
		$nc(outData)->set(band, $nc($nc(this->data)->get(band))->get($nc(this->dataOffsets)->get(band) + off));
	}
	return $of(outData);
}

$Object* ByteBandedRaster::getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($bytes, outData, nullptr);
	if (obj == nullptr) {
		$assign(outData, $new($bytes, this->numDataElements * w * h));
	} else {
		$assign(outData, $cast($bytes, obj));
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX);
	for (int32_t c = 0; c < this->numDataElements; ++c) {
		int32_t off = c;
		$var($bytes, bank, $nc(this->data)->get(c));
		int32_t dataOffset = $nc(this->dataOffsets)->get(c);
		int32_t yoff2 = yoff;
		for (int32_t ystart = 0; ystart < h; ++ystart, yoff2 += this->scanlineStride) {
			int32_t xoff = dataOffset + yoff2;
			for (int32_t xstart = 0; xstart < w; ++xstart) {
				$nc(outData)->set(off, $nc(bank)->get(xoff++));
				off += this->numDataElements;
			}
		}
	}
	return $of(outData);
}

$bytes* ByteBandedRaster::getByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* outData$renamed) {
	$var($bytes, outData, outData$renamed);
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (outData == nullptr) {
		$assign(outData, $new($bytes, this->scanlineStride * h));
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) + $nc(this->dataOffsets)->get(band);
	if (this->scanlineStride == w) {
		$System::arraycopy($nc(this->data)->get(band), yoff, outData, 0, w * h);
	} else {
		int32_t off = 0;
		for (int32_t ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			$System::arraycopy($nc(this->data)->get(band), yoff, outData, off, w);
			off += w;
		}
	}
	return outData;
}

$bytes* ByteBandedRaster::getByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* outData$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, outData, outData$renamed);
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	if (outData == nullptr) {
		$assign(outData, $new($bytes, this->numDataElements * this->scanlineStride * h));
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX);
	for (int32_t c = 0; c < this->numDataElements; ++c) {
		int32_t off = c;
		$var($bytes, bank, $nc(this->data)->get(c));
		int32_t dataOffset = $nc(this->dataOffsets)->get(c);
		int32_t yoff2 = yoff;
		for (int32_t ystart = 0; ystart < h; ++ystart, yoff2 += this->scanlineStride) {
			int32_t xoff = dataOffset + yoff2;
			for (int32_t xstart = 0; xstart < w; ++xstart) {
				$nc(outData)->set(off, $nc(bank)->get(xoff++));
				off += this->numDataElements;
			}
		}
	}
	return outData;
}

void ByteBandedRaster::setDataElements(int32_t x, int32_t y, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($bytes, inData, $cast($bytes, obj));
	int32_t off = (y - this->minY) * this->scanlineStride + (x - this->minX);
	for (int32_t i = 0; i < this->numDataElements; ++i) {
		$nc($nc(this->data)->get(i))->set($nc(this->dataOffsets)->get(i) + off, $nc(inData)->get(i));
	}
	markDirty();
}

void ByteBandedRaster::setDataElements(int32_t x, int32_t y, $Raster* inRaster) {
	int32_t dstOffX = $nc(inRaster)->getMinX() + x;
	int32_t dstOffY = inRaster->getMinY() + y;
	int32_t width = inRaster->getWidth();
	int32_t height = inRaster->getHeight();
	if ((dstOffX < this->minX) || (dstOffY < this->minY) || (dstOffX + width > this->maxX) || (dstOffY + height > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	setDataElements(dstOffX, dstOffY, width, height, inRaster);
}

void ByteBandedRaster::setDataElements(int32_t dstX, int32_t dstY, int32_t width, int32_t height, $Raster* inRaster) {
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

void ByteBandedRaster::setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($bytes, inData, $cast($bytes, obj));
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX);
	for (int32_t c = 0; c < this->numDataElements; ++c) {
		int32_t off = c;
		$var($bytes, bank, $nc(this->data)->get(c));
		int32_t dataOffset = $nc(this->dataOffsets)->get(c);
		int32_t yoff2 = yoff;
		for (int32_t ystart = 0; ystart < h; ++ystart, yoff2 += this->scanlineStride) {
			int32_t xoff = dataOffset + yoff2;
			for (int32_t xstart = 0; xstart < w; ++xstart) {
				$nc(bank)->set(xoff++, $nc(inData)->get(off));
				off += this->numDataElements;
			}
		}
	}
	markDirty();
}

void ByteBandedRaster::putByteData(int32_t x, int32_t y, int32_t w, int32_t h, int32_t band, $bytes* inData) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) + $nc(this->dataOffsets)->get(band);
	int32_t xoff = 0;
	int32_t off = 0;
	int32_t xstart = 0;
	int32_t ystart = 0;
	if (this->scanlineStride == w) {
		$System::arraycopy(inData, 0, $nc(this->data)->get(band), yoff, w * h);
	} else {
		for (ystart = 0; ystart < h; ++ystart, yoff += this->scanlineStride) {
			$System::arraycopy(inData, off, $nc(this->data)->get(band), yoff, w);
			off += w;
		}
	}
	markDirty();
}

void ByteBandedRaster::putByteData(int32_t x, int32_t y, int32_t w, int32_t h, $bytes* inData) {
	$useLocalCurrentObjectStackCache();
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX);
	for (int32_t c = 0; c < this->numDataElements; ++c) {
		int32_t off = c;
		$var($bytes, bank, $nc(this->data)->get(c));
		int32_t dataOffset = $nc(this->dataOffsets)->get(c);
		int32_t yoff2 = yoff;
		for (int32_t ystart = 0; ystart < h; ++ystart, yoff2 += this->scanlineStride) {
			int32_t xoff = dataOffset + yoff2;
			for (int32_t xstart = 0; xstart < w; ++xstart) {
				$nc(bank)->set(xoff++, $nc(inData)->get(off));
				off += this->numDataElements;
			}
		}
	}
	markDirty();
}

$WritableRaster* ByteBandedRaster::createWritableChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
	$useLocalCurrentObjectStackCache();
	if (x < this->minX) {
		$throwNew($RasterFormatException, "x lies outside raster"_s);
	}
	if (y < this->minY) {
		$throwNew($RasterFormatException, "y lies outside raster"_s);
	}
	if ((x + width < x) || (x + width > this->width + this->minX)) {
		$throwNew($RasterFormatException, "(x + width) is outside raster"_s);
	}
	if ((y + height < y) || (y + height > this->height + this->minY)) {
		$throwNew($RasterFormatException, "(y + height) is outside raster"_s);
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
	return $new(ByteBandedRaster, var$0, var$1, var$2, $$new($Point, this->sampleModelTranslateX + deltaX, this->sampleModelTranslateY + deltaY), this);
}

$Raster* ByteBandedRaster::createChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
	return createWritableChild(x, y, width, height, x0, y0, bandList);
}

$WritableRaster* ByteBandedRaster::createCompatibleWritableRaster(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (w <= 0 || h <= 0) {
		$throwNew($RasterFormatException, $$str({"negative "_s, ((w <= 0) ? "width"_s : "height"_s)}));
	}
	$var($SampleModel, sm, $nc(this->sampleModel)->createCompatibleSampleModel(w, h));
	return $new(ByteBandedRaster, sm, $$new($Point, 0, 0));
}

$WritableRaster* ByteBandedRaster::createCompatibleWritableRaster() {
	return createCompatibleWritableRaster(this->width, this->height);
}

void ByteBandedRaster::verify() {
	$useLocalCurrentObjectStackCache();
	if (this->width <= 0 || this->height <= 0 || this->height > ($div($Integer::MAX_VALUE, this->width))) {
		$throwNew($RasterFormatException, "Invalid raster dimension"_s);
	}
	if (this->scanlineStride < 0 || this->scanlineStride > ($div($Integer::MAX_VALUE, this->height))) {
		$throwNew($RasterFormatException, $$str({"Incorrect scanline stride: "_s, $$str(this->scanlineStride)}));
	}
	if ((int64_t)this->minX - this->sampleModelTranslateX < 0 || (int64_t)this->minY - this->sampleModelTranslateY < 0) {
		$throwNew($RasterFormatException, $$str({"Incorrect origin/translate: ("_s, $$str(this->minX), ", "_s, $$str(this->minY), ") / ("_s, $$str(this->sampleModelTranslateX), ", "_s, $$str(this->sampleModelTranslateY), ")"_s}));
	}
	if (this->height > 1 || this->minY - this->sampleModelTranslateY > 0) {
		for (int32_t i = 0; i < $nc(this->data)->length; ++i) {
			if (this->scanlineStride > $nc($nc(this->data)->get(i))->length) {
				$throwNew($RasterFormatException, $$str({"Incorrect scanline stride: "_s, $$str(this->scanlineStride)}));
			}
		}
	}
	for (int32_t i = 0; i < $nc(this->dataOffsets)->length; ++i) {
		if ($nc(this->dataOffsets)->get(i) < 0) {
			$throwNew($RasterFormatException, $$str({"Data offsets for band "_s, $$str(i), "("_s, $$str($nc(this->dataOffsets)->get(i)), ") must be >= 0"_s}));
		}
	}
	int32_t lastScanOffset = (this->height - 1) * this->scanlineStride;
	if ((this->width - 1) > ($Integer::MAX_VALUE - lastScanOffset)) {
		$throwNew($RasterFormatException, "Invalid raster dimension"_s);
	}
	int32_t lastPixelOffset = lastScanOffset + (this->width - 1);
	int32_t maxIndex = 0;
	int32_t index = 0;
	for (int32_t i = 0; i < this->numDataElements; ++i) {
		if ($nc(this->dataOffsets)->get(i) > ($Integer::MAX_VALUE - lastPixelOffset)) {
			$throwNew($RasterFormatException, "Invalid raster dimension"_s);
		}
		index = lastPixelOffset + $nc(this->dataOffsets)->get(i);
		if (index > maxIndex) {
			maxIndex = index;
		}
	}
	if ($nc(this->data)->length == 1) {
		if ($nc($nc(this->data)->get(0))->length <= maxIndex * this->numDataElements) {
			$throwNew($RasterFormatException, $$str({"Data array too small (it is "_s, $$str($nc($nc(this->data)->get(0))->length), " and should be > "_s, $$str((maxIndex * this->numDataElements)), " )"_s}));
		}
	} else {
		for (int32_t i = 0; i < this->numDataElements; ++i) {
			if ($nc($nc(this->data)->get(i))->length <= maxIndex) {
				$throwNew($RasterFormatException, $$str({"Data array too small (it is "_s, $$str($nc($nc(this->data)->get(i))->length), " and should be > "_s, $$str(maxIndex), " )"_s}));
			}
		}
	}
}

$String* ByteBandedRaster::toString() {
	$useLocalCurrentObjectStackCache();
	return $new($String, $$str({"ByteBandedRaster: width = "_s, $$str(this->width), " height = "_s, $$str(this->height), " #bands "_s, $$str(this->numDataElements), " minX = "_s, $$str(this->minX), " minY = "_s, $$str(this->minY)}));
}

ByteBandedRaster::ByteBandedRaster() {
}

$Class* ByteBandedRaster::load$($String* name, bool initialize) {
	$loadClass(ByteBandedRaster, name, initialize, &_ByteBandedRaster_ClassInfo_, allocate$ByteBandedRaster);
	return class$;
}

$Class* ByteBandedRaster::class$ = nullptr;

		} // image
	} // awt
} // sun