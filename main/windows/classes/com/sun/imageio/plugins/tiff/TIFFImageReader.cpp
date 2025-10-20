#include <com/sun/imageio/plugins/tiff/TIFFImageReader.h>

#include <com/sun/imageio/plugins/common/ImageUtil.h>
#include <com/sun/imageio/plugins/tiff/TIFFCIELabColorConverter.h>
#include <com/sun/imageio/plugins/tiff/TIFFColorConverter.h>
#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFDeflateDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFFaxDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFIFD.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageWriter.h>
#include <com/sun/imageio/plugins/tiff/TIFFJPEGDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFLSBDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFLZWDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFNullDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFOldJPEGDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFPackBitsDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFRenderedImage.h>
#include <com/sun/imageio/plugins/tiff/TIFFStreamMetadata.h>
#include <com/sun/imageio/plugins/tiff/TIFFYCbCrColorConverter.h>
#include <com/sun/imageio/plugins/tiff/TIFFYCbCrDecompressor.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_ColorSpace.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteOrder.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <javax/imageio/plugins/tiff/TIFFImageReadParam.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef BITS_PER_SAMPLE_MAX
#undef COMPRESSION_CCITT_RLE
#undef COMPRESSION_CCITT_T_4
#undef COMPRESSION_CCITT_T_6
#undef COMPRESSION_DEFLATE
#undef COMPRESSION_JPEG
#undef COMPRESSION_LZW
#undef COMPRESSION_NONE
#undef COMPRESSION_OLD_JPEG
#undef COMPRESSION_PACKBITS
#undef COMPRESSION_ZLIB
#undef CS_GRAY
#undef FILL_ORDER_LEFT_TO_RIGHT
#undef JPEG_PROC_BASELINE
#undef LITTLE_ENDIAN
#undef MAX_VALUE
#undef NATIVE_METADATA_FORMAT_NAME
#undef PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO
#undef PHOTOMETRIC_INTERPRETATION_CIELAB
#undef PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR
#undef PHOTOMETRIC_INTERPRETATION_RGB
#undef PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO
#undef PHOTOMETRIC_INTERPRETATION_Y_CB_CR
#undef PLANAR_CONFIGURATION_CHUNKY
#undef PLANAR_CONFIGURATION_PLANAR
#undef PREDICTOR_NONE
#undef SAMPLES_PER_PIXEL_MAX
#undef SAMPLE_FORMAT_FLOATING_POINT
#undef SAMPLE_FORMAT_SIGNED_INTEGER
#undef SAMPLE_FORMAT_UNDEFINED
#undef SAMPLE_FORMAT_UNSIGNED_INTEGER
#undef TAG_BITS_PER_SAMPLE
#undef TAG_COLOR_MAP
#undef TAG_COMPRESSION
#undef TAG_EXTRA_SAMPLES
#undef TAG_FILL_ORDER
#undef TAG_ICC_PROFILE
#undef TAG_IMAGE_LENGTH
#undef TAG_IMAGE_WIDTH
#undef TAG_JPEG_INTERCHANGE_FORMAT
#undef TAG_JPEG_INTERCHANGE_FORMAT_LENGTH
#undef TAG_JPEG_PROC
#undef TAG_PHOTOMETRIC_INTERPRETATION
#undef TAG_PLANAR_CONFIGURATION
#undef TAG_PREDICTOR
#undef TAG_ROWS_PER_STRIP
#undef TAG_SAMPLES_PER_PIXEL
#undef TAG_SAMPLE_FORMAT
#undef TAG_STRIP_BYTE_COUNTS
#undef TAG_STRIP_OFFSETS
#undef TAG_TILE_BYTE_COUNTS
#undef TAG_TILE_LENGTH
#undef TAG_TILE_OFFSETS
#undef TAG_TILE_WIDTH
#undef TYPE_GRAY
#undef TYPE_RGB

using $ImageUtil = ::com::sun::imageio::plugins::common::ImageUtil;
using $TIFFCIELabColorConverter = ::com::sun::imageio::plugins::tiff::TIFFCIELabColorConverter;
using $TIFFColorConverter = ::com::sun::imageio::plugins::tiff::TIFFColorConverter;
using $TIFFDecompressor = ::com::sun::imageio::plugins::tiff::TIFFDecompressor;
using $TIFFDeflateDecompressor = ::com::sun::imageio::plugins::tiff::TIFFDeflateDecompressor;
using $TIFFFaxDecompressor = ::com::sun::imageio::plugins::tiff::TIFFFaxDecompressor;
using $TIFFIFD = ::com::sun::imageio::plugins::tiff::TIFFIFD;
using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $TIFFImageWriter = ::com::sun::imageio::plugins::tiff::TIFFImageWriter;
using $TIFFJPEGDecompressor = ::com::sun::imageio::plugins::tiff::TIFFJPEGDecompressor;
using $TIFFLSBDecompressor = ::com::sun::imageio::plugins::tiff::TIFFLSBDecompressor;
using $TIFFLZWDecompressor = ::com::sun::imageio::plugins::tiff::TIFFLZWDecompressor;
using $TIFFNullDecompressor = ::com::sun::imageio::plugins::tiff::TIFFNullDecompressor;
using $TIFFOldJPEGDecompressor = ::com::sun::imageio::plugins::tiff::TIFFOldJPEGDecompressor;
using $TIFFPackBitsDecompressor = ::com::sun::imageio::plugins::tiff::TIFFPackBitsDecompressor;
using $TIFFRenderedImage = ::com::sun::imageio::plugins::tiff::TIFFRenderedImage;
using $TIFFStreamMetadata = ::com::sun::imageio::plugins::tiff::TIFFStreamMetadata;
using $TIFFYCbCrColorConverter = ::com::sun::imageio::plugins::tiff::TIFFYCbCrColorConverter;
using $TIFFYCbCrDecompressor = ::com::sun::imageio::plugins::tiff::TIFFYCbCrDecompressor;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_ColorSpace = ::java::awt::color::ICC_ColorSpace;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ByteOrder = ::java::nio::ByteOrder;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $IIOException = ::javax::imageio::IIOException;
using $IIOParam = ::javax::imageio::IIOParam;
using $ImageIO = ::javax::imageio::ImageIO;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;
using $TIFFImageReadParam = ::javax::imageio::plugins::tiff::TIFFImageReadParam;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFImageReader_FieldInfo_[] = {
	{"SAMPLES_PER_PIXEL_MAX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFImageReader, SAMPLES_PER_PIXEL_MAX)},
	{"BITS_PER_SAMPLE_MAX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFImageReader, BITS_PER_SAMPLE_MAX)},
	{"stream", "Ljavax/imageio/stream/ImageInputStream;", nullptr, $PRIVATE, $field(TIFFImageReader, stream)},
	{"gotHeader", "Z", nullptr, $PRIVATE, $field(TIFFImageReader, gotHeader)},
	{"imageReadParam", "Ljavax/imageio/ImageReadParam;", nullptr, $PRIVATE, $field(TIFFImageReader, imageReadParam)},
	{"streamMetadata", "Lcom/sun/imageio/plugins/tiff/TIFFStreamMetadata;", nullptr, $PRIVATE, $field(TIFFImageReader, streamMetadata)},
	{"currIndex", "I", nullptr, $PRIVATE, $field(TIFFImageReader, currIndex)},
	{"imageMetadata", "Lcom/sun/imageio/plugins/tiff/TIFFImageMetadata;", nullptr, $PRIVATE, $field(TIFFImageReader, imageMetadata)},
	{"imageStartPosition", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Long;>;", $PRIVATE, $field(TIFFImageReader, imageStartPosition)},
	{"numImages", "I", nullptr, $PRIVATE, $field(TIFFImageReader, numImages)},
	{"imageTypeMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Integer;Ljava/util/List<Ljavax/imageio/ImageTypeSpecifier;>;>;", $PRIVATE, $field(TIFFImageReader, imageTypeMap)},
	{"theImage", "Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE, $field(TIFFImageReader, theImage)},
	{"width", "I", nullptr, $PRIVATE, $field(TIFFImageReader, width)},
	{"height", "I", nullptr, $PRIVATE, $field(TIFFImageReader, height)},
	{"numBands", "I", nullptr, $PRIVATE, $field(TIFFImageReader, numBands)},
	{"tileOrStripWidth", "I", nullptr, $PRIVATE, $field(TIFFImageReader, tileOrStripWidth)},
	{"tileOrStripHeight", "I", nullptr, $PRIVATE, $field(TIFFImageReader, tileOrStripHeight)},
	{"planarConfiguration", "I", nullptr, $PRIVATE, $field(TIFFImageReader, planarConfiguration)},
	{"compression", "I", nullptr, $PRIVATE, $field(TIFFImageReader, compression)},
	{"photometricInterpretation", "I", nullptr, $PRIVATE, $field(TIFFImageReader, photometricInterpretation)},
	{"samplesPerPixel", "I", nullptr, $PRIVATE, $field(TIFFImageReader, samplesPerPixel)},
	{"sampleFormat", "[I", nullptr, $PRIVATE, $field(TIFFImageReader, sampleFormat)},
	{"bitsPerSample", "[I", nullptr, $PRIVATE, $field(TIFFImageReader, bitsPerSample)},
	{"extraSamples", "[I", nullptr, $PRIVATE, $field(TIFFImageReader, extraSamples)},
	{"colorMap", "[C", nullptr, $PRIVATE, $field(TIFFImageReader, colorMap)},
	{"sourceXOffset", "I", nullptr, $PRIVATE, $field(TIFFImageReader, sourceXOffset)},
	{"sourceYOffset", "I", nullptr, $PRIVATE, $field(TIFFImageReader, sourceYOffset)},
	{"srcXSubsampling", "I", nullptr, $PRIVATE, $field(TIFFImageReader, srcXSubsampling)},
	{"srcYSubsampling", "I", nullptr, $PRIVATE, $field(TIFFImageReader, srcYSubsampling)},
	{"dstWidth", "I", nullptr, $PRIVATE, $field(TIFFImageReader, dstWidth)},
	{"dstHeight", "I", nullptr, $PRIVATE, $field(TIFFImageReader, dstHeight)},
	{"dstMinX", "I", nullptr, $PRIVATE, $field(TIFFImageReader, dstMinX)},
	{"dstMinY", "I", nullptr, $PRIVATE, $field(TIFFImageReader, dstMinY)},
	{"dstXOffset", "I", nullptr, $PRIVATE, $field(TIFFImageReader, dstXOffset)},
	{"dstYOffset", "I", nullptr, $PRIVATE, $field(TIFFImageReader, dstYOffset)},
	{"tilesAcross", "I", nullptr, $PRIVATE, $field(TIFFImageReader, tilesAcross)},
	{"tilesDown", "I", nullptr, $PRIVATE, $field(TIFFImageReader, tilesDown)},
	{"pixelsRead", "I", nullptr, $PRIVATE, $field(TIFFImageReader, pixelsRead)},
	{"pixelsToRead", "I", nullptr, $PRIVATE, $field(TIFFImageReader, pixelsToRead)},
	{"sourceBands", "[I", nullptr, $PRIVATE, $field(TIFFImageReader, sourceBands)},
	{"destinationBands", "[I", nullptr, $PRIVATE, $field(TIFFImageReader, destinationBands)},
	{"decompressor", "Lcom/sun/imageio/plugins/tiff/TIFFDecompressor;", nullptr, $PRIVATE, $field(TIFFImageReader, decompressor)},
	{}
};

$MethodInfo _TIFFImageReader_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/spi/ImageReaderSpi;)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFImageReader::*)($ImageReaderSpi*)>(&TIFFImageReader::init$))},
	{"canReadRaster", "()Z", nullptr, $PUBLIC},
	{"checkIndex", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageReader::*)(int32_t)>(&TIFFImageReader::checkIndex))},
	{"decodeTile", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageReader::*)(int32_t,int32_t,int32_t)>(&TIFFImageReader::decodeTile)), "java.io.IOException"},
	{"forwardWarningMessage", "(Ljava/lang/String;)V", nullptr, 0},
	{"getCompression", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(TIFFImageReader::*)()>(&TIFFImageReader::getCompression))},
	{"getDefaultReadParam", "()Ljavax/imageio/ImageReadParam;", nullptr, $PUBLIC},
	{"getHeight", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(TIFFImageReader::*)()>(&TIFFImageReader::getHeight))},
	{"getHeight", "(I)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getImageMetadata", "(I)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getImageTypes", "(I)Ljava/util/Iterator;", "(I)Ljava/util/Iterator<Ljavax/imageio/ImageTypeSpecifier;>;", $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getNumImages", "(Z)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getNumThumbnails", "(I)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getPlanarConfiguration", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(TIFFImageReader::*)()>(&TIFFImageReader::getPlanarConfiguration))},
	{"getStreamMetadata", "()Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getStreamMetadata", "(I)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getTileHeight", "(I)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getTileOrStripByteCount", "(I)J", nullptr, $PRIVATE, $method(static_cast<int64_t(TIFFImageReader::*)(int32_t)>(&TIFFImageReader::getTileOrStripByteCount)), "java.io.IOException"},
	{"getTileOrStripHeight", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(TIFFImageReader::*)()>(&TIFFImageReader::getTileOrStripHeight))},
	{"getTileOrStripOffset", "(I)J", nullptr, $PRIVATE, $method(static_cast<int64_t(TIFFImageReader::*)(int32_t)>(&TIFFImageReader::getTileOrStripOffset)), "javax.imageio.IIOException"},
	{"getTileOrStripWidth", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(TIFFImageReader::*)()>(&TIFFImageReader::getTileOrStripWidth))},
	{"getTileWidth", "(I)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getWidth", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(TIFFImageReader::*)()>(&TIFFImageReader::getWidth))},
	{"getWidth", "(I)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"hasThumbnails", "(I)Z", nullptr, $PUBLIC},
	{"iceil", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&TIFFImageReader::iceil))},
	{"ifloor", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&TIFFImageReader::ifloor))},
	{"initializeFromMetadata", "()V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageReader::*)()>(&TIFFImageReader::initializeFromMetadata)), "javax.imageio.IIOException"},
	{"isImageTiled", "(I)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isRandomAccessEasy", "(I)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"locateImage", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TIFFImageReader::*)(int32_t)>(&TIFFImageReader::locateImage)), "javax.imageio.IIOException"},
	{"prepareRead", "(ILjavax/imageio/ImageReadParam;)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageReader::*)(int32_t,$ImageReadParam*)>(&TIFFImageReader::prepareRead)), "java.io.IOException"},
	{"read", "(ILjavax/imageio/ImageReadParam;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readAsRenderedImage", "(ILjavax/imageio/ImageReadParam;)Ljava/awt/image/RenderedImage;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readHeader", "()V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageReader::*)()>(&TIFFImageReader::readHeader)), "javax.imageio.IIOException"},
	{"readMetadata", "()V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageReader::*)()>(&TIFFImageReader::readMetadata)), "javax.imageio.IIOException"},
	{"readRaster", "(ILjavax/imageio/ImageReadParam;)Ljava/awt/image/Raster;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readSupportsThumbnails", "()Z", nullptr, $PUBLIC},
	{"readTile", "(III)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reportProgress", "()V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageReader::*)()>(&TIFFImageReader::reportProgress))},
	{"reset", "()V", nullptr, $PUBLIC},
	{"resetLocal", "()V", nullptr, $PROTECTED},
	{"seekToImage", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageReader::*)(int32_t)>(&TIFFImageReader::seekToImage)), "javax.imageio.IIOException"},
	{"setInput", "(Ljava/lang/Object;ZZ)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFImageReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFImageReader",
	"javax.imageio.ImageReader",
	nullptr,
	_TIFFImageReader_FieldInfo_,
	_TIFFImageReader_MethodInfo_
};

$Object* allocate$TIFFImageReader($Class* clazz) {
	return $of($alloc(TIFFImageReader));
}

void TIFFImageReader::init$($ImageReaderSpi* originatingProvider) {
	$ImageReader::init$(originatingProvider);
	$set(this, stream, nullptr);
	this->gotHeader = false;
	$set(this, imageReadParam, getDefaultReadParam());
	$set(this, streamMetadata, nullptr);
	this->currIndex = -1;
	$set(this, imageMetadata, nullptr);
	$set(this, imageStartPosition, $new($ArrayList));
	this->numImages = -1;
	$set(this, imageTypeMap, $new($HashMap));
	$set(this, theImage, nullptr);
	this->width = -1;
	this->height = -1;
	this->numBands = -1;
	this->tileOrStripWidth = -1;
	this->tileOrStripHeight = -1;
	this->planarConfiguration = $BaselineTIFFTagSet::PLANAR_CONFIGURATION_CHUNKY;
}

void TIFFImageReader::setInput(Object$* input, bool seekForwardOnly, bool ignoreMetadata) {
	$ImageReader::setInput(input, seekForwardOnly, ignoreMetadata);
	resetLocal();
	if (input != nullptr) {
		if (!($instanceOf($ImageInputStream, input))) {
			$throwNew($IllegalArgumentException, "input not an ImageInputStream!"_s);
		}
		$set(this, stream, $cast($ImageInputStream, input));
	} else {
		$set(this, stream, nullptr);
	}
}

void TIFFImageReader::readHeader() {
	$useLocalCurrentObjectStackCache();
	if (this->gotHeader) {
		return;
	}
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "Input not set!"_s);
	}
	$set(this, streamMetadata, $new($TIFFStreamMetadata));
	try {
		int32_t byteOrder = $nc(this->stream)->readUnsignedShort();
		if (byteOrder == 19789) {
			$init($ByteOrder);
			$set($nc(this->streamMetadata), byteOrder, $ByteOrder::BIG_ENDIAN);
			$nc(this->stream)->setByteOrder($ByteOrder::BIG_ENDIAN);
		} else if (byteOrder == 18761) {
			$init($ByteOrder);
			$set($nc(this->streamMetadata), byteOrder, $ByteOrder::LITTLE_ENDIAN);
			$nc(this->stream)->setByteOrder($ByteOrder::LITTLE_ENDIAN);
		} else {
			processWarningOccurred("Bad byte order in header, assuming little-endian"_s);
			$init($ByteOrder);
			$set($nc(this->streamMetadata), byteOrder, $ByteOrder::LITTLE_ENDIAN);
			$nc(this->stream)->setByteOrder($ByteOrder::LITTLE_ENDIAN);
		}
		int32_t magic = $nc(this->stream)->readUnsignedShort();
		if (magic != 42) {
			processWarningOccurred("Bad magic number in header, continuing"_s);
		}
		int64_t offset = $nc(this->stream)->readUnsignedInt();
		$nc(this->stream)->seek(offset);
		$nc(this->imageStartPosition)->add($($Long::valueOf(offset)));
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($IIOException, "I/O error reading header!"_s, e);
	}
	this->gotHeader = true;
}

int32_t TIFFImageReader::locateImage(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	readHeader();
	int32_t index = $Math::min(imageIndex, $nc(this->imageStartPosition)->size() - 1);
	try {
		$var($Long, l, $cast($Long, $nc(this->imageStartPosition)->get(index)));
		$nc(this->stream)->seek($nc(l)->longValue());
		while (index < imageIndex) {
			int32_t count = $nc(this->stream)->readUnsignedShort();
			if (count == 0) {
				imageIndex = index > 0 ? index - 1 : 0;
				break;
			}
			$nc(this->stream)->skipBytes(12 * count);
			int64_t offset = $nc(this->stream)->readUnsignedInt();
			if (offset == 0) {
				return index;
			}
			$nc(this->stream)->seek(offset);
			$nc(this->imageStartPosition)->add($($Long::valueOf(offset)));
			++index;
		}
	} catch ($EOFException&) {
		$var($EOFException, eofe, $catch());
		forwardWarningMessage($$str({"Ignored "_s, eofe}));
		imageIndex = index > 0 ? index - 1 : 0;
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($IIOException, "Couldn\'t seek!"_s, ioe);
	}
	if (this->currIndex != imageIndex) {
		$set(this, imageMetadata, nullptr);
	}
	this->currIndex = imageIndex;
	return imageIndex;
}

int32_t TIFFImageReader::getNumImages(bool allowSearch) {
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "Input not set!"_s);
	}
	if (this->seekForwardOnly && allowSearch) {
		$throwNew($IllegalStateException, "seekForwardOnly and allowSearch can\'t both be true!"_s);
	}
	if (this->numImages > 0) {
		return this->numImages;
	}
	if (allowSearch) {
		this->numImages = locateImage($Integer::MAX_VALUE) + 1;
	}
	return this->numImages;
}

$IIOMetadata* TIFFImageReader::getStreamMetadata() {
	readHeader();
	return this->streamMetadata;
}

void TIFFImageReader::checkIndex(int32_t imageIndex) {
	if (imageIndex < this->minIndex) {
		$throwNew($IndexOutOfBoundsException, "imageIndex < minIndex!"_s);
	}
	if (this->seekForwardOnly) {
		this->minIndex = imageIndex;
	}
}

void TIFFImageReader::seekToImage(int32_t imageIndex) {
	checkIndex(imageIndex);
	int32_t index = locateImage(imageIndex);
	if (index != imageIndex) {
		$throwNew($IndexOutOfBoundsException, "imageIndex out of bounds!"_s);
	}
	readMetadata();
	initializeFromMetadata();
}

void TIFFImageReader::readMetadata() {
	$useLocalCurrentObjectStackCache();
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "Input not set!"_s);
	}
	if (this->imageMetadata != nullptr) {
		return;
	}
	try {
		$var($List, tagSets, nullptr);
		bool readUnknownTags = false;
		if ($instanceOf($TIFFImageReadParam, this->imageReadParam)) {
			$var($TIFFImageReadParam, tp, $cast($TIFFImageReadParam, this->imageReadParam));
			$assign(tagSets, $nc(tp)->getAllowedTagSets());
			readUnknownTags = tp->getReadUnknownTags();
		} else {
			$assign(tagSets, $new($ArrayList, 1));
			tagSets->add($($BaselineTIFFTagSet::getInstance()));
		}
		$set(this, imageMetadata, $new($TIFFImageMetadata, tagSets));
		$nc(this->imageMetadata)->initializeFromStream(this->stream, this->ignoreMetadata, readUnknownTags);
	} catch ($IIOException&) {
		$var($IIOException, iioe, $catch());
		$throw(iioe);
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($IIOException, "I/O error reading image metadata!"_s, ioe);
	}
}

int32_t TIFFImageReader::getWidth() {
	return this->width;
}

int32_t TIFFImageReader::getHeight() {
	return this->height;
}

int32_t TIFFImageReader::getTileOrStripWidth() {
	$var($TIFFField, f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_TILE_WIDTH));
	return (f == nullptr) ? getWidth() : $nc(f)->getAsInt(0);
}

int32_t TIFFImageReader::getTileOrStripHeight() {
	$var($TIFFField, f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_TILE_LENGTH));
	if (f != nullptr) {
		return f->getAsInt(0);
	}
	$assign(f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_ROWS_PER_STRIP));
	int32_t h = (f == nullptr) ? -1 : $nc(f)->getAsInt(0);
	return (h == -1) ? getHeight() : h;
}

int32_t TIFFImageReader::getPlanarConfiguration() {
	$useLocalCurrentObjectStackCache();
	$var($TIFFField, f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_PLANAR_CONFIGURATION));
	if (f != nullptr) {
		int32_t planarConfigurationValue = f->getAsInt(0);
		if (planarConfigurationValue == $BaselineTIFFTagSet::PLANAR_CONFIGURATION_PLANAR) {
			bool var$0 = getCompression() == $BaselineTIFFTagSet::COMPRESSION_OLD_JPEG;
			if (var$0 && $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT) != nullptr) {
				processWarningOccurred("PlanarConfiguration \"Planar\" value inconsistent with JPEGInterchangeFormat; resetting to \"Chunky\"."_s);
				planarConfigurationValue = $BaselineTIFFTagSet::PLANAR_CONFIGURATION_CHUNKY;
			} else {
				$var($TIFFField, offsetField, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_TILE_OFFSETS));
				if (offsetField == nullptr) {
					$assign(offsetField, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_STRIP_OFFSETS));
					int32_t tw = getTileOrStripWidth();
					int32_t th = getTileOrStripHeight();
					int32_t tAcross = $div((getWidth() + tw - 1), tw);
					int32_t tDown = $div((getHeight() + th - 1), th);
					int32_t tilesPerImage = tAcross * tDown;
					$var($longs, offsetArray, $nc(offsetField)->getAsLongs());
					if (offsetArray != nullptr && offsetArray->length == tilesPerImage) {
						processWarningOccurred("PlanarConfiguration \"Planar\" value inconsistent with TileOffsets field value count; resetting to \"Chunky\"."_s);
						planarConfigurationValue = $BaselineTIFFTagSet::PLANAR_CONFIGURATION_CHUNKY;
					}
				} else {
					int32_t rowsPerStrip = getTileOrStripHeight();
					int32_t stripsPerImage = $div((getHeight() + rowsPerStrip - 1), rowsPerStrip);
					$var($longs, offsetArray, $nc(offsetField)->getAsLongs());
					if (offsetArray != nullptr && offsetArray->length == stripsPerImage) {
						processWarningOccurred("PlanarConfiguration \"Planar\" value inconsistent with StripOffsets field value count; resetting to \"Chunky\"."_s);
						planarConfigurationValue = $BaselineTIFFTagSet::PLANAR_CONFIGURATION_CHUNKY;
					}
				}
			}
		}
		return planarConfigurationValue;
	}
	return $BaselineTIFFTagSet::PLANAR_CONFIGURATION_CHUNKY;
}

int64_t TIFFImageReader::getTileOrStripOffset(int32_t tileIndex) {
	$var($TIFFField, f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_TILE_OFFSETS));
	if (f == nullptr) {
		$assign(f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_STRIP_OFFSETS));
	}
	if (f == nullptr) {
		$assign(f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT));
	}
	if (f == nullptr) {
		$throwNew($IIOException, "Missing required strip or tile offsets field."_s);
	}
	return $nc(f)->getAsLong(tileIndex);
}

int64_t TIFFImageReader::getTileOrStripByteCount(int32_t tileIndex) {
	$var($TIFFField, f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_TILE_BYTE_COUNTS));
	if (f == nullptr) {
		$assign(f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_STRIP_BYTE_COUNTS));
	}
	if (f == nullptr) {
		$assign(f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH));
	}
	int64_t tileOrStripByteCount = 0;
	if (f != nullptr) {
		tileOrStripByteCount = f->getAsLong(tileIndex);
	} else {
		processWarningOccurred("TIFF directory contains neither StripByteCounts nor TileByteCounts field: attempting to calculate from strip or tile width and height."_s);
		int32_t bitsPerPixel = $nc(this->bitsPerSample)->get(0);
		for (int32_t i = 1; i < this->samplesPerPixel; ++i) {
			bitsPerPixel += $nc(this->bitsPerSample)->get(i);
		}
		int32_t bytesPerRow = (getTileOrStripWidth() * bitsPerPixel + 7) / 8;
		tileOrStripByteCount = bytesPerRow * getTileOrStripHeight();
		int64_t streamLength = $nc(this->stream)->length();
		if (streamLength != -1) {
			tileOrStripByteCount = $Math::min(tileOrStripByteCount, streamLength - getTileOrStripOffset(tileIndex));
		} else {
			processWarningOccurred("Stream length is unknown: cannot clamp estimated strip or tile byte count to EOF."_s);
		}
	}
	return tileOrStripByteCount;
}

int32_t TIFFImageReader::getCompression() {
	$var($TIFFField, f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_COMPRESSION));
	if (f == nullptr) {
		return $BaselineTIFFTagSet::COMPRESSION_NONE;
	} else {
		return $nc(f)->getAsInt(0);
	}
}

int32_t TIFFImageReader::getWidth(int32_t imageIndex) {
	seekToImage(imageIndex);
	return getWidth();
}

int32_t TIFFImageReader::getHeight(int32_t imageIndex) {
	seekToImage(imageIndex);
	return getHeight();
}

void TIFFImageReader::initializeFromMetadata() {
	$useLocalCurrentObjectStackCache();
	$var($TIFFField, f, nullptr);
	$assign(f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_COMPRESSION));
	if (f == nullptr) {
		processWarningOccurred("Compression field is missing; assuming no compression"_s);
		this->compression = $BaselineTIFFTagSet::COMPRESSION_NONE;
	} else {
		this->compression = $nc(f)->getAsInt(0);
	}
	bool isMissingDimension = false;
	$assign(f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_IMAGE_WIDTH));
	if (f != nullptr) {
		this->width = f->getAsInt(0);
	} else {
		processWarningOccurred("ImageWidth field is missing."_s);
		isMissingDimension = true;
	}
	$assign(f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_IMAGE_LENGTH));
	if (f != nullptr) {
		this->height = f->getAsInt(0);
	} else {
		processWarningOccurred("ImageLength field is missing."_s);
		isMissingDimension = true;
	}
	$assign(f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_SAMPLES_PER_PIXEL));
	if (f != nullptr) {
		this->samplesPerPixel = f->getAsInt(0);
	} else {
		this->samplesPerPixel = 1;
		isMissingDimension = true;
	}
	int32_t defaultBitDepth = 1;
	if (isMissingDimension && ($assign(f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT))) != nullptr) {
		$var($Iterator, iter, $ImageIO::getImageReadersByFormatName("JPEG"_s));
		if (iter != nullptr && iter->hasNext()) {
			$var($ImageReader, jreader, $cast($ImageReader, iter->next()));
			try {
				$nc(this->stream)->mark();
				$nc(this->stream)->seek($nc(f)->getAsLong(0));
				$nc(jreader)->setInput(this->stream);
				if ($nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_IMAGE_WIDTH) == nullptr) {
					this->width = jreader->getWidth(0);
				}
				if ($nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_IMAGE_LENGTH) == nullptr) {
					this->height = jreader->getHeight(0);
				}
				$var($ImageTypeSpecifier, imageType, jreader->getRawImageType(0));
				if ($nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_SAMPLES_PER_PIXEL) == nullptr) {
					this->samplesPerPixel = imageType != nullptr ? $nc($($nc(imageType)->getSampleModel()))->getNumBands() : 3;
				}
				$nc(this->stream)->reset();
				defaultBitDepth = imageType != nullptr ? $nc($($nc(imageType)->getColorModel()))->getComponentSize(0) : 8;
			} catch ($IOException&) {
				$catch();
			}
			$nc(jreader)->dispose();
		}
	}
	if (this->samplesPerPixel < 1) {
		$throwNew($IIOException, "Samples per pixel < 1!"_s);
	} else if (this->samplesPerPixel > TIFFImageReader::SAMPLES_PER_PIXEL_MAX) {
		$throwNew($IIOException, $$str({"Samples per pixel ("_s, $$str(this->samplesPerPixel), ") greater than allowed maximum ("_s, $$str(TIFFImageReader::SAMPLES_PER_PIXEL_MAX), ")"_s}));
	}
	this->numBands = this->samplesPerPixel;
	$set(this, colorMap, nullptr);
	$assign(f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_COLOR_MAP));
	if (f != nullptr) {
		$set(this, colorMap, f->getAsChars());
	}
	$assign(f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_PHOTOMETRIC_INTERPRETATION));
	if (f == nullptr) {
		if (this->compression == $BaselineTIFFTagSet::COMPRESSION_CCITT_RLE || this->compression == $BaselineTIFFTagSet::COMPRESSION_CCITT_T_4 || this->compression == $BaselineTIFFTagSet::COMPRESSION_CCITT_T_6) {
			processWarningOccurred("PhotometricInterpretation field is missing; assuming WhiteIsZero"_s);
			this->photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO;
		} else if (this->colorMap != nullptr) {
			this->photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR;
		} else if (this->samplesPerPixel == 3 || this->samplesPerPixel == 4) {
			this->photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_RGB;
		} else {
			processWarningOccurred("PhotometricInterpretation field is missing; assuming BlackIsZero"_s);
			this->photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO;
		}
	} else {
		this->photometricInterpretation = $nc(f)->getAsInt(0);
	}
	bool replicateFirst = false;
	int32_t first = -1;
	$assign(f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_SAMPLE_FORMAT));
	$set(this, sampleFormat, $new($ints, this->samplesPerPixel));
	replicateFirst = false;
	if (f == nullptr) {
		replicateFirst = true;
		first = $BaselineTIFFTagSet::SAMPLE_FORMAT_UNDEFINED;
	} else if ($nc(f)->getCount() != this->samplesPerPixel) {
		replicateFirst = true;
		first = f->getAsInt(0);
	}
	for (int32_t i = 0; i < this->samplesPerPixel; ++i) {
		$nc(this->sampleFormat)->set(i, replicateFirst ? first : $nc(f)->getAsInt(i));
		if ($nc(this->sampleFormat)->get(i) != $BaselineTIFFTagSet::SAMPLE_FORMAT_UNSIGNED_INTEGER && $nc(this->sampleFormat)->get(i) != $BaselineTIFFTagSet::SAMPLE_FORMAT_SIGNED_INTEGER && $nc(this->sampleFormat)->get(i) != $BaselineTIFFTagSet::SAMPLE_FORMAT_FLOATING_POINT && $nc(this->sampleFormat)->get(i) != $BaselineTIFFTagSet::SAMPLE_FORMAT_UNDEFINED) {
			processWarningOccurred("Illegal value for SAMPLE_FORMAT, assuming SAMPLE_FORMAT_UNDEFINED"_s);
			$nc(this->sampleFormat)->set(i, $BaselineTIFFTagSet::SAMPLE_FORMAT_UNDEFINED);
		}
	}
	$assign(f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_BITS_PER_SAMPLE));
	$set(this, bitsPerSample, $new($ints, this->samplesPerPixel));
	replicateFirst = false;
	if (f == nullptr) {
		replicateFirst = true;
		first = defaultBitDepth;
	} else if ($nc(f)->getCount() != this->samplesPerPixel) {
		replicateFirst = true;
		first = f->getAsInt(0);
	}
	for (int32_t i = 0; i < this->samplesPerPixel; ++i) {
		$nc(this->bitsPerSample)->set(i, replicateFirst ? first : $nc(f)->getAsInt(i));
		if ($nc(this->bitsPerSample)->get(i) > TIFFImageReader::BITS_PER_SAMPLE_MAX) {
			$throwNew($IIOException, $$str({"Bits per sample ("_s, $$str($nc(this->bitsPerSample)->get(i)), ") greater than allowed maximum ("_s, $$str(TIFFImageReader::BITS_PER_SAMPLE_MAX), ")"_s}));
		}
	}
	$set(this, extraSamples, nullptr);
	$assign(f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_EXTRA_SAMPLES));
	if (f != nullptr) {
		$set(this, extraSamples, f->getAsInts());
	}
}

$Iterator* TIFFImageReader::getImageTypes(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	$var($List, l, nullptr);
	$var($Integer, imageIndexInteger, $Integer::valueOf(imageIndex));
	if ($nc(this->imageTypeMap)->containsKey(imageIndexInteger)) {
		$assign(l, $cast($List, $nc(this->imageTypeMap)->get(imageIndexInteger)));
	} else {
		$assign(l, $new($ArrayList, 1));
		seekToImage(imageIndex);
		$var($ImageTypeSpecifier, itsRaw, $TIFFDecompressor::getRawImageTypeSpecifier(this->photometricInterpretation, this->compression, this->samplesPerPixel, this->bitsPerSample, this->sampleFormat, this->extraSamples, this->colorMap));
		$var($TIFFField, iccProfileField, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_ICC_PROFILE));
		if (iccProfileField != nullptr && $instanceOf($ComponentColorModel, $($nc(itsRaw)->getColorModel()))) {
			$var($ColorModel, cmRaw, itsRaw->getColorModel());
			$var($ColorSpace, csRaw, $nc(cmRaw)->getColorSpace());
			$var($SampleModel, smRaw, itsRaw->getSampleModel());
			$var($ColorSpace, iccColorSpace, nullptr);
			try {
				$var($bytes, iccProfileValue, iccProfileField->getAsBytes());
				$var($ICC_Profile, iccProfile, $ICC_Profile::getInstance(iccProfileValue));
				$assign(iccColorSpace, $new($ICC_ColorSpace, iccProfile));
				$var($floats, rgb, iccColorSpace->toRGB($$new($floats, {
					1.0f,
					1.0f,
					1.0f
				})));
			} catch ($Exception&) {
				$var($Exception, iccProfileException, $catch());
				processWarningOccurred($$str({"Superseding bad ICC profile: "_s, $(iccProfileException->getMessage())}));
				if (iccColorSpace != nullptr) {
					switch (iccColorSpace->getType()) {
					case $ColorSpace::TYPE_GRAY:
						{
							$assign(iccColorSpace, $ColorSpace::getInstance($ColorSpace::CS_GRAY));
							break;
						}
					case $ColorSpace::TYPE_RGB:
						{
							$assign(iccColorSpace, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
							break;
						}
					default:
						{
							$assign(iccColorSpace, csRaw);
							break;
						}
					}
				} else {
					$assign(iccColorSpace, csRaw);
				}
			}
			int32_t numBands = $nc(smRaw)->getNumBands();
			int32_t numComponents = $nc(iccColorSpace)->getNumComponents();
			if (numBands == numComponents || numBands == numComponents + 1) {
				bool hasAlpha = numComponents != numBands;
				bool isAlphaPre = hasAlpha && cmRaw->isAlphaPremultiplied();
				$var($ColorSpace, var$0, iccColorSpace);
				$var($ints, var$1, cmRaw->getComponentSize());
				bool var$2 = hasAlpha;
				bool var$3 = isAlphaPre;
				int32_t var$4 = cmRaw->getTransparency();
				$var($ColorModel, iccColorModel, $new($ComponentColorModel, var$0, var$1, var$2, var$3, var$4, cmRaw->getTransferType()));
				l->add($$new($ImageTypeSpecifier, iccColorModel, smRaw));
				int32_t var$6 = $nc(csRaw)->getType();
				bool var$5 = var$6 == iccColorSpace->getType();
				if (var$5) {
					int32_t var$7 = csRaw->getNumComponents();
					var$5 = var$7 == iccColorSpace->getNumComponents();
				}
				if (var$5) {
					l->add(itsRaw);
				}
			} else {
				l->add(itsRaw);
			}
		} else {
			l->add(itsRaw);
		}
		$nc(this->imageTypeMap)->put(imageIndexInteger, l);
	}
	return $nc(l)->iterator();
}

$IIOMetadata* TIFFImageReader::getImageMetadata(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	seekToImage(imageIndex);
	$var($TIFFImageMetadata, im, $new($TIFFImageMetadata, $($nc($($nc(this->imageMetadata)->getRootIFD()))->getTagSetList())));
	$var($Node, root, $nc(this->imageMetadata)->getAsTree($TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME));
	im->setFromTree($TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME, root);
	return im;
}

$IIOMetadata* TIFFImageReader::getStreamMetadata(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	readHeader();
	$var($TIFFStreamMetadata, sm, $new($TIFFStreamMetadata));
	$init($TIFFStreamMetadata);
	$var($Node, root, sm->getAsTree($TIFFStreamMetadata::NATIVE_METADATA_FORMAT_NAME));
	sm->setFromTree($TIFFStreamMetadata::NATIVE_METADATA_FORMAT_NAME, root);
	return sm;
}

bool TIFFImageReader::isRandomAccessEasy(int32_t imageIndex) {
	if (this->currIndex != -1) {
		seekToImage(this->currIndex);
		return getCompression() == $BaselineTIFFTagSet::COMPRESSION_NONE;
	} else {
		return false;
	}
}

bool TIFFImageReader::readSupportsThumbnails() {
	return false;
}

bool TIFFImageReader::hasThumbnails(int32_t imageIndex) {
	return false;
}

int32_t TIFFImageReader::getNumThumbnails(int32_t imageIndex) {
	return 0;
}

$ImageReadParam* TIFFImageReader::getDefaultReadParam() {
	return $new($TIFFImageReadParam);
}

bool TIFFImageReader::isImageTiled(int32_t imageIndex) {
	seekToImage(imageIndex);
	$var($TIFFField, f, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_TILE_WIDTH));
	return f != nullptr;
}

int32_t TIFFImageReader::getTileWidth(int32_t imageIndex) {
	seekToImage(imageIndex);
	return getTileOrStripWidth();
}

int32_t TIFFImageReader::getTileHeight(int32_t imageIndex) {
	seekToImage(imageIndex);
	return getTileOrStripHeight();
}

$BufferedImage* TIFFImageReader::readTile(int32_t imageIndex, int32_t tileX, int32_t tileY) {
	$useLocalCurrentObjectStackCache();
	int32_t w = getWidth(imageIndex);
	int32_t h = getHeight(imageIndex);
	int32_t tw = getTileWidth(imageIndex);
	int32_t th = getTileHeight(imageIndex);
	int32_t x = tw * tileX;
	int32_t y = th * tileY;
	if (tileX < 0 || tileY < 0 || x >= w || y >= h) {
		$throwNew($IllegalArgumentException, "Tile indices are out of bounds!"_s);
	}
	if (x + tw > w) {
		tw = w - x;
	}
	if (y + th > h) {
		th = h - y;
	}
	$var($ImageReadParam, param, getDefaultReadParam());
	$var($Rectangle, tileRect, $new($Rectangle, x, y, tw, th));
	$nc(param)->setSourceRegion(tileRect);
	return read(imageIndex, param);
}

bool TIFFImageReader::canReadRaster() {
	return false;
}

$Raster* TIFFImageReader::readRaster(int32_t imageIndex, $ImageReadParam* param) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t TIFFImageReader::ifloor(int32_t num, int32_t den) {
	$init(TIFFImageReader);
	if (num < 0) {
		num -= den - 1;
	}
	return $div(num, den);
}

int32_t TIFFImageReader::iceil(int32_t num, int32_t den) {
	$init(TIFFImageReader);
	if (num > 0) {
		num += den - 1;
	}
	return $div(num, den);
}

void TIFFImageReader::prepareRead(int32_t imageIndex, $ImageReadParam* param$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ImageReadParam, param, param$renamed);
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "Input not set!"_s);
	}
	if (param == nullptr) {
		$assign(param, getDefaultReadParam());
	}
	$set(this, imageReadParam, param);
	seekToImage(imageIndex);
	this->tileOrStripWidth = getTileOrStripWidth();
	this->tileOrStripHeight = getTileOrStripHeight();
	this->planarConfiguration = getPlanarConfiguration();
	$set(this, sourceBands, $nc(param)->getSourceBands());
	if (this->sourceBands == nullptr) {
		$set(this, sourceBands, $new($ints, this->numBands));
		for (int32_t i = 0; i < this->numBands; ++i) {
			$nc(this->sourceBands)->set(i, i);
		}
	}
	$var($Iterator, imageTypes, getImageTypes(imageIndex));
	$var($ImageTypeSpecifier, theImageType, $ImageUtil::getDestinationType(param, imageTypes));
	int32_t destNumBands = $nc($($nc(theImageType)->getSampleModel()))->getNumBands();
	$set(this, destinationBands, param->getDestinationBands());
	if (this->destinationBands == nullptr) {
		$set(this, destinationBands, $new($ints, destNumBands));
		for (int32_t i = 0; i < destNumBands; ++i) {
			$nc(this->destinationBands)->set(i, i);
		}
	}
	if ($nc(this->sourceBands)->length != $nc(this->destinationBands)->length) {
		$throwNew($IllegalArgumentException, "sourceBands.length != destinationBands.length"_s);
	}
	for (int32_t i = 0; i < $nc(this->sourceBands)->length; ++i) {
		int32_t sb = $nc(this->sourceBands)->get(i);
		if (sb < 0 || sb >= this->numBands) {
			$throwNew($IllegalArgumentException, "Source band out of range!"_s);
		}
		int32_t db = $nc(this->destinationBands)->get(i);
		if (db < 0 || db >= destNumBands) {
			$throwNew($IllegalArgumentException, "Destination band out of range!"_s);
		}
	}
}

$RenderedImage* TIFFImageReader::readAsRenderedImage(int32_t imageIndex, $ImageReadParam* param) {
	prepareRead(imageIndex, param);
	return $new($TIFFRenderedImage, this, imageIndex, this->imageReadParam, this->width, this->height);
}

void TIFFImageReader::decodeTile(int32_t ti, int32_t tj, int32_t band) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, tileRect, $new($Rectangle, ti * this->tileOrStripWidth, tj * this->tileOrStripHeight, this->tileOrStripWidth, this->tileOrStripHeight));
	if (!isImageTiled(this->currIndex)) {
		$assign(tileRect, tileRect->intersection($$new($Rectangle, 0, 0, this->width, this->height)));
	}
	if (tileRect->width <= 0 || tileRect->height <= 0) {
		return;
	}
	int32_t srcMinX = tileRect->x;
	int32_t srcMinY = tileRect->y;
	int32_t srcWidth = tileRect->width;
	int32_t srcHeight = tileRect->height;
	this->dstMinX = iceil(srcMinX - this->sourceXOffset, this->srcXSubsampling);
	int32_t dstMaxX = ifloor(srcMinX + srcWidth - 1 - this->sourceXOffset, this->srcXSubsampling);
	this->dstMinY = iceil(srcMinY - this->sourceYOffset, this->srcYSubsampling);
	int32_t dstMaxY = ifloor(srcMinY + srcHeight - 1 - this->sourceYOffset, this->srcYSubsampling);
	this->dstWidth = dstMaxX - this->dstMinX + 1;
	this->dstHeight = dstMaxY - this->dstMinY + 1;
	this->dstMinX += this->dstXOffset;
	this->dstMinY += this->dstYOffset;
	$var($Rectangle, dstRect, $new($Rectangle, this->dstMinX, this->dstMinY, this->dstWidth, this->dstHeight));
	$assign(dstRect, dstRect->intersection($($nc($($nc(this->theImage)->getRaster()))->getBounds())));
	this->dstMinX = $nc(dstRect)->x;
	this->dstMinY = dstRect->y;
	this->dstWidth = dstRect->width;
	this->dstHeight = dstRect->height;
	if (this->dstWidth <= 0 || this->dstHeight <= 0) {
		return;
	}
	int32_t activeSrcMinX = (this->dstMinX - this->dstXOffset) * this->srcXSubsampling + this->sourceXOffset;
	int32_t sxmax = (this->dstMinX + this->dstWidth - 1 - this->dstXOffset) * this->srcXSubsampling + this->sourceXOffset;
	int32_t activeSrcWidth = sxmax - activeSrcMinX + 1;
	int32_t activeSrcMinY = (this->dstMinY - this->dstYOffset) * this->srcYSubsampling + this->sourceYOffset;
	int32_t symax = (this->dstMinY + this->dstHeight - 1 - this->dstYOffset) * this->srcYSubsampling + this->sourceYOffset;
	int32_t activeSrcHeight = symax - activeSrcMinY + 1;
	$nc(this->decompressor)->setSrcMinX(srcMinX);
	$nc(this->decompressor)->setSrcMinY(srcMinY);
	$nc(this->decompressor)->setSrcWidth(srcWidth);
	$nc(this->decompressor)->setSrcHeight(srcHeight);
	$nc(this->decompressor)->setDstMinX(this->dstMinX);
	$nc(this->decompressor)->setDstMinY(this->dstMinY);
	$nc(this->decompressor)->setDstWidth(this->dstWidth);
	$nc(this->decompressor)->setDstHeight(this->dstHeight);
	$nc(this->decompressor)->setActiveSrcMinX(activeSrcMinX);
	$nc(this->decompressor)->setActiveSrcMinY(activeSrcMinY);
	$nc(this->decompressor)->setActiveSrcWidth(activeSrcWidth);
	$nc(this->decompressor)->setActiveSrcHeight(activeSrcHeight);
	int32_t tileIndex = tj * this->tilesAcross + ti;
	if (this->planarConfiguration == $BaselineTIFFTagSet::PLANAR_CONFIGURATION_PLANAR) {
		tileIndex += band * this->tilesAcross * this->tilesDown;
	}
	int64_t offset = getTileOrStripOffset(tileIndex);
	int64_t byteCount = getTileOrStripByteCount(tileIndex);
	$nc(this->decompressor)->setPlanarBand(band);
	$nc(this->decompressor)->setStream(this->stream);
	$nc(this->decompressor)->setOffset(offset);
	$nc(this->decompressor)->setByteCount((int32_t)byteCount);
	$nc(this->decompressor)->beginDecoding();
	$nc(this->stream)->mark();
	$nc(this->decompressor)->decode();
	$nc(this->stream)->reset();
}

void TIFFImageReader::reportProgress() {
	this->pixelsRead += this->dstWidth * this->dstHeight;
	processImageProgress(100.0f * this->pixelsRead / this->pixelsToRead);
	processImageUpdate(this->theImage, this->dstMinX, this->dstMinY, this->dstWidth, this->dstHeight, 1, 1, this->destinationBands);
}

$BufferedImage* TIFFImageReader::read(int32_t imageIndex, $ImageReadParam* param) {
	$useLocalCurrentObjectStackCache();
	prepareRead(imageIndex, param);
	$set(this, theImage, getDestination(param, $(getImageTypes(imageIndex)), this->width, this->height));
	this->srcXSubsampling = $nc(this->imageReadParam)->getSourceXSubsampling();
	this->srcYSubsampling = $nc(this->imageReadParam)->getSourceYSubsampling();
	$var($Point, p, $nc(this->imageReadParam)->getDestinationOffset());
	this->dstXOffset = $nc(p)->x;
	this->dstYOffset = p->y;
	$var($Rectangle, srcRegion, $new($Rectangle, 0, 0, 0, 0));
	$var($Rectangle, destRegion, $new($Rectangle, 0, 0, 0, 0));
	computeRegions(this->imageReadParam, this->width, this->height, this->theImage, srcRegion, destRegion);
	this->sourceXOffset = srcRegion->x;
	this->sourceYOffset = srcRegion->y;
	this->pixelsToRead = destRegion->width * destRegion->height;
	this->pixelsRead = 0;
	clearAbortRequest();
	processImageStarted(imageIndex);
	if (abortRequested()) {
		processReadAborted();
		return this->theImage;
	}
	this->tilesAcross = $div((this->width + this->tileOrStripWidth - 1), this->tileOrStripWidth);
	this->tilesDown = $div((this->height + this->tileOrStripHeight - 1), this->tileOrStripHeight);
	int32_t compression = getCompression();
	if (compression == $BaselineTIFFTagSet::COMPRESSION_NONE) {
		$var($TIFFField, fillOrderField, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_FILL_ORDER));
		if (fillOrderField != nullptr && fillOrderField->getAsInt(0) == 2) {
			$set(this, decompressor, $new($TIFFLSBDecompressor));
		} else {
			$set(this, decompressor, $new($TIFFNullDecompressor));
		}
	} else if (compression == $BaselineTIFFTagSet::COMPRESSION_CCITT_T_6) {
		$set(this, decompressor, $new($TIFFFaxDecompressor));
	} else if (compression == $BaselineTIFFTagSet::COMPRESSION_CCITT_T_4) {
		$set(this, decompressor, $new($TIFFFaxDecompressor));
	} else if (compression == $BaselineTIFFTagSet::COMPRESSION_CCITT_RLE) {
		$set(this, decompressor, $new($TIFFFaxDecompressor));
	} else if (compression == $BaselineTIFFTagSet::COMPRESSION_PACKBITS) {
		$set(this, decompressor, $new($TIFFPackBitsDecompressor));
	} else if (compression == $BaselineTIFFTagSet::COMPRESSION_LZW) {
		$var($TIFFField, predictorField, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_PREDICTOR));
		int32_t predictor = ((predictorField == nullptr) ? $BaselineTIFFTagSet::PREDICTOR_NONE : $nc(predictorField)->getAsInt(0));
		$var($TIFFField, fillOrderField, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_FILL_ORDER));
		int32_t fillOrder = ((fillOrderField == nullptr) ? $BaselineTIFFTagSet::FILL_ORDER_LEFT_TO_RIGHT : $nc(fillOrderField)->getAsInt(0));
		$set(this, decompressor, $new($TIFFLZWDecompressor, predictor, fillOrder));
	} else if (compression == $BaselineTIFFTagSet::COMPRESSION_JPEG) {
		$set(this, decompressor, $new($TIFFJPEGDecompressor));
	} else if (compression == $BaselineTIFFTagSet::COMPRESSION_ZLIB || compression == $BaselineTIFFTagSet::COMPRESSION_DEFLATE) {
		$var($TIFFField, predictorField, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_PREDICTOR));
		int32_t predictor = ((predictorField == nullptr) ? $BaselineTIFFTagSet::PREDICTOR_NONE : $nc(predictorField)->getAsInt(0));
		$set(this, decompressor, $new($TIFFDeflateDecompressor, predictor));
	} else if (compression == $BaselineTIFFTagSet::COMPRESSION_OLD_JPEG) {
		$var($TIFFField, JPEGProcField, $nc(this->imageMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_PROC));
		if (JPEGProcField == nullptr) {
			processWarningOccurred("JPEGProc field missing; assuming baseline sequential JPEG process."_s);
		} else if ($nc(JPEGProcField)->getAsInt(0) != $BaselineTIFFTagSet::JPEG_PROC_BASELINE) {
			$throwNew($IIOException, "Old-style JPEG supported for baseline sequential JPEG process only!"_s);
		}
		$set(this, decompressor, $new($TIFFOldJPEGDecompressor));
	} else {
		$throwNew($IIOException, $$str({"Unsupported compression type (tag value = "_s, $$str(compression), ")!"_s}));
	}
	if (this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_Y_CB_CR && compression != $BaselineTIFFTagSet::COMPRESSION_JPEG && compression != $BaselineTIFFTagSet::COMPRESSION_OLD_JPEG) {
		bool convertYCbCrToRGB = $nc($($nc($($nc(this->theImage)->getColorModel()))->getColorSpace()))->getType() == $ColorSpace::TYPE_RGB;
		$var($TIFFDecompressor, wrappedDecompressor, $instanceOf($TIFFNullDecompressor, this->decompressor) ? ($TIFFDecompressor*)nullptr : this->decompressor);
		$set(this, decompressor, $new($TIFFYCbCrDecompressor, wrappedDecompressor, convertYCbCrToRGB));
	}
	$var($TIFFColorConverter, colorConverter, nullptr);
	if (this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_CIELAB && $nc($($nc($($nc(this->theImage)->getColorModel()))->getColorSpace()))->getType() == $ColorSpace::TYPE_RGB) {
		$assign(colorConverter, $new($TIFFCIELabColorConverter));
	} else if (this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_Y_CB_CR && !($instanceOf($TIFFYCbCrDecompressor, this->decompressor)) && compression != $BaselineTIFFTagSet::COMPRESSION_JPEG && compression != $BaselineTIFFTagSet::COMPRESSION_OLD_JPEG) {
		$assign(colorConverter, $new($TIFFYCbCrColorConverter, this->imageMetadata));
	}
	$nc(this->decompressor)->setReader(this);
	$nc(this->decompressor)->setMetadata(this->imageMetadata);
	$nc(this->decompressor)->setImage(this->theImage);
	$nc(this->decompressor)->setPhotometricInterpretation(this->photometricInterpretation);
	$nc(this->decompressor)->setCompression(compression);
	$nc(this->decompressor)->setSamplesPerPixel(this->samplesPerPixel);
	$nc(this->decompressor)->setBitsPerSample(this->bitsPerSample);
	$nc(this->decompressor)->setSampleFormat(this->sampleFormat);
	$nc(this->decompressor)->setExtraSamples(this->extraSamples);
	$nc(this->decompressor)->setColorMap(this->colorMap);
	$nc(this->decompressor)->setColorConverter(colorConverter);
	$nc(this->decompressor)->setSourceXOffset(this->sourceXOffset);
	$nc(this->decompressor)->setSourceYOffset(this->sourceYOffset);
	$nc(this->decompressor)->setSubsampleX(this->srcXSubsampling);
	$nc(this->decompressor)->setSubsampleY(this->srcYSubsampling);
	$nc(this->decompressor)->setDstXOffset(this->dstXOffset);
	$nc(this->decompressor)->setDstYOffset(this->dstYOffset);
	$nc(this->decompressor)->setSourceBands(this->sourceBands);
	$nc(this->decompressor)->setDestinationBands(this->destinationBands);
	int32_t minTileX = $TIFFImageWriter::XToTileX(srcRegion->x, 0, this->tileOrStripWidth);
	int32_t minTileY = $TIFFImageWriter::YToTileY(srcRegion->y, 0, this->tileOrStripHeight);
	int32_t maxTileX = $TIFFImageWriter::XToTileX(srcRegion->x + srcRegion->width - 1, 0, this->tileOrStripWidth);
	int32_t maxTileY = $TIFFImageWriter::YToTileY(srcRegion->y + srcRegion->height - 1, 0, this->tileOrStripHeight);
	if (this->planarConfiguration == $BaselineTIFFTagSet::PLANAR_CONFIGURATION_PLANAR) {
		$nc(this->decompressor)->setPlanar(true);
		$var($ints, sb, $new($ints, 1));
		$var($ints, db, $new($ints, 1));
		for (int32_t tj = minTileY; tj <= maxTileY; ++tj) {
			for (int32_t ti = minTileX; ti <= maxTileX; ++ti) {
				for (int32_t band = 0; band < this->numBands; ++band) {
					sb->set(0, $nc(this->sourceBands)->get(band));
					$nc(this->decompressor)->setSourceBands(sb);
					db->set(0, $nc(this->destinationBands)->get(band));
					$nc(this->decompressor)->setDestinationBands(db);
					decodeTile(ti, tj, band);
				}
				reportProgress();
				if (abortRequested()) {
					processReadAborted();
					return this->theImage;
				}
			}
		}
	} else {
		for (int32_t tj = minTileY; tj <= maxTileY; ++tj) {
			for (int32_t ti = minTileX; ti <= maxTileX; ++ti) {
				decodeTile(ti, tj, -1);
				reportProgress();
				if (abortRequested()) {
					processReadAborted();
					return this->theImage;
				}
			}
		}
	}
	processImageComplete();
	return this->theImage;
}

void TIFFImageReader::reset() {
	$ImageReader::reset();
	resetLocal();
}

void TIFFImageReader::resetLocal() {
	$set(this, stream, nullptr);
	this->gotHeader = false;
	$set(this, imageReadParam, getDefaultReadParam());
	$set(this, streamMetadata, nullptr);
	this->currIndex = -1;
	$set(this, imageMetadata, nullptr);
	$set(this, imageStartPosition, $new($ArrayList));
	this->numImages = -1;
	$set(this, imageTypeMap, $new($HashMap));
	this->width = -1;
	this->height = -1;
	this->numBands = -1;
	this->tileOrStripWidth = -1;
	this->tileOrStripHeight = -1;
	this->planarConfiguration = $BaselineTIFFTagSet::PLANAR_CONFIGURATION_CHUNKY;
}

void TIFFImageReader::forwardWarningMessage($String* warning) {
	processWarningOccurred(warning);
}

TIFFImageReader::TIFFImageReader() {
}

$Class* TIFFImageReader::load$($String* name, bool initialize) {
	$loadClass(TIFFImageReader, name, initialize, &_TIFFImageReader_ClassInfo_, allocate$TIFFImageReader);
	return class$;
}

$Class* TIFFImageReader::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com