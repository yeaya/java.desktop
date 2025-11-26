#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>

#include <com/sun/imageio/plugins/common/BogusColorSpace.h>
#include <com/sun/imageio/plugins/common/ImageUtil.h>
#include <com/sun/imageio/plugins/common/SimpleCMYKColorSpace.h>
#include <com/sun/imageio/plugins/tiff/TIFFColorConverter.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferDouble.h>
#include <java/awt/image/DataBufferFloat.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DataBufferShort.h>
#include <java/awt/image/DataBufferUShort.h>
#include <java/awt/image/MultiPixelPackedSampleModel.h>
#include <java/awt/image/PixelInterleavedSampleModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/nio/ByteOrder.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <javax/imageio/stream/MemoryCacheImageInputStream.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef COMPRESSION_JPEG
#undef COMPRESSION_OLD_JPEG
#undef CS_GRAY
#undef CS_LINEAR_RGB
#undef EXTRA_SAMPLES_ASSOCIATED_ALPHA
#undef MAX_VALUE
#undef OPAQUE
#undef PHOTOMETRIC_INTERPRETATION_CIELAB
#undef PHOTOMETRIC_INTERPRETATION_CMYK
#undef PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO
#undef PHOTOMETRIC_INTERPRETATION_Y_CB_CR
#undef SAMPLE_FORMAT_FLOATING_POINT
#undef SAMPLE_FORMAT_SIGNED_INTEGER
#undef SAMPLE_FORMAT_UNSIGNED_INTEGER
#undef TRANSLUCENT
#undef TYPE_BYTE
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT

using $intArray2 = $Array<int32_t, 2>;
using $BogusColorSpace = ::com::sun::imageio::plugins::common::BogusColorSpace;
using $ImageUtil = ::com::sun::imageio::plugins::common::ImageUtil;
using $SimpleCMYKColorSpace = ::com::sun::imageio::plugins::common::SimpleCMYKColorSpace;
using $TIFFColorConverter = ::com::sun::imageio::plugins::tiff::TIFFColorConverter;
using $Rectangle = ::java::awt::Rectangle;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferDouble = ::java::awt::image::DataBufferDouble;
using $DataBufferFloat = ::java::awt::image::DataBufferFloat;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DataBufferShort = ::java::awt::image::DataBufferShort;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $MultiPixelPackedSampleModel = ::java::awt::image::MultiPixelPackedSampleModel;
using $PixelInterleavedSampleModel = ::java::awt::image::PixelInterleavedSampleModel;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $ByteOrder = ::java::nio::ByteOrder;
using $IIOException = ::javax::imageio::IIOException;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;
using $MemoryCacheImageInputStream = ::javax::imageio::stream::MemoryCacheImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFDecompressor_FieldInfo_[] = {
	{"reader", "Ljavax/imageio/ImageReader;", nullptr, $PROTECTED, $field(TIFFDecompressor, reader)},
	{"metadata", "Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PROTECTED, $field(TIFFDecompressor, metadata)},
	{"photometricInterpretation", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, photometricInterpretation)},
	{"compression", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, compression)},
	{"planar", "Z", nullptr, $PROTECTED, $field(TIFFDecompressor, planar)},
	{"planarBand", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, planarBand)},
	{"samplesPerPixel", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, samplesPerPixel)},
	{"bitsPerSample", "[I", nullptr, $PROTECTED, $field(TIFFDecompressor, bitsPerSample)},
	{"sampleFormat", "[I", nullptr, $PROTECTED, $field(TIFFDecompressor, sampleFormat)},
	{"extraSamples", "[I", nullptr, $PROTECTED, $field(TIFFDecompressor, extraSamples)},
	{"colorMap", "[C", nullptr, $PROTECTED, $field(TIFFDecompressor, colorMap)},
	{"stream", "Ljavax/imageio/stream/ImageInputStream;", nullptr, $PROTECTED, $field(TIFFDecompressor, stream)},
	{"offset", "J", nullptr, $PROTECTED, $field(TIFFDecompressor, offset)},
	{"byteCount", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, byteCount)},
	{"srcMinX", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, srcMinX)},
	{"srcMinY", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, srcMinY)},
	{"srcWidth", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, srcWidth)},
	{"srcHeight", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, srcHeight)},
	{"sourceXOffset", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, sourceXOffset)},
	{"dstXOffset", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, dstXOffset)},
	{"sourceYOffset", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, sourceYOffset)},
	{"dstYOffset", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, dstYOffset)},
	{"subsampleX", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, subsampleX)},
	{"subsampleY", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, subsampleY)},
	{"sourceBands", "[I", nullptr, $PROTECTED, $field(TIFFDecompressor, sourceBands)},
	{"destinationBands", "[I", nullptr, $PROTECTED, $field(TIFFDecompressor, destinationBands)},
	{"rawImage", "Ljava/awt/image/BufferedImage;", nullptr, $PROTECTED, $field(TIFFDecompressor, rawImage)},
	{"image", "Ljava/awt/image/BufferedImage;", nullptr, $PROTECTED, $field(TIFFDecompressor, image)},
	{"dstMinX", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, dstMinX)},
	{"dstMinY", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, dstMinY)},
	{"dstWidth", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, dstWidth)},
	{"dstHeight", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, dstHeight)},
	{"activeSrcMinX", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, activeSrcMinX)},
	{"activeSrcMinY", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, activeSrcMinY)},
	{"activeSrcWidth", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, activeSrcWidth)},
	{"activeSrcHeight", "I", nullptr, $PROTECTED, $field(TIFFDecompressor, activeSrcHeight)},
	{"colorConverter", "Lcom/sun/imageio/plugins/tiff/TIFFColorConverter;", nullptr, $PROTECTED, $field(TIFFDecompressor, colorConverter)},
	{"isBilevel", "Z", nullptr, $PRIVATE, $field(TIFFDecompressor, isBilevel)},
	{"isContiguous", "Z", nullptr, $PRIVATE, $field(TIFFDecompressor, isContiguous)},
	{"isImageSimple", "Z", nullptr, $PRIVATE, $field(TIFFDecompressor, isImageSimple)},
	{"adjustBitDepths", "Z", nullptr, $PRIVATE, $field(TIFFDecompressor, adjustBitDepths)},
	{"bitDepthScale", "[[I", nullptr, $PRIVATE, $field(TIFFDecompressor, bitDepthScale)},
	{"isFirstBitDepthTable", "Z", nullptr, $PRIVATE, $field(TIFFDecompressor, isFirstBitDepthTable)},
	{"planarCache", "Z", nullptr, $PRIVATE, $field(TIFFDecompressor, planarCache)},
	{"destBitsPerSampleCache", "[I", nullptr, $PRIVATE, $field(TIFFDecompressor, destBitsPerSampleCache)},
	{"sourceBandsCache", "[I", nullptr, $PRIVATE, $field(TIFFDecompressor, sourceBandsCache)},
	{"bitsPerSampleCache", "[I", nullptr, $PRIVATE, $field(TIFFDecompressor, bitsPerSampleCache)},
	{"destinationBandsCache", "[I", nullptr, $PRIVATE, $field(TIFFDecompressor, destinationBandsCache)},
	{}
};

$MethodInfo _TIFFDecompressor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFDecompressor::*)()>(&TIFFDecompressor::init$))},
	{"areIntArraysEqual", "([I[I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($ints*,$ints*)>(&TIFFDecompressor::areIntArraysEqual))},
	{"areSampleSizesEqual", "(Ljava/awt/image/SampleModel;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($SampleModel*)>(&TIFFDecompressor::areSampleSizesEqual))},
	{"beginDecoding", "()V", nullptr, $PUBLIC},
	{"createComponentCM", "(Ljava/awt/color/ColorSpace;I[IIZZ)Ljava/awt/image/ColorModel;", nullptr, $STATIC, $method(static_cast<$ColorModel*(*)($ColorSpace*,int32_t,$ints*,int32_t,bool,bool)>(&TIFFDecompressor::createComponentCM))},
	{"createInterleavedSM", "(II)Ljava/awt/image/SampleModel;", nullptr, $STATIC, $method(static_cast<$SampleModel*(*)(int32_t,int32_t)>(&TIFFDecompressor::createInterleavedSM))},
	{"createMask", "([II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t)>(&TIFFDecompressor::createMask))},
	{"createRawImage", "()Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC},
	{"decode", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"decodeRaw", "([BIII)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"decodeRaw", "([SIII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"decodeRaw", "([IIII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"decodeRaw", "([FIII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"decodeRaw", "([DIII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getBitsPerPixel", "(Ljava/awt/image/SampleModel;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($SampleModel*)>(&TIFFDecompressor::getBitsPerPixel))},
	{"getDataTypeFromNumBits", "(IZ)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,bool)>(&TIFFDecompressor::getDataTypeFromNumBits))},
	{"getDataTypeSize", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&TIFFDecompressor::getDataTypeSize)), "javax.imageio.IIOException"},
	{"getRawImageType", "()Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC},
	{"getRawImageTypeSpecifier", "(III[I[I[I[C)Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ImageTypeSpecifier*(*)(int32_t,int32_t,int32_t,$ints*,$ints*,$ints*,$chars*)>(&TIFFDecompressor::getRawImageTypeSpecifier))},
	{"isDataBufferBitContiguous", "(Ljava/awt/image/SampleModel;[I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($SampleModel*,$ints*)>(&TIFFDecompressor::isDataBufferBitContiguous)), "javax.imageio.IIOException"},
	{"reformatData", "([BII[S[III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t,$shorts*,$ints*,int32_t,int32_t)>(&TIFFDecompressor::reformatData)), "javax.imageio.IIOException"},
	{"reformatDiscontiguousData", "([B[IIIILjava/awt/image/WritableRaster;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,$ints*,int32_t,int32_t,int32_t,$WritableRaster*)>(&TIFFDecompressor::reformatDiscontiguousData)), "java.io.IOException"},
	{"setActiveSrcHeight", "(I)V", nullptr, $PUBLIC},
	{"setActiveSrcMinX", "(I)V", nullptr, $PUBLIC},
	{"setActiveSrcMinY", "(I)V", nullptr, $PUBLIC},
	{"setActiveSrcWidth", "(I)V", nullptr, $PUBLIC},
	{"setBitsPerSample", "([I)V", nullptr, $PUBLIC},
	{"setByteCount", "(I)V", nullptr, $PUBLIC},
	{"setColorConverter", "(Lcom/sun/imageio/plugins/tiff/TIFFColorConverter;)V", nullptr, $PUBLIC},
	{"setColorMap", "([C)V", nullptr, $PUBLIC},
	{"setCompression", "(I)V", nullptr, $PUBLIC},
	{"setDestinationBands", "([I)V", nullptr, $PUBLIC},
	{"setDstHeight", "(I)V", nullptr, $PUBLIC},
	{"setDstMinX", "(I)V", nullptr, $PUBLIC},
	{"setDstMinY", "(I)V", nullptr, $PUBLIC},
	{"setDstWidth", "(I)V", nullptr, $PUBLIC},
	{"setDstXOffset", "(I)V", nullptr, $PUBLIC},
	{"setDstYOffset", "(I)V", nullptr, $PUBLIC},
	{"setExtraSamples", "([I)V", nullptr, $PUBLIC},
	{"setImage", "(Ljava/awt/image/BufferedImage;)V", nullptr, $PUBLIC},
	{"setMetadata", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC},
	{"setOffset", "(J)V", nullptr, $PUBLIC},
	{"setPhotometricInterpretation", "(I)V", nullptr, $PUBLIC},
	{"setPlanar", "(Z)V", nullptr, $PUBLIC},
	{"setPlanarBand", "(I)V", nullptr, $PUBLIC},
	{"setReader", "(Ljavax/imageio/ImageReader;)V", nullptr, $PUBLIC},
	{"setSampleFormat", "([I)V", nullptr, $PUBLIC},
	{"setSamplesPerPixel", "(I)V", nullptr, $PUBLIC},
	{"setSourceBands", "([I)V", nullptr, $PUBLIC},
	{"setSourceXOffset", "(I)V", nullptr, $PUBLIC},
	{"setSourceYOffset", "(I)V", nullptr, $PUBLIC},
	{"setSrcHeight", "(I)V", nullptr, $PUBLIC},
	{"setSrcMinX", "(I)V", nullptr, $PUBLIC},
	{"setSrcMinY", "(I)V", nullptr, $PUBLIC},
	{"setSrcWidth", "(I)V", nullptr, $PUBLIC},
	{"setStream", "(Ljavax/imageio/stream/ImageInputStream;)V", nullptr, $PUBLIC},
	{"setSubsampleX", "(I)V", nullptr, $PUBLIC},
	{"setSubsampleY", "(I)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFDecompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.imageio.plugins.tiff.TIFFDecompressor",
	"java.lang.Object",
	nullptr,
	_TIFFDecompressor_FieldInfo_,
	_TIFFDecompressor_MethodInfo_
};

$Object* allocate$TIFFDecompressor($Class* clazz) {
	return $of($alloc(TIFFDecompressor));
}

void TIFFDecompressor::init$() {
	this->planarBand = 0;
	$set(this, sampleFormat, $new($ints, {$BaselineTIFFTagSet::SAMPLE_FORMAT_UNSIGNED_INTEGER}));
	this->isFirstBitDepthTable = true;
	this->planarCache = false;
	$set(this, destBitsPerSampleCache, nullptr);
	$set(this, sourceBandsCache, nullptr);
	$set(this, bitsPerSampleCache, nullptr);
	$set(this, destinationBandsCache, nullptr);
}

$SampleModel* TIFFDecompressor::createInterleavedSM(int32_t dataType, int32_t numBands) {
	$var($ints, bandOffsets, $new($ints, numBands));
	for (int32_t i = 0; i < numBands; ++i) {
		bandOffsets->set(i, i);
	}
	return $new($PixelInterleavedSampleModel, dataType, 1, 1, numBands, numBands, bandOffsets);
}

$ColorModel* TIFFDecompressor::createComponentCM($ColorSpace* colorSpace, int32_t numBands, $ints* bitsPerSample, int32_t dataType, bool hasAlpha, bool isAlphaPremultiplied) {
	int32_t transparency = hasAlpha ? $Transparency::TRANSLUCENT : $Transparency::OPAQUE;
	return $new($ComponentColorModel, colorSpace, bitsPerSample, hasAlpha, isAlphaPremultiplied, transparency, dataType);
}

int32_t TIFFDecompressor::createMask($ints* bitsPerSample, int32_t band) {
	int32_t mask = ($sl(1, $nc(bitsPerSample)->get(band))) - 1;
	for (int32_t i = band + 1; i < bitsPerSample->length; ++i) {
		mask <<= bitsPerSample->get(i);
	}
	return mask;
}

int32_t TIFFDecompressor::getDataTypeFromNumBits(int32_t numBits, bool isSigned) {
	int32_t dataType = 0;
	if (numBits <= 8) {
		dataType = $DataBuffer::TYPE_BYTE;
	} else if (numBits <= 16) {
		dataType = isSigned ? $DataBuffer::TYPE_SHORT : $DataBuffer::TYPE_USHORT;
	} else {
		dataType = $DataBuffer::TYPE_INT;
	}
	return dataType;
}

bool TIFFDecompressor::areIntArraysEqual($ints* a, $ints* b) {
	if (a == nullptr || b == nullptr) {
		if (a == nullptr && b == nullptr) {
			return true;
		} else {
			return false;
		}
	}
	if ($nc(a)->length != $nc(b)->length) {
		return false;
	}
	int32_t length = $nc(a)->length;
	for (int32_t i = 0; i < length; ++i) {
		if (a->get(i) != $nc(b)->get(i)) {
			return false;
		}
	}
	return true;
}

int32_t TIFFDecompressor::getDataTypeSize(int32_t dataType) {
	$useLocalCurrentObjectStackCache();
	int32_t dataTypeSize = 0;
	switch (dataType) {
	case $DataBuffer::TYPE_BYTE:
		{
			dataTypeSize = 8;
			break;
		}
	case $DataBuffer::TYPE_SHORT:
		{}
	case $DataBuffer::TYPE_USHORT:
		{
			dataTypeSize = 16;
			break;
		}
	case $DataBuffer::TYPE_INT:
		{}
	case $DataBuffer::TYPE_FLOAT:
		{
			dataTypeSize = 32;
			break;
		}
	case $DataBuffer::TYPE_DOUBLE:
		{
			dataTypeSize = 64;
			break;
		}
	default:
		{
			$throwNew($IIOException, $$str({"Unknown data type "_s, $$str(dataType)}));
		}
	}
	return dataTypeSize;
}

int32_t TIFFDecompressor::getBitsPerPixel($SampleModel* sm) {
	int32_t bitsPerPixel = 0;
	$var($ints, sampleSize, $nc(sm)->getSampleSize());
	int32_t numBands = $nc(sampleSize)->length;
	for (int32_t i = 0; i < numBands; ++i) {
		bitsPerPixel += sampleSize->get(i);
	}
	return bitsPerPixel;
}

bool TIFFDecompressor::areSampleSizesEqual($SampleModel* sm) {
	bool allSameSize = true;
	$var($ints, sampleSize, $nc(sm)->getSampleSize());
	int32_t sampleSize0 = $nc(sampleSize)->get(0);
	int32_t numBands = sampleSize->length;
	for (int32_t i = 1; i < numBands; ++i) {
		if (sampleSize->get(i) != sampleSize0) {
			allSameSize = false;
			break;
		}
	}
	return allSameSize;
}

bool TIFFDecompressor::isDataBufferBitContiguous($SampleModel* sm, $ints* bitsPerSample) {
	$useLocalCurrentObjectStackCache();
	int32_t dataTypeSize = getDataTypeSize($nc(sm)->getDataType());
	if ($instanceOf($ComponentSampleModel, sm)) {
		int32_t numBands = $nc(sm)->getNumBands();
		for (int32_t i = 0; i < numBands; ++i) {
			if ($nc(bitsPerSample)->get(i) != dataTypeSize) {
				return false;
			}
		}
	} else if ($instanceOf($MultiPixelPackedSampleModel, sm)) {
		$var($MultiPixelPackedSampleModel, mppsm, $cast($MultiPixelPackedSampleModel, sm));
		if ($mod(dataTypeSize, $nc(mppsm)->getPixelBitStride()) != 0) {
			return false;
		}
	} else if ($instanceOf($SinglePixelPackedSampleModel, sm)) {
		$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sm));
		int32_t numBands = $nc(sm)->getNumBands();
		int32_t numBits = 0;
		for (int32_t i = 0; i < numBands; ++i) {
			numBits += sm->getSampleSize(i);
		}
		if (numBits != dataTypeSize) {
			return false;
		}
	} else {
		return false;
	}
	return true;
}

void TIFFDecompressor::reformatData($bytes* buf, int32_t bytesPerRow, int32_t numRows, $shorts* shortData, $ints* intData, int32_t outOffset, int32_t outStride) {
	if (shortData != nullptr) {
		int32_t inOffset = 0;
		int32_t shortsPerRow = bytesPerRow / 2;
		int32_t numExtraBytes = bytesPerRow % 2;
		for (int32_t j = 0; j < numRows; ++j) {
			int32_t k = outOffset;
			for (int32_t i = 0; i < shortsPerRow; ++i) {
				int32_t var$0 = (((int32_t)($nc(buf)->get(inOffset++) & (uint32_t)255)) << 8);
				shortData->set(k++, (int16_t)(var$0 | ((int32_t)(buf->get(inOffset++) & (uint32_t)255))));
			}
			if (numExtraBytes != 0) {
				shortData->set(k++, (int16_t)(((int32_t)($nc(buf)->get(inOffset++) & (uint32_t)255)) << 8));
			}
			outOffset += outStride;
		}
	} else if (intData != nullptr) {
		int32_t inOffset = 0;
		int32_t intsPerRow = bytesPerRow / 4;
		int32_t numExtraBytes = bytesPerRow % 4;
		for (int32_t j = 0; j < numRows; ++j) {
			int32_t k = outOffset;
			for (int32_t i = 0; i < intsPerRow; ++i) {
				int32_t var$3 = (((int32_t)($nc(buf)->get(inOffset++) & (uint32_t)255)) << 24);
				int32_t var$2 = var$3 | (((int32_t)(buf->get(inOffset++) & (uint32_t)255)) << 16);
				int32_t var$1 = var$2 | (((int32_t)(buf->get(inOffset++) & (uint32_t)255)) << 8);
				intData->set(k++, var$1 | ((int32_t)(buf->get(inOffset++) & (uint32_t)255)));
			}
			if (numExtraBytes != 0) {
				int32_t shift = 24;
				int32_t ival = 0;
				for (int32_t b = 0; b < numExtraBytes; ++b) {
					ival |= $sl((int32_t)($nc(buf)->get(inOffset++) & (uint32_t)255), shift);
					shift -= 8;
				}
				intData->set(k++, ival);
			}
			outOffset += outStride;
		}
	} else {
		$throwNew($IIOException, "shortData == null && intData == null!"_s);
	}
}

void TIFFDecompressor::reformatDiscontiguousData($bytes* buf, $ints* bitsPerSample, int32_t stride, int32_t w, int32_t h, $WritableRaster* raster) {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, sm, $nc(raster)->getSampleModel());
	int32_t numBands = $nc(sm)->getNumBands();
	$var($ByteArrayInputStream, is, $new($ByteArrayInputStream, buf));
	$var($ImageInputStream, iis, $new($MemoryCacheImageInputStream, is));
	int64_t iisPosition = 0;
	int32_t y = raster->getMinY();
	for (int32_t j = 0; j < h; ++j, ++y) {
		iis->seek(iisPosition);
		int32_t x = raster->getMinX();
		for (int32_t i = 0; i < w; ++i, ++x) {
			for (int32_t b = 0; b < numBands; ++b) {
				int64_t bits = iis->readBits($nc(bitsPerSample)->get(b));
				raster->setSample(x, y, b, (int32_t)bits);
			}
		}
		iisPosition += stride;
	}
}

$ImageTypeSpecifier* TIFFDecompressor::getRawImageTypeSpecifier(int32_t photometricInterpretation, int32_t compression, int32_t samplesPerPixel, $ints* bitsPerSample, $ints* sampleFormat, $ints* extraSamples, $chars* colorMap) {
	$useLocalCurrentObjectStackCache();
	if (samplesPerPixel == 1 && ($nc(bitsPerSample)->get(0) == 1 || $nc(bitsPerSample)->get(0) == 2 || $nc(bitsPerSample)->get(0) == 4 || $nc(bitsPerSample)->get(0) == 8 || $nc(bitsPerSample)->get(0) == 16)) {
		if (colorMap == nullptr) {
			bool isSigned = ($nc(sampleFormat)->get(0) == $BaselineTIFFTagSet::SAMPLE_FORMAT_SIGNED_INTEGER);
			int32_t dataType = 0;
			if (bitsPerSample->get(0) <= 8) {
				dataType = $DataBuffer::TYPE_BYTE;
			} else {
				dataType = sampleFormat->get(0) == $BaselineTIFFTagSet::SAMPLE_FORMAT_SIGNED_INTEGER ? $DataBuffer::TYPE_SHORT : $DataBuffer::TYPE_USHORT;
			}
			return $ImageTypeSpecifier::createGrayscale(bitsPerSample->get(0), dataType, isSigned);
		} else {
			int32_t mapSize = $sl(1, bitsPerSample->get(0));
			$var($bytes, redLut, $new($bytes, mapSize));
			$var($bytes, greenLut, $new($bytes, mapSize));
			$var($bytes, blueLut, $new($bytes, mapSize));
			$var($bytes, alphaLut, nullptr);
			int32_t idx = 0;
			for (int32_t i = 0; i < mapSize; ++i) {
				redLut->set(i, (int8_t)(($nc(colorMap)->get(i) * 255) / 0x0000FFFF));
				greenLut->set(i, (int8_t)((colorMap->get(mapSize + i) * 255) / 0x0000FFFF));
				blueLut->set(i, (int8_t)((colorMap->get(2 * mapSize + i) * 255) / 0x0000FFFF));
			}
			int32_t dataType = 0;
			if (bitsPerSample->get(0) <= 8) {
				dataType = $DataBuffer::TYPE_BYTE;
			} else if ($nc(sampleFormat)->get(0) == $BaselineTIFFTagSet::SAMPLE_FORMAT_SIGNED_INTEGER) {
				dataType = $DataBuffer::TYPE_SHORT;
			} else {
				dataType = $DataBuffer::TYPE_USHORT;
			}
			return $ImageTypeSpecifier::createIndexed(redLut, greenLut, blueLut, alphaLut, bitsPerSample->get(0), dataType);
		}
	}
	if (samplesPerPixel == 2 && $nc(bitsPerSample)->get(0) == 8 && bitsPerSample->get(1) == 8) {
		int32_t dataType = $DataBuffer::TYPE_BYTE;
		bool alphaPremultiplied = false;
		if (extraSamples != nullptr && extraSamples->get(0) == $BaselineTIFFTagSet::EXTRA_SAMPLES_ASSOCIATED_ALPHA) {
			alphaPremultiplied = true;
		}
		return $ImageTypeSpecifier::createGrayscale(8, dataType, false, alphaPremultiplied);
	}
	if (samplesPerPixel == 2 && $nc(bitsPerSample)->get(0) == 16 && bitsPerSample->get(1) == 16) {
		int32_t dataType = $nc(sampleFormat)->get(0) == $BaselineTIFFTagSet::SAMPLE_FORMAT_SIGNED_INTEGER ? $DataBuffer::TYPE_SHORT : $DataBuffer::TYPE_USHORT;
		bool alphaPremultiplied = false;
		if (extraSamples != nullptr && extraSamples->get(0) == $BaselineTIFFTagSet::EXTRA_SAMPLES_ASSOCIATED_ALPHA) {
			alphaPremultiplied = true;
		}
		bool isSigned = dataType == $DataBuffer::TYPE_SHORT;
		return $ImageTypeSpecifier::createGrayscale(16, dataType, isSigned, alphaPremultiplied);
	}
	$var($ColorSpace, rgb, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	if (samplesPerPixel == 3 && $nc(bitsPerSample)->get(0) == 8 && bitsPerSample->get(1) == 8 && bitsPerSample->get(2) == 8) {
		$var($ints, bandOffsets, $new($ints, 3));
		bandOffsets->set(0, 0);
		bandOffsets->set(1, 1);
		bandOffsets->set(2, 2);
		int32_t dataType = $DataBuffer::TYPE_BYTE;
		$var($ColorSpace, theColorSpace, nullptr);
		if ((photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_Y_CB_CR && compression != $BaselineTIFFTagSet::COMPRESSION_JPEG && compression != $BaselineTIFFTagSet::COMPRESSION_OLD_JPEG) || photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_CIELAB) {
			$assign(theColorSpace, $ColorSpace::getInstance($ColorSpace::CS_LINEAR_RGB));
		} else {
			$assign(theColorSpace, rgb);
		}
		return $ImageTypeSpecifier::createInterleaved(theColorSpace, bandOffsets, dataType, false, false);
	}
	if (samplesPerPixel == 4 && $nc(bitsPerSample)->get(0) == 8 && bitsPerSample->get(1) == 8 && bitsPerSample->get(2) == 8 && bitsPerSample->get(3) == 8) {
		$var($ints, bandOffsets, $new($ints, 4));
		bandOffsets->set(0, 0);
		bandOffsets->set(1, 1);
		bandOffsets->set(2, 2);
		bandOffsets->set(3, 3);
		int32_t dataType = $DataBuffer::TYPE_BYTE;
		$var($ColorSpace, theColorSpace, nullptr);
		bool hasAlpha = false;
		bool alphaPremultiplied = false;
		if (photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_CMYK) {
			$assign(theColorSpace, $SimpleCMYKColorSpace::getInstance());
			hasAlpha = false;
		} else {
			$assign(theColorSpace, rgb);
			hasAlpha = true;
			if (extraSamples != nullptr && extraSamples->get(0) == $BaselineTIFFTagSet::EXTRA_SAMPLES_ASSOCIATED_ALPHA) {
				alphaPremultiplied = true;
			}
		}
		return $ImageTypeSpecifier::createInterleaved(theColorSpace, bandOffsets, dataType, hasAlpha, alphaPremultiplied);
	}
	if (samplesPerPixel == 3 && $nc(bitsPerSample)->get(0) == 16 && bitsPerSample->get(1) == 16 && bitsPerSample->get(2) == 16) {
		$var($ints, bandOffsets, $new($ints, 3));
		bandOffsets->set(0, 0);
		bandOffsets->set(1, 1);
		bandOffsets->set(2, 2);
		int32_t dataType = $nc(sampleFormat)->get(0) == $BaselineTIFFTagSet::SAMPLE_FORMAT_SIGNED_INTEGER ? $DataBuffer::TYPE_SHORT : $DataBuffer::TYPE_USHORT;
		return $ImageTypeSpecifier::createInterleaved(rgb, bandOffsets, dataType, false, false);
	}
	if (samplesPerPixel == 4 && $nc(bitsPerSample)->get(0) == 16 && bitsPerSample->get(1) == 16 && bitsPerSample->get(2) == 16 && bitsPerSample->get(3) == 16) {
		$var($ints, bandOffsets, $new($ints, 4));
		bandOffsets->set(0, 0);
		bandOffsets->set(1, 1);
		bandOffsets->set(2, 2);
		bandOffsets->set(3, 3);
		int32_t dataType = $nc(sampleFormat)->get(0) == $BaselineTIFFTagSet::SAMPLE_FORMAT_SIGNED_INTEGER ? $DataBuffer::TYPE_SHORT : $DataBuffer::TYPE_USHORT;
		bool alphaPremultiplied = false;
		if (extraSamples != nullptr && extraSamples->get(0) == $BaselineTIFFTagSet::EXTRA_SAMPLES_ASSOCIATED_ALPHA) {
			alphaPremultiplied = true;
		}
		return $ImageTypeSpecifier::createInterleaved(rgb, bandOffsets, dataType, true, alphaPremultiplied);
	}
	int32_t totalBits = 0;
	for (int32_t i = 0; i < $nc(bitsPerSample)->length; ++i) {
		totalBits += bitsPerSample->get(i);
	}
	if ((samplesPerPixel == 3 || samplesPerPixel == 4) && (totalBits == 8 || totalBits == 16)) {
		int32_t redMask = createMask(bitsPerSample, 0);
		int32_t greenMask = createMask(bitsPerSample, 1);
		int32_t blueMask = createMask(bitsPerSample, 2);
		int32_t alphaMask = (samplesPerPixel == 4) ? createMask(bitsPerSample, 3) : 0;
		int32_t transferType = totalBits == 8 ? $DataBuffer::TYPE_BYTE : $DataBuffer::TYPE_USHORT;
		bool alphaPremultiplied = false;
		if (extraSamples != nullptr && extraSamples->get(0) == $BaselineTIFFTagSet::EXTRA_SAMPLES_ASSOCIATED_ALPHA) {
			alphaPremultiplied = true;
		}
		return $ImageTypeSpecifier::createPacked(rgb, redMask, greenMask, blueMask, alphaMask, transferType, alphaPremultiplied);
	}
	if ($nc(bitsPerSample)->get(0) % 8 == 0) {
		bool allSameBitDepth = true;
		for (int32_t i = 1; i < bitsPerSample->length; ++i) {
			if (bitsPerSample->get(i) != bitsPerSample->get(i - 1)) {
				allSameBitDepth = false;
				break;
			}
		}
		if (allSameBitDepth) {
			int32_t dataType = -1;
			bool isDataTypeSet = false;
			switch (bitsPerSample->get(0)) {
			case 8:
				{
					if ($nc(sampleFormat)->get(0) != $BaselineTIFFTagSet::SAMPLE_FORMAT_FLOATING_POINT) {
						dataType = $DataBuffer::TYPE_BYTE;
						isDataTypeSet = true;
					}
					break;
				}
			case 16:
				{
					if ($nc(sampleFormat)->get(0) != $BaselineTIFFTagSet::SAMPLE_FORMAT_FLOATING_POINT) {
						if (sampleFormat->get(0) == $BaselineTIFFTagSet::SAMPLE_FORMAT_SIGNED_INTEGER) {
							dataType = $DataBuffer::TYPE_SHORT;
						} else {
							dataType = $DataBuffer::TYPE_USHORT;
						}
						isDataTypeSet = true;
					}
					break;
				}
			case 32:
				{
					if ($nc(sampleFormat)->get(0) == $BaselineTIFFTagSet::SAMPLE_FORMAT_FLOATING_POINT) {
						dataType = $DataBuffer::TYPE_FLOAT;
					} else {
						dataType = $DataBuffer::TYPE_INT;
					}
					isDataTypeSet = true;
					break;
				}
			case 64:
				{
					if ($nc(sampleFormat)->get(0) == $BaselineTIFFTagSet::SAMPLE_FORMAT_FLOATING_POINT) {
						dataType = $DataBuffer::TYPE_DOUBLE;
						isDataTypeSet = true;
					}
					break;
				}
			}
			if (isDataTypeSet) {
				$var($SampleModel, sm, createInterleavedSM(dataType, samplesPerPixel));
				$var($ColorModel, cm, nullptr);
				if (samplesPerPixel >= 1 && samplesPerPixel <= 4 && (dataType == $DataBuffer::TYPE_INT || dataType == $DataBuffer::TYPE_FLOAT)) {
					$var($ColorSpace, cs, samplesPerPixel <= 2 ? $ColorSpace::getInstance($ColorSpace::CS_GRAY) : rgb);
					bool hasAlpha = ((samplesPerPixel % 2) == 0);
					bool alphaPremultiplied = false;
					if (hasAlpha && extraSamples != nullptr && extraSamples->get(0) == $BaselineTIFFTagSet::EXTRA_SAMPLES_ASSOCIATED_ALPHA) {
						alphaPremultiplied = true;
					}
					$assign(cm, createComponentCM(cs, samplesPerPixel, bitsPerSample, dataType, hasAlpha, alphaPremultiplied));
				} else {
					$var($ColorSpace, cs, $new($BogusColorSpace, samplesPerPixel));
					$assign(cm, createComponentCM(cs, samplesPerPixel, bitsPerSample, dataType, false, false));
				}
				return $new($ImageTypeSpecifier, cm, sm);
			}
		}
	}
	if (colorMap == nullptr && $nc(sampleFormat)->get(0) != $BaselineTIFFTagSet::SAMPLE_FORMAT_FLOATING_POINT) {
		int32_t maxBitsPerSample = 0;
		for (int32_t i = 0; i < $nc(bitsPerSample)->length; ++i) {
			if (bitsPerSample->get(i) > maxBitsPerSample) {
				maxBitsPerSample = bitsPerSample->get(i);
			}
		}
		bool isSigned = (sampleFormat->get(0) == $BaselineTIFFTagSet::SAMPLE_FORMAT_SIGNED_INTEGER);
		if (samplesPerPixel == 1 && ($nc(bitsPerSample)->get(0) == 1 || $nc(bitsPerSample)->get(0) == 2 || $nc(bitsPerSample)->get(0) == 4 || $nc(bitsPerSample)->get(0) == 8 || $nc(bitsPerSample)->get(0) == 16)) {
			int32_t dataType = getDataTypeFromNumBits(maxBitsPerSample, isSigned);
			return $ImageTypeSpecifier::createGrayscale(bitsPerSample->get(0), dataType, isSigned);
		}
		if (samplesPerPixel == 2 && $nc(bitsPerSample)->get(0) == bitsPerSample->get(1) && (bitsPerSample->get(0) == 1 || $nc(bitsPerSample)->get(0) == 2 || $nc(bitsPerSample)->get(0) == 4 || $nc(bitsPerSample)->get(0) == 8 || $nc(bitsPerSample)->get(0) == 16)) {
			bool alphaPremultiplied = false;
			if (extraSamples != nullptr && extraSamples->get(0) == $BaselineTIFFTagSet::EXTRA_SAMPLES_ASSOCIATED_ALPHA) {
				alphaPremultiplied = true;
			}
			int32_t dataType = getDataTypeFromNumBits(maxBitsPerSample, isSigned);
			return $ImageTypeSpecifier::createGrayscale(maxBitsPerSample, dataType, false, alphaPremultiplied);
		}
		if (samplesPerPixel == 3 || samplesPerPixel == 4) {
			int32_t dataType = getDataTypeFromNumBits(maxBitsPerSample, isSigned);
			int32_t dataTypeSize = 0;
			try {
				dataTypeSize = getDataTypeSize(dataType);
			} catch ($IIOException& ignored) {
				dataTypeSize = maxBitsPerSample;
			}
			if (totalBits <= 32 && !isSigned) {
				int32_t redMask = createMask(bitsPerSample, 0);
				int32_t greenMask = createMask(bitsPerSample, 1);
				int32_t blueMask = createMask(bitsPerSample, 2);
				int32_t alphaMask = (samplesPerPixel == 4) ? createMask(bitsPerSample, 3) : 0;
				int32_t transferType = getDataTypeFromNumBits(totalBits, false);
				bool alphaPremultiplied = false;
				if (extraSamples != nullptr && extraSamples->get(0) == $BaselineTIFFTagSet::EXTRA_SAMPLES_ASSOCIATED_ALPHA) {
					alphaPremultiplied = true;
				}
				return $ImageTypeSpecifier::createPacked(rgb, redMask, greenMask, blueMask, alphaMask, transferType, alphaPremultiplied);
			} else if (samplesPerPixel == 3 && dataTypeSize == $nc(bitsPerSample)->get(0) && bitsPerSample->get(0) == bitsPerSample->get(1) && bitsPerSample->get(1) == bitsPerSample->get(2)) {
				$var($ints, bandOffsets, $new($ints, {
					0,
					1,
					2
				}));
				return $ImageTypeSpecifier::createInterleaved(rgb, bandOffsets, dataType, false, false);
			} else if (samplesPerPixel == 4 && dataTypeSize == bitsPerSample->get(0) && bitsPerSample->get(0) == bitsPerSample->get(1) && bitsPerSample->get(1) == bitsPerSample->get(2) && bitsPerSample->get(2) == bitsPerSample->get(3)) {
				$var($ints, bandOffsets, $new($ints, {
					0,
					1,
					2,
					3
				}));
				bool alphaPremultiplied = false;
				if (extraSamples != nullptr && extraSamples->get(0) == $BaselineTIFFTagSet::EXTRA_SAMPLES_ASSOCIATED_ALPHA) {
					alphaPremultiplied = true;
				}
				return $ImageTypeSpecifier::createInterleaved(rgb, bandOffsets, dataType, true, alphaPremultiplied);
			}
		}
		int32_t dataType = getDataTypeFromNumBits(maxBitsPerSample, isSigned);
		$var($SampleModel, sm, createInterleavedSM(dataType, samplesPerPixel));
		$var($ColorSpace, cs, nullptr);
		if (samplesPerPixel <= 2) {
			$assign(cs, $ColorSpace::getInstance($ColorSpace::CS_GRAY));
		} else if (samplesPerPixel <= 4) {
			$assign(cs, rgb);
		} else {
			$assign(cs, $new($BogusColorSpace, samplesPerPixel));
		}
		$var($ColorModel, cm, createComponentCM(cs, samplesPerPixel, bitsPerSample, dataType, false, false));
		return $new($ImageTypeSpecifier, cm, sm);
	}
	return nullptr;
}

void TIFFDecompressor::setReader($ImageReader* reader) {
	$set(this, reader, reader);
}

void TIFFDecompressor::setMetadata($IIOMetadata* metadata) {
	$set(this, metadata, metadata);
}

void TIFFDecompressor::setPhotometricInterpretation(int32_t photometricInterpretation) {
	this->photometricInterpretation = photometricInterpretation;
}

void TIFFDecompressor::setCompression(int32_t compression) {
	this->compression = compression;
}

void TIFFDecompressor::setPlanar(bool planar) {
	this->planar = planar;
}

void TIFFDecompressor::setPlanarBand(int32_t planarBand) {
	this->planarBand = planarBand;
}

void TIFFDecompressor::setSamplesPerPixel(int32_t samplesPerPixel) {
	this->samplesPerPixel = samplesPerPixel;
}

void TIFFDecompressor::setBitsPerSample($ints* bitsPerSample) {
	$set(this, bitsPerSample, bitsPerSample == nullptr ? ($ints*)nullptr : $cast($ints, $nc(bitsPerSample)->clone()));
}

void TIFFDecompressor::setSampleFormat($ints* sampleFormat) {
	$set(this, sampleFormat, sampleFormat == nullptr ? $new($ints, {$BaselineTIFFTagSet::SAMPLE_FORMAT_UNSIGNED_INTEGER}) : $cast($ints, $nc(sampleFormat)->clone()));
}

void TIFFDecompressor::setExtraSamples($ints* extraSamples) {
	$set(this, extraSamples, extraSamples == nullptr ? ($ints*)nullptr : $cast($ints, $nc(extraSamples)->clone()));
}

void TIFFDecompressor::setColorMap($chars* colorMap) {
	$set(this, colorMap, colorMap == nullptr ? ($chars*)nullptr : $cast($chars, $nc(colorMap)->clone()));
}

void TIFFDecompressor::setStream($ImageInputStream* stream) {
	$set(this, stream, stream);
}

void TIFFDecompressor::setOffset(int64_t offset) {
	this->offset = offset;
}

void TIFFDecompressor::setByteCount(int32_t byteCount) {
	this->byteCount = byteCount;
}

void TIFFDecompressor::setSrcMinX(int32_t srcMinX) {
	this->srcMinX = srcMinX;
}

void TIFFDecompressor::setSrcMinY(int32_t srcMinY) {
	this->srcMinY = srcMinY;
}

void TIFFDecompressor::setSrcWidth(int32_t srcWidth) {
	this->srcWidth = srcWidth;
}

void TIFFDecompressor::setSrcHeight(int32_t srcHeight) {
	this->srcHeight = srcHeight;
}

void TIFFDecompressor::setSourceXOffset(int32_t sourceXOffset) {
	this->sourceXOffset = sourceXOffset;
}

void TIFFDecompressor::setDstXOffset(int32_t dstXOffset) {
	this->dstXOffset = dstXOffset;
}

void TIFFDecompressor::setSourceYOffset(int32_t sourceYOffset) {
	this->sourceYOffset = sourceYOffset;
}

void TIFFDecompressor::setDstYOffset(int32_t dstYOffset) {
	this->dstYOffset = dstYOffset;
}

void TIFFDecompressor::setSubsampleX(int32_t subsampleX) {
	if (subsampleX <= 0) {
		$throwNew($IllegalArgumentException, "subsampleX <= 0!"_s);
	}
	this->subsampleX = subsampleX;
}

void TIFFDecompressor::setSubsampleY(int32_t subsampleY) {
	if (subsampleY <= 0) {
		$throwNew($IllegalArgumentException, "subsampleY <= 0!"_s);
	}
	this->subsampleY = subsampleY;
}

void TIFFDecompressor::setSourceBands($ints* sourceBands) {
	$set(this, sourceBands, sourceBands == nullptr ? ($ints*)nullptr : $cast($ints, $nc(sourceBands)->clone()));
}

void TIFFDecompressor::setDestinationBands($ints* destinationBands) {
	$set(this, destinationBands, destinationBands == nullptr ? ($ints*)nullptr : $cast($ints, $nc(destinationBands)->clone()));
}

void TIFFDecompressor::setImage($BufferedImage* image) {
	$set(this, image, image);
}

void TIFFDecompressor::setDstMinX(int32_t dstMinX) {
	this->dstMinX = dstMinX;
}

void TIFFDecompressor::setDstMinY(int32_t dstMinY) {
	this->dstMinY = dstMinY;
}

void TIFFDecompressor::setDstWidth(int32_t dstWidth) {
	this->dstWidth = dstWidth;
}

void TIFFDecompressor::setDstHeight(int32_t dstHeight) {
	this->dstHeight = dstHeight;
}

void TIFFDecompressor::setActiveSrcMinX(int32_t activeSrcMinX) {
	this->activeSrcMinX = activeSrcMinX;
}

void TIFFDecompressor::setActiveSrcMinY(int32_t activeSrcMinY) {
	this->activeSrcMinY = activeSrcMinY;
}

void TIFFDecompressor::setActiveSrcWidth(int32_t activeSrcWidth) {
	this->activeSrcWidth = activeSrcWidth;
}

void TIFFDecompressor::setActiveSrcHeight(int32_t activeSrcHeight) {
	this->activeSrcHeight = activeSrcHeight;
}

void TIFFDecompressor::setColorConverter($TIFFColorConverter* colorConverter) {
	$set(this, colorConverter, colorConverter);
}

$ImageTypeSpecifier* TIFFDecompressor::getRawImageType() {
	$var($ImageTypeSpecifier, its, getRawImageTypeSpecifier(this->photometricInterpretation, this->compression, this->samplesPerPixel, this->bitsPerSample, this->sampleFormat, this->extraSamples, this->colorMap));
	return its;
}

$BufferedImage* TIFFDecompressor::createRawImage() {
	$useLocalCurrentObjectStackCache();
	if (this->planar) {
		int32_t bps = $nc(this->bitsPerSample)->get($nc(this->sourceBands)->get(0));
		int32_t dataType = 0;
		if ($nc(this->sampleFormat)->get(0) == $BaselineTIFFTagSet::SAMPLE_FORMAT_FLOATING_POINT) {
			if (bps <= 32) {
				dataType = $DataBuffer::TYPE_FLOAT;
			} else {
				dataType = $DataBuffer::TYPE_DOUBLE;
			}
		} else if (bps <= 8) {
			dataType = $DataBuffer::TYPE_BYTE;
		} else if (bps <= 16) {
			if ($nc(this->sampleFormat)->get(0) == $BaselineTIFFTagSet::SAMPLE_FORMAT_SIGNED_INTEGER) {
				dataType = $DataBuffer::TYPE_SHORT;
			} else {
				dataType = $DataBuffer::TYPE_USHORT;
			}
		} else {
			dataType = $DataBuffer::TYPE_INT;
		}
		$var($ColorSpace, csGray, $ColorSpace::getInstance($ColorSpace::CS_GRAY));
		$var($ImageTypeSpecifier, its, $ImageTypeSpecifier::createInterleaved(csGray, $$new($ints, {0}), dataType, false, false));
		return $nc(its)->createBufferedImage(this->srcWidth, this->srcHeight);
	} else {
		$var($ImageTypeSpecifier, its, getRawImageType());
		if (its == nullptr) {
			return nullptr;
		}
		$var($BufferedImage, bi, $nc(its)->createBufferedImage(this->srcWidth, this->srcHeight));
		return bi;
	}
}

void TIFFDecompressor::decodeRaw($shorts* s, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) {
	int32_t bytesPerRow = (this->srcWidth * bitsPerPixel + 7) / 8;
	int32_t shortsPerRow = bytesPerRow / 2;
	$var($bytes, b, $new($bytes, bytesPerRow * this->srcHeight));
	decodeRaw(b, 0, bitsPerPixel, bytesPerRow);
	int32_t bOffset = 0;
	$init($ByteOrder);
	if ($nc(this->stream)->getByteOrder() == $ByteOrder::BIG_ENDIAN) {
		for (int32_t j = 0; j < this->srcHeight; ++j) {
			for (int32_t i = 0; i < shortsPerRow; ++i) {
				int16_t hiVal = b->get(bOffset++);
				int16_t loVal = b->get(bOffset++);
				int16_t sval = (int16_t)((hiVal << 8) | ((int32_t)(loVal & (uint32_t)255)));
				$nc(s)->set(dstOffset + i, sval);
			}
			dstOffset += scanlineStride;
		}
	} else {
		for (int32_t j = 0; j < this->srcHeight; ++j) {
			for (int32_t i = 0; i < shortsPerRow; ++i) {
				int16_t loVal = b->get(bOffset++);
				int16_t hiVal = b->get(bOffset++);
				int16_t sval = (int16_t)((hiVal << 8) | ((int32_t)(loVal & (uint32_t)255)));
				$nc(s)->set(dstOffset + i, sval);
			}
			dstOffset += scanlineStride;
		}
	}
}

void TIFFDecompressor::decodeRaw($ints* i, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) {
	int32_t numBands = bitsPerPixel / 32;
	int32_t intsPerRow = this->srcWidth * numBands;
	int32_t bytesPerRow = intsPerRow * 4;
	$var($bytes, b, $new($bytes, bytesPerRow * this->srcHeight));
	decodeRaw(b, 0, bitsPerPixel, bytesPerRow);
	int32_t bOffset = 0;
	$init($ByteOrder);
	if ($nc(this->stream)->getByteOrder() == $ByteOrder::BIG_ENDIAN) {
		for (int32_t j = 0; j < this->srcHeight; ++j) {
			for (int32_t k = 0; k < intsPerRow; ++k) {
				int32_t v0 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t v1 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t v2 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t v3 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t ival = (((v0 << 24) | (v1 << 16)) | (v2 << 8)) | v3;
				$nc(i)->set(dstOffset + k, ival);
			}
			dstOffset += scanlineStride;
		}
	} else {
		for (int32_t j = 0; j < this->srcHeight; ++j) {
			for (int32_t k = 0; k < intsPerRow; ++k) {
				int32_t v3 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t v2 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t v1 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t v0 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t ival = (((v0 << 24) | (v1 << 16)) | (v2 << 8)) | v3;
				$nc(i)->set(dstOffset + k, ival);
			}
			dstOffset += scanlineStride;
		}
	}
}

void TIFFDecompressor::decodeRaw($floats* f, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) {
	int32_t numBands = bitsPerPixel / 32;
	int32_t floatsPerRow = this->srcWidth * numBands;
	int32_t bytesPerRow = floatsPerRow * 4;
	$var($bytes, b, $new($bytes, bytesPerRow * this->srcHeight));
	decodeRaw(b, 0, bitsPerPixel, bytesPerRow);
	int32_t bOffset = 0;
	$init($ByteOrder);
	if ($nc(this->stream)->getByteOrder() == $ByteOrder::BIG_ENDIAN) {
		for (int32_t j = 0; j < this->srcHeight; ++j) {
			for (int32_t i = 0; i < floatsPerRow; ++i) {
				int32_t v0 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t v1 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t v2 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t v3 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t ival = (((v0 << 24) | (v1 << 16)) | (v2 << 8)) | v3;
				float fval = $Float::intBitsToFloat(ival);
				$nc(f)->set(dstOffset + i, fval);
			}
			dstOffset += scanlineStride;
		}
	} else {
		for (int32_t j = 0; j < this->srcHeight; ++j) {
			for (int32_t i = 0; i < floatsPerRow; ++i) {
				int32_t v3 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t v2 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t v1 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t v0 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int32_t ival = (((v0 << 24) | (v1 << 16)) | (v2 << 8)) | v3;
				float fval = $Float::intBitsToFloat(ival);
				$nc(f)->set(dstOffset + i, fval);
			}
			dstOffset += scanlineStride;
		}
	}
}

void TIFFDecompressor::decodeRaw($doubles* d, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) {
	int32_t numBands = bitsPerPixel / 64;
	int32_t doublesPerRow = this->srcWidth * numBands;
	int32_t bytesPerRow = doublesPerRow * 8;
	$var($bytes, b, $new($bytes, bytesPerRow * this->srcHeight));
	decodeRaw(b, 0, bitsPerPixel, bytesPerRow);
	int32_t bOffset = 0;
	$init($ByteOrder);
	if ($nc(this->stream)->getByteOrder() == $ByteOrder::BIG_ENDIAN) {
		for (int32_t j = 0; j < this->srcHeight; ++j) {
			for (int32_t i = 0; i < doublesPerRow; ++i) {
				int64_t v0 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t v1 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t v2 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t v3 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t v4 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t v5 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t v6 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t v7 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t lval = (((((((v0 << 56) | (v1 << 48)) | (v2 << 40)) | (v3 << 32)) | (v4 << 24)) | (v5 << 16)) | (v6 << 8)) | v7;
				double dval = $Double::longBitsToDouble(lval);
				$nc(d)->set(dstOffset + i, dval);
			}
			dstOffset += scanlineStride;
		}
	} else {
		for (int32_t j = 0; j < this->srcHeight; ++j) {
			for (int32_t i = 0; i < doublesPerRow; ++i) {
				int64_t v7 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t v6 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t v5 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t v4 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t v3 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t v2 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t v1 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t v0 = (int32_t)(b->get(bOffset++) & (uint32_t)255);
				int64_t lval = (((((((v0 << 56) | (v1 << 48)) | (v2 << 40)) | (v3 << 32)) | (v4 << 24)) | (v5 << 16)) | (v6 << 8)) | v7;
				double dval = $Double::longBitsToDouble(lval);
				$nc(d)->set(dstOffset + i, dval);
			}
			dstOffset += scanlineStride;
		}
	}
}

void TIFFDecompressor::beginDecoding() {
	$useLocalCurrentObjectStackCache();
	this->adjustBitDepths = false;
	int32_t numBands = $nc(this->destinationBands)->length;
	$var($ints, destBitsPerSample, nullptr);
	if (this->planar) {
		int32_t totalNumBands = $nc(this->bitsPerSample)->length;
		$assign(destBitsPerSample, $new($ints, totalNumBands));
		int32_t dbps = $nc($($nc(this->image)->getSampleModel()))->getSampleSize(0);
		for (int32_t b = 0; b < totalNumBands; ++b) {
			destBitsPerSample->set(b, dbps);
		}
	} else {
		$assign(destBitsPerSample, $nc($($nc(this->image)->getSampleModel()))->getSampleSize());
	}
	for (int32_t b = 0; b < numBands; ++b) {
		if ($nc(destBitsPerSample)->get($nc(this->destinationBands)->get(b)) != $nc(this->bitsPerSample)->get($nc(this->sourceBands)->get(b))) {
			this->adjustBitDepths = true;
			break;
		}
	}
	if (this->adjustBitDepths) {
		bool var$2 = this->isFirstBitDepthTable || this->planar != this->planarCache || !areIntArraysEqual(destBitsPerSample, this->destBitsPerSampleCache);
		bool var$1 = var$2 || !areIntArraysEqual(this->sourceBands, this->sourceBandsCache);
		bool var$0 = var$1 || !areIntArraysEqual(this->bitsPerSample, this->bitsPerSampleCache);
		if (var$0 || !areIntArraysEqual(this->destinationBands, this->destinationBandsCache)) {
			this->isFirstBitDepthTable = false;
			this->planarCache = this->planar;
			$set(this, destBitsPerSampleCache, $cast($ints, $nc(destBitsPerSample)->clone()));
			$set(this, sourceBandsCache, this->sourceBands == nullptr ? ($ints*)nullptr : $cast($ints, $nc(this->sourceBands)->clone()));
			$set(this, bitsPerSampleCache, this->bitsPerSample == nullptr ? ($ints*)nullptr : $cast($ints, $nc(this->bitsPerSample)->clone()));
			$set(this, destinationBandsCache, $cast($ints, $nc(this->destinationBands)->clone()));
			$set(this, bitDepthScale, $new($intArray2, numBands));
			for (int32_t b = 0; b < numBands; ++b) {
				int32_t maxInSample = ($sl(1, $nc(this->bitsPerSample)->get($nc(this->sourceBands)->get(b)))) - 1;
				int32_t halfMaxInSample = maxInSample / 2;
				int32_t maxOutSample = ($sl(1, destBitsPerSample->get($nc(this->destinationBands)->get(b)))) - 1;
				$nc(this->bitDepthScale)->set(b, $$new($ints, maxInSample + 1));
				for (int32_t s = 0; s <= maxInSample; ++s) {
					$nc($nc(this->bitDepthScale)->get(b))->set(s, $div((s * maxOutSample + halfMaxInSample), maxInSample));
				}
			}
		}
	} else {
		$set(this, bitDepthScale, nullptr);
	}
	bool sourceBandsNormal = false;
	bool destinationBandsNormal = false;
	if (numBands == this->samplesPerPixel) {
		sourceBandsNormal = true;
		destinationBandsNormal = true;
		for (int32_t i = 0; i < numBands; ++i) {
			if ($nc(this->sourceBands)->get(i) != i) {
				sourceBandsNormal = false;
			}
			if ($nc(this->destinationBands)->get(i) != i) {
				destinationBandsNormal = false;
			}
		}
	}
	this->isBilevel = $ImageUtil::isBinary($($nc($($nc(this->image)->getRaster()))->getSampleModel()));
	this->isContiguous = this->isBilevel ? true : $ImageUtil::imageIsContiguous(this->image);
	bool var$3 = (this->colorConverter == nullptr) && (this->subsampleX == 1) && (this->subsampleY == 1) && (this->srcWidth == this->dstWidth) && (this->srcHeight == this->dstHeight) && ((this->dstMinX + this->dstWidth) <= $nc(this->image)->getWidth());
	this->isImageSimple = var$3 && ((this->dstMinY + this->dstHeight) <= $nc(this->image)->getHeight()) && sourceBandsNormal && destinationBandsNormal && !this->adjustBitDepths;
}

void TIFFDecompressor::decode() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, byteData, nullptr);
	$var($shorts, shortData, nullptr);
	$var($ints, intData, nullptr);
	$var($floats, floatData, nullptr);
	$var($doubles, doubleData, nullptr);
	int32_t dstOffset = 0;
	int32_t pixelBitStride = 1;
	int32_t scanlineStride = 0;
	$set(this, rawImage, nullptr);
	if (this->isImageSimple) {
		if (this->isBilevel) {
			$set(this, rawImage, this->image);
		} else if (this->isContiguous) {
			$set(this, rawImage, $nc(this->image)->getSubimage(this->dstMinX, this->dstMinY, this->dstWidth, this->dstHeight));
		}
	}
	bool isDirectCopy = this->rawImage != nullptr;
	if (this->rawImage == nullptr) {
		$set(this, rawImage, createRawImage());
		if (this->rawImage == nullptr) {
			$throwNew($IIOException, "Couldn\'t create image buffer!"_s);
		}
	}
	$var($WritableRaster, ras, $nc(this->rawImage)->getRaster());
	if (this->isBilevel) {
		$var($Rectangle, rect, this->isImageSimple ? $new($Rectangle, this->dstMinX, this->dstMinY, this->dstWidth, this->dstHeight) : $nc(ras)->getBounds());
		$assign(byteData, $ImageUtil::getPackedBinaryData(ras, rect));
		dstOffset = 0;
		pixelBitStride = 1;
		scanlineStride = ($nc(rect)->width + 7) / 8;
	} else {
		$var($SampleModel, sm, $nc(ras)->getSampleModel());
		$var($DataBuffer, db, ras->getDataBuffer());
		bool isSupportedType = false;
		if ($instanceOf($ComponentSampleModel, sm)) {
			$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, sm));
			int32_t var$0 = -ras->getSampleModelTranslateX();
			dstOffset = $nc(csm)->getOffset(var$0, -ras->getSampleModelTranslateY());
			scanlineStride = csm->getScanlineStride();
			if ($instanceOf($DataBufferByte, db)) {
				$var($DataBufferByte, dbb, $cast($DataBufferByte, db));
				$assign(byteData, $nc(dbb)->getData());
				pixelBitStride = csm->getPixelStride() * 8;
				isSupportedType = true;
			} else if ($instanceOf($DataBufferUShort, db)) {
				$var($DataBufferUShort, dbus, $cast($DataBufferUShort, db));
				$assign(shortData, $nc(dbus)->getData());
				pixelBitStride = csm->getPixelStride() * 16;
				isSupportedType = true;
			} else if ($instanceOf($DataBufferShort, db)) {
				$var($DataBufferShort, dbs, $cast($DataBufferShort, db));
				$assign(shortData, $nc(dbs)->getData());
				pixelBitStride = csm->getPixelStride() * 16;
				isSupportedType = true;
			} else if ($instanceOf($DataBufferInt, db)) {
				$var($DataBufferInt, dbi, $cast($DataBufferInt, db));
				$assign(intData, $nc(dbi)->getData());
				pixelBitStride = csm->getPixelStride() * 32;
				isSupportedType = true;
			} else if ($instanceOf($DataBufferFloat, db)) {
				$var($DataBufferFloat, dbf, $cast($DataBufferFloat, db));
				$assign(floatData, $nc(dbf)->getData());
				pixelBitStride = csm->getPixelStride() * 32;
				isSupportedType = true;
			} else if ($instanceOf($DataBufferDouble, db)) {
				$var($DataBufferDouble, dbd, $cast($DataBufferDouble, db));
				$assign(doubleData, $nc(dbd)->getData());
				pixelBitStride = csm->getPixelStride() * 64;
				isSupportedType = true;
			}
		} else if ($instanceOf($MultiPixelPackedSampleModel, sm)) {
			$var($MultiPixelPackedSampleModel, mppsm, $cast($MultiPixelPackedSampleModel, sm));
			int32_t var$1 = -ras->getSampleModelTranslateX();
			dstOffset = $nc(mppsm)->getOffset(var$1, -ras->getSampleModelTranslateY());
			pixelBitStride = mppsm->getPixelBitStride();
			scanlineStride = mppsm->getScanlineStride();
			if ($instanceOf($DataBufferByte, db)) {
				$var($DataBufferByte, dbb, $cast($DataBufferByte, db));
				$assign(byteData, $nc(dbb)->getData());
				isSupportedType = true;
			} else if ($instanceOf($DataBufferUShort, db)) {
				$var($DataBufferUShort, dbus, $cast($DataBufferUShort, db));
				$assign(shortData, $nc(dbus)->getData());
				isSupportedType = true;
			} else if ($instanceOf($DataBufferInt, db)) {
				$var($DataBufferInt, dbi, $cast($DataBufferInt, db));
				$assign(intData, $nc(dbi)->getData());
				isSupportedType = true;
			}
		} else if ($instanceOf($SinglePixelPackedSampleModel, sm)) {
			$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sm));
			int32_t var$2 = -ras->getSampleModelTranslateX();
			dstOffset = $nc(sppsm)->getOffset(var$2, -ras->getSampleModelTranslateY());
			scanlineStride = sppsm->getScanlineStride();
			if ($instanceOf($DataBufferByte, db)) {
				$var($DataBufferByte, dbb, $cast($DataBufferByte, db));
				$assign(byteData, $nc(dbb)->getData());
				pixelBitStride = 8;
				isSupportedType = true;
			} else if ($instanceOf($DataBufferUShort, db)) {
				$var($DataBufferUShort, dbus, $cast($DataBufferUShort, db));
				$assign(shortData, $nc(dbus)->getData());
				pixelBitStride = 16;
				isSupportedType = true;
			} else if ($instanceOf($DataBufferInt, db)) {
				$var($DataBufferInt, dbi, $cast($DataBufferInt, db));
				$assign(intData, $nc(dbi)->getData());
				pixelBitStride = 32;
				isSupportedType = true;
			}
		}
		if (!isSupportedType) {
			$throwNew($IIOException, $$str({"Unsupported raw image type: SampleModel = "_s, sm, "; DataBuffer = "_s, db}));
		}
	}
	if (this->isBilevel) {
		decodeRaw(byteData, dstOffset, pixelBitStride, scanlineStride);
	} else {
		$var($SampleModel, sm, $nc(ras)->getSampleModel());
		if (isDataBufferBitContiguous(sm, this->bitsPerSample)) {
			if (byteData != nullptr) {
				decodeRaw(byteData, dstOffset, pixelBitStride, scanlineStride);
			} else if (floatData != nullptr) {
				decodeRaw(floatData, dstOffset, pixelBitStride, scanlineStride);
			} else if (doubleData != nullptr) {
				decodeRaw(doubleData, dstOffset, pixelBitStride, scanlineStride);
			} else if (shortData != nullptr) {
				bool var$3 = areSampleSizesEqual(sm);
				if (var$3 && $nc(sm)->getSampleSize(0) == 16) {
					decodeRaw(shortData, dstOffset, pixelBitStride, scanlineStride);
				} else {
					int32_t bpp = getBitsPerPixel(sm);
					int32_t bytesPerRow = (bpp * this->srcWidth + 7) / 8;
					$var($bytes, buf, $new($bytes, bytesPerRow * this->srcHeight));
					decodeRaw(buf, 0, bpp, bytesPerRow);
					reformatData(buf, bytesPerRow, this->srcHeight, shortData, nullptr, dstOffset, scanlineStride);
				}
			} else if (intData != nullptr) {
				bool var$4 = areSampleSizesEqual(sm);
				if (var$4 && $nc(sm)->getSampleSize(0) == 32) {
					decodeRaw(intData, dstOffset, pixelBitStride, scanlineStride);
				} else {
					int32_t bpp = getBitsPerPixel(sm);
					int32_t bytesPerRow = (bpp * this->srcWidth + 7) / 8;
					$var($bytes, buf, $new($bytes, bytesPerRow * this->srcHeight));
					decodeRaw(buf, 0, bpp, bytesPerRow);
					reformatData(buf, bytesPerRow, this->srcHeight, nullptr, intData, dstOffset, scanlineStride);
				}
			}
		} else {
			int32_t bpp = 0;
			if (this->planar) {
				bpp = $nc(this->bitsPerSample)->get(this->planarBand);
			} else {
				bpp = 0;
				{
					$var($ints, arr$, this->bitsPerSample);
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						int32_t bps = arr$->get(i$);
						{
							bpp += bps;
						}
					}
				}
			}
			int32_t bytesPerRow = (bpp * this->srcWidth + 7) / 8;
			$var($bytes, buf, $new($bytes, bytesPerRow * this->srcHeight));
			decodeRaw(buf, 0, bpp, bytesPerRow);
			reformatDiscontiguousData(buf, this->bitsPerSample, bytesPerRow, this->srcWidth, this->srcHeight, ras);
		}
	}
	if (this->colorConverter != nullptr) {
		$var($floats, rgb, $new($floats, 3));
		if (byteData != nullptr) {
			for (int32_t j = 0; j < this->dstHeight; ++j) {
				int32_t idx = dstOffset;
				for (int32_t i = 0; i < this->dstWidth; ++i) {
					float x0 = (float)((int32_t)(byteData->get(idx) & (uint32_t)255));
					float x1 = (float)((int32_t)(byteData->get(idx + 1) & (uint32_t)255));
					float x2 = (float)((int32_t)(byteData->get(idx + 2) & (uint32_t)255));
					$nc(this->colorConverter)->toRGB(x0, x1, x2, rgb);
					byteData->set(idx, $cast(int8_t, (rgb->get(0))));
					byteData->set(idx + 1, $cast(int8_t, (rgb->get(1))));
					byteData->set(idx + 2, $cast(int8_t, (rgb->get(2))));
					idx += 3;
				}
				dstOffset += scanlineStride;
			}
		} else if (shortData != nullptr) {
			if ($nc(this->sampleFormat)->get(0) == $BaselineTIFFTagSet::SAMPLE_FORMAT_SIGNED_INTEGER) {
				for (int32_t j = 0; j < this->dstHeight; ++j) {
					int32_t idx = dstOffset;
					for (int32_t i = 0; i < this->dstWidth; ++i) {
						float x0 = (float)shortData->get(idx);
						float x1 = (float)shortData->get(idx + 1);
						float x2 = (float)shortData->get(idx + 2);
						$nc(this->colorConverter)->toRGB(x0, x1, x2, rgb);
						shortData->set(idx, $cast(int16_t, (rgb->get(0))));
						shortData->set(idx + 1, $cast(int16_t, (rgb->get(1))));
						shortData->set(idx + 2, $cast(int16_t, (rgb->get(2))));
						idx += 3;
					}
					dstOffset += scanlineStride;
				}
			} else {
				for (int32_t j = 0; j < this->dstHeight; ++j) {
					int32_t idx = dstOffset;
					for (int32_t i = 0; i < this->dstWidth; ++i) {
						float x0 = (float)((int32_t)(shortData->get(idx) & (uint32_t)0x0000FFFF));
						float x1 = (float)((int32_t)(shortData->get(idx + 1) & (uint32_t)0x0000FFFF));
						float x2 = (float)((int32_t)(shortData->get(idx + 2) & (uint32_t)0x0000FFFF));
						$nc(this->colorConverter)->toRGB(x0, x1, x2, rgb);
						shortData->set(idx, $cast(int16_t, (rgb->get(0))));
						shortData->set(idx + 1, $cast(int16_t, (rgb->get(1))));
						shortData->set(idx + 2, $cast(int16_t, (rgb->get(2))));
						idx += 3;
					}
					dstOffset += scanlineStride;
				}
			}
		} else if (intData != nullptr) {
			for (int32_t j = 0; j < this->dstHeight; ++j) {
				int32_t idx = dstOffset;
				for (int32_t i = 0; i < this->dstWidth; ++i) {
					float x0 = (float)intData->get(idx);
					float x1 = (float)intData->get(idx + 1);
					float x2 = (float)intData->get(idx + 2);
					$nc(this->colorConverter)->toRGB(x0, x1, x2, rgb);
					intData->set(idx, $cast(int32_t, (rgb->get(0))));
					intData->set(idx + 1, $cast(int32_t, (rgb->get(1))));
					intData->set(idx + 2, $cast(int32_t, (rgb->get(2))));
					idx += 3;
				}
				dstOffset += scanlineStride;
			}
		} else if (floatData != nullptr) {
			for (int32_t j = 0; j < this->dstHeight; ++j) {
				int32_t idx = dstOffset;
				for (int32_t i = 0; i < this->dstWidth; ++i) {
					float x0 = floatData->get(idx);
					float x1 = floatData->get(idx + 1);
					float x2 = floatData->get(idx + 2);
					$nc(this->colorConverter)->toRGB(x0, x1, x2, rgb);
					floatData->set(idx, rgb->get(0));
					floatData->set(idx + 1, rgb->get(1));
					floatData->set(idx + 2, rgb->get(2));
					idx += 3;
				}
				dstOffset += scanlineStride;
			}
		} else if (doubleData != nullptr) {
			for (int32_t j = 0; j < this->dstHeight; ++j) {
				int32_t idx = dstOffset;
				for (int32_t i = 0; i < this->dstWidth; ++i) {
					float x0 = (float)doubleData->get(idx);
					float x1 = (float)doubleData->get(idx + 1);
					float x2 = (float)doubleData->get(idx + 2);
					$nc(this->colorConverter)->toRGB(x0, x1, x2, rgb);
					doubleData->set(idx, rgb->get(0));
					doubleData->set(idx + 1, rgb->get(1));
					doubleData->set(idx + 2, rgb->get(2));
					idx += 3;
				}
				dstOffset += scanlineStride;
			}
		}
	}
	if (this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO) {
		if (byteData != nullptr) {
			int32_t bytesPerRow = (this->srcWidth * pixelBitStride + 7) / 8;
			for (int32_t y = 0; y < this->srcHeight; ++y) {
				int32_t offset = dstOffset + y * scanlineStride;
				for (int32_t i = 0; i < bytesPerRow; ++i) {
					(*byteData)[offset + i] ^= 255;
				}
			}
		} else if (shortData != nullptr) {
			int32_t shortsPerRow = (this->srcWidth * pixelBitStride + 15) / 16;
			if ($nc(this->sampleFormat)->get(0) == $BaselineTIFFTagSet::SAMPLE_FORMAT_SIGNED_INTEGER) {
				for (int32_t y = 0; y < this->srcHeight; ++y) {
					int32_t offset = dstOffset + y * scanlineStride;
					for (int32_t i = 0; i < shortsPerRow; ++i) {
						int32_t shortOffset = offset + i;
						shortData->set(shortOffset, (int16_t)($Short::MAX_VALUE - shortData->get(shortOffset)));
					}
				}
			} else {
				for (int32_t y = 0; y < this->srcHeight; ++y) {
					int32_t offset = dstOffset + y * scanlineStride;
					for (int32_t i = 0; i < shortsPerRow; ++i) {
						(*shortData)[offset + i] ^= 0x0000FFFF;
					}
				}
			}
		} else if (intData != nullptr) {
			int32_t intsPerRow = (this->srcWidth * pixelBitStride + 31) / 32;
			for (int32_t y = 0; y < this->srcHeight; ++y) {
				int32_t offset = dstOffset + y * scanlineStride;
				for (int32_t i = 0; i < intsPerRow; ++i) {
					int32_t intOffset = offset + i;
					intData->set(intOffset, $Integer::MAX_VALUE - intData->get(intOffset));
				}
			}
		} else if (floatData != nullptr) {
			int32_t floatsPerRow = (this->srcWidth * pixelBitStride + 31) / 32;
			for (int32_t y = 0; y < this->srcHeight; ++y) {
				int32_t offset = dstOffset + y * scanlineStride;
				for (int32_t i = 0; i < floatsPerRow; ++i) {
					int32_t floatOffset = offset + i;
					floatData->set(floatOffset, 1.0f - floatData->get(floatOffset));
				}
			}
		} else if (doubleData != nullptr) {
			int32_t doublesPerRow = (this->srcWidth * pixelBitStride + 63) / 64;
			for (int32_t y = 0; y < this->srcHeight; ++y) {
				int32_t offset = dstOffset + y * scanlineStride;
				for (int32_t i = 0; i < doublesPerRow; ++i) {
					int32_t doubleOffset = offset + i;
					doubleData->set(doubleOffset, 1.0f - doubleData->get(doubleOffset));
				}
			}
		}
	}
	if (this->isBilevel) {
		$var($Rectangle, rect, this->isImageSimple ? $new($Rectangle, this->dstMinX, this->dstMinY, this->dstWidth, this->dstHeight) : $nc(ras)->getBounds());
		$ImageUtil::setPackedBinaryData(byteData, ras, rect);
	}
	if (isDirectCopy) {
		return;
	}
	$var($Raster, src, $nc(this->rawImage)->getRaster());
	$var($Raster, srcChild, $nc(src)->createChild(0, 0, this->srcWidth, this->srcHeight, this->srcMinX, this->srcMinY, this->planar ? ($ints*)nullptr : this->sourceBands));
	$var($WritableRaster, dst, $nc(this->image)->getRaster());
	$var($WritableRaster, dstChild, $nc(dst)->createWritableChild(this->dstMinX, this->dstMinY, this->dstWidth, this->dstHeight, this->dstMinX, this->dstMinY, this->destinationBands));
	if (this->subsampleX == 1 && this->subsampleY == 1 && !this->adjustBitDepths) {
		$assign(srcChild, $nc(srcChild)->createChild(this->activeSrcMinX, this->activeSrcMinY, this->activeSrcWidth, this->activeSrcHeight, this->dstMinX, this->dstMinY, nullptr));
		$nc(dstChild)->setRect(srcChild);
	} else if (this->subsampleX == 1 && !this->adjustBitDepths) {
		int32_t sy = this->activeSrcMinY;
		int32_t dy = this->dstMinY;
		while (sy < this->srcMinY + this->srcHeight) {
			$var($Raster, srcRow, $nc(srcChild)->createChild(this->activeSrcMinX, sy, this->activeSrcWidth, 1, this->dstMinX, dy, nullptr));
			$nc(dstChild)->setRect(srcRow);
			sy += this->subsampleY;
			++dy;
		}
	} else {
		$var($ints, p, $nc(srcChild)->getPixel(this->srcMinX, this->srcMinY, ($ints*)nullptr));
		int32_t numBands = $nc(p)->length;
		int32_t sy = this->activeSrcMinY;
		int32_t dy = this->dstMinY;
		while (sy < this->activeSrcMinY + this->activeSrcHeight) {
			int32_t sx = this->activeSrcMinX;
			int32_t dx = this->dstMinX;
			while (sx < this->activeSrcMinX + this->activeSrcWidth) {
				srcChild->getPixel(sx, sy, p);
				if (this->adjustBitDepths) {
					for (int32_t band = 0; band < numBands; ++band) {
						p->set(band, $nc($nc(this->bitDepthScale)->get(band))->get(p->get(band)));
					}
				}
				$nc(dstChild)->setPixel(dx, dy, p);
				sx += this->subsampleX;
				++dx;
			}
			sy += this->subsampleY;
			++dy;
		}
	}
}

TIFFDecompressor::TIFFDecompressor() {
}

$Class* TIFFDecompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFDecompressor, name, initialize, &_TIFFDecompressor_ClassInfo_, allocate$TIFFDecompressor);
	return class$;
}

$Class* TIFFDecompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com