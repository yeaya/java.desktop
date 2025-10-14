#ifndef _javax_imageio_plugins_tiff_BaselineTIFFTagSet_h_
#define _javax_imageio_plugins_tiff_BaselineTIFFTagSet_h_
//$ class javax.imageio.plugins.tiff.BaselineTIFFTagSet
//$ extends javax.imageio.plugins.tiff.TIFFTagSet

#include <javax/imageio/plugins/tiff/TIFFTagSet.h>

#pragma push_macro("COMPRESSION_CCITT_RLE")
#undef COMPRESSION_CCITT_RLE
#pragma push_macro("COMPRESSION_CCITT_T_4")
#undef COMPRESSION_CCITT_T_4
#pragma push_macro("COMPRESSION_CCITT_T_6")
#undef COMPRESSION_CCITT_T_6
#pragma push_macro("COMPRESSION_DEFLATE")
#undef COMPRESSION_DEFLATE
#pragma push_macro("COMPRESSION_JPEG")
#undef COMPRESSION_JPEG
#pragma push_macro("COMPRESSION_LZW")
#undef COMPRESSION_LZW
#pragma push_macro("COMPRESSION_NONE")
#undef COMPRESSION_NONE
#pragma push_macro("COMPRESSION_OLD_JPEG")
#undef COMPRESSION_OLD_JPEG
#pragma push_macro("COMPRESSION_PACKBITS")
#undef COMPRESSION_PACKBITS
#pragma push_macro("COMPRESSION_ZLIB")
#undef COMPRESSION_ZLIB
#pragma push_macro("EXTRA_SAMPLES_ASSOCIATED_ALPHA")
#undef EXTRA_SAMPLES_ASSOCIATED_ALPHA
#pragma push_macro("EXTRA_SAMPLES_UNASSOCIATED_ALPHA")
#undef EXTRA_SAMPLES_UNASSOCIATED_ALPHA
#pragma push_macro("EXTRA_SAMPLES_UNSPECIFIED")
#undef EXTRA_SAMPLES_UNSPECIFIED
#pragma push_macro("FILL_ORDER_LEFT_TO_RIGHT")
#undef FILL_ORDER_LEFT_TO_RIGHT
#pragma push_macro("FILL_ORDER_RIGHT_TO_LEFT")
#undef FILL_ORDER_RIGHT_TO_LEFT
#pragma push_macro("GRAY_RESPONSE_UNIT_HUNDREDTHS")
#undef GRAY_RESPONSE_UNIT_HUNDREDTHS
#pragma push_macro("GRAY_RESPONSE_UNIT_HUNDRED_THOUSANDTHS")
#undef GRAY_RESPONSE_UNIT_HUNDRED_THOUSANDTHS
#pragma push_macro("GRAY_RESPONSE_UNIT_TENTHS")
#undef GRAY_RESPONSE_UNIT_TENTHS
#pragma push_macro("GRAY_RESPONSE_UNIT_TEN_THOUSANDTHS")
#undef GRAY_RESPONSE_UNIT_TEN_THOUSANDTHS
#pragma push_macro("GRAY_RESPONSE_UNIT_THOUSANDTHS")
#undef GRAY_RESPONSE_UNIT_THOUSANDTHS
#pragma push_macro("INK_SET_CMYK")
#undef INK_SET_CMYK
#pragma push_macro("INK_SET_NOT_CMYK")
#undef INK_SET_NOT_CMYK
#pragma push_macro("JPEG_PROC_BASELINE")
#undef JPEG_PROC_BASELINE
#pragma push_macro("JPEG_PROC_LOSSLESS")
#undef JPEG_PROC_LOSSLESS
#pragma push_macro("NEW_SUBFILE_TYPE_REDUCED_RESOLUTION")
#undef NEW_SUBFILE_TYPE_REDUCED_RESOLUTION
#pragma push_macro("NEW_SUBFILE_TYPE_SINGLE_PAGE")
#undef NEW_SUBFILE_TYPE_SINGLE_PAGE
#pragma push_macro("NEW_SUBFILE_TYPE_TRANSPARENCY")
#undef NEW_SUBFILE_TYPE_TRANSPARENCY
#pragma push_macro("ORIENTATION_ROW_0_BOTTOM_COLUMN_0_LEFT")
#undef ORIENTATION_ROW_0_BOTTOM_COLUMN_0_LEFT
#pragma push_macro("ORIENTATION_ROW_0_BOTTOM_COLUMN_0_RIGHT")
#undef ORIENTATION_ROW_0_BOTTOM_COLUMN_0_RIGHT
#pragma push_macro("ORIENTATION_ROW_0_LEFT_COLUMN_0_BOTTOM")
#undef ORIENTATION_ROW_0_LEFT_COLUMN_0_BOTTOM
#pragma push_macro("ORIENTATION_ROW_0_LEFT_COLUMN_0_TOP")
#undef ORIENTATION_ROW_0_LEFT_COLUMN_0_TOP
#pragma push_macro("ORIENTATION_ROW_0_RIGHT_COLUMN_0_BOTTOM")
#undef ORIENTATION_ROW_0_RIGHT_COLUMN_0_BOTTOM
#pragma push_macro("ORIENTATION_ROW_0_RIGHT_COLUMN_0_TOP")
#undef ORIENTATION_ROW_0_RIGHT_COLUMN_0_TOP
#pragma push_macro("ORIENTATION_ROW_0_TOP_COLUMN_0_LEFT")
#undef ORIENTATION_ROW_0_TOP_COLUMN_0_LEFT
#pragma push_macro("ORIENTATION_ROW_0_TOP_COLUMN_0_RIGHT")
#undef ORIENTATION_ROW_0_TOP_COLUMN_0_RIGHT
#pragma push_macro("PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO")
#undef PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO
#pragma push_macro("PHOTOMETRIC_INTERPRETATION_CIELAB")
#undef PHOTOMETRIC_INTERPRETATION_CIELAB
#pragma push_macro("PHOTOMETRIC_INTERPRETATION_CMYK")
#undef PHOTOMETRIC_INTERPRETATION_CMYK
#pragma push_macro("PHOTOMETRIC_INTERPRETATION_ICCLAB")
#undef PHOTOMETRIC_INTERPRETATION_ICCLAB
#pragma push_macro("PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR")
#undef PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR
#pragma push_macro("PHOTOMETRIC_INTERPRETATION_RGB")
#undef PHOTOMETRIC_INTERPRETATION_RGB
#pragma push_macro("PHOTOMETRIC_INTERPRETATION_TRANSPARENCY_MASK")
#undef PHOTOMETRIC_INTERPRETATION_TRANSPARENCY_MASK
#pragma push_macro("PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO")
#undef PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO
#pragma push_macro("PHOTOMETRIC_INTERPRETATION_Y_CB_CR")
#undef PHOTOMETRIC_INTERPRETATION_Y_CB_CR
#pragma push_macro("PLANAR_CONFIGURATION_CHUNKY")
#undef PLANAR_CONFIGURATION_CHUNKY
#pragma push_macro("PLANAR_CONFIGURATION_PLANAR")
#undef PLANAR_CONFIGURATION_PLANAR
#pragma push_macro("PREDICTOR_HORIZONTAL_DIFFERENCING")
#undef PREDICTOR_HORIZONTAL_DIFFERENCING
#pragma push_macro("PREDICTOR_NONE")
#undef PREDICTOR_NONE
#pragma push_macro("RESOLUTION_UNIT_CENTIMETER")
#undef RESOLUTION_UNIT_CENTIMETER
#pragma push_macro("RESOLUTION_UNIT_INCH")
#undef RESOLUTION_UNIT_INCH
#pragma push_macro("RESOLUTION_UNIT_NONE")
#undef RESOLUTION_UNIT_NONE
#pragma push_macro("SAMPLE_FORMAT_FLOATING_POINT")
#undef SAMPLE_FORMAT_FLOATING_POINT
#pragma push_macro("SAMPLE_FORMAT_SIGNED_INTEGER")
#undef SAMPLE_FORMAT_SIGNED_INTEGER
#pragma push_macro("SAMPLE_FORMAT_UNDEFINED")
#undef SAMPLE_FORMAT_UNDEFINED
#pragma push_macro("SAMPLE_FORMAT_UNSIGNED_INTEGER")
#undef SAMPLE_FORMAT_UNSIGNED_INTEGER
#pragma push_macro("SUBFILE_TYPE_FULL_RESOLUTION")
#undef SUBFILE_TYPE_FULL_RESOLUTION
#pragma push_macro("SUBFILE_TYPE_REDUCED_RESOLUTION")
#undef SUBFILE_TYPE_REDUCED_RESOLUTION
#pragma push_macro("SUBFILE_TYPE_SINGLE_PAGE")
#undef SUBFILE_TYPE_SINGLE_PAGE
#pragma push_macro("T4_OPTIONS_2D_CODING")
#undef T4_OPTIONS_2D_CODING
#pragma push_macro("T4_OPTIONS_EOL_BYTE_ALIGNED")
#undef T4_OPTIONS_EOL_BYTE_ALIGNED
#pragma push_macro("T4_OPTIONS_UNCOMPRESSED")
#undef T4_OPTIONS_UNCOMPRESSED
#pragma push_macro("T6_OPTIONS_UNCOMPRESSED")
#undef T6_OPTIONS_UNCOMPRESSED
#pragma push_macro("TAG_ARTIST")
#undef TAG_ARTIST
#pragma push_macro("TAG_BITS_PER_SAMPLE")
#undef TAG_BITS_PER_SAMPLE
#pragma push_macro("TAG_CELL_LENGTH")
#undef TAG_CELL_LENGTH
#pragma push_macro("TAG_CELL_WIDTH")
#undef TAG_CELL_WIDTH
#pragma push_macro("TAG_COLOR_MAP")
#undef TAG_COLOR_MAP
#pragma push_macro("TAG_COMPRESSION")
#undef TAG_COMPRESSION
#pragma push_macro("TAG_COPYRIGHT")
#undef TAG_COPYRIGHT
#pragma push_macro("TAG_DATE_TIME")
#undef TAG_DATE_TIME
#pragma push_macro("TAG_DOCUMENT_NAME")
#undef TAG_DOCUMENT_NAME
#pragma push_macro("TAG_DOT_RANGE")
#undef TAG_DOT_RANGE
#pragma push_macro("TAG_EXTRA_SAMPLES")
#undef TAG_EXTRA_SAMPLES
#pragma push_macro("TAG_FILL_ORDER")
#undef TAG_FILL_ORDER
#pragma push_macro("TAG_FREE_BYTE_COUNTS")
#undef TAG_FREE_BYTE_COUNTS
#pragma push_macro("TAG_FREE_OFFSETS")
#undef TAG_FREE_OFFSETS
#pragma push_macro("TAG_GRAY_RESPONSE_CURVE")
#undef TAG_GRAY_RESPONSE_CURVE
#pragma push_macro("TAG_GRAY_RESPONSE_UNIT")
#undef TAG_GRAY_RESPONSE_UNIT
#pragma push_macro("TAG_HALFTONE_HINTS")
#undef TAG_HALFTONE_HINTS
#pragma push_macro("TAG_HOST_COMPUTER")
#undef TAG_HOST_COMPUTER
#pragma push_macro("TAG_ICC_PROFILE")
#undef TAG_ICC_PROFILE
#pragma push_macro("TAG_IMAGE_DESCRIPTION")
#undef TAG_IMAGE_DESCRIPTION
#pragma push_macro("TAG_IMAGE_LENGTH")
#undef TAG_IMAGE_LENGTH
#pragma push_macro("TAG_IMAGE_WIDTH")
#undef TAG_IMAGE_WIDTH
#pragma push_macro("TAG_INK_NAMES")
#undef TAG_INK_NAMES
#pragma push_macro("TAG_INK_SET")
#undef TAG_INK_SET
#pragma push_macro("TAG_JPEG_AC_TABLES")
#undef TAG_JPEG_AC_TABLES
#pragma push_macro("TAG_JPEG_DC_TABLES")
#undef TAG_JPEG_DC_TABLES
#pragma push_macro("TAG_JPEG_INTERCHANGE_FORMAT")
#undef TAG_JPEG_INTERCHANGE_FORMAT
#pragma push_macro("TAG_JPEG_INTERCHANGE_FORMAT_LENGTH")
#undef TAG_JPEG_INTERCHANGE_FORMAT_LENGTH
#pragma push_macro("TAG_JPEG_LOSSLESS_PREDICTORS")
#undef TAG_JPEG_LOSSLESS_PREDICTORS
#pragma push_macro("TAG_JPEG_POINT_TRANSFORMS")
#undef TAG_JPEG_POINT_TRANSFORMS
#pragma push_macro("TAG_JPEG_PROC")
#undef TAG_JPEG_PROC
#pragma push_macro("TAG_JPEG_Q_TABLES")
#undef TAG_JPEG_Q_TABLES
#pragma push_macro("TAG_JPEG_RESTART_INTERVAL")
#undef TAG_JPEG_RESTART_INTERVAL
#pragma push_macro("TAG_JPEG_TABLES")
#undef TAG_JPEG_TABLES
#pragma push_macro("TAG_MAKE")
#undef TAG_MAKE
#pragma push_macro("TAG_MAX_SAMPLE_VALUE")
#undef TAG_MAX_SAMPLE_VALUE
#pragma push_macro("TAG_MIN_SAMPLE_VALUE")
#undef TAG_MIN_SAMPLE_VALUE
#pragma push_macro("TAG_MODEL")
#undef TAG_MODEL
#pragma push_macro("TAG_NEW_SUBFILE_TYPE")
#undef TAG_NEW_SUBFILE_TYPE
#pragma push_macro("TAG_NUMBER_OF_INKS")
#undef TAG_NUMBER_OF_INKS
#pragma push_macro("TAG_ORIENTATION")
#undef TAG_ORIENTATION
#pragma push_macro("TAG_PAGE_NAME")
#undef TAG_PAGE_NAME
#pragma push_macro("TAG_PAGE_NUMBER")
#undef TAG_PAGE_NUMBER
#pragma push_macro("TAG_PHOTOMETRIC_INTERPRETATION")
#undef TAG_PHOTOMETRIC_INTERPRETATION
#pragma push_macro("TAG_PLANAR_CONFIGURATION")
#undef TAG_PLANAR_CONFIGURATION
#pragma push_macro("TAG_PREDICTOR")
#undef TAG_PREDICTOR
#pragma push_macro("TAG_PRIMARY_CHROMATICITES")
#undef TAG_PRIMARY_CHROMATICITES
#pragma push_macro("TAG_REFERENCE_BLACK_WHITE")
#undef TAG_REFERENCE_BLACK_WHITE
#pragma push_macro("TAG_RESOLUTION_UNIT")
#undef TAG_RESOLUTION_UNIT
#pragma push_macro("TAG_ROWS_PER_STRIP")
#undef TAG_ROWS_PER_STRIP
#pragma push_macro("TAG_SAMPLES_PER_PIXEL")
#undef TAG_SAMPLES_PER_PIXEL
#pragma push_macro("TAG_SAMPLE_FORMAT")
#undef TAG_SAMPLE_FORMAT
#pragma push_macro("TAG_SOFTWARE")
#undef TAG_SOFTWARE
#pragma push_macro("TAG_STRIP_BYTE_COUNTS")
#undef TAG_STRIP_BYTE_COUNTS
#pragma push_macro("TAG_STRIP_OFFSETS")
#undef TAG_STRIP_OFFSETS
#pragma push_macro("TAG_SUBFILE_TYPE")
#undef TAG_SUBFILE_TYPE
#pragma push_macro("TAG_S_MAX_SAMPLE_VALUE")
#undef TAG_S_MAX_SAMPLE_VALUE
#pragma push_macro("TAG_S_MIN_SAMPLE_VALUE")
#undef TAG_S_MIN_SAMPLE_VALUE
#pragma push_macro("TAG_T4_OPTIONS")
#undef TAG_T4_OPTIONS
#pragma push_macro("TAG_T6_OPTIONS")
#undef TAG_T6_OPTIONS
#pragma push_macro("TAG_TARGET_PRINTER")
#undef TAG_TARGET_PRINTER
#pragma push_macro("TAG_THRESHHOLDING")
#undef TAG_THRESHHOLDING
#pragma push_macro("TAG_TILE_BYTE_COUNTS")
#undef TAG_TILE_BYTE_COUNTS
#pragma push_macro("TAG_TILE_LENGTH")
#undef TAG_TILE_LENGTH
#pragma push_macro("TAG_TILE_OFFSETS")
#undef TAG_TILE_OFFSETS
#pragma push_macro("TAG_TILE_WIDTH")
#undef TAG_TILE_WIDTH
#pragma push_macro("TAG_TRANSFER_FUNCTION")
#undef TAG_TRANSFER_FUNCTION
#pragma push_macro("TAG_TRANSFER_RANGE")
#undef TAG_TRANSFER_RANGE
#pragma push_macro("TAG_WHITE_POINT")
#undef TAG_WHITE_POINT
#pragma push_macro("TAG_X_POSITION")
#undef TAG_X_POSITION
#pragma push_macro("TAG_X_RESOLUTION")
#undef TAG_X_RESOLUTION
#pragma push_macro("TAG_Y_CB_CR_COEFFICIENTS")
#undef TAG_Y_CB_CR_COEFFICIENTS
#pragma push_macro("TAG_Y_CB_CR_POSITIONING")
#undef TAG_Y_CB_CR_POSITIONING
#pragma push_macro("TAG_Y_CB_CR_SUBSAMPLING")
#undef TAG_Y_CB_CR_SUBSAMPLING
#pragma push_macro("TAG_Y_POSITION")
#undef TAG_Y_POSITION
#pragma push_macro("TAG_Y_RESOLUTION")
#undef TAG_Y_RESOLUTION
#pragma push_macro("THRESHHOLDING_NONE")
#undef THRESHHOLDING_NONE
#pragma push_macro("THRESHHOLDING_ORDERED_DITHER")
#undef THRESHHOLDING_ORDERED_DITHER
#pragma push_macro("THRESHHOLDING_RANDOMIZED_DITHER")
#undef THRESHHOLDING_RANDOMIZED_DITHER
#pragma push_macro("Y_CB_CR_POSITIONING_CENTERED")
#undef Y_CB_CR_POSITIONING_CENTERED
#pragma push_macro("Y_CB_CR_POSITIONING_COSITED")
#undef Y_CB_CR_POSITIONING_COSITED

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

class $import BaselineTIFFTagSet : public ::javax::imageio::plugins::tiff::TIFFTagSet {
	$class(BaselineTIFFTagSet, 0, ::javax::imageio::plugins::tiff::TIFFTagSet)
public:
	BaselineTIFFTagSet();
	void init$();
	static ::javax::imageio::plugins::tiff::BaselineTIFFTagSet* getInstance();
	static void initTags();
	static ::javax::imageio::plugins::tiff::BaselineTIFFTagSet* theInstance;
	static const int32_t TAG_NEW_SUBFILE_TYPE = 254;
	static const int32_t NEW_SUBFILE_TYPE_REDUCED_RESOLUTION = 1;
	static const int32_t NEW_SUBFILE_TYPE_SINGLE_PAGE = 2;
	static const int32_t NEW_SUBFILE_TYPE_TRANSPARENCY = 4;
	static const int32_t TAG_SUBFILE_TYPE = 255;
	static const int32_t SUBFILE_TYPE_FULL_RESOLUTION = 1;
	static const int32_t SUBFILE_TYPE_REDUCED_RESOLUTION = 2;
	static const int32_t SUBFILE_TYPE_SINGLE_PAGE = 3;
	static const int32_t TAG_IMAGE_WIDTH = 256;
	static const int32_t TAG_IMAGE_LENGTH = 257;
	static const int32_t TAG_BITS_PER_SAMPLE = 258;
	static const int32_t TAG_COMPRESSION = 259;
	static const int32_t COMPRESSION_NONE = 1;
	static const int32_t COMPRESSION_CCITT_RLE = 2;
	static const int32_t COMPRESSION_CCITT_T_4 = 3;
	static const int32_t COMPRESSION_CCITT_T_6 = 4;
	static const int32_t COMPRESSION_LZW = 5;
	static const int32_t COMPRESSION_OLD_JPEG = 6;
	static const int32_t COMPRESSION_JPEG = 7;
	static const int32_t COMPRESSION_ZLIB = 8;
	static const int32_t COMPRESSION_PACKBITS = 0x00008005;
	static const int32_t COMPRESSION_DEFLATE = 0x000080B2;
	static const int32_t TAG_PHOTOMETRIC_INTERPRETATION = 262;
	static const int32_t PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO = 0;
	static const int32_t PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO = 1;
	static const int32_t PHOTOMETRIC_INTERPRETATION_RGB = 2;
	static const int32_t PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR = 3;
	static const int32_t PHOTOMETRIC_INTERPRETATION_TRANSPARENCY_MASK = 4;
	static const int32_t PHOTOMETRIC_INTERPRETATION_CMYK = 5;
	static const int32_t PHOTOMETRIC_INTERPRETATION_Y_CB_CR = 6;
	static const int32_t PHOTOMETRIC_INTERPRETATION_CIELAB = 8;
	static const int32_t PHOTOMETRIC_INTERPRETATION_ICCLAB = 9;
	static const int32_t TAG_THRESHHOLDING = 263;
	static const int32_t THRESHHOLDING_NONE = 1;
	static const int32_t THRESHHOLDING_ORDERED_DITHER = 2;
	static const int32_t THRESHHOLDING_RANDOMIZED_DITHER = 3;
	static const int32_t TAG_CELL_WIDTH = 264;
	static const int32_t TAG_CELL_LENGTH = 265;
	static const int32_t TAG_FILL_ORDER = 266;
	static const int32_t FILL_ORDER_LEFT_TO_RIGHT = 1;
	static const int32_t FILL_ORDER_RIGHT_TO_LEFT = 2;
	static const int32_t TAG_DOCUMENT_NAME = 269;
	static const int32_t TAG_IMAGE_DESCRIPTION = 270;
	static const int32_t TAG_MAKE = 271;
	static const int32_t TAG_MODEL = 272;
	static const int32_t TAG_STRIP_OFFSETS = 273;
	static const int32_t TAG_ORIENTATION = 274;
	static const int32_t ORIENTATION_ROW_0_TOP_COLUMN_0_LEFT = 1;
	static const int32_t ORIENTATION_ROW_0_TOP_COLUMN_0_RIGHT = 2;
	static const int32_t ORIENTATION_ROW_0_BOTTOM_COLUMN_0_RIGHT = 3;
	static const int32_t ORIENTATION_ROW_0_BOTTOM_COLUMN_0_LEFT = 4;
	static const int32_t ORIENTATION_ROW_0_LEFT_COLUMN_0_TOP = 5;
	static const int32_t ORIENTATION_ROW_0_RIGHT_COLUMN_0_TOP = 6;
	static const int32_t ORIENTATION_ROW_0_RIGHT_COLUMN_0_BOTTOM = 7;
	static const int32_t ORIENTATION_ROW_0_LEFT_COLUMN_0_BOTTOM = 8;
	static const int32_t TAG_SAMPLES_PER_PIXEL = 277;
	static const int32_t TAG_ROWS_PER_STRIP = 278;
	static const int32_t TAG_STRIP_BYTE_COUNTS = 279;
	static const int32_t TAG_MIN_SAMPLE_VALUE = 280;
	static const int32_t TAG_MAX_SAMPLE_VALUE = 281;
	static const int32_t TAG_X_RESOLUTION = 282;
	static const int32_t TAG_Y_RESOLUTION = 283;
	static const int32_t TAG_PLANAR_CONFIGURATION = 284;
	static const int32_t PLANAR_CONFIGURATION_CHUNKY = 1;
	static const int32_t PLANAR_CONFIGURATION_PLANAR = 2;
	static const int32_t TAG_PAGE_NAME = 285;
	static const int32_t TAG_X_POSITION = 286;
	static const int32_t TAG_Y_POSITION = 287;
	static const int32_t TAG_FREE_OFFSETS = 288;
	static const int32_t TAG_FREE_BYTE_COUNTS = 289;
	static const int32_t TAG_GRAY_RESPONSE_UNIT = 290;
	static const int32_t GRAY_RESPONSE_UNIT_TENTHS = 1;
	static const int32_t GRAY_RESPONSE_UNIT_HUNDREDTHS = 2;
	static const int32_t GRAY_RESPONSE_UNIT_THOUSANDTHS = 3;
	static const int32_t GRAY_RESPONSE_UNIT_TEN_THOUSANDTHS = 4;
	static const int32_t GRAY_RESPONSE_UNIT_HUNDRED_THOUSANDTHS = 5;
	static const int32_t TAG_GRAY_RESPONSE_CURVE = 291;
	static const int32_t TAG_T4_OPTIONS = 292;
	static const int32_t T4_OPTIONS_2D_CODING = 1;
	static const int32_t T4_OPTIONS_UNCOMPRESSED = 2;
	static const int32_t T4_OPTIONS_EOL_BYTE_ALIGNED = 4;
	static const int32_t TAG_T6_OPTIONS = 293;
	static const int32_t T6_OPTIONS_UNCOMPRESSED = 2;
	static const int32_t TAG_RESOLUTION_UNIT = 296;
	static const int32_t RESOLUTION_UNIT_NONE = 1;
	static const int32_t RESOLUTION_UNIT_INCH = 2;
	static const int32_t RESOLUTION_UNIT_CENTIMETER = 3;
	static const int32_t TAG_PAGE_NUMBER = 297;
	static const int32_t TAG_TRANSFER_FUNCTION = 301;
	static const int32_t TAG_SOFTWARE = 305;
	static const int32_t TAG_DATE_TIME = 306;
	static const int32_t TAG_ARTIST = 315;
	static const int32_t TAG_HOST_COMPUTER = 316;
	static const int32_t TAG_PREDICTOR = 317;
	static const int32_t PREDICTOR_NONE = 1;
	static const int32_t PREDICTOR_HORIZONTAL_DIFFERENCING = 2;
	static const int32_t TAG_WHITE_POINT = 318;
	static const int32_t TAG_PRIMARY_CHROMATICITES = 319;
	static const int32_t TAG_COLOR_MAP = 320;
	static const int32_t TAG_HALFTONE_HINTS = 321;
	static const int32_t TAG_TILE_WIDTH = 322;
	static const int32_t TAG_TILE_LENGTH = 323;
	static const int32_t TAG_TILE_OFFSETS = 324;
	static const int32_t TAG_TILE_BYTE_COUNTS = 325;
	static const int32_t TAG_INK_SET = 332;
	static const int32_t INK_SET_CMYK = 1;
	static const int32_t INK_SET_NOT_CMYK = 2;
	static const int32_t TAG_INK_NAMES = 333;
	static const int32_t TAG_NUMBER_OF_INKS = 334;
	static const int32_t TAG_DOT_RANGE = 336;
	static const int32_t TAG_TARGET_PRINTER = 337;
	static const int32_t TAG_EXTRA_SAMPLES = 338;
	static const int32_t EXTRA_SAMPLES_UNSPECIFIED = 0;
	static const int32_t EXTRA_SAMPLES_ASSOCIATED_ALPHA = 1;
	static const int32_t EXTRA_SAMPLES_UNASSOCIATED_ALPHA = 2;
	static const int32_t TAG_SAMPLE_FORMAT = 339;
	static const int32_t SAMPLE_FORMAT_UNSIGNED_INTEGER = 1;
	static const int32_t SAMPLE_FORMAT_SIGNED_INTEGER = 2;
	static const int32_t SAMPLE_FORMAT_FLOATING_POINT = 3;
	static const int32_t SAMPLE_FORMAT_UNDEFINED = 4;
	static const int32_t TAG_S_MIN_SAMPLE_VALUE = 340;
	static const int32_t TAG_S_MAX_SAMPLE_VALUE = 341;
	static const int32_t TAG_TRANSFER_RANGE = 342;
	static const int32_t TAG_JPEG_TABLES = 347;
	static const int32_t TAG_JPEG_PROC = 512;
	static const int32_t JPEG_PROC_BASELINE = 1;
	static const int32_t JPEG_PROC_LOSSLESS = 14;
	static const int32_t TAG_JPEG_INTERCHANGE_FORMAT = 513;
	static const int32_t TAG_JPEG_INTERCHANGE_FORMAT_LENGTH = 514;
	static const int32_t TAG_JPEG_RESTART_INTERVAL = 515;
	static const int32_t TAG_JPEG_LOSSLESS_PREDICTORS = 517;
	static const int32_t TAG_JPEG_POINT_TRANSFORMS = 518;
	static const int32_t TAG_JPEG_Q_TABLES = 519;
	static const int32_t TAG_JPEG_DC_TABLES = 520;
	static const int32_t TAG_JPEG_AC_TABLES = 521;
	static const int32_t TAG_Y_CB_CR_COEFFICIENTS = 529;
	static const int32_t TAG_Y_CB_CR_SUBSAMPLING = 530;
	static const int32_t TAG_Y_CB_CR_POSITIONING = 531;
	static const int32_t Y_CB_CR_POSITIONING_CENTERED = 1;
	static const int32_t Y_CB_CR_POSITIONING_COSITED = 2;
	static const int32_t TAG_REFERENCE_BLACK_WHITE = 532;
	static const int32_t TAG_COPYRIGHT = 0x00008298;
	static const int32_t TAG_ICC_PROFILE = 0x00008773;
	static ::java::util::List* tags;
};

			} // tiff
		} // plugins
	} // imageio
} // javax

#pragma pop_macro("COMPRESSION_CCITT_RLE")
#pragma pop_macro("COMPRESSION_CCITT_T_4")
#pragma pop_macro("COMPRESSION_CCITT_T_6")
#pragma pop_macro("COMPRESSION_DEFLATE")
#pragma pop_macro("COMPRESSION_JPEG")
#pragma pop_macro("COMPRESSION_LZW")
#pragma pop_macro("COMPRESSION_NONE")
#pragma pop_macro("COMPRESSION_OLD_JPEG")
#pragma pop_macro("COMPRESSION_PACKBITS")
#pragma pop_macro("COMPRESSION_ZLIB")
#pragma pop_macro("EXTRA_SAMPLES_ASSOCIATED_ALPHA")
#pragma pop_macro("EXTRA_SAMPLES_UNASSOCIATED_ALPHA")
#pragma pop_macro("EXTRA_SAMPLES_UNSPECIFIED")
#pragma pop_macro("FILL_ORDER_LEFT_TO_RIGHT")
#pragma pop_macro("FILL_ORDER_RIGHT_TO_LEFT")
#pragma pop_macro("GRAY_RESPONSE_UNIT_HUNDREDTHS")
#pragma pop_macro("GRAY_RESPONSE_UNIT_HUNDRED_THOUSANDTHS")
#pragma pop_macro("GRAY_RESPONSE_UNIT_TENTHS")
#pragma pop_macro("GRAY_RESPONSE_UNIT_TEN_THOUSANDTHS")
#pragma pop_macro("GRAY_RESPONSE_UNIT_THOUSANDTHS")
#pragma pop_macro("INK_SET_CMYK")
#pragma pop_macro("INK_SET_NOT_CMYK")
#pragma pop_macro("JPEG_PROC_BASELINE")
#pragma pop_macro("JPEG_PROC_LOSSLESS")
#pragma pop_macro("NEW_SUBFILE_TYPE_REDUCED_RESOLUTION")
#pragma pop_macro("NEW_SUBFILE_TYPE_SINGLE_PAGE")
#pragma pop_macro("NEW_SUBFILE_TYPE_TRANSPARENCY")
#pragma pop_macro("ORIENTATION_ROW_0_BOTTOM_COLUMN_0_LEFT")
#pragma pop_macro("ORIENTATION_ROW_0_BOTTOM_COLUMN_0_RIGHT")
#pragma pop_macro("ORIENTATION_ROW_0_LEFT_COLUMN_0_BOTTOM")
#pragma pop_macro("ORIENTATION_ROW_0_LEFT_COLUMN_0_TOP")
#pragma pop_macro("ORIENTATION_ROW_0_RIGHT_COLUMN_0_BOTTOM")
#pragma pop_macro("ORIENTATION_ROW_0_RIGHT_COLUMN_0_TOP")
#pragma pop_macro("ORIENTATION_ROW_0_TOP_COLUMN_0_LEFT")
#pragma pop_macro("ORIENTATION_ROW_0_TOP_COLUMN_0_RIGHT")
#pragma pop_macro("PHOTOMETRIC_INTERPRETATION_BLACK_IS_ZERO")
#pragma pop_macro("PHOTOMETRIC_INTERPRETATION_CIELAB")
#pragma pop_macro("PHOTOMETRIC_INTERPRETATION_CMYK")
#pragma pop_macro("PHOTOMETRIC_INTERPRETATION_ICCLAB")
#pragma pop_macro("PHOTOMETRIC_INTERPRETATION_PALETTE_COLOR")
#pragma pop_macro("PHOTOMETRIC_INTERPRETATION_RGB")
#pragma pop_macro("PHOTOMETRIC_INTERPRETATION_TRANSPARENCY_MASK")
#pragma pop_macro("PHOTOMETRIC_INTERPRETATION_WHITE_IS_ZERO")
#pragma pop_macro("PHOTOMETRIC_INTERPRETATION_Y_CB_CR")
#pragma pop_macro("PLANAR_CONFIGURATION_CHUNKY")
#pragma pop_macro("PLANAR_CONFIGURATION_PLANAR")
#pragma pop_macro("PREDICTOR_HORIZONTAL_DIFFERENCING")
#pragma pop_macro("PREDICTOR_NONE")
#pragma pop_macro("RESOLUTION_UNIT_CENTIMETER")
#pragma pop_macro("RESOLUTION_UNIT_INCH")
#pragma pop_macro("RESOLUTION_UNIT_NONE")
#pragma pop_macro("SAMPLE_FORMAT_FLOATING_POINT")
#pragma pop_macro("SAMPLE_FORMAT_SIGNED_INTEGER")
#pragma pop_macro("SAMPLE_FORMAT_UNDEFINED")
#pragma pop_macro("SAMPLE_FORMAT_UNSIGNED_INTEGER")
#pragma pop_macro("SUBFILE_TYPE_FULL_RESOLUTION")
#pragma pop_macro("SUBFILE_TYPE_REDUCED_RESOLUTION")
#pragma pop_macro("SUBFILE_TYPE_SINGLE_PAGE")
#pragma pop_macro("T4_OPTIONS_2D_CODING")
#pragma pop_macro("T4_OPTIONS_EOL_BYTE_ALIGNED")
#pragma pop_macro("T4_OPTIONS_UNCOMPRESSED")
#pragma pop_macro("T6_OPTIONS_UNCOMPRESSED")
#pragma pop_macro("TAG_ARTIST")
#pragma pop_macro("TAG_BITS_PER_SAMPLE")
#pragma pop_macro("TAG_CELL_LENGTH")
#pragma pop_macro("TAG_CELL_WIDTH")
#pragma pop_macro("TAG_COLOR_MAP")
#pragma pop_macro("TAG_COMPRESSION")
#pragma pop_macro("TAG_COPYRIGHT")
#pragma pop_macro("TAG_DATE_TIME")
#pragma pop_macro("TAG_DOCUMENT_NAME")
#pragma pop_macro("TAG_DOT_RANGE")
#pragma pop_macro("TAG_EXTRA_SAMPLES")
#pragma pop_macro("TAG_FILL_ORDER")
#pragma pop_macro("TAG_FREE_BYTE_COUNTS")
#pragma pop_macro("TAG_FREE_OFFSETS")
#pragma pop_macro("TAG_GRAY_RESPONSE_CURVE")
#pragma pop_macro("TAG_GRAY_RESPONSE_UNIT")
#pragma pop_macro("TAG_HALFTONE_HINTS")
#pragma pop_macro("TAG_HOST_COMPUTER")
#pragma pop_macro("TAG_ICC_PROFILE")
#pragma pop_macro("TAG_IMAGE_DESCRIPTION")
#pragma pop_macro("TAG_IMAGE_LENGTH")
#pragma pop_macro("TAG_IMAGE_WIDTH")
#pragma pop_macro("TAG_INK_NAMES")
#pragma pop_macro("TAG_INK_SET")
#pragma pop_macro("TAG_JPEG_AC_TABLES")
#pragma pop_macro("TAG_JPEG_DC_TABLES")
#pragma pop_macro("TAG_JPEG_INTERCHANGE_FORMAT")
#pragma pop_macro("TAG_JPEG_INTERCHANGE_FORMAT_LENGTH")
#pragma pop_macro("TAG_JPEG_LOSSLESS_PREDICTORS")
#pragma pop_macro("TAG_JPEG_POINT_TRANSFORMS")
#pragma pop_macro("TAG_JPEG_PROC")
#pragma pop_macro("TAG_JPEG_Q_TABLES")
#pragma pop_macro("TAG_JPEG_RESTART_INTERVAL")
#pragma pop_macro("TAG_JPEG_TABLES")
#pragma pop_macro("TAG_MAKE")
#pragma pop_macro("TAG_MAX_SAMPLE_VALUE")
#pragma pop_macro("TAG_MIN_SAMPLE_VALUE")
#pragma pop_macro("TAG_MODEL")
#pragma pop_macro("TAG_NEW_SUBFILE_TYPE")
#pragma pop_macro("TAG_NUMBER_OF_INKS")
#pragma pop_macro("TAG_ORIENTATION")
#pragma pop_macro("TAG_PAGE_NAME")
#pragma pop_macro("TAG_PAGE_NUMBER")
#pragma pop_macro("TAG_PHOTOMETRIC_INTERPRETATION")
#pragma pop_macro("TAG_PLANAR_CONFIGURATION")
#pragma pop_macro("TAG_PREDICTOR")
#pragma pop_macro("TAG_PRIMARY_CHROMATICITES")
#pragma pop_macro("TAG_REFERENCE_BLACK_WHITE")
#pragma pop_macro("TAG_RESOLUTION_UNIT")
#pragma pop_macro("TAG_ROWS_PER_STRIP")
#pragma pop_macro("TAG_SAMPLES_PER_PIXEL")
#pragma pop_macro("TAG_SAMPLE_FORMAT")
#pragma pop_macro("TAG_SOFTWARE")
#pragma pop_macro("TAG_STRIP_BYTE_COUNTS")
#pragma pop_macro("TAG_STRIP_OFFSETS")
#pragma pop_macro("TAG_SUBFILE_TYPE")
#pragma pop_macro("TAG_S_MAX_SAMPLE_VALUE")
#pragma pop_macro("TAG_S_MIN_SAMPLE_VALUE")
#pragma pop_macro("TAG_T4_OPTIONS")
#pragma pop_macro("TAG_T6_OPTIONS")
#pragma pop_macro("TAG_TARGET_PRINTER")
#pragma pop_macro("TAG_THRESHHOLDING")
#pragma pop_macro("TAG_TILE_BYTE_COUNTS")
#pragma pop_macro("TAG_TILE_LENGTH")
#pragma pop_macro("TAG_TILE_OFFSETS")
#pragma pop_macro("TAG_TILE_WIDTH")
#pragma pop_macro("TAG_TRANSFER_FUNCTION")
#pragma pop_macro("TAG_TRANSFER_RANGE")
#pragma pop_macro("TAG_WHITE_POINT")
#pragma pop_macro("TAG_X_POSITION")
#pragma pop_macro("TAG_X_RESOLUTION")
#pragma pop_macro("TAG_Y_CB_CR_COEFFICIENTS")
#pragma pop_macro("TAG_Y_CB_CR_POSITIONING")
#pragma pop_macro("TAG_Y_CB_CR_SUBSAMPLING")
#pragma pop_macro("TAG_Y_POSITION")
#pragma pop_macro("TAG_Y_RESOLUTION")
#pragma pop_macro("THRESHHOLDING_NONE")
#pragma pop_macro("THRESHHOLDING_ORDERED_DITHER")
#pragma pop_macro("THRESHHOLDING_RANDOMIZED_DITHER")
#pragma pop_macro("Y_CB_CR_POSITIONING_CENTERED")
#pragma pop_macro("Y_CB_CR_POSITIONING_COSITED")

#endif // _javax_imageio_plugins_tiff_BaselineTIFFTagSet_h_