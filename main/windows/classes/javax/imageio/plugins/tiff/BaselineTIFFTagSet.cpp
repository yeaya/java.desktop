#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Artist.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$BitsPerSample.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$CellLength.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$CellWidth.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ColorMap.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Compression.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Copyright.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$DateTime.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$DocumentName.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$DotRange.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ExtraSamples.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$FillOrder.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$FreeByteCounts.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$FreeOffsets.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$GrayResponseCurve.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$GrayResponseUnit.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$HalftoneHints.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$HostComputer.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ICCProfile.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ImageDescription.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ImageLength.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ImageWidth.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$InkNames.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$InkSet.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGACTables.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGDCTables.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGInterchangeFormat.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGInterchangeFormatLength.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGLosslessPredictors.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGPointTransforms.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGProc.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGQTables.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGRestartInterval.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$JPEGTables.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Make.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$MaxSampleValue.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$MinSampleValue.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Model.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$NewSubfileType.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$NumberOfInks.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Orientation.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$PageName.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$PageNumber.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$PhotometricInterpretation.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$PlanarConfiguration.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Predictor.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$PrimaryChromaticities.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ReferenceBlackWhite.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$ResolutionUnit.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$RowsPerStrip.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$SMaxSampleValue.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$SMinSampleValue.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$SampleFormat.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$SamplesPerPixel.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Software.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$StripByteCounts.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$StripOffsets.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$SubfileType.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$T4Options.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$T6Options.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TargetPrinter.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$Threshholding.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TileByteCounts.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TileLength.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TileOffsets.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TileWidth.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TransferFunction.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$TransferRange.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$WhitePoint.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$XPosition.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$XResolution.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$YCbCrCoefficients.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$YCbCrPositioning.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$YCbCrSubSampling.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$YPosition.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet$YResolution.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

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
#undef EXTRA_SAMPLES_ASSOCIATED_ALPHA
#undef EXTRA_SAMPLES_UNASSOCIATED_ALPHA
#undef EXTRA_SAMPLES_UNSPECIFIED
#undef FILL_ORDER_LEFT_TO_RIGHT
#undef FILL_ORDER_RIGHT_TO_LEFT
#undef GRAY_RESPONSE_UNIT_HUNDREDTHS
#undef GRAY_RESPONSE_UNIT_HUNDRED_THOUSANDTHS
#undef GRAY_RESPONSE_UNIT_TENTHS
#undef GRAY_RESPONSE_UNIT_TEN_THOUSANDTHS
#undef GRAY_RESPONSE_UNIT_THOUSANDTHS
#undef INK_SET_CMYK
#undef INK_SET_NOT_CMYK
#undef JPEG_PROC_BASELINE
#undef JPEG_PROC_LOSSLESS
#undef NEW_SUBFILE_TYPE_REDUCED_RESOLUTION
#undef NEW_SUBFILE_TYPE_SINGLE_PAGE
#undef NEW_SUBFILE_TYPE_TRANSPARENCY
#undef ORIENTATION_ROW_0_BOTTOM_COLUMN_0_LEFT
#undef ORIENTATION_ROW_0_BOTTOM_COLUMN_0_RIGHT
#undef ORIENTATION_ROW_0_LEFT_COLUMN_0_BOTTOM
#undef ORIENTATION_ROW_0_LEFT_COLUMN_0_TOP
#undef ORIENTATION_ROW_0_RIGHT_COLUMN_0_BOTTOM
#undef ORIENTATION_ROW_0_RIGHT_COLUMN_0_TOP
#undef ORIENTATION_ROW_0_TOP_COLUMN_0_LEFT
#undef ORIENTATION_ROW_0_TOP_COLUMN_0_RIGHT
#undef PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO
#undef PHOTOMETRIC_INTERPRETATION_CIELAB
#undef PHOTOMETRIC_INTERPRETATION_CMYK
#undef PHOTOMETRIC_INTERPRETATION_ICCLAB
#undef PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR
#undef PHOTOMETRIC_INTERPRETATION_RGB
#undef PHOTOMETRIC_INTERPRETATION_TRANSPARENCY_MASK
#undef PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO
#undef PHOTOMETRIC_INTERPRETATION_Y_CB_CR
#undef PLANAR_CONFIGURATION_CHUNKY
#undef PLANAR_CONFIGURATION_PLANAR
#undef PREDICTOR_HORIZONTAL_DIFFERENCING
#undef PREDICTOR_NONE
#undef RESOLUTION_UNIT_CENTIMETER
#undef RESOLUTION_UNIT_INCH
#undef RESOLUTION_UNIT_NONE
#undef SAMPLE_FORMAT_FLOATING_POINT
#undef SAMPLE_FORMAT_SIGNED_INTEGER
#undef SAMPLE_FORMAT_UNDEFINED
#undef SAMPLE_FORMAT_UNSIGNED_INTEGER
#undef SUBFILE_TYPE_FULL_RESOLUTION
#undef SUBFILE_TYPE_REDUCED_RESOLUTION
#undef SUBFILE_TYPE_SINGLE_PAGE
#undef T4_OPTIONS_2D_CODING
#undef T4_OPTIONS_EOL_BYTE_ALIGNED
#undef T4_OPTIONS_UNCOMPRESSED
#undef T6_OPTIONS_UNCOMPRESSED
#undef TAG_ARTIST
#undef TAG_BITS_PER_SAMPLE
#undef TAG_CELL_LENGTH
#undef TAG_CELL_WIDTH
#undef TAG_COLOR_MAP
#undef TAG_COMPRESSION
#undef TAG_COPYRIGHT
#undef TAG_DATE_TIME
#undef TAG_DOCUMENT_NAME
#undef TAG_DOT_RANGE
#undef TAG_EXTRA_SAMPLES
#undef TAG_FILL_ORDER
#undef TAG_FREE_BYTE_COUNTS
#undef TAG_FREE_OFFSETS
#undef TAG_GRAY_RESPONSE_CURVE
#undef TAG_GRAY_RESPONSE_UNIT
#undef TAG_HALFTONE_HINTS
#undef TAG_HOST_COMPUTER
#undef TAG_ICC_PROFILE
#undef TAG_IMAGE_DESCRIPTION
#undef TAG_IMAGE_LENGTH
#undef TAG_IMAGE_WIDTH
#undef TAG_INK_NAMES
#undef TAG_INK_SET
#undef TAG_JPEG_AC_TABLES
#undef TAG_JPEG_DC_TABLES
#undef TAG_JPEG_INTERCHANGE_FORMAT
#undef TAG_JPEG_INTERCHANGE_FORMAT_LENGTH
#undef TAG_JPEG_LOSSLESS_PREDICTORS
#undef TAG_JPEG_POINT_TRANSFORMS
#undef TAG_JPEG_PROC
#undef TAG_JPEG_Q_TABLES
#undef TAG_JPEG_RESTART_INTERVAL
#undef TAG_JPEG_TABLES
#undef TAG_MAKE
#undef TAG_MAX_SAMPLE_VALUE
#undef TAG_MIN_SAMPLE_VALUE
#undef TAG_MODEL
#undef TAG_NEW_SUBFILE_TYPE
#undef TAG_NUMBER_OF_INKS
#undef TAG_ORIENTATION
#undef TAG_PAGE_NAME
#undef TAG_PAGE_NUMBER
#undef TAG_PHOTOMETRIC_INTERPRETATION
#undef TAG_PLANAR_CONFIGURATION
#undef TAG_PREDICTOR
#undef TAG_PRIMARY_CHROMATICITES
#undef TAG_REFERENCE_BLACK_WHITE
#undef TAG_RESOLUTION_UNIT
#undef TAG_ROWS_PER_STRIP
#undef TAG_SAMPLES_PER_PIXEL
#undef TAG_SAMPLE_FORMAT
#undef TAG_SOFTWARE
#undef TAG_STRIP_BYTE_COUNTS
#undef TAG_STRIP_OFFSETS
#undef TAG_SUBFILE_TYPE
#undef TAG_S_MAX_SAMPLE_VALUE
#undef TAG_S_MIN_SAMPLE_VALUE
#undef TAG_T4_OPTIONS
#undef TAG_T6_OPTIONS
#undef TAG_TARGET_PRINTER
#undef TAG_THRESHHOLDING
#undef TAG_TILE_BYTE_COUNTS
#undef TAG_TILE_LENGTH
#undef TAG_TILE_OFFSETS
#undef TAG_TILE_WIDTH
#undef TAG_TRANSFER_FUNCTION
#undef TAG_TRANSFER_RANGE
#undef TAG_WHITE_POINT
#undef TAG_X_POSITION
#undef TAG_X_RESOLUTION
#undef TAG_Y_CB_CR_COEFFICIENTS
#undef TAG_Y_CB_CR_POSITIONING
#undef TAG_Y_CB_CR_SUBSAMPLING
#undef TAG_Y_POSITION
#undef TAG_Y_RESOLUTION
#undef THRESHHOLDING_NONE
#undef THRESHHOLDING_ORDERED_DITHER
#undef THRESHHOLDING_RANDOMIZED_DITHER
#undef Y_CB_CR_POSITIONING_CENTERED
#undef Y_CB_CR_POSITIONING_COSITED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $BaselineTIFFTagSet$Artist = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$Artist;
using $BaselineTIFFTagSet$BitsPerSample = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$BitsPerSample;
using $BaselineTIFFTagSet$CellLength = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$CellLength;
using $BaselineTIFFTagSet$CellWidth = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$CellWidth;
using $BaselineTIFFTagSet$ColorMap = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$ColorMap;
using $BaselineTIFFTagSet$Compression = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$Compression;
using $BaselineTIFFTagSet$Copyright = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$Copyright;
using $BaselineTIFFTagSet$DateTime = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$DateTime;
using $BaselineTIFFTagSet$DocumentName = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$DocumentName;
using $BaselineTIFFTagSet$DotRange = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$DotRange;
using $BaselineTIFFTagSet$ExtraSamples = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$ExtraSamples;
using $BaselineTIFFTagSet$FillOrder = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$FillOrder;
using $BaselineTIFFTagSet$FreeByteCounts = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$FreeByteCounts;
using $BaselineTIFFTagSet$FreeOffsets = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$FreeOffsets;
using $BaselineTIFFTagSet$GrayResponseCurve = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$GrayResponseCurve;
using $BaselineTIFFTagSet$GrayResponseUnit = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$GrayResponseUnit;
using $BaselineTIFFTagSet$HalftoneHints = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$HalftoneHints;
using $BaselineTIFFTagSet$HostComputer = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$HostComputer;
using $BaselineTIFFTagSet$ICCProfile = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$ICCProfile;
using $BaselineTIFFTagSet$ImageDescription = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$ImageDescription;
using $BaselineTIFFTagSet$ImageLength = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$ImageLength;
using $BaselineTIFFTagSet$ImageWidth = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$ImageWidth;
using $BaselineTIFFTagSet$InkNames = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$InkNames;
using $BaselineTIFFTagSet$InkSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$InkSet;
using $BaselineTIFFTagSet$JPEGACTables = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$JPEGACTables;
using $BaselineTIFFTagSet$JPEGDCTables = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$JPEGDCTables;
using $BaselineTIFFTagSet$JPEGInterchangeFormat = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$JPEGInterchangeFormat;
using $BaselineTIFFTagSet$JPEGInterchangeFormatLength = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$JPEGInterchangeFormatLength;
using $BaselineTIFFTagSet$JPEGLosslessPredictors = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$JPEGLosslessPredictors;
using $BaselineTIFFTagSet$JPEGPointTransforms = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$JPEGPointTransforms;
using $BaselineTIFFTagSet$JPEGProc = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$JPEGProc;
using $BaselineTIFFTagSet$JPEGQTables = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$JPEGQTables;
using $BaselineTIFFTagSet$JPEGRestartInterval = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$JPEGRestartInterval;
using $BaselineTIFFTagSet$JPEGTables = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$JPEGTables;
using $BaselineTIFFTagSet$Make = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$Make;
using $BaselineTIFFTagSet$MaxSampleValue = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$MaxSampleValue;
using $BaselineTIFFTagSet$MinSampleValue = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$MinSampleValue;
using $BaselineTIFFTagSet$Model = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$Model;
using $BaselineTIFFTagSet$NewSubfileType = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$NewSubfileType;
using $BaselineTIFFTagSet$NumberOfInks = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$NumberOfInks;
using $BaselineTIFFTagSet$Orientation = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$Orientation;
using $BaselineTIFFTagSet$PageName = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$PageName;
using $BaselineTIFFTagSet$PageNumber = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$PageNumber;
using $BaselineTIFFTagSet$PhotometricInterpretation = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$PhotometricInterpretation;
using $BaselineTIFFTagSet$PlanarConfiguration = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$PlanarConfiguration;
using $BaselineTIFFTagSet$Predictor = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$Predictor;
using $BaselineTIFFTagSet$PrimaryChromaticities = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$PrimaryChromaticities;
using $BaselineTIFFTagSet$ReferenceBlackWhite = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$ReferenceBlackWhite;
using $BaselineTIFFTagSet$ResolutionUnit = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$ResolutionUnit;
using $BaselineTIFFTagSet$RowsPerStrip = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$RowsPerStrip;
using $BaselineTIFFTagSet$SMaxSampleValue = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$SMaxSampleValue;
using $BaselineTIFFTagSet$SMinSampleValue = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$SMinSampleValue;
using $BaselineTIFFTagSet$SampleFormat = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$SampleFormat;
using $BaselineTIFFTagSet$SamplesPerPixel = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$SamplesPerPixel;
using $BaselineTIFFTagSet$Software = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$Software;
using $BaselineTIFFTagSet$StripByteCounts = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$StripByteCounts;
using $BaselineTIFFTagSet$StripOffsets = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$StripOffsets;
using $BaselineTIFFTagSet$SubfileType = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$SubfileType;
using $BaselineTIFFTagSet$T4Options = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$T4Options;
using $BaselineTIFFTagSet$T6Options = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$T6Options;
using $BaselineTIFFTagSet$TargetPrinter = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$TargetPrinter;
using $BaselineTIFFTagSet$Threshholding = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$Threshholding;
using $BaselineTIFFTagSet$TileByteCounts = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$TileByteCounts;
using $BaselineTIFFTagSet$TileLength = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$TileLength;
using $BaselineTIFFTagSet$TileOffsets = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$TileOffsets;
using $BaselineTIFFTagSet$TileWidth = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$TileWidth;
using $BaselineTIFFTagSet$TransferFunction = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$TransferFunction;
using $BaselineTIFFTagSet$TransferRange = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$TransferRange;
using $BaselineTIFFTagSet$WhitePoint = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$WhitePoint;
using $BaselineTIFFTagSet$XPosition = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$XPosition;
using $BaselineTIFFTagSet$XResolution = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$XResolution;
using $BaselineTIFFTagSet$YCbCrCoefficients = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$YCbCrCoefficients;
using $BaselineTIFFTagSet$YCbCrPositioning = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$YCbCrPositioning;
using $BaselineTIFFTagSet$YCbCrSubSampling = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$YCbCrSubSampling;
using $BaselineTIFFTagSet$YPosition = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$YPosition;
using $BaselineTIFFTagSet$YResolution = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet$YResolution;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$FieldInfo _BaselineTIFFTagSet_FieldInfo_[] = {
	{"theInstance", "Ljavax/imageio/plugins/tiff/BaselineTIFFTagSet;", nullptr, $PRIVATE | $STATIC, $staticField(BaselineTIFFTagSet, theInstance)},
	{"TAG_NEW_SUBFILE_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_NEW_SUBFILE_TYPE)},
	{"NEW_SUBFILE_TYPE_REDUCED_RESOLUTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, NEW_SUBFILE_TYPE_REDUCED_RESOLUTION)},
	{"NEW_SUBFILE_TYPE_SINGLE_PAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, NEW_SUBFILE_TYPE_SINGLE_PAGE)},
	{"NEW_SUBFILE_TYPE_TRANSPARENCY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, NEW_SUBFILE_TYPE_TRANSPARENCY)},
	{"TAG_SUBFILE_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_SUBFILE_TYPE)},
	{"SUBFILE_TYPE_FULL_RESOLUTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, SUBFILE_TYPE_FULL_RESOLUTION)},
	{"SUBFILE_TYPE_REDUCED_RESOLUTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, SUBFILE_TYPE_REDUCED_RESOLUTION)},
	{"SUBFILE_TYPE_SINGLE_PAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, SUBFILE_TYPE_SINGLE_PAGE)},
	{"TAG_IMAGE_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_IMAGE_WIDTH)},
	{"TAG_IMAGE_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_IMAGE_LENGTH)},
	{"TAG_BITS_PER_SAMPLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_BITS_PER_SAMPLE)},
	{"TAG_COMPRESSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_COMPRESSION)},
	{"COMPRESSION_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, COMPRESSION_NONE)},
	{"COMPRESSION_CCITT_RLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, COMPRESSION_CCITT_RLE)},
	{"COMPRESSION_CCITT_T_4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, COMPRESSION_CCITT_T_4)},
	{"COMPRESSION_CCITT_T_6", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, COMPRESSION_CCITT_T_6)},
	{"COMPRESSION_LZW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, COMPRESSION_LZW)},
	{"COMPRESSION_OLD_JPEG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, COMPRESSION_OLD_JPEG)},
	{"COMPRESSION_JPEG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, COMPRESSION_JPEG)},
	{"COMPRESSION_ZLIB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, COMPRESSION_ZLIB)},
	{"COMPRESSION_PACKBITS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, COMPRESSION_PACKBITS)},
	{"COMPRESSION_DEFLATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, COMPRESSION_DEFLATE)},
	{"TAG_PHOTOMETRIC_INTERPRETATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_PHOTOMETRIC_INTERPRETATION)},
	{"PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO)},
	{"PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO)},
	{"PHOTOMETRIC_INTERPRETATION_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, PHOTOMETRIC_INTERPRETATION_RGB)},
	{"PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR)},
	{"PHOTOMETRIC_INTERPRETATION_TRANSPARENCY_MASK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, PHOTOMETRIC_INTERPRETATION_TRANSPARENCY_MASK)},
	{"PHOTOMETRIC_INTERPRETATION_CMYK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, PHOTOMETRIC_INTERPRETATION_CMYK)},
	{"PHOTOMETRIC_INTERPRETATION_Y_CB_CR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, PHOTOMETRIC_INTERPRETATION_Y_CB_CR)},
	{"PHOTOMETRIC_INTERPRETATION_CIELAB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, PHOTOMETRIC_INTERPRETATION_CIELAB)},
	{"PHOTOMETRIC_INTERPRETATION_ICCLAB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, PHOTOMETRIC_INTERPRETATION_ICCLAB)},
	{"TAG_THRESHHOLDING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_THRESHHOLDING)},
	{"THRESHHOLDING_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, THRESHHOLDING_NONE)},
	{"THRESHHOLDING_ORDERED_DITHER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, THRESHHOLDING_ORDERED_DITHER)},
	{"THRESHHOLDING_RANDOMIZED_DITHER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, THRESHHOLDING_RANDOMIZED_DITHER)},
	{"TAG_CELL_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_CELL_WIDTH)},
	{"TAG_CELL_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_CELL_LENGTH)},
	{"TAG_FILL_ORDER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_FILL_ORDER)},
	{"FILL_ORDER_LEFT_TO_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, FILL_ORDER_LEFT_TO_RIGHT)},
	{"FILL_ORDER_RIGHT_TO_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, FILL_ORDER_RIGHT_TO_LEFT)},
	{"TAG_DOCUMENT_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_DOCUMENT_NAME)},
	{"TAG_IMAGE_DESCRIPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_IMAGE_DESCRIPTION)},
	{"TAG_MAKE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_MAKE)},
	{"TAG_MODEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_MODEL)},
	{"TAG_STRIP_OFFSETS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_STRIP_OFFSETS)},
	{"TAG_ORIENTATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_ORIENTATION)},
	{"ORIENTATION_ROW_0_TOP_COLUMN_0_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, ORIENTATION_ROW_0_TOP_COLUMN_0_LEFT)},
	{"ORIENTATION_ROW_0_TOP_COLUMN_0_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, ORIENTATION_ROW_0_TOP_COLUMN_0_RIGHT)},
	{"ORIENTATION_ROW_0_BOTTOM_COLUMN_0_RIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, ORIENTATION_ROW_0_BOTTOM_COLUMN_0_RIGHT)},
	{"ORIENTATION_ROW_0_BOTTOM_COLUMN_0_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, ORIENTATION_ROW_0_BOTTOM_COLUMN_0_LEFT)},
	{"ORIENTATION_ROW_0_LEFT_COLUMN_0_TOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, ORIENTATION_ROW_0_LEFT_COLUMN_0_TOP)},
	{"ORIENTATION_ROW_0_RIGHT_COLUMN_0_TOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, ORIENTATION_ROW_0_RIGHT_COLUMN_0_TOP)},
	{"ORIENTATION_ROW_0_RIGHT_COLUMN_0_BOTTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, ORIENTATION_ROW_0_RIGHT_COLUMN_0_BOTTOM)},
	{"ORIENTATION_ROW_0_LEFT_COLUMN_0_BOTTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, ORIENTATION_ROW_0_LEFT_COLUMN_0_BOTTOM)},
	{"TAG_SAMPLES_PER_PIXEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_SAMPLES_PER_PIXEL)},
	{"TAG_ROWS_PER_STRIP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_ROWS_PER_STRIP)},
	{"TAG_STRIP_BYTE_COUNTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_STRIP_BYTE_COUNTS)},
	{"TAG_MIN_SAMPLE_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_MIN_SAMPLE_VALUE)},
	{"TAG_MAX_SAMPLE_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_MAX_SAMPLE_VALUE)},
	{"TAG_X_RESOLUTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_X_RESOLUTION)},
	{"TAG_Y_RESOLUTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_Y_RESOLUTION)},
	{"TAG_PLANAR_CONFIGURATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_PLANAR_CONFIGURATION)},
	{"PLANAR_CONFIGURATION_CHUNKY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, PLANAR_CONFIGURATION_CHUNKY)},
	{"PLANAR_CONFIGURATION_PLANAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, PLANAR_CONFIGURATION_PLANAR)},
	{"TAG_PAGE_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_PAGE_NAME)},
	{"TAG_X_POSITION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_X_POSITION)},
	{"TAG_Y_POSITION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_Y_POSITION)},
	{"TAG_FREE_OFFSETS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_FREE_OFFSETS)},
	{"TAG_FREE_BYTE_COUNTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_FREE_BYTE_COUNTS)},
	{"TAG_GRAY_RESPONSE_UNIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_GRAY_RESPONSE_UNIT)},
	{"GRAY_RESPONSE_UNIT_TENTHS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, GRAY_RESPONSE_UNIT_TENTHS)},
	{"GRAY_RESPONSE_UNIT_HUNDREDTHS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, GRAY_RESPONSE_UNIT_HUNDREDTHS)},
	{"GRAY_RESPONSE_UNIT_THOUSANDTHS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, GRAY_RESPONSE_UNIT_THOUSANDTHS)},
	{"GRAY_RESPONSE_UNIT_TEN_THOUSANDTHS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, GRAY_RESPONSE_UNIT_TEN_THOUSANDTHS)},
	{"GRAY_RESPONSE_UNIT_HUNDRED_THOUSANDTHS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, GRAY_RESPONSE_UNIT_HUNDRED_THOUSANDTHS)},
	{"TAG_GRAY_RESPONSE_CURVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_GRAY_RESPONSE_CURVE)},
	{"TAG_T4_OPTIONS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_T4_OPTIONS)},
	{"T4_OPTIONS_2D_CODING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, T4_OPTIONS_2D_CODING)},
	{"T4_OPTIONS_UNCOMPRESSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, T4_OPTIONS_UNCOMPRESSED)},
	{"T4_OPTIONS_EOL_BYTE_ALIGNED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, T4_OPTIONS_EOL_BYTE_ALIGNED)},
	{"TAG_T6_OPTIONS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_T6_OPTIONS)},
	{"T6_OPTIONS_UNCOMPRESSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, T6_OPTIONS_UNCOMPRESSED)},
	{"TAG_RESOLUTION_UNIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_RESOLUTION_UNIT)},
	{"RESOLUTION_UNIT_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, RESOLUTION_UNIT_NONE)},
	{"RESOLUTION_UNIT_INCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, RESOLUTION_UNIT_INCH)},
	{"RESOLUTION_UNIT_CENTIMETER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, RESOLUTION_UNIT_CENTIMETER)},
	{"TAG_PAGE_NUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_PAGE_NUMBER)},
	{"TAG_TRANSFER_FUNCTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_TRANSFER_FUNCTION)},
	{"TAG_SOFTWARE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_SOFTWARE)},
	{"TAG_DATE_TIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_DATE_TIME)},
	{"TAG_ARTIST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_ARTIST)},
	{"TAG_HOST_COMPUTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_HOST_COMPUTER)},
	{"TAG_PREDICTOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_PREDICTOR)},
	{"PREDICTOR_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, PREDICTOR_NONE)},
	{"PREDICTOR_HORIZONTAL_DIFFERENCING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, PREDICTOR_HORIZONTAL_DIFFERENCING)},
	{"TAG_WHITE_POINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_WHITE_POINT)},
	{"TAG_PRIMARY_CHROMATICITES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_PRIMARY_CHROMATICITES)},
	{"TAG_COLOR_MAP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_COLOR_MAP)},
	{"TAG_HALFTONE_HINTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_HALFTONE_HINTS)},
	{"TAG_TILE_WIDTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_TILE_WIDTH)},
	{"TAG_TILE_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_TILE_LENGTH)},
	{"TAG_TILE_OFFSETS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_TILE_OFFSETS)},
	{"TAG_TILE_BYTE_COUNTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_TILE_BYTE_COUNTS)},
	{"TAG_INK_SET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_INK_SET)},
	{"INK_SET_CMYK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, INK_SET_CMYK)},
	{"INK_SET_NOT_CMYK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, INK_SET_NOT_CMYK)},
	{"TAG_INK_NAMES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_INK_NAMES)},
	{"TAG_NUMBER_OF_INKS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_NUMBER_OF_INKS)},
	{"TAG_DOT_RANGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_DOT_RANGE)},
	{"TAG_TARGET_PRINTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_TARGET_PRINTER)},
	{"TAG_EXTRA_SAMPLES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_EXTRA_SAMPLES)},
	{"EXTRA_SAMPLES_UNSPECIFIED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, EXTRA_SAMPLES_UNSPECIFIED)},
	{"EXTRA_SAMPLES_ASSOCIATED_ALPHA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, EXTRA_SAMPLES_ASSOCIATED_ALPHA)},
	{"EXTRA_SAMPLES_UNASSOCIATED_ALPHA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, EXTRA_SAMPLES_UNASSOCIATED_ALPHA)},
	{"TAG_SAMPLE_FORMAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_SAMPLE_FORMAT)},
	{"SAMPLE_FORMAT_UNSIGNED_INTEGER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, SAMPLE_FORMAT_UNSIGNED_INTEGER)},
	{"SAMPLE_FORMAT_SIGNED_INTEGER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, SAMPLE_FORMAT_SIGNED_INTEGER)},
	{"SAMPLE_FORMAT_FLOATING_POINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, SAMPLE_FORMAT_FLOATING_POINT)},
	{"SAMPLE_FORMAT_UNDEFINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, SAMPLE_FORMAT_UNDEFINED)},
	{"TAG_S_MIN_SAMPLE_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_S_MIN_SAMPLE_VALUE)},
	{"TAG_S_MAX_SAMPLE_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_S_MAX_SAMPLE_VALUE)},
	{"TAG_TRANSFER_RANGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_TRANSFER_RANGE)},
	{"TAG_JPEG_TABLES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_JPEG_TABLES)},
	{"TAG_JPEG_PROC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_JPEG_PROC)},
	{"JPEG_PROC_BASELINE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, JPEG_PROC_BASELINE)},
	{"JPEG_PROC_LOSSLESS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, JPEG_PROC_LOSSLESS)},
	{"TAG_JPEG_INTERCHANGE_FORMAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_JPEG_INTERCHANGE_FORMAT)},
	{"TAG_JPEG_INTERCHANGE_FORMAT_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_JPEG_INTERCHANGE_FORMAT_LENGTH)},
	{"TAG_JPEG_RESTART_INTERVAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_JPEG_RESTART_INTERVAL)},
	{"TAG_JPEG_LOSSLESS_PREDICTORS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_JPEG_LOSSLESS_PREDICTORS)},
	{"TAG_JPEG_POINT_TRANSFORMS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_JPEG_POINT_TRANSFORMS)},
	{"TAG_JPEG_Q_TABLES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_JPEG_Q_TABLES)},
	{"TAG_JPEG_DC_TABLES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_JPEG_DC_TABLES)},
	{"TAG_JPEG_AC_TABLES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_JPEG_AC_TABLES)},
	{"TAG_Y_CB_CR_COEFFICIENTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_Y_CB_CR_COEFFICIENTS)},
	{"TAG_Y_CB_CR_SUBSAMPLING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_Y_CB_CR_SUBSAMPLING)},
	{"TAG_Y_CB_CR_POSITIONING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_Y_CB_CR_POSITIONING)},
	{"Y_CB_CR_POSITIONING_CENTERED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, Y_CB_CR_POSITIONING_CENTERED)},
	{"Y_CB_CR_POSITIONING_COSITED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, Y_CB_CR_POSITIONING_COSITED)},
	{"TAG_REFERENCE_BLACK_WHITE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_REFERENCE_BLACK_WHITE)},
	{"TAG_COPYRIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_COPYRIGHT)},
	{"TAG_ICC_PROFILE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BaselineTIFFTagSet, TAG_ICC_PROFILE)},
	{"tags", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTag;>;", $PRIVATE | $STATIC, $staticField(BaselineTIFFTagSet, tags)},
	{}
};

$MethodInfo _BaselineTIFFTagSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BaselineTIFFTagSet::*)()>(&BaselineTIFFTagSet::init$))},
	{"getInstance", "()Ljavax/imageio/plugins/tiff/BaselineTIFFTagSet;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<BaselineTIFFTagSet*(*)()>(&BaselineTIFFTagSet::getInstance))},
	{"initTags", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&BaselineTIFFTagSet::initTags))},
	{}
};

$InnerClassInfo _BaselineTIFFTagSet_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ICCProfile", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ICCProfile", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YResolution", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "YResolution", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YPosition", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "YPosition", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrSubSampling", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "YCbCrSubSampling", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrPositioning", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "YCbCrPositioning", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrCoefficients", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "YCbCrCoefficients", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$XResolution", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "XResolution", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$XPosition", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "XPosition", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$WhitePoint", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "WhitePoint", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TransferRange", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TransferRange", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TransferFunction", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TransferFunction", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileWidth", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TileWidth", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileLength", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TileLength", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileOffsets", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TileOffsets", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileByteCounts", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TileByteCounts", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Threshholding", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Threshholding", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$TargetPrinter", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "TargetPrinter", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$T6Options", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "T6Options", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$T4Options", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "T4Options", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SubfileType", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "SubfileType", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$StripOffsets", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "StripOffsets", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$StripByteCounts", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "StripByteCounts", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Software", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Software", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SMinSampleValue", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "SMinSampleValue", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SMaxSampleValue", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "SMaxSampleValue", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SamplesPerPixel", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "SamplesPerPixel", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$SampleFormat", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "SampleFormat", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$RowsPerStrip", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "RowsPerStrip", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ResolutionUnit", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ResolutionUnit", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ReferenceBlackWhite", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ReferenceBlackWhite", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PrimaryChromaticities", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "PrimaryChromaticities", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Predictor", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Predictor", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PlanarConfiguration", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "PlanarConfiguration", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PhotometricInterpretation", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "PhotometricInterpretation", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PageNumber", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "PageNumber", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$PageName", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "PageName", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Orientation", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Orientation", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$NumberOfInks", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "NumberOfInks", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$NewSubfileType", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "NewSubfileType", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Model", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Model", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$MinSampleValue", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "MinSampleValue", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$MaxSampleValue", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "MaxSampleValue", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Make", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Make", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGRestartInterval", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGRestartInterval", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGQTables", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGQTables", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGProc", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGProc", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGPointTransforms", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGPointTransforms", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGLosslessPredictors", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGLosslessPredictors", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGInterchangeFormatLength", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGInterchangeFormatLength", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGInterchangeFormat", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGInterchangeFormat", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGDCTables", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGDCTables", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGACTables", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGACTables", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGTables", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "JPEGTables", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$InkSet", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "InkSet", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$InkNames", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "InkNames", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ImageWidth", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ImageWidth", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ImageLength", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ImageLength", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ImageDescription", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ImageDescription", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$HostComputer", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "HostComputer", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$HalftoneHints", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "HalftoneHints", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$GrayResponseUnit", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "GrayResponseUnit", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$GrayResponseCurve", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "GrayResponseCurve", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$FreeOffsets", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "FreeOffsets", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$FreeByteCounts", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "FreeByteCounts", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$FillOrder", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "FillOrder", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ExtraSamples", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ExtraSamples", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$DotRange", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "DotRange", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$DocumentName", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "DocumentName", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$DateTime", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "DateTime", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Copyright", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Copyright", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Compression", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Compression", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ColorMap", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "ColorMap", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$CellWidth", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "CellWidth", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$CellLength", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "CellLength", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$BitsPerSample", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "BitsPerSample", $STATIC},
	{"javax.imageio.plugins.tiff.BaselineTIFFTagSet$Artist", "javax.imageio.plugins.tiff.BaselineTIFFTagSet", "Artist", $STATIC},
	{}
};

$ClassInfo _BaselineTIFFTagSet_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet",
	"javax.imageio.plugins.tiff.TIFFTagSet",
	nullptr,
	_BaselineTIFFTagSet_FieldInfo_,
	_BaselineTIFFTagSet_MethodInfo_,
	nullptr,
	nullptr,
	_BaselineTIFFTagSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.BaselineTIFFTagSet$ICCProfile,javax.imageio.plugins.tiff.BaselineTIFFTagSet$YResolution,javax.imageio.plugins.tiff.BaselineTIFFTagSet$YPosition,javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrSubSampling,javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrPositioning,javax.imageio.plugins.tiff.BaselineTIFFTagSet$YCbCrCoefficients,javax.imageio.plugins.tiff.BaselineTIFFTagSet$XResolution,javax.imageio.plugins.tiff.BaselineTIFFTagSet$XPosition,javax.imageio.plugins.tiff.BaselineTIFFTagSet$WhitePoint,javax.imageio.plugins.tiff.BaselineTIFFTagSet$TransferRange,javax.imageio.plugins.tiff.BaselineTIFFTagSet$TransferFunction,javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileWidth,javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileLength,javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileOffsets,javax.imageio.plugins.tiff.BaselineTIFFTagSet$TileByteCounts,javax.imageio.plugins.tiff.BaselineTIFFTagSet$Threshholding,javax.imageio.plugins.tiff.BaselineTIFFTagSet$TargetPrinter,javax.imageio.plugins.tiff.BaselineTIFFTagSet$T6Options,javax.imageio.plugins.tiff.BaselineTIFFTagSet$T4Options,javax.imageio.plugins.tiff.BaselineTIFFTagSet$SubfileType,javax.imageio.plugins.tiff.BaselineTIFFTagSet$StripOffsets,javax.imageio.plugins.tiff.BaselineTIFFTagSet$StripByteCounts,javax.imageio.plugins.tiff.BaselineTIFFTagSet$Software,javax.imageio.plugins.tiff.BaselineTIFFTagSet$SMinSampleValue,javax.imageio.plugins.tiff.BaselineTIFFTagSet$SMaxSampleValue,javax.imageio.plugins.tiff.BaselineTIFFTagSet$SamplesPerPixel,javax.imageio.plugins.tiff.BaselineTIFFTagSet$SampleFormat,javax.imageio.plugins.tiff.BaselineTIFFTagSet$RowsPerStrip,javax.imageio.plugins.tiff.BaselineTIFFTagSet$ResolutionUnit,javax.imageio.plugins.tiff.BaselineTIFFTagSet$ReferenceBlackWhite,javax.imageio.plugins.tiff.BaselineTIFFTagSet$PrimaryChromaticities,javax.imageio.plugins.tiff.BaselineTIFFTagSet$Predictor,javax.imageio.plugins.tiff.BaselineTIFFTagSet$PlanarConfiguration,javax.imageio.plugins.tiff.BaselineTIFFTagSet$PhotometricInterpretation,javax.imageio.plugins.tiff.BaselineTIFFTagSet$PageNumber,javax.imageio.plugins.tiff.BaselineTIFFTagSet$PageName,javax.imageio.plugins.tiff.BaselineTIFFTagSet$Orientation,javax.imageio.plugins.tiff.BaselineTIFFTagSet$NumberOfInks,javax.imageio.plugins.tiff.BaselineTIFFTagSet$NewSubfileType,javax.imageio.plugins.tiff.BaselineTIFFTagSet$Model,javax.imageio.plugins.tiff.BaselineTIFFTagSet$MinSampleValue,javax.imageio.plugins.tiff.BaselineTIFFTagSet$MaxSampleValue,javax.imageio.plugins.tiff.BaselineTIFFTagSet$Make,javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGRestartInterval,javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGQTables,javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGProc,javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGPointTransforms,javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGLosslessPredictors,javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGInterchangeFormatLength,javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGInterchangeFormat,javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGDCTables,javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGACTables,javax.imageio.plugins.tiff.BaselineTIFFTagSet$JPEGTables,javax.imageio.plugins.tiff.BaselineTIFFTagSet$InkSet,javax.imageio.plugins.tiff.BaselineTIFFTagSet$InkNames,javax.imageio.plugins.tiff.BaselineTIFFTagSet$ImageWidth,javax.imageio.plugins.tiff.BaselineTIFFTagSet$ImageLength,javax.imageio.plugins.tiff.BaselineTIFFTagSet$ImageDescription,javax.imageio.plugins.tiff.BaselineTIFFTagSet$HostComputer,javax.imageio.plugins.tiff.BaselineTIFFTagSet$HalftoneHints,javax.imageio.plugins.tiff.BaselineTIFFTagSet$GrayResponseUnit,javax.imageio.plugins.tiff.BaselineTIFFTagSet$GrayResponseCurve,javax.imageio.plugins.tiff.BaselineTIFFTagSet$FreeOffsets,javax.imageio.plugins.tiff.BaselineTIFFTagSet$FreeByteCounts,javax.imageio.plugins.tiff.BaselineTIFFTagSet$FillOrder,javax.imageio.plugins.tiff.BaselineTIFFTagSet$ExtraSamples,javax.imageio.plugins.tiff.BaselineTIFFTagSet$DotRange,javax.imageio.plugins.tiff.BaselineTIFFTagSet$DocumentName,javax.imageio.plugins.tiff.BaselineTIFFTagSet$DateTime,javax.imageio.plugins.tiff.BaselineTIFFTagSet$Copyright,javax.imageio.plugins.tiff.BaselineTIFFTagSet$Compression,javax.imageio.plugins.tiff.BaselineTIFFTagSet$ColorMap,javax.imageio.plugins.tiff.BaselineTIFFTagSet$CellWidth,javax.imageio.plugins.tiff.BaselineTIFFTagSet$CellLength,javax.imageio.plugins.tiff.BaselineTIFFTagSet$BitsPerSample,javax.imageio.plugins.tiff.BaselineTIFFTagSet$Artist"
};

$Object* allocate$BaselineTIFFTagSet($Class* clazz) {
	return $of($alloc(BaselineTIFFTagSet));
}

BaselineTIFFTagSet* BaselineTIFFTagSet::theInstance = nullptr;
$List* BaselineTIFFTagSet::tags = nullptr;

void BaselineTIFFTagSet::initTags() {
	$init(BaselineTIFFTagSet);
	$assignStatic(BaselineTIFFTagSet::tags, $new($ArrayList, 76));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$Artist));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$BitsPerSample));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$CellLength));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$CellWidth));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$ColorMap));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$Compression));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$Copyright));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$DateTime));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$DocumentName));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$DotRange));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$ExtraSamples));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$FillOrder));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$FreeByteCounts));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$FreeOffsets));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$GrayResponseCurve));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$GrayResponseUnit));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$HalftoneHints));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$HostComputer));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$ImageDescription));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$ICCProfile));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$ImageLength));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$ImageWidth));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$InkNames));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$InkSet));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$JPEGACTables));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$JPEGDCTables));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$JPEGInterchangeFormat));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$JPEGInterchangeFormatLength));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$JPEGLosslessPredictors));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$JPEGPointTransforms));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$JPEGProc));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$JPEGQTables));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$JPEGRestartInterval));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$JPEGTables));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$Make));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$MaxSampleValue));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$MinSampleValue));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$Model));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$NewSubfileType));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$NumberOfInks));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$Orientation));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$PageName));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$PageNumber));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$PhotometricInterpretation));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$PlanarConfiguration));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$Predictor));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$PrimaryChromaticities));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$ReferenceBlackWhite));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$ResolutionUnit));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$RowsPerStrip));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$SampleFormat));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$SamplesPerPixel));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$SMaxSampleValue));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$SMinSampleValue));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$Software));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$StripByteCounts));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$StripOffsets));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$SubfileType));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$T4Options));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$T6Options));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$TargetPrinter));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$Threshholding));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$TileByteCounts));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$TileOffsets));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$TileLength));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$TileWidth));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$TransferFunction));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$TransferRange));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$WhitePoint));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$XPosition));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$XResolution));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$YCbCrCoefficients));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$YCbCrPositioning));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$YCbCrSubSampling));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$YPosition));
	$nc(BaselineTIFFTagSet::tags)->add($$new($BaselineTIFFTagSet$YResolution));
}

void BaselineTIFFTagSet::init$() {
	$TIFFTagSet::init$(BaselineTIFFTagSet::tags);
}

BaselineTIFFTagSet* BaselineTIFFTagSet::getInstance() {
	$load(BaselineTIFFTagSet);
	$synchronized(class$) {
		$init(BaselineTIFFTagSet);
		if (BaselineTIFFTagSet::theInstance == nullptr) {
			initTags();
			$assignStatic(BaselineTIFFTagSet::theInstance, $new(BaselineTIFFTagSet));
			$assignStatic(BaselineTIFFTagSet::tags, nullptr);
		}
		return BaselineTIFFTagSet::theInstance;
	}
}

void clinit$BaselineTIFFTagSet($Class* class$) {
	$assignStatic(BaselineTIFFTagSet::theInstance, nullptr);
}

BaselineTIFFTagSet::BaselineTIFFTagSet() {
}

$Class* BaselineTIFFTagSet::load$($String* name, bool initialize) {
	$loadClass(BaselineTIFFTagSet, name, initialize, &_BaselineTIFFTagSet_ClassInfo_, clinit$BaselineTIFFTagSet, allocate$BaselineTIFFTagSet);
	return class$;
}

$Class* BaselineTIFFTagSet::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax