#include <java/awt/image/WritableRaster.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RasterFormatException.h>
#include <java/awt/image/SampleModel.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $Raster = ::java::awt::image::Raster;
using $RasterFormatException = ::java::awt::image::RasterFormatException;
using $SampleModel = ::java::awt::image::SampleModel;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _WritableRaster_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/Point;)V", nullptr, $PROTECTED, $method(static_cast<void(WritableRaster::*)($SampleModel*,$Point*)>(&WritableRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBuffer;Ljava/awt/Point;)V", nullptr, $PROTECTED, $method(static_cast<void(WritableRaster::*)($SampleModel*,$DataBuffer*,$Point*)>(&WritableRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBuffer;Ljava/awt/Rectangle;Ljava/awt/Point;Ljava/awt/image/WritableRaster;)V", nullptr, $PROTECTED, $method(static_cast<void(WritableRaster::*)($SampleModel*,$DataBuffer*,$Rectangle*,$Point*,WritableRaster*)>(&WritableRaster::init$))},
	{"createWritableChild", "(IIIIII[I)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createWritableTranslatedChild", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"getWritableParent", "()Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IILjava/awt/image/Raster;)V", nullptr, $PUBLIC},
	{"setDataElements", "(IIIILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"setPixel", "(II[I)V", nullptr, $PUBLIC},
	{"setPixel", "(II[F)V", nullptr, $PUBLIC},
	{"setPixel", "(II[D)V", nullptr, $PUBLIC},
	{"setPixels", "(IIII[I)V", nullptr, $PUBLIC},
	{"setPixels", "(IIII[F)V", nullptr, $PUBLIC},
	{"setPixels", "(IIII[D)V", nullptr, $PUBLIC},
	{"setRect", "(Ljava/awt/image/Raster;)V", nullptr, $PUBLIC},
	{"setRect", "(IILjava/awt/image/Raster;)V", nullptr, $PUBLIC},
	{"setSample", "(IIII)V", nullptr, $PUBLIC},
	{"setSample", "(IIIF)V", nullptr, $PUBLIC},
	{"setSample", "(IIID)V", nullptr, $PUBLIC},
	{"setSamples", "(IIIII[I)V", nullptr, $PUBLIC},
	{"setSamples", "(IIIII[F)V", nullptr, $PUBLIC},
	{"setSamples", "(IIIII[D)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WritableRaster_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.WritableRaster",
	"java.awt.image.Raster",
	nullptr,
	nullptr,
	_WritableRaster_MethodInfo_
};

$Object* allocate$WritableRaster($Class* clazz) {
	return $of($alloc(WritableRaster));
}

void WritableRaster::init$($SampleModel* sampleModel, $Point* origin) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, var$0, sampleModel);
	$var($DataBuffer, var$1, $nc(sampleModel)->createDataBuffer());
	int32_t var$2 = $nc(origin)->x;
	int32_t var$3 = origin->y;
	int32_t var$4 = sampleModel->getWidth();
	WritableRaster::init$(var$0, var$1, $$new($Rectangle, var$2, var$3, var$4, sampleModel->getHeight()), origin, nullptr);
}

void WritableRaster::init$($SampleModel* sampleModel, $DataBuffer* dataBuffer, $Point* origin) {
	int32_t var$0 = $nc(origin)->x;
	int32_t var$1 = origin->y;
	int32_t var$2 = $nc(sampleModel)->getWidth();
	WritableRaster::init$(sampleModel, dataBuffer, $$new($Rectangle, var$0, var$1, var$2, sampleModel->getHeight()), origin, nullptr);
}

void WritableRaster::init$($SampleModel* sampleModel, $DataBuffer* dataBuffer, $Rectangle* aRegion, $Point* sampleModelTranslate, WritableRaster* parent) {
	$Raster::init$(sampleModel, dataBuffer, aRegion, sampleModelTranslate, parent);
}

WritableRaster* WritableRaster::getWritableParent() {
	return $cast(WritableRaster, this->parent);
}

WritableRaster* WritableRaster::createWritableTranslatedChild(int32_t childMinX, int32_t childMinY) {
	return createWritableChild(this->minX, this->minY, this->width, this->height, childMinX, childMinY, nullptr);
}

WritableRaster* WritableRaster::createWritableChild(int32_t parentX, int32_t parentY, int32_t w, int32_t h, int32_t childMinX, int32_t childMinY, $ints* bandList) {
	$useLocalCurrentObjectStackCache();
	if (parentX < this->minX) {
		$throwNew($RasterFormatException, "parentX lies outside raster"_s);
	}
	if (parentY < this->minY) {
		$throwNew($RasterFormatException, "parentY lies outside raster"_s);
	}
	if ((parentX + w < parentX) || (parentX + w > this->width + this->minX)) {
		$throwNew($RasterFormatException, "(parentX + width) is outside raster"_s);
	}
	if ((parentY + h < parentY) || (parentY + h > this->height + this->minY)) {
		$throwNew($RasterFormatException, "(parentY + height) is outside raster"_s);
	}
	$var($SampleModel, sm, nullptr);
	if (bandList != nullptr) {
		$assign(sm, $nc(this->sampleModel)->createSubsetSampleModel(bandList));
	} else {
		$assign(sm, this->sampleModel);
	}
	int32_t deltaX = childMinX - parentX;
	int32_t deltaY = childMinY - parentY;
	$var($SampleModel, var$0, sm);
	$var($DataBuffer, var$1, getDataBuffer());
	$var($Rectangle, var$2, $new($Rectangle, childMinX, childMinY, w, h));
	return $new(WritableRaster, var$0, var$1, var$2, $$new($Point, this->sampleModelTranslateX + deltaX, this->sampleModelTranslateY + deltaY), this);
}

void WritableRaster::setDataElements(int32_t x, int32_t y, Object$* inData) {
	$nc(this->sampleModel)->setDataElements(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, inData, this->dataBuffer);
}

void WritableRaster::setDataElements(int32_t x, int32_t y, $Raster* inRaster) {
	int32_t dstOffX = x + $nc(inRaster)->getMinX();
	int32_t dstOffY = y + inRaster->getMinY();
	int32_t width = inRaster->getWidth();
	int32_t height = inRaster->getHeight();
	if ((dstOffX < this->minX) || (dstOffY < this->minY) || (dstOffX + width > this->minX + this->width) || (dstOffY + height > this->minY + this->height)) {
		$throwNew($ArrayIndexOutOfBoundsException, "Coordinate out of bounds!"_s);
	}
	int32_t srcOffX = inRaster->getMinX();
	int32_t srcOffY = inRaster->getMinY();
	$var($Object, tdata, nullptr);
	for (int32_t startY = 0; startY < height; ++startY) {
		$assign(tdata, inRaster->getDataElements(srcOffX, srcOffY + startY, width, 1, tdata));
		setDataElements(dstOffX, dstOffY + startY, width, 1, tdata);
	}
}

void WritableRaster::setDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* inData) {
	$nc(this->sampleModel)->setDataElements(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, w, h, inData, this->dataBuffer);
}

void WritableRaster::setRect($Raster* srcRaster) {
	setRect(0, 0, srcRaster);
}

void WritableRaster::setRect(int32_t dx, int32_t dy, $Raster* srcRaster) {
	$useLocalCurrentObjectStackCache();
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
	if (dstOffX + width > this->minX + this->width) {
		width = this->minX + this->width - dstOffX;
	}
	if (dstOffY + height > this->minY + this->height) {
		height = this->minY + this->height - dstOffY;
	}
	if (width <= 0 || height <= 0) {
		return;
	}
	{
		$var($ints, iData, nullptr)
		$var($floats, fData, nullptr)
		$var($doubles, dData, nullptr)
		switch ($nc($(srcRaster->getSampleModel()))->getDataType()) {
		case $DataBuffer::TYPE_BYTE:
			{}
		case $DataBuffer::TYPE_SHORT:
			{}
		case $DataBuffer::TYPE_USHORT:
			{}
		case $DataBuffer::TYPE_INT:
			{
				$assign(iData, nullptr);
				for (int32_t startY = 0; startY < height; ++startY) {
					$assign(iData, srcRaster->getPixels(srcOffX, srcOffY + startY, width, 1, iData));
					setPixels(dstOffX, dstOffY + startY, width, 1, iData);
				}
				break;
			}
		case $DataBuffer::TYPE_FLOAT:
			{
				$assign(fData, nullptr);
				for (int32_t startY = 0; startY < height; ++startY) {
					$assign(fData, srcRaster->getPixels(srcOffX, srcOffY + startY, width, 1, fData));
					setPixels(dstOffX, dstOffY + startY, width, 1, fData);
				}
				break;
			}
		case $DataBuffer::TYPE_DOUBLE:
			{
				$assign(dData, nullptr);
				for (int32_t startY = 0; startY < height; ++startY) {
					$assign(dData, srcRaster->getPixels(srcOffX, srcOffY + startY, width, 1, dData));
					setPixels(dstOffX, dstOffY + startY, width, 1, dData);
				}
				break;
			}
		}
	}
}

void WritableRaster::setPixel(int32_t x, int32_t y, $ints* iArray) {
	$nc(this->sampleModel)->setPixel(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, iArray, this->dataBuffer);
}

void WritableRaster::setPixel(int32_t x, int32_t y, $floats* fArray) {
	$nc(this->sampleModel)->setPixel(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, fArray, this->dataBuffer);
}

void WritableRaster::setPixel(int32_t x, int32_t y, $doubles* dArray) {
	$nc(this->sampleModel)->setPixel(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, dArray, this->dataBuffer);
}

void WritableRaster::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray) {
	$nc(this->sampleModel)->setPixels(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, w, h, iArray, this->dataBuffer);
}

void WritableRaster::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $floats* fArray) {
	$nc(this->sampleModel)->setPixels(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, w, h, fArray, this->dataBuffer);
}

void WritableRaster::setPixels(int32_t x, int32_t y, int32_t w, int32_t h, $doubles* dArray) {
	$nc(this->sampleModel)->setPixels(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, w, h, dArray, this->dataBuffer);
}

void WritableRaster::setSample(int32_t x, int32_t y, int32_t b, int32_t s) {
	$nc(this->sampleModel)->setSample(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, b, s, this->dataBuffer);
}

void WritableRaster::setSample(int32_t x, int32_t y, int32_t b, float s) {
	$nc(this->sampleModel)->setSample(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, b, s, this->dataBuffer);
}

void WritableRaster::setSample(int32_t x, int32_t y, int32_t b, double s) {
	$nc(this->sampleModel)->setSample(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, b, s, this->dataBuffer);
}

void WritableRaster::setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray) {
	$nc(this->sampleModel)->setSamples(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, w, h, b, iArray, this->dataBuffer);
}

void WritableRaster::setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $floats* fArray) {
	$nc(this->sampleModel)->setSamples(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, w, h, b, fArray, this->dataBuffer);
}

void WritableRaster::setSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $doubles* dArray) {
	$nc(this->sampleModel)->setSamples(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, w, h, b, dArray, this->dataBuffer);
}

WritableRaster::WritableRaster() {
}

$Class* WritableRaster::load$($String* name, bool initialize) {
	$loadClass(WritableRaster, name, initialize, &_WritableRaster_ClassInfo_, allocate$WritableRaster);
	return class$;
}

$Class* WritableRaster::class$ = nullptr;

		} // image
	} // awt
} // java