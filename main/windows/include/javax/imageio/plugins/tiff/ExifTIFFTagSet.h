#ifndef _javax_imageio_plugins_tiff_ExifTIFFTagSet_h_
#define _javax_imageio_plugins_tiff_ExifTIFFTagSet_h_
//$ class javax.imageio.plugins.tiff.ExifTIFFTagSet
//$ extends javax.imageio.plugins.tiff.TIFFTagSet

#include <javax/imageio/plugins/tiff/TIFFTagSet.h>

#pragma push_macro("COLOR_SPACE_SRGB")
#undef COLOR_SPACE_SRGB
#pragma push_macro("COLOR_SPACE_UNCALIBRATED")
#undef COLOR_SPACE_UNCALIBRATED
#pragma push_macro("COMPONENTS_CONFIGURATION_B")
#undef COMPONENTS_CONFIGURATION_B
#pragma push_macro("COMPONENTS_CONFIGURATION_CB")
#undef COMPONENTS_CONFIGURATION_CB
#pragma push_macro("COMPONENTS_CONFIGURATION_CR")
#undef COMPONENTS_CONFIGURATION_CR
#pragma push_macro("COMPONENTS_CONFIGURATION_DOES_NOT_EXIST")
#undef COMPONENTS_CONFIGURATION_DOES_NOT_EXIST
#pragma push_macro("COMPONENTS_CONFIGURATION_G")
#undef COMPONENTS_CONFIGURATION_G
#pragma push_macro("COMPONENTS_CONFIGURATION_R")
#undef COMPONENTS_CONFIGURATION_R
#pragma push_macro("COMPONENTS_CONFIGURATION_Y")
#undef COMPONENTS_CONFIGURATION_Y
#pragma push_macro("CONTRAST_HARD")
#undef CONTRAST_HARD
#pragma push_macro("CONTRAST_NORMAL")
#undef CONTRAST_NORMAL
#pragma push_macro("CONTRAST_SOFT")
#undef CONTRAST_SOFT
#pragma push_macro("CUSTOM_RENDERED_CUSTOM")
#undef CUSTOM_RENDERED_CUSTOM
#pragma push_macro("CUSTOM_RENDERED_NORMAL")
#undef CUSTOM_RENDERED_NORMAL
#pragma push_macro("EXIF_VERSION_2_1")
#undef EXIF_VERSION_2_1
#pragma push_macro("EXIF_VERSION_2_2")
#undef EXIF_VERSION_2_2
#pragma push_macro("EXPOSURE_MODE_AUTO_BRACKET")
#undef EXPOSURE_MODE_AUTO_BRACKET
#pragma push_macro("EXPOSURE_MODE_AUTO_EXPOSURE")
#undef EXPOSURE_MODE_AUTO_EXPOSURE
#pragma push_macro("EXPOSURE_MODE_MANUAL_EXPOSURE")
#undef EXPOSURE_MODE_MANUAL_EXPOSURE
#pragma push_macro("EXPOSURE_PROGRAM_ACTION_PROGRAM")
#undef EXPOSURE_PROGRAM_ACTION_PROGRAM
#pragma push_macro("EXPOSURE_PROGRAM_APERTURE_PRIORITY")
#undef EXPOSURE_PROGRAM_APERTURE_PRIORITY
#pragma push_macro("EXPOSURE_PROGRAM_CREATIVE_PROGRAM")
#undef EXPOSURE_PROGRAM_CREATIVE_PROGRAM
#pragma push_macro("EXPOSURE_PROGRAM_LANDSCAPE_MODE")
#undef EXPOSURE_PROGRAM_LANDSCAPE_MODE
#pragma push_macro("EXPOSURE_PROGRAM_MANUAL")
#undef EXPOSURE_PROGRAM_MANUAL
#pragma push_macro("EXPOSURE_PROGRAM_MAX_RESERVED")
#undef EXPOSURE_PROGRAM_MAX_RESERVED
#pragma push_macro("EXPOSURE_PROGRAM_NORMAL_PROGRAM")
#undef EXPOSURE_PROGRAM_NORMAL_PROGRAM
#pragma push_macro("EXPOSURE_PROGRAM_NOT_DEFINED")
#undef EXPOSURE_PROGRAM_NOT_DEFINED
#pragma push_macro("EXPOSURE_PROGRAM_PORTRAIT_MODE")
#undef EXPOSURE_PROGRAM_PORTRAIT_MODE
#pragma push_macro("EXPOSURE_PROGRAM_SHUTTER_PRIORITY")
#undef EXPOSURE_PROGRAM_SHUTTER_PRIORITY
#pragma push_macro("FILE_SOURCE_DSC")
#undef FILE_SOURCE_DSC
#pragma push_macro("FLASH_DID_NOT_FIRE")
#undef FLASH_DID_NOT_FIRE
#pragma push_macro("FLASH_FIRED")
#undef FLASH_FIRED
#pragma push_macro("FLASH_MASK_FIRED")
#undef FLASH_MASK_FIRED
#pragma push_macro("FLASH_MASK_FUNCTION_NOT_PRESENT")
#undef FLASH_MASK_FUNCTION_NOT_PRESENT
#pragma push_macro("FLASH_MASK_MODE_AUTO")
#undef FLASH_MASK_MODE_AUTO
#pragma push_macro("FLASH_MASK_MODE_FLASH_FIRING")
#undef FLASH_MASK_MODE_FLASH_FIRING
#pragma push_macro("FLASH_MASK_MODE_FLASH_SUPPRESSION")
#undef FLASH_MASK_MODE_FLASH_SUPPRESSION
#pragma push_macro("FLASH_MASK_RED_EYE_REDUCTION")
#undef FLASH_MASK_RED_EYE_REDUCTION
#pragma push_macro("FLASH_MASK_RETURN_DETECTED")
#undef FLASH_MASK_RETURN_DETECTED
#pragma push_macro("FLASH_MASK_RETURN_NOT_DETECTED")
#undef FLASH_MASK_RETURN_NOT_DETECTED
#pragma push_macro("FLASH_STROBE_RETURN_LIGHT_DETECTED")
#undef FLASH_STROBE_RETURN_LIGHT_DETECTED
#pragma push_macro("FLASH_STROBE_RETURN_LIGHT_NOT_DETECTED")
#undef FLASH_STROBE_RETURN_LIGHT_NOT_DETECTED
#pragma push_macro("FOCAL_PLANE_RESOLUTION_UNIT_CENTIMETER")
#undef FOCAL_PLANE_RESOLUTION_UNIT_CENTIMETER
#pragma push_macro("FOCAL_PLANE_RESOLUTION_UNIT_INCH")
#undef FOCAL_PLANE_RESOLUTION_UNIT_INCH
#pragma push_macro("FOCAL_PLANE_RESOLUTION_UNIT_NONE")
#undef FOCAL_PLANE_RESOLUTION_UNIT_NONE
#pragma push_macro("GAIN_CONTROL_HIGH_GAIN_DOWN")
#undef GAIN_CONTROL_HIGH_GAIN_DOWN
#pragma push_macro("GAIN_CONTROL_HIGH_GAIN_UP")
#undef GAIN_CONTROL_HIGH_GAIN_UP
#pragma push_macro("GAIN_CONTROL_LOW_GAIN_DOWN")
#undef GAIN_CONTROL_LOW_GAIN_DOWN
#pragma push_macro("GAIN_CONTROL_LOW_GAIN_UP")
#undef GAIN_CONTROL_LOW_GAIN_UP
#pragma push_macro("GAIN_CONTROL_NONE")
#undef GAIN_CONTROL_NONE
#pragma push_macro("LIGHT_SOURCE_CLOUDY_WEATHER")
#undef LIGHT_SOURCE_CLOUDY_WEATHER
#pragma push_macro("LIGHT_SOURCE_COOL_WHITE_FLUORESCENT")
#undef LIGHT_SOURCE_COOL_WHITE_FLUORESCENT
#pragma push_macro("LIGHT_SOURCE_D50")
#undef LIGHT_SOURCE_D50
#pragma push_macro("LIGHT_SOURCE_D55")
#undef LIGHT_SOURCE_D55
#pragma push_macro("LIGHT_SOURCE_D65")
#undef LIGHT_SOURCE_D65
#pragma push_macro("LIGHT_SOURCE_D75")
#undef LIGHT_SOURCE_D75
#pragma push_macro("LIGHT_SOURCE_DAYLIGHT")
#undef LIGHT_SOURCE_DAYLIGHT
#pragma push_macro("LIGHT_SOURCE_DAYLIGHT_FLUORESCENT")
#undef LIGHT_SOURCE_DAYLIGHT_FLUORESCENT
#pragma push_macro("LIGHT_SOURCE_DAY_WHITE_FLUORESCENT")
#undef LIGHT_SOURCE_DAY_WHITE_FLUORESCENT
#pragma push_macro("LIGHT_SOURCE_FINE_WEATHER")
#undef LIGHT_SOURCE_FINE_WEATHER
#pragma push_macro("LIGHT_SOURCE_FLASH")
#undef LIGHT_SOURCE_FLASH
#pragma push_macro("LIGHT_SOURCE_FLUORESCENT")
#undef LIGHT_SOURCE_FLUORESCENT
#pragma push_macro("LIGHT_SOURCE_ISO_STUDIO_TUNGSTEN")
#undef LIGHT_SOURCE_ISO_STUDIO_TUNGSTEN
#pragma push_macro("LIGHT_SOURCE_OTHER")
#undef LIGHT_SOURCE_OTHER
#pragma push_macro("LIGHT_SOURCE_SHADE")
#undef LIGHT_SOURCE_SHADE
#pragma push_macro("LIGHT_SOURCE_STANDARD_LIGHT_A")
#undef LIGHT_SOURCE_STANDARD_LIGHT_A
#pragma push_macro("LIGHT_SOURCE_STANDARD_LIGHT_B")
#undef LIGHT_SOURCE_STANDARD_LIGHT_B
#pragma push_macro("LIGHT_SOURCE_STANDARD_LIGHT_C")
#undef LIGHT_SOURCE_STANDARD_LIGHT_C
#pragma push_macro("LIGHT_SOURCE_TUNGSTEN")
#undef LIGHT_SOURCE_TUNGSTEN
#pragma push_macro("LIGHT_SOURCE_UNKNOWN")
#undef LIGHT_SOURCE_UNKNOWN
#pragma push_macro("LIGHT_SOURCE_WHITE_FLUORESCENT")
#undef LIGHT_SOURCE_WHITE_FLUORESCENT
#pragma push_macro("METERING_MODE_AVERAGE")
#undef METERING_MODE_AVERAGE
#pragma push_macro("METERING_MODE_CENTER_WEIGHTED_AVERAGE")
#undef METERING_MODE_CENTER_WEIGHTED_AVERAGE
#pragma push_macro("METERING_MODE_MAX_RESERVED")
#undef METERING_MODE_MAX_RESERVED
#pragma push_macro("METERING_MODE_MIN_RESERVED")
#undef METERING_MODE_MIN_RESERVED
#pragma push_macro("METERING_MODE_MULTI_SPOT")
#undef METERING_MODE_MULTI_SPOT
#pragma push_macro("METERING_MODE_OTHER")
#undef METERING_MODE_OTHER
#pragma push_macro("METERING_MODE_PARTIAL")
#undef METERING_MODE_PARTIAL
#pragma push_macro("METERING_MODE_PATTERN")
#undef METERING_MODE_PATTERN
#pragma push_macro("METERING_MODE_SPOT")
#undef METERING_MODE_SPOT
#pragma push_macro("METERING_MODE_UNKNOWN")
#undef METERING_MODE_UNKNOWN
#pragma push_macro("SATURATION_HIGH")
#undef SATURATION_HIGH
#pragma push_macro("SATURATION_LOW")
#undef SATURATION_LOW
#pragma push_macro("SATURATION_NORMAL")
#undef SATURATION_NORMAL
#pragma push_macro("SCENE_CAPTURE_TYPE_LANDSCAPE")
#undef SCENE_CAPTURE_TYPE_LANDSCAPE
#pragma push_macro("SCENE_CAPTURE_TYPE_NIGHT_SCENE")
#undef SCENE_CAPTURE_TYPE_NIGHT_SCENE
#pragma push_macro("SCENE_CAPTURE_TYPE_PORTRAIT")
#undef SCENE_CAPTURE_TYPE_PORTRAIT
#pragma push_macro("SCENE_CAPTURE_TYPE_STANDARD")
#undef SCENE_CAPTURE_TYPE_STANDARD
#pragma push_macro("SCENE_TYPE_DSC")
#undef SCENE_TYPE_DSC
#pragma push_macro("SENSING_METHOD_COLOR_SEQUENTIAL_AREA_SENSOR")
#undef SENSING_METHOD_COLOR_SEQUENTIAL_AREA_SENSOR
#pragma push_macro("SENSING_METHOD_COLOR_SEQUENTIAL_LINEAR_SENSOR")
#undef SENSING_METHOD_COLOR_SEQUENTIAL_LINEAR_SENSOR
#pragma push_macro("SENSING_METHOD_NOT_DEFINED")
#undef SENSING_METHOD_NOT_DEFINED
#pragma push_macro("SENSING_METHOD_ONE_CHIP_COLOR_AREA_SENSOR")
#undef SENSING_METHOD_ONE_CHIP_COLOR_AREA_SENSOR
#pragma push_macro("SENSING_METHOD_THREE_CHIP_COLOR_AREA_SENSOR")
#undef SENSING_METHOD_THREE_CHIP_COLOR_AREA_SENSOR
#pragma push_macro("SENSING_METHOD_TRILINEAR_SENSOR")
#undef SENSING_METHOD_TRILINEAR_SENSOR
#pragma push_macro("SENSING_METHOD_TWO_CHIP_COLOR_AREA_SENSOR")
#undef SENSING_METHOD_TWO_CHIP_COLOR_AREA_SENSOR
#pragma push_macro("SHARPNESS_HARD")
#undef SHARPNESS_HARD
#pragma push_macro("SHARPNESS_NORMAL")
#undef SHARPNESS_NORMAL
#pragma push_macro("SHARPNESS_SOFT")
#undef SHARPNESS_SOFT
#pragma push_macro("SUBJECT_DISTANCE_RANGE_CLOSE_VIEW")
#undef SUBJECT_DISTANCE_RANGE_CLOSE_VIEW
#pragma push_macro("SUBJECT_DISTANCE_RANGE_DISTANT_VIEW")
#undef SUBJECT_DISTANCE_RANGE_DISTANT_VIEW
#pragma push_macro("SUBJECT_DISTANCE_RANGE_MACRO")
#undef SUBJECT_DISTANCE_RANGE_MACRO
#pragma push_macro("SUBJECT_DISTANCE_RANGE_UNKNOWN")
#undef SUBJECT_DISTANCE_RANGE_UNKNOWN
#pragma push_macro("TAG_APERTURE_VALUE")
#undef TAG_APERTURE_VALUE
#pragma push_macro("TAG_BRIGHTNESS_VALUE")
#undef TAG_BRIGHTNESS_VALUE
#pragma push_macro("TAG_CFA_PATTERN")
#undef TAG_CFA_PATTERN
#pragma push_macro("TAG_COLOR_SPACE")
#undef TAG_COLOR_SPACE
#pragma push_macro("TAG_COMPONENTS_CONFIGURATION")
#undef TAG_COMPONENTS_CONFIGURATION
#pragma push_macro("TAG_COMPRESSED_BITS_PER_PIXEL")
#undef TAG_COMPRESSED_BITS_PER_PIXEL
#pragma push_macro("TAG_CONTRAST")
#undef TAG_CONTRAST
#pragma push_macro("TAG_CUSTOM_RENDERED")
#undef TAG_CUSTOM_RENDERED
#pragma push_macro("TAG_DATE_TIME_DIGITIZED")
#undef TAG_DATE_TIME_DIGITIZED
#pragma push_macro("TAG_DATE_TIME_ORIGINAL")
#undef TAG_DATE_TIME_ORIGINAL
#pragma push_macro("TAG_DEVICE_SETTING_DESCRIPTION")
#undef TAG_DEVICE_SETTING_DESCRIPTION
#pragma push_macro("TAG_DIGITAL_ZOOM_RATIO")
#undef TAG_DIGITAL_ZOOM_RATIO
#pragma push_macro("TAG_EXIF_VERSION")
#undef TAG_EXIF_VERSION
#pragma push_macro("TAG_EXPOSURE_BIAS_VALUE")
#undef TAG_EXPOSURE_BIAS_VALUE
#pragma push_macro("TAG_EXPOSURE_INDEX")
#undef TAG_EXPOSURE_INDEX
#pragma push_macro("TAG_EXPOSURE_MODE")
#undef TAG_EXPOSURE_MODE
#pragma push_macro("TAG_EXPOSURE_PROGRAM")
#undef TAG_EXPOSURE_PROGRAM
#pragma push_macro("TAG_EXPOSURE_TIME")
#undef TAG_EXPOSURE_TIME
#pragma push_macro("TAG_FILE_SOURCE")
#undef TAG_FILE_SOURCE
#pragma push_macro("TAG_FLASH")
#undef TAG_FLASH
#pragma push_macro("TAG_FLASHPIX_VERSION")
#undef TAG_FLASHPIX_VERSION
#pragma push_macro("TAG_FLASH_ENERGY")
#undef TAG_FLASH_ENERGY
#pragma push_macro("TAG_FOCAL_LENGTH")
#undef TAG_FOCAL_LENGTH
#pragma push_macro("TAG_FOCAL_LENGTH_IN_35MM_FILM")
#undef TAG_FOCAL_LENGTH_IN_35MM_FILM
#pragma push_macro("TAG_FOCAL_PLANE_RESOLUTION_UNIT")
#undef TAG_FOCAL_PLANE_RESOLUTION_UNIT
#pragma push_macro("TAG_FOCAL_PLANE_X_RESOLUTION")
#undef TAG_FOCAL_PLANE_X_RESOLUTION
#pragma push_macro("TAG_FOCAL_PLANE_Y_RESOLUTION")
#undef TAG_FOCAL_PLANE_Y_RESOLUTION
#pragma push_macro("TAG_F_NUMBER")
#undef TAG_F_NUMBER
#pragma push_macro("TAG_GAIN_CONTROL")
#undef TAG_GAIN_CONTROL
#pragma push_macro("TAG_GPS_INFO_IFD_POINTER")
#undef TAG_GPS_INFO_IFD_POINTER
#pragma push_macro("TAG_IMAGE_UNIQUE_ID")
#undef TAG_IMAGE_UNIQUE_ID
#pragma push_macro("TAG_INTEROPERABILITY_IFD_POINTER")
#undef TAG_INTEROPERABILITY_IFD_POINTER
#pragma push_macro("TAG_ISO_SPEED_RATINGS")
#undef TAG_ISO_SPEED_RATINGS
#pragma push_macro("TAG_LIGHT_SOURCE")
#undef TAG_LIGHT_SOURCE
#pragma push_macro("TAG_MAKER_NOTE")
#undef TAG_MAKER_NOTE
#pragma push_macro("TAG_MARKER_NOTE")
#undef TAG_MARKER_NOTE
#pragma push_macro("TAG_MAX_APERTURE_VALUE")
#undef TAG_MAX_APERTURE_VALUE
#pragma push_macro("TAG_METERING_MODE")
#undef TAG_METERING_MODE
#pragma push_macro("TAG_OECF")
#undef TAG_OECF
#pragma push_macro("TAG_PIXEL_X_DIMENSION")
#undef TAG_PIXEL_X_DIMENSION
#pragma push_macro("TAG_PIXEL_Y_DIMENSION")
#undef TAG_PIXEL_Y_DIMENSION
#pragma push_macro("TAG_RELATED_SOUND_FILE")
#undef TAG_RELATED_SOUND_FILE
#pragma push_macro("TAG_SATURATION")
#undef TAG_SATURATION
#pragma push_macro("TAG_SCENE_CAPTURE_TYPE")
#undef TAG_SCENE_CAPTURE_TYPE
#pragma push_macro("TAG_SCENE_TYPE")
#undef TAG_SCENE_TYPE
#pragma push_macro("TAG_SENSING_METHOD")
#undef TAG_SENSING_METHOD
#pragma push_macro("TAG_SHARPNESS")
#undef TAG_SHARPNESS
#pragma push_macro("TAG_SHUTTER_SPEED_VALUE")
#undef TAG_SHUTTER_SPEED_VALUE
#pragma push_macro("TAG_SPATIAL_FREQUENCY_RESPONSE")
#undef TAG_SPATIAL_FREQUENCY_RESPONSE
#pragma push_macro("TAG_SPECTRAL_SENSITIVITY")
#undef TAG_SPECTRAL_SENSITIVITY
#pragma push_macro("TAG_SUBJECT_AREA")
#undef TAG_SUBJECT_AREA
#pragma push_macro("TAG_SUBJECT_DISTANCE")
#undef TAG_SUBJECT_DISTANCE
#pragma push_macro("TAG_SUBJECT_DISTANCE_RANGE")
#undef TAG_SUBJECT_DISTANCE_RANGE
#pragma push_macro("TAG_SUBJECT_LOCATION")
#undef TAG_SUBJECT_LOCATION
#pragma push_macro("TAG_SUB_SEC_TIME")
#undef TAG_SUB_SEC_TIME
#pragma push_macro("TAG_SUB_SEC_TIME_DIGITIZED")
#undef TAG_SUB_SEC_TIME_DIGITIZED
#pragma push_macro("TAG_SUB_SEC_TIME_ORIGINAL")
#undef TAG_SUB_SEC_TIME_ORIGINAL
#pragma push_macro("TAG_USER_COMMENT")
#undef TAG_USER_COMMENT
#pragma push_macro("TAG_WHITE_BALANCE")
#undef TAG_WHITE_BALANCE
#pragma push_macro("WHITE_BALANCE_AUTO")
#undef WHITE_BALANCE_AUTO
#pragma push_macro("WHITE_BALANCE_MANUAL")
#undef WHITE_BALANCE_MANUAL

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

class $import ExifTIFFTagSet : public ::javax::imageio::plugins::tiff::TIFFTagSet {
	$class(ExifTIFFTagSet, 0, ::javax::imageio::plugins::tiff::TIFFTagSet)
public:
	ExifTIFFTagSet();
	void init$();
	static ::javax::imageio::plugins::tiff::ExifTIFFTagSet* getInstance();
	static void initTags();
	static ::javax::imageio::plugins::tiff::ExifTIFFTagSet* theInstance;
	static const int32_t TAG_GPS_INFO_IFD_POINTER = 0x00008825;
	static const int32_t TAG_INTEROPERABILITY_IFD_POINTER = 0x0000A005;
	static const int32_t TAG_EXIF_VERSION = 0x00009000;
	static $String* EXIF_VERSION_2_1;
	static $String* EXIF_VERSION_2_2;
	static const int32_t TAG_FLASHPIX_VERSION = 0x0000A000;
	static const int32_t TAG_COLOR_SPACE = 0x0000A001;
	static const int32_t COLOR_SPACE_SRGB = 1;
	static const int32_t COLOR_SPACE_UNCALIBRATED = 0x0000FFFF;
	static const int32_t TAG_COMPONENTS_CONFIGURATION = 0x00009101;
	static const int32_t COMPONENTS_CONFIGURATION_DOES_NOT_EXIST = 0;
	static const int32_t COMPONENTS_CONFIGURATION_Y = 1;
	static const int32_t COMPONENTS_CONFIGURATION_CB = 2;
	static const int32_t COMPONENTS_CONFIGURATION_CR = 3;
	static const int32_t COMPONENTS_CONFIGURATION_R = 4;
	static const int32_t COMPONENTS_CONFIGURATION_G = 5;
	static const int32_t COMPONENTS_CONFIGURATION_B = 6;
	static const int32_t TAG_COMPRESSED_BITS_PER_PIXEL = 0x00009102;
	static const int32_t TAG_PIXEL_X_DIMENSION = 0x0000A002;
	static const int32_t TAG_PIXEL_Y_DIMENSION = 0x0000A003;
	static const int32_t TAG_MAKER_NOTE = 0x0000927C;
	static const int32_t TAG_MARKER_NOTE = TAG_MAKER_NOTE;
	static const int32_t TAG_USER_COMMENT = 0x00009286;
	static const int32_t TAG_RELATED_SOUND_FILE = 0x0000A004;
	static const int32_t TAG_DATE_TIME_ORIGINAL = 0x00009003;
	static const int32_t TAG_DATE_TIME_DIGITIZED = 0x00009004;
	static const int32_t TAG_SUB_SEC_TIME = 0x00009290;
	static const int32_t TAG_SUB_SEC_TIME_ORIGINAL = 0x00009291;
	static const int32_t TAG_SUB_SEC_TIME_DIGITIZED = 0x00009292;
	static const int32_t TAG_EXPOSURE_TIME = 0x0000829A;
	static const int32_t TAG_F_NUMBER = 0x0000829D;
	static const int32_t TAG_EXPOSURE_PROGRAM = 0x00008822;
	static const int32_t EXPOSURE_PROGRAM_NOT_DEFINED = 0;
	static const int32_t EXPOSURE_PROGRAM_MANUAL = 1;
	static const int32_t EXPOSURE_PROGRAM_NORMAL_PROGRAM = 2;
	static const int32_t EXPOSURE_PROGRAM_APERTURE_PRIORITY = 3;
	static const int32_t EXPOSURE_PROGRAM_SHUTTER_PRIORITY = 4;
	static const int32_t EXPOSURE_PROGRAM_CREATIVE_PROGRAM = 5;
	static const int32_t EXPOSURE_PROGRAM_ACTION_PROGRAM = 6;
	static const int32_t EXPOSURE_PROGRAM_PORTRAIT_MODE = 7;
	static const int32_t EXPOSURE_PROGRAM_LANDSCAPE_MODE = 8;
	static const int32_t EXPOSURE_PROGRAM_MAX_RESERVED = 255;
	static const int32_t TAG_SPECTRAL_SENSITIVITY = 0x00008824;
	static const int32_t TAG_ISO_SPEED_RATINGS = 0x00008827;
	static const int32_t TAG_OECF = 0x00008828;
	static const int32_t TAG_SHUTTER_SPEED_VALUE = 0x00009201;
	static const int32_t TAG_APERTURE_VALUE = 0x00009202;
	static const int32_t TAG_BRIGHTNESS_VALUE = 0x00009203;
	static const int32_t TAG_EXPOSURE_BIAS_VALUE = 0x00009204;
	static const int32_t TAG_MAX_APERTURE_VALUE = 0x00009205;
	static const int32_t TAG_SUBJECT_DISTANCE = 0x00009206;
	static const int32_t TAG_METERING_MODE = 0x00009207;
	static const int32_t METERING_MODE_UNKNOWN = 0;
	static const int32_t METERING_MODE_AVERAGE = 1;
	static const int32_t METERING_MODE_CENTER_WEIGHTED_AVERAGE = 2;
	static const int32_t METERING_MODE_SPOT = 3;
	static const int32_t METERING_MODE_MULTI_SPOT = 4;
	static const int32_t METERING_MODE_PATTERN = 5;
	static const int32_t METERING_MODE_PARTIAL = 6;
	static const int32_t METERING_MODE_MIN_RESERVED = 7;
	static const int32_t METERING_MODE_MAX_RESERVED = 254;
	static const int32_t METERING_MODE_OTHER = 255;
	static const int32_t TAG_LIGHT_SOURCE = 0x00009208;
	static const int32_t LIGHT_SOURCE_UNKNOWN = 0;
	static const int32_t LIGHT_SOURCE_DAYLIGHT = 1;
	static const int32_t LIGHT_SOURCE_FLUORESCENT = 2;
	static const int32_t LIGHT_SOURCE_TUNGSTEN = 3;
	static const int32_t LIGHT_SOURCE_FLASH = 4;
	static const int32_t LIGHT_SOURCE_FINE_WEATHER = 9;
	static const int32_t LIGHT_SOURCE_CLOUDY_WEATHER = 10;
	static const int32_t LIGHT_SOURCE_SHADE = 11;
	static const int32_t LIGHT_SOURCE_DAYLIGHT_FLUORESCENT = 12;
	static const int32_t LIGHT_SOURCE_DAY_WHITE_FLUORESCENT = 13;
	static const int32_t LIGHT_SOURCE_COOL_WHITE_FLUORESCENT = 14;
	static const int32_t LIGHT_SOURCE_WHITE_FLUORESCENT = 15;
	static const int32_t LIGHT_SOURCE_STANDARD_LIGHT_A = 17;
	static const int32_t LIGHT_SOURCE_STANDARD_LIGHT_B = 18;
	static const int32_t LIGHT_SOURCE_STANDARD_LIGHT_C = 19;
	static const int32_t LIGHT_SOURCE_D55 = 20;
	static const int32_t LIGHT_SOURCE_D65 = 21;
	static const int32_t LIGHT_SOURCE_D75 = 22;
	static const int32_t LIGHT_SOURCE_D50 = 23;
	static const int32_t LIGHT_SOURCE_ISO_STUDIO_TUNGSTEN = 24;
	static const int32_t LIGHT_SOURCE_OTHER = 255;
	static const int32_t TAG_FLASH = 0x00009209;
	static const int32_t FLASH_DID_NOT_FIRE = 0;
	static const int32_t FLASH_FIRED = 1;
	static const int32_t FLASH_STROBE_RETURN_LIGHT_NOT_DETECTED = 5;
	static const int32_t FLASH_STROBE_RETURN_LIGHT_DETECTED = 7;
	static const int32_t FLASH_MASK_FIRED = 1;
	static const int32_t FLASH_MASK_RETURN_NOT_DETECTED = 4;
	static const int32_t FLASH_MASK_RETURN_DETECTED = 6;
	static const int32_t FLASH_MASK_MODE_FLASH_FIRING = 8;
	static const int32_t FLASH_MASK_MODE_FLASH_SUPPRESSION = 16;
	static const int32_t FLASH_MASK_MODE_AUTO = 24;
	static const int32_t FLASH_MASK_FUNCTION_NOT_PRESENT = 32;
	static const int32_t FLASH_MASK_RED_EYE_REDUCTION = 64;
	static const int32_t TAG_FOCAL_LENGTH = 0x0000920A;
	static const int32_t TAG_SUBJECT_AREA = 0x00009214;
	static const int32_t TAG_FLASH_ENERGY = 0x0000A20B;
	static const int32_t TAG_SPATIAL_FREQUENCY_RESPONSE = 0x0000A20C;
	static const int32_t TAG_FOCAL_PLANE_X_RESOLUTION = 0x0000A20E;
	static const int32_t TAG_FOCAL_PLANE_Y_RESOLUTION = 0x0000A20F;
	static const int32_t TAG_FOCAL_PLANE_RESOLUTION_UNIT = 0x0000A210;
	static const int32_t FOCAL_PLANE_RESOLUTION_UNIT_NONE = 1;
	static const int32_t FOCAL_PLANE_RESOLUTION_UNIT_INCH = 2;
	static const int32_t FOCAL_PLANE_RESOLUTION_UNIT_CENTIMETER = 3;
	static const int32_t TAG_SUBJECT_LOCATION = 0x0000A214;
	static const int32_t TAG_EXPOSURE_INDEX = 0x0000A215;
	static const int32_t TAG_SENSING_METHOD = 0x0000A217;
	static const int32_t SENSING_METHOD_NOT_DEFINED = 1;
	static const int32_t SENSING_METHOD_ONE_CHIP_COLOR_AREA_SENSOR = 2;
	static const int32_t SENSING_METHOD_TWO_CHIP_COLOR_AREA_SENSOR = 3;
	static const int32_t SENSING_METHOD_THREE_CHIP_COLOR_AREA_SENSOR = 4;
	static const int32_t SENSING_METHOD_COLOR_SEQUENTIAL_AREA_SENSOR = 5;
	static const int32_t SENSING_METHOD_TRILINEAR_SENSOR = 7;
	static const int32_t SENSING_METHOD_COLOR_SEQUENTIAL_LINEAR_SENSOR = 8;
	static const int32_t TAG_FILE_SOURCE = 0x0000A300;
	static const int32_t FILE_SOURCE_DSC = 3;
	static const int32_t TAG_SCENE_TYPE = 0x0000A301;
	static const int32_t SCENE_TYPE_DSC = 1;
	static const int32_t TAG_CFA_PATTERN = 0x0000A302;
	static const int32_t TAG_CUSTOM_RENDERED = 0x0000A401;
	static const int32_t CUSTOM_RENDERED_NORMAL = 0;
	static const int32_t CUSTOM_RENDERED_CUSTOM = 1;
	static const int32_t TAG_EXPOSURE_MODE = 0x0000A402;
	static const int32_t EXPOSURE_MODE_AUTO_EXPOSURE = 0;
	static const int32_t EXPOSURE_MODE_MANUAL_EXPOSURE = 1;
	static const int32_t EXPOSURE_MODE_AUTO_BRACKET = 2;
	static const int32_t TAG_WHITE_BALANCE = 0x0000A403;
	static const int32_t WHITE_BALANCE_AUTO = 0;
	static const int32_t WHITE_BALANCE_MANUAL = 1;
	static const int32_t TAG_DIGITAL_ZOOM_RATIO = 0x0000A404;
	static const int32_t TAG_FOCAL_LENGTH_IN_35MM_FILM = 0x0000A405;
	static const int32_t TAG_SCENE_CAPTURE_TYPE = 0x0000A406;
	static const int32_t SCENE_CAPTURE_TYPE_STANDARD = 0;
	static const int32_t SCENE_CAPTURE_TYPE_LANDSCAPE = 1;
	static const int32_t SCENE_CAPTURE_TYPE_PORTRAIT = 2;
	static const int32_t SCENE_CAPTURE_TYPE_NIGHT_SCENE = 3;
	static const int32_t TAG_GAIN_CONTROL = 0x0000A407;
	static const int32_t GAIN_CONTROL_NONE = 0;
	static const int32_t GAIN_CONTROL_LOW_GAIN_UP = 1;
	static const int32_t GAIN_CONTROL_HIGH_GAIN_UP = 2;
	static const int32_t GAIN_CONTROL_LOW_GAIN_DOWN = 3;
	static const int32_t GAIN_CONTROL_HIGH_GAIN_DOWN = 4;
	static const int32_t TAG_CONTRAST = 0x0000A408;
	static const int32_t CONTRAST_NORMAL = 0;
	static const int32_t CONTRAST_SOFT = 1;
	static const int32_t CONTRAST_HARD = 2;
	static const int32_t TAG_SATURATION = 0x0000A409;
	static const int32_t SATURATION_NORMAL = 0;
	static const int32_t SATURATION_LOW = 1;
	static const int32_t SATURATION_HIGH = 2;
	static const int32_t TAG_SHARPNESS = 0x0000A40A;
	static const int32_t SHARPNESS_NORMAL = 0;
	static const int32_t SHARPNESS_SOFT = 1;
	static const int32_t SHARPNESS_HARD = 2;
	static const int32_t TAG_DEVICE_SETTING_DESCRIPTION = 0x0000A40B;
	static const int32_t TAG_SUBJECT_DISTANCE_RANGE = 0x0000A40C;
	static const int32_t SUBJECT_DISTANCE_RANGE_UNKNOWN = 0;
	static const int32_t SUBJECT_DISTANCE_RANGE_MACRO = 1;
	static const int32_t SUBJECT_DISTANCE_RANGE_CLOSE_VIEW = 2;
	static const int32_t SUBJECT_DISTANCE_RANGE_DISTANT_VIEW = 3;
	static const int32_t TAG_IMAGE_UNIQUE_ID = 0x0000A420;
	static ::java::util::List* tags;
};

			} // tiff
		} // plugins
	} // imageio
} // javax

#pragma pop_macro("COLOR_SPACE_SRGB")
#pragma pop_macro("COLOR_SPACE_UNCALIBRATED")
#pragma pop_macro("COMPONENTS_CONFIGURATION_B")
#pragma pop_macro("COMPONENTS_CONFIGURATION_CB")
#pragma pop_macro("COMPONENTS_CONFIGURATION_CR")
#pragma pop_macro("COMPONENTS_CONFIGURATION_DOES_NOT_EXIST")
#pragma pop_macro("COMPONENTS_CONFIGURATION_G")
#pragma pop_macro("COMPONENTS_CONFIGURATION_R")
#pragma pop_macro("COMPONENTS_CONFIGURATION_Y")
#pragma pop_macro("CONTRAST_HARD")
#pragma pop_macro("CONTRAST_NORMAL")
#pragma pop_macro("CONTRAST_SOFT")
#pragma pop_macro("CUSTOM_RENDERED_CUSTOM")
#pragma pop_macro("CUSTOM_RENDERED_NORMAL")
#pragma pop_macro("EXIF_VERSION_2_1")
#pragma pop_macro("EXIF_VERSION_2_2")
#pragma pop_macro("EXPOSURE_MODE_AUTO_BRACKET")
#pragma pop_macro("EXPOSURE_MODE_AUTO_EXPOSURE")
#pragma pop_macro("EXPOSURE_MODE_MANUAL_EXPOSURE")
#pragma pop_macro("EXPOSURE_PROGRAM_ACTION_PROGRAM")
#pragma pop_macro("EXPOSURE_PROGRAM_APERTURE_PRIORITY")
#pragma pop_macro("EXPOSURE_PROGRAM_CREATIVE_PROGRAM")
#pragma pop_macro("EXPOSURE_PROGRAM_LANDSCAPE_MODE")
#pragma pop_macro("EXPOSURE_PROGRAM_MANUAL")
#pragma pop_macro("EXPOSURE_PROGRAM_MAX_RESERVED")
#pragma pop_macro("EXPOSURE_PROGRAM_NORMAL_PROGRAM")
#pragma pop_macro("EXPOSURE_PROGRAM_NOT_DEFINED")
#pragma pop_macro("EXPOSURE_PROGRAM_PORTRAIT_MODE")
#pragma pop_macro("EXPOSURE_PROGRAM_SHUTTER_PRIORITY")
#pragma pop_macro("FILE_SOURCE_DSC")
#pragma pop_macro("FLASH_DID_NOT_FIRE")
#pragma pop_macro("FLASH_FIRED")
#pragma pop_macro("FLASH_MASK_FIRED")
#pragma pop_macro("FLASH_MASK_FUNCTION_NOT_PRESENT")
#pragma pop_macro("FLASH_MASK_MODE_AUTO")
#pragma pop_macro("FLASH_MASK_MODE_FLASH_FIRING")
#pragma pop_macro("FLASH_MASK_MODE_FLASH_SUPPRESSION")
#pragma pop_macro("FLASH_MASK_RED_EYE_REDUCTION")
#pragma pop_macro("FLASH_MASK_RETURN_DETECTED")
#pragma pop_macro("FLASH_MASK_RETURN_NOT_DETECTED")
#pragma pop_macro("FLASH_STROBE_RETURN_LIGHT_DETECTED")
#pragma pop_macro("FLASH_STROBE_RETURN_LIGHT_NOT_DETECTED")
#pragma pop_macro("FOCAL_PLANE_RESOLUTION_UNIT_CENTIMETER")
#pragma pop_macro("FOCAL_PLANE_RESOLUTION_UNIT_INCH")
#pragma pop_macro("FOCAL_PLANE_RESOLUTION_UNIT_NONE")
#pragma pop_macro("GAIN_CONTROL_HIGH_GAIN_DOWN")
#pragma pop_macro("GAIN_CONTROL_HIGH_GAIN_UP")
#pragma pop_macro("GAIN_CONTROL_LOW_GAIN_DOWN")
#pragma pop_macro("GAIN_CONTROL_LOW_GAIN_UP")
#pragma pop_macro("GAIN_CONTROL_NONE")
#pragma pop_macro("LIGHT_SOURCE_CLOUDY_WEATHER")
#pragma pop_macro("LIGHT_SOURCE_COOL_WHITE_FLUORESCENT")
#pragma pop_macro("LIGHT_SOURCE_D50")
#pragma pop_macro("LIGHT_SOURCE_D55")
#pragma pop_macro("LIGHT_SOURCE_D65")
#pragma pop_macro("LIGHT_SOURCE_D75")
#pragma pop_macro("LIGHT_SOURCE_DAYLIGHT")
#pragma pop_macro("LIGHT_SOURCE_DAYLIGHT_FLUORESCENT")
#pragma pop_macro("LIGHT_SOURCE_DAY_WHITE_FLUORESCENT")
#pragma pop_macro("LIGHT_SOURCE_FINE_WEATHER")
#pragma pop_macro("LIGHT_SOURCE_FLASH")
#pragma pop_macro("LIGHT_SOURCE_FLUORESCENT")
#pragma pop_macro("LIGHT_SOURCE_ISO_STUDIO_TUNGSTEN")
#pragma pop_macro("LIGHT_SOURCE_OTHER")
#pragma pop_macro("LIGHT_SOURCE_SHADE")
#pragma pop_macro("LIGHT_SOURCE_STANDARD_LIGHT_A")
#pragma pop_macro("LIGHT_SOURCE_STANDARD_LIGHT_B")
#pragma pop_macro("LIGHT_SOURCE_STANDARD_LIGHT_C")
#pragma pop_macro("LIGHT_SOURCE_TUNGSTEN")
#pragma pop_macro("LIGHT_SOURCE_UNKNOWN")
#pragma pop_macro("LIGHT_SOURCE_WHITE_FLUORESCENT")
#pragma pop_macro("METERING_MODE_AVERAGE")
#pragma pop_macro("METERING_MODE_CENTER_WEIGHTED_AVERAGE")
#pragma pop_macro("METERING_MODE_MAX_RESERVED")
#pragma pop_macro("METERING_MODE_MIN_RESERVED")
#pragma pop_macro("METERING_MODE_MULTI_SPOT")
#pragma pop_macro("METERING_MODE_OTHER")
#pragma pop_macro("METERING_MODE_PARTIAL")
#pragma pop_macro("METERING_MODE_PATTERN")
#pragma pop_macro("METERING_MODE_SPOT")
#pragma pop_macro("METERING_MODE_UNKNOWN")
#pragma pop_macro("SATURATION_HIGH")
#pragma pop_macro("SATURATION_LOW")
#pragma pop_macro("SATURATION_NORMAL")
#pragma pop_macro("SCENE_CAPTURE_TYPE_LANDSCAPE")
#pragma pop_macro("SCENE_CAPTURE_TYPE_NIGHT_SCENE")
#pragma pop_macro("SCENE_CAPTURE_TYPE_PORTRAIT")
#pragma pop_macro("SCENE_CAPTURE_TYPE_STANDARD")
#pragma pop_macro("SCENE_TYPE_DSC")
#pragma pop_macro("SENSING_METHOD_COLOR_SEQUENTIAL_AREA_SENSOR")
#pragma pop_macro("SENSING_METHOD_COLOR_SEQUENTIAL_LINEAR_SENSOR")
#pragma pop_macro("SENSING_METHOD_NOT_DEFINED")
#pragma pop_macro("SENSING_METHOD_ONE_CHIP_COLOR_AREA_SENSOR")
#pragma pop_macro("SENSING_METHOD_THREE_CHIP_COLOR_AREA_SENSOR")
#pragma pop_macro("SENSING_METHOD_TRILINEAR_SENSOR")
#pragma pop_macro("SENSING_METHOD_TWO_CHIP_COLOR_AREA_SENSOR")
#pragma pop_macro("SHARPNESS_HARD")
#pragma pop_macro("SHARPNESS_NORMAL")
#pragma pop_macro("SHARPNESS_SOFT")
#pragma pop_macro("SUBJECT_DISTANCE_RANGE_CLOSE_VIEW")
#pragma pop_macro("SUBJECT_DISTANCE_RANGE_DISTANT_VIEW")
#pragma pop_macro("SUBJECT_DISTANCE_RANGE_MACRO")
#pragma pop_macro("SUBJECT_DISTANCE_RANGE_UNKNOWN")
#pragma pop_macro("TAG_APERTURE_VALUE")
#pragma pop_macro("TAG_BRIGHTNESS_VALUE")
#pragma pop_macro("TAG_CFA_PATTERN")
#pragma pop_macro("TAG_COLOR_SPACE")
#pragma pop_macro("TAG_COMPONENTS_CONFIGURATION")
#pragma pop_macro("TAG_COMPRESSED_BITS_PER_PIXEL")
#pragma pop_macro("TAG_CONTRAST")
#pragma pop_macro("TAG_CUSTOM_RENDERED")
#pragma pop_macro("TAG_DATE_TIME_DIGITIZED")
#pragma pop_macro("TAG_DATE_TIME_ORIGINAL")
#pragma pop_macro("TAG_DEVICE_SETTING_DESCRIPTION")
#pragma pop_macro("TAG_DIGITAL_ZOOM_RATIO")
#pragma pop_macro("TAG_EXIF_VERSION")
#pragma pop_macro("TAG_EXPOSURE_BIAS_VALUE")
#pragma pop_macro("TAG_EXPOSURE_INDEX")
#pragma pop_macro("TAG_EXPOSURE_MODE")
#pragma pop_macro("TAG_EXPOSURE_PROGRAM")
#pragma pop_macro("TAG_EXPOSURE_TIME")
#pragma pop_macro("TAG_FILE_SOURCE")
#pragma pop_macro("TAG_FLASH")
#pragma pop_macro("TAG_FLASHPIX_VERSION")
#pragma pop_macro("TAG_FLASH_ENERGY")
#pragma pop_macro("TAG_FOCAL_LENGTH")
#pragma pop_macro("TAG_FOCAL_LENGTH_IN_35MM_FILM")
#pragma pop_macro("TAG_FOCAL_PLANE_RESOLUTION_UNIT")
#pragma pop_macro("TAG_FOCAL_PLANE_X_RESOLUTION")
#pragma pop_macro("TAG_FOCAL_PLANE_Y_RESOLUTION")
#pragma pop_macro("TAG_F_NUMBER")
#pragma pop_macro("TAG_GAIN_CONTROL")
#pragma pop_macro("TAG_GPS_INFO_IFD_POINTER")
#pragma pop_macro("TAG_IMAGE_UNIQUE_ID")
#pragma pop_macro("TAG_INTEROPERABILITY_IFD_POINTER")
#pragma pop_macro("TAG_ISO_SPEED_RATINGS")
#pragma pop_macro("TAG_LIGHT_SOURCE")
#pragma pop_macro("TAG_MAKER_NOTE")
#pragma pop_macro("TAG_MARKER_NOTE")
#pragma pop_macro("TAG_MAX_APERTURE_VALUE")
#pragma pop_macro("TAG_METERING_MODE")
#pragma pop_macro("TAG_OECF")
#pragma pop_macro("TAG_PIXEL_X_DIMENSION")
#pragma pop_macro("TAG_PIXEL_Y_DIMENSION")
#pragma pop_macro("TAG_RELATED_SOUND_FILE")
#pragma pop_macro("TAG_SATURATION")
#pragma pop_macro("TAG_SCENE_CAPTURE_TYPE")
#pragma pop_macro("TAG_SCENE_TYPE")
#pragma pop_macro("TAG_SENSING_METHOD")
#pragma pop_macro("TAG_SHARPNESS")
#pragma pop_macro("TAG_SHUTTER_SPEED_VALUE")
#pragma pop_macro("TAG_SPATIAL_FREQUENCY_RESPONSE")
#pragma pop_macro("TAG_SPECTRAL_SENSITIVITY")
#pragma pop_macro("TAG_SUBJECT_AREA")
#pragma pop_macro("TAG_SUBJECT_DISTANCE")
#pragma pop_macro("TAG_SUBJECT_DISTANCE_RANGE")
#pragma pop_macro("TAG_SUBJECT_LOCATION")
#pragma pop_macro("TAG_SUB_SEC_TIME")
#pragma pop_macro("TAG_SUB_SEC_TIME_DIGITIZED")
#pragma pop_macro("TAG_SUB_SEC_TIME_ORIGINAL")
#pragma pop_macro("TAG_USER_COMMENT")
#pragma pop_macro("TAG_WHITE_BALANCE")
#pragma pop_macro("WHITE_BALANCE_AUTO")
#pragma pop_macro("WHITE_BALANCE_MANUAL")

#endif // _javax_imageio_plugins_tiff_ExifTIFFTagSet_h_