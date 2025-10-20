#include <com/sun/imageio/plugins/tiff/TIFFImageWriter.h>

#include <com/sun/imageio/plugins/common/ImageUtil.h>
#include <com/sun/imageio/plugins/common/SimpleRenderedImage.h>
#include <com/sun/imageio/plugins/common/SingleTileRenderedImage.h>
#include <com/sun/imageio/plugins/tiff/EmptyImage.h>
#include <com/sun/imageio/plugins/tiff/TIFFBaseJPEGCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFCIELabColorConverter.h>
#include <com/sun/imageio/plugins/tiff/TIFFColorConverter.h>
#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFDeflateCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFDeflater.h>
#include <com/sun/imageio/plugins/tiff/TIFFExifJPEGCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFFaxCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFIFD.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageReader.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageReaderSpi.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageWriteParam.h>
#include <com/sun/imageio/plugins/tiff/TIFFJPEGCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFLSBCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFLZWCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFNullCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFPackBitsCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFRLECompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFStreamMetadata.h>
#include <com/sun/imageio/plugins/tiff/TIFFT4Compressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFT6Compressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFYCbCrColorConverter.h>
#include <com/sun/imageio/plugins/tiff/TIFFZLibCompressor.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_ColorSpace.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
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
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFDirectory.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef CHROMA_SUBSAMPLING
#undef COLOR_SPACE_SRGB
#undef COMPONENTS_CONFIGURATION_CB
#undef COMPONENTS_CONFIGURATION_CR
#undef COMPONENTS_CONFIGURATION_Y
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
#undef DEFAULT_BYTES_PER_STRIP
#undef EXIF_JPEG_COMPRESSION_TYPE
#undef EXIF_VERSION_2_2
#undef EXTRA_SAMPLES_ASSOCIATED_ALPHA
#undef EXTRA_SAMPLES_UNASSOCIATED_ALPHA
#undef LITTLE_ENDIAN
#undef MODE_COPY_FROM_METADATA
#undef MODE_DEFAULT
#undef MODE_DISABLED
#undef MODE_EXPLICIT
#undef NATIVE_METADATA_FORMAT_NAME
#undef PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO
#undef PHOTOMETRIC_INTERPRETATION_CIELAB
#undef PHOTOMETRIC_INTERPRETATION_CMYK
#undef PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR
#undef PHOTOMETRIC_INTERPRETATION_RGB
#undef PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO
#undef PHOTOMETRIC_INTERPRETATION_Y_CB_CR
#undef PLANAR_CONFIGURATION_CHUNKY
#undef PREDICTOR_HORIZONTAL_DIFFERENCING
#undef PREDICTOR_NONE
#undef RESOLUTION_UNIT_CENTIMETER
#undef RESOLUTION_UNIT_INCH
#undef RESOLUTION_UNIT_NONE
#undef SAMPLE_FORMAT_FLOATING_POINT
#undef SAMPLE_FORMAT_SIGNED_INTEGER
#undef SAMPLE_FORMAT_UNDEFINED
#undef SAMPLE_FORMAT_UNSIGNED_INTEGER
#undef TAG_BITS_PER_SAMPLE
#undef TAG_COLOR_MAP
#undef TAG_COLOR_SPACE
#undef TAG_COMPONENTS_CONFIGURATION
#undef TAG_COMPRESSED_BITS_PER_PIXEL
#undef TAG_COMPRESSION
#undef TAG_EXIF_IFD_POINTER
#undef TAG_EXIF_VERSION
#undef TAG_EXTRA_SAMPLES
#undef TAG_FILL_ORDER
#undef TAG_FLASHPIX_VERSION
#undef TAG_ICC_PROFILE
#undef TAG_IMAGE_LENGTH
#undef TAG_IMAGE_WIDTH
#undef TAG_INTEROPERABILITY_IFD_POINTER
#undef TAG_JPEG_AC_TABLES
#undef TAG_JPEG_DC_TABLES
#undef TAG_JPEG_INTERCHANGE_FORMAT
#undef TAG_JPEG_INTERCHANGE_FORMAT_LENGTH
#undef TAG_JPEG_LOSSLESS_PREDICTORS
#undef TAG_JPEG_POINT_TRANSFORMS
#undef TAG_JPEG_PROC
#undef TAG_JPEG_Q_TABLES
#undef TAG_JPEG_RESTART_INTERVAL
#undef TAG_PHOTOMETRIC_INTERPRETATION
#undef TAG_PIXEL_X_DIMENSION
#undef TAG_PIXEL_Y_DIMENSION
#undef TAG_PLANAR_CONFIGURATION
#undef TAG_PREDICTOR
#undef TAG_RESOLUTION_UNIT
#undef TAG_ROWS_PER_STRIP
#undef TAG_SAMPLES_PER_PIXEL
#undef TAG_SAMPLE_FORMAT
#undef TAG_STRIP_BYTE_COUNTS
#undef TAG_STRIP_OFFSETS
#undef TAG_TILE_BYTE_COUNTS
#undef TAG_TILE_LENGTH
#undef TAG_TILE_OFFSETS
#undef TAG_TILE_WIDTH
#undef TAG_X_POSITION
#undef TAG_X_RESOLUTION
#undef TAG_Y_CB_CR_COEFFICIENTS
#undef TAG_Y_CB_CR_POSITIONING
#undef TAG_Y_CB_CR_SUBSAMPLING
#undef TAG_Y_POSITION
#undef TAG_Y_RESOLUTION
#undef TIFF_LONG
#undef TIFF_RATIONAL
#undef TIFF_SHORT
#undef TIFF_UNDEFINED
#undef TYPE_BYTE
#undef TYPE_CMYK
#undef TYPE_DOUBLE
#undef TYPE_FLOAT
#undef TYPE_RGB
#undef TYPE_USHORT
#undef US_ASCII
#undef Y_CB_CR_POSITIONING_CENTERED
#undef Y_CB_CR_POSITIONING_COSITED

using $byteArray2 = $Array<int8_t, 2>;
using $longArray2 = $Array<int64_t, 2>;
using $ImageUtil = ::com::sun::imageio::plugins::common::ImageUtil;
using $SimpleRenderedImage = ::com::sun::imageio::plugins::common::SimpleRenderedImage;
using $SingleTileRenderedImage = ::com::sun::imageio::plugins::common::SingleTileRenderedImage;
using $EmptyImage = ::com::sun::imageio::plugins::tiff::EmptyImage;
using $TIFFBaseJPEGCompressor = ::com::sun::imageio::plugins::tiff::TIFFBaseJPEGCompressor;
using $TIFFCIELabColorConverter = ::com::sun::imageio::plugins::tiff::TIFFCIELabColorConverter;
using $TIFFColorConverter = ::com::sun::imageio::plugins::tiff::TIFFColorConverter;
using $TIFFCompressor = ::com::sun::imageio::plugins::tiff::TIFFCompressor;
using $TIFFDeflateCompressor = ::com::sun::imageio::plugins::tiff::TIFFDeflateCompressor;
using $TIFFDeflater = ::com::sun::imageio::plugins::tiff::TIFFDeflater;
using $TIFFExifJPEGCompressor = ::com::sun::imageio::plugins::tiff::TIFFExifJPEGCompressor;
using $TIFFFaxCompressor = ::com::sun::imageio::plugins::tiff::TIFFFaxCompressor;
using $TIFFIFD = ::com::sun::imageio::plugins::tiff::TIFFIFD;
using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $TIFFImageReader = ::com::sun::imageio::plugins::tiff::TIFFImageReader;
using $TIFFImageReaderSpi = ::com::sun::imageio::plugins::tiff::TIFFImageReaderSpi;
using $TIFFImageWriteParam = ::com::sun::imageio::plugins::tiff::TIFFImageWriteParam;
using $TIFFJPEGCompressor = ::com::sun::imageio::plugins::tiff::TIFFJPEGCompressor;
using $TIFFLSBCompressor = ::com::sun::imageio::plugins::tiff::TIFFLSBCompressor;
using $TIFFLZWCompressor = ::com::sun::imageio::plugins::tiff::TIFFLZWCompressor;
using $TIFFNullCompressor = ::com::sun::imageio::plugins::tiff::TIFFNullCompressor;
using $TIFFPackBitsCompressor = ::com::sun::imageio::plugins::tiff::TIFFPackBitsCompressor;
using $TIFFRLECompressor = ::com::sun::imageio::plugins::tiff::TIFFRLECompressor;
using $TIFFStreamMetadata = ::com::sun::imageio::plugins::tiff::TIFFStreamMetadata;
using $TIFFT4Compressor = ::com::sun::imageio::plugins::tiff::TIFFT4Compressor;
using $TIFFT6Compressor = ::com::sun::imageio::plugins::tiff::TIFFT6Compressor;
using $TIFFYCbCrColorConverter = ::com::sun::imageio::plugins::tiff::TIFFYCbCrColorConverter;
using $TIFFZLibCompressor = ::com::sun::imageio::plugins::tiff::TIFFZLibCompressor;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_ColorSpace = ::java::awt::color::ICC_ColorSpace;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ByteOrder = ::java::nio::ByteOrder;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $IIOException = ::javax::imageio::IIOException;
using $IIOImage = ::javax::imageio::IIOImage;
using $IIOParam = ::javax::imageio::IIOParam;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $ExifParentTIFFTagSet = ::javax::imageio::plugins::tiff::ExifParentTIFFTagSet;
using $ExifTIFFTagSet = ::javax::imageio::plugins::tiff::ExifTIFFTagSet;
using $TIFFDirectory = ::javax::imageio::plugins::tiff::TIFFDirectory;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFImageWriter_FieldInfo_[] = {
	{"EXIF_JPEG_COMPRESSION_TYPE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TIFFImageWriter, EXIF_JPEG_COMPRESSION_TYPE)},
	{"DEFAULT_BYTES_PER_STRIP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFImageWriter, DEFAULT_BYTES_PER_STRIP)},
	{"TIFFCompressionTypes", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TIFFImageWriter, TIFFCompressionTypes)},
	{"compressionTypes", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TIFFImageWriter, compressionTypes)},
	{"isCompressionLossless", "[Z", nullptr, $STATIC | $FINAL, $staticField(TIFFImageWriter, isCompressionLossless)},
	{"compressionNumbers", "[I", nullptr, $STATIC | $FINAL, $staticField(TIFFImageWriter, compressionNumbers)},
	{"stream", "Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PRIVATE, $field(TIFFImageWriter, stream)},
	{"headerPosition", "J", nullptr, $PRIVATE, $field(TIFFImageWriter, headerPosition)},
	{"image", "Ljava/awt/image/RenderedImage;", nullptr, $PRIVATE, $field(TIFFImageWriter, image)},
	{"imageType", "Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PRIVATE, $field(TIFFImageWriter, imageType)},
	{"byteOrder", "Ljava/nio/ByteOrder;", nullptr, $PRIVATE, $field(TIFFImageWriter, byteOrder)},
	{"param", "Ljavax/imageio/ImageWriteParam;", nullptr, $PRIVATE, $field(TIFFImageWriter, param)},
	{"compressor", "Lcom/sun/imageio/plugins/tiff/TIFFCompressor;", nullptr, $PRIVATE, $field(TIFFImageWriter, compressor)},
	{"colorConverter", "Lcom/sun/imageio/plugins/tiff/TIFFColorConverter;", nullptr, $PRIVATE, $field(TIFFImageWriter, colorConverter)},
	{"streamMetadata", "Lcom/sun/imageio/plugins/tiff/TIFFStreamMetadata;", nullptr, $PRIVATE, $field(TIFFImageWriter, streamMetadata)},
	{"imageMetadata", "Lcom/sun/imageio/plugins/tiff/TIFFImageMetadata;", nullptr, $PRIVATE, $field(TIFFImageWriter, imageMetadata)},
	{"sourceXOffset", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, sourceXOffset)},
	{"sourceYOffset", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, sourceYOffset)},
	{"sourceWidth", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, sourceWidth)},
	{"sourceHeight", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, sourceHeight)},
	{"sourceBands", "[I", nullptr, $PRIVATE, $field(TIFFImageWriter, sourceBands)},
	{"periodX", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, periodX)},
	{"periodY", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, periodY)},
	{"bitDepth", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, bitDepth)},
	{"numBands", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, numBands)},
	{"tileWidth", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, tileWidth)},
	{"tileLength", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, tileLength)},
	{"tilesAcross", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, tilesAcross)},
	{"tilesDown", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, tilesDown)},
	{"sampleSize", "[I", nullptr, $PRIVATE, $field(TIFFImageWriter, sampleSize)},
	{"scalingBitDepth", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, scalingBitDepth)},
	{"isRescaling", "Z", nullptr, $PRIVATE, $field(TIFFImageWriter, isRescaling)},
	{"isBilevel", "Z", nullptr, $PRIVATE, $field(TIFFImageWriter, isBilevel)},
	{"isImageSimple", "Z", nullptr, $PRIVATE, $field(TIFFImageWriter, isImageSimple)},
	{"isInverted", "Z", nullptr, $PRIVATE, $field(TIFFImageWriter, isInverted)},
	{"isTiled", "Z", nullptr, $PRIVATE, $field(TIFFImageWriter, isTiled)},
	{"nativePhotometricInterpretation", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, nativePhotometricInterpretation)},
	{"photometricInterpretation", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, photometricInterpretation)},
	{"bitsPerSample", "[C", nullptr, $PRIVATE, $field(TIFFImageWriter, bitsPerSample)},
	{"sampleFormat", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, sampleFormat)},
	{"scale", "[[B", nullptr, $PRIVATE, $field(TIFFImageWriter, scale)},
	{"scale0", "[B", nullptr, $PRIVATE, $field(TIFFImageWriter, scale0)},
	{"scaleh", "[[B", nullptr, $PRIVATE, $field(TIFFImageWriter, scaleh)},
	{"scalel", "[[B", nullptr, $PRIVATE, $field(TIFFImageWriter, scalel)},
	{"compression", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, compression)},
	{"predictor", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, predictor)},
	{"totalPixels", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, totalPixels)},
	{"pixelsDone", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, pixelsDone)},
	{"nextIFDPointerPos", "J", nullptr, $PRIVATE, $field(TIFFImageWriter, nextIFDPointerPos)},
	{"nextSpace", "J", nullptr, $PRIVATE, $field(TIFFImageWriter, nextSpace)},
	{"prevStreamPosition", "J", nullptr, $PRIVATE, $field(TIFFImageWriter, prevStreamPosition)},
	{"prevHeaderPosition", "J", nullptr, $PRIVATE, $field(TIFFImageWriter, prevHeaderPosition)},
	{"prevNextSpace", "J", nullptr, $PRIVATE, $field(TIFFImageWriter, prevNextSpace)},
	{"isWritingSequence", "Z", nullptr, $PRIVATE, $field(TIFFImageWriter, isWritingSequence)},
	{"isInsertingEmpty", "Z", nullptr, $PRIVATE, $field(TIFFImageWriter, isInsertingEmpty)},
	{"isWritingEmpty", "Z", nullptr, $PRIVATE, $field(TIFFImageWriter, isWritingEmpty)},
	{"currentImage", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, currentImage)},
	{"replacePixelsLock", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(TIFFImageWriter, replacePixelsLock)},
	{"replacePixelsIndex", "I", nullptr, $PRIVATE, $field(TIFFImageWriter, replacePixelsIndex)},
	{"replacePixelsMetadata", "Lcom/sun/imageio/plugins/tiff/TIFFImageMetadata;", nullptr, $PRIVATE, $field(TIFFImageWriter, replacePixelsMetadata)},
	{"replacePixelsTileOffsets", "[J", nullptr, $PRIVATE, $field(TIFFImageWriter, replacePixelsTileOffsets)},
	{"replacePixelsByteCounts", "[J", nullptr, $PRIVATE, $field(TIFFImageWriter, replacePixelsByteCounts)},
	{"replacePixelsOffsetsPosition", "J", nullptr, $PRIVATE, $field(TIFFImageWriter, replacePixelsOffsetsPosition)},
	{"replacePixelsByteCountsPosition", "J", nullptr, $PRIVATE, $field(TIFFImageWriter, replacePixelsByteCountsPosition)},
	{"replacePixelsRegion", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(TIFFImageWriter, replacePixelsRegion)},
	{"inReplacePixelsNest", "Z", nullptr, $PRIVATE, $field(TIFFImageWriter, inReplacePixelsNest)},
	{"reader", "Lcom/sun/imageio/plugins/tiff/TIFFImageReader;", nullptr, $PRIVATE, $field(TIFFImageWriter, reader)},
	{}
};

$MethodInfo _TIFFImageWriter_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/spi/ImageWriterSpi;)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFImageWriter::*)($ImageWriterSpi*)>(&TIFFImageWriter::init$))},
	{"XToTileX", "(III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&TIFFImageWriter::XToTileX))},
	{"YToTileY", "(III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t,int32_t)>(&TIFFImageWriter::YToTileY))},
	{"canInsertEmpty", "(I)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"canInsertImage", "(I)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"canReplacePixels", "(I)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"canWriteEmpty", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"canWriteSequence", "()Z", nullptr, $PUBLIC},
	{"checkParamsEmpty", "(Ljavax/imageio/ImageTypeSpecifier;IILjava/util/List;)V", "(Ljavax/imageio/ImageTypeSpecifier;IILjava/util/List<+Ljava/awt/image/BufferedImage;>;)V", $PRIVATE, $method(static_cast<void(TIFFImageWriter::*)($ImageTypeSpecifier*,int32_t,int32_t,$List*)>(&TIFFImageWriter::checkParamsEmpty))},
	{"convertImageMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"convertNativeImageMetadata", "(Ljavax/imageio/metadata/IIOMetadata;)Lcom/sun/imageio/plugins/tiff/TIFFImageMetadata;", nullptr, $PRIVATE, $method(static_cast<$TIFFImageMetadata*(TIFFImageWriter::*)($IIOMetadata*)>(&TIFFImageWriter::convertNativeImageMetadata)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"convertStandardImageMetadata", "(Ljavax/imageio/metadata/IIOMetadata;)Lcom/sun/imageio/plugins/tiff/TIFFImageMetadata;", nullptr, $PRIVATE, $method(static_cast<$TIFFImageMetadata*(TIFFImageWriter::*)($IIOMetadata*)>(&TIFFImageWriter::convertStandardImageMetadata)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"convertStreamMetadata", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"endInsertEmpty", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"endReplacePixels", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"endWriteEmpty", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"endWriteSequence", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"equals", "([I[I)Z", nullptr, $PRIVATE, $method(static_cast<bool(TIFFImageWriter::*)($ints*,$ints*)>(&TIFFImageWriter::equals))},
	{"getDefaultImageMetadata", "(Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getDefaultStreamMetadata", "(Ljavax/imageio/ImageWriteParam;)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getDefaultWriteParam", "()Ljavax/imageio/ImageWriteParam;", nullptr, $PUBLIC},
	{"getImageType", "()Ljavax/imageio/ImageTypeSpecifier;", nullptr, 0},
	{"initializeScaleTables", "([I)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageWriter::*)($ints*)>(&TIFFImageWriter::initializeScaleTables))},
	{"insert", "(ILjavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;Z)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageWriter::*)(int32_t,$IIOImage*,$ImageWriteParam*,bool)>(&TIFFImageWriter::insert)), "java.io.IOException"},
	{"isEncodingEmpty", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(TIFFImageWriter::*)()>(&TIFFImageWriter::isEncodingEmpty))},
	{"locateIFD", "(I[J[J)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageWriter::*)(int32_t,$longs*,$longs*)>(&TIFFImageWriter::locateIFD)), "java.io.IOException"},
	{"markPositions", "()V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageWriter::*)()>(&TIFFImageWriter::markPositions)), "java.io.IOException"},
	{"prepareInsertEmpty", "(ILjavax/imageio/ImageTypeSpecifier;IILjavax/imageio/metadata/IIOMetadata;Ljava/util/List;Ljavax/imageio/ImageWriteParam;)V", "(ILjavax/imageio/ImageTypeSpecifier;IILjavax/imageio/metadata/IIOMetadata;Ljava/util/List<+Ljava/awt/image/BufferedImage;>;Ljavax/imageio/ImageWriteParam;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"prepareReplacePixels", "(ILjava/awt/Rectangle;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"prepareWriteEmpty", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageTypeSpecifier;IILjavax/imageio/metadata/IIOMetadata;Ljava/util/List;Ljavax/imageio/ImageWriteParam;)V", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/ImageTypeSpecifier;IILjavax/imageio/metadata/IIOMetadata;Ljava/util/List<+Ljava/awt/image/BufferedImage;>;Ljavax/imageio/ImageWriteParam;)V", $PUBLIC, nullptr, "java.io.IOException"},
	{"prepareWriteSequence", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readIFD", "(I)Lcom/sun/imageio/plugins/tiff/TIFFIFD;", nullptr, $PRIVATE, $method(static_cast<$TIFFIFD*(TIFFImageWriter::*)(int32_t)>(&TIFFImageWriter::readIFD)), "java.io.IOException"},
	{"replacePixels", "(Ljava/awt/image/RenderedImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"replacePixels", "(Ljava/awt/image/Raster;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"resetPositions", "()V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageWriter::*)()>(&TIFFImageWriter::resetPositions)), "java.io.IOException"},
	{"setOutput", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setupMetadata", "(Ljava/awt/image/ColorModel;Ljava/awt/image/SampleModel;II)V", nullptr, 0, nullptr, "javax.imageio.IIOException"},
	{"subsample", "(Ljava/awt/image/Raster;[IIIIIIILjava/awt/Rectangle;)Ljava/awt/image/Raster;", nullptr, $PRIVATE, $method(static_cast<$Raster*(TIFFImageWriter::*)($Raster*,$ints*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t,$Rectangle*)>(&TIFFImageWriter::subsample))},
	{"write", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljavax/imageio/metadata/IIOMetadata;Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;ZZ)V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageWriter::*)($IIOMetadata*,$IIOImage*,$ImageWriteParam*,bool,bool)>(&TIFFImageWriter::write)), "java.io.IOException"},
	{"writeHeader", "()V", nullptr, $PRIVATE, $method(static_cast<void(TIFFImageWriter::*)()>(&TIFFImageWriter::writeHeader)), "java.io.IOException"},
	{"writeInsert", "(ILjavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeTile", "(Ljava/awt/Rectangle;Lcom/sun/imageio/plugins/tiff/TIFFCompressor;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TIFFImageWriter::*)($Rectangle*,$TIFFCompressor*)>(&TIFFImageWriter::writeTile)), "java.io.IOException"},
	{"writeToSequence", "(Ljavax/imageio/IIOImage;Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _TIFFImageWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFImageWriter",
	"javax.imageio.ImageWriter",
	nullptr,
	_TIFFImageWriter_FieldInfo_,
	_TIFFImageWriter_MethodInfo_
};

$Object* allocate$TIFFImageWriter($Class* clazz) {
	return $of($alloc(TIFFImageWriter));
}

$String* TIFFImageWriter::EXIF_JPEG_COMPRESSION_TYPE = nullptr;

$StringArray* TIFFImageWriter::TIFFCompressionTypes = nullptr;

$StringArray* TIFFImageWriter::compressionTypes = nullptr;

$booleans* TIFFImageWriter::isCompressionLossless = nullptr;

$ints* TIFFImageWriter::compressionNumbers = nullptr;

int32_t TIFFImageWriter::XToTileX(int32_t x, int32_t tileGridXOffset, int32_t tileWidth) {
	$init(TIFFImageWriter);
	x -= tileGridXOffset;
	if (x < 0) {
		x += 1 - tileWidth;
	}
	return $div(x, tileWidth);
}

int32_t TIFFImageWriter::YToTileY(int32_t y, int32_t tileGridYOffset, int32_t tileHeight) {
	$init(TIFFImageWriter);
	y -= tileGridYOffset;
	if (y < 0) {
		y += 1 - tileHeight;
	}
	return $div(y, tileHeight);
}

void TIFFImageWriter::init$($ImageWriterSpi* originatingProvider) {
	$ImageWriter::init$(originatingProvider);
	$set(this, sampleSize, nullptr);
	this->scalingBitDepth = -1;
	this->isRescaling = false;
	this->sampleFormat = $BaselineTIFFTagSet::SAMPLE_FORMAT_UNDEFINED;
	$set(this, scale, nullptr);
	$set(this, scale0, nullptr);
	$set(this, scaleh, nullptr);
	$set(this, scalel, nullptr);
	this->nextSpace = 0;
	this->isWritingSequence = false;
	this->isInsertingEmpty = false;
	this->isWritingEmpty = false;
	this->currentImage = 0;
	$set(this, replacePixelsLock, $new($Object));
	this->replacePixelsIndex = -1;
	$set(this, replacePixelsMetadata, nullptr);
	$set(this, replacePixelsTileOffsets, nullptr);
	$set(this, replacePixelsByteCounts, nullptr);
	this->replacePixelsOffsetsPosition = 0;
	this->replacePixelsByteCountsPosition = 0;
	$set(this, replacePixelsRegion, nullptr);
	this->inReplacePixelsNest = false;
	$set(this, reader, nullptr);
}

$ImageWriteParam* TIFFImageWriter::getDefaultWriteParam() {
	return $new($TIFFImageWriteParam, $(getLocale()));
}

void TIFFImageWriter::setOutput(Object$* output) {
	$useLocalCurrentObjectStackCache();
	if (output != nullptr) {
		if (!($instanceOf($ImageOutputStream, output))) {
			$throwNew($IllegalArgumentException, "output not an ImageOutputStream!"_s);
		}
		reset();
		$set(this, stream, $cast($ImageOutputStream, output));
		try {
			this->headerPosition = $nc(this->stream)->getStreamPosition();
			try {
				$var($bytes, b, $new($bytes, 4));
				$nc(this->stream)->readFully(b);
				if ((b->get(0) == (int8_t)73 && b->get(1) == (int8_t)73 && b->get(2) == (int8_t)42 && b->get(3) == (int8_t)0) || (b->get(0) == (int8_t)77 && b->get(1) == (int8_t)77 && b->get(2) == (int8_t)0 && b->get(3) == (int8_t)42)) {
					this->nextSpace = $nc(this->stream)->length();
				} else {
					this->nextSpace = this->headerPosition;
				}
			} catch ($IOException&) {
				$var($IOException, io, $catch());
				this->nextSpace = this->headerPosition;
			}
			$nc(this->stream)->seek(this->headerPosition);
		} catch ($IOException&) {
			$var($IOException, ioe, $catch());
			this->nextSpace = (this->headerPosition = 0);
		}
	} else {
		$set(this, stream, nullptr);
	}
	$ImageWriter::setOutput(output);
}

$IIOMetadata* TIFFImageWriter::getDefaultStreamMetadata($ImageWriteParam* param) {
	return $new($TIFFStreamMetadata);
}

$IIOMetadata* TIFFImageWriter::getDefaultImageMetadata($ImageTypeSpecifier* imageType, $ImageWriteParam* param) {
	$useLocalCurrentObjectStackCache();
	$var($List, tagSets, $new($ArrayList, 1));
	tagSets->add($($BaselineTIFFTagSet::getInstance()));
	$var($TIFFImageMetadata, imageMetadata, $new($TIFFImageMetadata, tagSets));
	if (imageType != nullptr) {
		$var($TIFFImageMetadata, im, $cast($TIFFImageMetadata, convertImageMetadata(imageMetadata, imageType, param)));
		if (im != nullptr) {
			$assign(imageMetadata, im);
		}
	}
	return imageMetadata;
}

$IIOMetadata* TIFFImageWriter::convertStreamMetadata($IIOMetadata* inData, $ImageWriteParam* param) {
	$useLocalCurrentObjectStackCache();
	if (inData == nullptr) {
		$throwNew($NullPointerException, "inData == null!"_s);
	}
	$var($TIFFStreamMetadata, outData, nullptr);
	if ($instanceOf($TIFFStreamMetadata, inData)) {
		$assign(outData, $new($TIFFStreamMetadata));
		$set(outData, byteOrder, $nc(($cast($TIFFStreamMetadata, inData)))->byteOrder);
		return outData;
	} else {
		$init($TIFFStreamMetadata);
		if ($nc($($Arrays::asList($($nc(inData)->getMetadataFormatNames()))))->contains($TIFFStreamMetadata::NATIVE_METADATA_FORMAT_NAME)) {
			$assign(outData, $new($TIFFStreamMetadata));
			$var($String, format, $TIFFStreamMetadata::NATIVE_METADATA_FORMAT_NAME);
			try {
				outData->mergeTree(format, $($nc(inData)->getAsTree(format)));
			} catch ($IIOInvalidTreeException&) {
				$var($IIOInvalidTreeException, e, $catch());
				return nullptr;
			}
		}
	}
	return outData;
}

$IIOMetadata* TIFFImageWriter::convertImageMetadata($IIOMetadata* inData, $ImageTypeSpecifier* imageType, $ImageWriteParam* param) {
	$useLocalCurrentObjectStackCache();
	if (inData == nullptr) {
		$throwNew($NullPointerException, "inData == null!"_s);
	}
	if (imageType == nullptr) {
		$throwNew($NullPointerException, "imageType == null!"_s);
	}
	$var($TIFFImageMetadata, outData, nullptr);
	if ($instanceOf($TIFFImageMetadata, inData)) {
		$var($TIFFIFD, inIFD, $nc(($cast($TIFFImageMetadata, inData)))->getRootIFD());
		$assign(outData, $new($TIFFImageMetadata, $($nc(inIFD)->getShallowClone())));
	} else {
		$init($TIFFImageMetadata);
		if ($nc($($Arrays::asList($($nc(inData)->getMetadataFormatNames()))))->contains($TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME)) {
			try {
				$assign(outData, convertNativeImageMetadata(inData));
			} catch ($IIOInvalidTreeException&) {
				$var($IIOInvalidTreeException, e, $catch());
				return nullptr;
			}
		} else if ($nc(inData)->isStandardMetadataFormatSupported()) {
			try {
				$assign(outData, convertStandardImageMetadata(inData));
			} catch ($IIOInvalidTreeException&) {
				$var($IIOInvalidTreeException, e, $catch());
				return nullptr;
			}
		}
	}
	if (outData != nullptr) {
		$var(TIFFImageWriter, bogusWriter, $new(TIFFImageWriter, this->originatingProvider));
		$set(bogusWriter, imageMetadata, outData);
		$set(bogusWriter, param, param);
		$var($SampleModel, sm, $nc(imageType)->getSampleModel());
		try {
			$var($ColorModel, var$0, imageType->getColorModel());
			$var($SampleModel, var$1, sm);
			int32_t var$2 = $nc(sm)->getWidth();
			bogusWriter->setupMetadata(var$0, var$1, var$2, sm->getHeight());
			return bogusWriter->imageMetadata;
		} catch ($IIOException&) {
			$var($IIOException, e, $catch());
			return nullptr;
		}
	}
	return outData;
}

$TIFFImageMetadata* TIFFImageWriter::convertStandardImageMetadata($IIOMetadata* inData) {
	$useLocalCurrentObjectStackCache();
	if (inData == nullptr) {
		$throwNew($NullPointerException, "inData == null!"_s);
	} else if (!$nc(inData)->isStandardMetadataFormatSupported()) {
		$throwNew($IllegalArgumentException, "inData does not support standard metadata format!"_s);
	}
	$var($TIFFImageMetadata, outData, nullptr);
	$init($IIOMetadataFormatImpl);
	$var($String, formatName, $IIOMetadataFormatImpl::standardMetadataFormatName);
	$var($Node, tree, $nc(inData)->getAsTree(formatName));
	if (tree != nullptr) {
		$var($List, tagSets, $new($ArrayList, 1));
		tagSets->add($($BaselineTIFFTagSet::getInstance()));
		$assign(outData, $new($TIFFImageMetadata, tagSets));
		outData->setFromTree(formatName, tree);
	}
	return outData;
}

$TIFFImageMetadata* TIFFImageWriter::convertNativeImageMetadata($IIOMetadata* inData) {
	$useLocalCurrentObjectStackCache();
	if (inData == nullptr) {
		$throwNew($NullPointerException, "inData == null!"_s);
	} else {
		$init($TIFFImageMetadata);
		if (!$nc($($Arrays::asList($($nc(inData)->getMetadataFormatNames()))))->contains($TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME)) {
			$throwNew($IllegalArgumentException, "inData does not support native metadata format!"_s);
		}
	}
	$var($TIFFImageMetadata, outData, nullptr);
	$init($TIFFImageMetadata);
	$var($String, formatName, $TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME);
	$var($Node, tree, $nc(inData)->getAsTree(formatName));
	if (tree != nullptr) {
		$var($List, tagSets, $new($ArrayList, 1));
		tagSets->add($($BaselineTIFFTagSet::getInstance()));
		$assign(outData, $new($TIFFImageMetadata, tagSets));
		outData->setFromTree(formatName, tree);
	}
	return outData;
}

void TIFFImageWriter::setupMetadata($ColorModel* cm, $SampleModel* sm, int32_t destWidth, int32_t destHeight) {
	$useLocalCurrentObjectStackCache();
	$var($TIFFIFD, rootIFD, $nc(this->imageMetadata)->getRootIFD());
	$var($BaselineTIFFTagSet, base, $BaselineTIFFTagSet::getInstance());
	$var($TIFFField, f, $nc(rootIFD)->getTIFFField($BaselineTIFFTagSet::TAG_PLANAR_CONFIGURATION));
	if (f != nullptr && f->getAsInt(0) != $BaselineTIFFTagSet::PLANAR_CONFIGURATION_CHUNKY) {
		$var($TIFFField, planarConfigurationField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_PLANAR_CONFIGURATION)), $BaselineTIFFTagSet::PLANAR_CONFIGURATION_CHUNKY));
		rootIFD->addTIFFField(planarConfigurationField);
	}
	$var($chars, extraSamples, nullptr);
	this->photometricInterpretation = -1;
	bool forcePhotometricInterpretation = false;
	$assign(f, rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_PHOTOMETRIC_INTERPRETATION));
	if (f != nullptr) {
		this->photometricInterpretation = f->getAsInt(0);
		if (this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR && !($instanceOf($IndexColorModel, cm))) {
			this->photometricInterpretation = -1;
		} else {
			forcePhotometricInterpretation = true;
		}
	}
	$var($ints, sampleSize, $nc(sm)->getSampleSize());
	int32_t numBands = sm->getNumBands();
	int32_t numExtraSamples = 0;
	if (numBands > 1 && cm != nullptr && cm->hasAlpha()) {
		--numBands;
		numExtraSamples = 1;
		$assign(extraSamples, $new($chars, 1));
		if (cm->isAlphaPremultiplied()) {
			extraSamples->set(0, (char16_t)$BaselineTIFFTagSet::EXTRA_SAMPLES_ASSOCIATED_ALPHA);
		} else {
			extraSamples->set(0, (char16_t)$BaselineTIFFTagSet::EXTRA_SAMPLES_UNASSOCIATED_ALPHA);
		}
	}
	if (numBands == 3) {
		this->nativePhotometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_RGB;
		if (this->photometricInterpretation == -1) {
			this->photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_RGB;
		}
	} else if (sm->getNumBands() == 1 && $instanceOf($IndexColorModel, cm)) {
		$var($IndexColorModel, icm, $cast($IndexColorModel, cm));
		int32_t r0 = $nc(icm)->getRed(0);
		int32_t r1 = icm->getRed(1);
		bool var$3 = icm->getMapSize() == 2;
		bool var$2 = var$3 && (r0 == icm->getGreen(0));
		bool var$1 = var$2 && (r0 == icm->getBlue(0));
		bool var$0 = var$1 && (r1 == icm->getGreen(1));
		if (var$0 && (r1 == icm->getBlue(1)) && (r0 == 0 || r0 == 255) && (r1 == 0 || r1 == 255) && (r0 != r1)) {
			if (r0 == 0) {
				this->nativePhotometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO;
			} else {
				this->nativePhotometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO;
			}
			if (this->photometricInterpretation != $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO && this->photometricInterpretation != $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO) {
				this->photometricInterpretation = r0 == 0 ? $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO : $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO;
			}
		} else {
			this->nativePhotometricInterpretation = (this->photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR);
		}
	} else {
		if (cm != nullptr) {
			switch ($nc($(cm->getColorSpace()))->getType()) {
			case $ColorSpace::TYPE_Lab:
				{
					this->nativePhotometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_CIELAB;
					break;
				}
			case $ColorSpace::TYPE_YCbCr:
				{
					this->nativePhotometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_Y_CB_CR;
					break;
				}
			case $ColorSpace::TYPE_CMYK:
				{
					this->nativePhotometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_CMYK;
					break;
				}
			default:
				{
					this->nativePhotometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO;
				}
			}
		} else {
			this->nativePhotometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO;
		}
		if (this->photometricInterpretation == -1) {
			this->photometricInterpretation = this->nativePhotometricInterpretation;
		}
	}
	int32_t compressionMode = $nc(this->param)->getCompressionMode();
	switch (compressionMode) {
	case $ImageWriteParam::MODE_EXPLICIT:
		{
			{
				$var($String, compressionType, $nc(this->param)->getCompressionType());
				if (compressionType == nullptr) {
					this->compression = $BaselineTIFFTagSet::COMPRESSION_NONE;
				} else {
					int32_t len = $nc(TIFFImageWriter::compressionTypes)->length;
					for (int32_t i = 0; i < len; ++i) {
						if ($nc(compressionType)->equals($nc(TIFFImageWriter::compressionTypes)->get(i))) {
							this->compression = $nc(TIFFImageWriter::compressionNumbers)->get(i);
						}
					}
				}
			}
			break;
		}
	case $ImageWriteParam::MODE_COPY_FROM_METADATA:
		{
			{
				$var($TIFFField, compField, rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_COMPRESSION));
				if (compField != nullptr) {
					this->compression = compField->getAsInt(0);
				} else {
					this->compression = $BaselineTIFFTagSet::COMPRESSION_NONE;
				}
			}
			break;
		}
	default:
		{
			this->compression = $BaselineTIFFTagSet::COMPRESSION_NONE;
		}
	}
	$var($TIFFField, predictorField, rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_PREDICTOR));
	if (predictorField != nullptr) {
		this->predictor = predictorField->getAsInt(0);
		if ($nc(sampleSize)->get(0) != 8 || (this->predictor != $BaselineTIFFTagSet::PREDICTOR_NONE && this->predictor != $BaselineTIFFTagSet::PREDICTOR_HORIZONTAL_DIFFERENCING)) {
			this->predictor = $BaselineTIFFTagSet::PREDICTOR_NONE;
			$var($TIFFField, newPredictorField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_PREDICTOR)), this->predictor));
			rootIFD->addTIFFField(newPredictorField);
		}
	}
	$var($TIFFField, compressionField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_COMPRESSION)), this->compression));
	rootIFD->addTIFFField(compressionField);
	bool isExif = false;
	if (numBands == 3 && $nc(sampleSize)->get(0) == 8 && sampleSize->get(1) == 8 && sampleSize->get(2) == 8) {
		if (rootIFD->getTIFFField($ExifParentTIFFTagSet::TAG_EXIF_IFD_POINTER) != nullptr) {
			if (this->compression == $BaselineTIFFTagSet::COMPRESSION_NONE && (this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_RGB || this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_Y_CB_CR)) {
				isExif = true;
			} else if (this->compression == $BaselineTIFFTagSet::COMPRESSION_OLD_JPEG) {
				isExif = true;
			}
		} else if (compressionMode == $ImageWriteParam::MODE_EXPLICIT && $nc(TIFFImageWriter::EXIF_JPEG_COMPRESSION_TYPE)->equals($($nc(this->param)->getCompressionType()))) {
			isExif = true;
		}
	}
	bool isJPEGInterchange = isExif && this->compression == $BaselineTIFFTagSet::COMPRESSION_OLD_JPEG;
	$set(this, compressor, nullptr);
	if (this->compression == $BaselineTIFFTagSet::COMPRESSION_CCITT_RLE) {
		$set(this, compressor, $new($TIFFRLECompressor));
		if (!forcePhotometricInterpretation) {
			this->photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO;
		}
	} else if (this->compression == $BaselineTIFFTagSet::COMPRESSION_CCITT_T_4) {
		$set(this, compressor, $new($TIFFT4Compressor));
		if (!forcePhotometricInterpretation) {
			this->photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO;
		}
	} else if (this->compression == $BaselineTIFFTagSet::COMPRESSION_CCITT_T_6) {
		$set(this, compressor, $new($TIFFT6Compressor));
		if (!forcePhotometricInterpretation) {
			this->photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO;
		}
	} else if (this->compression == $BaselineTIFFTagSet::COMPRESSION_LZW) {
		$set(this, compressor, $new($TIFFLZWCompressor, this->predictor));
	} else if (this->compression == $BaselineTIFFTagSet::COMPRESSION_OLD_JPEG) {
		if (isExif) {
			$set(this, compressor, $new($TIFFExifJPEGCompressor, this->param));
		} else {
			$throwNew($IIOException, "Old JPEG compression not supported!"_s);
		}
	} else if (this->compression == $BaselineTIFFTagSet::COMPRESSION_JPEG) {
		if (numBands == 3 && $nc(sampleSize)->get(0) == 8 && sampleSize->get(1) == 8 && sampleSize->get(2) == 8) {
			this->photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_Y_CB_CR;
		} else if (numBands == 1 && sampleSize->get(0) == 8) {
			this->photometricInterpretation = $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO;
		} else {
			$throwNew($IIOException, "JPEG compression supported for 1- and 3-band byte images only!"_s);
		}
		$set(this, compressor, $new($TIFFJPEGCompressor, this->param));
	} else if (this->compression == $BaselineTIFFTagSet::COMPRESSION_ZLIB) {
		$set(this, compressor, $new($TIFFZLibCompressor, this->param, this->predictor));
	} else if (this->compression == $BaselineTIFFTagSet::COMPRESSION_PACKBITS) {
		$set(this, compressor, $new($TIFFPackBitsCompressor));
	} else if (this->compression == $BaselineTIFFTagSet::COMPRESSION_DEFLATE) {
		$set(this, compressor, $new($TIFFDeflateCompressor, this->param, this->predictor));
	} else {
		$assign(f, rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_FILL_ORDER));
		bool inverseFill = (f != nullptr && f->getAsInt(0) == 2);
		if (inverseFill) {
			$set(this, compressor, $new($TIFFLSBCompressor));
		} else {
			$set(this, compressor, $new($TIFFNullCompressor));
		}
	}
	$set(this, colorConverter, nullptr);
	if (cm != nullptr && $nc($(cm->getColorSpace()))->getType() == $ColorSpace::TYPE_RGB) {
		if (this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_Y_CB_CR && this->compression != $BaselineTIFFTagSet::COMPRESSION_JPEG) {
			$set(this, colorConverter, $new($TIFFYCbCrColorConverter, this->imageMetadata));
		} else if (this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_CIELAB) {
			$set(this, colorConverter, $new($TIFFCIELabColorConverter));
		}
	}
	if (this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_Y_CB_CR && this->compression != $BaselineTIFFTagSet::COMPRESSION_JPEG) {
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_Y_CB_CR_SUBSAMPLING);
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_Y_CB_CR_POSITIONING);
		rootIFD->addTIFFField($$new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_Y_CB_CR_SUBSAMPLING)), $TIFFTag::TIFF_SHORT, 2, $of($$new($chars, {
			(char16_t)1,
			(char16_t)1
		}))));
		rootIFD->addTIFFField($$new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_Y_CB_CR_POSITIONING)), $TIFFTag::TIFF_SHORT, 1, $of($$new($chars, {(char16_t)$BaselineTIFFTagSet::Y_CB_CR_POSITIONING_COSITED}))));
	}
	$var($TIFFField, photometricInterpretationField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_PHOTOMETRIC_INTERPRETATION)), this->photometricInterpretation));
	rootIFD->addTIFFField(photometricInterpretationField);
	$set(this, bitsPerSample, $new($chars, numBands + numExtraSamples));
	this->bitDepth = 0;
	for (int32_t i = 0; i < numBands; ++i) {
		this->bitDepth = $Math::max(this->bitDepth, $nc(sampleSize)->get(i));
	}
	if (this->bitDepth == 3) {
		this->bitDepth = 4;
	} else if (this->bitDepth > 4 && this->bitDepth < 8) {
		this->bitDepth = 8;
	} else if (this->bitDepth > 8 && this->bitDepth < 16) {
		this->bitDepth = 16;
	} else if (this->bitDepth > 16 && this->bitDepth < 32) {
		this->bitDepth = 32;
	} else if (this->bitDepth > 32) {
		this->bitDepth = 64;
	}
	for (int32_t i = 0; i < $nc(this->bitsPerSample)->length; ++i) {
		$nc(this->bitsPerSample)->set(i, (char16_t)this->bitDepth);
	}
	if ($nc(this->bitsPerSample)->length != 1 || $nc(this->bitsPerSample)->get(0) != 1) {
		$var($TIFFField, bitsPerSampleField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_BITS_PER_SAMPLE)), $TIFFTag::TIFF_SHORT, $nc(this->bitsPerSample)->length, $of(this->bitsPerSample)));
		rootIFD->addTIFFField(bitsPerSampleField);
	} else {
		$var($TIFFField, bitsPerSampleField, rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_BITS_PER_SAMPLE));
		if (bitsPerSampleField != nullptr) {
			$var($ints, bps, bitsPerSampleField->getAsInts());
			if (bps == nullptr || $nc(bps)->length != 1 || $nc(bps)->get(0) != 1) {
				rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_BITS_PER_SAMPLE);
			}
		}
	}
	$assign(f, rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_SAMPLE_FORMAT));
	if (f == nullptr && (this->bitDepth == 16 || this->bitDepth == 32 || this->bitDepth == 64)) {
		char16_t sampleFormatValue = 0;
		int32_t dataType = sm->getDataType();
		if (this->bitDepth == 16 && dataType == $DataBuffer::TYPE_USHORT) {
			sampleFormatValue = (char16_t)$BaselineTIFFTagSet::SAMPLE_FORMAT_UNSIGNED_INTEGER;
		} else if ((this->bitDepth == 32 && dataType == $DataBuffer::TYPE_FLOAT) || (this->bitDepth == 64 && dataType == $DataBuffer::TYPE_DOUBLE)) {
			sampleFormatValue = (char16_t)$BaselineTIFFTagSet::SAMPLE_FORMAT_FLOATING_POINT;
		} else {
			sampleFormatValue = (char16_t)$BaselineTIFFTagSet::SAMPLE_FORMAT_SIGNED_INTEGER;
		}
		this->sampleFormat = (int32_t)sampleFormatValue;
		$var($chars, sampleFormatArray, $new($chars, $nc(this->bitsPerSample)->length));
		$Arrays::fill(sampleFormatArray, sampleFormatValue);
		$var($TIFFTag, sampleFormatTag, $nc(base)->getTag($BaselineTIFFTagSet::TAG_SAMPLE_FORMAT));
		$var($TIFFField, sampleFormatField, $new($TIFFField, sampleFormatTag, $TIFFTag::TIFF_SHORT, sampleFormatArray->length, $of(sampleFormatArray)));
		rootIFD->addTIFFField(sampleFormatField);
	} else if (f != nullptr) {
		this->sampleFormat = f->getAsInt(0);
	} else {
		this->sampleFormat = $BaselineTIFFTagSet::SAMPLE_FORMAT_UNDEFINED;
	}
	if (extraSamples != nullptr) {
		$var($TIFFField, extraSamplesField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_EXTRA_SAMPLES)), $TIFFTag::TIFF_SHORT, extraSamples->length, $of(extraSamples)));
		rootIFD->addTIFFField(extraSamplesField);
	} else {
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_EXTRA_SAMPLES);
	}
	$var($TIFFField, samplesPerPixelField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_SAMPLES_PER_PIXEL)), $nc(this->bitsPerSample)->length));
	rootIFD->addTIFFField(samplesPerPixelField);
	if (this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR && $instanceOf($IndexColorModel, cm)) {
		$var($chars, colorMap, $new($chars, 3 * ($sl(1, $nc(this->bitsPerSample)->get(0)))));
		$var($IndexColorModel, icm, $cast($IndexColorModel, cm));
		int32_t mapSize = $sl(1, $nc(this->bitsPerSample)->get(0));
		int32_t indexBound = $Math::min(mapSize, $nc(icm)->getMapSize());
		for (int32_t i = 0; i < indexBound; ++i) {
			colorMap->set(i, (char16_t)(($nc(icm)->getRed(i) * 0x0000FFFF) / 255));
			colorMap->set(mapSize + i, (char16_t)((icm->getGreen(i) * 0x0000FFFF) / 255));
			colorMap->set(2 * mapSize + i, (char16_t)((icm->getBlue(i) * 0x0000FFFF) / 255));
		}
		$var($TIFFField, colorMapField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_COLOR_MAP)), $TIFFTag::TIFF_SHORT, colorMap->length, $of(colorMap)));
		rootIFD->addTIFFField(colorMapField);
	} else {
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_COLOR_MAP);
	}
	bool var$4 = cm != nullptr && rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_ICC_PROFILE) == nullptr;
	if (var$4 && $ImageUtil::isNonStandardICCColorSpace($(cm->getColorSpace()))) {
		$var($ICC_ColorSpace, iccColorSpace, $cast($ICC_ColorSpace, cm->getColorSpace()));
		$var($bytes, iccProfileData, $nc($($nc(iccColorSpace)->getProfile()))->getData());
		$var($TIFFField, iccProfileField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_ICC_PROFILE)), $TIFFTag::TIFF_UNDEFINED, $nc(iccProfileData)->length, $of(iccProfileData)));
		rootIFD->addTIFFField(iccProfileField);
	}
	$var($TIFFField, XResolutionField, rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_X_RESOLUTION));
	$var($TIFFField, YResolutionField, rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_Y_RESOLUTION));
	if (XResolutionField == nullptr && YResolutionField == nullptr) {
		$var($longArray2, resRational, $new($longArray2, 1, 2));
		resRational->set(0, $$new($longs, 2));
		$var($TIFFField, ResolutionUnitField, rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_RESOLUTION_UNIT));
		bool var$5 = ResolutionUnitField == nullptr && rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_X_POSITION) == nullptr;
		if (var$5 && rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_Y_POSITION) == nullptr) {
			$nc(resRational->get(0))->set(0, 1);
			$nc(resRational->get(0))->set(1, 1);
			$assign(ResolutionUnitField, $new($TIFFField, $(rootIFD->getTag($BaselineTIFFTagSet::TAG_RESOLUTION_UNIT)), $BaselineTIFFTagSet::RESOLUTION_UNIT_NONE));
			rootIFD->addTIFFField(ResolutionUnitField);
		} else {
			int32_t resolutionUnit = ResolutionUnitField != nullptr ? $nc(ResolutionUnitField)->getAsInt(0) : $BaselineTIFFTagSet::RESOLUTION_UNIT_INCH;
			int32_t maxDimension = $Math::max(destWidth, destHeight);
			switch (resolutionUnit) {
			case $BaselineTIFFTagSet::RESOLUTION_UNIT_INCH:
				{
					$nc(resRational->get(0))->set(0, maxDimension);
					$nc(resRational->get(0))->set(1, 4);
					break;
				}
			case $BaselineTIFFTagSet::RESOLUTION_UNIT_CENTIMETER:
				{
					$nc(resRational->get(0))->set(0, (int64_t)100 * maxDimension);
					$nc(resRational->get(0))->set(1, 4 * 254);
					break;
				}
			default:
				{
					$nc(resRational->get(0))->set(0, 1);
					$nc(resRational->get(0))->set(1, 1);
				}
			}
		}
		$assign(XResolutionField, $new($TIFFField, $(rootIFD->getTag($BaselineTIFFTagSet::TAG_X_RESOLUTION)), $TIFFTag::TIFF_RATIONAL, 1, $of(resRational)));
		rootIFD->addTIFFField(XResolutionField);
		$assign(YResolutionField, $new($TIFFField, $(rootIFD->getTag($BaselineTIFFTagSet::TAG_Y_RESOLUTION)), $TIFFTag::TIFF_RATIONAL, 1, $of(resRational)));
		rootIFD->addTIFFField(YResolutionField);
	} else if (XResolutionField == nullptr && YResolutionField != nullptr) {
		$var($longs, yResolution, $cast($longs, $nc($(YResolutionField->getAsRational(0)))->clone()));
		$assign(XResolutionField, $new($TIFFField, $(rootIFD->getTag($BaselineTIFFTagSet::TAG_X_RESOLUTION)), $TIFFTag::TIFF_RATIONAL, 1, $of(yResolution)));
		rootIFD->addTIFFField(XResolutionField);
	} else if (XResolutionField != nullptr && YResolutionField == nullptr) {
		$var($longs, xResolution, $cast($longs, $nc($(XResolutionField->getAsRational(0)))->clone()));
		$assign(YResolutionField, $new($TIFFField, $(rootIFD->getTag($BaselineTIFFTagSet::TAG_Y_RESOLUTION)), $TIFFTag::TIFF_RATIONAL, 1, $of(xResolution)));
		rootIFD->addTIFFField(YResolutionField);
	}
	int32_t width = destWidth;
	$var($TIFFField, imageWidthField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_IMAGE_WIDTH)), width));
	rootIFD->addTIFFField(imageWidthField);
	int32_t height = destHeight;
	$var($TIFFField, imageLengthField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_IMAGE_LENGTH)), height));
	rootIFD->addTIFFField(imageLengthField);
	int32_t rowsPerStrip = 0;
	$var($TIFFField, rowsPerStripField, rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_ROWS_PER_STRIP));
	if (rowsPerStripField != nullptr) {
		rowsPerStrip = rowsPerStripField->getAsInt(0);
		if (rowsPerStrip < 0) {
			rowsPerStrip = height;
		}
	} else {
		int32_t bitsPerPixel = this->bitDepth * (numBands + numExtraSamples);
		int32_t bytesPerRow = (bitsPerPixel * width + 7) / 8;
		rowsPerStrip = $Math::max($Math::max($div(TIFFImageWriter::DEFAULT_BYTES_PER_STRIP, bytesPerRow), 1), 8);
	}
	rowsPerStrip = $Math::min(rowsPerStrip, height);
	bool useTiling = false;
	int32_t tilingMode = $nc(this->param)->getTilingMode();
	if (tilingMode == $ImageWriteParam::MODE_DISABLED || tilingMode == $ImageWriteParam::MODE_DEFAULT) {
		this->tileWidth = width;
		this->tileLength = rowsPerStrip;
		useTiling = false;
	} else if (tilingMode == $ImageWriteParam::MODE_EXPLICIT) {
		this->tileWidth = $nc(this->param)->getTileWidth();
		this->tileLength = $nc(this->param)->getTileHeight();
		useTiling = true;
	} else if (tilingMode == $ImageWriteParam::MODE_COPY_FROM_METADATA) {
		$assign(f, rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_TILE_WIDTH));
		if (f == nullptr) {
			this->tileWidth = width;
			useTiling = false;
		} else {
			this->tileWidth = $nc(f)->getAsInt(0);
			useTiling = true;
		}
		$assign(f, rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_TILE_LENGTH));
		if (f == nullptr) {
			this->tileLength = rowsPerStrip;
		} else {
			this->tileLength = $nc(f)->getAsInt(0);
			useTiling = true;
		}
	} else {
		$throwNew($IIOException, "Illegal value of tilingMode!"_s);
	}
	if (this->compression == $BaselineTIFFTagSet::COMPRESSION_JPEG) {
		int32_t subX = 0;
		int32_t subY = 0;
		if (numBands == 1) {
			subX = (subY = 1);
		} else {
			subX = (subY = $TIFFJPEGCompressor::CHROMA_SUBSAMPLING);
		}
		if (useTiling) {
			int32_t MCUMultipleX = 8 * subX;
			int32_t MCUMultipleY = 8 * subY;
			this->tileWidth = $Math::max(MCUMultipleX * ($div((this->tileWidth + MCUMultipleX / 2), MCUMultipleX)), MCUMultipleX);
			this->tileLength = $Math::max(MCUMultipleY * ($div((this->tileLength + MCUMultipleY / 2), MCUMultipleY)), MCUMultipleY);
		} else if (rowsPerStrip < height) {
			int32_t MCUMultiple = 8 * $Math::max(subX, subY);
			rowsPerStrip = (this->tileLength = $Math::max(MCUMultiple * ($div((this->tileLength + MCUMultiple / 2), MCUMultiple)), MCUMultiple));
		}
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT);
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH);
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_JPEG_PROC);
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_JPEG_RESTART_INTERVAL);
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_JPEG_LOSSLESS_PREDICTORS);
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_JPEG_POINT_TRANSFORMS);
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_JPEG_Q_TABLES);
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_JPEG_DC_TABLES);
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_JPEG_AC_TABLES);
	} else if (isJPEGInterchange) {
		this->tileWidth = width;
		this->tileLength = height;
	} else if (useTiling) {
		int32_t tileWidthRemainder = this->tileWidth % 16;
		if (tileWidthRemainder != 0) {
			this->tileWidth = $Math::max(16 * ((this->tileWidth + 8) / 16), 16);
			processWarningOccurred(this->currentImage, "Tile width rounded to multiple of 16."_s);
		}
		int32_t tileLengthRemainder = this->tileLength % 16;
		if (tileLengthRemainder != 0) {
			this->tileLength = $Math::max(16 * ((this->tileLength + 8) / 16), 16);
			processWarningOccurred(this->currentImage, "Tile height rounded to multiple of 16."_s);
		}
	}
	this->tilesAcross = $div((width + this->tileWidth - 1), this->tileWidth);
	this->tilesDown = $div((height + this->tileLength - 1), this->tileLength);
	if (!useTiling) {
		this->isTiled = false;
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_TILE_WIDTH);
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_TILE_LENGTH);
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_TILE_OFFSETS);
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_TILE_BYTE_COUNTS);
		$assign(rowsPerStripField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_ROWS_PER_STRIP)), rowsPerStrip));
		rootIFD->addTIFFField(rowsPerStripField);
		$var($TIFFField, stripOffsetsField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_STRIP_OFFSETS)), $TIFFTag::TIFF_LONG, this->tilesDown));
		rootIFD->addTIFFField(stripOffsetsField);
		$var($TIFFField, stripByteCountsField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_STRIP_BYTE_COUNTS)), $TIFFTag::TIFF_LONG, this->tilesDown));
		rootIFD->addTIFFField(stripByteCountsField);
	} else {
		this->isTiled = true;
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_ROWS_PER_STRIP);
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_STRIP_OFFSETS);
		rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_STRIP_BYTE_COUNTS);
		$var($TIFFField, tileWidthField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_TILE_WIDTH)), this->tileWidth));
		rootIFD->addTIFFField(tileWidthField);
		$var($TIFFField, tileLengthField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_TILE_LENGTH)), this->tileLength));
		rootIFD->addTIFFField(tileLengthField);
		$var($TIFFField, tileOffsetsField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_TILE_OFFSETS)), $TIFFTag::TIFF_LONG, this->tilesDown * this->tilesAcross));
		rootIFD->addTIFFField(tileOffsetsField);
		$var($TIFFField, tileByteCountsField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_TILE_BYTE_COUNTS)), $TIFFTag::TIFF_LONG, this->tilesDown * this->tilesAcross));
		rootIFD->addTIFFField(tileByteCountsField);
	}
	if (isExif) {
		bool isPrimaryIFD = isEncodingEmpty();
		if (this->compression == $BaselineTIFFTagSet::COMPRESSION_OLD_JPEG) {
			rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_IMAGE_WIDTH);
			rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_IMAGE_LENGTH);
			rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_BITS_PER_SAMPLE);
			if (isPrimaryIFD) {
				rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_COMPRESSION);
			}
			rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_PHOTOMETRIC_INTERPRETATION);
			rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_STRIP_OFFSETS);
			rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_SAMPLES_PER_PIXEL);
			rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_ROWS_PER_STRIP);
			rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_STRIP_BYTE_COUNTS);
			rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_PLANAR_CONFIGURATION);
			if (rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_RESOLUTION_UNIT) == nullptr) {
				$assign(f, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_RESOLUTION_UNIT)), $BaselineTIFFTagSet::RESOLUTION_UNIT_INCH));
				rootIFD->addTIFFField(f);
			}
			if (isPrimaryIFD) {
				rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT);
				rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH);
				rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_Y_CB_CR_SUBSAMPLING);
				if (rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_Y_CB_CR_POSITIONING) == nullptr) {
					$assign(f, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_Y_CB_CR_POSITIONING)), $TIFFTag::TIFF_SHORT, 1, $of($$new($chars, {(char16_t)$BaselineTIFFTagSet::Y_CB_CR_POSITIONING_CENTERED}))));
					rootIFD->addTIFFField(f);
				}
			} else {
				$assign(f, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT)), $TIFFTag::TIFF_LONG, 1));
				rootIFD->addTIFFField(f);
				$assign(f, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH)), $TIFFTag::TIFF_LONG, 1));
				rootIFD->addTIFFField(f);
				rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_Y_CB_CR_SUBSAMPLING);
			}
		} else {
			if (rootIFD->getTIFFField($BaselineTIFFTagSet::TAG_RESOLUTION_UNIT) == nullptr) {
				$assign(f, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_RESOLUTION_UNIT)), $BaselineTIFFTagSet::RESOLUTION_UNIT_INCH));
				rootIFD->addTIFFField(f);
			}
			rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT);
			rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH);
			if (this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_RGB) {
				rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_Y_CB_CR_COEFFICIENTS);
				rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_Y_CB_CR_SUBSAMPLING);
				rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_Y_CB_CR_POSITIONING);
			}
		}
		$var($TIFFTagSet, exifTags, $ExifTIFFTagSet::getInstance());
		$var($TIFFIFD, exifIFD, nullptr);
		$assign(f, rootIFD->getTIFFField($ExifParentTIFFTagSet::TAG_EXIF_IFD_POINTER));
		if (f != nullptr && f->hasDirectory()) {
			$assign(exifIFD, $TIFFIFD::getDirectoryAsIFD($(f->getDirectory())));
		} else if (isPrimaryIFD) {
			$var($List, exifTagSets, $new($ArrayList, 1));
			exifTagSets->add(exifTags);
			$assign(exifIFD, $new($TIFFIFD, exifTagSets));
			$var($TIFFTagSet, tagSet, $ExifParentTIFFTagSet::getInstance());
			$var($TIFFTag, exifIFDTag, $nc(tagSet)->getTag($ExifParentTIFFTagSet::TAG_EXIF_IFD_POINTER));
			rootIFD->addTIFFField($$new($TIFFField, exifIFDTag, $TIFFTag::TIFF_LONG, (int64_t)1, static_cast<$TIFFDirectory*>(exifIFD)));
		}
		if (exifIFD != nullptr) {
			if (exifIFD->getTIFFField($ExifTIFFTagSet::TAG_EXIF_VERSION) == nullptr) {
				$var($TIFFTag, var$6, $nc(exifTags)->getTag($ExifTIFFTagSet::TAG_EXIF_VERSION));
				$init($StandardCharsets);
				$assign(f, $new($TIFFField, var$6, $TIFFTag::TIFF_UNDEFINED, 4, $($of($nc($ExifTIFFTagSet::EXIF_VERSION_2_2)->getBytes($StandardCharsets::US_ASCII)))));
				exifIFD->addTIFFField(f);
			}
			if (this->compression == $BaselineTIFFTagSet::COMPRESSION_OLD_JPEG) {
				if (exifIFD->getTIFFField($ExifTIFFTagSet::TAG_COMPONENTS_CONFIGURATION) == nullptr) {
					$assign(f, $new($TIFFField, $($nc(exifTags)->getTag($ExifTIFFTagSet::TAG_COMPONENTS_CONFIGURATION)), $TIFFTag::TIFF_UNDEFINED, 4, $of($$new($bytes, {
						(int8_t)$ExifTIFFTagSet::COMPONENTS_CONFIGURATION_Y,
						(int8_t)$ExifTIFFTagSet::COMPONENTS_CONFIGURATION_CB,
						(int8_t)$ExifTIFFTagSet::COMPONENTS_CONFIGURATION_CR,
						(int8_t)0
					}))));
					exifIFD->addTIFFField(f);
				}
			} else {
				exifIFD->removeTIFFField($ExifTIFFTagSet::TAG_COMPONENTS_CONFIGURATION);
				exifIFD->removeTIFFField($ExifTIFFTagSet::TAG_COMPRESSED_BITS_PER_PIXEL);
			}
			if (exifIFD->getTIFFField($ExifTIFFTagSet::TAG_FLASHPIX_VERSION) == nullptr) {
				$assign(f, $new($TIFFField, $($nc(exifTags)->getTag($ExifTIFFTagSet::TAG_FLASHPIX_VERSION)), $TIFFTag::TIFF_UNDEFINED, 4, $of($$new($bytes, {
					(int8_t)u'0',
					(int8_t)u'1',
					(int8_t)u'0',
					(int8_t)u'0'
				}))));
				exifIFD->addTIFFField(f);
			}
			if (exifIFD->getTIFFField($ExifTIFFTagSet::TAG_COLOR_SPACE) == nullptr) {
				$assign(f, $new($TIFFField, $($nc(exifTags)->getTag($ExifTIFFTagSet::TAG_COLOR_SPACE)), $TIFFTag::TIFF_SHORT, 1, $of($$new($chars, {(char16_t)$ExifTIFFTagSet::COLOR_SPACE_SRGB}))));
				exifIFD->addTIFFField(f);
			}
			if (this->compression == $BaselineTIFFTagSet::COMPRESSION_OLD_JPEG) {
				if (exifIFD->getTIFFField($ExifTIFFTagSet::TAG_PIXEL_X_DIMENSION) == nullptr) {
					$assign(f, $new($TIFFField, $($nc(exifTags)->getTag($ExifTIFFTagSet::TAG_PIXEL_X_DIMENSION)), width));
					exifIFD->addTIFFField(f);
				}
				if (exifIFD->getTIFFField($ExifTIFFTagSet::TAG_PIXEL_Y_DIMENSION) == nullptr) {
					$assign(f, $new($TIFFField, $($nc(exifTags)->getTag($ExifTIFFTagSet::TAG_PIXEL_Y_DIMENSION)), height));
					exifIFD->addTIFFField(f);
				}
			} else {
				exifIFD->removeTIFFField($ExifTIFFTagSet::TAG_INTEROPERABILITY_IFD_POINTER);
			}
		}
	}
}

$ImageTypeSpecifier* TIFFImageWriter::getImageType() {
	return this->imageType;
}

int32_t TIFFImageWriter::writeTile($Rectangle* tileRect$renamed, $TIFFCompressor* compressor) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, tileRect, tileRect$renamed);
	$var($Rectangle, activeRect, nullptr);
	bool isPadded = false;
	int32_t var$0 = $nc(this->image)->getMinX();
	int32_t var$1 = $nc(this->image)->getMinY();
	int32_t var$2 = $nc(this->image)->getWidth();
	$var($Rectangle, imageBounds, $new($Rectangle, var$0, var$1, var$2, $nc(this->image)->getHeight()));
	if (!this->isTiled) {
		$assign(activeRect, $nc(tileRect)->intersection(imageBounds));
		$assign(tileRect, activeRect);
		isPadded = false;
	} else if (imageBounds->contains(tileRect)) {
		$assign(activeRect, tileRect);
		isPadded = false;
	} else {
		$assign(activeRect, imageBounds->intersection(tileRect));
		isPadded = true;
	}
	if ($nc(activeRect)->isEmpty()) {
		return 0;
	}
	int32_t minX = $nc(tileRect)->x;
	int32_t minY = tileRect->y;
	int32_t width = tileRect->width;
	int32_t height = tileRect->height;
	if (this->isImageSimple) {
		$var($SampleModel, sm, $nc(this->image)->getSampleModel());
		$var($Raster, raster, $nc(this->image)->getData(activeRect));
		if (isPadded) {
			$var($WritableRaster, wr, $nc(raster)->createCompatibleWritableRaster(minX, minY, width, height));
			$nc(wr)->setRect(raster);
			$assign(raster, wr);
		}
		if (this->isBilevel) {
			$var($bytes, buf, $ImageUtil::getPackedBinaryData(raster, tileRect));
			if (this->isInverted) {
				$var($DataBuffer, dbb, $nc(raster)->getDataBuffer());
				if ($instanceOf($DataBufferByte, dbb) && buf == $nc(($cast($DataBufferByte, dbb)))->getData()) {
					$var($bytes, bbuf, $new($bytes, $nc(buf)->length));
					int32_t len = buf->length;
					for (int32_t i = 0; i < len; ++i) {
						bbuf->set(i, (int8_t)(buf->get(i) ^ 255));
					}
					$assign(buf, bbuf);
				} else {
					int32_t len = $nc(buf)->length;
					for (int32_t i = 0; i < len; ++i) {
						(*buf)[i] ^= 255;
					}
				}
			}
			return $nc(compressor)->encode(buf, 0, width, height, this->sampleSize, (tileRect->width + 7) / 8);
		} else if (this->bitDepth == 8 && $nc(sm)->getDataType() == $DataBuffer::TYPE_BYTE) {
			$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, $nc(raster)->getSampleModel()));
			$var($bytes, buf, $nc(($cast($DataBufferByte, $(raster->getDataBuffer()))))->getData());
			int32_t var$3 = minX - raster->getSampleModelTranslateX();
			int32_t off = $nc(csm)->getOffset(var$3, minY - raster->getSampleModelTranslateY());
			return $nc(compressor)->encode(buf, off, width, height, this->sampleSize, csm->getScanlineStride());
		}
	}
	int32_t xOffset = minX;
	int32_t xSkip = this->periodX;
	int32_t yOffset = minY;
	int32_t ySkip = this->periodY;
	int32_t hpixels = $div((width + xSkip - 1), xSkip);
	int32_t vpixels = $div((height + ySkip - 1), ySkip);
	if (hpixels == 0 || vpixels == 0) {
		return 0;
	}
	xOffset *= this->numBands;
	xSkip *= this->numBands;
	int32_t samplesPerByte = $div(8, this->bitDepth);
	int32_t numSamples = width * this->numBands;
	int32_t bytesPerRow = hpixels * this->numBands;
	if (this->bitDepth < 8) {
		bytesPerRow = $div((bytesPerRow + samplesPerByte - 1), samplesPerByte);
	} else if (this->bitDepth == 16) {
		bytesPerRow *= 2;
	} else if (this->bitDepth == 32) {
		bytesPerRow *= 4;
	} else if (this->bitDepth == 64) {
		bytesPerRow *= 8;
	}
	$var($ints, samples, nullptr);
	$var($floats, fsamples, nullptr);
	$var($doubles, dsamples, nullptr);
	if (this->sampleFormat == $BaselineTIFFTagSet::SAMPLE_FORMAT_FLOATING_POINT) {
		if (this->bitDepth == 32) {
			$assign(fsamples, $new($floats, numSamples));
		} else {
			$assign(dsamples, $new($doubles, numSamples));
		}
	} else {
		$assign(samples, $new($ints, numSamples));
	}
	$var($bytes, currTile, $new($bytes, bytesPerRow * vpixels));
	if (!this->isInverted && !this->isRescaling && this->sourceBands == nullptr && this->periodX == 1 && this->periodY == 1 && this->colorConverter == nullptr) {
		$var($SampleModel, sm, $nc(this->image)->getSampleModel());
		if ($instanceOf($ComponentSampleModel, sm) && this->bitDepth == 8 && $nc(sm)->getDataType() == $DataBuffer::TYPE_BYTE) {
			$var($Raster, raster, $nc(this->image)->getData(activeRect));
			if (isPadded) {
				$var($WritableRaster, wr, $nc(raster)->createCompatibleWritableRaster(minX, minY, width, height));
				$nc(wr)->setRect(raster);
				$assign(raster, wr);
			}
			$var($ComponentSampleModel, csm, $cast($ComponentSampleModel, $nc(raster)->getSampleModel()));
			$var($ints, bankIndices, $nc(csm)->getBankIndices());
			$var($byteArray2, bankData, $nc(($cast($DataBufferByte, $(raster->getDataBuffer()))))->getBankData());
			int32_t lineStride = csm->getScanlineStride();
			int32_t pixelStride = csm->getPixelStride();
			for (int32_t k = 0; k < this->numBands; ++k) {
				$var($bytes, bandData, $nc(bankData)->get($nc(bankIndices)->get(k)));
				int32_t var$5 = raster->getMinX();
				int32_t var$4 = var$5 - raster->getSampleModelTranslateX();
				int32_t var$6 = raster->getMinY();
				int32_t lineOffset = csm->getOffset(var$4, var$6 - raster->getSampleModelTranslateY(), k);
				int32_t idx = k;
				for (int32_t j = 0; j < vpixels; ++j) {
					int32_t offset = lineOffset;
					for (int32_t i = 0; i < hpixels; ++i) {
						currTile->set(idx, $nc(bandData)->get(offset));
						idx += this->numBands;
						offset += pixelStride;
					}
					lineOffset += lineStride;
				}
			}
			return $nc(compressor)->encode(currTile, 0, width, height, this->sampleSize, width * this->numBands);
		}
	}
	int32_t tcount = 0;
	int32_t activeMinX = $nc(activeRect)->x;
	int32_t activeMinY = activeRect->y;
	int32_t activeMaxY = activeMinY + activeRect->height - 1;
	int32_t activeWidth = activeRect->width;
	$var($SampleModel, rowSampleModel, nullptr);
	if (isPadded) {
		$assign(rowSampleModel, $nc($($nc(this->image)->getSampleModel()))->createCompatibleSampleModel(width, 1));
	}
	for (int32_t row = yOffset; row < yOffset + height; row += ySkip) {
		$var($Raster, ras, nullptr);
		if (isPadded) {
			$var($WritableRaster, wr, $Raster::createWritableRaster(rowSampleModel, $$new($Point, minX, row)));
			if (row >= activeMinY && row <= activeMaxY) {
				$var($Rectangle, rect, $new($Rectangle, activeMinX, row, activeWidth, 1));
				$assign(ras, $nc(this->image)->getData(rect));
				$nc(wr)->setRect(ras);
			}
			$assign(ras, wr);
		} else {
			$var($Rectangle, rect, $new($Rectangle, minX, row, width, 1));
			$assign(ras, $nc(this->image)->getData(rect));
		}
		if (this->sourceBands != nullptr) {
			$assign(ras, $nc(ras)->createChild(minX, row, width, 1, minX, row, this->sourceBands));
		}
		if (this->sampleFormat == $BaselineTIFFTagSet::SAMPLE_FORMAT_FLOATING_POINT) {
			if (fsamples != nullptr) {
				$nc(ras)->getPixels(minX, row, width, 1, fsamples);
			} else {
				$nc(ras)->getPixels(minX, row, width, 1, dsamples);
			}
		} else {
			$nc(ras)->getPixels(minX, row, width, 1, samples);
			if ((this->nativePhotometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO && this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO) || (this->nativePhotometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO && this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO)) {
				int32_t bitMask = ($sl(1, this->bitDepth)) - 1;
				for (int32_t s = 0; s < numSamples; ++s) {
					(*$nc(samples))[s] ^= bitMask;
				}
			}
		}
		if (this->colorConverter != nullptr) {
			int32_t idx = 0;
			$var($floats, result, $new($floats, 3));
			if (this->sampleFormat == $BaselineTIFFTagSet::SAMPLE_FORMAT_FLOATING_POINT) {
				if (this->bitDepth == 32) {
					for (int32_t i = 0; i < width; ++i) {
						float r = $nc(fsamples)->get(idx);
						float g = fsamples->get(idx + 1);
						float b = fsamples->get(idx + 2);
						$nc(this->colorConverter)->fromRGB(r, g, b, result);
						fsamples->set(idx, result->get(0));
						fsamples->set(idx + 1, result->get(1));
						fsamples->set(idx + 2, result->get(2));
						idx += 3;
					}
				} else {
					for (int32_t i = 0; i < width; ++i) {
						float r = (float)$nc(dsamples)->get(idx);
						float g = (float)dsamples->get(idx + 1);
						float b = (float)dsamples->get(idx + 2);
						$nc(this->colorConverter)->fromRGB(r, g, b, result);
						dsamples->set(idx, result->get(0));
						dsamples->set(idx + 1, result->get(1));
						dsamples->set(idx + 2, result->get(2));
						idx += 3;
					}
				}
			} else {
				for (int32_t i = 0; i < width; ++i) {
					float r = (float)$nc(samples)->get(idx);
					float g = (float)samples->get(idx + 1);
					float b = (float)samples->get(idx + 2);
					$nc(this->colorConverter)->fromRGB(r, g, b, result);
					samples->set(idx, $cast(int32_t, (result->get(0))));
					samples->set(idx + 1, $cast(int32_t, (result->get(1))));
					samples->set(idx + 2, $cast(int32_t, (result->get(2))));
					idx += 3;
				}
			}
		}
		int32_t tmp = 0;
		int32_t pos = 0;
		switch (this->bitDepth) {
		case 1:
			{}
		case 2:
			{}
		case 4:
			{
				if (this->isRescaling) {
					for (int32_t s = 0; s < numSamples; s += xSkip) {
						int8_t val = $nc(this->scale0)->get($nc(samples)->get(s));
						tmp = ($sl(tmp, this->bitDepth)) | val;
						if (++pos == samplesPerByte) {
							currTile->set(tcount++, (int8_t)tmp);
							tmp = 0;
							pos = 0;
						}
					}
				} else {
					for (int32_t s = 0; s < numSamples; s += xSkip) {
						int8_t val = (int8_t)$nc(samples)->get(s);
						tmp = ($sl(tmp, this->bitDepth)) | val;
						if (++pos == samplesPerByte) {
							currTile->set(tcount++, (int8_t)tmp);
							tmp = 0;
							pos = 0;
						}
					}
				}
				if (pos != 0) {
					tmp <<= (($div(8, this->bitDepth)) - pos) * this->bitDepth;
					currTile->set(tcount++, (int8_t)tmp);
				}
				break;
			}
		case 8:
			{
				if (this->numBands == 1) {
					if (this->isRescaling) {
						for (int32_t s = 0; s < numSamples; s += xSkip) {
							currTile->set(tcount++, $nc(this->scale0)->get($nc(samples)->get(s)));
						}
					} else {
						for (int32_t s = 0; s < numSamples; s += xSkip) {
							currTile->set(tcount++, (int8_t)$nc(samples)->get(s));
						}
					}
				} else if (this->isRescaling) {
					for (int32_t s = 0; s < numSamples; s += xSkip) {
						for (int32_t b = 0; b < this->numBands; ++b) {
							currTile->set(tcount++, $nc($nc(this->scale)->get(b))->get($nc(samples)->get(s + b)));
						}
					}
				} else {
					for (int32_t s = 0; s < numSamples; s += xSkip) {
						for (int32_t b = 0; b < this->numBands; ++b) {
							currTile->set(tcount++, (int8_t)$nc(samples)->get(s + b));
						}
					}
				}
				break;
			}
		case 16:
			{
				if (this->isRescaling) {
					$init($ByteOrder);
					if ($nc(this->stream)->getByteOrder() == $ByteOrder::BIG_ENDIAN) {
						for (int32_t s = 0; s < numSamples; s += xSkip) {
							for (int32_t b = 0; b < this->numBands; ++b) {
								int32_t sample = $nc(samples)->get(s + b);
								currTile->set(tcount++, $nc($nc(this->scaleh)->get(b))->get(sample));
								currTile->set(tcount++, $nc($nc(this->scalel)->get(b))->get(sample));
							}
						}
					} else {
						for (int32_t s = 0; s < numSamples; s += xSkip) {
							for (int32_t b = 0; b < this->numBands; ++b) {
								int32_t sample = $nc(samples)->get(s + b);
								currTile->set(tcount++, $nc($nc(this->scalel)->get(b))->get(sample));
								currTile->set(tcount++, $nc($nc(this->scaleh)->get(b))->get(sample));
							}
						}
					}
				} else {
					$init($ByteOrder);
					if ($nc(this->stream)->getByteOrder() == $ByteOrder::BIG_ENDIAN) {
						for (int32_t s = 0; s < numSamples; s += xSkip) {
							for (int32_t b = 0; b < this->numBands; ++b) {
								int32_t sample = $nc(samples)->get(s + b);
								currTile->set(tcount++, (int8_t)((int32_t)(((int32_t)((uint32_t)sample >> 8)) & (uint32_t)255)));
								currTile->set(tcount++, (int8_t)((int32_t)(sample & (uint32_t)255)));
							}
						}
					} else {
						for (int32_t s = 0; s < numSamples; s += xSkip) {
							for (int32_t b = 0; b < this->numBands; ++b) {
								int32_t sample = $nc(samples)->get(s + b);
								currTile->set(tcount++, (int8_t)((int32_t)(sample & (uint32_t)255)));
								currTile->set(tcount++, (int8_t)((int32_t)(((int32_t)((uint32_t)sample >> 8)) & (uint32_t)255)));
							}
						}
					}
				}
				break;
			}
		case 32:
			{
				if (this->sampleFormat == $BaselineTIFFTagSet::SAMPLE_FORMAT_FLOATING_POINT) {
					$init($ByteOrder);
					if ($nc(this->stream)->getByteOrder() == $ByteOrder::BIG_ENDIAN) {
						for (int32_t s = 0; s < numSamples; s += xSkip) {
							for (int32_t b = 0; b < this->numBands; ++b) {
								float fsample = $nc(fsamples)->get(s + b);
								int32_t isample = $Float::floatToIntBits(fsample);
								currTile->set(tcount++, (int8_t)(((int32_t)(isample & (uint32_t)(int32_t)0xFF000000)) >> 24));
								currTile->set(tcount++, (int8_t)(((int32_t)(isample & (uint32_t)0x00FF0000)) >> 16));
								currTile->set(tcount++, (int8_t)(((int32_t)(isample & (uint32_t)0x0000FF00)) >> 8));
								currTile->set(tcount++, (int8_t)((int32_t)(isample & (uint32_t)255)));
							}
						}
					} else {
						for (int32_t s = 0; s < numSamples; s += xSkip) {
							for (int32_t b = 0; b < this->numBands; ++b) {
								float fsample = $nc(fsamples)->get(s + b);
								int32_t isample = $Float::floatToIntBits(fsample);
								currTile->set(tcount++, (int8_t)((int32_t)(isample & (uint32_t)255)));
								currTile->set(tcount++, (int8_t)(((int32_t)(isample & (uint32_t)0x0000FF00)) >> 8));
								currTile->set(tcount++, (int8_t)(((int32_t)(isample & (uint32_t)0x00FF0000)) >> 16));
								currTile->set(tcount++, (int8_t)(((int32_t)(isample & (uint32_t)(int32_t)0xFF000000)) >> 24));
							}
						}
					}
				} else if (this->isRescaling) {
					$var($longs, maxIn, $new($longs, this->numBands));
					$var($longs, halfIn, $new($longs, this->numBands));
					int64_t maxOut = ($sl((int64_t)1, (int64_t)this->bitDepth)) - (int64_t)1;
					for (int32_t b = 0; b < this->numBands; ++b) {
						maxIn->set(b, (($sl((int64_t)1, (int64_t)$nc(this->sampleSize)->get(b))) - (int64_t)1));
						halfIn->set(b, maxIn->get(b) / 2);
					}
					$init($ByteOrder);
					if ($nc(this->stream)->getByteOrder() == $ByteOrder::BIG_ENDIAN) {
						for (int32_t s = 0; s < numSamples; s += xSkip) {
							for (int32_t b = 0; b < this->numBands; ++b) {
								int64_t sampleOut = $div(($nc(samples)->get(s + b) * maxOut + halfIn->get(b)), maxIn->get(b));
								currTile->set(tcount++, (int8_t)(((int64_t)(sampleOut & (uint64_t)(int64_t)(int32_t)0xFF000000)) >> 24));
								currTile->set(tcount++, (int8_t)(((int64_t)(sampleOut & (uint64_t)(int64_t)0x00FF0000)) >> 16));
								currTile->set(tcount++, (int8_t)(((int64_t)(sampleOut & (uint64_t)(int64_t)0x0000FF00)) >> 8));
								currTile->set(tcount++, (int8_t)((int64_t)(sampleOut & (uint64_t)(int64_t)255)));
							}
						}
					} else {
						for (int32_t s = 0; s < numSamples; s += xSkip) {
							for (int32_t b = 0; b < this->numBands; ++b) {
								int64_t sampleOut = $div(($nc(samples)->get(s + b) * maxOut + halfIn->get(b)), maxIn->get(b));
								currTile->set(tcount++, (int8_t)((int64_t)(sampleOut & (uint64_t)(int64_t)255)));
								currTile->set(tcount++, (int8_t)(((int64_t)(sampleOut & (uint64_t)(int64_t)0x0000FF00)) >> 8));
								currTile->set(tcount++, (int8_t)(((int64_t)(sampleOut & (uint64_t)(int64_t)0x00FF0000)) >> 16));
								currTile->set(tcount++, (int8_t)(((int64_t)(sampleOut & (uint64_t)(int64_t)(int32_t)0xFF000000)) >> 24));
							}
						}
					}
				} else {
					$init($ByteOrder);
					if ($nc(this->stream)->getByteOrder() == $ByteOrder::BIG_ENDIAN) {
						for (int32_t s = 0; s < numSamples; s += xSkip) {
							for (int32_t b = 0; b < this->numBands; ++b) {
								int32_t isample = $nc(samples)->get(s + b);
								currTile->set(tcount++, (int8_t)(((int32_t)(isample & (uint32_t)(int32_t)0xFF000000)) >> 24));
								currTile->set(tcount++, (int8_t)(((int32_t)(isample & (uint32_t)0x00FF0000)) >> 16));
								currTile->set(tcount++, (int8_t)(((int32_t)(isample & (uint32_t)0x0000FF00)) >> 8));
								currTile->set(tcount++, (int8_t)((int32_t)(isample & (uint32_t)255)));
							}
						}
					} else {
						for (int32_t s = 0; s < numSamples; s += xSkip) {
							for (int32_t b = 0; b < this->numBands; ++b) {
								int32_t isample = $nc(samples)->get(s + b);
								currTile->set(tcount++, (int8_t)((int32_t)(isample & (uint32_t)255)));
								currTile->set(tcount++, (int8_t)(((int32_t)(isample & (uint32_t)0x0000FF00)) >> 8));
								currTile->set(tcount++, (int8_t)(((int32_t)(isample & (uint32_t)0x00FF0000)) >> 16));
								currTile->set(tcount++, (int8_t)(((int32_t)(isample & (uint32_t)(int32_t)0xFF000000)) >> 24));
							}
						}
					}
				}
				break;
			}
		case 64:
			{
				if (this->sampleFormat == $BaselineTIFFTagSet::SAMPLE_FORMAT_FLOATING_POINT) {
					$init($ByteOrder);
					if ($nc(this->stream)->getByteOrder() == $ByteOrder::BIG_ENDIAN) {
						for (int32_t s = 0; s < numSamples; s += xSkip) {
							for (int32_t b = 0; b < this->numBands; ++b) {
								double dsample = $nc(dsamples)->get(s + b);
								int64_t lsample = $Double::doubleToLongBits(dsample);
								currTile->set(tcount++, (int8_t)(((int64_t)(lsample & (uint64_t)(int64_t)0xFF00000000000000)) >> 56));
								currTile->set(tcount++, (int8_t)(((int64_t)(lsample & (uint64_t)(int64_t)0x00FF000000000000)) >> 48));
								currTile->set(tcount++, (int8_t)(((int64_t)(lsample & (uint64_t)(int64_t)0x0000FF0000000000)) >> 40));
								currTile->set(tcount++, (int8_t)(((int64_t)(lsample & (uint64_t)(int64_t)0x000000FF00000000)) >> 32));
								currTile->set(tcount++, (int8_t)(((int64_t)(lsample & (uint64_t)(int64_t)0x00000000FF000000)) >> 24));
								currTile->set(tcount++, (int8_t)(((int64_t)(lsample & (uint64_t)(int64_t)16711680)) >> 16));
								currTile->set(tcount++, (int8_t)(((int64_t)(lsample & (uint64_t)(int64_t)65280)) >> 8));
								currTile->set(tcount++, (int8_t)((int64_t)(lsample & (uint64_t)(int64_t)255)));
							}
						}
					} else {
						for (int32_t s = 0; s < numSamples; s += xSkip) {
							for (int32_t b = 0; b < this->numBands; ++b) {
								double dsample = $nc(dsamples)->get(s + b);
								int64_t lsample = $Double::doubleToLongBits(dsample);
								currTile->set(tcount++, (int8_t)((int64_t)(lsample & (uint64_t)(int64_t)255)));
								currTile->set(tcount++, (int8_t)(((int64_t)(lsample & (uint64_t)(int64_t)65280)) >> 8));
								currTile->set(tcount++, (int8_t)(((int64_t)(lsample & (uint64_t)(int64_t)16711680)) >> 16));
								currTile->set(tcount++, (int8_t)(((int64_t)(lsample & (uint64_t)(int64_t)0x00000000FF000000)) >> 24));
								currTile->set(tcount++, (int8_t)(((int64_t)(lsample & (uint64_t)(int64_t)0x000000FF00000000)) >> 32));
								currTile->set(tcount++, (int8_t)(((int64_t)(lsample & (uint64_t)(int64_t)0x0000FF0000000000)) >> 40));
								currTile->set(tcount++, (int8_t)(((int64_t)(lsample & (uint64_t)(int64_t)0x00FF000000000000)) >> 48));
								currTile->set(tcount++, (int8_t)(((int64_t)(lsample & (uint64_t)(int64_t)0xFF00000000000000)) >> 56));
							}
						}
					}
				}
				break;
			}
		}
	}
	$var($ints, bitsPerSample, $new($ints, this->numBands));
	for (int32_t i = 0; i < bitsPerSample->length; ++i) {
		bitsPerSample->set(i, this->bitDepth);
	}
	int32_t byteCount = $nc(compressor)->encode(currTile, 0, hpixels, vpixels, bitsPerSample, bytesPerRow);
	return byteCount;
}

bool TIFFImageWriter::equals($ints* s0, $ints* s1) {
	if (s0 == nullptr || s1 == nullptr) {
		return false;
	}
	if ($nc(s0)->length != $nc(s1)->length) {
		return false;
	}
	for (int32_t i = 0; i < $nc(s0)->length; ++i) {
		if (s0->get(i) != $nc(s1)->get(i)) {
			return false;
		}
	}
	return true;
}

void TIFFImageWriter::initializeScaleTables($ints* sampleSize) {
	$useLocalCurrentObjectStackCache();
	if (this->bitDepth == this->scalingBitDepth && equals(sampleSize, this->sampleSize)) {
		return;
	}
	this->isRescaling = false;
	this->scalingBitDepth = -1;
	$set(this, scale, ($assignField(this, scalel, ($assignField(this, scaleh, nullptr)))));
	$set(this, scale0, nullptr);
	$set(this, sampleSize, sampleSize);
	if (this->bitDepth <= 16) {
		for (int32_t b = 0; b < this->numBands; ++b) {
			if ($nc(sampleSize)->get(b) != this->bitDepth) {
				this->isRescaling = true;
				break;
			}
		}
	}
	if (!this->isRescaling) {
		return;
	}
	this->scalingBitDepth = this->bitDepth;
	int32_t maxOutSample = ($sl(1, this->bitDepth)) - 1;
	if (this->bitDepth <= 8) {
		$set(this, scale, $new($byteArray2, this->numBands));
		for (int32_t b = 0; b < this->numBands; ++b) {
			int32_t maxInSample = ($sl(1, $nc(sampleSize)->get(b))) - 1;
			int32_t halfMaxInSample = maxInSample / 2;
			$nc(this->scale)->set(b, $$new($bytes, maxInSample + 1));
			for (int32_t s = 0; s <= maxInSample; ++s) {
				$nc($nc(this->scale)->get(b))->set(s, (int8_t)($div((s * maxOutSample + halfMaxInSample), maxInSample)));
			}
		}
		$set(this, scale0, $nc(this->scale)->get(0));
		$set(this, scaleh, ($assignField(this, scalel, nullptr)));
	} else if (this->bitDepth <= 16) {
		$set(this, scaleh, $new($byteArray2, this->numBands));
		$set(this, scalel, $new($byteArray2, this->numBands));
		for (int32_t b = 0; b < this->numBands; ++b) {
			int32_t maxInSample = ($sl(1, $nc(sampleSize)->get(b))) - 1;
			int32_t halfMaxInSample = maxInSample / 2;
			$nc(this->scaleh)->set(b, $$new($bytes, maxInSample + 1));
			$nc(this->scalel)->set(b, $$new($bytes, maxInSample + 1));
			for (int32_t s = 0; s <= maxInSample; ++s) {
				int32_t val = $div((s * maxOutSample + halfMaxInSample), maxInSample);
				$nc($nc(this->scaleh)->get(b))->set(s, (int8_t)(val >> 8));
				$nc($nc(this->scalel)->get(b))->set(s, (int8_t)((int32_t)(val & (uint32_t)255)));
			}
		}
		$set(this, scale, nullptr);
		$set(this, scale0, nullptr);
	}
}

void TIFFImageWriter::write($IIOMetadata* sm, $IIOImage* iioimage, $ImageWriteParam* p) {
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "output == null!"_s);
	}
	markPositions();
	write(sm, iioimage, p, true, true);
	if (abortRequested()) {
		resetPositions();
	}
}

void TIFFImageWriter::writeHeader() {
	if (this->streamMetadata != nullptr) {
		$set(this, byteOrder, $nc(this->streamMetadata)->byteOrder);
	} else {
		$init($ByteOrder);
		$set(this, byteOrder, $ByteOrder::BIG_ENDIAN);
	}
	$nc(this->stream)->setByteOrder(this->byteOrder);
	$init($ByteOrder);
	if (this->byteOrder == $ByteOrder::BIG_ENDIAN) {
		$nc(this->stream)->writeShort(19789);
	} else {
		$nc(this->stream)->writeShort(18761);
	}
	$nc(this->stream)->writeShort(42);
	$nc(this->stream)->writeInt(0);
	this->nextSpace = $nc(this->stream)->getStreamPosition();
	this->headerPosition = this->nextSpace - 8;
}

void TIFFImageWriter::write($IIOMetadata* sm, $IIOImage* iioimage, $ImageWriteParam* p, bool writeHeader, bool writeData) {
	$useLocalCurrentObjectStackCache();
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "output == null!"_s);
	}
	if (iioimage == nullptr) {
		$throwNew($IllegalArgumentException, "image == null!"_s);
	}
	bool var$0 = $nc(iioimage)->hasRaster();
	if (var$0 && !canWriteRasters()) {
		$throwNew($UnsupportedOperationException, "TIFF ImageWriter cannot write Rasters!"_s);
	}
	$set(this, image, $nc(iioimage)->getRenderedImage());
	$var($SampleModel, sampleModel, $nc(this->image)->getSampleModel());
	this->sourceXOffset = $nc(this->image)->getMinX();
	this->sourceYOffset = $nc(this->image)->getMinY();
	this->sourceWidth = $nc(this->image)->getWidth();
	this->sourceHeight = $nc(this->image)->getHeight();
	$var($Rectangle, imageBounds, $new($Rectangle, this->sourceXOffset, this->sourceYOffset, this->sourceWidth, this->sourceHeight));
	$var($ColorModel, colorModel, nullptr);
	if (p == nullptr) {
		$set(this, param, getDefaultWriteParam());
		$set(this, sourceBands, nullptr);
		this->periodX = 1;
		this->periodY = 1;
		this->numBands = $nc(sampleModel)->getNumBands();
		$assign(colorModel, $nc(this->image)->getColorModel());
	} else {
		$set(this, param, p);
		$var($Rectangle, sourceRegion, $nc(this->param)->getSourceRegion());
		if (sourceRegion != nullptr) {
			$assign(sourceRegion, sourceRegion->intersection(imageBounds));
			this->sourceXOffset = $nc(sourceRegion)->x;
			this->sourceYOffset = sourceRegion->y;
			this->sourceWidth = sourceRegion->width;
			this->sourceHeight = sourceRegion->height;
		}
		int32_t gridX = $nc(this->param)->getSubsamplingXOffset();
		int32_t gridY = $nc(this->param)->getSubsamplingYOffset();
		this->sourceXOffset += gridX;
		this->sourceYOffset += gridY;
		this->sourceWidth -= gridX;
		this->sourceHeight -= gridY;
		this->periodX = $nc(this->param)->getSourceXSubsampling();
		this->periodY = $nc(this->param)->getSourceYSubsampling();
		$var($ints, sBands, $nc(this->param)->getSourceBands());
		if (sBands != nullptr) {
			$set(this, sourceBands, sBands);
			this->numBands = $nc(this->sourceBands)->length;
		} else {
			this->numBands = $nc(sampleModel)->getNumBands();
		}
		$var($ImageTypeSpecifier, destType, $nc(p)->getDestinationType());
		if (destType != nullptr) {
			$var($ColorModel, cm, destType->getColorModel());
			if ($nc(cm)->getNumComponents() == this->numBands) {
				$assign(colorModel, cm);
			}
		}
		if (colorModel == nullptr) {
			$assign(colorModel, $nc(this->image)->getColorModel());
		}
	}
	$set(this, imageType, $new($ImageTypeSpecifier, colorModel, sampleModel));
	$ImageUtil::canEncodeImage(this, this->imageType);
	int32_t destWidth = $div((this->sourceWidth + this->periodX - 1), this->periodX);
	int32_t destHeight = $div((this->sourceHeight + this->periodY - 1), this->periodY);
	if (destWidth <= 0 || destHeight <= 0) {
		$throwNew($IllegalArgumentException, "Empty source region!"_s);
	}
	clearAbortRequest();
	processImageStarted(0);
	if (abortRequested()) {
		processWriteAborted();
		return;
	}
	if (writeHeader) {
		$set(this, streamMetadata, nullptr);
		if (sm != nullptr) {
			$set(this, streamMetadata, $cast($TIFFStreamMetadata, convertStreamMetadata(sm, this->param)));
		}
		if (this->streamMetadata == nullptr) {
			$set(this, streamMetadata, $cast($TIFFStreamMetadata, getDefaultStreamMetadata(this->param)));
		}
		this->writeHeader();
		$nc(this->stream)->seek(this->headerPosition + 4);
		this->nextSpace = (int64_t)((this->nextSpace + 3) & (uint64_t)(int64_t)~3);
		$nc(this->stream)->writeInt((int32_t)this->nextSpace);
	}
	$set(this, imageMetadata, nullptr);
	$var($IIOMetadata, im, iioimage->getMetadata());
	if (im != nullptr) {
		if ($instanceOf($TIFFImageMetadata, im)) {
			$set(this, imageMetadata, $nc(($cast($TIFFImageMetadata, im)))->getShallowClone());
		} else {
			$init($TIFFImageMetadata);
			if ($nc($($Arrays::asList($(im->getMetadataFormatNames()))))->contains($TIFFImageMetadata::NATIVE_METADATA_FORMAT_NAME)) {
				$set(this, imageMetadata, convertNativeImageMetadata(im));
			} else if (im->isStandardMetadataFormatSupported()) {
				$set(this, imageMetadata, convertStandardImageMetadata(im));
			}
		}
		if (this->imageMetadata == nullptr) {
			processWarningOccurred(this->currentImage, "Could not initialize image metadata"_s);
		}
	}
	if (this->imageMetadata == nullptr) {
		$set(this, imageMetadata, $cast($TIFFImageMetadata, getDefaultImageMetadata(this->imageType, this->param)));
	}
	setupMetadata(colorModel, sampleModel, destWidth, destHeight);
	$nc(this->compressor)->setWriter(this);
	$nc(this->compressor)->setMetadata(this->imageMetadata);
	$nc(this->compressor)->setStream(this->stream);
	$set(this, sampleSize, $nc(sampleModel)->getSampleSize());
	initializeScaleTables($(sampleModel->getSampleSize()));
	this->isBilevel = $ImageUtil::isBinary($($nc(this->image)->getSampleModel()));
	this->isInverted = (this->nativePhotometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO && this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO) || (this->nativePhotometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO && this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO);
	this->isImageSimple = (this->isBilevel || (!this->isInverted && $ImageUtil::imageIsContiguous(this->image))) && !this->isRescaling && this->sourceBands == nullptr && this->periodX == 1 && this->periodY == 1 && this->colorConverter == nullptr;
	$var($TIFFIFD, rootIFD, $nc(this->imageMetadata)->getRootIFD());
	$nc(rootIFD)->writeToStream(this->stream);
	this->nextIFDPointerPos = $nc(this->stream)->getStreamPosition();
	$nc(this->stream)->writeInt(0);
	int64_t lastIFDPosition = rootIFD->getLastPosition();
	$nc(this->stream)->seek(lastIFDPosition);
	if (lastIFDPosition > this->nextSpace) {
		this->nextSpace = lastIFDPosition;
	}
	if (!writeData) {
		return;
	}
	int64_t stripOrTileByteCountsPosition = rootIFD->getStripOrTileByteCountsPosition();
	int64_t stripOrTileOffsetsPosition = rootIFD->getStripOrTileOffsetsPosition();
	this->totalPixels = this->tileWidth * this->tileLength * this->tilesDown * this->tilesAcross;
	this->pixelsDone = 0;
	for (int32_t tj = 0; tj < this->tilesDown; ++tj) {
		for (int32_t ti = 0; ti < this->tilesAcross; ++ti) {
			int64_t pos = $nc(this->stream)->getStreamPosition();
			$var($Rectangle, tileRect, $new($Rectangle, this->sourceXOffset + ti * this->tileWidth * this->periodX, this->sourceYOffset + tj * this->tileLength * this->periodY, this->tileWidth * this->periodX, this->tileLength * this->periodY));
			try {
				int32_t byteCount = writeTile(tileRect, this->compressor);
				if (pos + byteCount > this->nextSpace) {
					this->nextSpace = pos + byteCount;
				}
				$nc(this->stream)->mark();
				$nc(this->stream)->seek(stripOrTileOffsetsPosition);
				$nc(this->stream)->writeInt((int32_t)pos);
				stripOrTileOffsetsPosition += 4;
				$nc(this->stream)->seek(stripOrTileByteCountsPosition);
				$nc(this->stream)->writeInt(byteCount);
				stripOrTileByteCountsPosition += 4;
				$nc(this->stream)->reset();
				this->pixelsDone += tileRect->width * tileRect->height;
				processImageProgress(100.0f * this->pixelsDone / this->totalPixels);
				if (abortRequested()) {
					processWriteAborted();
					return;
				}
			} catch ($IOException&) {
				$var($IOException, e, $catch());
				$throwNew($IIOException, "I/O error writing TIFF file!"_s, e);
			}
		}
	}
	processImageComplete();
	++this->currentImage;
}

bool TIFFImageWriter::canWriteSequence() {
	return true;
}

void TIFFImageWriter::prepareWriteSequence($IIOMetadata* streamMetadata$renamed) {
	$var($IIOMetadata, streamMetadata, streamMetadata$renamed);
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	if (streamMetadata != nullptr) {
		$assign(streamMetadata, convertStreamMetadata(streamMetadata, nullptr));
	}
	if (streamMetadata == nullptr) {
		$assign(streamMetadata, getDefaultStreamMetadata(nullptr));
	}
	$set(this, streamMetadata, $cast($TIFFStreamMetadata, streamMetadata));
	writeHeader();
	this->isWritingSequence = true;
}

void TIFFImageWriter::writeToSequence($IIOImage* image, $ImageWriteParam* param) {
	if (!this->isWritingSequence) {
		$throwNew($IllegalStateException, "prepareWriteSequence() has not been called!"_s);
	}
	writeInsert(-1, image, param);
}

void TIFFImageWriter::endWriteSequence() {
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	if (!this->isWritingSequence) {
		$throwNew($IllegalStateException, "prepareWriteSequence() has not been called!"_s);
	}
	this->isWritingSequence = false;
	int64_t streamLength = $nc(this->stream)->length();
	if (streamLength != -1) {
		$nc(this->stream)->seek(streamLength);
	}
}

bool TIFFImageWriter::canInsertImage(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	$nc(this->stream)->mark();
	$var($longs, ifdpos, $new($longs, 1));
	$var($longs, ifd, $new($longs, 1));
	locateIFD(imageIndex, ifdpos, ifd);
	$nc(this->stream)->reset();
	return true;
}

void TIFFImageWriter::locateIFD(int32_t imageIndex, $longs* ifdpos, $longs* ifd) {
	$useLocalCurrentObjectStackCache();
	if (imageIndex < -1) {
		$throwNew($IndexOutOfBoundsException, "imageIndex < -1!"_s);
	}
	int64_t startPos = $nc(this->stream)->getStreamPosition();
	$nc(this->stream)->seek(this->headerPosition);
	int32_t byteOrder = $nc(this->stream)->readUnsignedShort();
	if (byteOrder == 19789) {
		$init($ByteOrder);
		$nc(this->stream)->setByteOrder($ByteOrder::BIG_ENDIAN);
	} else if (byteOrder == 18761) {
		$init($ByteOrder);
		$nc(this->stream)->setByteOrder($ByteOrder::LITTLE_ENDIAN);
	} else {
		$nc(this->stream)->seek(startPos);
		$throwNew($IIOException, "Illegal byte order"_s);
	}
	if ($nc(this->stream)->readUnsignedShort() != 42) {
		$nc(this->stream)->seek(startPos);
		$throwNew($IIOException, "Illegal magic number"_s);
	}
	$nc(ifdpos)->set(0, $nc(this->stream)->getStreamPosition());
	$nc(ifd)->set(0, $nc(this->stream)->readUnsignedInt());
	if (ifd->get(0) == 0) {
		if (imageIndex > 0) {
			$nc(this->stream)->seek(startPos);
			$throwNew($IndexOutOfBoundsException, "imageIndex is greater than the largest available index!"_s);
		}
		return;
	}
	$nc(this->stream)->seek(ifd->get(0));
	for (int32_t i = 0; imageIndex == -1 || i < imageIndex; ++i) {
		int32_t numFields = 0;
		try {
			numFields = $nc(this->stream)->readShort();
		} catch ($EOFException&) {
			$var($EOFException, eof, $catch());
			$nc(this->stream)->seek(startPos);
			ifd->set(0, 0);
			return;
		}
		$nc(this->stream)->skipBytes(12 * numFields);
		ifdpos->set(0, $nc(this->stream)->getStreamPosition());
		ifd->set(0, $nc(this->stream)->readUnsignedInt());
		if (ifd->get(0) == 0) {
			if (imageIndex != -1 && i < imageIndex - 1) {
				$nc(this->stream)->seek(startPos);
				$throwNew($IndexOutOfBoundsException, "imageIndex is greater than the largest available index!"_s);
			}
			break;
		}
		$nc(this->stream)->seek(ifd->get(0));
	}
}

void TIFFImageWriter::writeInsert(int32_t imageIndex, $IIOImage* image, $ImageWriteParam* param) {
	$useLocalCurrentObjectStackCache();
	int32_t currentImageCached = this->currentImage;
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				insert(imageIndex, image, param, true);
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				$throw(e);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			this->currentImage = currentImageCached;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TIFFImageWriter::insert(int32_t imageIndex, $IIOImage* image, $ImageWriteParam* param, bool writeData) {
	$useLocalCurrentObjectStackCache();
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "Output not set!"_s);
	}
	if (image == nullptr) {
		$throwNew($IllegalArgumentException, "image == null!"_s);
	}
	$var($longs, ifdpos, $new($longs, 1));
	$var($longs, ifd, $new($longs, 1));
	locateIFD(imageIndex, ifdpos, ifd);
	markPositions();
	$nc(this->stream)->seek(ifdpos->get(0));
	$nc(this->stream)->mark();
	int64_t prevPointerValue = $nc(this->stream)->readUnsignedInt();
	$nc(this->stream)->reset();
	if (ifdpos->get(0) + 4 > this->nextSpace) {
		this->nextSpace = ifdpos->get(0) + 4;
	}
	this->nextSpace = (int64_t)((this->nextSpace + 3) & (uint64_t)(int64_t)~3);
	$nc(this->stream)->writeInt((int32_t)this->nextSpace);
	$nc(this->stream)->seek(this->nextSpace);
	write(nullptr, image, param, false, writeData);
	$nc(this->stream)->seek(this->nextIFDPointerPos);
	$nc(this->stream)->writeInt((int32_t)ifd->get(0));
	if (abortRequested()) {
		$nc(this->stream)->seek(ifdpos->get(0));
		$nc(this->stream)->writeInt((int32_t)prevPointerValue);
		resetPositions();
	}
}

bool TIFFImageWriter::isEncodingEmpty() {
	return this->isInsertingEmpty || this->isWritingEmpty;
}

bool TIFFImageWriter::canInsertEmpty(int32_t imageIndex) {
	return canInsertImage(imageIndex);
}

bool TIFFImageWriter::canWriteEmpty() {
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	return true;
}

void TIFFImageWriter::checkParamsEmpty($ImageTypeSpecifier* imageType, int32_t width, int32_t height, $List* thumbnails) {
	$useLocalCurrentObjectStackCache();
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	if (imageType == nullptr) {
		$throwNew($IllegalArgumentException, "imageType == null!"_s);
	}
	if (width < 1 || height < 1) {
		$throwNew($IllegalArgumentException, "width < 1 || height < 1!"_s);
	}
	if (thumbnails != nullptr) {
		int32_t numThumbs = thumbnails->size();
		for (int32_t i = 0; i < numThumbs; ++i) {
			$var($Object, thumb, thumbnails->get(i));
			if (thumb == nullptr || !($instanceOf($BufferedImage, thumb))) {
				$throwNew($IllegalArgumentException, "thumbnails contains null references or objects other than BufferedImages!"_s);
			}
		}
	}
	if (this->isInsertingEmpty) {
		$throwNew($IllegalStateException, "Previous call to prepareInsertEmpty() without corresponding call to endInsertEmpty()!"_s);
	}
	if (this->isWritingEmpty) {
		$throwNew($IllegalStateException, "Previous call to prepareWriteEmpty() without corresponding call to endWriteEmpty()!"_s);
	}
}

void TIFFImageWriter::prepareInsertEmpty(int32_t imageIndex, $ImageTypeSpecifier* imageType, int32_t width, int32_t height, $IIOMetadata* imageMetadata, $List* thumbnails, $ImageWriteParam* param) {
	$useLocalCurrentObjectStackCache();
	checkParamsEmpty(imageType, width, height, thumbnails);
	this->isInsertingEmpty = true;
	$var($SampleModel, emptySM, $nc(imageType)->getSampleModel());
	int32_t var$0 = width;
	int32_t var$1 = height;
	int32_t var$2 = $nc(emptySM)->getWidth();
	int32_t var$3 = emptySM->getHeight();
	$var($SampleModel, var$4, emptySM);
	$var($RenderedImage, emptyImage, $new($EmptyImage, 0, 0, var$0, var$1, 0, 0, var$2, var$3, var$4, $(imageType->getColorModel())));
	insert(imageIndex, $$new($IIOImage, emptyImage, ($List*)nullptr, imageMetadata), param, false);
}

void TIFFImageWriter::prepareWriteEmpty($IIOMetadata* streamMetadata, $ImageTypeSpecifier* imageType, int32_t width, int32_t height, $IIOMetadata* imageMetadata, $List* thumbnails, $ImageWriteParam* param) {
	$useLocalCurrentObjectStackCache();
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "output == null!"_s);
	}
	checkParamsEmpty(imageType, width, height, thumbnails);
	this->isWritingEmpty = true;
	$var($SampleModel, emptySM, $nc(imageType)->getSampleModel());
	int32_t var$0 = width;
	int32_t var$1 = height;
	int32_t var$2 = $nc(emptySM)->getWidth();
	int32_t var$3 = emptySM->getHeight();
	$var($SampleModel, var$4, emptySM);
	$var($RenderedImage, emptyImage, $new($EmptyImage, 0, 0, var$0, var$1, 0, 0, var$2, var$3, var$4, $(imageType->getColorModel())));
	markPositions();
	write(streamMetadata, $$new($IIOImage, emptyImage, ($List*)nullptr, imageMetadata), param, true, false);
	if (abortRequested()) {
		resetPositions();
	}
}

void TIFFImageWriter::endInsertEmpty() {
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	if (!this->isInsertingEmpty) {
		$throwNew($IllegalStateException, "No previous call to prepareInsertEmpty()!"_s);
	}
	if (this->isWritingEmpty) {
		$throwNew($IllegalStateException, "Previous call to prepareWriteEmpty() without corresponding call to endWriteEmpty()!"_s);
	}
	if (this->inReplacePixelsNest) {
		$throwNew($IllegalStateException, "In nested call to prepareReplacePixels!"_s);
	}
	this->isInsertingEmpty = false;
}

void TIFFImageWriter::endWriteEmpty() {
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	if (!this->isWritingEmpty) {
		$throwNew($IllegalStateException, "No previous call to prepareWriteEmpty()!"_s);
	}
	if (this->isInsertingEmpty) {
		$throwNew($IllegalStateException, "Previous call to prepareInsertEmpty() without corresponding call to endInsertEmpty()!"_s);
	}
	if (this->inReplacePixelsNest) {
		$throwNew($IllegalStateException, "In nested call to prepareReplacePixels!"_s);
	}
	this->isWritingEmpty = false;
}

$TIFFIFD* TIFFImageWriter::readIFD(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "Output not set!"_s);
	}
	if (imageIndex < 0) {
		$throwNew($IndexOutOfBoundsException, "imageIndex < 0!"_s);
	}
	$nc(this->stream)->mark();
	$var($longs, ifdpos, $new($longs, 1));
	$var($longs, ifd, $new($longs, 1));
	locateIFD(imageIndex, ifdpos, ifd);
	if (ifd->get(0) == 0) {
		$nc(this->stream)->reset();
		$throwNew($IndexOutOfBoundsException, "imageIndex out of bounds!"_s);
	}
	$var($List, tagSets, $new($ArrayList, 1));
	tagSets->add($($BaselineTIFFTagSet::getInstance()));
	$var($TIFFIFD, rootIFD, $new($TIFFIFD, tagSets));
	rootIFD->initialize(this->stream, true, false, false);
	$nc(this->stream)->reset();
	return rootIFD;
}

bool TIFFImageWriter::canReplacePixels(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	if (getOutput() == nullptr) {
		$throwNew($IllegalStateException, "getOutput() == null!"_s);
	}
	$var($TIFFIFD, rootIFD, readIFD(imageIndex));
	$var($TIFFField, f, $nc(rootIFD)->getTIFFField($BaselineTIFFTagSet::TAG_COMPRESSION));
	int32_t compression = $nc(f)->getAsInt(0);
	return compression == $BaselineTIFFTagSet::COMPRESSION_NONE;
}

void TIFFImageWriter::prepareReplacePixels(int32_t imageIndex, $Rectangle* region$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, region, region$renamed);
	$synchronized(this->replacePixelsLock) {
		if (this->stream == nullptr) {
			$throwNew($IllegalStateException, "Output not set!"_s);
		}
		if (region == nullptr) {
			$throwNew($IllegalArgumentException, "region == null!"_s);
		}
		if ($nc(region)->getWidth() < 1) {
			$throwNew($IllegalArgumentException, "region.getWidth() < 1!"_s);
		}
		if ($nc(region)->getHeight() < 1) {
			$throwNew($IllegalArgumentException, "region.getHeight() < 1!"_s);
		}
		if (this->inReplacePixelsNest) {
			$throwNew($IllegalStateException, "In nested call to prepareReplacePixels!"_s);
		}
		$var($TIFFIFD, replacePixelsIFD, readIFD(imageIndex));
		$var($TIFFField, f, $nc(replacePixelsIFD)->getTIFFField($BaselineTIFFTagSet::TAG_COMPRESSION));
		int32_t compression = $nc(f)->getAsInt(0);
		if (compression != $BaselineTIFFTagSet::COMPRESSION_NONE) {
			$throwNew($UnsupportedOperationException, "canReplacePixels(imageIndex) == false!"_s);
		}
		$assign(f, replacePixelsIFD->getTIFFField($BaselineTIFFTagSet::TAG_IMAGE_WIDTH));
		if (f == nullptr) {
			$throwNew($IIOException, "Cannot read ImageWidth field."_s);
		}
		int32_t w = f->getAsInt(0);
		$assign(f, replacePixelsIFD->getTIFFField($BaselineTIFFTagSet::TAG_IMAGE_LENGTH));
		if (f == nullptr) {
			$throwNew($IIOException, "Cannot read ImageHeight field."_s);
		}
		int32_t h = f->getAsInt(0);
		$var($Rectangle, bounds, $new($Rectangle, 0, 0, w, h));
		$assign(region, $nc(region)->intersection(bounds));
		if (region->isEmpty()) {
			$throwNew($IIOException, "Region does not intersect image bounds"_s);
		}
		$set(this, replacePixelsRegion, region);
		$assign(f, replacePixelsIFD->getTIFFField($BaselineTIFFTagSet::TAG_TILE_OFFSETS));
		if (f == nullptr) {
			$assign(f, replacePixelsIFD->getTIFFField($BaselineTIFFTagSet::TAG_STRIP_OFFSETS));
		}
		$set(this, replacePixelsTileOffsets, f->getAsLongs());
		$assign(f, replacePixelsIFD->getTIFFField($BaselineTIFFTagSet::TAG_TILE_BYTE_COUNTS));
		if (f == nullptr) {
			$assign(f, replacePixelsIFD->getTIFFField($BaselineTIFFTagSet::TAG_STRIP_BYTE_COUNTS));
		}
		$set(this, replacePixelsByteCounts, f->getAsLongs());
		this->replacePixelsOffsetsPosition = replacePixelsIFD->getStripOrTileOffsetsPosition();
		this->replacePixelsByteCountsPosition = replacePixelsIFD->getStripOrTileByteCountsPosition();
		$set(this, replacePixelsMetadata, $new($TIFFImageMetadata, replacePixelsIFD));
		this->replacePixelsIndex = imageIndex;
		this->inReplacePixelsNest = true;
	}
}

$Raster* TIFFImageWriter::subsample($Raster* raster, $ints* sourceBands, int32_t subOriginX, int32_t subOriginY, int32_t subPeriodX, int32_t subPeriodY, int32_t dstOffsetX, int32_t dstOffsetY, $Rectangle* target) {
	$useLocalCurrentObjectStackCache();
	int32_t x = $nc(raster)->getMinX();
	int32_t y = raster->getMinY();
	int32_t w = raster->getWidth();
	int32_t h = raster->getHeight();
	int32_t b = $nc($(raster->getSampleModel()))->getNumBands();
	int32_t t = $nc($(raster->getSampleModel()))->getDataType();
	int32_t outMinX = XToTileX(x, subOriginX, subPeriodX) + dstOffsetX;
	int32_t outMinY = YToTileY(y, subOriginY, subPeriodY) + dstOffsetY;
	int32_t outMaxX = XToTileX(x + w - 1, subOriginX, subPeriodX) + dstOffsetX;
	int32_t outMaxY = YToTileY(y + h - 1, subOriginY, subPeriodY) + dstOffsetY;
	int32_t outWidth = outMaxX - outMinX + 1;
	int32_t outHeight = outMaxY - outMinY + 1;
	if (outWidth <= 0 || outHeight <= 0) {
		return nullptr;
	}
	int32_t inMinX = (outMinX - dstOffsetX) * subPeriodX + subOriginX;
	int32_t inMaxX = (outMaxX - dstOffsetX) * subPeriodX + subOriginX;
	int32_t inWidth = inMaxX - inMinX + 1;
	int32_t inMinY = (outMinY - dstOffsetY) * subPeriodY + subOriginY;
	int32_t inMaxY = (outMaxY - dstOffsetY) * subPeriodY + subOriginY;
	int32_t inHeight = inMaxY - inMinY + 1;
	$var($WritableRaster, wr, raster->createCompatibleWritableRaster(outMinX, outMinY, outWidth, outHeight));
	int32_t jMax = inMinY + inHeight;
	if (t == $DataBuffer::TYPE_FLOAT) {
		$var($floats, fsamples, $new($floats, inWidth));
		$var($floats, fsubsamples, $new($floats, outWidth));
		for (int32_t k = 0; k < b; ++k) {
			int32_t outY = outMinY;
			for (int32_t j = inMinY; j < jMax; j += subPeriodY) {
				raster->getSamples(inMinX, j, inWidth, 1, k, fsamples);
				int32_t s = 0;
				for (int32_t i = 0; i < inWidth; i += subPeriodX) {
					fsubsamples->set(s++, fsamples->get(i));
				}
				$nc(wr)->setSamples(outMinX, outY++, outWidth, 1, k, fsubsamples);
			}
		}
	} else if (t == $DataBuffer::TYPE_DOUBLE) {
		$var($doubles, dsamples, $new($doubles, inWidth));
		$var($doubles, dsubsamples, $new($doubles, outWidth));
		for (int32_t k = 0; k < b; ++k) {
			int32_t outY = outMinY;
			for (int32_t j = inMinY; j < jMax; j += subPeriodY) {
				raster->getSamples(inMinX, j, inWidth, 1, k, dsamples);
				int32_t s = 0;
				for (int32_t i = 0; i < inWidth; i += subPeriodX) {
					dsubsamples->set(s++, dsamples->get(i));
				}
				$nc(wr)->setSamples(outMinX, outY++, outWidth, 1, k, dsubsamples);
			}
		}
	} else {
		$var($ints, samples, $new($ints, inWidth));
		$var($ints, subsamples, $new($ints, outWidth));
		for (int32_t k = 0; k < b; ++k) {
			int32_t outY = outMinY;
			for (int32_t j = inMinY; j < jMax; j += subPeriodY) {
				raster->getSamples(inMinX, j, inWidth, 1, k, samples);
				int32_t s = 0;
				for (int32_t i = 0; i < inWidth; i += subPeriodX) {
					subsamples->set(s++, samples->get(i));
				}
				$nc(wr)->setSamples(outMinX, outY++, outWidth, 1, k, subsamples);
			}
		}
	}
	return $nc(wr)->createChild(outMinX, outMinY, $nc(target)->width, target->height, target->x, target->y, sourceBands);
}

void TIFFImageWriter::replacePixels($RenderedImage* image, $ImageWriteParam* param$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ImageWriteParam, param, param$renamed);
	$synchronized(this->replacePixelsLock) {
		if (this->stream == nullptr) {
			$throwNew($IllegalStateException, "stream == null!"_s);
		}
		if (image == nullptr) {
			$throwNew($IllegalArgumentException, "image == null!"_s);
		}
		if (!this->inReplacePixelsNest) {
			$throwNew($IllegalStateException, "No previous call to prepareReplacePixels!"_s);
		}
		int32_t stepX = 1;
		int32_t stepY = 1;
		int32_t gridX = 0;
		int32_t gridY = 0;
		if (param == nullptr) {
			$assign(param, getDefaultWriteParam());
		} else {
			$var($ImageWriteParam, paramCopy, getDefaultWriteParam());
			$nc(paramCopy)->setCompressionMode($ImageWriteParam::MODE_DISABLED);
			paramCopy->setTilingMode($ImageWriteParam::MODE_COPY_FROM_METADATA);
			paramCopy->setDestinationOffset($($nc(param)->getDestinationOffset()));
			paramCopy->setSourceBands($($nc(param)->getSourceBands()));
			paramCopy->setSourceRegion($($nc(param)->getSourceRegion()));
			stepX = $nc(param)->getSourceXSubsampling();
			stepY = param->getSourceYSubsampling();
			gridX = param->getSubsamplingXOffset();
			gridY = param->getSubsamplingYOffset();
			$assign(param, paramCopy);
		}
		$var($TIFFField, f, $nc(this->replacePixelsMetadata)->getTIFFField($BaselineTIFFTagSet::TAG_BITS_PER_SAMPLE));
		if (f == nullptr) {
			$throwNew($IIOException, "Cannot read destination BitsPerSample"_s);
		}
		$var($ints, dstBitsPerSample, $nc(f)->getAsInts());
		$var($ints, srcBitsPerSample, $nc($($nc(image)->getSampleModel()))->getSampleSize());
		$var($ints, sourceBands, $nc(param)->getSourceBands());
		if (sourceBands != nullptr) {
			if (sourceBands->length != $nc(dstBitsPerSample)->length) {
				$throwNew($IIOException, "Source and destination have different SamplesPerPixel"_s);
			}
			for (int32_t i = 0; i < sourceBands->length; ++i) {
				if ($nc(dstBitsPerSample)->get(i) != $nc(srcBitsPerSample)->get(sourceBands->get(i))) {
					$throwNew($IIOException, "Source and destination have different BitsPerSample"_s);
				}
			}
		} else {
			int32_t srcNumBands = $nc($(image->getSampleModel()))->getNumBands();
			if (srcNumBands != $nc(dstBitsPerSample)->length) {
				$throwNew($IIOException, "Source and destination have different SamplesPerPixel"_s);
			}
			for (int32_t i = 0; i < srcNumBands; ++i) {
				if ($nc(dstBitsPerSample)->get(i) != $nc(srcBitsPerSample)->get(i)) {
					$throwNew($IIOException, "Source and destination have different BitsPerSample"_s);
				}
			}
		}
		int32_t var$0 = image->getMinX();
		int32_t var$1 = image->getMinY();
		int32_t var$2 = image->getWidth();
		$var($Rectangle, srcImageBounds, $new($Rectangle, var$0, var$1, var$2, image->getHeight()));
		$var($Rectangle, srcRect, param->getSourceRegion());
		if (srcRect == nullptr) {
			$assign(srcRect, srcImageBounds);
		}
		int32_t subPeriodX = stepX;
		int32_t subPeriodY = stepY;
		int32_t subOriginX = gridX + $nc(srcRect)->x;
		int32_t subOriginY = gridY + srcRect->y;
		if (!srcRect->equals(srcImageBounds)) {
			$assign(srcRect, srcRect->intersection(srcImageBounds));
			if ($nc(srcRect)->isEmpty()) {
				$throwNew($IllegalArgumentException, "Source region does not intersect source image!"_s);
			}
		}
		$var($Point, dstOffset, param->getDestinationOffset());
		int32_t dMinX = XToTileX(srcRect->x, subOriginX, subPeriodX) + $nc(dstOffset)->x;
		int32_t dMinY = YToTileY(srcRect->y, subOriginY, subPeriodY) + dstOffset->y;
		int32_t dMaxX = XToTileX(srcRect->x + srcRect->width, subOriginX, subPeriodX) + dstOffset->x;
		int32_t dMaxY = YToTileY(srcRect->y + srcRect->height, subOriginY, subPeriodY) + dstOffset->y;
		$var($Rectangle, dstRect, $new($Rectangle, dstOffset->x, dstOffset->y, dMaxX - dMinX, dMaxY - dMinY));
		$assign(dstRect, dstRect->intersection(this->replacePixelsRegion));
		if ($nc(dstRect)->isEmpty()) {
			$throwNew($IllegalArgumentException, "Forward mapped source region does not intersect destination region!"_s);
		}
		int32_t activeSrcMinX = ($nc(dstRect)->x - dstOffset->x) * subPeriodX + subOriginX;
		int32_t sxmax = (dstRect->x + dstRect->width - 1 - dstOffset->x) * subPeriodX + subOriginX;
		int32_t activeSrcWidth = sxmax - activeSrcMinX + 1;
		int32_t activeSrcMinY = (dstRect->y - dstOffset->y) * subPeriodY + subOriginY;
		int32_t symax = (dstRect->y + dstRect->height - 1 - dstOffset->y) * subPeriodY + subOriginY;
		int32_t activeSrcHeight = symax - activeSrcMinY + 1;
		$var($Rectangle, activeSrcRect, $new($Rectangle, activeSrcMinX, activeSrcMinY, activeSrcWidth, activeSrcHeight));
		if ($nc($(activeSrcRect->intersection(srcImageBounds)))->isEmpty()) {
			$throwNew($IllegalArgumentException, "Backward mapped destination region does not intersect source image!"_s);
		}
		if (this->reader == nullptr) {
			$set(this, reader, $new($TIFFImageReader, $$new($TIFFImageReaderSpi)));
		} else {
			$nc(this->reader)->reset();
		}
		$nc(this->stream)->mark();
		{
			$var($Throwable, var$3, nullptr);
			try {
				try {
					$nc(this->stream)->seek(this->headerPosition);
					$nc(this->reader)->setInput(this->stream);
					$set(this, imageMetadata, this->replacePixelsMetadata);
					$set(this, param, param);
					$var($SampleModel, sm, image->getSampleModel());
					$var($ColorModel, cm, image->getColorModel());
					this->numBands = $nc(sm)->getNumBands();
					$set(this, imageType, $new($ImageTypeSpecifier, image));
					this->periodX = param->getSourceXSubsampling();
					this->periodY = param->getSourceYSubsampling();
					$set(this, sourceBands, nullptr);
					$var($ints, sBands, param->getSourceBands());
					if (sBands != nullptr) {
						$set(this, sourceBands, sBands);
						this->numBands = $nc(sourceBands)->length;
					}
					$var($ColorModel, var$4, cm);
					$var($SampleModel, var$5, sm);
					int32_t var$6 = $nc(this->reader)->getWidth(this->replacePixelsIndex);
					setupMetadata(var$4, var$5, var$6, $nc(this->reader)->getHeight(this->replacePixelsIndex));
					$var($ints, scaleSampleSize, sm->getSampleSize());
					initializeScaleTables(scaleSampleSize);
					this->isBilevel = $ImageUtil::isBinary($(image->getSampleModel()));
					this->isInverted = (this->nativePhotometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO && this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO) || (this->nativePhotometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO && this->photometricInterpretation == $BaselineTIFFTagSet::PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO);
					this->isImageSimple = (this->isBilevel || (!this->isInverted && $ImageUtil::imageIsContiguous(image))) && !this->isRescaling && sourceBands == nullptr && this->periodX == 1 && this->periodY == 1 && this->colorConverter == nullptr;
					int32_t minTileX = XToTileX(dstRect->x, 0, this->tileWidth);
					int32_t minTileY = YToTileY(dstRect->y, 0, this->tileLength);
					int32_t maxTileX = XToTileX(dstRect->x + dstRect->width - 1, 0, this->tileWidth);
					int32_t maxTileY = YToTileY(dstRect->y + dstRect->height - 1, 0, this->tileLength);
					$var($TIFFCompressor, encoder, $new($TIFFNullCompressor));
					encoder->setWriter(this);
					encoder->setStream(this->stream);
					encoder->setMetadata(this->imageMetadata);
					$var($Rectangle, tileRect, $new($Rectangle));
					for (int32_t ty = minTileY; ty <= maxTileY; ++ty) {
						for (int32_t tx = minTileX; tx <= maxTileX; ++tx) {
							int32_t tileIndex = ty * this->tilesAcross + tx;
							bool isEmpty = $nc(this->replacePixelsByteCounts)->get(tileIndex) == (int64_t)0;
							$var($WritableRaster, raster, nullptr);
							if (isEmpty) {
								$var($SampleModel, tileSM, sm->createCompatibleSampleModel(this->tileWidth, this->tileLength));
								$assign(raster, $Raster::createWritableRaster(tileSM, nullptr));
							} else {
								$var($BufferedImage, tileImage, $nc(this->reader)->readTile(this->replacePixelsIndex, tx, ty));
								$assign(raster, $nc(tileImage)->getRaster());
							}
							tileRect->setLocation(tx * this->tileWidth, ty * this->tileLength);
							int32_t var$7 = $nc(raster)->getWidth();
							tileRect->setSize(var$7, raster->getHeight());
							$assign(raster, $nc(raster)->createWritableTranslatedChild(tileRect->x, tileRect->y));
							$var($Rectangle, replacementRect, tileRect->intersection(dstRect));
							int32_t srcMinX = ($nc(replacementRect)->x - dstOffset->x) * subPeriodX + subOriginX;
							int32_t srcXmax = (replacementRect->x + replacementRect->width - 1 - dstOffset->x) * subPeriodX + subOriginX;
							int32_t srcWidth = srcXmax - srcMinX + 1;
							int32_t srcMinY = (replacementRect->y - dstOffset->y) * subPeriodY + subOriginY;
							int32_t srcYMax = (replacementRect->y + replacementRect->height - 1 - dstOffset->y) * subPeriodY + subOriginY;
							int32_t srcHeight = srcYMax - srcMinY + 1;
							$var($Rectangle, srcTileRect, $new($Rectangle, srcMinX, srcMinY, srcWidth, srcHeight));
							$var($Raster, replacementData, image->getData(srcTileRect));
							if (subPeriodX == 1 && subPeriodY == 1 && subOriginX == 0 && subOriginY == 0) {
								$assign(replacementData, $nc(replacementData)->createChild(srcTileRect->x, srcTileRect->y, srcTileRect->width, srcTileRect->height, replacementRect->x, replacementRect->y, sourceBands));
							} else {
								$assign(replacementData, subsample(replacementData, sourceBands, subOriginX, subOriginY, subPeriodX, subPeriodY, dstOffset->x, dstOffset->y, replacementRect));
								if (replacementData == nullptr) {
									continue;
								}
							}
							raster->setRect(replacementData);
							if (isEmpty) {
								$nc(this->stream)->seek(this->nextSpace);
							} else {
								$nc(this->stream)->seek($nc(this->replacePixelsTileOffsets)->get(tileIndex));
							}
							$set(this, image, $new($SingleTileRenderedImage, raster, cm));
							int32_t numBytes = writeTile(tileRect, encoder);
							if (isEmpty) {
								$nc(this->stream)->mark();
								$nc(this->stream)->seek(this->replacePixelsOffsetsPosition + 4 * tileIndex);
								$nc(this->stream)->writeInt((int32_t)this->nextSpace);
								$nc(this->stream)->seek(this->replacePixelsByteCountsPosition + 4 * tileIndex);
								$nc(this->stream)->writeInt(numBytes);
								$nc(this->stream)->reset();
								this->nextSpace += numBytes;
							}
						}
					}
				} catch ($IOException&) {
					$var($IOException, e, $catch());
					$throw(e);
				}
			} catch ($Throwable&) {
				$assign(var$3, $catch());
			} /*finally*/ {
				$nc(this->stream)->reset();
			}
			if (var$3 != nullptr) {
				$throw(var$3);
			}
		}
	}
}

void TIFFImageWriter::replacePixels($Raster* raster, $ImageWriteParam* param) {
	$useLocalCurrentObjectStackCache();
	if (raster == nullptr) {
		$throwNew($NullPointerException, "raster == null!"_s);
	}
	replacePixels(static_cast<$RenderedImage*>($$new($SingleTileRenderedImage, raster, $($nc(this->image)->getColorModel()))), param);
}

void TIFFImageWriter::endReplacePixels() {
	$synchronized(this->replacePixelsLock) {
		if (!this->inReplacePixelsNest) {
			$throwNew($IllegalStateException, "No previous call to prepareReplacePixels()!"_s);
		}
		this->replacePixelsIndex = -1;
		$set(this, replacePixelsMetadata, nullptr);
		$set(this, replacePixelsTileOffsets, nullptr);
		$set(this, replacePixelsByteCounts, nullptr);
		this->replacePixelsOffsetsPosition = 0;
		this->replacePixelsByteCountsPosition = 0;
		$set(this, replacePixelsRegion, nullptr);
		this->inReplacePixelsNest = false;
	}
}

void TIFFImageWriter::markPositions() {
	this->prevStreamPosition = $nc(this->stream)->getStreamPosition();
	this->prevHeaderPosition = this->headerPosition;
	this->prevNextSpace = this->nextSpace;
}

void TIFFImageWriter::resetPositions() {
	$nc(this->stream)->seek(this->prevStreamPosition);
	this->headerPosition = this->prevHeaderPosition;
	this->nextSpace = this->prevNextSpace;
}

void TIFFImageWriter::reset() {
	$ImageWriter::reset();
	$set(this, stream, nullptr);
	$set(this, image, nullptr);
	$set(this, imageType, nullptr);
	$set(this, byteOrder, nullptr);
	$set(this, param, nullptr);
	$set(this, compressor, nullptr);
	$set(this, colorConverter, nullptr);
	$set(this, streamMetadata, nullptr);
	$set(this, imageMetadata, nullptr);
	this->isRescaling = false;
	this->isWritingSequence = false;
	this->isWritingEmpty = false;
	this->isInsertingEmpty = false;
	this->replacePixelsIndex = -1;
	$set(this, replacePixelsMetadata, nullptr);
	$set(this, replacePixelsTileOffsets, nullptr);
	$set(this, replacePixelsByteCounts, nullptr);
	this->replacePixelsOffsetsPosition = 0;
	this->replacePixelsByteCountsPosition = 0;
	$set(this, replacePixelsRegion, nullptr);
	this->inReplacePixelsNest = false;
}

void clinit$TIFFImageWriter($Class* class$) {
	$assignStatic(TIFFImageWriter::EXIF_JPEG_COMPRESSION_TYPE, "Exif JPEG"_s);
	$assignStatic(TIFFImageWriter::TIFFCompressionTypes, $new($StringArray, {
		"CCITT RLE"_s,
		"CCITT T.4"_s,
		"CCITT T.6"_s,
		"LZW"_s,
		"JPEG"_s,
		"ZLib"_s,
		"PackBits"_s,
		"Deflate"_s,
		TIFFImageWriter::EXIF_JPEG_COMPRESSION_TYPE
	}));
	$assignStatic(TIFFImageWriter::compressionTypes, $new($StringArray, {
		"CCITT RLE"_s,
		"CCITT T.4"_s,
		"CCITT T.6"_s,
		"LZW"_s,
		"Old JPEG"_s,
		"JPEG"_s,
		"ZLib"_s,
		"PackBits"_s,
		"Deflate"_s,
		TIFFImageWriter::EXIF_JPEG_COMPRESSION_TYPE
	}));
	$assignStatic(TIFFImageWriter::isCompressionLossless, $new($booleans, {
		true,
		true,
		true,
		true,
		false,
		false,
		true,
		true,
		true,
		false
	}));
	$assignStatic(TIFFImageWriter::compressionNumbers, $new($ints, {
		$BaselineTIFFTagSet::COMPRESSION_CCITT_RLE,
		$BaselineTIFFTagSet::COMPRESSION_CCITT_T_4,
		$BaselineTIFFTagSet::COMPRESSION_CCITT_T_6,
		$BaselineTIFFTagSet::COMPRESSION_LZW,
		$BaselineTIFFTagSet::COMPRESSION_OLD_JPEG,
		$BaselineTIFFTagSet::COMPRESSION_JPEG,
		$BaselineTIFFTagSet::COMPRESSION_ZLIB,
		$BaselineTIFFTagSet::COMPRESSION_PACKBITS,
		$BaselineTIFFTagSet::COMPRESSION_DEFLATE,
		$BaselineTIFFTagSet::COMPRESSION_OLD_JPEG
	}));
}

TIFFImageWriter::TIFFImageWriter() {
}

$Class* TIFFImageWriter::load$($String* name, bool initialize) {
	$loadClass(TIFFImageWriter, name, initialize, &_TIFFImageWriter_ClassInfo_, clinit$TIFFImageWriter, allocate$TIFFImageWriter);
	return class$;
}

$Class* TIFFImageWriter::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com