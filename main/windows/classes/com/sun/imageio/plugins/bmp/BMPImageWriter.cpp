#include <com/sun/imageio/plugins/bmp/BMPImageWriter.h>

#include <com/sun/imageio/plugins/bmp/BMPCompressionTypes.h>
#include <com/sun/imageio/plugins/bmp/BMPConstants.h>
#include <com/sun/imageio/plugins/bmp/BMPImageWriter$1.h>
#include <com/sun/imageio/plugins/bmp/BMPImageWriter$2.h>
#include <com/sun/imageio/plugins/bmp/BMPImageWriter$IIOWriteProgressAdapter.h>
#include <com/sun/imageio/plugins/bmp/BMPMetadata.h>
#include <com/sun/imageio/plugins/common/I18N.h>
#include <com/sun/imageio/plugins/common/ImageUtil.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/BandedSampleModel.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DataBufferShort.h>
#include <java/awt/image/DataBufferUShort.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/MultiPixelPackedSampleModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/nio/ByteOrder.h>
#include <java/util/Iterator.h>
#include <javax/imageio/IIOImage.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/event/IIOWriteProgressListener.h>
#include <javax/imageio/event/IIOWriteWarningListener.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/plugins/bmp/BMPImageWriteParam.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

#undef BI_BITFIELDS
#undef BI_JPEG
#undef BI_PNG
#undef BI_RGB
#undef BI_RLE4
#undef BI_RLE8
#undef LITTLE_ENDIAN
#undef MODE_COPY_FROM_METADATA
#undef MODE_DEFAULT
#undef MODE_EXPLICIT
#undef TYPE_BYTE
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT
#undef TYPE_USHORT_565_RGB
#undef VERSION_3

using $BMPCompressionTypes = ::com::sun::imageio::plugins::bmp::BMPCompressionTypes;
using $BMPConstants = ::com::sun::imageio::plugins::bmp::BMPConstants;
using $BMPImageWriter$1 = ::com::sun::imageio::plugins::bmp::BMPImageWriter$1;
using $BMPImageWriter$2 = ::com::sun::imageio::plugins::bmp::BMPImageWriter$2;
using $BMPImageWriter$IIOWriteProgressAdapter = ::com::sun::imageio::plugins::bmp::BMPImageWriter$IIOWriteProgressAdapter;
using $BMPMetadata = ::com::sun::imageio::plugins::bmp::BMPMetadata;
using $I18N = ::com::sun::imageio::plugins::common::I18N;
using $ImageUtil = ::com::sun::imageio::plugins::common::ImageUtil;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $BandedSampleModel = ::java::awt::image::BandedSampleModel;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DataBufferShort = ::java::awt::image::DataBufferShort;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $MultiPixelPackedSampleModel = ::java::awt::image::MultiPixelPackedSampleModel;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteOrder = ::java::nio::ByteOrder;
using $Iterator = ::java::util::Iterator;
using $IIOImage = ::javax::imageio::IIOImage;
using $IIOParam = ::javax::imageio::IIOParam;
using $ImageIO = ::javax::imageio::ImageIO;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $IIOWriteProgressListener = ::javax::imageio::event::IIOWriteProgressListener;
using $IIOWriteWarningListener = ::javax::imageio::event::IIOWriteWarningListener;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $BMPImageWriteParam = ::javax::imageio::plugins::bmp::BMPImageWriteParam;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$FieldInfo _BMPImageWriter_FieldInfo_[] = {
	{"stream", "Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PRIVATE, $field(BMPImageWriter, stream)},
	{"embedded_stream", "Ljava/io/ByteArrayOutputStream;", nullptr, $PRIVATE, $field(BMPImageWriter, embedded_stream)},
	{"version", "I", nullptr, $PRIVATE, $field(BMPImageWriter, version)},
	{"compressionType", "I", nullptr, $PRIVATE, $field(BMPImageWriter, compressionType)},
	{"isTopDown", "Z", nullptr, $PRIVATE, $field(BMPImageWriter, isTopDown)},
	{"w", "I", nullptr, $PRIVATE, $field(BMPImageWriter, w)},
	{"h", "I", nullptr, $PRIVATE, $field(BMPImageWriter, h)},
	{"compImageSize", "I", nullptr, $PRIVATE, $field(BMPImageWriter, compImageSize)},
	{"bitMasks", "[I", nullptr, $PRIVATE, $field(BMPImageWriter, bitMasks)},
	{"bitPos", "[I", nullptr, $PRIVATE, $field(BMPImageWriter, bitPos)},
	{"bpixels", "[B", nullptr, $PRIVATE, $field(BMPImageWriter, bpixels)},
	{"spixels", "[S", nullptr, $PRIVATE, $field(BMPImageWriter, spixels)},
	{"ipixels", "[I", nullptr, $PRIVATE, $field(BMPImageWriter, ipixels)},
	{}
};

$MethodInfo _BMPImageWriter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/imageio/spi/ImageWriterSpi;)V", nullptr, $PUBLIC, $method(static_cast<void(BMPImageWriter::*)($ImageWriterSpi*)>(&BMPImageWriter::init$))},
	{"access$000", "(Lcom/sun/imageio/plugins/bmp/BMPImageWriter;F)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(BMPImageWriter*,float)>(&BMPImageWriter::access$000))},
	{"access$100", "(Lcom/sun/imageio/plugins/bmp/BMPImageWriter;ILjava/lang/String;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(BMPImageWriter*,int32_t,$String*)>(&BMPImageWriter::access$100))},
	{"canEncodeImage", "(ILjava/awt/image/ColorModel;Ljava/awt/image/SampleModel;)Z", nullptr, $PROTECTED},
	{"canEncodeImage", "(ILjavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PROTECTED},
	{"canWriteRasters", "()Z", nullptr, $PUBLIC},
	{"convertImageMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"convertStreamMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"encodeRLE4", "([BI)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageWriter::*)($bytes*,int32_t)>(&BMPImageWriter::encodeRLE4)), "java.io.IOException"},
	{"encodeRLE8", "([BI)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageWriter::*)($bytes*,int32_t)>(&BMPImageWriter::encodeRLE8)), "java.io.IOException"},
	{"firstLowBit", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BMPImageWriter::*)(int32_t)>(&BMPImageWriter::firstLowBit))},
	{"getDefaultImageMetadata", "(Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getDefaultStreamMetadata", "(Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getDefaultWriteParam", "()Ljavax/imageio/ImageWriteParam;", nullptr, $PUBLIC},
	{"getPreferredCompressionType", "(Ljava/awt/image/ColorModel;Ljava/awt/image/SampleModel;)I", nullptr, $PROTECTED},
	{"getPreferredCompressionType", "(Ljavax/imageio/ImageTypeSpecifier;)I", nullptr, $PROTECTED},
	{"incCompImageSize", "(I)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(BMPImageWriter::*)(int32_t)>(&BMPImageWriter::incCompImageSize))},
	{"isEven", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(BMPImageWriter::*)(int32_t)>(&BMPImageWriter::isEven))},
	{"reset", "()V", nullptr, $PUBLIC},
	{"roundBpp", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BMPImageWriter::*)(int32_t)>(&BMPImageWriter::roundBpp))},
	{"setOutput", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeEmbedded", "(Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageWriter::*)($IIOImage*,$ImageWriteParam*)>(&BMPImageWriter::writeEmbedded)), "java.io.IOException"},
	{"writeFileHeader", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageWriter::*)(int32_t,int32_t)>(&BMPImageWriter::writeFileHeader)), "java.io.IOException"},
	{"writeInfoHeader", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageWriter::*)(int32_t,int32_t)>(&BMPImageWriter::writeInfoHeader)), "java.io.IOException"},
	{"writeMaskToPalette", "(II[B[B[B[B)V", nullptr, $PROTECTED},
	{"writePixels", "(III[IIILjava/awt/image/IndexColorModel;)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageWriter::*)(int32_t,int32_t,int32_t,$ints*,int32_t,int32_t,$IndexColorModel*)>(&BMPImageWriter::writePixels)), "java.io.IOException"},
	{"writeSize", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(BMPImageWriter::*)(int32_t,int32_t)>(&BMPImageWriter::writeSize)), "java.io.IOException"},
	{}
};

$InnerClassInfo _BMPImageWriter_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.bmp.BMPImageWriter$IIOWriteProgressAdapter", "com.sun.imageio.plugins.bmp.BMPImageWriter", "IIOWriteProgressAdapter", $PRIVATE | $STATIC},
	{"com.sun.imageio.plugins.bmp.BMPImageWriter$2", nullptr, nullptr, 0},
	{"com.sun.imageio.plugins.bmp.BMPImageWriter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BMPImageWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPImageWriter",
	"javax.imageio.ImageWriter",
	"com.sun.imageio.plugins.bmp.BMPConstants",
	_BMPImageWriter_FieldInfo_,
	_BMPImageWriter_MethodInfo_,
	nullptr,
	nullptr,
	_BMPImageWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.bmp.BMPImageWriter$IIOWriteProgressAdapter,com.sun.imageio.plugins.bmp.BMPImageWriter$2,com.sun.imageio.plugins.bmp.BMPImageWriter$1"
};

$Object* allocate$BMPImageWriter($Class* clazz) {
	return $of($alloc(BMPImageWriter));
}

int32_t BMPImageWriter::hashCode() {
	 return this->$ImageWriter::hashCode();
}

bool BMPImageWriter::equals(Object$* arg0) {
	 return this->$ImageWriter::equals(arg0);
}

$Object* BMPImageWriter::clone() {
	 return this->$ImageWriter::clone();
}

$String* BMPImageWriter::toString() {
	 return this->$ImageWriter::toString();
}

void BMPImageWriter::finalize() {
	this->$ImageWriter::finalize();
}

void BMPImageWriter::access$100(BMPImageWriter* x0, int32_t x1, $String* x2) {
	$init(BMPImageWriter);
	$nc(x0)->processWarningOccurred(x1, x2);
}

void BMPImageWriter::access$000(BMPImageWriter* x0, float x1) {
	$init(BMPImageWriter);
	$nc(x0)->processImageProgress(x1);
}

void BMPImageWriter::init$($ImageWriterSpi* originator) {
	$ImageWriter::init$(originator);
	$set(this, stream, nullptr);
	$set(this, embedded_stream, nullptr);
	this->compImageSize = 0;
}

void BMPImageWriter::setOutput(Object$* output) {
	$ImageWriter::setOutput(output);
	if (output != nullptr) {
		if (!($instanceOf($ImageOutputStream, output))) {
			$throwNew($IllegalArgumentException, $($I18N::getString("BMPImageWriter0"_s)));
		}
		$set(this, stream, $cast($ImageOutputStream, output));
		$init($ByteOrder);
		$nc(this->stream)->setByteOrder($ByteOrder::LITTLE_ENDIAN);
	} else {
		$set(this, stream, nullptr);
	}
}

$ImageWriteParam* BMPImageWriter::getDefaultWriteParam() {
	return $new($BMPImageWriteParam);
}

$IIOMetadata* BMPImageWriter::getDefaultStreamMetadata($ImageWriteParam* param) {
	return nullptr;
}

$IIOMetadata* BMPImageWriter::getDefaultImageMetadata($ImageTypeSpecifier* imageType, $ImageWriteParam* param) {
	$useLocalCurrentObjectStackCache();
	$var($BMPMetadata, meta, $new($BMPMetadata));
	$init($BMPConstants);
	$set(meta, bmpVersion, $BMPConstants::VERSION_3);
	meta->compression = getPreferredCompressionType(imageType);
	if (param != nullptr && param->getCompressionMode() == $ImageWriteParam::MODE_EXPLICIT) {
		meta->compression = $BMPCompressionTypes::getType($(param->getCompressionType()));
	}
	meta->bitsPerPixel = (int16_t)$nc($($nc(imageType)->getColorModel()))->getPixelSize();
	return meta;
}

$IIOMetadata* BMPImageWriter::convertStreamMetadata($IIOMetadata* inData, $ImageWriteParam* param) {
	return nullptr;
}

$IIOMetadata* BMPImageWriter::convertImageMetadata($IIOMetadata* metadata, $ImageTypeSpecifier* type, $ImageWriteParam* param) {
	return nullptr;
}

bool BMPImageWriter::canWriteRasters() {
	return true;
}

void BMPImageWriter::write($IIOMetadata* streamMetadata, $IIOImage* image, $ImageWriteParam* param$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ImageWriteParam, param, param$renamed);
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, $($I18N::getString("BMPImageWriter7"_s)));
	}
	if (image == nullptr) {
		$throwNew($IllegalArgumentException, $($I18N::getString("BMPImageWriter8"_s)));
	}
	clearAbortRequest();
	processImageStarted(0);
	if (abortRequested()) {
		processWriteAborted();
		return;
	}
	if (param == nullptr) {
		$assign(param, getDefaultWriteParam());
	}
	$var($BMPImageWriteParam, bmpParam, $cast($BMPImageWriteParam, param));
	int32_t bitsPerPixel = 24;
	bool isPalette = false;
	int32_t paletteEntries = 0;
	$var($IndexColorModel, icm, nullptr);
	$var($RenderedImage, input, nullptr);
	$var($Raster, inputRaster, nullptr);
	bool writeRaster = $nc(image)->hasRaster();
	$var($Rectangle, sourceRegion, $nc(param)->getSourceRegion());
	$var($SampleModel, sampleModel, nullptr);
	$var($ColorModel, colorModel, nullptr);
	this->compImageSize = 0;
	if (writeRaster) {
		$assign(inputRaster, image->getRaster());
		$assign(sampleModel, $nc(inputRaster)->getSampleModel());
		$assign(colorModel, $ImageUtil::createColorModel(nullptr, sampleModel));
		if (sourceRegion == nullptr) {
			$assign(sourceRegion, inputRaster->getBounds());
		} else {
			$assign(sourceRegion, $nc(sourceRegion)->intersection($(inputRaster->getBounds())));
		}
	} else {
		$assign(input, image->getRenderedImage());
		$assign(sampleModel, $nc(input)->getSampleModel());
		$assign(colorModel, input->getColorModel());
		int32_t var$0 = input->getMinX();
		int32_t var$1 = input->getMinY();
		int32_t var$2 = input->getWidth();
		$var($Rectangle, rect, $new($Rectangle, var$0, var$1, var$2, input->getHeight()));
		if (sourceRegion == nullptr) {
			$assign(sourceRegion, rect);
		} else {
			$assign(sourceRegion, $nc(sourceRegion)->intersection(rect));
		}
	}
	$var($IIOMetadata, imageMetadata, image->getMetadata());
	$var($BMPMetadata, bmpImageMetadata, nullptr);
	if (imageMetadata != nullptr && $instanceOf($BMPMetadata, imageMetadata)) {
		$assign(bmpImageMetadata, $cast($BMPMetadata, imageMetadata));
	} else {
		$var($ImageTypeSpecifier, imageType, $new($ImageTypeSpecifier, colorModel, sampleModel));
		$assign(bmpImageMetadata, $cast($BMPMetadata, getDefaultImageMetadata(imageType, param)));
	}
	if ($nc(sourceRegion)->isEmpty()) {
		$throwNew($RuntimeException, $($I18N::getString("BMPImageWrite0"_s)));
	}
	int32_t scaleX = param->getSourceXSubsampling();
	int32_t scaleY = param->getSourceYSubsampling();
	int32_t xOffset = param->getSubsamplingXOffset();
	int32_t yOffset = param->getSubsamplingYOffset();
	int32_t dataType = $nc(sampleModel)->getDataType();
	$nc(sourceRegion)->translate(xOffset, yOffset);
	sourceRegion->width -= xOffset;
	sourceRegion->height -= yOffset;
	int32_t minX = $div(sourceRegion->x, scaleX);
	int32_t minY = $div(sourceRegion->y, scaleY);
	this->w = $div((sourceRegion->width + scaleX - 1), scaleX);
	this->h = $div((sourceRegion->height + scaleY - 1), scaleY);
	xOffset = $mod(sourceRegion->x, scaleX);
	yOffset = $mod(sourceRegion->y, scaleY);
	$var($Rectangle, destinationRegion, $new($Rectangle, minX, minY, this->w, this->h));
	bool noTransform = destinationRegion->equals(sourceRegion);
	$var($ints, sourceBands, param->getSourceBands());
	bool noSubband = true;
	int32_t numBands = sampleModel->getNumBands();
	if (sourceBands != nullptr) {
		$assign(sampleModel, sampleModel->createSubsetSampleModel(sourceBands));
		$assign(colorModel, nullptr);
		noSubband = false;
		numBands = $nc(sampleModel)->getNumBands();
	} else {
		$assign(sourceBands, $new($ints, numBands));
		for (int32_t i = 0; i < numBands; ++i) {
			sourceBands->set(i, i);
		}
	}
	$var($ints, bandOffsets, nullptr);
	bool bgrOrder = true;
	if ($instanceOf($ComponentSampleModel, sampleModel)) {
		$assign(bandOffsets, $nc(($cast($ComponentSampleModel, sampleModel)))->getBandOffsets());
		if ($instanceOf($BandedSampleModel, sampleModel)) {
			bgrOrder = false;
		} else {
			for (int32_t i = 0; i < $nc(bandOffsets)->length; ++i) {
				bgrOrder &= (bandOffsets->get(i) == (bandOffsets->length - i - 1));
			}
		}
	} else if ($instanceOf($SinglePixelPackedSampleModel, sampleModel)) {
		$var($ints, bitOffsets, $nc(($cast($SinglePixelPackedSampleModel, sampleModel)))->getBitOffsets());
		for (int32_t i = 0; i < $nc(bitOffsets)->length - 1; ++i) {
			bgrOrder &= bitOffsets->get(i) > bitOffsets->get(i + 1);
		}
	}
	if (bandOffsets == nullptr) {
		$assign(bandOffsets, $new($ints, numBands));
		for (int32_t i = 0; i < numBands; ++i) {
			bandOffsets->set(i, i);
		}
	}
	noTransform &= bgrOrder;
	$var($ints, sampleSize, sampleModel->getSampleSize());
	int32_t destScanlineBytes = this->w * numBands;
	switch ($nc(bmpParam)->getCompressionMode()) {
	case $ImageWriteParam::MODE_EXPLICIT:
		{
			this->compressionType = $BMPCompressionTypes::getType($(bmpParam->getCompressionType()));
			break;
		}
	case $ImageWriteParam::MODE_COPY_FROM_METADATA:
		{
			this->compressionType = $nc(bmpImageMetadata)->compression;
			break;
		}
	case $ImageWriteParam::MODE_DEFAULT:
		{
			this->compressionType = getPreferredCompressionType(colorModel, sampleModel);
			break;
		}
	default:
		{
			this->compressionType = $BMPConstants::BI_RGB;
		}
	}
	if (!canEncodeImage(this->compressionType, colorModel, sampleModel)) {
		$throwNew($IOException, $$str({"Image can not be encoded with compression type "_s, $($BMPCompressionTypes::getName(this->compressionType))}));
	}
	$var($bytes, r, nullptr);
	$var($bytes, g, nullptr);
	$var($bytes, b, nullptr);
	$var($bytes, a, nullptr);
	if (this->compressionType == $BMPConstants::BI_BITFIELDS) {
		bitsPerPixel = $DataBuffer::getDataTypeSize(sampleModel->getDataType());
		if (bitsPerPixel != 16 && bitsPerPixel != 32) {
			bitsPerPixel = 32;
			noTransform = false;
		}
		destScanlineBytes = (this->w * bitsPerPixel + 7) >> 3;
		isPalette = true;
		paletteEntries = 3;
		$assign(r, $new($bytes, paletteEntries));
		$assign(g, $new($bytes, paletteEntries));
		$assign(b, $new($bytes, paletteEntries));
		$assign(a, $new($bytes, paletteEntries));
		int32_t rmask = 0x00FF0000;
		int32_t gmask = 0x0000FF00;
		int32_t bmask = 255;
		if (bitsPerPixel == 16) {
			if ($instanceOf($DirectColorModel, colorModel)) {
				$var($DirectColorModel, dcm, $cast($DirectColorModel, colorModel));
				rmask = $nc(dcm)->getRedMask();
				gmask = dcm->getGreenMask();
				bmask = dcm->getBlueMask();
			} else {
				$throwNew($IOException, $$str({"Image can not be encoded with compression type "_s, $($BMPCompressionTypes::getName(this->compressionType))}));
			}
		}
		writeMaskToPalette(rmask, 0, r, g, b, a);
		writeMaskToPalette(gmask, 1, r, g, b, a);
		writeMaskToPalette(bmask, 2, r, g, b, a);
		if (!noTransform) {
			$set(this, bitMasks, $new($ints, 3));
			$nc(this->bitMasks)->set(0, rmask);
			$nc(this->bitMasks)->set(1, gmask);
			$nc(this->bitMasks)->set(2, bmask);
			$set(this, bitPos, $new($ints, 3));
			$nc(this->bitPos)->set(0, firstLowBit(rmask));
			$nc(this->bitPos)->set(1, firstLowBit(gmask));
			$nc(this->bitPos)->set(2, firstLowBit(bmask));
		}
		if ($instanceOf($IndexColorModel, colorModel)) {
			$assign(icm, $cast($IndexColorModel, colorModel));
		}
	} else if ($instanceOf($IndexColorModel, colorModel)) {
		isPalette = true;
		$assign(icm, $cast($IndexColorModel, colorModel));
		paletteEntries = $nc(icm)->getMapSize();
		if (paletteEntries <= 2) {
			bitsPerPixel = 1;
			destScanlineBytes = (this->w + 7) >> 3;
		} else if (paletteEntries <= 16) {
			bitsPerPixel = 4;
			destScanlineBytes = (this->w + 1) >> 1;
		} else if (paletteEntries <= 256) {
			bitsPerPixel = 8;
		} else {
			bitsPerPixel = 24;
			isPalette = false;
			paletteEntries = 0;
			destScanlineBytes = this->w * 3;
		}
		if (isPalette == true) {
			$assign(r, $new($bytes, paletteEntries));
			$assign(g, $new($bytes, paletteEntries));
			$assign(b, $new($bytes, paletteEntries));
			$assign(a, $new($bytes, paletteEntries));
			icm->getAlphas(a);
			icm->getReds(r);
			icm->getGreens(g);
			icm->getBlues(b);
		}
	} else if (numBands == 1) {
		isPalette = true;
		paletteEntries = 256;
		bitsPerPixel = $nc(sampleSize)->get(0);
		destScanlineBytes = ((this->w * bitsPerPixel + 7) >> 3);
		$assign(r, $new($bytes, 256));
		$assign(g, $new($bytes, 256));
		$assign(b, $new($bytes, 256));
		$assign(a, $new($bytes, 256));
		for (int32_t i = 0; i < 256; ++i) {
			r->set(i, (int8_t)i);
			g->set(i, (int8_t)i);
			b->set(i, (int8_t)i);
			a->set(i, (int8_t)255);
		}
	} else if ($instanceOf($SinglePixelPackedSampleModel, sampleModel) && noSubband) {
		$var($ints, sample_sizes, sampleModel->getSampleSize());
		bitsPerPixel = 0;
		{
			$var($ints, arr$, sample_sizes);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t size = arr$->get(i$);
				{
					bitsPerPixel += size;
				}
			}
		}
		bitsPerPixel = roundBpp(bitsPerPixel);
		if (bitsPerPixel != $DataBuffer::getDataTypeSize(sampleModel->getDataType())) {
			noTransform = false;
		}
		destScanlineBytes = (this->w * bitsPerPixel + 7) >> 3;
	}
	int32_t fileSize = 0;
	int32_t offset = 0;
	int32_t headerSize = 0;
	int32_t imageSize = 0;
	int32_t xPelsPerMeter = 0;
	int32_t yPelsPerMeter = 0;
	int32_t colorsUsed = 0;
	int32_t colorsImportant = paletteEntries;
	int32_t padding = destScanlineBytes % 4;
	if (padding != 0) {
		padding = 4 - padding;
	}
	offset = 54 + paletteEntries * 4;
	imageSize = (destScanlineBytes + padding) * this->h;
	fileSize = imageSize + offset;
	headerSize = 40;
	int64_t headPos = $nc(this->stream)->getStreamPosition();
	writeFileHeader(fileSize, offset);
	if (this->compressionType == $BMPConstants::BI_RGB || this->compressionType == $BMPConstants::BI_BITFIELDS) {
		this->isTopDown = bmpParam->isTopDown();
	} else {
		this->isTopDown = false;
	}
	writeInfoHeader(headerSize, bitsPerPixel);
	$nc(this->stream)->writeInt(this->compressionType);
	$nc(this->stream)->writeInt(imageSize);
	$nc(this->stream)->writeInt(xPelsPerMeter);
	$nc(this->stream)->writeInt(yPelsPerMeter);
	$nc(this->stream)->writeInt(colorsUsed);
	$nc(this->stream)->writeInt(colorsImportant);
	if (isPalette == true) {
		if (this->compressionType == $BMPConstants::BI_BITFIELDS) {
			for (int32_t i = 0; i < 3; ++i) {
				int32_t mask = ((int32_t)($nc(a)->get(i) & (uint32_t)255)) + (((int32_t)($nc(r)->get(i) & (uint32_t)255)) * 256) + (((int32_t)($nc(g)->get(i) & (uint32_t)255)) * 0x00010000) + (((int32_t)($nc(b)->get(i) & (uint32_t)255)) * 0x01000000);
				$nc(this->stream)->writeInt(mask);
			}
		} else {
			for (int32_t i = 0; i < paletteEntries; ++i) {
				$nc(this->stream)->writeByte($nc(b)->get(i));
				$nc(this->stream)->writeByte($nc(g)->get(i));
				$nc(this->stream)->writeByte($nc(r)->get(i));
				$nc(this->stream)->writeByte($nc(a)->get(i));
			}
		}
	}
	int32_t scanlineBytes = this->w * numBands;
	$var($ints, pixels, $new($ints, scanlineBytes * scaleX));
	$set(this, bpixels, $new($bytes, destScanlineBytes));
	int32_t l = 0;
	if (this->compressionType == $BMPConstants::BI_JPEG || this->compressionType == $BMPConstants::BI_PNG) {
		$set(this, embedded_stream, $new($ByteArrayOutputStream));
		writeEmbedded(image, bmpParam);
		$nc(this->embedded_stream)->flush();
		imageSize = $nc(this->embedded_stream)->size();
		int64_t endPos = $nc(this->stream)->getStreamPosition();
		fileSize = offset + imageSize;
		$nc(this->stream)->seek(headPos);
		writeSize(fileSize, 2);
		$nc(this->stream)->seek(headPos);
		writeSize(imageSize, 34);
		$nc(this->stream)->seek(endPos);
		$nc(this->stream)->write($($nc(this->embedded_stream)->toByteArray()));
		$set(this, embedded_stream, nullptr);
		processImageComplete();
		$nc(this->stream)->flushBefore($nc(this->stream)->getStreamPosition());
		return;
	}
	int32_t maxBandOffset = $nc(bandOffsets)->get(0);
	for (int32_t i = 1; i < bandOffsets->length; ++i) {
		if (bandOffsets->get(i) > maxBandOffset) {
			maxBandOffset = bandOffsets->get(i);
		}
	}
	$var($ints, pixel, $new($ints, maxBandOffset + 1));
	int32_t destScanlineLength = destScanlineBytes;
	if (noTransform && noSubband) {
		destScanlineLength = $div(destScanlineBytes, ($DataBuffer::getDataTypeSize(dataType) >> 3));
	}
	for (int32_t i = 0; i < this->h; ++i) {
		int32_t row = minY + i;
		if (!this->isTopDown) {
			row = minY + this->h - i - 1;
		}
		$var($Raster, src, inputRaster);
		$var($Rectangle, srcRect, $new($Rectangle, minX * scaleX + xOffset, row * scaleY + yOffset, (this->w - 1) * scaleX + 1, 1));
		if (!writeRaster) {
			$assign(src, $nc(input)->getData(srcRect));
		}
		if (noTransform && noSubband) {
			$var($SampleModel, sm, $nc(src)->getSampleModel());
			int32_t pos = 0;
			int32_t startX = srcRect->x - src->getSampleModelTranslateX();
			int32_t startY = srcRect->y - src->getSampleModelTranslateY();
			if ($instanceOf($ComponentSampleModel, sm)) {
				$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, sm));
				pos = $nc(csm)->getOffset(startX, startY, 0);
				for (int32_t nb = 1; nb < csm->getNumBands(); ++nb) {
					if (pos > csm->getOffset(startX, startY, nb)) {
						pos = csm->getOffset(startX, startY, nb);
					}
				}
			} else if ($instanceOf($MultiPixelPackedSampleModel, sm)) {
				$var($MultiPixelPackedSampleModel, mppsm, $cast($MultiPixelPackedSampleModel, sm));
				pos = $nc(mppsm)->getOffset(startX, startY);
			} else if ($instanceOf($SinglePixelPackedSampleModel, sm)) {
				$var($SinglePixelPackedSampleModel, sppsm, $cast($SinglePixelPackedSampleModel, sm));
				pos = $nc(sppsm)->getOffset(startX, startY);
			}
			if (this->compressionType == $BMPConstants::BI_RGB || this->compressionType == $BMPConstants::BI_BITFIELDS) {
				{
					$var($bytes, bdata, nullptr)
					$var($shorts, sdata, nullptr)
					$var($shorts, usdata, nullptr)
					$var($ints, idata, nullptr)
					switch (dataType) {
					case $DataBuffer::TYPE_BYTE:
						{
							$assign(bdata, $nc(($cast($DataBufferByte, $(src->getDataBuffer()))))->getData());
							$nc(this->stream)->write(bdata, pos, destScanlineLength);
							break;
						}
					case $DataBuffer::TYPE_SHORT:
						{
							$assign(sdata, $nc(($cast($DataBufferShort, $(src->getDataBuffer()))))->getData());
							$nc(this->stream)->writeShorts(sdata, pos, destScanlineLength);
							break;
						}
					case $DataBuffer::TYPE_USHORT:
						{
							$assign(usdata, $nc(($cast($DataBufferUShort, $(src->getDataBuffer()))))->getData());
							$nc(this->stream)->writeShorts(usdata, pos, destScanlineLength);
							break;
						}
					case $DataBuffer::TYPE_INT:
						{
							$assign(idata, $nc(($cast($DataBufferInt, $(src->getDataBuffer()))))->getData());
							$nc(this->stream)->writeInts(idata, pos, destScanlineLength);
							break;
						}
					}
				}
				for (int32_t k = 0; k < padding; ++k) {
					$nc(this->stream)->writeByte(0);
				}
			} else if (this->compressionType == $BMPConstants::BI_RLE4) {
				if (this->bpixels == nullptr || $nc(this->bpixels)->length < scanlineBytes) {
					$set(this, bpixels, $new($bytes, scanlineBytes));
				}
				src->getPixels(srcRect->x, srcRect->y, srcRect->width, srcRect->height, pixels);
				for (int32_t h = 0; h < scanlineBytes; ++h) {
					$nc(this->bpixels)->set(h, (int8_t)pixels->get(h));
				}
				encodeRLE4(this->bpixels, scanlineBytes);
			} else if (this->compressionType == $BMPConstants::BI_RLE8) {
				if (this->bpixels == nullptr || $nc(this->bpixels)->length < scanlineBytes) {
					$set(this, bpixels, $new($bytes, scanlineBytes));
				}
				src->getPixels(srcRect->x, srcRect->y, srcRect->width, srcRect->height, pixels);
				for (int32_t h = 0; h < scanlineBytes; ++h) {
					$nc(this->bpixels)->set(h, (int8_t)pixels->get(h));
				}
				encodeRLE8(this->bpixels, scanlineBytes);
			}
		} else {
			$nc(src)->getPixels(srcRect->x, srcRect->y, srcRect->width, srcRect->height, pixels);
			if (scaleX != 1 || maxBandOffset != numBands - 1) {
				{
					int32_t j = 0;
					int32_t k = 0;
					int32_t n = 0;
					for (; j < this->w; ++j, k += scaleX * numBands, n += numBands) {
						$System::arraycopy(pixels, k, pixel, 0, pixel->length);
						for (int32_t m = 0; m < numBands; ++m) {
							pixels->set(n + m, pixel->get($nc(sourceBands)->get(m)));
						}
					}
				}
			}
			writePixels(0, scanlineBytes, bitsPerPixel, pixels, padding, numBands, icm);
		}
		processImageProgress(100.0f * (((float)i) / ((float)this->h)));
		if (abortRequested()) {
			break;
		}
	}
	if (this->compressionType == $BMPConstants::BI_RLE4 || this->compressionType == $BMPConstants::BI_RLE8) {
		$nc(this->stream)->writeByte(0);
		$nc(this->stream)->writeByte(1);
		incCompImageSize(2);
		imageSize = this->compImageSize;
		fileSize = this->compImageSize + offset;
		int64_t endPos = $nc(this->stream)->getStreamPosition();
		$nc(this->stream)->seek(headPos);
		writeSize(fileSize, 2);
		$nc(this->stream)->seek(headPos);
		writeSize(imageSize, 34);
		$nc(this->stream)->seek(endPos);
	}
	if (abortRequested()) {
		processWriteAborted();
	} else {
		processImageComplete();
		$nc(this->stream)->flushBefore($nc(this->stream)->getStreamPosition());
	}
}

void BMPImageWriter::writePixels(int32_t l, int32_t scanlineBytes, int32_t bitsPerPixel, $ints* pixels, int32_t padding, int32_t numBands, $IndexColorModel* icm) {
	$useLocalCurrentObjectStackCache();
	int32_t pixel = 0;
	int32_t k = 0;
	switch (bitsPerPixel) {
	case 1:
		{
			for (int32_t j = 0; j < scanlineBytes / 8; ++j) {
				int32_t var$6 = ($nc(pixels)->get(l++) << 7);
				int32_t var$5 = var$6 | (pixels->get(l++) << 6);
				int32_t var$4 = var$5 | (pixels->get(l++) << 5);
				int32_t var$3 = var$4 | (pixels->get(l++) << 4);
				int32_t var$2 = var$3 | (pixels->get(l++) << 3);
				int32_t var$1 = var$2 | (pixels->get(l++) << 2);
				int32_t var$0 = var$1 | (pixels->get(l++) << 1);
				$nc(this->bpixels)->set(k++, (int8_t)(var$0 | pixels->get(l++)));
			}
			if (scanlineBytes % 8 > 0) {
				pixel = 0;
				for (int32_t j = 0; j < scanlineBytes % 8; ++j) {
					pixel |= ($sl($nc(pixels)->get(l++), 7 - j));
				}
				$nc(this->bpixels)->set(k++, (int8_t)pixel);
			}
			$nc(this->stream)->write(this->bpixels, 0, (scanlineBytes + 7) / 8);
			break;
		}
	case 4:
		{
			if (this->compressionType == $BMPConstants::BI_RLE4) {
				$var($bytes, bipixels, $new($bytes, scanlineBytes));
				for (int32_t h = 0; h < scanlineBytes; ++h) {
					bipixels->set(h, (int8_t)$nc(pixels)->get(l++));
				}
				encodeRLE4(bipixels, scanlineBytes);
			} else {
				for (int32_t j = 0; j < scanlineBytes / 2; ++j) {
					int32_t var$7 = ($nc(pixels)->get(l++) << 4);
					pixel = var$7 | pixels->get(l++);
					$nc(this->bpixels)->set(k++, (int8_t)pixel);
				}
				if ((scanlineBytes % 2) == 1) {
					pixel = $nc(pixels)->get(l) << 4;
					$nc(this->bpixels)->set(k++, (int8_t)pixel);
				}
				$nc(this->stream)->write(this->bpixels, 0, (scanlineBytes + 1) / 2);
			}
			break;
		}
	case 8:
		{
			if (this->compressionType == $BMPConstants::BI_RLE8) {
				for (int32_t h = 0; h < scanlineBytes; ++h) {
					$nc(this->bpixels)->set(h, (int8_t)$nc(pixels)->get(l++));
				}
				encodeRLE8(this->bpixels, scanlineBytes);
			} else {
				for (int32_t j = 0; j < scanlineBytes; ++j) {
					$nc(this->bpixels)->set(j, (int8_t)$nc(pixels)->get(l++));
				}
				$nc(this->stream)->write(this->bpixels, 0, scanlineBytes);
			}
			break;
		}
	case 16:
		{
			if (this->spixels == nullptr) {
				$set(this, spixels, $new($shorts, $div(scanlineBytes, numBands)));
			}
			{
				int32_t j = 0;
				int32_t m = 0;
				for (; j < scanlineBytes; ++m) {
					$nc(this->spixels)->set(m, (int16_t)0);
					if (this->compressionType == $BMPConstants::BI_RGB) {
						$nc(this->spixels)->set(m, (int16_t)(((((int32_t)(31 & (uint32_t)$nc(pixels)->get(j))) << 10) | (((int32_t)(31 & (uint32_t)pixels->get(j + 1))) << 5)) | ((int32_t)(31 & (uint32_t)pixels->get(j + 2)))));
						j += 3;
					} else {
						for (int32_t i = 0; i < numBands; ++i, ++j) {
							(*$nc(this->spixels))[m] |= ((int32_t)(($sl($nc(pixels)->get(j), $nc(this->bitPos)->get(i))) & (uint32_t)$nc(this->bitMasks)->get(i)));
						}
					}
				}
			}
			$nc(this->stream)->writeShorts(this->spixels, 0, $nc(this->spixels)->length);
			break;
		}
	case 24:
		{
			if (numBands == 3) {
				for (int32_t j = 0; j < scanlineBytes; j += 3) {
					$nc(this->bpixels)->set(k++, (int8_t)($nc(pixels)->get(l + 2)));
					$nc(this->bpixels)->set(k++, (int8_t)(pixels->get(l + 1)));
					$nc(this->bpixels)->set(k++, (int8_t)(pixels->get(l)));
					l += 3;
				}
				$nc(this->stream)->write(this->bpixels, 0, scanlineBytes);
			} else {
				int32_t entries = $nc(icm)->getMapSize();
				$var($bytes, r, $new($bytes, entries));
				$var($bytes, g, $new($bytes, entries));
				$var($bytes, b, $new($bytes, entries));
				icm->getReds(r);
				icm->getGreens(g);
				icm->getBlues(b);
				int32_t index = 0;
				for (int32_t j = 0; j < scanlineBytes; ++j) {
					index = $nc(pixels)->get(l);
					$nc(this->bpixels)->set(k++, b->get(index));
					$nc(this->bpixels)->set(k++, g->get(index));
					$nc(this->bpixels)->set(k++, b->get(index));
					++l;
				}
				$nc(this->stream)->write(this->bpixels, 0, scanlineBytes * 3);
			}
			break;
		}
	case 32:
		{
			if (this->ipixels == nullptr) {
				$set(this, ipixels, $new($ints, $div(scanlineBytes, numBands)));
			}
			if (numBands == 3) {
				{
					int32_t j = 0;
					int32_t m = 0;
					for (; j < scanlineBytes; ++m) {
						$nc(this->ipixels)->set(m, 0);
						if (this->compressionType == $BMPConstants::BI_RGB) {
							$nc(this->ipixels)->set(m, ((((int32_t)(255 & (uint32_t)$nc(pixels)->get(j + 2))) << 16) | (((int32_t)(255 & (uint32_t)pixels->get(j + 1))) << 8)) | ((int32_t)(255 & (uint32_t)pixels->get(j))));
							j += 3;
						} else {
							for (int32_t i = 0; i < numBands; ++i, ++j) {
								(*$nc(this->ipixels))[m] |= ((int32_t)(($sl($nc(pixels)->get(j), $nc(this->bitPos)->get(i))) & (uint32_t)$nc(this->bitMasks)->get(i)));
							}
						}
					}
				}
			} else {
				for (int32_t j = 0; j < scanlineBytes; ++j) {
					if (icm != nullptr) {
						$nc(this->ipixels)->set(j, icm->getRGB($nc(pixels)->get(j)));
					} else {
						$nc(this->ipixels)->set(j, (($nc(pixels)->get(j) << 16) | (pixels->get(j) << 8)) | pixels->get(j));
					}
				}
			}
			$nc(this->stream)->writeInts(this->ipixels, 0, $nc(this->ipixels)->length);
			break;
		}
	}
	if (this->compressionType == $BMPConstants::BI_RGB || this->compressionType == $BMPConstants::BI_BITFIELDS) {
		for (k = 0; k < padding; ++k) {
			$nc(this->stream)->writeByte(0);
		}
	}
}

void BMPImageWriter::encodeRLE8($bytes* bpixels, int32_t scanlineBytes) {
	int32_t runCount = 1;
	int32_t absVal = -1;
	int32_t j = -1;
	int8_t runVal = (int8_t)0;
	int8_t nextVal = (int8_t)0;
	runVal = $nc(bpixels)->get(++j);
	$var($bytes, absBuf, $new($bytes, 256));
	while (j < scanlineBytes - 1) {
		nextVal = bpixels->get(++j);
		if (nextVal == runVal) {
			if (absVal >= 3) {
				$nc(this->stream)->writeByte(0);
				$nc(this->stream)->writeByte(absVal);
				incCompImageSize(2);
				for (int32_t a = 0; a < absVal; ++a) {
					$nc(this->stream)->writeByte(absBuf->get(a));
					incCompImageSize(1);
				}
				if (!isEven(absVal)) {
					$nc(this->stream)->writeByte(0);
					incCompImageSize(1);
				}
			} else if (absVal > -1) {
				for (int32_t b = 0; b < absVal; ++b) {
					$nc(this->stream)->writeByte(1);
					$nc(this->stream)->writeByte(absBuf->get(b));
					incCompImageSize(2);
				}
			}
			absVal = -1;
			++runCount;
			if (runCount == 256) {
				$nc(this->stream)->writeByte(runCount - 1);
				$nc(this->stream)->writeByte(runVal);
				incCompImageSize(2);
				runCount = 1;
			}
		} else {
			if (runCount > 1) {
				$nc(this->stream)->writeByte(runCount);
				$nc(this->stream)->writeByte(runVal);
				incCompImageSize(2);
			} else if (absVal < 0) {
				absBuf->set(++absVal, runVal);
				absBuf->set(++absVal, nextVal);
			} else if (absVal < 254) {
				absBuf->set(++absVal, nextVal);
			} else {
				$nc(this->stream)->writeByte(0);
				$nc(this->stream)->writeByte(absVal + 1);
				incCompImageSize(2);
				for (int32_t a = 0; a <= absVal; ++a) {
					$nc(this->stream)->writeByte(absBuf->get(a));
					incCompImageSize(1);
				}
				$nc(this->stream)->writeByte(0);
				incCompImageSize(1);
				absVal = -1;
			}
			runVal = nextVal;
			runCount = 1;
		}
		if (j == scanlineBytes - 1) {
			if (absVal == -1) {
				$nc(this->stream)->writeByte(runCount);
				$nc(this->stream)->writeByte(runVal);
				incCompImageSize(2);
				runCount = 1;
			} else if (absVal >= 2) {
				$nc(this->stream)->writeByte(0);
				$nc(this->stream)->writeByte(absVal + 1);
				incCompImageSize(2);
				for (int32_t a = 0; a <= absVal; ++a) {
					$nc(this->stream)->writeByte(absBuf->get(a));
					incCompImageSize(1);
				}
				if (!isEven(absVal + 1)) {
					$nc(this->stream)->writeByte(0);
					incCompImageSize(1);
				}
			} else if (absVal > -1) {
				for (int32_t b = 0; b <= absVal; ++b) {
					$nc(this->stream)->writeByte(1);
					$nc(this->stream)->writeByte(absBuf->get(b));
					incCompImageSize(2);
				}
			}
			$nc(this->stream)->writeByte(0);
			$nc(this->stream)->writeByte(0);
			incCompImageSize(2);
		}
	}
}

void BMPImageWriter::encodeRLE4($bytes* bipixels, int32_t scanlineBytes) {
	int32_t runCount = 2;
	int32_t absVal = -1;
	int32_t j = -1;
	int32_t pixel = 0;
	int32_t q = 0;
	int8_t runVal1 = (int8_t)0;
	int8_t runVal2 = (int8_t)0;
	int8_t nextVal1 = (int8_t)0;
	int8_t nextVal2 = (int8_t)0;
	$var($bytes, absBuf, $new($bytes, 256));
	runVal1 = $nc(bipixels)->get(++j);
	runVal2 = bipixels->get(++j);
	while (j < scanlineBytes - 2) {
		nextVal1 = bipixels->get(++j);
		nextVal2 = bipixels->get(++j);
		if (nextVal1 == runVal1) {
			if (absVal >= 4) {
				$nc(this->stream)->writeByte(0);
				$nc(this->stream)->writeByte(absVal - 1);
				incCompImageSize(2);
				for (int32_t a = 0; a < absVal - 2; a += 2) {
					pixel = (absBuf->get(a) << 4) | absBuf->get(a + 1);
					$nc(this->stream)->writeByte((int8_t)pixel);
					incCompImageSize(1);
				}
				if (!(isEven(absVal - 1))) {
					q = (absBuf->get(absVal - 2) << 4) | 0;
					$nc(this->stream)->writeByte(q);
					incCompImageSize(1);
				}
				if (!isEven($cast(int32_t, $Math::ceil((double)((absVal - 1) / 2))))) {
					$nc(this->stream)->writeByte(0);
					incCompImageSize(1);
				}
			} else if (absVal > -1) {
				$nc(this->stream)->writeByte(2);
				pixel = (absBuf->get(0) << 4) | absBuf->get(1);
				$nc(this->stream)->writeByte(pixel);
				incCompImageSize(2);
			}
			absVal = -1;
			if (nextVal2 == runVal2) {
				runCount += 2;
				if (runCount == 256) {
					$nc(this->stream)->writeByte(runCount - 1);
					pixel = (runVal1 << 4) | runVal2;
					$nc(this->stream)->writeByte(pixel);
					incCompImageSize(2);
					runCount = 2;
					if (j < scanlineBytes - 1) {
						runVal1 = runVal2;
						runVal2 = bipixels->get(++j);
					} else {
						$nc(this->stream)->writeByte(1);
						int32_t r = (runVal2 << 4) | 0;
						$nc(this->stream)->writeByte(r);
						incCompImageSize(2);
						runCount = -1;
					}
				}
			} else {
				++runCount;
				pixel = (runVal1 << 4) | runVal2;
				$nc(this->stream)->writeByte(runCount);
				$nc(this->stream)->writeByte(pixel);
				incCompImageSize(2);
				runCount = 2;
				runVal1 = nextVal2;
				if (j < scanlineBytes - 1) {
					runVal2 = bipixels->get(++j);
				} else {
					$nc(this->stream)->writeByte(1);
					int32_t r = (nextVal2 << 4) | 0;
					$nc(this->stream)->writeByte(r);
					incCompImageSize(2);
					runCount = -1;
				}
			}
		} else {
			if (runCount > 2) {
				pixel = (runVal1 << 4) | runVal2;
				$nc(this->stream)->writeByte(runCount);
				$nc(this->stream)->writeByte(pixel);
				incCompImageSize(2);
			} else if (absVal < 0) {
				absBuf->set(++absVal, runVal1);
				absBuf->set(++absVal, runVal2);
				absBuf->set(++absVal, nextVal1);
				absBuf->set(++absVal, nextVal2);
			} else if (absVal < 253) {
				absBuf->set(++absVal, nextVal1);
				absBuf->set(++absVal, nextVal2);
			} else {
				$nc(this->stream)->writeByte(0);
				$nc(this->stream)->writeByte(absVal + 1);
				incCompImageSize(2);
				for (int32_t a = 0; a < absVal; a += 2) {
					pixel = (absBuf->get(a) << 4) | absBuf->get(a + 1);
					$nc(this->stream)->writeByte((int8_t)pixel);
					incCompImageSize(1);
				}
				$nc(this->stream)->writeByte(0);
				incCompImageSize(1);
				absVal = -1;
			}
			runVal1 = nextVal1;
			runVal2 = nextVal2;
			runCount = 2;
		}
		if (j >= scanlineBytes - 2) {
			if (absVal == -1 && runCount >= 2) {
				if (j == scanlineBytes - 2) {
					if (bipixels->get(++j) == runVal1) {
						++runCount;
						pixel = (runVal1 << 4) | runVal2;
						$nc(this->stream)->writeByte(runCount);
						$nc(this->stream)->writeByte(pixel);
						incCompImageSize(2);
					} else {
						pixel = (runVal1 << 4) | runVal2;
						$nc(this->stream)->writeByte(runCount);
						$nc(this->stream)->writeByte(pixel);
						$nc(this->stream)->writeByte(1);
						pixel = (bipixels->get(j) << 4) | 0;
						$nc(this->stream)->writeByte(pixel);
						int32_t n = (bipixels->get(j) << 4) | 0;
						incCompImageSize(4);
					}
				} else {
					$nc(this->stream)->writeByte(runCount);
					pixel = (runVal1 << 4) | runVal2;
					$nc(this->stream)->writeByte(pixel);
					incCompImageSize(2);
				}
			} else if (absVal > -1) {
				if (j == scanlineBytes - 2) {
					absBuf->set(++absVal, bipixels->get(++j));
				}
				if (absVal >= 2) {
					$nc(this->stream)->writeByte(0);
					$nc(this->stream)->writeByte(absVal + 1);
					incCompImageSize(2);
					for (int32_t a = 0; a < absVal; a += 2) {
						pixel = (absBuf->get(a) << 4) | absBuf->get(a + 1);
						$nc(this->stream)->writeByte((int8_t)pixel);
						incCompImageSize(1);
					}
					if (!(isEven(absVal + 1))) {
						q = (absBuf->get(absVal) << 4) | 0;
						$nc(this->stream)->writeByte(q);
						incCompImageSize(1);
					}
					if (!isEven($cast(int32_t, $Math::ceil((double)((absVal + 1) / 2))))) {
						$nc(this->stream)->writeByte(0);
						incCompImageSize(1);
					}
				} else {
					{
						int32_t n = 0;
						switch (absVal) {
						case 0:
							{
								$nc(this->stream)->writeByte(1);
								n = (absBuf->get(0) << 4) | 0;
								$nc(this->stream)->writeByte(n);
								incCompImageSize(2);
								break;
							}
						case 1:
							{
								$nc(this->stream)->writeByte(2);
								pixel = (absBuf->get(0) << 4) | absBuf->get(1);
								$nc(this->stream)->writeByte(pixel);
								incCompImageSize(2);
								break;
							}
						}
					}
				}
			}
			$nc(this->stream)->writeByte(0);
			$nc(this->stream)->writeByte(0);
			incCompImageSize(2);
		}
	}
}

void BMPImageWriter::incCompImageSize(int32_t value) {
	$synchronized(this) {
		this->compImageSize = this->compImageSize + value;
	}
}

bool BMPImageWriter::isEven(int32_t number) {
	return (number % 2 == 0 ? true : false);
}

void BMPImageWriter::writeFileHeader(int32_t fileSize, int32_t offset) {
	$nc(this->stream)->writeByte(u'B');
	$nc(this->stream)->writeByte(u'M');
	$nc(this->stream)->writeInt(fileSize);
	$nc(this->stream)->writeInt(0);
	$nc(this->stream)->writeInt(offset);
}

void BMPImageWriter::writeInfoHeader(int32_t headerSize, int32_t bitsPerPixel) {
	$nc(this->stream)->writeInt(headerSize);
	$nc(this->stream)->writeInt(this->w);
	$nc(this->stream)->writeInt(this->isTopDown ? -this->h : this->h);
	$nc(this->stream)->writeShort(1);
	$nc(this->stream)->writeShort(bitsPerPixel);
}

void BMPImageWriter::writeSize(int32_t dword, int32_t offset) {
	$nc(this->stream)->skipBytes(offset);
	$nc(this->stream)->writeInt(dword);
}

void BMPImageWriter::reset() {
	$ImageWriter::reset();
	$set(this, stream, nullptr);
}

void BMPImageWriter::writeEmbedded($IIOImage* image, $ImageWriteParam* bmpParam) {
	$useLocalCurrentObjectStackCache();
	$var($String, format, this->compressionType == $BMPConstants::BI_JPEG ? "jpeg"_s : "png"_s);
	$var($Iterator, iterator, $ImageIO::getImageWritersByFormatName(format));
	$var($ImageWriter, writer, nullptr);
	if ($nc(iterator)->hasNext()) {
		$assign(writer, $cast($ImageWriter, iterator->next()));
	}
	if (writer != nullptr) {
		if (this->embedded_stream == nullptr) {
			$throwNew($RuntimeException, "No stream for writing embedded image!"_s);
		}
		writer->addIIOWriteProgressListener($$new($BMPImageWriter$1, this));
		writer->addIIOWriteWarningListener($$new($BMPImageWriter$2, this));
		writer->setOutput($($ImageIO::createImageOutputStream(this->embedded_stream)));
		$var($ImageWriteParam, param, writer->getDefaultWriteParam());
		$nc(param)->setDestinationOffset($($nc(bmpParam)->getDestinationOffset()));
		param->setSourceBands($($nc(bmpParam)->getSourceBands()));
		param->setSourceRegion($($nc(bmpParam)->getSourceRegion()));
		int32_t var$0 = $nc(bmpParam)->getSourceXSubsampling();
		int32_t var$1 = bmpParam->getSourceYSubsampling();
		int32_t var$2 = bmpParam->getSubsamplingXOffset();
		param->setSourceSubsampling(var$0, var$1, var$2, bmpParam->getSubsamplingYOffset());
		writer->write(nullptr, image, param);
	} else {
		$throwNew($RuntimeException, $$str({$($I18N::getString("BMPImageWrite5"_s)), " "_s, format}));
	}
}

int32_t BMPImageWriter::firstLowBit(int32_t num) {
	int32_t count = 0;
	while (((int32_t)(num & (uint32_t)1)) == 0) {
		++count;
		$usrAssign(num, 1);
	}
	return count;
}

int32_t BMPImageWriter::getPreferredCompressionType($ColorModel* cm, $SampleModel* sm) {
	$var($ImageTypeSpecifier, imageType, $new($ImageTypeSpecifier, cm, sm));
	return getPreferredCompressionType(imageType);
}

int32_t BMPImageWriter::getPreferredCompressionType($ImageTypeSpecifier* imageType) {
	if ($nc(imageType)->getBufferedImageType() == $BufferedImage::TYPE_USHORT_565_RGB) {
		return $BMPConstants::BI_BITFIELDS;
	}
	return $BMPConstants::BI_RGB;
}

bool BMPImageWriter::canEncodeImage(int32_t compression, $ColorModel* cm, $SampleModel* sm) {
	$var($ImageTypeSpecifier, imgType, $new($ImageTypeSpecifier, cm, sm));
	return canEncodeImage(compression, imgType);
}

bool BMPImageWriter::canEncodeImage(int32_t compression, $ImageTypeSpecifier* imgType) {
	$useLocalCurrentObjectStackCache();
	$var($ImageWriterSpi, spi, this->getOriginatingProvider());
	if (!$nc(spi)->canEncodeImage(imgType)) {
		return false;
	}
	int32_t biType = $nc(imgType)->getBufferedImageType();
	int32_t bpp = $nc($(imgType->getColorModel()))->getPixelSize();
	if (this->compressionType == $BMPConstants::BI_RLE4 && bpp != 4) {
		return false;
	}
	if (this->compressionType == $BMPConstants::BI_RLE8 && bpp != 8) {
		return false;
	}
	if (bpp == 16) {
		bool canUseRGB = false;
		bool canUseBITFIELDS = false;
		$var($SampleModel, sm, imgType->getSampleModel());
		if ($instanceOf($SinglePixelPackedSampleModel, sm)) {
			$var($ints, sizes, $nc(($cast($SinglePixelPackedSampleModel, sm)))->getSampleSize());
			canUseRGB = true;
			canUseBITFIELDS = true;
			for (int32_t i = 0; i < $nc(sizes)->length; ++i) {
				canUseRGB &= (sizes->get(i) == 5);
				canUseBITFIELDS &= ((sizes->get(i) == 5) || (i == 1 && sizes->get(i) == 6));
			}
		}
		return (((this->compressionType == $BMPConstants::BI_RGB) && canUseRGB) || ((this->compressionType == $BMPConstants::BI_BITFIELDS) && canUseBITFIELDS));
	}
	return true;
}

void BMPImageWriter::writeMaskToPalette(int32_t mask, int32_t i, $bytes* r, $bytes* g, $bytes* b, $bytes* a) {
	$nc(b)->set(i, (int8_t)((int32_t)(255 & (uint32_t)(mask >> 24))));
	$nc(g)->set(i, (int8_t)((int32_t)(255 & (uint32_t)(mask >> 16))));
	$nc(r)->set(i, (int8_t)((int32_t)(255 & (uint32_t)(mask >> 8))));
	$nc(a)->set(i, (int8_t)((int32_t)(255 & (uint32_t)mask)));
}

int32_t BMPImageWriter::roundBpp(int32_t x) {
	if (x <= 8) {
		return 8;
	} else if (x <= 16) {
		return 16;
	}
	if (x <= 24) {
		return 24;
	} else {
		return 32;
	}
}

BMPImageWriter::BMPImageWriter() {
}

$Class* BMPImageWriter::load$($String* name, bool initialize) {
	$loadClass(BMPImageWriter, name, initialize, &_BMPImageWriter_ClassInfo_, allocate$BMPImageWriter);
	return class$;
}

$Class* BMPImageWriter::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com