#include <javax/imageio/plugins/tiff/ExifTIFFTagSet.h>

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
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ApertureValue.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$BrightnessValue.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$CFAPattern.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ColorSpace.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ComponentsConfiguration.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$CompressedBitsPerPixel.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$Contrast.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$CustomRendered.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$DateTimeDigitized.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$DateTimeOriginal.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$DeviceSettingDescription.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$DigitalZoomRatio.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExifVersion.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExposureBiasValue.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExposureIndex.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExposureMode.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExposureProgram.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ExposureTime.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FNumber.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FileSource.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$Flash.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FlashEnergy.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FlashPixVersion.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FocalLength.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FocalLengthIn35mmFilm.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FocalPlaneResolutionUnit.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FocalPlaneXResolution.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$FocalPlaneYResolution.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$GainControl.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ISOSpeedRatings.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ImageUniqueID.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$InteroperabilityIFD.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$LightSource.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$MakerNote.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$MaxApertureValue.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$MeteringMode.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$OECF.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$PixelXDimension.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$PixelYDimension.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$RelatedSoundFile.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$Saturation.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SceneCaptureType.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SceneType.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SensingMethod.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$Sharpness.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$ShutterSpeedValue.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SpatialFrequencyResponse.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SpectralSensitivity.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubSecTime.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubSecTimeDigitized.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubSecTimeOriginal.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubjectArea.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubjectDistance.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubjectDistanceRange.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$SubjectLocation.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$UserComment.h>
#include <javax/imageio/plugins/tiff/ExifTIFFTagSet$WhiteBalance.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

#undef COLOR_SPACE_SRGB
#undef COLOR_SPACE_UNCALIBRATED
#undef COMPONENTS_CONFIGURATION_B
#undef COMPONENTS_CONFIGURATION_CB
#undef COMPONENTS_CONFIGURATION_CR
#undef COMPONENTS_CONFIGURATION_DOES_NOT_EXIST
#undef COMPONENTS_CONFIGURATION_G
#undef COMPONENTS_CONFIGURATION_R
#undef COMPONENTS_CONFIGURATION_Y
#undef CONTRAST_HARD
#undef CONTRAST_NORMAL
#undef CONTRAST_SOFT
#undef CUSTOM_RENDERED_CUSTOM
#undef CUSTOM_RENDERED_NORMAL
#undef EXIF_VERSION_2_1
#undef EXIF_VERSION_2_2
#undef EXPOSURE_MODE_AUTO_BRACKET
#undef EXPOSURE_MODE_AUTO_EXPOSURE
#undef EXPOSURE_MODE_MANUAL_EXPOSURE
#undef EXPOSURE_PROGRAM_ACTION_PROGRAM
#undef EXPOSURE_PROGRAM_APERTURE_PRIORITY
#undef EXPOSURE_PROGRAM_CREATIVE_PROGRAM
#undef EXPOSURE_PROGRAM_LANDSCAPE_MODE
#undef EXPOSURE_PROGRAM_MANUAL
#undef EXPOSURE_PROGRAM_MAX_RESERVED
#undef EXPOSURE_PROGRAM_NORMAL_PROGRAM
#undef EXPOSURE_PROGRAM_NOT_DEFINED
#undef EXPOSURE_PROGRAM_PORTRAIT_MODE
#undef EXPOSURE_PROGRAM_SHUTTER_PRIORITY
#undef FILE_SOURCE_DSC
#undef FLASH_DID_NOT_FIRE
#undef FLASH_FIRED
#undef FLASH_MASK_FIRED
#undef FLASH_MASK_FUNCTION_NOT_PRESENT
#undef FLASH_MASK_MODE_AUTO
#undef FLASH_MASK_MODE_FLASH_FIRING
#undef FLASH_MASK_MODE_FLASH_SUPPRESSION
#undef FLASH_MASK_RED_EYE_REDUCTION
#undef FLASH_MASK_RETURN_DETECTED
#undef FLASH_MASK_RETURN_NOT_DETECTED
#undef FLASH_STROBE_RETURN_LIGHT_DETECTED
#undef FLASH_STROBE_RETURN_LIGHT_NOT_DETECTED
#undef FOCAL_PLANE_RESOLUTION_UNIT_CENTIMETER
#undef FOCAL_PLANE_RESOLUTION_UNIT_INCH
#undef FOCAL_PLANE_RESOLUTION_UNIT_NONE
#undef GAIN_CONTROL_HIGH_GAIN_DOWN
#undef GAIN_CONTROL_HIGH_GAIN_UP
#undef GAIN_CONTROL_LOW_GAIN_DOWN
#undef GAIN_CONTROL_LOW_GAIN_UP
#undef GAIN_CONTROL_NONE
#undef LIGHT_SOURCE_CLOUDY_WEATHER
#undef LIGHT_SOURCE_COOL_WHITE_FLUORESCENT
#undef LIGHT_SOURCE_D50
#undef LIGHT_SOURCE_D55
#undef LIGHT_SOURCE_D65
#undef LIGHT_SOURCE_D75
#undef LIGHT_SOURCE_DAYLIGHT
#undef LIGHT_SOURCE_DAYLIGHT_FLUORESCENT
#undef LIGHT_SOURCE_DAY_WHITE_FLUORESCENT
#undef LIGHT_SOURCE_FINE_WEATHER
#undef LIGHT_SOURCE_FLASH
#undef LIGHT_SOURCE_FLUORESCENT
#undef LIGHT_SOURCE_ISO_STUDIO_TUNGSTEN
#undef LIGHT_SOURCE_OTHER
#undef LIGHT_SOURCE_SHADE
#undef LIGHT_SOURCE_STANDARD_LIGHT_A
#undef LIGHT_SOURCE_STANDARD_LIGHT_B
#undef LIGHT_SOURCE_STANDARD_LIGHT_C
#undef LIGHT_SOURCE_TUNGSTEN
#undef LIGHT_SOURCE_UNKNOWN
#undef LIGHT_SOURCE_WHITE_FLUORESCENT
#undef METERING_MODE_AVERAGE
#undef METERING_MODE_CENTER_WEIGHTED_AVERAGE
#undef METERING_MODE_MAX_RESERVED
#undef METERING_MODE_MIN_RESERVED
#undef METERING_MODE_MULTI_SPOT
#undef METERING_MODE_OTHER
#undef METERING_MODE_PARTIAL
#undef METERING_MODE_PATTERN
#undef METERING_MODE_SPOT
#undef METERING_MODE_UNKNOWN
#undef SATURATION_HIGH
#undef SATURATION_LOW
#undef SATURATION_NORMAL
#undef SCENE_CAPTURE_TYPE_LANDSCAPE
#undef SCENE_CAPTURE_TYPE_NIGHT_SCENE
#undef SCENE_CAPTURE_TYPE_PORTRAIT
#undef SCENE_CAPTURE_TYPE_STANDARD
#undef SCENE_TYPE_DSC
#undef SENSING_METHOD_COLOR_SEQUENTIAL_AREA_SENSOR
#undef SENSING_METHOD_COLOR_SEQUENTIAL_LINEAR_SENSOR
#undef SENSING_METHOD_NOT_DEFINED
#undef SENSING_METHOD_ONE_CHIP_COLOR_AREA_SENSOR
#undef SENSING_METHOD_THREE_CHIP_COLOR_AREA_SENSOR
#undef SENSING_METHOD_TRILINEAR_SENSOR
#undef SENSING_METHOD_TWO_CHIP_COLOR_AREA_SENSOR
#undef SHARPNESS_HARD
#undef SHARPNESS_NORMAL
#undef SHARPNESS_SOFT
#undef SUBJECT_DISTANCE_RANGE_CLOSE_VIEW
#undef SUBJECT_DISTANCE_RANGE_DISTANT_VIEW
#undef SUBJECT_DISTANCE_RANGE_MACRO
#undef SUBJECT_DISTANCE_RANGE_UNKNOWN
#undef TAG_APERTURE_VALUE
#undef TAG_BRIGHTNESS_VALUE
#undef TAG_CFA_PATTERN
#undef TAG_COLOR_SPACE
#undef TAG_COMPONENTS_CONFIGURATION
#undef TAG_COMPRESSED_BITS_PER_PIXEL
#undef TAG_CONTRAST
#undef TAG_CUSTOM_RENDERED
#undef TAG_DATE_TIME_DIGITIZED
#undef TAG_DATE_TIME_ORIGINAL
#undef TAG_DEVICE_SETTING_DESCRIPTION
#undef TAG_DIGITAL_ZOOM_RATIO
#undef TAG_EXIF_VERSION
#undef TAG_EXPOSURE_BIAS_VALUE
#undef TAG_EXPOSURE_INDEX
#undef TAG_EXPOSURE_MODE
#undef TAG_EXPOSURE_PROGRAM
#undef TAG_EXPOSURE_TIME
#undef TAG_FILE_SOURCE
#undef TAG_FLASH
#undef TAG_FLASHPIX_VERSION
#undef TAG_FLASH_ENERGY
#undef TAG_FOCAL_LENGTH
#undef TAG_FOCAL_LENGTH_IN_35MM_FILM
#undef TAG_FOCAL_PLANE_RESOLUTION_UNIT
#undef TAG_FOCAL_PLANE_X_RESOLUTION
#undef TAG_FOCAL_PLANE_Y_RESOLUTION
#undef TAG_F_NUMBER
#undef TAG_GAIN_CONTROL
#undef TAG_GPS_INFO_IFD_POINTER
#undef TAG_IMAGE_UNIQUE_ID
#undef TAG_INTEROPERABILITY_IFD_POINTER
#undef TAG_ISO_SPEED_RATINGS
#undef TAG_LIGHT_SOURCE
#undef TAG_MAKER_NOTE
#undef TAG_MARKER_NOTE
#undef TAG_MAX_APERTURE_VALUE
#undef TAG_METERING_MODE
#undef TAG_OECF
#undef TAG_PIXEL_X_DIMENSION
#undef TAG_PIXEL_Y_DIMENSION
#undef TAG_RELATED_SOUND_FILE
#undef TAG_SATURATION
#undef TAG_SCENE_CAPTURE_TYPE
#undef TAG_SCENE_TYPE
#undef TAG_SENSING_METHOD
#undef TAG_SHARPNESS
#undef TAG_SHUTTER_SPEED_VALUE
#undef TAG_SPATIAL_FREQUENCY_RESPONSE
#undef TAG_SPECTRAL_SENSITIVITY
#undef TAG_SUBJECT_AREA
#undef TAG_SUBJECT_DISTANCE
#undef TAG_SUBJECT_DISTANCE_RANGE
#undef TAG_SUBJECT_LOCATION
#undef TAG_SUB_SEC_TIME
#undef TAG_SUB_SEC_TIME_DIGITIZED
#undef TAG_SUB_SEC_TIME_ORIGINAL
#undef TAG_USER_COMMENT
#undef TAG_WHITE_BALANCE
#undef WHITE_BALANCE_AUTO
#undef WHITE_BALANCE_MANUAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $ExifTIFFTagSet$ApertureValue = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$ApertureValue;
using $ExifTIFFTagSet$BrightnessValue = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$BrightnessValue;
using $ExifTIFFTagSet$CFAPattern = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$CFAPattern;
using $ExifTIFFTagSet$ColorSpace = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$ColorSpace;
using $ExifTIFFTagSet$ComponentsConfiguration = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$ComponentsConfiguration;
using $ExifTIFFTagSet$CompressedBitsPerPixel = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$CompressedBitsPerPixel;
using $ExifTIFFTagSet$Contrast = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$Contrast;
using $ExifTIFFTagSet$CustomRendered = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$CustomRendered;
using $ExifTIFFTagSet$DateTimeDigitized = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$DateTimeDigitized;
using $ExifTIFFTagSet$DateTimeOriginal = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$DateTimeOriginal;
using $ExifTIFFTagSet$DeviceSettingDescription = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$DeviceSettingDescription;
using $ExifTIFFTagSet$DigitalZoomRatio = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$DigitalZoomRatio;
using $ExifTIFFTagSet$ExifVersion = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$ExifVersion;
using $ExifTIFFTagSet$ExposureBiasValue = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$ExposureBiasValue;
using $ExifTIFFTagSet$ExposureIndex = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$ExposureIndex;
using $ExifTIFFTagSet$ExposureMode = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$ExposureMode;
using $ExifTIFFTagSet$ExposureProgram = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$ExposureProgram;
using $ExifTIFFTagSet$ExposureTime = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$ExposureTime;
using $ExifTIFFTagSet$FNumber = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$FNumber;
using $ExifTIFFTagSet$FileSource = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$FileSource;
using $ExifTIFFTagSet$Flash = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$Flash;
using $ExifTIFFTagSet$FlashEnergy = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$FlashEnergy;
using $ExifTIFFTagSet$FlashPixVersion = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$FlashPixVersion;
using $ExifTIFFTagSet$FocalLength = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$FocalLength;
using $ExifTIFFTagSet$FocalLengthIn35mmFilm = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$FocalLengthIn35mmFilm;
using $ExifTIFFTagSet$FocalPlaneResolutionUnit = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$FocalPlaneResolutionUnit;
using $ExifTIFFTagSet$FocalPlaneXResolution = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$FocalPlaneXResolution;
using $ExifTIFFTagSet$FocalPlaneYResolution = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$FocalPlaneYResolution;
using $ExifTIFFTagSet$GainControl = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$GainControl;
using $ExifTIFFTagSet$ISOSpeedRatings = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$ISOSpeedRatings;
using $ExifTIFFTagSet$ImageUniqueID = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$ImageUniqueID;
using $ExifTIFFTagSet$InteroperabilityIFD = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$InteroperabilityIFD;
using $ExifTIFFTagSet$LightSource = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$LightSource;
using $ExifTIFFTagSet$MakerNote = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$MakerNote;
using $ExifTIFFTagSet$MaxApertureValue = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$MaxApertureValue;
using $ExifTIFFTagSet$MeteringMode = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$MeteringMode;
using $ExifTIFFTagSet$OECF = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$OECF;
using $ExifTIFFTagSet$PixelXDimension = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$PixelXDimension;
using $ExifTIFFTagSet$PixelYDimension = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$PixelYDimension;
using $ExifTIFFTagSet$RelatedSoundFile = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$RelatedSoundFile;
using $ExifTIFFTagSet$Saturation = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$Saturation;
using $ExifTIFFTagSet$SceneCaptureType = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$SceneCaptureType;
using $ExifTIFFTagSet$SceneType = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$SceneType;
using $ExifTIFFTagSet$SensingMethod = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$SensingMethod;
using $ExifTIFFTagSet$Sharpness = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$Sharpness;
using $ExifTIFFTagSet$ShutterSpeedValue = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$ShutterSpeedValue;
using $ExifTIFFTagSet$SpatialFrequencyResponse = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$SpatialFrequencyResponse;
using $ExifTIFFTagSet$SpectralSensitivity = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$SpectralSensitivity;
using $ExifTIFFTagSet$SubSecTime = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$SubSecTime;
using $ExifTIFFTagSet$SubSecTimeDigitized = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$SubSecTimeDigitized;
using $ExifTIFFTagSet$SubSecTimeOriginal = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$SubSecTimeOriginal;
using $ExifTIFFTagSet$SubjectArea = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$SubjectArea;
using $ExifTIFFTagSet$SubjectDistance = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$SubjectDistance;
using $ExifTIFFTagSet$SubjectDistanceRange = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$SubjectDistanceRange;
using $ExifTIFFTagSet$SubjectLocation = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$SubjectLocation;
using $ExifTIFFTagSet$UserComment = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$UserComment;
using $ExifTIFFTagSet$WhiteBalance = ::javax::imageio::plugins::tiff::ExifTIFFTagSet$WhiteBalance;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$FieldInfo _ExifTIFFTagSet_FieldInfo_[] = {
	{"theInstance", "Ljavax/imageio/plugins/tiff/ExifTIFFTagSet;", nullptr, $PRIVATE | $STATIC, $staticField(ExifTIFFTagSet, theInstance)},
	{"TAG_GPS_INFO_IFD_POINTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_GPS_INFO_IFD_POINTER)},
	{"TAG_INTEROPERABILITY_IFD_POINTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_INTEROPERABILITY_IFD_POINTER)},
	{"TAG_EXIF_VERSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_EXIF_VERSION)},
	{"EXIF_VERSION_2_1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifTIFFTagSet, EXIF_VERSION_2_1)},
	{"EXIF_VERSION_2_2", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifTIFFTagSet, EXIF_VERSION_2_2)},
	{"TAG_FLASHPIX_VERSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_FLASHPIX_VERSION)},
	{"TAG_COLOR_SPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_COLOR_SPACE)},
	{"COLOR_SPACE_SRGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, COLOR_SPACE_SRGB)},
	{"COLOR_SPACE_UNCALIBRATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, COLOR_SPACE_UNCALIBRATED)},
	{"TAG_COMPONENTS_CONFIGURATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_COMPONENTS_CONFIGURATION)},
	{"COMPONENTS_CONFIGURATION_DOES_NOT_EXIST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, COMPONENTS_CONFIGURATION_DOES_NOT_EXIST)},
	{"COMPONENTS_CONFIGURATION_Y", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, COMPONENTS_CONFIGURATION_Y)},
	{"COMPONENTS_CONFIGURATION_CB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, COMPONENTS_CONFIGURATION_CB)},
	{"COMPONENTS_CONFIGURATION_CR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, COMPONENTS_CONFIGURATION_CR)},
	{"COMPONENTS_CONFIGURATION_R", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, COMPONENTS_CONFIGURATION_R)},
	{"COMPONENTS_CONFIGURATION_G", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, COMPONENTS_CONFIGURATION_G)},
	{"COMPONENTS_CONFIGURATION_B", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, COMPONENTS_CONFIGURATION_B)},
	{"TAG_COMPRESSED_BITS_PER_PIXEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_COMPRESSED_BITS_PER_PIXEL)},
	{"TAG_PIXEL_X_DIMENSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_PIXEL_X_DIMENSION)},
	{"TAG_PIXEL_Y_DIMENSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_PIXEL_Y_DIMENSION)},
	{"TAG_MAKER_NOTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_MAKER_NOTE)},
	{"TAG_MARKER_NOTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_MARKER_NOTE)},
	{"TAG_USER_COMMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_USER_COMMENT)},
	{"TAG_RELATED_SOUND_FILE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_RELATED_SOUND_FILE)},
	{"TAG_DATE_TIME_ORIGINAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_DATE_TIME_ORIGINAL)},
	{"TAG_DATE_TIME_DIGITIZED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_DATE_TIME_DIGITIZED)},
	{"TAG_SUB_SEC_TIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_SUB_SEC_TIME)},
	{"TAG_SUB_SEC_TIME_ORIGINAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_SUB_SEC_TIME_ORIGINAL)},
	{"TAG_SUB_SEC_TIME_DIGITIZED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_SUB_SEC_TIME_DIGITIZED)},
	{"TAG_EXPOSURE_TIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_EXPOSURE_TIME)},
	{"TAG_F_NUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_F_NUMBER)},
	{"TAG_EXPOSURE_PROGRAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_EXPOSURE_PROGRAM)},
	{"EXPOSURE_PROGRAM_NOT_DEFINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, EXPOSURE_PROGRAM_NOT_DEFINED)},
	{"EXPOSURE_PROGRAM_MANUAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, EXPOSURE_PROGRAM_MANUAL)},
	{"EXPOSURE_PROGRAM_NORMAL_PROGRAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, EXPOSURE_PROGRAM_NORMAL_PROGRAM)},
	{"EXPOSURE_PROGRAM_APERTURE_PRIORITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, EXPOSURE_PROGRAM_APERTURE_PRIORITY)},
	{"EXPOSURE_PROGRAM_SHUTTER_PRIORITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, EXPOSURE_PROGRAM_SHUTTER_PRIORITY)},
	{"EXPOSURE_PROGRAM_CREATIVE_PROGRAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, EXPOSURE_PROGRAM_CREATIVE_PROGRAM)},
	{"EXPOSURE_PROGRAM_ACTION_PROGRAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, EXPOSURE_PROGRAM_ACTION_PROGRAM)},
	{"EXPOSURE_PROGRAM_PORTRAIT_MODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, EXPOSURE_PROGRAM_PORTRAIT_MODE)},
	{"EXPOSURE_PROGRAM_LANDSCAPE_MODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, EXPOSURE_PROGRAM_LANDSCAPE_MODE)},
	{"EXPOSURE_PROGRAM_MAX_RESERVED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, EXPOSURE_PROGRAM_MAX_RESERVED)},
	{"TAG_SPECTRAL_SENSITIVITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_SPECTRAL_SENSITIVITY)},
	{"TAG_ISO_SPEED_RATINGS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_ISO_SPEED_RATINGS)},
	{"TAG_OECF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_OECF)},
	{"TAG_SHUTTER_SPEED_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_SHUTTER_SPEED_VALUE)},
	{"TAG_APERTURE_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_APERTURE_VALUE)},
	{"TAG_BRIGHTNESS_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_BRIGHTNESS_VALUE)},
	{"TAG_EXPOSURE_BIAS_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_EXPOSURE_BIAS_VALUE)},
	{"TAG_MAX_APERTURE_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_MAX_APERTURE_VALUE)},
	{"TAG_SUBJECT_DISTANCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_SUBJECT_DISTANCE)},
	{"TAG_METERING_MODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_METERING_MODE)},
	{"METERING_MODE_UNKNOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, METERING_MODE_UNKNOWN)},
	{"METERING_MODE_AVERAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, METERING_MODE_AVERAGE)},
	{"METERING_MODE_CENTER_WEIGHTED_AVERAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, METERING_MODE_CENTER_WEIGHTED_AVERAGE)},
	{"METERING_MODE_SPOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, METERING_MODE_SPOT)},
	{"METERING_MODE_MULTI_SPOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, METERING_MODE_MULTI_SPOT)},
	{"METERING_MODE_PATTERN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, METERING_MODE_PATTERN)},
	{"METERING_MODE_PARTIAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, METERING_MODE_PARTIAL)},
	{"METERING_MODE_MIN_RESERVED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, METERING_MODE_MIN_RESERVED)},
	{"METERING_MODE_MAX_RESERVED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, METERING_MODE_MAX_RESERVED)},
	{"METERING_MODE_OTHER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, METERING_MODE_OTHER)},
	{"TAG_LIGHT_SOURCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_LIGHT_SOURCE)},
	{"LIGHT_SOURCE_UNKNOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_UNKNOWN)},
	{"LIGHT_SOURCE_DAYLIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_DAYLIGHT)},
	{"LIGHT_SOURCE_FLUORESCENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_FLUORESCENT)},
	{"LIGHT_SOURCE_TUNGSTEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_TUNGSTEN)},
	{"LIGHT_SOURCE_FLASH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_FLASH)},
	{"LIGHT_SOURCE_FINE_WEATHER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_FINE_WEATHER)},
	{"LIGHT_SOURCE_CLOUDY_WEATHER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_CLOUDY_WEATHER)},
	{"LIGHT_SOURCE_SHADE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_SHADE)},
	{"LIGHT_SOURCE_DAYLIGHT_FLUORESCENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_DAYLIGHT_FLUORESCENT)},
	{"LIGHT_SOURCE_DAY_WHITE_FLUORESCENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_DAY_WHITE_FLUORESCENT)},
	{"LIGHT_SOURCE_COOL_WHITE_FLUORESCENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_COOL_WHITE_FLUORESCENT)},
	{"LIGHT_SOURCE_WHITE_FLUORESCENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_WHITE_FLUORESCENT)},
	{"LIGHT_SOURCE_STANDARD_LIGHT_A", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_STANDARD_LIGHT_A)},
	{"LIGHT_SOURCE_STANDARD_LIGHT_B", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_STANDARD_LIGHT_B)},
	{"LIGHT_SOURCE_STANDARD_LIGHT_C", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_STANDARD_LIGHT_C)},
	{"LIGHT_SOURCE_D55", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_D55)},
	{"LIGHT_SOURCE_D65", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_D65)},
	{"LIGHT_SOURCE_D75", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_D75)},
	{"LIGHT_SOURCE_D50", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_D50)},
	{"LIGHT_SOURCE_ISO_STUDIO_TUNGSTEN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_ISO_STUDIO_TUNGSTEN)},
	{"LIGHT_SOURCE_OTHER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, LIGHT_SOURCE_OTHER)},
	{"TAG_FLASH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_FLASH)},
	{"FLASH_DID_NOT_FIRE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FLASH_DID_NOT_FIRE)},
	{"FLASH_FIRED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FLASH_FIRED)},
	{"FLASH_STROBE_RETURN_LIGHT_NOT_DETECTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FLASH_STROBE_RETURN_LIGHT_NOT_DETECTED)},
	{"FLASH_STROBE_RETURN_LIGHT_DETECTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FLASH_STROBE_RETURN_LIGHT_DETECTED)},
	{"FLASH_MASK_FIRED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FLASH_MASK_FIRED)},
	{"FLASH_MASK_RETURN_NOT_DETECTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FLASH_MASK_RETURN_NOT_DETECTED)},
	{"FLASH_MASK_RETURN_DETECTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FLASH_MASK_RETURN_DETECTED)},
	{"FLASH_MASK_MODE_FLASH_FIRING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FLASH_MASK_MODE_FLASH_FIRING)},
	{"FLASH_MASK_MODE_FLASH_SUPPRESSION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FLASH_MASK_MODE_FLASH_SUPPRESSION)},
	{"FLASH_MASK_MODE_AUTO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FLASH_MASK_MODE_AUTO)},
	{"FLASH_MASK_FUNCTION_NOT_PRESENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FLASH_MASK_FUNCTION_NOT_PRESENT)},
	{"FLASH_MASK_RED_EYE_REDUCTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FLASH_MASK_RED_EYE_REDUCTION)},
	{"TAG_FOCAL_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_FOCAL_LENGTH)},
	{"TAG_SUBJECT_AREA", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_SUBJECT_AREA)},
	{"TAG_FLASH_ENERGY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_FLASH_ENERGY)},
	{"TAG_SPATIAL_FREQUENCY_RESPONSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_SPATIAL_FREQUENCY_RESPONSE)},
	{"TAG_FOCAL_PLANE_X_RESOLUTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_FOCAL_PLANE_X_RESOLUTION)},
	{"TAG_FOCAL_PLANE_Y_RESOLUTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_FOCAL_PLANE_Y_RESOLUTION)},
	{"TAG_FOCAL_PLANE_RESOLUTION_UNIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_FOCAL_PLANE_RESOLUTION_UNIT)},
	{"FOCAL_PLANE_RESOLUTION_UNIT_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FOCAL_PLANE_RESOLUTION_UNIT_NONE)},
	{"FOCAL_PLANE_RESOLUTION_UNIT_INCH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FOCAL_PLANE_RESOLUTION_UNIT_INCH)},
	{"FOCAL_PLANE_RESOLUTION_UNIT_CENTIMETER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FOCAL_PLANE_RESOLUTION_UNIT_CENTIMETER)},
	{"TAG_SUBJECT_LOCATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_SUBJECT_LOCATION)},
	{"TAG_EXPOSURE_INDEX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_EXPOSURE_INDEX)},
	{"TAG_SENSING_METHOD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_SENSING_METHOD)},
	{"SENSING_METHOD_NOT_DEFINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SENSING_METHOD_NOT_DEFINED)},
	{"SENSING_METHOD_ONE_CHIP_COLOR_AREA_SENSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SENSING_METHOD_ONE_CHIP_COLOR_AREA_SENSOR)},
	{"SENSING_METHOD_TWO_CHIP_COLOR_AREA_SENSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SENSING_METHOD_TWO_CHIP_COLOR_AREA_SENSOR)},
	{"SENSING_METHOD_THREE_CHIP_COLOR_AREA_SENSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SENSING_METHOD_THREE_CHIP_COLOR_AREA_SENSOR)},
	{"SENSING_METHOD_COLOR_SEQUENTIAL_AREA_SENSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SENSING_METHOD_COLOR_SEQUENTIAL_AREA_SENSOR)},
	{"SENSING_METHOD_TRILINEAR_SENSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SENSING_METHOD_TRILINEAR_SENSOR)},
	{"SENSING_METHOD_COLOR_SEQUENTIAL_LINEAR_SENSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SENSING_METHOD_COLOR_SEQUENTIAL_LINEAR_SENSOR)},
	{"TAG_FILE_SOURCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_FILE_SOURCE)},
	{"FILE_SOURCE_DSC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, FILE_SOURCE_DSC)},
	{"TAG_SCENE_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_SCENE_TYPE)},
	{"SCENE_TYPE_DSC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SCENE_TYPE_DSC)},
	{"TAG_CFA_PATTERN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_CFA_PATTERN)},
	{"TAG_CUSTOM_RENDERED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_CUSTOM_RENDERED)},
	{"CUSTOM_RENDERED_NORMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, CUSTOM_RENDERED_NORMAL)},
	{"CUSTOM_RENDERED_CUSTOM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, CUSTOM_RENDERED_CUSTOM)},
	{"TAG_EXPOSURE_MODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_EXPOSURE_MODE)},
	{"EXPOSURE_MODE_AUTO_EXPOSURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, EXPOSURE_MODE_AUTO_EXPOSURE)},
	{"EXPOSURE_MODE_MANUAL_EXPOSURE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, EXPOSURE_MODE_MANUAL_EXPOSURE)},
	{"EXPOSURE_MODE_AUTO_BRACKET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, EXPOSURE_MODE_AUTO_BRACKET)},
	{"TAG_WHITE_BALANCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_WHITE_BALANCE)},
	{"WHITE_BALANCE_AUTO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, WHITE_BALANCE_AUTO)},
	{"WHITE_BALANCE_MANUAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, WHITE_BALANCE_MANUAL)},
	{"TAG_DIGITAL_ZOOM_RATIO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_DIGITAL_ZOOM_RATIO)},
	{"TAG_FOCAL_LENGTH_IN_35MM_FILM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_FOCAL_LENGTH_IN_35MM_FILM)},
	{"TAG_SCENE_CAPTURE_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_SCENE_CAPTURE_TYPE)},
	{"SCENE_CAPTURE_TYPE_STANDARD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SCENE_CAPTURE_TYPE_STANDARD)},
	{"SCENE_CAPTURE_TYPE_LANDSCAPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SCENE_CAPTURE_TYPE_LANDSCAPE)},
	{"SCENE_CAPTURE_TYPE_PORTRAIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SCENE_CAPTURE_TYPE_PORTRAIT)},
	{"SCENE_CAPTURE_TYPE_NIGHT_SCENE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SCENE_CAPTURE_TYPE_NIGHT_SCENE)},
	{"TAG_GAIN_CONTROL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_GAIN_CONTROL)},
	{"GAIN_CONTROL_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, GAIN_CONTROL_NONE)},
	{"GAIN_CONTROL_LOW_GAIN_UP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, GAIN_CONTROL_LOW_GAIN_UP)},
	{"GAIN_CONTROL_HIGH_GAIN_UP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, GAIN_CONTROL_HIGH_GAIN_UP)},
	{"GAIN_CONTROL_LOW_GAIN_DOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, GAIN_CONTROL_LOW_GAIN_DOWN)},
	{"GAIN_CONTROL_HIGH_GAIN_DOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, GAIN_CONTROL_HIGH_GAIN_DOWN)},
	{"TAG_CONTRAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_CONTRAST)},
	{"CONTRAST_NORMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, CONTRAST_NORMAL)},
	{"CONTRAST_SOFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, CONTRAST_SOFT)},
	{"CONTRAST_HARD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, CONTRAST_HARD)},
	{"TAG_SATURATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_SATURATION)},
	{"SATURATION_NORMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SATURATION_NORMAL)},
	{"SATURATION_LOW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SATURATION_LOW)},
	{"SATURATION_HIGH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SATURATION_HIGH)},
	{"TAG_SHARPNESS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_SHARPNESS)},
	{"SHARPNESS_NORMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SHARPNESS_NORMAL)},
	{"SHARPNESS_SOFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SHARPNESS_SOFT)},
	{"SHARPNESS_HARD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SHARPNESS_HARD)},
	{"TAG_DEVICE_SETTING_DESCRIPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_DEVICE_SETTING_DESCRIPTION)},
	{"TAG_SUBJECT_DISTANCE_RANGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_SUBJECT_DISTANCE_RANGE)},
	{"SUBJECT_DISTANCE_RANGE_UNKNOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SUBJECT_DISTANCE_RANGE_UNKNOWN)},
	{"SUBJECT_DISTANCE_RANGE_MACRO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SUBJECT_DISTANCE_RANGE_MACRO)},
	{"SUBJECT_DISTANCE_RANGE_CLOSE_VIEW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SUBJECT_DISTANCE_RANGE_CLOSE_VIEW)},
	{"SUBJECT_DISTANCE_RANGE_DISTANT_VIEW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, SUBJECT_DISTANCE_RANGE_DISTANT_VIEW)},
	{"TAG_IMAGE_UNIQUE_ID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifTIFFTagSet, TAG_IMAGE_UNIQUE_ID)},
	{"tags", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTag;>;", $PRIVATE | $STATIC, $staticField(ExifTIFFTagSet, tags)},
	{}
};

$MethodInfo _ExifTIFFTagSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExifTIFFTagSet::*)()>(&ExifTIFFTagSet::init$))},
	{"getInstance", "()Ljavax/imageio/plugins/tiff/ExifTIFFTagSet;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<ExifTIFFTagSet*(*)()>(&ExifTIFFTagSet::getInstance))},
	{"initTags", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ExifTIFFTagSet::initTags))},
	{}
};

$InnerClassInfo _ExifTIFFTagSet_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$InteroperabilityIFD", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "InteroperabilityIFD", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ImageUniqueID", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ImageUniqueID", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectDistanceRange", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubjectDistanceRange", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$DeviceSettingDescription", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "DeviceSettingDescription", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$Sharpness", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "Sharpness", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$Saturation", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "Saturation", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$Contrast", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "Contrast", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$GainControl", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "GainControl", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SceneCaptureType", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SceneCaptureType", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalLengthIn35mmFilm", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FocalLengthIn35mmFilm", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$DigitalZoomRatio", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "DigitalZoomRatio", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$WhiteBalance", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "WhiteBalance", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureMode", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExposureMode", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$CustomRendered", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "CustomRendered", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$CFAPattern", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "CFAPattern", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SceneType", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SceneType", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FileSource", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FileSource", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SensingMethod", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SensingMethod", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureIndex", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExposureIndex", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectLocation", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubjectLocation", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneResolutionUnit", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FocalPlaneResolutionUnit", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneYResolution", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FocalPlaneYResolution", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneXResolution", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FocalPlaneXResolution", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SpatialFrequencyResponse", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SpatialFrequencyResponse", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FlashEnergy", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FlashEnergy", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectArea", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubjectArea", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalLength", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FocalLength", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$Flash", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "Flash", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$LightSource", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "LightSource", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$MeteringMode", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "MeteringMode", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectDistance", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubjectDistance", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$MaxApertureValue", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "MaxApertureValue", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureBiasValue", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExposureBiasValue", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$BrightnessValue", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "BrightnessValue", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ApertureValue", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ApertureValue", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ShutterSpeedValue", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ShutterSpeedValue", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$OECF", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "OECF", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ISOSpeedRatings", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ISOSpeedRatings", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SpectralSensitivity", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SpectralSensitivity", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureProgram", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExposureProgram", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FNumber", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FNumber", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureTime", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExposureTime", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTimeDigitized", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubSecTimeDigitized", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTimeOriginal", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubSecTimeOriginal", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTime", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "SubSecTime", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$DateTimeDigitized", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "DateTimeDigitized", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$DateTimeOriginal", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "DateTimeOriginal", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$RelatedSoundFile", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "RelatedSoundFile", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$UserComment", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "UserComment", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$MakerNote", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "MakerNote", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$PixelYDimension", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "PixelYDimension", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$PixelXDimension", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "PixelXDimension", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$CompressedBitsPerPixel", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "CompressedBitsPerPixel", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ComponentsConfiguration", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ComponentsConfiguration", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ColorSpace", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ColorSpace", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$FlashPixVersion", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "FlashPixVersion", $STATIC},
	{"javax.imageio.plugins.tiff.ExifTIFFTagSet$ExifVersion", "javax.imageio.plugins.tiff.ExifTIFFTagSet", "ExifVersion", $STATIC},
	{}
};

$ClassInfo _ExifTIFFTagSet_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet",
	"javax.imageio.plugins.tiff.TIFFTagSet",
	nullptr,
	_ExifTIFFTagSet_FieldInfo_,
	_ExifTIFFTagSet_MethodInfo_,
	nullptr,
	nullptr,
	_ExifTIFFTagSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifTIFFTagSet$InteroperabilityIFD,javax.imageio.plugins.tiff.ExifTIFFTagSet$ImageUniqueID,javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectDistanceRange,javax.imageio.plugins.tiff.ExifTIFFTagSet$DeviceSettingDescription,javax.imageio.plugins.tiff.ExifTIFFTagSet$Sharpness,javax.imageio.plugins.tiff.ExifTIFFTagSet$Saturation,javax.imageio.plugins.tiff.ExifTIFFTagSet$Contrast,javax.imageio.plugins.tiff.ExifTIFFTagSet$GainControl,javax.imageio.plugins.tiff.ExifTIFFTagSet$SceneCaptureType,javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalLengthIn35mmFilm,javax.imageio.plugins.tiff.ExifTIFFTagSet$DigitalZoomRatio,javax.imageio.plugins.tiff.ExifTIFFTagSet$WhiteBalance,javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureMode,javax.imageio.plugins.tiff.ExifTIFFTagSet$CustomRendered,javax.imageio.plugins.tiff.ExifTIFFTagSet$CFAPattern,javax.imageio.plugins.tiff.ExifTIFFTagSet$SceneType,javax.imageio.plugins.tiff.ExifTIFFTagSet$FileSource,javax.imageio.plugins.tiff.ExifTIFFTagSet$SensingMethod,javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureIndex,javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectLocation,javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneResolutionUnit,javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneYResolution,javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalPlaneXResolution,javax.imageio.plugins.tiff.ExifTIFFTagSet$SpatialFrequencyResponse,javax.imageio.plugins.tiff.ExifTIFFTagSet$FlashEnergy,javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectArea,javax.imageio.plugins.tiff.ExifTIFFTagSet$FocalLength,javax.imageio.plugins.tiff.ExifTIFFTagSet$Flash,javax.imageio.plugins.tiff.ExifTIFFTagSet$LightSource,javax.imageio.plugins.tiff.ExifTIFFTagSet$MeteringMode,javax.imageio.plugins.tiff.ExifTIFFTagSet$SubjectDistance,javax.imageio.plugins.tiff.ExifTIFFTagSet$MaxApertureValue,javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureBiasValue,javax.imageio.plugins.tiff.ExifTIFFTagSet$BrightnessValue,javax.imageio.plugins.tiff.ExifTIFFTagSet$ApertureValue,javax.imageio.plugins.tiff.ExifTIFFTagSet$ShutterSpeedValue,javax.imageio.plugins.tiff.ExifTIFFTagSet$OECF,javax.imageio.plugins.tiff.ExifTIFFTagSet$ISOSpeedRatings,javax.imageio.plugins.tiff.ExifTIFFTagSet$SpectralSensitivity,javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureProgram,javax.imageio.plugins.tiff.ExifTIFFTagSet$FNumber,javax.imageio.plugins.tiff.ExifTIFFTagSet$ExposureTime,javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTimeDigitized,javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTimeOriginal,javax.imageio.plugins.tiff.ExifTIFFTagSet$SubSecTime,javax.imageio.plugins.tiff.ExifTIFFTagSet$DateTimeDigitized,javax.imageio.plugins.tiff.ExifTIFFTagSet$DateTimeOriginal,javax.imageio.plugins.tiff.ExifTIFFTagSet$RelatedSoundFile,javax.imageio.plugins.tiff.ExifTIFFTagSet$UserComment,javax.imageio.plugins.tiff.ExifTIFFTagSet$MakerNote,javax.imageio.plugins.tiff.ExifTIFFTagSet$PixelYDimension,javax.imageio.plugins.tiff.ExifTIFFTagSet$PixelXDimension,javax.imageio.plugins.tiff.ExifTIFFTagSet$CompressedBitsPerPixel,javax.imageio.plugins.tiff.ExifTIFFTagSet$ComponentsConfiguration,javax.imageio.plugins.tiff.ExifTIFFTagSet$ColorSpace,javax.imageio.plugins.tiff.ExifTIFFTagSet$FlashPixVersion,javax.imageio.plugins.tiff.ExifTIFFTagSet$ExifVersion"
};

$Object* allocate$ExifTIFFTagSet($Class* clazz) {
	return $of($alloc(ExifTIFFTagSet));
}

ExifTIFFTagSet* ExifTIFFTagSet::theInstance = nullptr;

$String* ExifTIFFTagSet::EXIF_VERSION_2_1 = nullptr;

$String* ExifTIFFTagSet::EXIF_VERSION_2_2 = nullptr;
$List* ExifTIFFTagSet::tags = nullptr;

void ExifTIFFTagSet::initTags() {
	$init(ExifTIFFTagSet);
	$assignStatic(ExifTIFFTagSet::tags, $new($ArrayList, 42));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$ExifVersion));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$FlashPixVersion));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$ColorSpace));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$ComponentsConfiguration));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$CompressedBitsPerPixel));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$PixelXDimension));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$PixelYDimension));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$MakerNote));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$UserComment));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$RelatedSoundFile));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$DateTimeOriginal));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$DateTimeDigitized));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$SubSecTime));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$SubSecTimeOriginal));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$SubSecTimeDigitized));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$ExposureTime));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$FNumber));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$ExposureProgram));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$SpectralSensitivity));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$ISOSpeedRatings));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$OECF));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$ShutterSpeedValue));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$ApertureValue));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$BrightnessValue));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$ExposureBiasValue));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$MaxApertureValue));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$SubjectDistance));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$MeteringMode));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$LightSource));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$Flash));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$FocalLength));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$SubjectArea));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$FlashEnergy));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$SpatialFrequencyResponse));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$FocalPlaneXResolution));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$FocalPlaneYResolution));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$FocalPlaneResolutionUnit));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$SubjectLocation));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$ExposureIndex));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$SensingMethod));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$FileSource));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$SceneType));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$CFAPattern));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$CustomRendered));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$ExposureMode));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$WhiteBalance));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$DigitalZoomRatio));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$FocalLengthIn35mmFilm));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$SceneCaptureType));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$GainControl));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$Contrast));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$Saturation));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$Sharpness));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$DeviceSettingDescription));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$SubjectDistanceRange));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$ImageUniqueID));
	$nc(ExifTIFFTagSet::tags)->add($$new($ExifTIFFTagSet$InteroperabilityIFD));
}

void ExifTIFFTagSet::init$() {
	$TIFFTagSet::init$(ExifTIFFTagSet::tags);
}

ExifTIFFTagSet* ExifTIFFTagSet::getInstance() {
	$load(ExifTIFFTagSet);
	$synchronized(class$) {
		$init(ExifTIFFTagSet);
		if (ExifTIFFTagSet::theInstance == nullptr) {
			initTags();
			$assignStatic(ExifTIFFTagSet::theInstance, $new(ExifTIFFTagSet));
			$assignStatic(ExifTIFFTagSet::tags, nullptr);
		}
		return ExifTIFFTagSet::theInstance;
	}
}

void clinit$ExifTIFFTagSet($Class* class$) {
	$assignStatic(ExifTIFFTagSet::EXIF_VERSION_2_1, "0210"_s);
	$assignStatic(ExifTIFFTagSet::EXIF_VERSION_2_2, "0220"_s);
	$assignStatic(ExifTIFFTagSet::theInstance, nullptr);
}

ExifTIFFTagSet::ExifTIFFTagSet() {
}

$Class* ExifTIFFTagSet::load$($String* name, bool initialize) {
	$loadClass(ExifTIFFTagSet, name, initialize, &_ExifTIFFTagSet_ClassInfo_, clinit$ExifTIFFTagSet, allocate$ExifTIFFTagSet);
	return class$;
}

$Class* ExifTIFFTagSet::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax