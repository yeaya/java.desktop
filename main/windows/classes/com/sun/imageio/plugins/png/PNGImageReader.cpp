#include <com/sun/imageio/plugins/png/PNGImageReader.h>

#include <com/sun/imageio/plugins/common/ReaderUtil.h>
#include <com/sun/imageio/plugins/png/PNGImageDataEnumeration.h>
#include <com/sun/imageio/plugins/png/PNGMetadata.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferUShort.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/EOFException.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/SequenceInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/ListIterator.h>
#include <java/util/zip/Inflater.h>
#include <java/util/zip/InflaterInputStream.h>
#include <java/util/zip/ZipException.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <sun/awt/image/ByteInterleavedRaster.h>
#include <jcpp.h>

#undef CS_GRAY
#undef IDAT_TYPE
#undef IEND_TYPE
#undef IHDR_TYPE
#undef PLTE_TYPE
#undef PNG_COLOR_GRAY
#undef PNG_COLOR_GRAY_ALPHA
#undef PNG_COLOR_PALETTE
#undef PNG_COLOR_RGB
#undef PNG_COLOR_RGB_ALPHA
#undef PNG_FILTER_AVERAGE
#undef PNG_FILTER_NONE
#undef PNG_FILTER_PAETH
#undef PNG_FILTER_SUB
#undef PNG_FILTER_UP
#undef TYPE_3BYTE_BGR
#undef TYPE_4BYTE_ABGR
#undef TYPE_BYTE
#undef TYPE_INT_ARGB
#undef TYPE_INT_BGR
#undef TYPE_INT_RGB
#undef TYPE_USHORT

using $intArray2 = $Array<int32_t, 2>;
using $ReaderUtil = ::com::sun::imageio::plugins::common::ReaderUtil;
using $PNGImageDataEnumeration = ::com::sun::imageio::plugins::png::PNGImageDataEnumeration;
using $PNGMetadata = ::com::sun::imageio::plugins::png::PNGMetadata;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $EOFException = ::java::io::EOFException;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $SequenceInputStream = ::java::io::SequenceInputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $ListIterator = ::java::util::ListIterator;
using $Inflater = ::java::util::zip::Inflater;
using $InflaterInputStream = ::java::util::zip::InflaterInputStream;
using $ZipException = ::java::util::zip::ZipException;
using $IIOException = ::javax::imageio::IIOException;
using $IIOParam = ::javax::imageio::IIOParam;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ByteInterleavedRaster = ::sun::awt::image::ByteInterleavedRaster;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

$FieldInfo _PNGImageReader_FieldInfo_[] = {
	{"IHDR_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, IHDR_TYPE)},
	{"PLTE_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, PLTE_TYPE)},
	{"IDAT_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, IDAT_TYPE)},
	{"IEND_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, IEND_TYPE)},
	{"bKGD_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, bKGD_TYPE)},
	{"cHRM_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, cHRM_TYPE)},
	{"gAMA_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, gAMA_TYPE)},
	{"hIST_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, hIST_TYPE)},
	{"iCCP_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, iCCP_TYPE)},
	{"iTXt_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, iTXt_TYPE)},
	{"pHYs_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, pHYs_TYPE)},
	{"sBIT_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, sBIT_TYPE)},
	{"sPLT_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, sPLT_TYPE)},
	{"sRGB_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, sRGB_TYPE)},
	{"tEXt_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, tEXt_TYPE)},
	{"tIME_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, tIME_TYPE)},
	{"tRNS_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, tRNS_TYPE)},
	{"zTXt_TYPE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, zTXt_TYPE)},
	{"PNG_COLOR_GRAY", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, PNG_COLOR_GRAY)},
	{"PNG_COLOR_RGB", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, PNG_COLOR_RGB)},
	{"PNG_COLOR_PALETTE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, PNG_COLOR_PALETTE)},
	{"PNG_COLOR_GRAY_ALPHA", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, PNG_COLOR_GRAY_ALPHA)},
	{"PNG_COLOR_RGB_ALPHA", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, PNG_COLOR_RGB_ALPHA)},
	{"inputBandsForColorType", "[I", nullptr, $STATIC | $FINAL, $staticField(PNGImageReader, inputBandsForColorType)},
	{"PNG_FILTER_NONE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, PNG_FILTER_NONE)},
	{"PNG_FILTER_SUB", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, PNG_FILTER_SUB)},
	{"PNG_FILTER_UP", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, PNG_FILTER_UP)},
	{"PNG_FILTER_AVERAGE", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, PNG_FILTER_AVERAGE)},
	{"PNG_FILTER_PAETH", "I", nullptr, $STATIC | $FINAL, $constField(PNGImageReader, PNG_FILTER_PAETH)},
	{"adam7XOffset", "[I", nullptr, $STATIC | $FINAL, $staticField(PNGImageReader, adam7XOffset)},
	{"adam7YOffset", "[I", nullptr, $STATIC | $FINAL, $staticField(PNGImageReader, adam7YOffset)},
	{"adam7XSubsampling", "[I", nullptr, $STATIC | $FINAL, $staticField(PNGImageReader, adam7XSubsampling)},
	{"adam7YSubsampling", "[I", nullptr, $STATIC | $FINAL, $staticField(PNGImageReader, adam7YSubsampling)},
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PNGImageReader, debug)},
	{"stream", "Ljavax/imageio/stream/ImageInputStream;", nullptr, 0, $field(PNGImageReader, stream)},
	{"gotHeader", "Z", nullptr, 0, $field(PNGImageReader, gotHeader)},
	{"gotMetadata", "Z", nullptr, 0, $field(PNGImageReader, gotMetadata)},
	{"lastParam", "Ljavax/imageio/ImageReadParam;", nullptr, 0, $field(PNGImageReader, lastParam)},
	{"imageStartPosition", "J", nullptr, 0, $field(PNGImageReader, imageStartPosition)},
	{"sourceRegion", "Ljava/awt/Rectangle;", nullptr, 0, $field(PNGImageReader, sourceRegion)},
	{"sourceXSubsampling", "I", nullptr, 0, $field(PNGImageReader, sourceXSubsampling)},
	{"sourceYSubsampling", "I", nullptr, 0, $field(PNGImageReader, sourceYSubsampling)},
	{"sourceMinProgressivePass", "I", nullptr, 0, $field(PNGImageReader, sourceMinProgressivePass)},
	{"sourceMaxProgressivePass", "I", nullptr, 0, $field(PNGImageReader, sourceMaxProgressivePass)},
	{"sourceBands", "[I", nullptr, 0, $field(PNGImageReader, sourceBands)},
	{"destinationBands", "[I", nullptr, 0, $field(PNGImageReader, destinationBands)},
	{"destinationOffset", "Ljava/awt/Point;", nullptr, 0, $field(PNGImageReader, destinationOffset)},
	{"metadata", "Lcom/sun/imageio/plugins/png/PNGMetadata;", nullptr, 0, $field(PNGImageReader, metadata)},
	{"pixelStream", "Ljava/io/DataInputStream;", nullptr, 0, $field(PNGImageReader, pixelStream)},
	{"theImage", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(PNGImageReader, theImage)},
	{"pixelsDone", "I", nullptr, 0, $field(PNGImageReader, pixelsDone)},
	{"totalPixels", "I", nullptr, 0, $field(PNGImageReader, totalPixels)},
	{"bandOffsets", "[[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageReader, bandOffsets)},
	{}
};

$MethodInfo _PNGImageReader_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/spi/ImageReaderSpi;)V", nullptr, $PUBLIC, $method(static_cast<void(PNGImageReader::*)($ImageReaderSpi*)>(&PNGImageReader::init$))},
	{"createRaster", "(IIIII)Ljava/awt/image/WritableRaster;", nullptr, $PRIVATE, $method(static_cast<$WritableRaster*(PNGImageReader::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&PNGImageReader::createRaster))},
	{"decodeAverageFilter", "([BI[BIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,$bytes*,int32_t,int32_t,int32_t)>(&PNGImageReader::decodeAverageFilter))},
	{"decodeImage", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)()>(&PNGImageReader::decodeImage)), "java.io.IOException,javax.imageio.IIOException"},
	{"decodePaethFilter", "([BI[BIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,$bytes*,int32_t,int32_t,int32_t)>(&PNGImageReader::decodePaethFilter))},
	{"decodePass", "(IIIIIII)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)(int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&PNGImageReader::decodePass)), "java.io.IOException"},
	{"decodeSubFilter", "([BIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t,int32_t)>(&PNGImageReader::decodeSubFilter))},
	{"decodeUpFilter", "([BI[BII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,$bytes*,int32_t,int32_t)>(&PNGImageReader::decodeUpFilter))},
	{"getDefaultReadParam", "()Ljavax/imageio/ImageReadParam;", nullptr, $PUBLIC},
	{"getHeight", "(I)I", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getImageMetadata", "(I)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getImageTypes", "(I)Ljava/util/Iterator;", "(I)Ljava/util/Iterator<Ljavax/imageio/ImageTypeSpecifier;>;", $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getNumImages", "(Z)I", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getRawImageType", "(I)Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getStreamMetadata", "()Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getWidth", "(I)I", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"inflate", "([B)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($bytes*)>(&PNGImageReader::inflate)), "java.io.IOException"},
	{"paethPredictor", "(III)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&PNGImageReader::paethPredictor))},
	{"parse_PLTE_chunk", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)(int32_t)>(&PNGImageReader::parse_PLTE_chunk)), "java.io.IOException"},
	{"parse_bKGD_chunk", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)()>(&PNGImageReader::parse_bKGD_chunk)), "java.io.IOException"},
	{"parse_cHRM_chunk", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)()>(&PNGImageReader::parse_cHRM_chunk)), "java.io.IOException"},
	{"parse_gAMA_chunk", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)()>(&PNGImageReader::parse_gAMA_chunk)), "java.io.IOException"},
	{"parse_hIST_chunk", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)(int32_t)>(&PNGImageReader::parse_hIST_chunk)), "java.io.IOException,javax.imageio.IIOException"},
	{"parse_iCCP_chunk", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)(int32_t)>(&PNGImageReader::parse_iCCP_chunk)), "java.io.IOException"},
	{"parse_iTXt_chunk", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)(int32_t)>(&PNGImageReader::parse_iTXt_chunk)), "java.io.IOException"},
	{"parse_pHYs_chunk", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)()>(&PNGImageReader::parse_pHYs_chunk)), "java.io.IOException"},
	{"parse_sBIT_chunk", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)()>(&PNGImageReader::parse_sBIT_chunk)), "java.io.IOException"},
	{"parse_sPLT_chunk", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)(int32_t)>(&PNGImageReader::parse_sPLT_chunk)), "java.io.IOException,javax.imageio.IIOException"},
	{"parse_sRGB_chunk", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)()>(&PNGImageReader::parse_sRGB_chunk)), "java.io.IOException"},
	{"parse_tEXt_chunk", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)(int32_t)>(&PNGImageReader::parse_tEXt_chunk)), "java.io.IOException"},
	{"parse_tIME_chunk", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)()>(&PNGImageReader::parse_tIME_chunk)), "java.io.IOException"},
	{"parse_tRNS_chunk", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)(int32_t)>(&PNGImageReader::parse_tRNS_chunk)), "java.io.IOException"},
	{"parse_zTXt_chunk", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)(int32_t)>(&PNGImageReader::parse_zTXt_chunk)), "java.io.IOException"},
	{"read", "(ILjavax/imageio/ImageReadParam;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"readHeader", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)()>(&PNGImageReader::readHeader)), "javax.imageio.IIOException"},
	{"readImage", "(Ljavax/imageio/ImageReadParam;)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)($ImageReadParam*)>(&PNGImageReader::readImage)), "javax.imageio.IIOException"},
	{"readMetadata", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)()>(&PNGImageReader::readMetadata)), "javax.imageio.IIOException"},
	{"readNullTerminatedString", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(PNGImageReader::*)($String*,int32_t)>(&PNGImageReader::readNullTerminatedString)), "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"resetStreamSettings", "()V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)()>(&PNGImageReader::resetStreamSettings))},
	{"setInput", "(Ljava/lang/Object;ZZ)V", nullptr, $PUBLIC},
	{"skipPass", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)(int32_t,int32_t)>(&PNGImageReader::skipPass)), "java.io.IOException,javax.imageio.IIOException"},
	{"updateImageProgress", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(PNGImageReader::*)(int32_t)>(&PNGImageReader::updateImageProgress))},
	{}
};

$ClassInfo _PNGImageReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.png.PNGImageReader",
	"javax.imageio.ImageReader",
	nullptr,
	_PNGImageReader_FieldInfo_,
	_PNGImageReader_MethodInfo_
};

$Object* allocate$PNGImageReader($Class* clazz) {
	return $of($alloc(PNGImageReader));
}

$ints* PNGImageReader::inputBandsForColorType = nullptr;
$ints* PNGImageReader::adam7XOffset = nullptr;
$ints* PNGImageReader::adam7YOffset = nullptr;
$ints* PNGImageReader::adam7XSubsampling = nullptr;
$ints* PNGImageReader::adam7YSubsampling = nullptr;
$intArray2* PNGImageReader::bandOffsets = nullptr;

void PNGImageReader::init$($ImageReaderSpi* originatingProvider) {
	$ImageReader::init$(originatingProvider);
	$set(this, stream, nullptr);
	this->gotHeader = false;
	this->gotMetadata = false;
	$set(this, lastParam, nullptr);
	this->imageStartPosition = -1;
	$set(this, sourceRegion, nullptr);
	this->sourceXSubsampling = -1;
	this->sourceYSubsampling = -1;
	this->sourceMinProgressivePass = 0;
	this->sourceMaxProgressivePass = 6;
	$set(this, sourceBands, nullptr);
	$set(this, destinationBands, nullptr);
	$set(this, destinationOffset, $new($Point, 0, 0));
	$set(this, metadata, $new($PNGMetadata));
	$set(this, pixelStream, nullptr);
	$set(this, theImage, nullptr);
	this->pixelsDone = 0;
}

void PNGImageReader::setInput(Object$* input, bool seekForwardOnly, bool ignoreMetadata) {
	$ImageReader::setInput(input, seekForwardOnly, ignoreMetadata);
	$set(this, stream, $cast($ImageInputStream, input));
	resetStreamSettings();
}

$String* PNGImageReader::readNullTerminatedString($String* charset, int32_t maxLen) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	int32_t b = 0;
	int32_t count = 0;
	while ((maxLen > count++) && ((b = $nc(this->stream)->read()) != 0)) {
		if (b == -1) {
			$throwNew($EOFException);
		}
		baos->write(b);
	}
	if (b != 0) {
		$throwNew($IIOException, "Found non null terminated string"_s);
	}
	return $new($String, $(baos->toByteArray()), charset);
}

void PNGImageReader::readHeader() {
	$useLocalCurrentObjectStackCache();
	if (this->gotHeader) {
		return;
	}
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "Input source not set!"_s);
	}
	try {
		$var($bytes, signature, $new($bytes, 8));
		$nc(this->stream)->readFully(signature);
		if (signature->get(0) != (int8_t)137 || signature->get(1) != (int8_t)80 || signature->get(2) != (int8_t)78 || signature->get(3) != (int8_t)71 || signature->get(4) != (int8_t)13 || signature->get(5) != (int8_t)10 || signature->get(6) != (int8_t)26 || signature->get(7) != (int8_t)10) {
			$throwNew($IIOException, "Bad PNG signature!"_s);
		}
		int32_t IHDR_length = $nc(this->stream)->readInt();
		if (IHDR_length != 13) {
			$throwNew($IIOException, "Bad length for IHDR chunk!"_s);
		}
		int32_t IHDR_type = $nc(this->stream)->readInt();
		if (IHDR_type != PNGImageReader::IHDR_TYPE) {
			$throwNew($IIOException, "Bad type for IHDR chunk!"_s);
		}
		$set(this, metadata, $new($PNGMetadata));
		int32_t width = $nc(this->stream)->readInt();
		int32_t height = $nc(this->stream)->readInt();
		$nc(this->stream)->readFully(signature, 0, 5);
		int32_t bitDepth = (int32_t)(signature->get(0) & (uint32_t)255);
		int32_t colorType = (int32_t)(signature->get(1) & (uint32_t)255);
		int32_t compressionMethod = (int32_t)(signature->get(2) & (uint32_t)255);
		int32_t filterMethod = (int32_t)(signature->get(3) & (uint32_t)255);
		int32_t interlaceMethod = (int32_t)(signature->get(4) & (uint32_t)255);
		$nc(this->stream)->skipBytes(4);
		$nc(this->stream)->flushBefore($nc(this->stream)->getStreamPosition());
		if (width <= 0) {
			$throwNew($IIOException, "Image width <= 0!"_s);
		}
		if (height <= 0) {
			$throwNew($IIOException, "Image height <= 0!"_s);
		}
		if (bitDepth != 1 && bitDepth != 2 && bitDepth != 4 && bitDepth != 8 && bitDepth != 16) {
			$throwNew($IIOException, "Bit depth must be 1, 2, 4, 8, or 16!"_s);
		}
		if (colorType != 0 && colorType != 2 && colorType != 3 && colorType != 4 && colorType != 6) {
			$throwNew($IIOException, "Color type must be 0, 2, 3, 4, or 6!"_s);
		}
		if (colorType == PNGImageReader::PNG_COLOR_PALETTE && bitDepth == 16) {
			$throwNew($IIOException, "Bad color type/bit depth combination!"_s);
		}
		if ((colorType == PNGImageReader::PNG_COLOR_RGB || colorType == PNGImageReader::PNG_COLOR_RGB_ALPHA || colorType == PNGImageReader::PNG_COLOR_GRAY_ALPHA) && (bitDepth != 8 && bitDepth != 16)) {
			$throwNew($IIOException, "Bad color type/bit depth combination!"_s);
		}
		if (compressionMethod != 0) {
			$throwNew($IIOException, "Unknown compression method (not 0)!"_s);
		}
		if (filterMethod != 0) {
			$throwNew($IIOException, "Unknown filter method (not 0)!"_s);
		}
		if (interlaceMethod != 0 && interlaceMethod != 1) {
			$throwNew($IIOException, "Unknown interlace method (not 0 or 1)!"_s);
		}
		$nc(this->metadata)->IHDR_present = true;
		$nc(this->metadata)->IHDR_width = width;
		$nc(this->metadata)->IHDR_height = height;
		$nc(this->metadata)->IHDR_bitDepth = bitDepth;
		$nc(this->metadata)->IHDR_colorType = colorType;
		$nc(this->metadata)->IHDR_compressionMethod = compressionMethod;
		$nc(this->metadata)->IHDR_filterMethod = filterMethod;
		$nc(this->metadata)->IHDR_interlaceMethod = interlaceMethod;
		this->gotHeader = true;
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($IIOException, "I/O error reading PNG header!"_s, e);
	}
}

void PNGImageReader::parse_PLTE_chunk(int32_t chunkLength) {
	if ($nc(this->metadata)->PLTE_present) {
		processWarningOccurred("A PNG image may not contain more than one PLTE chunk.\nThe chunk wil be ignored."_s);
		return;
	} else if ($nc(this->metadata)->IHDR_colorType == PNGImageReader::PNG_COLOR_GRAY || $nc(this->metadata)->IHDR_colorType == PNGImageReader::PNG_COLOR_GRAY_ALPHA) {
		processWarningOccurred("A PNG gray or gray alpha image cannot have a PLTE chunk.\nThe chunk wil be ignored."_s);
		return;
	}
	$var($bytes, palette, $new($bytes, chunkLength));
	$nc(this->stream)->readFully(palette);
	int32_t numEntries = chunkLength / 3;
	if ($nc(this->metadata)->IHDR_colorType == PNGImageReader::PNG_COLOR_PALETTE) {
		int32_t maxEntries = $sl(1, $nc(this->metadata)->IHDR_bitDepth);
		if (numEntries > maxEntries) {
			processWarningOccurred("PLTE chunk contains too many entries for bit depth, ignoring extras."_s);
			numEntries = maxEntries;
		}
		numEntries = $Math::min(numEntries, maxEntries);
	}
	int32_t paletteEntries = 0;
	if (numEntries > 16) {
		paletteEntries = 256;
	} else if (numEntries > 4) {
		paletteEntries = 16;
	} else if (numEntries > 2) {
		paletteEntries = 4;
	} else {
		paletteEntries = 2;
	}
	$nc(this->metadata)->PLTE_present = true;
	$set($nc(this->metadata), PLTE_red, $new($bytes, paletteEntries));
	$set($nc(this->metadata), PLTE_green, $new($bytes, paletteEntries));
	$set($nc(this->metadata), PLTE_blue, $new($bytes, paletteEntries));
	int32_t index = 0;
	for (int32_t i = 0; i < numEntries; ++i) {
		$nc($nc(this->metadata)->PLTE_red)->set(i, palette->get(index++));
		$nc($nc(this->metadata)->PLTE_green)->set(i, palette->get(index++));
		$nc($nc(this->metadata)->PLTE_blue)->set(i, palette->get(index++));
	}
}

void PNGImageReader::parse_bKGD_chunk() {
	if ($nc(this->metadata)->IHDR_colorType == PNGImageReader::PNG_COLOR_PALETTE) {
		$nc(this->metadata)->bKGD_colorType = PNGImageReader::PNG_COLOR_PALETTE;
		$nc(this->metadata)->bKGD_index = $nc(this->stream)->readUnsignedByte();
	} else if ($nc(this->metadata)->IHDR_colorType == PNGImageReader::PNG_COLOR_GRAY || $nc(this->metadata)->IHDR_colorType == PNGImageReader::PNG_COLOR_GRAY_ALPHA) {
		$nc(this->metadata)->bKGD_colorType = PNGImageReader::PNG_COLOR_GRAY;
		$nc(this->metadata)->bKGD_gray = $nc(this->stream)->readUnsignedShort();
	} else {
		$nc(this->metadata)->bKGD_colorType = PNGImageReader::PNG_COLOR_RGB;
		$nc(this->metadata)->bKGD_red = $nc(this->stream)->readUnsignedShort();
		$nc(this->metadata)->bKGD_green = $nc(this->stream)->readUnsignedShort();
		$nc(this->metadata)->bKGD_blue = $nc(this->stream)->readUnsignedShort();
	}
	$nc(this->metadata)->bKGD_present = true;
}

void PNGImageReader::parse_cHRM_chunk() {
	$nc(this->metadata)->cHRM_whitePointX = $nc(this->stream)->readInt();
	$nc(this->metadata)->cHRM_whitePointY = $nc(this->stream)->readInt();
	$nc(this->metadata)->cHRM_redX = $nc(this->stream)->readInt();
	$nc(this->metadata)->cHRM_redY = $nc(this->stream)->readInt();
	$nc(this->metadata)->cHRM_greenX = $nc(this->stream)->readInt();
	$nc(this->metadata)->cHRM_greenY = $nc(this->stream)->readInt();
	$nc(this->metadata)->cHRM_blueX = $nc(this->stream)->readInt();
	$nc(this->metadata)->cHRM_blueY = $nc(this->stream)->readInt();
	$nc(this->metadata)->cHRM_present = true;
}

void PNGImageReader::parse_gAMA_chunk() {
	int32_t gamma = $nc(this->stream)->readInt();
	$nc(this->metadata)->gAMA_gamma = gamma;
	$nc(this->metadata)->gAMA_present = true;
}

void PNGImageReader::parse_hIST_chunk(int32_t chunkLength) {
	if (!$nc(this->metadata)->PLTE_present) {
		$throwNew($IIOException, "hIST chunk without prior PLTE chunk!"_s);
	}
	$set($nc(this->metadata), hIST_histogram, $new($chars, chunkLength / 2));
	$nc(this->stream)->readFully($nc(this->metadata)->hIST_histogram, 0, $nc($nc(this->metadata)->hIST_histogram)->length);
	$nc(this->metadata)->hIST_present = true;
}

void PNGImageReader::parse_iCCP_chunk(int32_t chunkLength) {
	$useLocalCurrentObjectStackCache();
	$var($String, keyword, readNullTerminatedString("ISO-8859-1"_s, 80));
	int32_t compressedProfileLength = chunkLength - $nc(keyword)->length() - 2;
	if (compressedProfileLength <= 0) {
		$throwNew($IIOException, "iCCP chunk length is not proper"_s);
	}
	$set($nc(this->metadata), iCCP_profileName, keyword);
	$nc(this->metadata)->iCCP_compressionMethod = $nc(this->stream)->readUnsignedByte();
	$var($bytes, compressedProfile, $new($bytes, compressedProfileLength));
	$nc(this->stream)->readFully(compressedProfile);
	$set($nc(this->metadata), iCCP_compressedProfile, compressedProfile);
	$nc(this->metadata)->iCCP_present = true;
}

void PNGImageReader::parse_iTXt_chunk(int32_t chunkLength) {
	$useLocalCurrentObjectStackCache();
	int64_t chunkStart = $nc(this->stream)->getStreamPosition();
	$var($String, keyword, readNullTerminatedString("ISO-8859-1"_s, 80));
	$nc($nc(this->metadata)->iTXt_keyword)->add(keyword);
	int32_t compressionFlag = $nc(this->stream)->readUnsignedByte();
	$nc($nc(this->metadata)->iTXt_compressionFlag)->add($($Boolean::valueOf(compressionFlag == 1)));
	int32_t compressionMethod = $nc(this->stream)->readUnsignedByte();
	$nc($nc(this->metadata)->iTXt_compressionMethod)->add($($Integer::valueOf(compressionMethod)));
	int64_t pos = $nc(this->stream)->getStreamPosition();
	int32_t remainingLen = (int32_t)(chunkStart + chunkLength - pos);
	$var($String, languageTag, readNullTerminatedString("UTF8"_s, remainingLen));
	$nc($nc(this->metadata)->iTXt_languageTag)->add(languageTag);
	pos = $nc(this->stream)->getStreamPosition();
	remainingLen = (int32_t)(chunkStart + chunkLength - pos);
	if (remainingLen < 0) {
		$throwNew($IIOException, "iTXt chunk length is not proper"_s);
	}
	$var($String, translatedKeyword, readNullTerminatedString("UTF8"_s, remainingLen));
	$nc($nc(this->metadata)->iTXt_translatedKeyword)->add(translatedKeyword);
	$var($String, text, nullptr);
	pos = $nc(this->stream)->getStreamPosition();
	int32_t textLength = (int32_t)(chunkStart + chunkLength - pos);
	if (textLength < 0) {
		$throwNew($IIOException, "iTXt chunk length is not proper"_s);
	}
	$var($bytes, b, $new($bytes, textLength));
	$nc(this->stream)->readFully(b);
	if (compressionFlag == 1) {
		$assign(text, $new($String, $(inflate(b)), "UTF8"_s));
	} else {
		$assign(text, $new($String, b, "UTF8"_s));
	}
	$nc($nc(this->metadata)->iTXt_text)->add(text);
	$init($PNGMetadata);
	if ($nc(keyword)->equals($PNGMetadata::tEXt_creationTimeKey)) {
		int32_t index = $nc($nc(this->metadata)->iTXt_text)->size() - 1;
		$nc(this->metadata)->decodeImageCreationTimeFromTextChunk($($nc($nc(this->metadata)->iTXt_text)->listIterator(index)));
	}
}

void PNGImageReader::parse_pHYs_chunk() {
	$nc(this->metadata)->pHYs_pixelsPerUnitXAxis = $nc(this->stream)->readInt();
	$nc(this->metadata)->pHYs_pixelsPerUnitYAxis = $nc(this->stream)->readInt();
	$nc(this->metadata)->pHYs_unitSpecifier = $nc(this->stream)->readUnsignedByte();
	$nc(this->metadata)->pHYs_present = true;
}

void PNGImageReader::parse_sBIT_chunk() {
	int32_t colorType = $nc(this->metadata)->IHDR_colorType;
	if (colorType == PNGImageReader::PNG_COLOR_GRAY || colorType == PNGImageReader::PNG_COLOR_GRAY_ALPHA) {
		$nc(this->metadata)->sBIT_grayBits = $nc(this->stream)->readUnsignedByte();
	} else if (colorType == PNGImageReader::PNG_COLOR_RGB || colorType == PNGImageReader::PNG_COLOR_PALETTE || colorType == PNGImageReader::PNG_COLOR_RGB_ALPHA) {
		$nc(this->metadata)->sBIT_redBits = $nc(this->stream)->readUnsignedByte();
		$nc(this->metadata)->sBIT_greenBits = $nc(this->stream)->readUnsignedByte();
		$nc(this->metadata)->sBIT_blueBits = $nc(this->stream)->readUnsignedByte();
	}
	if (colorType == PNGImageReader::PNG_COLOR_GRAY_ALPHA || colorType == PNGImageReader::PNG_COLOR_RGB_ALPHA) {
		$nc(this->metadata)->sBIT_alphaBits = $nc(this->stream)->readUnsignedByte();
	}
	$nc(this->metadata)->sBIT_colorType = colorType;
	$nc(this->metadata)->sBIT_present = true;
}

void PNGImageReader::parse_sPLT_chunk(int32_t chunkLength) {
	$set($nc(this->metadata), sPLT_paletteName, readNullTerminatedString("ISO-8859-1"_s, 80));
	int32_t remainingChunkLength = chunkLength - ($nc($nc(this->metadata)->sPLT_paletteName)->length() + 1);
	if (remainingChunkLength <= 0) {
		$throwNew($IIOException, "sPLT chunk length is not proper"_s);
	}
	int32_t sampleDepth = $nc(this->stream)->readUnsignedByte();
	$nc(this->metadata)->sPLT_sampleDepth = sampleDepth;
	int32_t numEntries = $div(remainingChunkLength, (4 * (sampleDepth / 8) + 2));
	$set($nc(this->metadata), sPLT_red, $new($ints, numEntries));
	$set($nc(this->metadata), sPLT_green, $new($ints, numEntries));
	$set($nc(this->metadata), sPLT_blue, $new($ints, numEntries));
	$set($nc(this->metadata), sPLT_alpha, $new($ints, numEntries));
	$set($nc(this->metadata), sPLT_frequency, $new($ints, numEntries));
	if (sampleDepth == 8) {
		for (int32_t i = 0; i < numEntries; ++i) {
			$nc($nc(this->metadata)->sPLT_red)->set(i, $nc(this->stream)->readUnsignedByte());
			$nc($nc(this->metadata)->sPLT_green)->set(i, $nc(this->stream)->readUnsignedByte());
			$nc($nc(this->metadata)->sPLT_blue)->set(i, $nc(this->stream)->readUnsignedByte());
			$nc($nc(this->metadata)->sPLT_alpha)->set(i, $nc(this->stream)->readUnsignedByte());
			$nc($nc(this->metadata)->sPLT_frequency)->set(i, $nc(this->stream)->readUnsignedShort());
		}
	} else if (sampleDepth == 16) {
		for (int32_t i = 0; i < numEntries; ++i) {
			$nc($nc(this->metadata)->sPLT_red)->set(i, $nc(this->stream)->readUnsignedShort());
			$nc($nc(this->metadata)->sPLT_green)->set(i, $nc(this->stream)->readUnsignedShort());
			$nc($nc(this->metadata)->sPLT_blue)->set(i, $nc(this->stream)->readUnsignedShort());
			$nc($nc(this->metadata)->sPLT_alpha)->set(i, $nc(this->stream)->readUnsignedShort());
			$nc($nc(this->metadata)->sPLT_frequency)->set(i, $nc(this->stream)->readUnsignedShort());
		}
	} else {
		$throwNew($IIOException, "sPLT sample depth not 8 or 16!"_s);
	}
	$nc(this->metadata)->sPLT_present = true;
}

void PNGImageReader::parse_sRGB_chunk() {
	$nc(this->metadata)->sRGB_renderingIntent = $nc(this->stream)->readUnsignedByte();
	$nc(this->metadata)->sRGB_present = true;
}

void PNGImageReader::parse_tEXt_chunk(int32_t chunkLength) {
	$useLocalCurrentObjectStackCache();
	$var($String, keyword, readNullTerminatedString("ISO-8859-1"_s, 80));
	int32_t textLength = chunkLength - $nc(keyword)->length() - 1;
	if (textLength < 0) {
		$throwNew($IIOException, "tEXt chunk length is not proper"_s);
	}
	$nc($nc(this->metadata)->tEXt_keyword)->add(keyword);
	$var($bytes, b, $new($bytes, textLength));
	$nc(this->stream)->readFully(b);
	$nc($nc(this->metadata)->tEXt_text)->add($$new($String, b, "ISO-8859-1"_s));
	$init($PNGMetadata);
	if (keyword->equals($PNGMetadata::tEXt_creationTimeKey)) {
		int32_t index = $nc($nc(this->metadata)->tEXt_text)->size() - 1;
		$nc(this->metadata)->decodeImageCreationTimeFromTextChunk($($nc($nc(this->metadata)->tEXt_text)->listIterator(index)));
	}
}

void PNGImageReader::parse_tIME_chunk() {
	$nc(this->metadata)->tIME_year = $nc(this->stream)->readUnsignedShort();
	$nc(this->metadata)->tIME_month = $nc(this->stream)->readUnsignedByte();
	$nc(this->metadata)->tIME_day = $nc(this->stream)->readUnsignedByte();
	$nc(this->metadata)->tIME_hour = $nc(this->stream)->readUnsignedByte();
	$nc(this->metadata)->tIME_minute = $nc(this->stream)->readUnsignedByte();
	$nc(this->metadata)->tIME_second = $nc(this->stream)->readUnsignedByte();
	$nc(this->metadata)->tIME_present = true;
}

void PNGImageReader::parse_tRNS_chunk(int32_t chunkLength) {
	int32_t colorType = $nc(this->metadata)->IHDR_colorType;
	if (colorType == PNGImageReader::PNG_COLOR_PALETTE) {
		if (!$nc(this->metadata)->PLTE_present) {
			processWarningOccurred("tRNS chunk without prior PLTE chunk, ignoring it."_s);
			return;
		}
		int32_t maxEntries = $nc($nc(this->metadata)->PLTE_red)->length;
		int32_t numEntries = chunkLength;
		if (numEntries > maxEntries && maxEntries > 0) {
			processWarningOccurred("tRNS chunk has more entries than prior PLTE chunk, ignoring extras."_s);
			numEntries = maxEntries;
		}
		$set($nc(this->metadata), tRNS_alpha, $new($bytes, numEntries));
		$nc(this->metadata)->tRNS_colorType = PNGImageReader::PNG_COLOR_PALETTE;
		$nc(this->stream)->read($nc(this->metadata)->tRNS_alpha, 0, numEntries);
		$nc(this->stream)->skipBytes(chunkLength - numEntries);
	} else if (colorType == PNGImageReader::PNG_COLOR_GRAY) {
		if (chunkLength != 2) {
			processWarningOccurred("tRNS chunk for gray image must have length 2, ignoring chunk."_s);
			$nc(this->stream)->skipBytes(chunkLength);
			return;
		}
		$nc(this->metadata)->tRNS_gray = $nc(this->stream)->readUnsignedShort();
		$nc(this->metadata)->tRNS_colorType = PNGImageReader::PNG_COLOR_GRAY;
	} else if (colorType == PNGImageReader::PNG_COLOR_RGB) {
		if (chunkLength != 6) {
			processWarningOccurred("tRNS chunk for RGB image must have length 6, ignoring chunk."_s);
			$nc(this->stream)->skipBytes(chunkLength);
			return;
		}
		$nc(this->metadata)->tRNS_red = $nc(this->stream)->readUnsignedShort();
		$nc(this->metadata)->tRNS_green = $nc(this->stream)->readUnsignedShort();
		$nc(this->metadata)->tRNS_blue = $nc(this->stream)->readUnsignedShort();
		$nc(this->metadata)->tRNS_colorType = PNGImageReader::PNG_COLOR_RGB;
	} else {
		processWarningOccurred("Gray+Alpha and RGBS images may not have a tRNS chunk, ignoring it."_s);
		return;
	}
	$nc(this->metadata)->tRNS_present = true;
}

$bytes* PNGImageReader::inflate($bytes* b) {
	$init(PNGImageReader);
	$useLocalCurrentObjectStackCache();
	$var($InputStream, bais, $new($ByteArrayInputStream, b));
	$var($InputStream, iis, $new($InflaterInputStream, bais));
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	int32_t c = 0;
	{
		$var($Throwable, var$0, nullptr);
		try {
			while ((c = iis->read()) != -1) {
				baos->write(c);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			iis->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return baos->toByteArray();
}

void PNGImageReader::parse_zTXt_chunk(int32_t chunkLength) {
	$useLocalCurrentObjectStackCache();
	$var($String, keyword, readNullTerminatedString("ISO-8859-1"_s, 80));
	int32_t textLength = chunkLength - $nc(keyword)->length() - 2;
	if (textLength < 0) {
		$throwNew($IIOException, "zTXt chunk length is not proper"_s);
	}
	$nc($nc(this->metadata)->zTXt_keyword)->add(keyword);
	int32_t method = $nc(this->stream)->readUnsignedByte();
	$nc($nc(this->metadata)->zTXt_compressionMethod)->add($($Integer::valueOf(method)));
	$var($bytes, b, $new($bytes, textLength));
	$nc(this->stream)->readFully(b);
	$nc($nc(this->metadata)->zTXt_text)->add($$new($String, $(inflate(b)), "ISO-8859-1"_s));
	$init($PNGMetadata);
	if (keyword->equals($PNGMetadata::tEXt_creationTimeKey)) {
		int32_t index = $nc($nc(this->metadata)->zTXt_text)->size() - 1;
		$nc(this->metadata)->decodeImageCreationTimeFromTextChunk($($nc($nc(this->metadata)->zTXt_text)->listIterator(index)));
	}
}

void PNGImageReader::readMetadata() {
	$useLocalCurrentObjectStackCache();
	if (this->gotMetadata) {
		return;
	}
	readHeader();
	int32_t colorType = $nc(this->metadata)->IHDR_colorType;
	if (this->ignoreMetadata && colorType != PNGImageReader::PNG_COLOR_PALETTE) {
		try {
			while (true) {
				int32_t chunkLength = $nc(this->stream)->readInt();
				if (chunkLength < 0 || chunkLength + 4 < 0) {
					$throwNew($IIOException, $$str({"Invalid chunk length "_s, $$str(chunkLength)}));
				}
				int32_t chunkType = $nc(this->stream)->readInt();
				if (chunkType == PNGImageReader::IDAT_TYPE) {
					$nc(this->stream)->skipBytes(-8);
					this->imageStartPosition = $nc(this->stream)->getStreamPosition();
					break;
				} else if (chunkType == PNGImageReader::tRNS_TYPE) {
					parse_tRNS_chunk(chunkLength);
					$nc(this->stream)->skipBytes(4);
				} else {
					$nc(this->stream)->skipBytes(chunkLength + 4);
				}
			}
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			$throwNew($IIOException, "Error skipping PNG metadata"_s, e);
		}
		this->gotMetadata = true;
		return;
	}
	try {
		bool loop$break = false;
		while (true) {
			int32_t chunkLength = $nc(this->stream)->readInt();
			int32_t chunkType = $nc(this->stream)->readInt();
			int32_t chunkCRC = -1;
			if (chunkLength < 0) {
				$throwNew($IIOException, $$str({"Invalid chunk length "_s, $$str(chunkLength)}));
			}
			try {
				if (chunkType != PNGImageReader::IEND_TYPE) {
					$nc(this->stream)->mark();
					$nc(this->stream)->seek($nc(this->stream)->getStreamPosition() + chunkLength);
					chunkCRC = $nc(this->stream)->readInt();
					$nc(this->stream)->reset();
				}
			} catch ($IOException&) {
				$var($IOException, e, $catch());
				$throwNew($IIOException, $$str({"Invalid chunk length "_s, $$str(chunkLength)}));
			}
			{
				$var($bytes, b, nullptr)
				$var($StringBuilder, chunkName, nullptr)
				int32_t ancillaryBit = 0;
				switch (chunkType) {
				case PNGImageReader::IDAT_TYPE:
					{
						if (this->imageStartPosition == (int64_t)-1) {
							if (colorType == PNGImageReader::PNG_COLOR_PALETTE && !($nc(this->metadata)->PLTE_present)) {
								$throwNew($IIOException, "Required PLTE chunk missing"_s);
							}
							this->imageStartPosition = $nc(this->stream)->getStreamPosition() - 8;
						}
						$nc(this->stream)->skipBytes(chunkLength);
						break;
					}
				case PNGImageReader::IEND_TYPE:
					{
						$nc(this->stream)->seek(this->imageStartPosition);
						$nc(this->stream)->flushBefore($nc(this->stream)->getStreamPosition());
						loop$break = true;
						break;
					}
				case PNGImageReader::PLTE_TYPE:
					{
						parse_PLTE_chunk(chunkLength);
						break;
					}
				case PNGImageReader::bKGD_TYPE:
					{
						parse_bKGD_chunk();
						break;
					}
				case PNGImageReader::cHRM_TYPE:
					{
						parse_cHRM_chunk();
						break;
					}
				case PNGImageReader::gAMA_TYPE:
					{
						parse_gAMA_chunk();
						break;
					}
				case PNGImageReader::hIST_TYPE:
					{
						parse_hIST_chunk(chunkLength);
						break;
					}
				case PNGImageReader::iCCP_TYPE:
					{
						parse_iCCP_chunk(chunkLength);
						break;
					}
				case PNGImageReader::iTXt_TYPE:
					{
						if (this->ignoreMetadata) {
							$nc(this->stream)->skipBytes(chunkLength);
						} else {
							parse_iTXt_chunk(chunkLength);
						}
						break;
					}
				case PNGImageReader::pHYs_TYPE:
					{
						parse_pHYs_chunk();
						break;
					}
				case PNGImageReader::sBIT_TYPE:
					{
						parse_sBIT_chunk();
						break;
					}
				case PNGImageReader::sPLT_TYPE:
					{
						parse_sPLT_chunk(chunkLength);
						break;
					}
				case PNGImageReader::sRGB_TYPE:
					{
						parse_sRGB_chunk();
						break;
					}
				case PNGImageReader::tEXt_TYPE:
					{
						parse_tEXt_chunk(chunkLength);
						break;
					}
				case PNGImageReader::tIME_TYPE:
					{
						parse_tIME_chunk();
						break;
					}
				case PNGImageReader::tRNS_TYPE:
					{
						parse_tRNS_chunk(chunkLength);
						break;
					}
				case PNGImageReader::zTXt_TYPE:
					{
						if (this->ignoreMetadata) {
							$nc(this->stream)->skipBytes(chunkLength);
						} else {
							parse_zTXt_chunk(chunkLength);
						}
						break;
					}
				default:
					{
						$assign(b, $new($bytes, chunkLength));
						$nc(this->stream)->readFully(b);
						$assign(chunkName, $new($StringBuilder, 4));
						$nc(chunkName)->append((char16_t)((int32_t)((uint32_t)chunkType >> 24)));
						$nc(chunkName)->append((char16_t)((int32_t)((chunkType >> 16) & (uint32_t)255)));
						$nc(chunkName)->append((char16_t)((int32_t)((chunkType >> 8) & (uint32_t)255)));
						$nc(chunkName)->append((char16_t)((int32_t)(chunkType & (uint32_t)255)));
						ancillaryBit = (int32_t)((uint32_t)chunkType >> 28);
						if (ancillaryBit == 0) {
							processWarningOccurred("Encountered unknown chunk with critical bit set!"_s);
						}
						$nc($nc(this->metadata)->unknownChunkType)->add($($nc(chunkName)->toString()));
						$nc($nc(this->metadata)->unknownChunkData)->add(b);
						break;
					}
				}

				if (loop$break) {
					break;
				}
			}
			if (chunkCRC != $nc(this->stream)->readInt()) {
				$throwNew($IIOException, $$str({"Failed to read a chunk of type "_s, $$str(chunkType)}));
			}
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($IIOException, "Error reading PNG metadata"_s, e);
	}
	this->gotMetadata = true;
}

void PNGImageReader::decodeSubFilter($bytes* curr, int32_t coff, int32_t count, int32_t bpp) {
	$init(PNGImageReader);
	for (int32_t i = bpp; i < count; ++i) {
		int32_t val = 0;
		val = (int32_t)($nc(curr)->get(i + coff) & (uint32_t)255);
		val += (int32_t)(curr->get(i + coff - bpp) & (uint32_t)255);
		curr->set(i + coff, (int8_t)val);
	}
}

void PNGImageReader::decodeUpFilter($bytes* curr, int32_t coff, $bytes* prev, int32_t poff, int32_t count) {
	$init(PNGImageReader);
	for (int32_t i = 0; i < count; ++i) {
		int32_t raw = (int32_t)($nc(curr)->get(i + coff) & (uint32_t)255);
		int32_t prior = (int32_t)($nc(prev)->get(i + poff) & (uint32_t)255);
		curr->set(i + coff, (int8_t)(raw + prior));
	}
}

void PNGImageReader::decodeAverageFilter($bytes* curr, int32_t coff, $bytes* prev, int32_t poff, int32_t count, int32_t bpp) {
	$init(PNGImageReader);
	int32_t raw = 0;
	int32_t priorPixel = 0;
	int32_t priorRow = 0;
	for (int32_t i = 0; i < bpp; ++i) {
		raw = (int32_t)($nc(curr)->get(i + coff) & (uint32_t)255);
		priorRow = (int32_t)($nc(prev)->get(i + poff) & (uint32_t)255);
		curr->set(i + coff, (int8_t)(raw + priorRow / 2));
	}
	for (int32_t i = bpp; i < count; ++i) {
		raw = (int32_t)($nc(curr)->get(i + coff) & (uint32_t)255);
		priorPixel = (int32_t)(curr->get(i + coff - bpp) & (uint32_t)255);
		priorRow = (int32_t)($nc(prev)->get(i + poff) & (uint32_t)255);
		curr->set(i + coff, (int8_t)(raw + (priorPixel + priorRow) / 2));
	}
}

int32_t PNGImageReader::paethPredictor(int32_t a, int32_t b, int32_t c) {
	$init(PNGImageReader);
	int32_t p = a + b - c;
	int32_t pa = $Math::abs(p - a);
	int32_t pb = $Math::abs(p - b);
	int32_t pc = $Math::abs(p - c);
	if ((pa <= pb) && (pa <= pc)) {
		return a;
	} else if (pb <= pc) {
		return b;
	} else {
		return c;
	}
}

void PNGImageReader::decodePaethFilter($bytes* curr, int32_t coff, $bytes* prev, int32_t poff, int32_t count, int32_t bpp) {
	$init(PNGImageReader);
	int32_t raw = 0;
	int32_t priorPixel = 0;
	int32_t priorRow = 0;
	int32_t priorRowPixel = 0;
	for (int32_t i = 0; i < bpp; ++i) {
		raw = (int32_t)($nc(curr)->get(i + coff) & (uint32_t)255);
		priorRow = (int32_t)($nc(prev)->get(i + poff) & (uint32_t)255);
		curr->set(i + coff, (int8_t)(raw + priorRow));
	}
	for (int32_t i = bpp; i < count; ++i) {
		raw = (int32_t)($nc(curr)->get(i + coff) & (uint32_t)255);
		priorPixel = (int32_t)(curr->get(i + coff - bpp) & (uint32_t)255);
		priorRow = (int32_t)($nc(prev)->get(i + poff) & (uint32_t)255);
		priorRowPixel = (int32_t)(prev->get(i + poff - bpp) & (uint32_t)255);
		curr->set(i + coff, (int8_t)(raw + paethPredictor(priorPixel, priorRow, priorRowPixel)));
	}
}

$WritableRaster* PNGImageReader::createRaster(int32_t width, int32_t height, int32_t bands, int32_t scanlineStride, int32_t bitDepth) {
	$useLocalCurrentObjectStackCache();
	$var($DataBuffer, dataBuffer, nullptr);
	$var($WritableRaster, ras, nullptr);
	$var($Point, origin, $new($Point, 0, 0));
	if ((bitDepth < 8) && (bands == 1)) {
		$assign(dataBuffer, $new($DataBufferByte, height * scanlineStride));
		$assign(ras, $Raster::createPackedRaster(dataBuffer, width, height, bitDepth, origin));
	} else if (bitDepth <= 8) {
		$assign(dataBuffer, $new($DataBufferByte, height * scanlineStride));
		$assign(ras, $Raster::createInterleavedRaster(dataBuffer, width, height, scanlineStride, bands, $nc(PNGImageReader::bandOffsets)->get(bands), origin));
	} else {
		$assign(dataBuffer, $new($DataBufferUShort, height * scanlineStride));
		$assign(ras, $Raster::createInterleavedRaster(dataBuffer, width, height, scanlineStride, bands, $nc(PNGImageReader::bandOffsets)->get(bands), origin));
	}
	return ras;
}

void PNGImageReader::skipPass(int32_t passWidth, int32_t passHeight) {
	if ((passWidth == 0) || (passHeight == 0)) {
		return;
	}
	int32_t inputBands = $nc(PNGImageReader::inputBandsForColorType)->get($nc(this->metadata)->IHDR_colorType);
	int32_t bitsPerRow = $Math::multiplyExact((inputBands * $nc(this->metadata)->IHDR_bitDepth), passWidth);
	int32_t bytesPerRow = (bitsPerRow + 7) / 8;
	for (int32_t srcY = 0; srcY < passHeight; ++srcY) {
		$nc(this->pixelStream)->skipBytes(1 + bytesPerRow);
	}
}

void PNGImageReader::updateImageProgress(int32_t newPixels) {
	this->pixelsDone += newPixels;
	processImageProgress(100.0f * this->pixelsDone / this->totalPixels);
}

void PNGImageReader::decodePass(int32_t passNum, int32_t xStart, int32_t yStart, int32_t xStep, int32_t yStep, int32_t passWidth, int32_t passHeight) {
	$useLocalCurrentObjectStackCache();
	if ((passWidth == 0) || (passHeight == 0)) {
		return;
	}
	$var($WritableRaster, imRas, $nc(this->theImage)->getWritableTile(0, 0));
	int32_t dstMinX = $nc(imRas)->getMinX();
	int32_t dstMaxX = dstMinX + imRas->getWidth() - 1;
	int32_t dstMinY = imRas->getMinY();
	int32_t dstMaxY = dstMinY + imRas->getHeight() - 1;
	$var($ints, vals, $ReaderUtil::computeUpdatedPixels(this->sourceRegion, this->destinationOffset, dstMinX, dstMinY, dstMaxX, dstMaxY, this->sourceXSubsampling, this->sourceYSubsampling, xStart, yStart, passWidth, passHeight, xStep, yStep));
	int32_t updateMinX = $nc(vals)->get(0);
	int32_t updateMinY = vals->get(1);
	int32_t updateWidth = vals->get(2);
	int32_t updateXStep = vals->get(4);
	int32_t updateYStep = vals->get(5);
	int32_t bitDepth = $nc(this->metadata)->IHDR_bitDepth;
	int32_t inputBands = $nc(PNGImageReader::inputBandsForColorType)->get($nc(this->metadata)->IHDR_colorType);
	int32_t bytesPerPixel = (bitDepth == 16) ? 2 : 1;
	bytesPerPixel *= inputBands;
	int32_t bitsPerRow = $Math::multiplyExact((inputBands * bitDepth), passWidth);
	int32_t bytesPerRow = (bitsPerRow + 7) / 8;
	int32_t eltsPerRow = (bitDepth == 16) ? bytesPerRow / 2 : bytesPerRow;
	if (updateWidth == 0) {
		for (int32_t srcY = 0; srcY < passHeight; ++srcY) {
			updateImageProgress(passWidth);
			if (abortRequested()) {
				return;
			}
			$nc(this->pixelStream)->skipBytes(1 + bytesPerRow);
		}
		return;
	}
	int32_t sourceX = (updateMinX - $nc(this->destinationOffset)->x) * this->sourceXSubsampling + $nc(this->sourceRegion)->x;
	int32_t srcX = $div((sourceX - xStart), xStep);
	int32_t srcXStep = $div(updateXStep * this->sourceXSubsampling, xStep);
	$var($bytes, byteData, nullptr);
	$var($shorts, shortData, nullptr);
	$var($bytes, curr, $new($bytes, bytesPerRow));
	$var($bytes, prior, $new($bytes, bytesPerRow));
	$var($WritableRaster, passRow, createRaster(passWidth, 1, inputBands, eltsPerRow, bitDepth));
	$var($ints, ps, $nc(passRow)->getPixel(0, 0, ($ints*)nullptr));
	$var($DataBuffer, dataBuffer, passRow->getDataBuffer());
	int32_t type = $nc(dataBuffer)->getDataType();
	if (type == $DataBuffer::TYPE_BYTE) {
		$assign(byteData, $nc(($cast($DataBufferByte, dataBuffer)))->getData());
	} else {
		$assign(shortData, $nc(($cast($DataBufferUShort, dataBuffer)))->getData());
	}
	processPassStarted(this->theImage, passNum, this->sourceMinProgressivePass, this->sourceMaxProgressivePass, updateMinX, updateMinY, updateXStep, updateYStep, this->destinationBands);
	if (this->sourceBands != nullptr) {
		$assign(passRow, passRow->createWritableChild(0, 0, passRow->getWidth(), 1, 0, 0, this->sourceBands));
	}
	if (this->destinationBands != nullptr) {
		int32_t var$0 = imRas->getWidth();
		$assign(imRas, imRas->createWritableChild(0, 0, var$0, imRas->getHeight(), 0, 0, this->destinationBands));
	}
	bool adjustBitDepths = false;
	$var($ints, outputSampleSize, $nc($(imRas->getSampleModel()))->getSampleSize());
	for (int32_t b = 0; b < inputBands; ++b) {
		if ($nc(outputSampleSize)->get(b) != bitDepth) {
			adjustBitDepths = true;
			break;
		}
	}
	$var($intArray2, scale, nullptr);
	if (adjustBitDepths) {
		int32_t maxInSample = ($sl(1, bitDepth)) - 1;
		int32_t halfMaxInSample = maxInSample / 2;
		$assign(scale, $new($intArray2, inputBands));
		for (int32_t b = 0; b < inputBands; ++b) {
			int32_t maxOutSample = ($sl(1, $nc(outputSampleSize)->get(b))) - 1;
			scale->set(b, $$new($ints, maxInSample + 1));
			for (int32_t s = 0; s <= maxInSample; ++s) {
				$nc(scale->get(b))->set(s, $div((s * maxOutSample + halfMaxInSample), maxInSample));
			}
		}
	}
	bool useSetRect = srcXStep == 1 && updateXStep == 1 && !adjustBitDepths && ($instanceOf($ByteInterleavedRaster, imRas));
	if (useSetRect) {
		$assign(passRow, passRow->createWritableChild(srcX, 0, updateWidth, 1, 0, 0, nullptr));
	}
	for (int32_t srcY = 0; srcY < passHeight; ++srcY) {
		updateImageProgress(passWidth);
		if (abortRequested()) {
			return;
		}
		int32_t filter = $nc(this->pixelStream)->read();
		try {
			$var($bytes, tmp, prior);
			$assign(prior, curr);
			$assign(curr, tmp);
			$nc(this->pixelStream)->readFully(curr, 0, bytesPerRow);
		} catch ($ZipException&) {
			$var($ZipException, ze, $catch());
			$throw(ze);
		}
		switch (filter) {
		case PNGImageReader::PNG_FILTER_NONE:
			{
				break;
			}
		case PNGImageReader::PNG_FILTER_SUB:
			{
				decodeSubFilter(curr, 0, bytesPerRow, bytesPerPixel);
				break;
			}
		case PNGImageReader::PNG_FILTER_UP:
			{
				decodeUpFilter(curr, 0, prior, 0, bytesPerRow);
				break;
			}
		case PNGImageReader::PNG_FILTER_AVERAGE:
			{
				decodeAverageFilter(curr, 0, prior, 0, bytesPerRow, bytesPerPixel);
				break;
			}
		case PNGImageReader::PNG_FILTER_PAETH:
			{
				decodePaethFilter(curr, 0, prior, 0, bytesPerRow, bytesPerPixel);
				break;
			}
		default:
			{
				$throwNew($IIOException, $$str({"Unknown row filter type (= "_s, $$str(filter), ")!"_s}));
			}
		}
		if (bitDepth < 16) {
			$System::arraycopy(curr, 0, byteData, 0, bytesPerRow);
		} else {
			int32_t idx = 0;
			for (int32_t j = 0; j < eltsPerRow; ++j) {
				$nc(shortData)->set(j, (int16_t)(($nc(curr)->get(idx) << 8) | ((int32_t)(curr->get(idx + 1) & (uint32_t)255))));
				idx += 2;
			}
		}
		int32_t sourceY = srcY * yStep + yStart;
		if ((sourceY >= $nc(this->sourceRegion)->y) && (sourceY < $nc(this->sourceRegion)->y + $nc(this->sourceRegion)->height) && (($mod((sourceY - $nc(this->sourceRegion)->y), this->sourceYSubsampling)) == 0)) {
			int32_t dstY = $nc(this->destinationOffset)->y + $div((sourceY - $nc(this->sourceRegion)->y), this->sourceYSubsampling);
			if (dstY < dstMinY) {
				continue;
			}
			if (dstY > dstMaxY) {
				break;
			}
			bool var$1 = $nc($($nc(this->theImage)->getSampleModel()))->getNumBands() == inputBands + 1;
			bool tRNSTransparentPixelPresent = var$1 && $nc(this->metadata)->hasTransparentColor();
			if (useSetRect && !tRNSTransparentPixelPresent) {
				imRas->setRect(updateMinX, dstY, passRow);
			} else {
				int32_t newSrcX = srcX;
				$var($ints, temp, $new($ints, inputBands + 1));
				int32_t opaque = (bitDepth < 16) ? 255 : 0x0000FFFF;
				for (int32_t dstX = updateMinX; dstX < updateMinX + updateWidth; dstX += updateXStep) {
					passRow->getPixel(newSrcX, 0, ps);
					if (adjustBitDepths) {
						for (int32_t b = 0; b < inputBands; ++b) {
							$nc(ps)->set(b, $nc($nc(scale)->get(b))->get(ps->get(b)));
						}
					}
					if (tRNSTransparentPixelPresent) {
						if ($nc(this->metadata)->tRNS_colorType == PNGImageReader::PNG_COLOR_RGB) {
							temp->set(0, $nc(ps)->get(0));
							temp->set(1, ps->get(1));
							temp->set(2, ps->get(2));
							if (ps->get(0) == $nc(this->metadata)->tRNS_red && ps->get(1) == $nc(this->metadata)->tRNS_green && ps->get(2) == $nc(this->metadata)->tRNS_blue) {
								temp->set(3, 0);
							} else {
								temp->set(3, opaque);
							}
						} else {
							temp->set(0, $nc(ps)->get(0));
							if (ps->get(0) == $nc(this->metadata)->tRNS_gray) {
								temp->set(1, 0);
							} else {
								temp->set(1, opaque);
							}
						}
						imRas->setPixel(dstX, dstY, temp);
					} else {
						imRas->setPixel(dstX, dstY, ps);
					}
					newSrcX += srcXStep;
				}
			}
			processImageUpdate(this->theImage, updateMinX, dstY, updateWidth, 1, updateXStep, updateYStep, this->destinationBands);
		}
	}
	processPassComplete(this->theImage);
}

void PNGImageReader::decodeImage() {
	int32_t width = $nc(this->metadata)->IHDR_width;
	int32_t height = $nc(this->metadata)->IHDR_height;
	this->pixelsDone = 0;
	this->totalPixels = width * height;
	if ($nc(this->metadata)->IHDR_interlaceMethod == 0) {
		decodePass(0, 0, 0, 1, 1, width, height);
	} else {
		for (int32_t i = 0; i <= this->sourceMaxProgressivePass; ++i) {
			int32_t XOffset = $nc(PNGImageReader::adam7XOffset)->get(i);
			int32_t YOffset = $nc(PNGImageReader::adam7YOffset)->get(i);
			int32_t XSubsampling = $nc(PNGImageReader::adam7XSubsampling)->get(i);
			int32_t YSubsampling = $nc(PNGImageReader::adam7YSubsampling)->get(i);
			int32_t xbump = $nc(PNGImageReader::adam7XSubsampling)->get(i + 1) - 1;
			int32_t ybump = $nc(PNGImageReader::adam7YSubsampling)->get(i + 1) - 1;
			if (i >= this->sourceMinProgressivePass) {
				decodePass(i, XOffset, YOffset, XSubsampling, YSubsampling, $div((width + xbump), XSubsampling), $div((height + ybump), YSubsampling));
			} else {
				skipPass($div((width + xbump), XSubsampling), $div((height + ybump), YSubsampling));
			}
			if (abortRequested()) {
				return;
			}
		}
	}
}

void PNGImageReader::readImage($ImageReadParam* param) {
	$useLocalCurrentObjectStackCache();
	readMetadata();
	int32_t width = $nc(this->metadata)->IHDR_width;
	int32_t height = $nc(this->metadata)->IHDR_height;
	this->sourceXSubsampling = 1;
	this->sourceYSubsampling = 1;
	this->sourceMinProgressivePass = 0;
	this->sourceMaxProgressivePass = 6;
	$set(this, sourceBands, nullptr);
	$set(this, destinationBands, nullptr);
	$set(this, destinationOffset, $new($Point, 0, 0));
	if (param != nullptr) {
		this->sourceXSubsampling = param->getSourceXSubsampling();
		this->sourceYSubsampling = param->getSourceYSubsampling();
		this->sourceMinProgressivePass = $Math::max(param->getSourceMinProgressivePass(), 0);
		this->sourceMaxProgressivePass = $Math::min(param->getSourceMaxProgressivePass(), 6);
		$set(this, sourceBands, param->getSourceBands());
		$set(this, destinationBands, param->getDestinationBands());
		$set(this, destinationOffset, param->getDestinationOffset());
	}
	$var($Inflater, inf, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->stream)->seek(this->imageStartPosition);
				$var($Enumeration, e, $new($PNGImageDataEnumeration, this->stream));
				$var($InputStream, is, $new($SequenceInputStream, e));
				$assign(inf, $new($Inflater));
				$assign(is, $new($InflaterInputStream, is, inf));
				$assign(is, $new($BufferedInputStream, is));
				$set(this, pixelStream, $new($DataInputStream, is));
				$set(this, theImage, getDestination(param, $(getImageTypes(0)), width, height));
				$var($Rectangle, destRegion, $new($Rectangle, 0, 0, 0, 0));
				$set(this, sourceRegion, $new($Rectangle, 0, 0, 0, 0));
				computeRegions(param, width, height, this->theImage, this->sourceRegion, destRegion);
				$nc(this->destinationOffset)->setLocation($(destRegion->getLocation()));
				int32_t colorType = $nc(this->metadata)->IHDR_colorType;
				bool var$1 = $nc($($nc(this->theImage)->getSampleModel()))->getNumBands() == $nc(PNGImageReader::inputBandsForColorType)->get(colorType) + 1;
				if (var$1 && $nc(this->metadata)->hasTransparentColor()) {
					checkReadParamBandSettings(param, $nc(PNGImageReader::inputBandsForColorType)->get(colorType) + 1, $nc($($nc(this->theImage)->getSampleModel()))->getNumBands());
				} else {
					checkReadParamBandSettings(param, $nc(PNGImageReader::inputBandsForColorType)->get(colorType), $nc($($nc(this->theImage)->getSampleModel()))->getNumBands());
				}
				clearAbortRequest();
				processImageStarted(0);
				if (abortRequested()) {
					processReadAborted();
				} else {
					decodeImage();
					if (abortRequested()) {
						processReadAborted();
					} else {
						processImageComplete();
					}
				}
			} catch ($IOException&) {
				$var($IOException, e, $catch());
				$throwNew($IIOException, "Error reading PNG image data"_s, e);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (inf != nullptr) {
				inf->end();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t PNGImageReader::getNumImages(bool allowSearch) {
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "No input source set!"_s);
	}
	if (this->seekForwardOnly && allowSearch) {
		$throwNew($IllegalStateException, "seekForwardOnly and allowSearch can\'t both be true!"_s);
	}
	return 1;
}

int32_t PNGImageReader::getWidth(int32_t imageIndex) {
	if (imageIndex != 0) {
		$throwNew($IndexOutOfBoundsException, "imageIndex != 0!"_s);
	}
	readHeader();
	return $nc(this->metadata)->IHDR_width;
}

int32_t PNGImageReader::getHeight(int32_t imageIndex) {
	if (imageIndex != 0) {
		$throwNew($IndexOutOfBoundsException, "imageIndex != 0!"_s);
	}
	readHeader();
	return $nc(this->metadata)->IHDR_height;
}

$Iterator* PNGImageReader::getImageTypes(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	if (imageIndex != 0) {
		$throwNew($IndexOutOfBoundsException, "imageIndex != 0!"_s);
	}
	readHeader();
	$var($ArrayList, l, $new($ArrayList, 1));
	$var($ColorSpace, rgb, nullptr);
	$var($ColorSpace, gray, nullptr);
	$var($ints, bandOffsets, nullptr);
	int32_t bitDepth = $nc(this->metadata)->IHDR_bitDepth;
	int32_t colorType = $nc(this->metadata)->IHDR_colorType;
	int32_t dataType = 0;
	if (bitDepth <= 8) {
		dataType = $DataBuffer::TYPE_BYTE;
	} else {
		dataType = $DataBuffer::TYPE_USHORT;
	}
	{
		int32_t plength = 0;
		$var($bytes, red, nullptr)
		$var($bytes, green, nullptr)
		$var($bytes, blue, nullptr)
		$var($bytes, alpha, nullptr)
		switch (colorType) {
		case PNGImageReader::PNG_COLOR_GRAY:
			{
				readMetadata();
				if ($nc(this->metadata)->hasTransparentColor()) {
					$assign(gray, $ColorSpace::getInstance($ColorSpace::CS_GRAY));
					$assign(bandOffsets, $new($ints, 2));
					bandOffsets->set(0, 0);
					bandOffsets->set(1, 1);
					l->add($($ImageTypeSpecifier::createInterleaved(gray, bandOffsets, dataType, true, false)));
				}
				l->add($($ImageTypeSpecifier::createGrayscale(bitDepth, dataType, false)));
				break;
			}
		case PNGImageReader::PNG_COLOR_RGB:
			{
				readMetadata();
				if (bitDepth == 8) {
					if ($nc(this->metadata)->hasTransparentColor()) {
						l->add($($ImageTypeSpecifier::createFromBufferedImageType($BufferedImage::TYPE_4BYTE_ABGR)));
					}
					l->add($($ImageTypeSpecifier::createFromBufferedImageType($BufferedImage::TYPE_3BYTE_BGR)));
					l->add($($ImageTypeSpecifier::createFromBufferedImageType($BufferedImage::TYPE_INT_RGB)));
					l->add($($ImageTypeSpecifier::createFromBufferedImageType($BufferedImage::TYPE_INT_BGR)));
				}
				if ($nc(this->metadata)->hasTransparentColor()) {
					$assign(rgb, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
					$assign(bandOffsets, $new($ints, 4));
					bandOffsets->set(0, 0);
					bandOffsets->set(1, 1);
					bandOffsets->set(2, 2);
					bandOffsets->set(3, 3);
					l->add($($ImageTypeSpecifier::createInterleaved(rgb, bandOffsets, dataType, true, false)));
				}
				$assign(rgb, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
				$assign(bandOffsets, $new($ints, 3));
				$nc(bandOffsets)->set(0, 0);
				$nc(bandOffsets)->set(1, 1);
				$nc(bandOffsets)->set(2, 2);
				l->add($($ImageTypeSpecifier::createInterleaved(rgb, bandOffsets, dataType, false, false)));
				break;
			}
		case PNGImageReader::PNG_COLOR_PALETTE:
			{
				readMetadata();
				plength = $sl(1, bitDepth);
				$assign(red, $nc(this->metadata)->PLTE_red);
				$assign(green, $nc(this->metadata)->PLTE_green);
				$assign(blue, $nc(this->metadata)->PLTE_blue);
				if ($nc($nc(this->metadata)->PLTE_red)->length < plength) {
					$assign(red, $Arrays::copyOf($nc(this->metadata)->PLTE_red, plength));
					$Arrays::fill(red, $nc($nc(this->metadata)->PLTE_red)->length, plength, $nc($nc(this->metadata)->PLTE_red)->get($nc($nc(this->metadata)->PLTE_red)->length - 1));
					$assign(green, $Arrays::copyOf($nc(this->metadata)->PLTE_green, plength));
					$Arrays::fill(green, $nc($nc(this->metadata)->PLTE_green)->length, plength, $nc($nc(this->metadata)->PLTE_green)->get($nc($nc(this->metadata)->PLTE_green)->length - 1));
					$assign(blue, $Arrays::copyOf($nc(this->metadata)->PLTE_blue, plength));
					$Arrays::fill(blue, $nc($nc(this->metadata)->PLTE_blue)->length, plength, $nc($nc(this->metadata)->PLTE_blue)->get($nc($nc(this->metadata)->PLTE_blue)->length - 1));
				}
				$assign(alpha, nullptr);
				if ($nc(this->metadata)->tRNS_present && ($nc(this->metadata)->tRNS_alpha != nullptr)) {
					if ($nc($nc(this->metadata)->tRNS_alpha)->length == $nc(red)->length) {
						$assign(alpha, $nc(this->metadata)->tRNS_alpha);
					} else {
						$assign(alpha, $Arrays::copyOf($nc(this->metadata)->tRNS_alpha, red->length));
						$Arrays::fill(alpha, $nc($nc(this->metadata)->tRNS_alpha)->length, red->length, (int8_t)255);
					}
				}
				l->add($($ImageTypeSpecifier::createIndexed(red, green, blue, alpha, bitDepth, $DataBuffer::TYPE_BYTE)));
				break;
			}
		case PNGImageReader::PNG_COLOR_GRAY_ALPHA:
			{
				$assign(gray, $ColorSpace::getInstance($ColorSpace::CS_GRAY));
				$assign(bandOffsets, $new($ints, 2));
				$nc(bandOffsets)->set(0, 0);
				$nc(bandOffsets)->set(1, 1);
				l->add($($ImageTypeSpecifier::createInterleaved(gray, bandOffsets, dataType, true, false)));
				break;
			}
		case PNGImageReader::PNG_COLOR_RGB_ALPHA:
			{
				if (bitDepth == 8) {
					l->add($($ImageTypeSpecifier::createFromBufferedImageType($BufferedImage::TYPE_4BYTE_ABGR)));
					l->add($($ImageTypeSpecifier::createFromBufferedImageType($BufferedImage::TYPE_INT_ARGB)));
				}
				$assign(rgb, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
				$assign(bandOffsets, $new($ints, 4));
				$nc(bandOffsets)->set(0, 0);
				$nc(bandOffsets)->set(1, 1);
				$nc(bandOffsets)->set(2, 2);
				$nc(bandOffsets)->set(3, 3);
				l->add($($ImageTypeSpecifier::createInterleaved(rgb, bandOffsets, dataType, true, false)));
				break;
			}
		default:
			{
				break;
			}
		}
	}
	return l->iterator();
}

$ImageTypeSpecifier* PNGImageReader::getRawImageType(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, types, getImageTypes(imageIndex));
	$var($ImageTypeSpecifier, raw, nullptr);
	do {
		$assign(raw, $cast($ImageTypeSpecifier, $nc(types)->next()));
	} while ($nc(types)->hasNext());
	return raw;
}

$ImageReadParam* PNGImageReader::getDefaultReadParam() {
	return $new($ImageReadParam);
}

$IIOMetadata* PNGImageReader::getStreamMetadata() {
	return nullptr;
}

$IIOMetadata* PNGImageReader::getImageMetadata(int32_t imageIndex) {
	if (imageIndex != 0) {
		$throwNew($IndexOutOfBoundsException, "imageIndex != 0!"_s);
	}
	readMetadata();
	return this->metadata;
}

$BufferedImage* PNGImageReader::read(int32_t imageIndex, $ImageReadParam* param) {
	$useLocalCurrentObjectStackCache();
	if (imageIndex != 0) {
		$throwNew($IndexOutOfBoundsException, "imageIndex != 0!"_s);
	}
	try {
		readImage(param);
	} catch ($IOException&) {
		$var($Exception, e, $catch());
		$throw(e);
	} catch ($IllegalStateException&) {
		$var($Exception, e, $catch());
		$throw(e);
	} catch ($IllegalArgumentException&) {
		$var($Exception, e, $catch());
		$throw(e);
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		$throwNew($IIOException, "Caught exception during read: "_s, e);
	}
	return this->theImage;
}

void PNGImageReader::reset() {
	$ImageReader::reset();
	resetStreamSettings();
}

void PNGImageReader::resetStreamSettings() {
	this->gotHeader = false;
	this->gotMetadata = false;
	$set(this, metadata, nullptr);
	$set(this, pixelStream, nullptr);
	this->imageStartPosition = -1;
}

void clinit$PNGImageReader($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(PNGImageReader::inputBandsForColorType, $new($ints, {
		1,
		-1,
		3,
		1,
		2,
		-1,
		4
	}));
	$assignStatic(PNGImageReader::adam7XOffset, $new($ints, {
		0,
		4,
		0,
		2,
		0,
		1,
		0
	}));
	$assignStatic(PNGImageReader::adam7YOffset, $new($ints, {
		0,
		0,
		4,
		0,
		2,
		0,
		1
	}));
	$assignStatic(PNGImageReader::adam7XSubsampling, $new($ints, {
		8,
		8,
		4,
		4,
		2,
		2,
		1,
		1
	}));
	$assignStatic(PNGImageReader::adam7YSubsampling, $new($ints, {
		8,
		8,
		8,
		4,
		4,
		2,
		2,
		1
	}));
	$assignStatic(PNGImageReader::bandOffsets, $new($intArray2, {
		($ints*)nullptr,
		$$new($ints, {0}),
		$$new($ints, {
			0,
			1
		}),
		$$new($ints, {
			0,
			1,
			2
		}),
		$$new($ints, {
			0,
			1,
			2,
			3
		})
	}));
}

PNGImageReader::PNGImageReader() {
}

$Class* PNGImageReader::load$($String* name, bool initialize) {
	$loadClass(PNGImageReader, name, initialize, &_PNGImageReader_ClassInfo_, clinit$PNGImageReader, allocate$PNGImageReader);
	return class$;
}

$Class* PNGImageReader::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com