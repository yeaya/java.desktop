#include <sun/awt/image/IntegerInterleavedRaster.h>

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
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <jcpp.h>

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
using $MethodInfo = ::java::lang::MethodInfo;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _IntegerInterleavedRaster_FieldInfo_[] = {
	{"maxX", "I", nullptr, $PRIVATE, $field(IntegerInterleavedRaster, maxX)},
	{"maxY", "I", nullptr, $PRIVATE, $field(IntegerInterleavedRaster, maxY)},
	{}
};

$MethodInfo _IntegerInterleavedRaster_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(IntegerInterleavedRaster::*)($SampleModel*,$Point*)>(&IntegerInterleavedRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferInt;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(IntegerInterleavedRaster::*)($SampleModel*,$DataBufferInt*,$Point*)>(&IntegerInterleavedRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBufferInt;Ljava/awt/Rectangle;Ljava/awt/Point;Lsun/awt/image/IntegerInterleavedRaster;)V", nullptr, $PUBLIC, $method(static_cast<void(IntegerInterleavedRaster::*)($SampleModel*,$DataBufferInt*,$Rectangle*,$Point*,IntegerInterleavedRaster*)>(&IntegerInterleavedRaster::init$))},
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
	{"setDataElements", "(IILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/awt/image/Raster;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IIIILjava/awt/image/Raster;)V", nullptr, $PRIVATE, $method(static_cast<void(IntegerInterleavedRaster::*)(int32_t,int32_t,int32_t,int32_t,$Raster*)>(&IntegerInterleavedRaster::setDataElements))},
	{"setDataElements", "(IIIILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IntegerInterleavedRaster_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.IntegerInterleavedRaster",
	"sun.awt.image.IntegerComponentRaster",
	nullptr,
	_IntegerInterleavedRaster_FieldInfo_,
	_IntegerInterleavedRaster_MethodInfo_
};

$Object* allocate$IntegerInterleavedRaster($Class* clazz) {
	return $of($alloc(IntegerInterleavedRaster));
}

void IntegerInterleavedRaster::init$($SampleModel* sampleModel, $Point* origin) {
	$var($SampleModel, var$0, sampleModel);
	$var($DataBufferInt, var$1, $cast($DataBufferInt, $nc(sampleModel)->createDataBuffer()));
	int32_t var$2 = $nc(origin)->x;
	int32_t var$3 = origin->y;
	int32_t var$4 = sampleModel->getWidth();
	IntegerInterleavedRaster::init$(var$0, var$1, $$new($Rectangle, var$2, var$3, var$4, sampleModel->getHeight()), origin, nullptr);
}

void IntegerInterleavedRaster::init$($SampleModel* sampleModel, $DataBufferInt* dataBuffer, $Point* origin) {
	int32_t var$0 = $nc(origin)->x;
	int32_t var$1 = origin->y;
	int32_t var$2 = $nc(sampleModel)->getWidth();
	IntegerInterleavedRaster::init$(sampleModel, dataBuffer, $$new($Rectangle, var$0, var$1, var$2, sampleModel->getHeight()), origin, nullptr);
}

void IntegerInterleavedRaster::init$($SampleModel* sampleModel, $DataBufferInt* dataBuffer, $Rectangle* aRegion, $Point* origin, IntegerInterleavedRaster* parent) {
	$IntegerComponentRaster::init$(sampleModel, dataBuffer, aRegion, origin, parent);
	this->maxX = this->minX + this->width;
	this->maxY = this->minY + this->height;
	$set(this, data, stealData(dataBuffer, 0));
	if ($instanceOf($SinglePixelPackedSampleModel, sampleModel)) {
		$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sampleModel));
		this->scanlineStride = $nc(sppsm)->getScanlineStride();
		this->pixelStride = 1;
		$set(this, dataOffsets, $new($ints, 1));
		$nc(this->dataOffsets)->set(0, $nc(dataBuffer)->getOffset());
		this->bandOffset = $nc(this->dataOffsets)->get(0);
		int32_t xOffset = $nc(aRegion)->x - $nc(origin)->x;
		int32_t yOffset = aRegion->y - origin->y;
		(*$nc(this->dataOffsets))[0] += xOffset + yOffset * this->scanlineStride;
		this->numDataElems = sppsm->getNumDataElements();
	} else {
		$throwNew($RasterFormatException, "IntegerInterleavedRasters must have SinglePixelPackedSampleModel"_s);
	}
	verify();
}

$ints* IntegerInterleavedRaster::getDataOffsets() {
	return $cast($ints, $nc(this->dataOffsets)->clone());
}

int32_t IntegerInterleavedRaster::getDataOffset(int32_t band) {
	return $nc(this->dataOffsets)->get(band);
}

int32_t IntegerInterleavedRaster::getScanlineStride() {
	return this->scanlineStride;
}

int32_t IntegerInterleavedRaster::getPixelStride() {
	return this->pixelStride;
}

$ints* IntegerInterleavedRaster::getDataStorage() {
	return this->data;
}

$Object* IntegerInterleavedRaster::getDataElements(int32_t x, int32_t y, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, outData, nullptr);
	if (obj == nullptr) {
		$assign(outData, $new($ints, 1));
	} else {
		$assign(outData, $cast($ints, obj));
	}
	int32_t off = (y - this->minY) * this->scanlineStride + (x - this->minX) + $nc(this->dataOffsets)->get(0);
	$nc(outData)->set(0, $nc(this->data)->get(off));
	return $of(outData);
}

$Object* IntegerInterleavedRaster::getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, outData, nullptr);
	if ($instanceOf($ints, obj)) {
		$assign(outData, $cast($ints, obj));
	} else {
		$assign(outData, $new($ints, w * h));
	}
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) + $nc(this->dataOffsets)->get(0);
	int32_t off = 0;
	for (int32_t ystart = 0; ystart < h; ++ystart) {
		$System::arraycopy(this->data, yoff, outData, off, w);
		off += w;
		yoff += this->scanlineStride;
	}
	return $of(outData);
}

void IntegerInterleavedRaster::setDataElements(int32_t x, int32_t y, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x >= this->maxX) || (y >= this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, inData, $cast($ints, obj));
	int32_t off = (y - this->minY) * this->scanlineStride + (x - this->minX) + $nc(this->dataOffsets)->get(0);
	$nc(this->data)->set(off, $nc(inData)->get(0));
	markDirty();
}

void IntegerInterleavedRaster::setDataElements(int32_t x, int32_t y, $Raster* inRaster) {
	int32_t dstOffX = x + $nc(inRaster)->getMinX();
	int32_t dstOffY = y + inRaster->getMinY();
	int32_t width = inRaster->getWidth();
	int32_t height = inRaster->getHeight();
	if ((dstOffX < this->minX) || (dstOffY < this->minY) || (dstOffX + width > this->maxX) || (dstOffY + height > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	setDataElements(dstOffX, dstOffY, width, height, inRaster);
}

void IntegerInterleavedRaster::setDataElements(int32_t dstX, int32_t dstY, int32_t width, int32_t height, $Raster* inRaster) {
	if (width <= 0 || height <= 0) {
		return;
	}
	int32_t srcOffX = $nc(inRaster)->getMinX();
	int32_t srcOffY = inRaster->getMinY();
	$var($ints, tdata, nullptr);
	if ($instanceOf(IntegerInterleavedRaster, inRaster)) {
		$var(IntegerInterleavedRaster, ict, $cast(IntegerInterleavedRaster, inRaster));
		$assign(tdata, ict->getDataStorage());
		int32_t tss = ict->getScanlineStride();
		int32_t toff = ict->getDataOffset(0);
		int32_t srcOffset = toff;
		int32_t dstOffset = $nc(this->dataOffsets)->get(0) + (dstY - this->minY) * this->scanlineStride + (dstX - this->minX);
		for (int32_t startY = 0; startY < height; ++startY) {
			$System::arraycopy(tdata, srcOffset, this->data, dstOffset, width);
			srcOffset += tss;
			dstOffset += this->scanlineStride;
		}
		markDirty();
		return;
	}
	$var($Object, odata, nullptr);
	for (int32_t startY = 0; startY < height; ++startY) {
		$assign(odata, inRaster->getDataElements(srcOffX, srcOffY + startY, width, 1, odata));
		setDataElements(dstX, dstY + startY, width, 1, odata);
	}
}

void IntegerInterleavedRaster::setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* obj) {
	if ((x < this->minX) || (y < this->minY) || (x + w > this->maxX) || (y + h > this->maxY)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	$var($ints, inData, $cast($ints, obj));
	int32_t yoff = (y - this->minY) * this->scanlineStride + (x - this->minX) + $nc(this->dataOffsets)->get(0);
	int32_t off = 0;
	for (int32_t ystart = 0; ystart < h; ++ystart) {
		$System::arraycopy(inData, off, this->data, yoff, w);
		off += w;
		yoff += this->scanlineStride;
	}
	markDirty();
}

$WritableRaster* IntegerInterleavedRaster::createWritableChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
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
	return $new(IntegerInterleavedRaster, var$0, var$1, var$2, $$new($Point, this->sampleModelTranslateX + deltaX, this->sampleModelTranslateY + deltaY), this);
}

$Raster* IntegerInterleavedRaster::createChild(int32_t x, int32_t y, int32_t width, int32_t height, int32_t x0, int32_t y0, $ints* bandList) {
	return createWritableChild(x, y, width, height, x0, y0, bandList);
}

$WritableRaster* IntegerInterleavedRaster::createCompatibleWritableRaster(int32_t w, int32_t h) {
	if (w <= 0 || h <= 0) {
		$throwNew($RasterFormatException, $$str({"negative "_s, ((w <= 0) ? "width"_s : "height"_s)}));
	}
	$var($SampleModel, sm, $nc(this->sampleModel)->createCompatibleSampleModel(w, h));
	return $new(IntegerInterleavedRaster, sm, $$new($Point, 0, 0));
}

$WritableRaster* IntegerInterleavedRaster::createCompatibleWritableRaster() {
	return createCompatibleWritableRaster(this->width, this->height);
}

$String* IntegerInterleavedRaster::toString() {
	return $new($String, $$str({"IntegerInterleavedRaster: width = "_s, $$str(this->width), " height = "_s, $$str(this->height), " #Bands = "_s, $$str(this->numBands), " xOff = "_s, $$str(this->sampleModelTranslateX), " yOff = "_s, $$str(this->sampleModelTranslateY), " dataOffset[0] "_s, $$str($nc(this->dataOffsets)->get(0))}));
}

IntegerInterleavedRaster::IntegerInterleavedRaster() {
}

$Class* IntegerInterleavedRaster::load$($String* name, bool initialize) {
	$loadClass(IntegerInterleavedRaster, name, initialize, &_IntegerInterleavedRaster_ClassInfo_, allocate$IntegerInterleavedRaster);
	return class$;
}

$Class* IntegerInterleavedRaster::class$ = nullptr;

		} // image
	} // awt
} // sun