#include <sun/awt/image/IntegerComponentRaster.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
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
#include <sun/awt/image/NativeLibLoader.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef TYPE_BYTE_BANDED_SAMPLES
#undef TYPE_BYTE_BINARY_SAMPLES
#undef TYPE_BYTE_PACKED_SAMPLES
#undef TYPE_BYTE_SAMPLES
#undef TYPE_CUSTOM
#undef TYPE_INT_8BIT_SAMPLES
#undef TYPE_INT_BANDED_SAMPLES
#undef TYPE_INT_PACKED_SAMPLES
#undef TYPE_INT_SAMPLES
#undef TYPE_USHORT_BANDED_SAMPLES
#undef TYPE_USHORT_PACKED_SAMPLES
#undef TYPE_USHORT_SAMPLES

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
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
using $NativeLibLoader = ::sun::awt::image::NativeLibLoader;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _IntegerComponentRaster_FieldInfo_[] = {
	{"TYPE_CUSTOM", "I", nullptr, $STATIC | $FINAL, $constField(IntegerComponentRaster, TYPE_CUSTOM)},
	{"TYPE_BYTE_SAMPLES", "I", nullptr, $STATIC | $FINAL, $constField(IntegerComponentRaster, TYPE_BYTE_SAMPLES)},
	{"TYPE_USHORT_SAMPLES", "I", nullptr, $STATIC | $FINAL, $constField(IntegerComponentRaster, TYPE_USHORT_SAMPLES)},
	{"TYPE_INT_SAMPLES", "I", nullptr, $STATIC | $FINAL, $constField(IntegerComponentRaster, TYPE_INT_SAMPLES)},
	{"TYPE_BYTE_BANDED_SAMPLES", "I", nullptr, $STATIC | $FINAL, $constField(IntegerComponentRaster, TYPE_BYTE_BANDED_SAMPLES)},
	{"TYPE_USHORT_BANDED_SAMPLES", "I", nullptr, $STATIC | $FINAL, $constField(IntegerComponentRaster, TYPE_USHORT_BANDED_SAMPLES)},
	{"TYPE_INT_BANDED_SAMPLES", "I", nullptr, $STATIC | $FINAL, $constField(IntegerComponentRaster, TYPE_INT_BANDED_SAMPLES)},
	{"TYPE_BYTE_PACKED_SAMPLES", "I", nullptr, $STATIC | $FINAL, $constField(IntegerComponentRaster, TYPE_BYTE_PACKED_SAMPLES)},
	{"TYPE_USHORT_PACKED_SAMPLES", "I", nullptr, $STATIC | $FINAL, $constField(IntegerComponentRaster, TYPE_USHORT_PACKED_SAMPLES)},
	{"TYPE_INT_PACKED_SAMPLES", "I", nullptr, $STATIC | $FINAL, $constField(IntegerComponentRaster, TYPE_INT_PACKED_SAMPLES)},
	{"TYPE_INT_8BIT_SAMPLES", "I", nullptr, $STATIC | $FINAL, $constField(IntegerComponentRaster, TYPE_INT_8BIT_SAMPLES)},
	{"TYPE_BYTE_BINARY_SAMPLES", "I", nullptr, $STATIC | $FINAL, $constField(IntegerComponentRaster, TYPE_BYTE_BINARY_SAMPLES)},
	{"bandOffset", "I", nullptr, $PROTECTED, $field(IntegerComponentRaster, bandOffset)},
	{"dataOffsets", "[I", nullptr, $PROTECTED, $field(IntegerComponentRaster, dataOffsets)},
	{"scanlineStride", "I", nullptr, $PROTECTED, $field(IntegerComponentRaster, scanlineStride)},
	{"pixelStride", "I", nullptr, $PROTECTED, $field(IntegerComponentRaster, pixelStride)},
	{"data", "[I", nullptr, $PROTECTED, $field(IntegerComponentRaster, data)},
	{"numDataElems", "I", nullptr, $PROTECTED, $field(IntegerComponentRaster, numDataElems)},
	{"type", "I", nullptr, 0, $field(IntegerComponentRaster, type)},
	{"maxX", "I", nullptr, $PRIVATE, $field(IntegerComponentRaster, maxX)},
	{"maxY", "I", nullptr, $PRIVATE, $field(IntegerComponentRaster, maxY)},
	{}
};

$MethodInfo _IntegerComponentRaster_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(IntegerComponentRaster::*)($SampleModel*,$Point*)>(&IntegerComponentRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferInt;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(IntegerComponentRaster::*)($SampleModel*,$DataBufferInt*,$Point*)>(&IntegerComponentRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferInt;Ljava/awt/Rectangle;Ljava/awt/Point;Lsun/awt/image/IntegerComponentRaster;)V", nullptr, $PUBLIC, $method(static_cast<void(IntegerComponentRaster::*)($SampleModel*,$DataBufferInt*,$Rectangle*,$Point*,IntegerComponentRaster*)>(&IntegerComponentRaster::init$))},
	{"createChild", "(IIIIII[I)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "()Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createWritableChild", "(IIIIII[I)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"getDataElements", "(IILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDataElements", "(IIIILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDataOffset", "(I)I", nullptr, $PUBLIC},
	{"getDataOffsets", "()[I", nullptr, $PUBLIC},
	{"getDataStorage", "()[I", nullptr, $PUBLIC},
	{"getPixelStride", "()I", nullptr, $PUBLIC},
	{"getScanlineStride", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&IntegerComponentRaster::initIDs))},
	{"setDataElements", "(IILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/awt/image/Raster;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IIIILjava/awt/image/Raster;)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerComponentRaster::*)(int32_t,int32_t,int32_t,int32_t,$Raster*)>(&IntegerComponentRaster::setDataElements))},
	{"setDataElements", "(IIIILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"verify", "()V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(IntegerComponentRaster::*)()>(&IntegerComponentRaster::verify))},
	{}
};

#define _METHOD_INDEX_initIDs 14

$ClassInfo _IntegerComponentRaster_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.IntegerComponentRaster",
	"sun.awt.image.SunWritableRaster",
	nullptr,
	_IntegerComponentRaster_FieldInfo_,
	_IntegerComponentRaster_MethodInfo_
};

$Object* allocate$IntegerComponentRaster($Class* clazz) {
	return $of($alloc(IntegerComponentRaster));
}

void IntegerComponentRaster::initIDs() {
	$init(IntegerComponentRaster);
	$prepareNativeStatic(IntegerComponentRaster, initIDs, void);
	$invokeNativeStatic(IntegerComponentRaster, initIDs);
	$finishNativeStatic();
}

void IntegerComponentRaster::init$($SampleModel* sampleModel, $Point* origin) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, var$0, sampleModel);
	$var($DataBufferInt, var$1, $cast($DataBufferInt, $nc(sampleModel)->createDataBuffer()));
	int32_t var$2 = $nc(origin)->x;
	int32_t var$3 = origin->y;
	int32_t var$4 = sampleModel->getWidth();
	IntegerComponentRaster::init$(var$0, var$1, $$new($Rectangle, var$2, var$3, var$4, sampleModel->getHeight()), origin, nullptr);
}

void IntegerComponentRaster::init$($SampleModel* sampleModel, $DataBufferInt* dataBuffer, $Point* origin) {
	int32_t var$0 = $nc(origin)->x;
	int32_t var$1 = origin->y;
	int32_t var$2 = $nc(sampleModel)->getWidth();
	IntegerComponentRaster::init$(sampleModel, dataBuffer, $$new($Rectangle, var$0, var$1, var$2, sampleModel->getHeight()), origin, nullptr);
}

void IntegerComponentRaster::init$($SampleModel* sampleModel, $DataBufferInt* dataBuffer, $Rectangle* aRegion, $Point* origin, IntegerComponentRaster* parent) {
	$useLocalCurrentObjectStackCache();
	$SunWritableRaster::init$(sampleModel, dataBuffer, aRegion, origin, parent);
	this->maxX = this->minX + this->width;
	this->maxY = this->minY + this->height;
	if ($nc(dataBuffer)->getNumBanks() != 1) {
		$throwNew($RasterFormatException, "DataBuffer for IntegerComponentRasters must only have 1 bank."_s);
	}
	$set(this, data, stealData(dataBuffer, 0));
	if ($instanceOf($SinglePixelPackedSampleModel, sampleModel)) {
		$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sampleModel));
		$var($ints, boffsets, $nc(sppsm)->getBitOffsets());
		bool notByteBoundary = false;
		for (int32_t i = 1; i < $nc(boffsets)->length; ++i) {
			if ((boffsets->get(i) % 8) != 0) {
				notByteBoundary = true;
			}
		}
		this->type = (notByteBoundary ? IntegerComponentRaster::TYPE_INT_PACKED_SAMPLES : IntegerComponentRaster::TYPE_INT_8BIT_SAMPLES);
		this->scanlineStride = sppsm->getScanlineStride();
		this->pixelStride = 1;
		$set(this, dataOffsets, $new($ints, 1));
		$nc(this->dataOffsets)->set(0, $nc(dataBuffer)->getOffset());
		this->bandOffset = $nc(this->dataOffsets)->get(0);
		int32_t xOffset = $nc(aRegion)->x - $nc(origin)->x;
		int32_t yOffset = aRegion->y - origin->y;
		(*$nc(this->dataOffsets))[0] += xOffset + yOffset * this->scanlineStride;
		this->numDataElems = sppsm->getNumDataElements();
	} else {
		$throwNew($RasterFormatException, "IntegerComponentRasters must have SinglePixelPackedSampleModel"_s);
	}
	verify();
}

$ints* IntegerComponentRaster::getDataOffsets() {
	return $cast($ints, $nc(this->dataOffsets)->clone());
}

int32_t IntegerComponentRaster::getDataOffset(int32_t band) {
	return $nc(this->dataOffsets)->get(band);
}

int32_t IntegerComponentRaster::getScanlineStride() {
	return this->scanlineStride;
}

int32_t IntegerComponentRaster::getPixelStride() {
	return this->pixelStride;
}

$ints* IntegerComponentRaster::getDataStorage() {
	return this->data;
}

$Object* IntegerComponentRaster::getDataElements(int32_t x, int32_t y, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, outData, nullptr);
	if (obj == nullptr) {
		$assign(outData, $new($ints, this->numDataElements));
	} else {
		$assign(outData, $cast($ints, obj));
	}
	int32_t off = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	for (int32_t band = 0; band < this->numDataElements; ++band) {
		$nc(outData)->set(band, $nc(this->data)->get($nc(this->dataOffsets)->get(band) + off));
	}
	return $of(outData);
}

$Object* IntegerComponentRaster::getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, outData, nullptr);
	if ($instanceOf($ints, obj)) {
		$assign(outData, $cast($ints, obj));
	} else {
		$assign(outData, $new($ints, this->numDataElements * w * h));
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

void IntegerComponentRaster::setDataElements(int32_t x, int32_t y, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, inData, $cast($ints, obj));
	int32_t off = (y - this->minY) * this->scanlineStride + (x - this->minX) * this->pixelStride;
	for (int32_t i = 0; i < this->numDataElements; ++i) {
		$nc(this->data)->set($nc(this->dataOffsets)->get(i) + off, $nc(inData)->get(i));
	}
	markDirty();
}

void IntegerComponentRaster::setDataElements(int32_t x, int32_t y, $Raster* inRaster) {
	int32_t dstOffX = x + $nc(inRaster)->getMinX();
	int32_t dstOffY = y + inRaster->getMinY();
	int32_t width = inRaster->getWidth();
	int32_t height = inRaster->getHeight();
	if ((dstOffX < this->minX) || (dstOffY < this->minY) || (dstOffX + width > this->maxX) || (dstOffY + height > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	setDataElements(dstOffX, dstOffY, width, height, inRaster);
}

void IntegerComponentRaster::setDataElements(int32_t dstX, int32_t dstY, int32_t width, int32_t height, $Raster* inRaster) {
	$useLocalCurrentObjectStackCache();
	if (width <= 0 || height <= 0) {
		return;
	}
	int32_t srcOffX = $nc(inRaster)->getMinX();
	int32_t srcOffY = inRaster->getMinY();
	$var($ints, tdata, nullptr);
	if ($instanceOf(IntegerComponentRaster, inRaster) && (this->pixelStride == 1) && (this->numDataElements == 1)) {
		$var(IntegerComponentRaster, ict, $cast(IntegerComponentRaster, inRaster));
		if (ict->getNumDataElements() != 1) {
			$throwNew($ArrayIndexOutOfBoundsException, "Number of bands does not match"_s);
		}
		$assign(tdata, ict->getDataStorage());
		int32_t tss = ict->getScanlineStride();
		int32_t toff = ict->getDataOffset(0);
		int32_t srcOffset = toff;
		int32_t dstOffset = $nc(this->dataOffsets)->get(0) + (dstY - this->minY) * this->scanlineStride + (dstX - this->minX);
		if (ict->getPixelStride() == this->pixelStride) {
			width *= this->pixelStride;
			for (int32_t startY = 0; startY < height; ++startY) {
				$System::arraycopy(tdata, srcOffset, this->data, dstOffset, width);
				srcOffset += tss;
				dstOffset += this->scanlineStride;
			}
			markDirty();
			return;
		}
	}
	$var($Object, odata, nullptr);
	for (int32_t startY = 0; startY < height; ++startY) {
		$assign(odata, inRaster->getDataElements(srcOffX, srcOffY + startY, width, 1, odata));
		setDataElements(dstX, dstY + startY, width, 1, odata);
	}
}

void IntegerComponentRaster::setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, inData, $cast($ints, obj));
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

$WritableRaster* IntegerComponentRaster::createWritableChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
	$useLocalCurrentObjectStackCache();
	if (x < this->minX) {
		$throwNew($RasterFormatException, "x lies outside raster"_s);
	}
	if (y < this->minY) {
		$throwNew($RasterFormatException, "y lies outside raster"_s);
	}
	if ((x + width < x) || (x + width > this->minX + this->width)) {
		$throwNew($RasterFormatException, "(x + width) is outside raster"_s);
	}
	if ((y + height < y) || (y + height > this->minY + this->height)) {
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
	$var($DataBufferInt, var$1, $cast($DataBufferInt, this->dataBuffer));
	$var($Rectangle, var$2, $new($Rectangle, x0, y0, width, height));
	return $new(IntegerComponentRaster, var$0, var$1, var$2, $$new($Point, this->sampleModelTranslateX + deltaX, this->sampleModelTranslateY + deltaY), this);
}

$Raster* IntegerComponentRaster::createChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
	return createWritableChild(x, y, width, height, x0, y0, bandList);
}

$WritableRaster* IntegerComponentRaster::createCompatibleWritableRaster(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (w <= 0 || h <= 0) {
		$throwNew($RasterFormatException, $$str({"negative "_s, ((w <= 0) ? "width"_s : "height"_s)}));
	}
	$var($SampleModel, sm, $nc(this->sampleModel)->createCompatibleSampleModel(w, h));
	return $new(IntegerComponentRaster, sm, $$new($Point, 0, 0));
}

$WritableRaster* IntegerComponentRaster::createCompatibleWritableRaster() {
	return createCompatibleWritableRaster(this->width, this->height);
}

void IntegerComponentRaster::verify() {
	$useLocalCurrentObjectStackCache();
	if (this->width <= 0 || this->height <= 0 || this->height > ($div($Integer::MAX_VALUE, this->width))) {
		$throwNew($RasterFormatException, "Invalid raster dimension"_s);
	}
	if ($nc(this->dataOffsets)->get(0) < 0) {
		$throwNew($RasterFormatException, $$str({"Data offset ("_s, $$str($nc(this->dataOffsets)->get(0)), ") must be >= 0"_s}));
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

$String* IntegerComponentRaster::toString() {
	$useLocalCurrentObjectStackCache();
	return $new($String, $$str({"IntegerComponentRaster: width = "_s, $$str(this->width), " height = "_s, $$str(this->height), " #Bands = "_s, $$str(this->numBands), " #DataElements "_s, $$str(this->numDataElements), " xOff = "_s, $$str(this->sampleModelTranslateX), " yOff = "_s, $$str(this->sampleModelTranslateY), " dataOffset[0] "_s, $$str($nc(this->dataOffsets)->get(0))}));
}

void clinit$IntegerComponentRaster($Class* class$) {
	{
		$NativeLibLoader::loadLibraries();
		IntegerComponentRaster::initIDs();
	}
}

IntegerComponentRaster::IntegerComponentRaster() {
}

$Class* IntegerComponentRaster::load$($String* name, bool initialize) {
	$loadClass(IntegerComponentRaster, name, initialize, &_IntegerComponentRaster_ClassInfo_, clinit$IntegerComponentRaster, allocate$IntegerComponentRaster);
	return class$;
}

$Class* IntegerComponentRaster::class$ = nullptr;

		} // image
	} // awt
} // sun