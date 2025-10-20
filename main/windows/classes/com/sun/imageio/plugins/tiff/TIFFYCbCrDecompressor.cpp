#include <com/sun/imageio/plugins/tiff/TIFFYCbCrDecompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageReader.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/EOFException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <javax/imageio/stream/MemoryCacheImageInputStream.h>
#include <jcpp.h>

#undef FRAC_BITS
#undef FRAC_SCALE
#undef GY
#undef TAG_REFERENCE_BLACK_WHITE
#undef TAG_Y_CB_CR_COEFFICIENTS
#undef TAG_Y_CB_CR_SUBSAMPLING
#undef Y

using $TIFFDecompressor = ::com::sun::imageio::plugins::tiff::TIFFDecompressor;
using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $TIFFImageReader = ::com::sun::imageio::plugins::tiff::TIFFImageReader;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $EOFException = ::java::io::EOFException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $ImageReader = ::javax::imageio::ImageReader;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;
using $MemoryCacheImageInputStream = ::javax::imageio::stream::MemoryCacheImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFYCbCrDecompressor_FieldInfo_[] = {
	{"FRAC_BITS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFYCbCrDecompressor, FRAC_BITS)},
	{"FRAC_SCALE", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFYCbCrDecompressor, FRAC_SCALE)},
	{"lumaRed", "F", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, lumaRed)},
	{"lumaGreen", "F", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, lumaGreen)},
	{"lumaBlue", "F", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, lumaBlue)},
	{"referenceBlackY", "F", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, referenceBlackY)},
	{"referenceWhiteY", "F", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, referenceWhiteY)},
	{"referenceBlackCb", "F", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, referenceBlackCb)},
	{"referenceWhiteCb", "F", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, referenceWhiteCb)},
	{"referenceBlackCr", "F", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, referenceBlackCr)},
	{"referenceWhiteCr", "F", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, referenceWhiteCr)},
	{"codingRangeY", "F", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, codingRangeY)},
	{"iYTab", "[I", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, iYTab)},
	{"iCbTab", "[I", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, iCbTab)},
	{"iCrTab", "[I", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, iCrTab)},
	{"iGYTab", "[I", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, iGYTab)},
	{"iGCbTab", "[I", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, iGCbTab)},
	{"iGCrTab", "[I", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, iGCrTab)},
	{"chromaSubsampleH", "I", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, chromaSubsampleH)},
	{"chromaSubsampleV", "I", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, chromaSubsampleV)},
	{"colorConvert", "Z", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, colorConvert)},
	{"decompressor", "Lcom/sun/imageio/plugins/tiff/TIFFDecompressor;", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, decompressor)},
	{"tmpImage", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $field(TIFFYCbCrDecompressor, tmpImage)},
	{}
};

$MethodInfo _TIFFYCbCrDecompressor_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/tiff/TIFFDecompressor;Z)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFYCbCrDecompressor::*)($TIFFDecompressor*,bool)>(&TIFFYCbCrDecompressor::init$))},
	{"beginDecoding", "()V", nullptr, $PUBLIC},
	{"clamp", "(I)B", nullptr, $PRIVATE, $method(static_cast<int8_t(TIFFYCbCrDecompressor::*)(int32_t)>(&TIFFYCbCrDecompressor::clamp))},
	{"decodeRaw", "([BIII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setActiveSrcHeight", "(I)V", nullptr, $PUBLIC},
	{"setActiveSrcMinX", "(I)V", nullptr, $PUBLIC},
	{"setActiveSrcMinY", "(I)V", nullptr, $PUBLIC},
	{"setActiveSrcWidth", "(I)V", nullptr, $PUBLIC},
	{"setBitsPerSample", "([I)V", nullptr, $PUBLIC},
	{"setByteCount", "(I)V", nullptr, $PUBLIC},
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
	{"warning", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFYCbCrDecompressor::*)($String*)>(&TIFFYCbCrDecompressor::warning))},
	{}
};

$ClassInfo _TIFFYCbCrDecompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFYCbCrDecompressor",
	"com.sun.imageio.plugins.tiff.TIFFDecompressor",
	nullptr,
	_TIFFYCbCrDecompressor_FieldInfo_,
	_TIFFYCbCrDecompressor_MethodInfo_
};

$Object* allocate$TIFFYCbCrDecompressor($Class* clazz) {
	return $of($alloc(TIFFYCbCrDecompressor));
}

float TIFFYCbCrDecompressor::FRAC_SCALE = 0.0;

void TIFFYCbCrDecompressor::init$($TIFFDecompressor* decompressor, bool colorConvert) {
	$TIFFDecompressor::init$();
	this->lumaRed = 0.299f;
	this->lumaGreen = 0.587f;
	this->lumaBlue = 0.114f;
	this->referenceBlackY = 0.0f;
	this->referenceWhiteY = 255.0f;
	this->referenceBlackCb = 128.0f;
	this->referenceWhiteCb = 255.0f;
	this->referenceBlackCr = 128.0f;
	this->referenceWhiteCr = 255.0f;
	this->codingRangeY = 255.0f;
	$set(this, iYTab, $new($ints, 256));
	$set(this, iCbTab, $new($ints, 256));
	$set(this, iCrTab, $new($ints, 256));
	$set(this, iGYTab, $new($ints, 256));
	$set(this, iGCbTab, $new($ints, 256));
	$set(this, iGCrTab, $new($ints, 256));
	this->chromaSubsampleH = 2;
	this->chromaSubsampleV = 2;
	$set(this, decompressor, decompressor);
	this->colorConvert = colorConvert;
}

void TIFFYCbCrDecompressor::warning($String* message) {
	if ($instanceOf($TIFFImageReader, this->reader)) {
		$nc(($cast($TIFFImageReader, this->reader)))->forwardWarningMessage(message);
	}
}

void TIFFYCbCrDecompressor::setReader($ImageReader* reader) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setReader(reader);
	}
	$TIFFDecompressor::setReader(reader);
}

void TIFFYCbCrDecompressor::setMetadata($IIOMetadata* metadata) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setMetadata(metadata);
	}
	$TIFFDecompressor::setMetadata(metadata);
}

void TIFFYCbCrDecompressor::setPhotometricInterpretation(int32_t photometricInterpretation) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setPhotometricInterpretation(photometricInterpretation);
	}
	$TIFFDecompressor::setPhotometricInterpretation(photometricInterpretation);
}

void TIFFYCbCrDecompressor::setCompression(int32_t compression) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setCompression(compression);
	}
	$TIFFDecompressor::setCompression(compression);
}

void TIFFYCbCrDecompressor::setPlanar(bool planar) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setPlanar(planar);
	}
	$TIFFDecompressor::setPlanar(planar);
}

void TIFFYCbCrDecompressor::setSamplesPerPixel(int32_t samplesPerPixel) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setSamplesPerPixel(samplesPerPixel);
	}
	$TIFFDecompressor::setSamplesPerPixel(samplesPerPixel);
}

void TIFFYCbCrDecompressor::setBitsPerSample($ints* bitsPerSample) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setBitsPerSample(bitsPerSample);
	}
	$TIFFDecompressor::setBitsPerSample(bitsPerSample);
}

void TIFFYCbCrDecompressor::setSampleFormat($ints* sampleFormat) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setSampleFormat(sampleFormat);
	}
	$TIFFDecompressor::setSampleFormat(sampleFormat);
}

void TIFFYCbCrDecompressor::setExtraSamples($ints* extraSamples) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setExtraSamples(extraSamples);
	}
	$TIFFDecompressor::setExtraSamples(extraSamples);
}

void TIFFYCbCrDecompressor::setColorMap($chars* colorMap) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setColorMap(colorMap);
	}
	$TIFFDecompressor::setColorMap(colorMap);
}

void TIFFYCbCrDecompressor::setStream($ImageInputStream* stream) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setStream(stream);
	} else {
		$TIFFDecompressor::setStream(stream);
	}
}

void TIFFYCbCrDecompressor::setOffset(int64_t offset) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setOffset(offset);
	}
	$TIFFDecompressor::setOffset(offset);
}

void TIFFYCbCrDecompressor::setByteCount(int32_t byteCount) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setByteCount(byteCount);
	}
	$TIFFDecompressor::setByteCount(byteCount);
}

void TIFFYCbCrDecompressor::setSrcMinX(int32_t srcMinX) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setSrcMinX(srcMinX);
	}
	$TIFFDecompressor::setSrcMinX(srcMinX);
}

void TIFFYCbCrDecompressor::setSrcMinY(int32_t srcMinY) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setSrcMinY(srcMinY);
	}
	$TIFFDecompressor::setSrcMinY(srcMinY);
}

void TIFFYCbCrDecompressor::setSrcWidth(int32_t srcWidth) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setSrcWidth(srcWidth);
	}
	$TIFFDecompressor::setSrcWidth(srcWidth);
}

void TIFFYCbCrDecompressor::setSrcHeight(int32_t srcHeight) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setSrcHeight(srcHeight);
	}
	$TIFFDecompressor::setSrcHeight(srcHeight);
}

void TIFFYCbCrDecompressor::setSourceXOffset(int32_t sourceXOffset) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setSourceXOffset(sourceXOffset);
	}
	$TIFFDecompressor::setSourceXOffset(sourceXOffset);
}

void TIFFYCbCrDecompressor::setDstXOffset(int32_t dstXOffset) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setDstXOffset(dstXOffset);
	}
	$TIFFDecompressor::setDstXOffset(dstXOffset);
}

void TIFFYCbCrDecompressor::setSourceYOffset(int32_t sourceYOffset) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setSourceYOffset(sourceYOffset);
	}
	$TIFFDecompressor::setSourceYOffset(sourceYOffset);
}

void TIFFYCbCrDecompressor::setDstYOffset(int32_t dstYOffset) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setDstYOffset(dstYOffset);
	}
	$TIFFDecompressor::setDstYOffset(dstYOffset);
}

void TIFFYCbCrDecompressor::setSourceBands($ints* sourceBands) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setSourceBands(sourceBands);
	}
	$TIFFDecompressor::setSourceBands(sourceBands);
}

void TIFFYCbCrDecompressor::setDestinationBands($ints* destinationBands) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setDestinationBands(destinationBands);
	}
	$TIFFDecompressor::setDestinationBands(destinationBands);
}

void TIFFYCbCrDecompressor::setImage($BufferedImage* image) {
	$useLocalCurrentObjectStackCache();
	if (this->decompressor != nullptr) {
		$var($ColorModel, cm, $nc(image)->getColorModel());
		$var($ColorModel, var$0, cm);
		$var($WritableRaster, var$1, $nc($(image->getRaster()))->createCompatibleWritableRaster(1, 1));
		$set(this, tmpImage, $new($BufferedImage, var$0, var$1, $nc(cm)->isAlphaPremultiplied(), ($Hashtable*)nullptr));
		$nc(this->decompressor)->setImage(this->tmpImage);
	}
	$TIFFDecompressor::setImage(image);
}

void TIFFYCbCrDecompressor::setDstMinX(int32_t dstMinX) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setDstMinX(dstMinX);
	}
	$TIFFDecompressor::setDstMinX(dstMinX);
}

void TIFFYCbCrDecompressor::setDstMinY(int32_t dstMinY) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setDstMinY(dstMinY);
	}
	$TIFFDecompressor::setDstMinY(dstMinY);
}

void TIFFYCbCrDecompressor::setDstWidth(int32_t dstWidth) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setDstWidth(dstWidth);
	}
	$TIFFDecompressor::setDstWidth(dstWidth);
}

void TIFFYCbCrDecompressor::setDstHeight(int32_t dstHeight) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setDstHeight(dstHeight);
	}
	$TIFFDecompressor::setDstHeight(dstHeight);
}

void TIFFYCbCrDecompressor::setActiveSrcMinX(int32_t activeSrcMinX) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setActiveSrcMinX(activeSrcMinX);
	}
	$TIFFDecompressor::setActiveSrcMinX(activeSrcMinX);
}

void TIFFYCbCrDecompressor::setActiveSrcMinY(int32_t activeSrcMinY) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setActiveSrcMinY(activeSrcMinY);
	}
	$TIFFDecompressor::setActiveSrcMinY(activeSrcMinY);
}

void TIFFYCbCrDecompressor::setActiveSrcWidth(int32_t activeSrcWidth) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setActiveSrcWidth(activeSrcWidth);
	}
	$TIFFDecompressor::setActiveSrcWidth(activeSrcWidth);
}

void TIFFYCbCrDecompressor::setActiveSrcHeight(int32_t activeSrcHeight) {
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->setActiveSrcHeight(activeSrcHeight);
	}
	$TIFFDecompressor::setActiveSrcHeight(activeSrcHeight);
}

int8_t TIFFYCbCrDecompressor::clamp(int32_t f) {
	if (f < 0) {
		return (int8_t)0;
	} else if (f > 255 * 0x00010000) {
		return (int8_t)255;
	} else {
		return (int8_t)(f >> 16);
	}
}

void TIFFYCbCrDecompressor::beginDecoding() {
	$useLocalCurrentObjectStackCache();
	if (this->decompressor != nullptr) {
		$nc(this->decompressor)->beginDecoding();
	}
	$var($TIFFImageMetadata, tmetadata, $cast($TIFFImageMetadata, this->metadata));
	$var($TIFFField, f, nullptr);
	$assign(f, $nc(tmetadata)->getTIFFField($BaselineTIFFTagSet::TAG_Y_CB_CR_SUBSAMPLING));
	if (f != nullptr) {
		if (f->getCount() == 2) {
			this->chromaSubsampleH = f->getAsInt(0);
			this->chromaSubsampleV = f->getAsInt(1);
			if (this->chromaSubsampleH != 1 && this->chromaSubsampleH != 2 && this->chromaSubsampleH != 4) {
				warning($$str({"Y_CB_CR_SUBSAMPLING[0] has illegal value "_s, $$str(this->chromaSubsampleH), " (should be 1, 2, or 4), setting to 1"_s}));
				this->chromaSubsampleH = 1;
			}
			if (this->chromaSubsampleV != 1 && this->chromaSubsampleV != 2 && this->chromaSubsampleV != 4) {
				warning($$str({"Y_CB_CR_SUBSAMPLING[1] has illegal value "_s, $$str(this->chromaSubsampleV), " (should be 1, 2, or 4), setting to 1"_s}));
				this->chromaSubsampleV = 1;
			}
		} else {
			warning("Y_CB_CR_SUBSAMPLING count != 2, assuming no subsampling"_s);
		}
	}
	$assign(f, tmetadata->getTIFFField($BaselineTIFFTagSet::TAG_Y_CB_CR_COEFFICIENTS));
	if (f != nullptr) {
		if (f->getCount() == 3) {
			this->lumaRed = f->getAsFloat(0);
			this->lumaGreen = f->getAsFloat(1);
			this->lumaBlue = f->getAsFloat(2);
		} else {
			warning("Y_CB_CR_COEFFICIENTS count != 3, assuming default values for CCIR 601-1"_s);
		}
	}
	$assign(f, tmetadata->getTIFFField($BaselineTIFFTagSet::TAG_REFERENCE_BLACK_WHITE));
	if (f != nullptr) {
		if (f->getCount() == 6) {
			this->referenceBlackY = f->getAsFloat(0);
			this->referenceWhiteY = f->getAsFloat(1);
			this->referenceBlackCb = f->getAsFloat(2);
			this->referenceWhiteCb = f->getAsFloat(3);
			this->referenceBlackCr = f->getAsFloat(4);
			this->referenceWhiteCr = f->getAsFloat(5);
		} else {
			warning("REFERENCE_BLACK_WHITE count != 6, ignoring it"_s);
		}
	} else {
		warning("REFERENCE_BLACK_WHITE not found, assuming 0-255/128-255/128-255"_s);
	}
	this->colorConvert = true;
	float BCb = (2.0f - 2.0f * this->lumaBlue);
	float RCr = (2.0f - 2.0f * this->lumaRed);
	float GY = (1.0f - this->lumaBlue - this->lumaRed) / this->lumaGreen;
	float GCb = 2.0f * this->lumaBlue * (this->lumaBlue - 1.0f) / this->lumaGreen;
	float GCr = 2.0f * this->lumaRed * (this->lumaRed - 1.0f) / this->lumaGreen;
	for (int32_t i = 0; i < 256; ++i) {
		float fY = (i - this->referenceBlackY) * this->codingRangeY / (this->referenceWhiteY - this->referenceBlackY);
		float fCb = (i - this->referenceBlackCb) * 127.0f / (this->referenceWhiteCb - this->referenceBlackCb);
		float fCr = (i - this->referenceBlackCr) * 127.0f / (this->referenceWhiteCr - this->referenceBlackCr);
		$nc(this->iYTab)->set(i, $cast(int32_t, (fY * TIFFYCbCrDecompressor::FRAC_SCALE)));
		$nc(this->iCbTab)->set(i, $cast(int32_t, (fCb * BCb * TIFFYCbCrDecompressor::FRAC_SCALE)));
		$nc(this->iCrTab)->set(i, $cast(int32_t, (fCr * RCr * TIFFYCbCrDecompressor::FRAC_SCALE)));
		$nc(this->iGYTab)->set(i, $cast(int32_t, (fY * GY * TIFFYCbCrDecompressor::FRAC_SCALE)));
		$nc(this->iGCbTab)->set(i, $cast(int32_t, (fCb * GCb * TIFFYCbCrDecompressor::FRAC_SCALE)));
		$nc(this->iGCrTab)->set(i, $cast(int32_t, (fCr * GCr * TIFFYCbCrDecompressor::FRAC_SCALE)));
	}
}

void TIFFYCbCrDecompressor::decodeRaw($bytes* buf, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) {
	$useLocalCurrentObjectStackCache();
	int32_t elementsPerPacket = this->chromaSubsampleH * this->chromaSubsampleV + 2;
	$var($bytes, packet, $new($bytes, elementsPerPacket));
	if (this->decompressor != nullptr) {
		int32_t bytesPerRow = 3 * this->srcWidth;
		$var($bytes, tmpBuf, $new($bytes, bytesPerRow * this->srcHeight));
		$nc(this->decompressor)->decodeRaw(tmpBuf, dstOffset, bitsPerPixel, bytesPerRow);
		$var($ByteArrayInputStream, byteStream, $new($ByteArrayInputStream, tmpBuf));
		$set(this, stream, $new($MemoryCacheImageInputStream, byteStream));
	} else {
		$nc(this->stream)->seek(this->offset);
	}
	for (int32_t y = this->srcMinY; y < this->srcMinY + this->srcHeight; y += this->chromaSubsampleV) {
		for (int32_t x = this->srcMinX; x < this->srcMinX + this->srcWidth; x += this->chromaSubsampleH) {
			try {
				$nc(this->stream)->readFully(packet);
			} catch ($EOFException&) {
				$var($EOFException, e, $catch());
				return;
			}
			int8_t Cb = packet->get(elementsPerPacket - 2);
			int8_t Cr = packet->get(elementsPerPacket - 1);
			int32_t iCb = 0;
			int32_t iCr = 0;
			int32_t iGCb = 0;
			int32_t iGCr = 0;
			if (this->colorConvert) {
				int32_t Cbp = (int32_t)(Cb & (uint32_t)255);
				int32_t Crp = (int32_t)(Cr & (uint32_t)255);
				iCb = $nc(this->iCbTab)->get(Cbp);
				iCr = $nc(this->iCrTab)->get(Crp);
				iGCb = $nc(this->iGCbTab)->get(Cbp);
				iGCr = $nc(this->iGCrTab)->get(Crp);
			}
			int32_t yIndex = 0;
			for (int32_t v = 0; v < this->chromaSubsampleV; ++v) {
				int32_t idx = dstOffset + 3 * (x - this->srcMinX) + scanlineStride * (y - this->srcMinY + v);
				if (y + v >= this->srcMinY + this->srcHeight) {
					break;
				}
				for (int32_t h = 0; h < this->chromaSubsampleH; ++h) {
					if (x + h >= this->srcMinX + this->srcWidth) {
						break;
					}
					int8_t Y = packet->get(yIndex++);
					if (this->colorConvert) {
						int32_t Yp = (int32_t)(Y & (uint32_t)255);
						int32_t iY = $nc(this->iYTab)->get(Yp);
						int32_t iGY = $nc(this->iGYTab)->get(Yp);
						int32_t iR = iY + iCr;
						int32_t iG = iGY + iGCb + iGCr;
						int32_t iB = iY + iCb;
						int8_t r = clamp(iR);
						int8_t g = clamp(iG);
						int8_t b = clamp(iB);
						$nc(buf)->set(idx, r);
						buf->set(idx + 1, g);
						buf->set(idx + 2, b);
					} else {
						$nc(buf)->set(idx, Y);
						buf->set(idx + 1, Cb);
						buf->set(idx + 2, Cr);
					}
					idx += 3;
				}
			}
		}
	}
}

TIFFYCbCrDecompressor::TIFFYCbCrDecompressor() {
}

void clinit$TIFFYCbCrDecompressor($Class* class$) {
	TIFFYCbCrDecompressor::FRAC_SCALE = (float)($sl(1, TIFFYCbCrDecompressor::FRAC_BITS));
}

$Class* TIFFYCbCrDecompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFYCbCrDecompressor, name, initialize, &_TIFFYCbCrDecompressor_ClassInfo_, clinit$TIFFYCbCrDecompressor, allocate$TIFFYCbCrDecompressor);
	return class$;
}

$Class* TIFFYCbCrDecompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com