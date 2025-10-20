#include <java/awt/image/Raster.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/BandedSampleModel.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DataBufferUShort.h>
#include <java/awt/image/MultiPixelPackedSampleModel.h>
#include <java/awt/image/PixelInterleavedSampleModel.h>
#include <java/awt/image/RasterFormatException.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/ByteBandedRaster.h>
#include <sun/awt/image/ByteComponentRaster.h>
#include <sun/awt/image/ByteInterleavedRaster.h>
#include <sun/awt/image/BytePackedRaster.h>
#include <sun/awt/image/IntegerComponentRaster.h>
#include <sun/awt/image/IntegerInterleavedRaster.h>
#include <sun/awt/image/ShortBandedRaster.h>
#include <sun/awt/image/ShortComponentRaster.h>
#include <sun/awt/image/ShortInterleavedRaster.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef TYPE_BYTE
#undef TYPE_INT
#undef TYPE_USHORT

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $BandedSampleModel = ::java::awt::image::BandedSampleModel;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $MultiPixelPackedSampleModel = ::java::awt::image::MultiPixelPackedSampleModel;
using $PixelInterleavedSampleModel = ::java::awt::image::PixelInterleavedSampleModel;
using $RasterFormatException = ::java::awt::image::RasterFormatException;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteBandedRaster = ::sun::awt::image::ByteBandedRaster;
using $ByteComponentRaster = ::sun::awt::image::ByteComponentRaster;
using $ByteInterleavedRaster = ::sun::awt::image::ByteInterleavedRaster;
using $BytePackedRaster = ::sun::awt::image::BytePackedRaster;
using $IntegerComponentRaster = ::sun::awt::image::IntegerComponentRaster;
using $IntegerInterleavedRaster = ::sun::awt::image::IntegerInterleavedRaster;
using $ShortBandedRaster = ::sun::awt::image::ShortBandedRaster;
using $ShortComponentRaster = ::sun::awt::image::ShortComponentRaster;
using $ShortInterleavedRaster = ::sun::awt::image::ShortInterleavedRaster;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;

namespace java {
	namespace awt {
		namespace image {

$FieldInfo _Raster_FieldInfo_[] = {
	{"sampleModel", "Ljava/awt/image/SampleModel;", nullptr, $PROTECTED, $field(Raster, sampleModel)},
	{"dataBuffer", "Ljava/awt/image/DataBuffer;", nullptr, $PROTECTED, $field(Raster, dataBuffer)},
	{"minX", "I", nullptr, $PROTECTED, $field(Raster, minX)},
	{"minY", "I", nullptr, $PROTECTED, $field(Raster, minY)},
	{"width", "I", nullptr, $PROTECTED, $field(Raster, width)},
	{"height", "I", nullptr, $PROTECTED, $field(Raster, height)},
	{"sampleModelTranslateX", "I", nullptr, $PROTECTED, $field(Raster, sampleModelTranslateX)},
	{"sampleModelTranslateY", "I", nullptr, $PROTECTED, $field(Raster, sampleModelTranslateY)},
	{"numBands", "I", nullptr, $PROTECTED, $field(Raster, numBands)},
	{"numDataElements", "I", nullptr, $PROTECTED, $field(Raster, numDataElements)},
	{"parent", "Ljava/awt/image/Raster;", nullptr, $PROTECTED, $field(Raster, parent)},
	{}
};

$MethodInfo _Raster_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/Point;)V", nullptr, $PROTECTED, $method(static_cast<void(Raster::*)($SampleModel*,$Point*)>(&Raster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBuffer;Ljava/awt/Point;)V", nullptr, $PROTECTED, $method(static_cast<void(Raster::*)($SampleModel*,$DataBuffer*,$Point*)>(&Raster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBuffer;Ljava/awt/Rectangle;Ljava/awt/Point;Ljava/awt/image/Raster;)V", nullptr, $PROTECTED, $method(static_cast<void(Raster::*)($SampleModel*,$DataBuffer*,$Rectangle*,$Point*,Raster*)>(&Raster::init$))},
	{"createBandedRaster", "(IIIILjava/awt/Point;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WritableRaster*(*)(int32_t,int32_t,int32_t,int32_t,$Point*)>(&Raster::createBandedRaster))},
	{"createBandedRaster", "(IIII[I[ILjava/awt/Point;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WritableRaster*(*)(int32_t,int32_t,int32_t,int32_t,$ints*,$ints*,$Point*)>(&Raster::createBandedRaster))},
	{"createBandedRaster", "(Ljava/awt/image/DataBuffer;III[I[ILjava/awt/Point;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WritableRaster*(*)($DataBuffer*,int32_t,int32_t,int32_t,$ints*,$ints*,$Point*)>(&Raster::createBandedRaster))},
	{"createChild", "(IIIIII[I)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "()Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "(Ljava/awt/Rectangle;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "(IIII)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createInterleavedRaster", "(IIIILjava/awt/Point;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WritableRaster*(*)(int32_t,int32_t,int32_t,int32_t,$Point*)>(&Raster::createInterleavedRaster))},
	{"createInterleavedRaster", "(IIIII[ILjava/awt/Point;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WritableRaster*(*)(int32_t,int32_t,int32_t,int32_t,int32_t,$ints*,$Point*)>(&Raster::createInterleavedRaster))},
	{"createInterleavedRaster", "(Ljava/awt/image/DataBuffer;IIII[ILjava/awt/Point;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WritableRaster*(*)($DataBuffer*,int32_t,int32_t,int32_t,int32_t,$ints*,$Point*)>(&Raster::createInterleavedRaster))},
	{"createPackedRaster", "(III[ILjava/awt/Point;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WritableRaster*(*)(int32_t,int32_t,int32_t,$ints*,$Point*)>(&Raster::createPackedRaster))},
	{"createPackedRaster", "(IIIIILjava/awt/Point;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WritableRaster*(*)(int32_t,int32_t,int32_t,int32_t,int32_t,$Point*)>(&Raster::createPackedRaster))},
	{"createPackedRaster", "(Ljava/awt/image/DataBuffer;III[ILjava/awt/Point;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WritableRaster*(*)($DataBuffer*,int32_t,int32_t,int32_t,$ints*,$Point*)>(&Raster::createPackedRaster))},
	{"createPackedRaster", "(Ljava/awt/image/DataBuffer;IIILjava/awt/Point;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WritableRaster*(*)($DataBuffer*,int32_t,int32_t,int32_t,$Point*)>(&Raster::createPackedRaster))},
	{"createRaster", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBuffer;Ljava/awt/Point;)Ljava/awt/image/Raster;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Raster*(*)($SampleModel*,$DataBuffer*,$Point*)>(&Raster::createRaster))},
	{"createTranslatedChild", "(II)Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"createWritableRaster", "(Ljava/awt/image/SampleModel;Ljava/awt/Point;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WritableRaster*(*)($SampleModel*,$Point*)>(&Raster::createWritableRaster))},
	{"createWritableRaster", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBuffer;Ljava/awt/Point;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WritableRaster*(*)($SampleModel*,$DataBuffer*,$Point*)>(&Raster::createWritableRaster))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getDataBuffer", "()Ljava/awt/image/DataBuffer;", nullptr, $PUBLIC},
	{"getDataElements", "(IILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getDataElements", "(IIIILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getHeight", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Raster::*)()>(&Raster::getHeight))},
	{"getMinX", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Raster::*)()>(&Raster::getMinX))},
	{"getMinY", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Raster::*)()>(&Raster::getMinY))},
	{"getNumBands", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Raster::*)()>(&Raster::getNumBands))},
	{"getNumDataElements", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Raster::*)()>(&Raster::getNumDataElements))},
	{"getParent", "()Ljava/awt/image/Raster;", nullptr, $PUBLIC},
	{"getPixel", "(II[I)[I", nullptr, $PUBLIC},
	{"getPixel", "(II[F)[F", nullptr, $PUBLIC},
	{"getPixel", "(II[D)[D", nullptr, $PUBLIC},
	{"getPixels", "(IIII[I)[I", nullptr, $PUBLIC},
	{"getPixels", "(IIII[F)[F", nullptr, $PUBLIC},
	{"getPixels", "(IIII[D)[D", nullptr, $PUBLIC},
	{"getSample", "(III)I", nullptr, $PUBLIC},
	{"getSampleDouble", "(III)D", nullptr, $PUBLIC},
	{"getSampleFloat", "(III)F", nullptr, $PUBLIC},
	{"getSampleModel", "()Ljava/awt/image/SampleModel;", nullptr, $PUBLIC},
	{"getSampleModelTranslateX", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Raster::*)()>(&Raster::getSampleModelTranslateX))},
	{"getSampleModelTranslateY", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Raster::*)()>(&Raster::getSampleModelTranslateY))},
	{"getSamples", "(IIIII[I)[I", nullptr, $PUBLIC},
	{"getSamples", "(IIIII[F)[F", nullptr, $PUBLIC},
	{"getSamples", "(IIIII[D)[D", nullptr, $PUBLIC},
	{"getTransferType", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Raster::*)()>(&Raster::getTransferType))},
	{"getWidth", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(Raster::*)()>(&Raster::getWidth))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Raster::initIDs))},
	{}
};

#define _METHOD_INDEX_initIDs 49

$ClassInfo _Raster_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.image.Raster",
	"java.lang.Object",
	nullptr,
	_Raster_FieldInfo_,
	_Raster_MethodInfo_
};

$Object* allocate$Raster($Class* clazz) {
	return $of($alloc(Raster));
}

void Raster::initIDs() {
	$init(Raster);
	$prepareNativeStatic(Raster, initIDs, void);
	$invokeNativeStatic(Raster, initIDs);
	$finishNativeStatic();
}

$WritableRaster* Raster::createInterleavedRaster(int32_t dataType, int32_t w, int32_t h, int32_t bands, $Point* location) {
	$init(Raster);
	$useLocalCurrentObjectStackCache();
	if (w <= 0 || h <= 0) {
		$throwNew($IllegalArgumentException, "w and h must be > 0"_s);
	}
	int64_t lsz = (int64_t)w * h;
	if (lsz > $Integer::MAX_VALUE) {
		$throwNew($IllegalArgumentException, $$str({"Dimensions (width="_s, $$str(w), " height="_s, $$str(h), ") are too large"_s}));
	}
	$var($ints, bandOffsets, $new($ints, bands));
	for (int32_t i = 0; i < bands; ++i) {
		bandOffsets->set(i, i);
	}
	return createInterleavedRaster(dataType, w, h, w * bands, bands, bandOffsets, location);
}

$WritableRaster* Raster::createInterleavedRaster(int32_t dataType, int32_t w, int32_t h, int32_t scanlineStride, int32_t pixelStride, $ints* bandOffsets, $Point* location$renamed) {
	$init(Raster);
	$useLocalCurrentObjectStackCache();
	$var($Point, location, location$renamed);
	$var($DataBuffer, d, nullptr);
	if (w <= 0 || h <= 0) {
		$throwNew($IllegalArgumentException, "w and h must be > 0"_s);
	}
	int64_t lsz = (int64_t)w * h;
	if (lsz > $Integer::MAX_VALUE) {
		$throwNew($IllegalArgumentException, $$str({"Dimensions (width="_s, $$str(w), " height="_s, $$str(h), ") are too large"_s}));
	}
	if (pixelStride < 0) {
		$throwNew($IllegalArgumentException, "pixelStride is < 0"_s);
	}
	if (scanlineStride < 0) {
		$throwNew($IllegalArgumentException, "scanlineStride is < 0"_s);
	}
	int32_t size = scanlineStride * (h - 1) + pixelStride * w;
	if (location == nullptr) {
		$assign(location, $new($Point, 0, 0));
	} else {
		bool var$1 = (w + $nc(location)->getX() > $Integer::MAX_VALUE);
		if (var$1 || (h + $nc(location)->getY() > $Integer::MAX_VALUE)) {
			$throwNew($RasterFormatException, "location.x + w and location.y + h  cannot exceed Integer.MAX_VALUE"_s);
		}
	}
	switch (dataType) {
	case $DataBuffer::TYPE_BYTE:
		{
			$assign(d, $new($DataBufferByte, size));
			break;
		}
	case $DataBuffer::TYPE_USHORT:
		{
			$assign(d, $new($DataBufferUShort, size));
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unsupported data type "_s, $$str(dataType)}));
		}
	}
	return createInterleavedRaster(d, w, h, scanlineStride, pixelStride, bandOffsets, location);
}

$WritableRaster* Raster::createBandedRaster(int32_t dataType, int32_t w, int32_t h, int32_t bands, $Point* location) {
	$init(Raster);
	$useLocalCurrentObjectStackCache();
	if (bands < 1) {
		$throwNew($ArrayIndexOutOfBoundsException, $$str({"Number of bands ("_s, $$str(bands), ") must be greater than 0"_s}));
	}
	$var($ints, bankIndices, $new($ints, bands));
	$var($ints, bandOffsets, $new($ints, bands));
	for (int32_t i = 0; i < bands; ++i) {
		bankIndices->set(i, i);
		bandOffsets->set(i, 0);
	}
	return createBandedRaster(dataType, w, h, w, bankIndices, bandOffsets, location);
}

$WritableRaster* Raster::createBandedRaster(int32_t dataType, int32_t w, int32_t h, int32_t scanlineStride, $ints* bankIndices, $ints* bandOffsets, $Point* location) {
	$init(Raster);
	$useLocalCurrentObjectStackCache();
	$var($DataBuffer, d, nullptr);
	int32_t bands = $nc(bandOffsets)->length;
	if (w <= 0 || h <= 0) {
		$throwNew($IllegalArgumentException, "w and h must be positive"_s);
	}
	int64_t lsz = (int64_t)w * h;
	if (lsz > $Integer::MAX_VALUE) {
		$throwNew($IllegalArgumentException, $$str({"Dimensions (width="_s, $$str(w), " height="_s, $$str(h), ") are too large"_s}));
	}
	if (bankIndices == nullptr) {
		$throwNew($ArrayIndexOutOfBoundsException, "Bank indices array is null"_s);
	}
	if (bandOffsets == nullptr) {
		$throwNew($ArrayIndexOutOfBoundsException, "Band offsets array is null"_s);
	}
	if (location != nullptr) {
		bool var$0 = (w + location->getX() > $Integer::MAX_VALUE);
		if (var$0 || (h + location->getY() > $Integer::MAX_VALUE)) {
			$throwNew($IllegalArgumentException, "location.x + w and location.y + h  cannot exceed Integer.MAX_VALUE"_s);
		}
	}
	int32_t maxBank = $nc(bankIndices)->get(0);
	int32_t maxBandOff = bandOffsets->get(0);
	for (int32_t i = 1; i < bands; ++i) {
		if (bankIndices->get(i) > maxBank) {
			maxBank = bankIndices->get(i);
		}
		if (bandOffsets->get(i) > maxBandOff) {
			maxBandOff = bandOffsets->get(i);
		}
	}
	int32_t banks = maxBank + 1;
	int32_t size = maxBandOff + scanlineStride * (h - 1) + w;
	switch (dataType) {
	case $DataBuffer::TYPE_BYTE:
		{
			$assign(d, $new($DataBufferByte, size, banks));
			break;
		}
	case $DataBuffer::TYPE_USHORT:
		{
			$assign(d, $new($DataBufferUShort, size, banks));
			break;
		}
	case $DataBuffer::TYPE_INT:
		{
			$assign(d, $new($DataBufferInt, size, banks));
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unsupported data type "_s, $$str(dataType)}));
		}
	}
	return createBandedRaster(d, w, h, scanlineStride, bankIndices, bandOffsets, location);
}

$WritableRaster* Raster::createPackedRaster(int32_t dataType, int32_t w, int32_t h, $ints* bandMasks, $Point* location) {
	$init(Raster);
	$useLocalCurrentObjectStackCache();
	$var($DataBuffer, d, nullptr);
	switch (dataType) {
	case $DataBuffer::TYPE_BYTE:
		{
			$assign(d, $new($DataBufferByte, w * h));
			break;
		}
	case $DataBuffer::TYPE_USHORT:
		{
			$assign(d, $new($DataBufferUShort, w * h));
			break;
		}
	case $DataBuffer::TYPE_INT:
		{
			$assign(d, $new($DataBufferInt, w * h));
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unsupported data type "_s, $$str(dataType)}));
		}
	}
	return createPackedRaster(d, w, h, w, bandMasks, location);
}

$WritableRaster* Raster::createPackedRaster(int32_t dataType, int32_t w, int32_t h, int32_t bands, int32_t bitsPerBand, $Point* location) {
	$init(Raster);
	$useLocalCurrentObjectStackCache();
	$var($DataBuffer, d, nullptr);
	if (bands <= 0) {
		$throwNew($IllegalArgumentException, $$str({"Number of bands ("_s, $$str(bands), ") must be greater than 0"_s}));
	}
	if (bitsPerBand <= 0) {
		$throwNew($IllegalArgumentException, $$str({"Bits per band ("_s, $$str(bitsPerBand), ") must be greater than 0"_s}));
	}
	if (bands != 1) {
		$var($ints, masks, $new($ints, bands));
		int32_t mask = ($sl(1, bitsPerBand)) - 1;
		int32_t shift = (bands - 1) * bitsPerBand;
		if (shift + bitsPerBand > $DataBuffer::getDataTypeSize(dataType)) {
			$throwNew($IllegalArgumentException, $$str({"bitsPerBand("_s, $$str(bitsPerBand), ") * bands is  greater than data type size."_s}));
		}
		switch (dataType) {
		case $DataBuffer::TYPE_BYTE:
			{}
		case $DataBuffer::TYPE_USHORT:
			{}
		case $DataBuffer::TYPE_INT:
			{
				break;
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"Unsupported data type "_s, $$str(dataType)}));
			}
		}
		for (int32_t i = 0; i < bands; ++i) {
			masks->set(i, $sl(mask, shift));
			shift = shift - bitsPerBand;
		}
		return createPackedRaster(dataType, w, h, masks, location);
	} else {
		double fw = (double)w;
		switch (dataType) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(d, $new($DataBufferByte, $cast(int32_t, ($Math::ceil(fw / ($div(8, bitsPerBand))))) * h));
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(d, $new($DataBufferUShort, $cast(int32_t, ($Math::ceil(fw / ($div(16, bitsPerBand))))) * h));
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				$assign(d, $new($DataBufferInt, $cast(int32_t, ($Math::ceil(fw / ($div(32, bitsPerBand))))) * h));
				break;
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"Unsupported data type "_s, $$str(dataType)}));
			}
		}
		return createPackedRaster(d, w, h, bitsPerBand, location);
	}
}

$WritableRaster* Raster::createInterleavedRaster($DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t scanlineStride, int32_t pixelStride, $ints* bandOffsets, $Point* location$renamed) {
	$init(Raster);
	$useLocalCurrentObjectStackCache();
	$var($Point, location, location$renamed);
	if (dataBuffer == nullptr) {
		$throwNew($NullPointerException, "DataBuffer cannot be null"_s);
	}
	if (location == nullptr) {
		$assign(location, $new($Point, 0, 0));
	} else {
		bool var$1 = (w + $nc(location)->getX() > $Integer::MAX_VALUE);
		if (var$1 || (h + $nc(location)->getY() > $Integer::MAX_VALUE)) {
			$throwNew($RasterFormatException, "location.x + w and location.y + h  cannot exceed Integer.MAX_VALUE"_s);
		}
	}
	int32_t dataType = $nc(dataBuffer)->getDataType();
	$var($PixelInterleavedSampleModel, csm, $new($PixelInterleavedSampleModel, dataType, w, h, pixelStride, scanlineStride, bandOffsets));
	switch (dataType) {
	case $DataBuffer::TYPE_BYTE:
		{
			if ($instanceOf($DataBufferByte, dataBuffer)) {
				return $new($ByteInterleavedRaster, csm, $cast($DataBufferByte, dataBuffer), location);
			}
			break;
		}
	case $DataBuffer::TYPE_USHORT:
		{
			if ($instanceOf($DataBufferUShort, dataBuffer)) {
				return $new($ShortInterleavedRaster, csm, $cast($DataBufferUShort, dataBuffer), location);
			}
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unsupported data type "_s, $$str(dataType)}));
		}
	}
	return $new($SunWritableRaster, csm, dataBuffer, location);
}

$WritableRaster* Raster::createBandedRaster($DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t scanlineStride, $ints* bankIndices, $ints* bandOffsets, $Point* location$renamed) {
	$init(Raster);
	$useLocalCurrentObjectStackCache();
	$var($Point, location, location$renamed);
	if (dataBuffer == nullptr) {
		$throwNew($NullPointerException, "DataBuffer cannot be null"_s);
	}
	if (bankIndices == nullptr) {
		$throwNew($NullPointerException, "bankIndices cannot be null"_s);
	}
	if (bandOffsets == nullptr) {
		$throwNew($NullPointerException, "bandOffsets cannot be null"_s);
	}
	if (w <= 0 || h <= 0) {
		$throwNew($IllegalArgumentException, $$str({"Width ("_s, $$str(w), ") and height ("_s, $$str(h), ") must be > 0"_s}));
	}
	if (scanlineStride < 0) {
		$throwNew($IllegalArgumentException, "Scanline stride must be >= 0"_s);
	}
	int32_t bands = $nc(bankIndices)->length;
	if ($nc(bandOffsets)->length != bands) {
		$throwNew($IllegalArgumentException, "bankIndices.length != bandOffsets.length"_s);
	}
	if (location == nullptr) {
		$assign(location, $new($Point, 0, 0));
	} else {
		bool var$1 = (w + $nc(location)->getX() > $Integer::MAX_VALUE);
		if (var$1 || (h + $nc(location)->getY() > $Integer::MAX_VALUE)) {
			$throwNew($RasterFormatException, "location.x + w and location.y + h  cannot exceed Integer.MAX_VALUE"_s);
		}
	}
	int32_t dataType = $nc(dataBuffer)->getDataType();
	$var($BandedSampleModel, bsm, $new($BandedSampleModel, dataType, w, h, scanlineStride, bankIndices, bandOffsets));
	switch (dataType) {
	case $DataBuffer::TYPE_BYTE:
		{
			if ($instanceOf($DataBufferByte, dataBuffer)) {
				return $new($ByteBandedRaster, bsm, $cast($DataBufferByte, dataBuffer), location);
			}
			break;
		}
	case $DataBuffer::TYPE_USHORT:
		{
			if ($instanceOf($DataBufferUShort, dataBuffer)) {
				return $new($ShortBandedRaster, bsm, $cast($DataBufferUShort, dataBuffer), location);
			}
			break;
		}
	case $DataBuffer::TYPE_INT:
		{
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unsupported data type "_s, $$str(dataType)}));
		}
	}
	return $new($SunWritableRaster, bsm, dataBuffer, location);
}

$WritableRaster* Raster::createPackedRaster($DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t scanlineStride, $ints* bandMasks, $Point* location$renamed) {
	$init(Raster);
	$useLocalCurrentObjectStackCache();
	$var($Point, location, location$renamed);
	if (dataBuffer == nullptr) {
		$throwNew($NullPointerException, "DataBuffer cannot be null"_s);
	}
	if (location == nullptr) {
		$assign(location, $new($Point, 0, 0));
	}
	int32_t dataType = $nc(dataBuffer)->getDataType();
	$var($SinglePixelPackedSampleModel, sppsm, $new($SinglePixelPackedSampleModel, dataType, w, h, scanlineStride, bandMasks));
	switch (dataType) {
	case $DataBuffer::TYPE_BYTE:
		{
			if ($instanceOf($DataBufferByte, dataBuffer)) {
				return $new($ByteInterleavedRaster, sppsm, $cast($DataBufferByte, dataBuffer), location);
			}
			break;
		}
	case $DataBuffer::TYPE_USHORT:
		{
			if ($instanceOf($DataBufferUShort, dataBuffer)) {
				return $new($ShortInterleavedRaster, sppsm, $cast($DataBufferUShort, dataBuffer), location);
			}
			break;
		}
	case $DataBuffer::TYPE_INT:
		{
			if ($instanceOf($DataBufferInt, dataBuffer)) {
				return $new($IntegerInterleavedRaster, sppsm, $cast($DataBufferInt, dataBuffer), location);
			}
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Unsupported data type "_s, $$str(dataType)}));
		}
	}
	return $new($SunWritableRaster, sppsm, dataBuffer, location);
}

$WritableRaster* Raster::createPackedRaster($DataBuffer* dataBuffer, int32_t w, int32_t h, int32_t bitsPerPixel, $Point* location$renamed) {
	$init(Raster);
	$useLocalCurrentObjectStackCache();
	$var($Point, location, location$renamed);
	if (dataBuffer == nullptr) {
		$throwNew($NullPointerException, "DataBuffer cannot be null"_s);
	}
	if (location == nullptr) {
		$assign(location, $new($Point, 0, 0));
	}
	int32_t dataType = $nc(dataBuffer)->getDataType();
	if (dataType != $DataBuffer::TYPE_BYTE && dataType != $DataBuffer::TYPE_USHORT && dataType != $DataBuffer::TYPE_INT) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported data type "_s, $$str(dataType)}));
	}
	if (dataBuffer->getNumBanks() != 1) {
		$throwNew($RasterFormatException, "DataBuffer for packed Rasters must only have 1 bank."_s);
	}
	$var($MultiPixelPackedSampleModel, mppsm, $new($MultiPixelPackedSampleModel, dataType, w, h, bitsPerPixel));
	if ($instanceOf($DataBufferByte, dataBuffer) && (bitsPerPixel == 1 || bitsPerPixel == 2 || bitsPerPixel == 4)) {
		return $new($BytePackedRaster, mppsm, $cast($DataBufferByte, dataBuffer), location);
	} else {
		return $new($SunWritableRaster, mppsm, dataBuffer, location);
	}
}

Raster* Raster::createRaster($SampleModel* sm, $DataBuffer* db, $Point* location$renamed) {
	$init(Raster);
	$var($Point, location, location$renamed);
	if ((sm == nullptr) || (db == nullptr)) {
		$throwNew($NullPointerException, "SampleModel and DataBuffer cannot be null"_s);
	}
	if (location == nullptr) {
		$assign(location, $new($Point, 0, 0));
	}
	int32_t dataType = $nc(sm)->getDataType();
	if ($instanceOf($PixelInterleavedSampleModel, sm)) {
		switch (dataType) {
		case $DataBuffer::TYPE_BYTE:
			{
				if ($instanceOf($DataBufferByte, db)) {
					return $new($ByteInterleavedRaster, sm, $cast($DataBufferByte, db), location);
				}
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				if ($instanceOf($DataBufferUShort, db)) {
					return $new($ShortInterleavedRaster, sm, $cast($DataBufferUShort, db), location);
				}
				break;
			}
		}
	} else if ($instanceOf($SinglePixelPackedSampleModel, sm)) {
		switch (dataType) {
		case $DataBuffer::TYPE_BYTE:
			{
				if ($instanceOf($DataBufferByte, db)) {
					return $new($ByteInterleavedRaster, sm, $cast($DataBufferByte, db), location);
				}
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				if ($instanceOf($DataBufferUShort, db)) {
					return $new($ShortInterleavedRaster, sm, $cast($DataBufferUShort, db), location);
				}
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				if ($instanceOf($DataBufferInt, db)) {
					return $new($IntegerInterleavedRaster, sm, $cast($DataBufferInt, db), location);
				}
				break;
			}
		}
	} else if ($instanceOf($MultiPixelPackedSampleModel, sm) && dataType == $DataBuffer::TYPE_BYTE && $instanceOf($DataBufferByte, db) && sm->getSampleSize(0) < 8) {
		return $new($BytePackedRaster, sm, $cast($DataBufferByte, db), location);
	}
	return $new(Raster, sm, db, location);
}

$WritableRaster* Raster::createWritableRaster($SampleModel* sm, $Point* location$renamed) {
	$init(Raster);
	$useLocalCurrentObjectStackCache();
	$var($Point, location, location$renamed);
	if (location == nullptr) {
		$assign(location, $new($Point, 0, 0));
	}
	return createWritableRaster(sm, $($nc(sm)->createDataBuffer()), location);
}

$WritableRaster* Raster::createWritableRaster($SampleModel* sm, $DataBuffer* db, $Point* location$renamed) {
	$init(Raster);
	$var($Point, location, location$renamed);
	if ((sm == nullptr) || (db == nullptr)) {
		$throwNew($NullPointerException, "SampleModel and DataBuffer cannot be null"_s);
	}
	if (location == nullptr) {
		$assign(location, $new($Point, 0, 0));
	}
	int32_t dataType = $nc(sm)->getDataType();
	if ($instanceOf($PixelInterleavedSampleModel, sm)) {
		switch (dataType) {
		case $DataBuffer::TYPE_BYTE:
			{
				if ($instanceOf($DataBufferByte, db)) {
					return $new($ByteInterleavedRaster, sm, $cast($DataBufferByte, db), location);
				}
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				if ($instanceOf($DataBufferUShort, db)) {
					return $new($ShortInterleavedRaster, sm, $cast($DataBufferUShort, db), location);
				}
				break;
			}
		}
	} else if ($instanceOf($SinglePixelPackedSampleModel, sm)) {
		switch (dataType) {
		case $DataBuffer::TYPE_BYTE:
			{
				if ($instanceOf($DataBufferByte, db)) {
					return $new($ByteInterleavedRaster, sm, $cast($DataBufferByte, db), location);
				}
				break;
			}
		case $DataBuffer::TYPE_USHORT:
			{
				if ($instanceOf($DataBufferUShort, db)) {
					return $new($ShortInterleavedRaster, sm, $cast($DataBufferUShort, db), location);
				}
				break;
			}
		case $DataBuffer::TYPE_INT:
			{
				if ($instanceOf($DataBufferInt, db)) {
					return $new($IntegerInterleavedRaster, sm, $cast($DataBufferInt, db), location);
				}
				break;
			}
		}
	} else if ($instanceOf($MultiPixelPackedSampleModel, sm) && dataType == $DataBuffer::TYPE_BYTE && $instanceOf($DataBufferByte, db) && sm->getSampleSize(0) < 8) {
		return $new($BytePackedRaster, sm, $cast($DataBufferByte, db), location);
	}
	return $new($SunWritableRaster, sm, db, location);
}

void Raster::init$($SampleModel* sampleModel, $Point* origin) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, var$0, sampleModel);
	$var($DataBuffer, var$1, $nc(sampleModel)->createDataBuffer());
	int32_t var$2 = $nc(origin)->x;
	int32_t var$3 = origin->y;
	int32_t var$4 = sampleModel->getWidth();
	Raster::init$(var$0, var$1, $$new($Rectangle, var$2, var$3, var$4, sampleModel->getHeight()), origin, nullptr);
}

void Raster::init$($SampleModel* sampleModel, $DataBuffer* dataBuffer, $Point* origin) {
	int32_t var$0 = $nc(origin)->x;
	int32_t var$1 = origin->y;
	int32_t var$2 = $nc(sampleModel)->getWidth();
	Raster::init$(sampleModel, dataBuffer, $$new($Rectangle, var$0, var$1, var$2, sampleModel->getHeight()), origin, nullptr);
}

void Raster::init$($SampleModel* sampleModel, $DataBuffer* dataBuffer, $Rectangle* aRegion, $Point* sampleModelTranslate, Raster* parent) {
	if ((sampleModel == nullptr) || (dataBuffer == nullptr) || (aRegion == nullptr) || (sampleModelTranslate == nullptr)) {
		$throwNew($NullPointerException, "SampleModel, dataBuffer, aRegion and sampleModelTranslate cannot be null"_s);
	}
	$set(this, sampleModel, sampleModel);
	$set(this, dataBuffer, dataBuffer);
	this->minX = $nc(aRegion)->x;
	this->minY = aRegion->y;
	this->width = aRegion->width;
	this->height = aRegion->height;
	if (this->width <= 0 || this->height <= 0) {
		$throwNew($RasterFormatException, $$str({"negative or zero "_s, ((this->width <= 0) ? "width"_s : "height"_s)}));
	}
	if ((this->minX + this->width) < this->minX) {
		$throwNew($RasterFormatException, "overflow condition for X coordinates of Raster"_s);
	}
	if ((this->minY + this->height) < this->minY) {
		$throwNew($RasterFormatException, "overflow condition for Y coordinates of Raster"_s);
	}
	this->sampleModelTranslateX = $nc(sampleModelTranslate)->x;
	this->sampleModelTranslateY = sampleModelTranslate->y;
	this->numBands = $nc(sampleModel)->getNumBands();
	this->numDataElements = sampleModel->getNumDataElements();
	$set(this, parent, parent);
}

Raster* Raster::getParent() {
	return this->parent;
}

int32_t Raster::getSampleModelTranslateX() {
	return this->sampleModelTranslateX;
}

int32_t Raster::getSampleModelTranslateY() {
	return this->sampleModelTranslateY;
}

$WritableRaster* Raster::createCompatibleWritableRaster() {
	return $new($SunWritableRaster, this->sampleModel, $$new($Point, 0, 0));
}

$WritableRaster* Raster::createCompatibleWritableRaster(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (w <= 0 || h <= 0) {
		$throwNew($RasterFormatException, $$str({"negative "_s, ((w <= 0) ? "width"_s : "height"_s)}));
	}
	$var($SampleModel, sm, $nc(this->sampleModel)->createCompatibleSampleModel(w, h));
	return $new($SunWritableRaster, sm, $$new($Point, 0, 0));
}

$WritableRaster* Raster::createCompatibleWritableRaster($Rectangle* rect) {
	if (rect == nullptr) {
		$throwNew($NullPointerException, "Rect cannot be null"_s);
	}
	return createCompatibleWritableRaster($nc(rect)->x, rect->y, rect->width, rect->height);
}

$WritableRaster* Raster::createCompatibleWritableRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($WritableRaster, ret, createCompatibleWritableRaster(w, h));
	return $nc(ret)->createWritableChild(0, 0, w, h, x, y, nullptr);
}

Raster* Raster::createTranslatedChild(int32_t childMinX, int32_t childMinY) {
	return createChild(this->minX, this->minY, this->width, this->height, childMinX, childMinY, nullptr);
}

Raster* Raster::createChild(int32_t parentX, int32_t parentY, int32_t width, int32_t height, int32_t childMinX, int32_t childMinY, $ints* bandList) {
	$useLocalCurrentObjectStackCache();
	if (parentX < this->minX) {
		$throwNew($RasterFormatException, "parentX lies outside raster"_s);
	}
	if (parentY < this->minY) {
		$throwNew($RasterFormatException, "parentY lies outside raster"_s);
	}
	if ((parentX + width < parentX) || (parentX + width > this->width + this->minX)) {
		$throwNew($RasterFormatException, "(parentX + width) is outside raster"_s);
	}
	if ((parentY + height < parentY) || (parentY + height > this->height + this->minY)) {
		$throwNew($RasterFormatException, "(parentY + height) is outside raster"_s);
	}
	$var($SampleModel, subSampleModel, nullptr);
	if (bandList == nullptr) {
		$assign(subSampleModel, this->sampleModel);
	} else {
		$assign(subSampleModel, $nc(this->sampleModel)->createSubsetSampleModel(bandList));
	}
	int32_t deltaX = childMinX - parentX;
	int32_t deltaY = childMinY - parentY;
	$var($SampleModel, var$0, subSampleModel);
	$var($DataBuffer, var$1, getDataBuffer());
	$var($Rectangle, var$2, $new($Rectangle, childMinX, childMinY, width, height));
	return $new(Raster, var$0, var$1, var$2, $$new($Point, this->sampleModelTranslateX + deltaX, this->sampleModelTranslateY + deltaY), this);
}

$Rectangle* Raster::getBounds() {
	return $new($Rectangle, this->minX, this->minY, this->width, this->height);
}

int32_t Raster::getMinX() {
	return this->minX;
}

int32_t Raster::getMinY() {
	return this->minY;
}

int32_t Raster::getWidth() {
	return this->width;
}

int32_t Raster::getHeight() {
	return this->height;
}

int32_t Raster::getNumBands() {
	return this->numBands;
}

int32_t Raster::getNumDataElements() {
	return $nc(this->sampleModel)->getNumDataElements();
}

int32_t Raster::getTransferType() {
	return $nc(this->sampleModel)->getTransferType();
}

$DataBuffer* Raster::getDataBuffer() {
	return this->dataBuffer;
}

$SampleModel* Raster::getSampleModel() {
	return this->sampleModel;
}

$Object* Raster::getDataElements(int32_t x, int32_t y, Object$* outData) {
	return $of($nc(this->sampleModel)->getDataElements(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, outData, this->dataBuffer));
}

$Object* Raster::getDataElements(int32_t x, int32_t y, int32_t w, int32_t h, Object$* outData) {
	return $of($nc(this->sampleModel)->getDataElements(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, w, h, outData, this->dataBuffer));
}

$ints* Raster::getPixel(int32_t x, int32_t y, $ints* iArray) {
	return $nc(this->sampleModel)->getPixel(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, iArray, this->dataBuffer);
}

$floats* Raster::getPixel(int32_t x, int32_t y, $floats* fArray) {
	return $nc(this->sampleModel)->getPixel(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, fArray, this->dataBuffer);
}

$doubles* Raster::getPixel(int32_t x, int32_t y, $doubles* dArray) {
	return $nc(this->sampleModel)->getPixel(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, dArray, this->dataBuffer);
}

$ints* Raster::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $ints* iArray) {
	return $nc(this->sampleModel)->getPixels(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, w, h, iArray, this->dataBuffer);
}

$floats* Raster::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $floats* fArray) {
	return $nc(this->sampleModel)->getPixels(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, w, h, fArray, this->dataBuffer);
}

$doubles* Raster::getPixels(int32_t x, int32_t y, int32_t w, int32_t h, $doubles* dArray) {
	return $nc(this->sampleModel)->getPixels(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, w, h, dArray, this->dataBuffer);
}

int32_t Raster::getSample(int32_t x, int32_t y, int32_t b) {
	return $nc(this->sampleModel)->getSample(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, b, this->dataBuffer);
}

float Raster::getSampleFloat(int32_t x, int32_t y, int32_t b) {
	return $nc(this->sampleModel)->getSampleFloat(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, b, this->dataBuffer);
}

double Raster::getSampleDouble(int32_t x, int32_t y, int32_t b) {
	return $nc(this->sampleModel)->getSampleDouble(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, b, this->dataBuffer);
}

$ints* Raster::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $ints* iArray) {
	return $nc(this->sampleModel)->getSamples(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, w, h, b, iArray, this->dataBuffer);
}

$floats* Raster::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $floats* fArray) {
	return $nc(this->sampleModel)->getSamples(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, w, h, b, fArray, this->dataBuffer);
}

$doubles* Raster::getSamples(int32_t x, int32_t y, int32_t w, int32_t h, int32_t b, $doubles* dArray) {
	return $nc(this->sampleModel)->getSamples(x - this->sampleModelTranslateX, y - this->sampleModelTranslateY, w, h, b, dArray, this->dataBuffer);
}

void clinit$Raster($Class* class$) {
	{
		$ColorModel::loadLibraries();
		Raster::initIDs();
	}
}

Raster::Raster() {
}

$Class* Raster::load$($String* name, bool initialize) {
	$loadClass(Raster, name, initialize, &_Raster_ClassInfo_, clinit$Raster, allocate$Raster);
	return class$;
}

$Class* Raster::class$ = nullptr;

		} // image
	} // awt
} // java