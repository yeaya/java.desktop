#include <com/sun/imageio/plugins/gif/GIFImageWriter.h>

#include <com/sun/imageio/plugins/common/LZWCompressor.h>
#include <com/sun/imageio/plugins/common/PaletteBuilder.h>
#include <com/sun/imageio/plugins/gif/GIFImageMetadata.h>
#include <com/sun/imageio/plugins/gif/GIFImageWriteParam.h>
#include <com/sun/imageio/plugins/gif/GIFImageWriterSpi.h>
#include <com/sun/imageio/plugins/gif/GIFMetadata.h>
#include <com/sun/imageio/plugins/gif/GIFStreamMetadata.h>
#include <com/sun/imageio/plugins/gif/GIFWritableImageMetadata.h>
#include <com/sun/imageio/plugins/gif/GIFWritableStreamMetadata.h>
#include <java/awt/Dimension.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteOrder.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/IIOImage.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <sun/awt/image/ByteComponentRaster.h>
#include <jcpp.h>

#undef DEBUG
#undef IMAGE_METADATA_NAME
#undef LITTLE_ENDIAN
#undef MODE_COPY_FROM_METADATA
#undef MODE_DEFAULT
#undef MODE_DISABLED
#undef NATIVE_FORMAT_NAME
#undef STANDARD_METADATA_NAME
#undef STREAM_METADATA_NAME
#undef UNDEFINED_INTEGER_VALUE

using $LZWCompressor = ::com::sun::imageio::plugins::common::LZWCompressor;
using $PaletteBuilder = ::com::sun::imageio::plugins::common::PaletteBuilder;
using $GIFImageMetadata = ::com::sun::imageio::plugins::gif::GIFImageMetadata;
using $GIFImageWriteParam = ::com::sun::imageio::plugins::gif::GIFImageWriteParam;
using $GIFImageWriterSpi = ::com::sun::imageio::plugins::gif::GIFImageWriterSpi;
using $GIFMetadata = ::com::sun::imageio::plugins::gif::GIFMetadata;
using $GIFStreamMetadata = ::com::sun::imageio::plugins::gif::GIFStreamMetadata;
using $GIFWritableImageMetadata = ::com::sun::imageio::plugins::gif::GIFWritableImageMetadata;
using $GIFWritableStreamMetadata = ::com::sun::imageio::plugins::gif::GIFWritableStreamMetadata;
using $Dimension = ::java::awt::Dimension;
using $Rectangle = ::java::awt::Rectangle;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ByteOrder = ::java::nio::ByteOrder;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $IIOException = ::javax::imageio::IIOException;
using $IIOImage = ::javax::imageio::IIOImage;
using $IIOParam = ::javax::imageio::IIOParam;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $ByteComponentRaster = ::sun::awt::image::ByteComponentRaster;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace gif {

$FieldInfo _GIFImageWriter_FieldInfo_[] = {
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GIFImageWriter, DEBUG)},
	{"STANDARD_METADATA_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GIFImageWriter, STANDARD_METADATA_NAME)},
	{"STREAM_METADATA_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GIFImageWriter, STREAM_METADATA_NAME)},
	{"IMAGE_METADATA_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(GIFImageWriter, IMAGE_METADATA_NAME)},
	{"stream", "Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PRIVATE, $field(GIFImageWriter, stream)},
	{"isWritingSequence", "Z", nullptr, $PRIVATE, $field(GIFImageWriter, isWritingSequence)},
	{"wroteSequenceHeader", "Z", nullptr, $PRIVATE, $field(GIFImageWriter, wroteSequenceHeader)},
	{"theStreamMetadata", "Lcom/sun/imageio/plugins/gif/GIFWritableStreamMetadata;", nullptr, $PRIVATE, $field(GIFImageWriter, theStreamMetadata)},
	{"imageIndex", "I", nullptr, $PRIVATE, $field(GIFImageWriter, imageIndex)},
	{}
};

$MethodInfo _GIFImageWriter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/gif/GIFImageWriterSpi;)V", nullptr, $PUBLIC, $method(static_cast<void(GIFImageWriter::*)($GIFImageWriterSpi*)>(&GIFImageWriter::init$))},
	{"canWriteSequence", "()Z", nullptr, $PUBLIC},
	{"computeRegions", "(Ljava/awt/Rectangle;Ljava/awt/Dimension;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Rectangle*,$Dimension*,$ImageWriteParam*)>(&GIFImageWriter::computeRegions))},
	{"convertImageMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"convertMetadata", "(Ljava/lang/String;Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)($String*,$IIOMetadata*,$IIOMetadata*)>(&GIFImageWriter::convertMetadata))},
	{"convertStreamMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"createColorTable", "(Ljava/awt/image/ColorModel;Ljava/awt/image/SampleModel;)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($ColorModel*,$SampleModel*)>(&GIFImageWriter::createColorTable))},
	{"endWriteSequence", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getDefaultImageMetadata", "(Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getDefaultStreamMetadata", "(Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getDefaultWriteParam", "()Ljavax/imageio/ImageWriteParam;", nullptr, $PUBLIC},
	{"getGifPaletteSize", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&GIFImageWriter::getGifPaletteSize))},
	{"getNumBits", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&GIFImageWriter::getNumBits)), "java.io.IOException"},
	{"needToCreateIndex", "(Ljava/awt/image/RenderedImage;)Z", nullptr, $PRIVATE, $method(static_cast<bool(GIFImageWriter::*)($RenderedImage*)>(&GIFImageWriter::needToCreateIndex))},
	{"prepareWriteSequence", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"resetLocal", "()V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)()>(&GIFImageWriter::resetLocal))},
	{"setOutput", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"write", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(ZZLjavax/imageio/metadata/IIOMetadata;Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)(bool,bool,$IIOMetadata*,$IIOImage*,$ImageWriteParam*)>(&GIFImageWriter::write)), "java.io.IOException"},
	{"writeApplicationExtension", "(Lcom/sun/imageio/plugins/gif/GIFWritableImageMetadata;)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)($GIFWritableImageMetadata*)>(&GIFImageWriter::writeApplicationExtension)), "java.io.IOException"},
	{"writeBlocks", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)($bytes*)>(&GIFImageWriter::writeBlocks)), "java.io.IOException"},
	{"writeCommentExtension", "(Lcom/sun/imageio/plugins/gif/GIFWritableImageMetadata;)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)($GIFWritableImageMetadata*)>(&GIFImageWriter::writeCommentExtension)), "java.io.IOException"},
	{"writeGraphicControlExtension", "(IZZII)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)(int32_t,bool,bool,int32_t,int32_t)>(&GIFImageWriter::writeGraphicControlExtension)), "java.io.IOException"},
	{"writeGraphicControlExtension", "(Lcom/sun/imageio/plugins/gif/GIFWritableImageMetadata;)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)($GIFWritableImageMetadata*)>(&GIFImageWriter::writeGraphicControlExtension)), "java.io.IOException"},
	{"writeHeader", "(Ljava/lang/String;IIIIIZI[B)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)($String*,int32_t,int32_t,int32_t,int32_t,int32_t,bool,int32_t,$bytes*)>(&GIFImageWriter::writeHeader)), "java.io.IOException"},
	{"writeHeader", "(Ljavax/imageio/metadata/IIOMetadata;I)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)($IIOMetadata*,int32_t)>(&GIFImageWriter::writeHeader)), "java.io.IOException"},
	{"writeImage", "(Ljava/awt/image/RenderedImage;Lcom/sun/imageio/plugins/gif/GIFWritableImageMetadata;Ljavax/imageio/ImageWriteParam;[BLjava/awt/Rectangle;Ljava/awt/Dimension;)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)($RenderedImage*,$GIFWritableImageMetadata*,$ImageWriteParam*,$bytes*,$Rectangle*,$Dimension*)>(&GIFImageWriter::writeImage)), "java.io.IOException"},
	{"writeImageDescriptor", "(IIIIZZI[B)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)(int32_t,int32_t,int32_t,int32_t,bool,bool,int32_t,$bytes*)>(&GIFImageWriter::writeImageDescriptor)), "java.io.IOException"},
	{"writeImageDescriptor", "(Lcom/sun/imageio/plugins/gif/GIFWritableImageMetadata;I)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)($GIFWritableImageMetadata*,int32_t)>(&GIFImageWriter::writeImageDescriptor)), "java.io.IOException"},
	{"writePlainTextExtension", "(Lcom/sun/imageio/plugins/gif/GIFWritableImageMetadata;)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)($GIFWritableImageMetadata*)>(&GIFImageWriter::writePlainTextExtension)), "java.io.IOException"},
	{"writeRasterData", "(Ljava/awt/image/RenderedImage;Ljava/awt/Rectangle;Ljava/awt/Dimension;Ljavax/imageio/ImageWriteParam;Z)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)($RenderedImage*,$Rectangle*,$Dimension*,$ImageWriteParam*,bool)>(&GIFImageWriter::writeRasterData)), "java.io.IOException"},
	{"writeRows", "(Ljava/awt/image/RenderedImage;Lcom/sun/imageio/plugins/common/LZWCompressor;IIIIIIIIIII)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)($RenderedImage*,$LZWCompressor*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&GIFImageWriter::writeRows)), "java.io.IOException"},
	{"writeRowsOpt", "([BIILcom/sun/imageio/plugins/common/LZWCompressor;IIIIII)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)($bytes*,int32_t,int32_t,$LZWCompressor*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&GIFImageWriter::writeRowsOpt)), "java.io.IOException"},
	{"writeToSequence", "(Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeTrailer", "()V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageWriter::*)()>(&GIFImageWriter::writeTrailer)), "java.io.IOException"},
	{}
};

$ClassInfo _GIFImageWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.gif.GIFImageWriter",
	"javax.imageio.ImageWriter",
	nullptr,
	_GIFImageWriter_FieldInfo_,
	_GIFImageWriter_MethodInfo_
};

$Object* allocate$GIFImageWriter($Class* clazz) {
	return $of($alloc(GIFImageWriter));
}

$String* GIFImageWriter::STANDARD_METADATA_NAME = nullptr;
$String* GIFImageWriter::STREAM_METADATA_NAME = nullptr;
$String* GIFImageWriter::IMAGE_METADATA_NAME = nullptr;

int32_t GIFImageWriter::getNumBits(int32_t value) {
	$init(GIFImageWriter);
	int32_t numBits = 0;
	switch (value) {
	case 2:
		{
			numBits = 1;
			break;
		}
	case 4:
		{
			numBits = 2;
			break;
		}
	case 8:
		{
			numBits = 3;
			break;
		}
	case 16:
		{
			numBits = 4;
			break;
		}
	case 32:
		{
			numBits = 5;
			break;
		}
	case 64:
		{
			numBits = 6;
			break;
		}
	case 128:
		{
			numBits = 7;
			break;
		}
	case 256:
		{
			numBits = 8;
			break;
		}
	default:
		{
			$throwNew($IOException, $$str({"Bad palette length: "_s, $$str(value), "!"_s}));
		}
	}
	return numBits;
}

void GIFImageWriter::computeRegions($Rectangle* sourceBounds, $Dimension* destSize, $ImageWriteParam* p) {
	$init(GIFImageWriter);
	$var($ImageWriteParam, param, nullptr);
	int32_t periodX = 1;
	int32_t periodY = 1;
	if (p != nullptr) {
		$var($ints, sourceBands, p->getSourceBands());
		if (sourceBands != nullptr && (sourceBands->length != 1 || $nc(sourceBands)->get(0) != 0)) {
			$throwNew($IllegalArgumentException, "Cannot sub-band image!"_s);
		}
		$var($Rectangle, sourceRegion, p->getSourceRegion());
		if (sourceRegion != nullptr) {
			$assign(sourceRegion, sourceRegion->intersection(sourceBounds));
			$nc(sourceBounds)->setBounds(sourceRegion);
		}
		int32_t gridX = p->getSubsamplingXOffset();
		int32_t gridY = p->getSubsamplingYOffset();
		$nc(sourceBounds)->x += gridX;
		sourceBounds->y += gridY;
		sourceBounds->width -= gridX;
		sourceBounds->height -= gridY;
		periodX = p->getSourceXSubsampling();
		periodY = p->getSourceYSubsampling();
	}
	$nc(destSize)->setSize($div(($nc(sourceBounds)->width + periodX - 1), periodX), $div((sourceBounds->height + periodY - 1), periodY));
	if (destSize->width <= 0 || destSize->height <= 0) {
		$throwNew($IllegalArgumentException, "Empty source region!"_s);
	}
}

$bytes* GIFImageWriter::createColorTable($ColorModel* colorModel, $SampleModel* sampleModel) {
	$init(GIFImageWriter);
	$var($bytes, colorTable, nullptr);
	if ($instanceOf($IndexColorModel, colorModel)) {
		$var($IndexColorModel, icm, $cast($IndexColorModel, colorModel));
		int32_t mapSize = $nc(icm)->getMapSize();
		int32_t ctSize = getGifPaletteSize(mapSize);
		$var($bytes, reds, $new($bytes, ctSize));
		$var($bytes, greens, $new($bytes, ctSize));
		$var($bytes, blues, $new($bytes, ctSize));
		icm->getReds(reds);
		icm->getGreens(greens);
		icm->getBlues(blues);
		for (int32_t i = mapSize; i < ctSize; ++i) {
			reds->set(i, reds->get(0));
			greens->set(i, greens->get(0));
			blues->set(i, blues->get(0));
		}
		$assign(colorTable, $new($bytes, 3 * ctSize));
		int32_t idx = 0;
		for (int32_t i = 0; i < ctSize; ++i) {
			colorTable->set(idx++, reds->get(i));
			colorTable->set(idx++, greens->get(i));
			colorTable->set(idx++, blues->get(i));
		}
	} else if (sampleModel->getNumBands() == 1) {
		int32_t numBits = $nc($(sampleModel->getSampleSize()))->get(0);
		if (numBits > 8) {
			numBits = 8;
		}
		int32_t colorTableLength = 3 * ($sl(1, numBits));
		$assign(colorTable, $new($bytes, colorTableLength));
		for (int32_t i = 0; i < colorTableLength; ++i) {
			colorTable->set(i, (int8_t)(i / 3));
		}
	} else {
		$assign(colorTable, nullptr);
	}
	return colorTable;
}

int32_t GIFImageWriter::getGifPaletteSize(int32_t x) {
	$init(GIFImageWriter);
	if (x <= 2) {
		return 2;
	}
	x = x - 1;
	x = x | (x >> 1);
	x = x | (x >> 2);
	x = x | (x >> 4);
	x = x | (x >> 8);
	x = x | (x >> 16);
	return x + 1;
}

void GIFImageWriter::init$($GIFImageWriterSpi* originatingProvider) {
	$ImageWriter::init$(originatingProvider);
	$set(this, stream, nullptr);
	this->isWritingSequence = false;
	this->wroteSequenceHeader = false;
	$set(this, theStreamMetadata, nullptr);
	this->imageIndex = 0;
}

bool GIFImageWriter::canWriteSequence() {
	return true;
}

void GIFImageWriter::convertMetadata($String* metadataFormatName, $IIOMetadata* inData, $IIOMetadata* outData) {
	$var($String, formatName, nullptr);
	$var($String, nativeFormatName, $nc(inData)->getNativeMetadataFormatName());
	if (nativeFormatName != nullptr && nativeFormatName->equals(metadataFormatName)) {
		$assign(formatName, metadataFormatName);
	} else {
		$var($StringArray, extraFormatNames, inData->getExtraMetadataFormatNames());
		if (extraFormatNames != nullptr) {
			for (int32_t i = 0; i < extraFormatNames->length; ++i) {
				if ($nc(extraFormatNames->get(i))->equals(metadataFormatName)) {
					$assign(formatName, metadataFormatName);
					break;
				}
			}
		}
	}
	if (formatName == nullptr && inData->isStandardMetadataFormatSupported()) {
		$assign(formatName, GIFImageWriter::STANDARD_METADATA_NAME);
	}
	if (formatName != nullptr) {
		try {
			$var($Node, root, inData->getAsTree(formatName));
			$nc(outData)->mergeTree(formatName, root);
		} catch ($IIOInvalidTreeException&) {
			$catch();
		}
	}
}

$IIOMetadata* GIFImageWriter::convertStreamMetadata($IIOMetadata* inData, $ImageWriteParam* param) {
	if (inData == nullptr) {
		$throwNew($IllegalArgumentException, "inData == null!"_s);
	}
	$var($IIOMetadata, sm, getDefaultStreamMetadata(param));
	convertMetadata(GIFImageWriter::STREAM_METADATA_NAME, inData, sm);
	return sm;
}

$IIOMetadata* GIFImageWriter::convertImageMetadata($IIOMetadata* inData, $ImageTypeSpecifier* imageType, $ImageWriteParam* param) {
	if (inData == nullptr) {
		$throwNew($IllegalArgumentException, "inData == null!"_s);
	}
	if (imageType == nullptr) {
		$throwNew($IllegalArgumentException, "imageType == null!"_s);
	}
	$var($GIFWritableImageMetadata, im, $cast($GIFWritableImageMetadata, getDefaultImageMetadata(imageType, param)));
	bool isProgressive = $nc(im)->interlaceFlag;
	convertMetadata(GIFImageWriter::IMAGE_METADATA_NAME, inData, im);
	bool var$0 = param != nullptr && param->canWriteProgressive();
	if (var$0 && param->getProgressiveMode() != $ImageWriteParam::MODE_COPY_FROM_METADATA) {
		im->interlaceFlag = isProgressive;
	}
	return im;
}

void GIFImageWriter::endWriteSequence() {
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "output == null!"_s);
	}
	if (!this->isWritingSequence) {
		$throwNew($IllegalStateException, "prepareWriteSequence() was not invoked!"_s);
	}
	writeTrailer();
	resetLocal();
}

$IIOMetadata* GIFImageWriter::getDefaultImageMetadata($ImageTypeSpecifier* imageType, $ImageWriteParam* param) {
	$var($GIFWritableImageMetadata, imageMetadata, $new($GIFWritableImageMetadata));
	$var($SampleModel, sampleModel, $nc(imageType)->getSampleModel());
	int32_t var$0 = $nc(sampleModel)->getWidth();
	$var($Rectangle, sourceBounds, $new($Rectangle, var$0, sampleModel->getHeight()));
	$var($Dimension, destSize, $new($Dimension));
	computeRegions(sourceBounds, destSize, param);
	imageMetadata->imageWidth = destSize->width;
	imageMetadata->imageHeight = destSize->height;
	bool var$1 = param != nullptr && param->canWriteProgressive();
	if (var$1 && param->getProgressiveMode() == $ImageWriteParam::MODE_DISABLED) {
		imageMetadata->interlaceFlag = false;
	} else {
		imageMetadata->interlaceFlag = true;
	}
	$var($ColorModel, colorModel, imageType->getColorModel());
	$set(imageMetadata, localColorTable, createColorTable(colorModel, sampleModel));
	if ($instanceOf($IndexColorModel, colorModel)) {
		int32_t transparentIndex = $nc(($cast($IndexColorModel, colorModel)))->getTransparentPixel();
		if (transparentIndex != -1) {
			imageMetadata->transparentColorFlag = true;
			imageMetadata->transparentColorIndex = transparentIndex;
		}
	}
	return imageMetadata;
}

$IIOMetadata* GIFImageWriter::getDefaultStreamMetadata($ImageWriteParam* param) {
	$var($GIFWritableStreamMetadata, streamMetadata, $new($GIFWritableStreamMetadata));
	$set(streamMetadata, version, "89a"_s);
	return streamMetadata;
}

$ImageWriteParam* GIFImageWriter::getDefaultWriteParam() {
	return $new($GIFImageWriteParam, $(getLocale()));
}

void GIFImageWriter::prepareWriteSequence($IIOMetadata* streamMetadata) {
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "Output is not set."_s);
	}
	resetLocal();
	if (streamMetadata == nullptr) {
		$set(this, theStreamMetadata, $cast($GIFWritableStreamMetadata, getDefaultStreamMetadata(nullptr)));
	} else {
		$set(this, theStreamMetadata, $new($GIFWritableStreamMetadata));
		convertMetadata(GIFImageWriter::STREAM_METADATA_NAME, streamMetadata, this->theStreamMetadata);
	}
	this->isWritingSequence = true;
}

void GIFImageWriter::reset() {
	$ImageWriter::reset();
	resetLocal();
}

void GIFImageWriter::resetLocal() {
	this->isWritingSequence = false;
	this->wroteSequenceHeader = false;
	$set(this, theStreamMetadata, nullptr);
	this->imageIndex = 0;
}

void GIFImageWriter::setOutput(Object$* output) {
	$ImageWriter::setOutput(output);
	if (output != nullptr) {
		if (!($instanceOf($ImageOutputStream, output))) {
			$throwNew($IllegalArgumentException, "output is not an ImageOutputStream"_s);
		}
		$set(this, stream, $cast($ImageOutputStream, output));
		$init($ByteOrder);
		$nc(this->stream)->setByteOrder($ByteOrder::LITTLE_ENDIAN);
	} else {
		$set(this, stream, nullptr);
	}
}

void GIFImageWriter::write($IIOMetadata* sm, $IIOImage* iioimage, $ImageWriteParam* p) {
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "output == null!"_s);
	}
	if (iioimage == nullptr) {
		$throwNew($IllegalArgumentException, "iioimage == null!"_s);
	}
	if ($nc(iioimage)->hasRaster()) {
		$throwNew($UnsupportedOperationException, "canWriteRasters() == false!"_s);
	}
	resetLocal();
	$var($GIFWritableStreamMetadata, streamMetadata, nullptr);
	if (sm == nullptr) {
		$assign(streamMetadata, $cast($GIFWritableStreamMetadata, getDefaultStreamMetadata(p)));
	} else {
		$assign(streamMetadata, $cast($GIFWritableStreamMetadata, convertStreamMetadata(sm, p)));
	}
	write(true, true, streamMetadata, iioimage, p);
}

void GIFImageWriter::writeToSequence($IIOImage* image, $ImageWriteParam* param) {
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "output == null!"_s);
	}
	if (image == nullptr) {
		$throwNew($IllegalArgumentException, "image == null!"_s);
	}
	if ($nc(image)->hasRaster()) {
		$throwNew($UnsupportedOperationException, "canWriteRasters() == false!"_s);
	}
	if (!this->isWritingSequence) {
		$throwNew($IllegalStateException, "prepareWriteSequence() was not invoked!"_s);
	}
	write(!this->wroteSequenceHeader, false, this->theStreamMetadata, image, param);
	if (!this->wroteSequenceHeader) {
		this->wroteSequenceHeader = true;
	}
	++this->imageIndex;
}

bool GIFImageWriter::needToCreateIndex($RenderedImage* image) {
	$var($SampleModel, sampleModel, $nc(image)->getSampleModel());
	$var($ColorModel, colorModel, image->getColorModel());
	bool var$1 = $nc(sampleModel)->getNumBands() != 1;
	bool var$0 = var$1 || $nc($($nc(sampleModel)->getSampleSize()))->get(0) > 8;
	return var$0 || $nc($($nc(colorModel)->getComponentSize()))->get(0) > 8;
}

void GIFImageWriter::write(bool writeHeader, bool writeTrailer, $IIOMetadata* sm, $IIOImage* iioimage, $ImageWriteParam* p) {
	$var($RenderedImage, image, $nc(iioimage)->getRenderedImage());
	if (needToCreateIndex(image)) {
		$assign(image, $PaletteBuilder::createIndexedImage(image));
		iioimage->setRenderedImage(image);
	}
	$var($ColorModel, colorModel, $nc(image)->getColorModel());
	$var($SampleModel, sampleModel, image->getSampleModel());
	int32_t var$0 = image->getMinX();
	int32_t var$1 = image->getMinY();
	int32_t var$2 = image->getWidth();
	$var($Rectangle, sourceBounds, $new($Rectangle, var$0, var$1, var$2, image->getHeight()));
	$var($Dimension, destSize, $new($Dimension));
	computeRegions(sourceBounds, destSize, p);
	$var($GIFWritableImageMetadata, imageMetadata, nullptr);
	if (iioimage->getMetadata() != nullptr) {
		$assign(imageMetadata, $new($GIFWritableImageMetadata));
		convertMetadata(GIFImageWriter::IMAGE_METADATA_NAME, $(iioimage->getMetadata()), imageMetadata);
		if (imageMetadata->localColorTable == nullptr) {
			$set(imageMetadata, localColorTable, createColorTable(colorModel, sampleModel));
			if ($instanceOf($IndexColorModel, colorModel)) {
				$var($IndexColorModel, icm, $cast($IndexColorModel, colorModel));
				int32_t index = $nc(icm)->getTransparentPixel();
				imageMetadata->transparentColorFlag = (index != -1);
				if (imageMetadata->transparentColorFlag) {
					imageMetadata->transparentColorIndex = index;
				}
			}
		}
	}
	$var($bytes, globalColorTable, nullptr);
	if (writeHeader) {
		if (sm == nullptr) {
			$throwNew($IllegalArgumentException, "Cannot write null header!"_s);
		}
		$var($GIFWritableStreamMetadata, streamMetadata, $cast($GIFWritableStreamMetadata, sm));
		if ($nc(streamMetadata)->version == nullptr) {
			$set(streamMetadata, version, "89a"_s);
		}
		if ($nc(streamMetadata)->logicalScreenWidth == $GIFMetadata::UNDEFINED_INTEGER_VALUE) {
			streamMetadata->logicalScreenWidth = destSize->width;
		}
		if ($nc(streamMetadata)->logicalScreenHeight == $GIFMetadata::UNDEFINED_INTEGER_VALUE) {
			streamMetadata->logicalScreenHeight = destSize->height;
		}
		if ($nc(streamMetadata)->colorResolution == $GIFMetadata::UNDEFINED_INTEGER_VALUE) {
			streamMetadata->colorResolution = colorModel != nullptr ? $nc($($nc(colorModel)->getComponentSize()))->get(0) : $nc($($nc(sampleModel)->getSampleSize()))->get(0);
		}
		if ($nc(streamMetadata)->globalColorTable == nullptr) {
			if (this->isWritingSequence && imageMetadata != nullptr && imageMetadata->localColorTable != nullptr) {
				$set(streamMetadata, globalColorTable, imageMetadata->localColorTable);
			} else if (imageMetadata == nullptr || imageMetadata->localColorTable == nullptr) {
				$set(streamMetadata, globalColorTable, createColorTable(colorModel, sampleModel));
			}
		}
		$assign(globalColorTable, $nc(streamMetadata)->globalColorTable);
		int32_t bitsPerPixel = 0;
		if (globalColorTable != nullptr) {
			bitsPerPixel = getNumBits(globalColorTable->length / 3);
		} else if (imageMetadata != nullptr && imageMetadata->localColorTable != nullptr) {
			bitsPerPixel = getNumBits($nc(imageMetadata->localColorTable)->length / 3);
		} else {
			bitsPerPixel = $nc(sampleModel)->getSampleSize(0);
		}
		this->writeHeader(streamMetadata, bitsPerPixel);
	} else if (this->isWritingSequence) {
		$assign(globalColorTable, $nc(this->theStreamMetadata)->globalColorTable);
	} else {
		$throwNew($IllegalArgumentException, "Must write header for single image!"_s);
	}
	writeImage($(iioimage->getRenderedImage()), imageMetadata, p, globalColorTable, sourceBounds, destSize);
	if (writeTrailer) {
		this->writeTrailer();
	}
}

void GIFImageWriter::writeImage($RenderedImage* image, $GIFWritableImageMetadata* imageMetadata$renamed, $ImageWriteParam* param, $bytes* globalColorTable, $Rectangle* sourceBounds, $Dimension* destSize) {
	$var($GIFWritableImageMetadata, imageMetadata, imageMetadata$renamed);
	$var($ColorModel, colorModel, $nc(image)->getColorModel());
	$var($SampleModel, sampleModel, image->getSampleModel());
	bool writeGraphicsControlExtension = false;
	if (imageMetadata == nullptr) {
		$assign(imageMetadata, $cast($GIFWritableImageMetadata, getDefaultImageMetadata($$new($ImageTypeSpecifier, image), param)));
		writeGraphicsControlExtension = $nc(imageMetadata)->transparentColorFlag;
	} else {
		$var($NodeList, list, nullptr);
		try {
			$var($IIOMetadataNode, root, $cast($IIOMetadataNode, $nc(imageMetadata)->getAsTree(GIFImageWriter::IMAGE_METADATA_NAME)));
			$assign(list, $nc(root)->getElementsByTagName("GraphicControlExtension"_s));
		} catch ($IllegalArgumentException&) {
			$catch();
		}
		writeGraphicsControlExtension = list != nullptr && list->getLength() > 0;
		if (param != nullptr && param->canWriteProgressive()) {
			if (param->getProgressiveMode() == $ImageWriteParam::MODE_DISABLED) {
				$nc(imageMetadata)->interlaceFlag = false;
			} else if (param->getProgressiveMode() == $ImageWriteParam::MODE_DEFAULT) {
				$nc(imageMetadata)->interlaceFlag = true;
			}
		}
	}
	if ($Arrays::equals(globalColorTable, $nc(imageMetadata)->localColorTable)) {
		$set($nc(imageMetadata), localColorTable, nullptr);
	}
	$nc(imageMetadata)->imageWidth = $nc(destSize)->width;
	imageMetadata->imageHeight = destSize->height;
	if (writeGraphicsControlExtension) {
		writeGraphicControlExtension(imageMetadata);
	}
	writePlainTextExtension(imageMetadata);
	writeApplicationExtension(imageMetadata);
	writeCommentExtension(imageMetadata);
	int32_t bitsPerPixel = getNumBits(imageMetadata->localColorTable == nullptr ? (globalColorTable == nullptr ? $nc(sampleModel)->getSampleSize(0) : $nc(globalColorTable)->length / 3) : $nc(imageMetadata->localColorTable)->length / 3);
	writeImageDescriptor(imageMetadata, bitsPerPixel);
	writeRasterData(image, sourceBounds, destSize, param, imageMetadata->interlaceFlag);
}

void GIFImageWriter::writeRows($RenderedImage* image, $LZWCompressor* compressor, int32_t sx, int32_t sdx, int32_t sy, int32_t sdy, int32_t sw, int32_t dy, int32_t ddy, int32_t dw, int32_t dh, int32_t numRowsWritten, int32_t progressReportRowPeriod) {
	$var($ints, sbuf, $new($ints, sw));
	$var($bytes, dbuf, $new($bytes, dw));
	bool var$0 = $nc(image)->getNumXTiles() == 1;
	$var($Raster, raster, var$0 && image->getNumYTiles() == 1 ? $nc(image)->getTile(0, 0) : image->getData());
	for (int32_t y = dy; y < dh; y += ddy) {
		if ($mod(numRowsWritten, progressReportRowPeriod) == 0) {
			processImageProgress((numRowsWritten * 100.0f) / dh);
			if (abortRequested()) {
				processWriteAborted();
				return;
			}
		}
		$nc(raster)->getSamples(sx, sy, sw, 1, 0, sbuf);
		{
			int32_t i = 0;
			int32_t j = 0;
			for (; i < dw; ++i, j += sdx) {
				dbuf->set(i, (int8_t)sbuf->get(j));
			}
		}
		$nc(compressor)->compress(dbuf, 0, dw);
		++numRowsWritten;
		sy += sdy;
	}
}

void GIFImageWriter::writeRowsOpt($bytes* data, int32_t offset, int32_t lineStride, $LZWCompressor* compressor, int32_t dy, int32_t ddy, int32_t dw, int32_t dh, int32_t numRowsWritten, int32_t progressReportRowPeriod) {
	offset += dy * lineStride;
	lineStride *= ddy;
	for (int32_t y = dy; y < dh; y += ddy) {
		if ($mod(numRowsWritten, progressReportRowPeriod) == 0) {
			processImageProgress((numRowsWritten * 100.0f) / dh);
			if (abortRequested()) {
				processWriteAborted();
				return;
			}
		}
		$nc(compressor)->compress(data, offset, dw);
		++numRowsWritten;
		offset += lineStride;
	}
}

void GIFImageWriter::writeRasterData($RenderedImage* image, $Rectangle* sourceBounds, $Dimension* destSize, $ImageWriteParam* param, bool interlaceFlag) {
	int32_t sourceXOffset = $nc(sourceBounds)->x;
	int32_t sourceYOffset = sourceBounds->y;
	int32_t sourceWidth = sourceBounds->width;
	int32_t sourceHeight = sourceBounds->height;
	int32_t destWidth = $nc(destSize)->width;
	int32_t destHeight = destSize->height;
	int32_t periodX = 0;
	int32_t periodY = 0;
	if (param == nullptr) {
		periodX = 1;
		periodY = 1;
	} else {
		periodX = $nc(param)->getSourceXSubsampling();
		periodY = param->getSourceYSubsampling();
	}
	$var($SampleModel, sampleModel, $nc(image)->getSampleModel());
	int32_t bitsPerPixel = $nc($($nc(sampleModel)->getSampleSize()))->get(0);
	int32_t initCodeSize = bitsPerPixel;
	if (initCodeSize == 1) {
		++initCodeSize;
	}
	$nc(this->stream)->write(initCodeSize);
	$var($LZWCompressor, compressor, $new($LZWCompressor, this->stream, initCodeSize, false));
	bool var$2 = periodX == 1 && periodY == 1 && image->getNumXTiles() == 1;
	bool var$1 = var$2 && image->getNumYTiles() == 1 && $instanceOf($ComponentSampleModel, sampleModel);
	bool var$0 = var$1 && $instanceOf($ByteComponentRaster, $(image->getTile(0, 0)));
	bool isOptimizedCase = var$0 && $instanceOf($DataBufferByte, $($nc($(image->getTile(0, 0)))->getDataBuffer()));
	int32_t numRowsWritten = 0;
	int32_t progressReportRowPeriod = $Math::max(destHeight / 20, 1);
	clearAbortRequest();
	processImageStarted(this->imageIndex);
	if (abortRequested()) {
		processWriteAborted();
		return;
	}
	if (interlaceFlag) {
		if (isOptimizedCase) {
			$var($ByteComponentRaster, tile, $cast($ByteComponentRaster, image->getTile(0, 0)));
			$var($bytes, data, $nc(($cast($DataBufferByte, $($nc(tile)->getDataBuffer()))))->getData());
			$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, tile->getSampleModel()));
			int32_t offset = $nc(csm)->getOffset(sourceXOffset, sourceYOffset, 0);
			offset += tile->getDataOffset(0);
			int32_t lineStride = csm->getScanlineStride();
			writeRowsOpt(data, offset, lineStride, compressor, 0, 8, destWidth, destHeight, numRowsWritten, progressReportRowPeriod);
			if (abortRequested()) {
				return;
			}
			numRowsWritten += destHeight / 8;
			writeRowsOpt(data, offset, lineStride, compressor, 4, 8, destWidth, destHeight, numRowsWritten, progressReportRowPeriod);
			if (abortRequested()) {
				return;
			}
			numRowsWritten += (destHeight - 4) / 8;
			writeRowsOpt(data, offset, lineStride, compressor, 2, 4, destWidth, destHeight, numRowsWritten, progressReportRowPeriod);
			if (abortRequested()) {
				return;
			}
			numRowsWritten += (destHeight - 2) / 4;
			writeRowsOpt(data, offset, lineStride, compressor, 1, 2, destWidth, destHeight, numRowsWritten, progressReportRowPeriod);
			if (abortRequested()) {
				return;
			}
		} else {
			writeRows(image, compressor, sourceXOffset, periodX, sourceYOffset, 8 * periodY, sourceWidth, 0, 8, destWidth, destHeight, numRowsWritten, progressReportRowPeriod);
			if (abortRequested()) {
				return;
			}
			numRowsWritten += destHeight / 8;
			writeRows(image, compressor, sourceXOffset, periodX, sourceYOffset + 4 * periodY, 8 * periodY, sourceWidth, 4, 8, destWidth, destHeight, numRowsWritten, progressReportRowPeriod);
			if (abortRequested()) {
				return;
			}
			numRowsWritten += (destHeight - 4) / 8;
			writeRows(image, compressor, sourceXOffset, periodX, sourceYOffset + 2 * periodY, 4 * periodY, sourceWidth, 2, 4, destWidth, destHeight, numRowsWritten, progressReportRowPeriod);
			if (abortRequested()) {
				return;
			}
			numRowsWritten += (destHeight - 2) / 4;
			writeRows(image, compressor, sourceXOffset, periodX, sourceYOffset + periodY, 2 * periodY, sourceWidth, 1, 2, destWidth, destHeight, numRowsWritten, progressReportRowPeriod);
			if (abortRequested()) {
				return;
			}
		}
	} else {
		if (isOptimizedCase) {
			$var($Raster, tile, image->getTile(0, 0));
			$var($bytes, data, $nc(($cast($DataBufferByte, $($nc(tile)->getDataBuffer()))))->getData());
			$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, tile->getSampleModel()));
			int32_t offset = $nc(csm)->getOffset(sourceXOffset, sourceYOffset, 0);
			int32_t lineStride = csm->getScanlineStride();
			writeRowsOpt(data, offset, lineStride, compressor, 0, 1, destWidth, destHeight, numRowsWritten, progressReportRowPeriod);
			if (abortRequested()) {
				return;
			}
		} else {
			writeRows(image, compressor, sourceXOffset, periodX, sourceYOffset, periodY, sourceWidth, 0, 1, destWidth, destHeight, numRowsWritten, progressReportRowPeriod);
			if (abortRequested()) {
				return;
			}
		}
	}
	compressor->flush();
	$nc(this->stream)->write(0);
	processImageComplete();
}

void GIFImageWriter::writeHeader($String* version, int32_t logicalScreenWidth, int32_t logicalScreenHeight, int32_t colorResolution, int32_t pixelAspectRatio, int32_t backgroundColorIndex, bool sortFlag, int32_t bitsPerPixel, $bytes* globalColorTable) {
	try {
		$nc(this->stream)->writeBytes($$str({"GIF"_s, version}));
		$nc(this->stream)->writeShort((int16_t)logicalScreenWidth);
		$nc(this->stream)->writeShort((int16_t)logicalScreenHeight);
		int32_t packedFields = globalColorTable != nullptr ? 128 : 0;
		packedFields |= ((int32_t)((colorResolution - 1) & (uint32_t)7)) << 4;
		if (sortFlag) {
			packedFields |= 8;
		}
		packedFields |= (bitsPerPixel - 1);
		$nc(this->stream)->write(packedFields);
		$nc(this->stream)->write(backgroundColorIndex);
		$nc(this->stream)->write(pixelAspectRatio);
		if (globalColorTable != nullptr) {
			$nc(this->stream)->write(globalColorTable);
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($IIOException, "I/O error writing header!"_s, e);
	}
}

void GIFImageWriter::writeHeader($IIOMetadata* streamMetadata, int32_t bitsPerPixel) {
	$var($GIFWritableStreamMetadata, sm, nullptr);
	if ($instanceOf($GIFWritableStreamMetadata, streamMetadata)) {
		$assign(sm, $cast($GIFWritableStreamMetadata, streamMetadata));
	} else {
		$assign(sm, $new($GIFWritableStreamMetadata));
		$var($Node, root, $nc(streamMetadata)->getAsTree(GIFImageWriter::STREAM_METADATA_NAME));
		sm->setFromTree(GIFImageWriter::STREAM_METADATA_NAME, root);
	}
	writeHeader($nc(sm)->version, sm->logicalScreenWidth, sm->logicalScreenHeight, sm->colorResolution, sm->pixelAspectRatio, sm->backgroundColorIndex, sm->sortFlag, bitsPerPixel, sm->globalColorTable);
}

void GIFImageWriter::writeGraphicControlExtension(int32_t disposalMethod, bool userInputFlag, bool transparentColorFlag, int32_t delayTime, int32_t transparentColorIndex) {
	try {
		$nc(this->stream)->write(33);
		$nc(this->stream)->write(249);
		$nc(this->stream)->write(4);
		int32_t packedFields = ((int32_t)(disposalMethod & (uint32_t)3)) << 2;
		if (userInputFlag) {
			packedFields |= 2;
		}
		if (transparentColorFlag) {
			packedFields |= 1;
		}
		$nc(this->stream)->write(packedFields);
		$nc(this->stream)->writeShort((int16_t)delayTime);
		$nc(this->stream)->write(transparentColorIndex);
		$nc(this->stream)->write(0);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($IIOException, "I/O error writing Graphic Control Extension!"_s, e);
	}
}

void GIFImageWriter::writeGraphicControlExtension($GIFWritableImageMetadata* im) {
	writeGraphicControlExtension($nc(im)->disposalMethod, im->userInputFlag, im->transparentColorFlag, im->delayTime, im->transparentColorIndex);
}

void GIFImageWriter::writeBlocks($bytes* data) {
	if (data != nullptr && data->length > 0) {
		int32_t offset = 0;
		while (offset < data->length) {
			int32_t len = $Math::min(data->length - offset, 255);
			$nc(this->stream)->write(len);
			$nc(this->stream)->write(data, offset, len);
			offset += len;
		}
	}
}

void GIFImageWriter::writePlainTextExtension($GIFWritableImageMetadata* im) {
	if ($nc(im)->hasPlainTextExtension) {
		try {
			$nc(this->stream)->write(33);
			$nc(this->stream)->write(1);
			$nc(this->stream)->write(12);
			$nc(this->stream)->writeShort(im->textGridLeft);
			$nc(this->stream)->writeShort(im->textGridTop);
			$nc(this->stream)->writeShort(im->textGridWidth);
			$nc(this->stream)->writeShort(im->textGridHeight);
			$nc(this->stream)->write(im->characterCellWidth);
			$nc(this->stream)->write(im->characterCellHeight);
			$nc(this->stream)->write(im->textForegroundColor);
			$nc(this->stream)->write(im->textBackgroundColor);
			writeBlocks(im->text);
			$nc(this->stream)->write(0);
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			$throwNew($IIOException, "I/O error writing Plain Text Extension!"_s, e);
		}
	}
}

void GIFImageWriter::writeApplicationExtension($GIFWritableImageMetadata* im) {
	if ($nc(im)->applicationIDs != nullptr) {
		$var($Iterator, iterIDs, $nc(im->applicationIDs)->iterator());
		$var($Iterator, iterCodes, $nc(im->authenticationCodes)->iterator());
		$var($Iterator, iterData, $nc(im->applicationData)->iterator());
		while ($nc(iterIDs)->hasNext()) {
			try {
				$nc(this->stream)->write(33);
				$nc(this->stream)->write(255);
				$nc(this->stream)->write(11);
				$nc(this->stream)->write($cast($bytes, $(iterIDs->next())), 0, 8);
				$nc(this->stream)->write($cast($bytes, $($nc(iterCodes)->next())), 0, 3);
				writeBlocks($cast($bytes, $($nc(iterData)->next())));
				$nc(this->stream)->write(0);
			} catch ($IOException&) {
				$var($IOException, e, $catch());
				$throwNew($IIOException, "I/O error writing Application Extension!"_s, e);
			}
		}
	}
}

void GIFImageWriter::writeCommentExtension($GIFWritableImageMetadata* im) {
	if ($nc(im)->comments != nullptr) {
		try {
			{
				$var($Iterator, i$, $nc(im->comments)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($bytes, bytes, $cast($bytes, i$->next()));
					{
						$nc(this->stream)->write(33);
						$nc(this->stream)->write(254);
						writeBlocks(bytes);
						$nc(this->stream)->write(0);
					}
				}
			}
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			$throwNew($IIOException, "I/O error writing Comment Extension!"_s, e);
		}
	}
}

void GIFImageWriter::writeImageDescriptor(int32_t imageLeftPosition, int32_t imageTopPosition, int32_t imageWidth, int32_t imageHeight, bool interlaceFlag, bool sortFlag, int32_t bitsPerPixel, $bytes* localColorTable) {
	try {
		$nc(this->stream)->write(44);
		$nc(this->stream)->writeShort((int16_t)imageLeftPosition);
		$nc(this->stream)->writeShort((int16_t)imageTopPosition);
		$nc(this->stream)->writeShort((int16_t)imageWidth);
		$nc(this->stream)->writeShort((int16_t)imageHeight);
		int32_t packedFields = localColorTable != nullptr ? 128 : 0;
		if (interlaceFlag) {
			packedFields |= 64;
		}
		if (sortFlag) {
			packedFields |= 8;
		}
		packedFields |= (bitsPerPixel - 1);
		$nc(this->stream)->write(packedFields);
		if (localColorTable != nullptr) {
			$nc(this->stream)->write(localColorTable);
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($IIOException, "I/O error writing Image Descriptor!"_s, e);
	}
}

void GIFImageWriter::writeImageDescriptor($GIFWritableImageMetadata* imageMetadata, int32_t bitsPerPixel) {
	writeImageDescriptor($nc(imageMetadata)->imageLeftPosition, imageMetadata->imageTopPosition, imageMetadata->imageWidth, imageMetadata->imageHeight, imageMetadata->interlaceFlag, imageMetadata->sortFlag, bitsPerPixel, imageMetadata->localColorTable);
}

void GIFImageWriter::writeTrailer() {
	$nc(this->stream)->write(59);
}

GIFImageWriter::GIFImageWriter() {
}

void clinit$GIFImageWriter($Class* class$) {
	$init($IIOMetadataFormatImpl);
	$assignStatic(GIFImageWriter::STANDARD_METADATA_NAME, $IIOMetadataFormatImpl::standardMetadataFormatName);
	$init($GIFWritableStreamMetadata);
	$assignStatic(GIFImageWriter::STREAM_METADATA_NAME, $GIFWritableStreamMetadata::NATIVE_FORMAT_NAME);
	$init($GIFWritableImageMetadata);
	$assignStatic(GIFImageWriter::IMAGE_METADATA_NAME, $GIFWritableImageMetadata::NATIVE_FORMAT_NAME);
}

$Class* GIFImageWriter::load$($String* name, bool initialize) {
	$loadClass(GIFImageWriter, name, initialize, &_GIFImageWriter_ClassInfo_, clinit$GIFImageWriter, allocate$GIFImageWriter);
	return class$;
}

$Class* GIFImageWriter::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com