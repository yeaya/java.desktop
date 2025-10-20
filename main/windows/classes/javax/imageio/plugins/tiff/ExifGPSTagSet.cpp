#include <javax/imageio/plugins/tiff/ExifGPSTagSet.h>

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
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSAltitude.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSAltitudeRef.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSAreaInformation.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDOP.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDateStamp.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestBearing.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestBearingRef.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestDistance.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestDistanceRef.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestLatitude.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestLatitudeRef.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestLongitude.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDestLongitudeRef.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSDifferential.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSImgDirection.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSImgDirectionRef.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSLatitude.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSLatitudeRef.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSLongitude.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSLongitudeRef.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSMapDatum.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSMeasureMode.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSProcessingMethod.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSSatellites.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSSpeed.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSSpeedRef.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSStatus.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSTimeStamp.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSTrack.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSTrackRef.h>
#include <javax/imageio/plugins/tiff/ExifGPSTagSet$GPSVersionID.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

#undef ALTITUDE_REF_SEA_LEVEL
#undef ALTITUDE_REF_SEA_LEVEL_REFERENCE
#undef DEST_DISTANCE_REF_KILOMETERS
#undef DEST_DISTANCE_REF_KNOTS
#undef DEST_DISTANCE_REF_MILES
#undef DIFFERENTIAL_CORRECTION_APPLIED
#undef DIFFERENTIAL_CORRECTION_NONE
#undef DIRECTION_REF_MAGNETIC
#undef DIRECTION_REF_TRUE
#undef GPS_VERSION_2_2
#undef LATITUDE_REF_NORTH
#undef LATITUDE_REF_SOUTH
#undef LONGITUDE_REF_EAST
#undef LONGITUDE_REF_WEST
#undef MEASURE_MODE_2D
#undef MEASURE_MODE_3D
#undef SPEED_REF_KILOMETERS_PER_HOUR
#undef SPEED_REF_KNOTS
#undef SPEED_REF_MILES_PER_HOUR
#undef STATUS_MEASUREMENT_INTEROPERABILITY
#undef STATUS_MEASUREMENT_IN_PROGRESS
#undef TAG_GPS_ALTITUDE
#undef TAG_GPS_ALTITUDE_REF
#undef TAG_GPS_AREA_INFORMATION
#undef TAG_GPS_DATE_STAMP
#undef TAG_GPS_DEST_BEARING
#undef TAG_GPS_DEST_BEARING_REF
#undef TAG_GPS_DEST_DISTANCE
#undef TAG_GPS_DEST_DISTANCE_REF
#undef TAG_GPS_DEST_LATITUDE
#undef TAG_GPS_DEST_LATITUDE_REF
#undef TAG_GPS_DEST_LONGITUDE
#undef TAG_GPS_DEST_LONGITUDE_REF
#undef TAG_GPS_DIFFERENTIAL
#undef TAG_GPS_DOP
#undef TAG_GPS_IMG_DIRECTION
#undef TAG_GPS_IMG_DIRECTION_REF
#undef TAG_GPS_LATITUDE
#undef TAG_GPS_LATITUDE_REF
#undef TAG_GPS_LONGITUDE
#undef TAG_GPS_LONGITUDE_REF
#undef TAG_GPS_MAP_DATUM
#undef TAG_GPS_MEASURE_MODE
#undef TAG_GPS_PROCESSING_METHOD
#undef TAG_GPS_SATELLITES
#undef TAG_GPS_SPEED
#undef TAG_GPS_SPEED_REF
#undef TAG_GPS_STATUS
#undef TAG_GPS_TIME_STAMP
#undef TAG_GPS_TRACK
#undef TAG_GPS_TRACK_REF
#undef TAG_GPS_VERSION_ID

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $ExifGPSTagSet$GPSAltitude = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSAltitude;
using $ExifGPSTagSet$GPSAltitudeRef = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSAltitudeRef;
using $ExifGPSTagSet$GPSAreaInformation = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSAreaInformation;
using $ExifGPSTagSet$GPSDOP = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSDOP;
using $ExifGPSTagSet$GPSDateStamp = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSDateStamp;
using $ExifGPSTagSet$GPSDestBearing = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSDestBearing;
using $ExifGPSTagSet$GPSDestBearingRef = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSDestBearingRef;
using $ExifGPSTagSet$GPSDestDistance = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSDestDistance;
using $ExifGPSTagSet$GPSDestDistanceRef = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSDestDistanceRef;
using $ExifGPSTagSet$GPSDestLatitude = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSDestLatitude;
using $ExifGPSTagSet$GPSDestLatitudeRef = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSDestLatitudeRef;
using $ExifGPSTagSet$GPSDestLongitude = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSDestLongitude;
using $ExifGPSTagSet$GPSDestLongitudeRef = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSDestLongitudeRef;
using $ExifGPSTagSet$GPSDifferential = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSDifferential;
using $ExifGPSTagSet$GPSImgDirection = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSImgDirection;
using $ExifGPSTagSet$GPSImgDirectionRef = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSImgDirectionRef;
using $ExifGPSTagSet$GPSLatitude = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSLatitude;
using $ExifGPSTagSet$GPSLatitudeRef = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSLatitudeRef;
using $ExifGPSTagSet$GPSLongitude = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSLongitude;
using $ExifGPSTagSet$GPSLongitudeRef = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSLongitudeRef;
using $ExifGPSTagSet$GPSMapDatum = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSMapDatum;
using $ExifGPSTagSet$GPSMeasureMode = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSMeasureMode;
using $ExifGPSTagSet$GPSProcessingMethod = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSProcessingMethod;
using $ExifGPSTagSet$GPSSatellites = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSSatellites;
using $ExifGPSTagSet$GPSSpeed = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSSpeed;
using $ExifGPSTagSet$GPSSpeedRef = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSSpeedRef;
using $ExifGPSTagSet$GPSStatus = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSStatus;
using $ExifGPSTagSet$GPSTimeStamp = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSTimeStamp;
using $ExifGPSTagSet$GPSTrack = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSTrack;
using $ExifGPSTagSet$GPSTrackRef = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSTrackRef;
using $ExifGPSTagSet$GPSVersionID = ::javax::imageio::plugins::tiff::ExifGPSTagSet$GPSVersionID;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$FieldInfo _ExifGPSTagSet_FieldInfo_[] = {
	{"theInstance", "Ljavax/imageio/plugins/tiff/ExifGPSTagSet;", nullptr, $PRIVATE | $STATIC, $staticField(ExifGPSTagSet, theInstance)},
	{"TAG_GPS_VERSION_ID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_VERSION_ID)},
	{"GPS_VERSION_2_2", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, GPS_VERSION_2_2)},
	{"TAG_GPS_LATITUDE_REF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_LATITUDE_REF)},
	{"TAG_GPS_LATITUDE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_LATITUDE)},
	{"TAG_GPS_LONGITUDE_REF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_LONGITUDE_REF)},
	{"TAG_GPS_LONGITUDE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_LONGITUDE)},
	{"TAG_GPS_ALTITUDE_REF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_ALTITUDE_REF)},
	{"TAG_GPS_ALTITUDE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_ALTITUDE)},
	{"TAG_GPS_TIME_STAMP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_TIME_STAMP)},
	{"TAG_GPS_SATELLITES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_SATELLITES)},
	{"TAG_GPS_STATUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_STATUS)},
	{"TAG_GPS_MEASURE_MODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_MEASURE_MODE)},
	{"TAG_GPS_DOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_DOP)},
	{"TAG_GPS_SPEED_REF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_SPEED_REF)},
	{"TAG_GPS_SPEED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_SPEED)},
	{"TAG_GPS_TRACK_REF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_TRACK_REF)},
	{"TAG_GPS_TRACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_TRACK)},
	{"TAG_GPS_IMG_DIRECTION_REF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_IMG_DIRECTION_REF)},
	{"TAG_GPS_IMG_DIRECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_IMG_DIRECTION)},
	{"TAG_GPS_MAP_DATUM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_MAP_DATUM)},
	{"TAG_GPS_DEST_LATITUDE_REF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_DEST_LATITUDE_REF)},
	{"TAG_GPS_DEST_LATITUDE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_DEST_LATITUDE)},
	{"TAG_GPS_DEST_LONGITUDE_REF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_DEST_LONGITUDE_REF)},
	{"TAG_GPS_DEST_LONGITUDE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_DEST_LONGITUDE)},
	{"TAG_GPS_DEST_BEARING_REF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_DEST_BEARING_REF)},
	{"TAG_GPS_DEST_BEARING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_DEST_BEARING)},
	{"TAG_GPS_DEST_DISTANCE_REF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_DEST_DISTANCE_REF)},
	{"TAG_GPS_DEST_DISTANCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_DEST_DISTANCE)},
	{"TAG_GPS_PROCESSING_METHOD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_PROCESSING_METHOD)},
	{"TAG_GPS_AREA_INFORMATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_AREA_INFORMATION)},
	{"TAG_GPS_DATE_STAMP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_DATE_STAMP)},
	{"TAG_GPS_DIFFERENTIAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, TAG_GPS_DIFFERENTIAL)},
	{"LATITUDE_REF_NORTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, LATITUDE_REF_NORTH)},
	{"LATITUDE_REF_SOUTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, LATITUDE_REF_SOUTH)},
	{"LONGITUDE_REF_EAST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, LONGITUDE_REF_EAST)},
	{"LONGITUDE_REF_WEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, LONGITUDE_REF_WEST)},
	{"ALTITUDE_REF_SEA_LEVEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, ALTITUDE_REF_SEA_LEVEL)},
	{"ALTITUDE_REF_SEA_LEVEL_REFERENCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, ALTITUDE_REF_SEA_LEVEL_REFERENCE)},
	{"STATUS_MEASUREMENT_IN_PROGRESS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, STATUS_MEASUREMENT_IN_PROGRESS)},
	{"STATUS_MEASUREMENT_INTEROPERABILITY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, STATUS_MEASUREMENT_INTEROPERABILITY)},
	{"MEASURE_MODE_2D", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, MEASURE_MODE_2D)},
	{"MEASURE_MODE_3D", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, MEASURE_MODE_3D)},
	{"SPEED_REF_KILOMETERS_PER_HOUR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, SPEED_REF_KILOMETERS_PER_HOUR)},
	{"SPEED_REF_MILES_PER_HOUR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, SPEED_REF_MILES_PER_HOUR)},
	{"SPEED_REF_KNOTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, SPEED_REF_KNOTS)},
	{"DIRECTION_REF_TRUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, DIRECTION_REF_TRUE)},
	{"DIRECTION_REF_MAGNETIC", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, DIRECTION_REF_MAGNETIC)},
	{"DEST_DISTANCE_REF_KILOMETERS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, DEST_DISTANCE_REF_KILOMETERS)},
	{"DEST_DISTANCE_REF_MILES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, DEST_DISTANCE_REF_MILES)},
	{"DEST_DISTANCE_REF_KNOTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifGPSTagSet, DEST_DISTANCE_REF_KNOTS)},
	{"DIFFERENTIAL_CORRECTION_NONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, DIFFERENTIAL_CORRECTION_NONE)},
	{"DIFFERENTIAL_CORRECTION_APPLIED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifGPSTagSet, DIFFERENTIAL_CORRECTION_APPLIED)},
	{}
};

$MethodInfo _ExifGPSTagSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExifGPSTagSet::*)()>(&ExifGPSTagSet::init$))},
	{"getInstance", "()Ljavax/imageio/plugins/tiff/ExifGPSTagSet;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<ExifGPSTagSet*(*)()>(&ExifGPSTagSet::getInstance))},
	{"initTags", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTag;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)()>(&ExifGPSTagSet::initTags))},
	{}
};

$InnerClassInfo _ExifGPSTagSet_InnerClassesInfo_[] = {
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDifferential", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDifferential", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDateStamp", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDateStamp", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAreaInformation", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSAreaInformation", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSProcessingMethod", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSProcessingMethod", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestDistance", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestDistance", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestDistanceRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestDistanceRef", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestBearing", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestBearing", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestBearingRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestBearingRef", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLongitude", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestLongitude", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLongitudeRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestLongitudeRef", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLatitude", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestLatitude", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLatitudeRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDestLatitudeRef", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSMapDatum", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSMapDatum", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSImgDirection", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSImgDirection", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSImgDirectionRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSImgDirectionRef", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTrack", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSTrack", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTrackRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSTrackRef", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSpeed", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSSpeed", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSpeedRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSSpeedRef", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDOP", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSDOP", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSMeasureMode", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSMeasureMode", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSStatus", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSStatus", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSatellites", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSSatellites", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTimeStamp", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSTimeStamp", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAltitude", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSAltitude", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAltitudeRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSAltitudeRef", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLongitude", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSLongitude", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLongitudeRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSLongitudeRef", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLatitude", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSLatitude", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLatitudeRef", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSLatitudeRef", $STATIC},
	{"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSVersionID", "javax.imageio.plugins.tiff.ExifGPSTagSet", "GPSVersionID", $STATIC},
	{}
};

$ClassInfo _ExifGPSTagSet_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.imageio.plugins.tiff.ExifGPSTagSet",
	"javax.imageio.plugins.tiff.TIFFTagSet",
	nullptr,
	_ExifGPSTagSet_FieldInfo_,
	_ExifGPSTagSet_MethodInfo_,
	nullptr,
	nullptr,
	_ExifGPSTagSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDifferential,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDateStamp,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAreaInformation,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSProcessingMethod,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestDistance,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestDistanceRef,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestBearing,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestBearingRef,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLongitude,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLongitudeRef,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLatitude,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDestLatitudeRef,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSMapDatum,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSImgDirection,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSImgDirectionRef,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTrack,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTrackRef,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSpeed,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSpeedRef,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSDOP,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSMeasureMode,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSStatus,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSSatellites,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSTimeStamp,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAltitude,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSAltitudeRef,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLongitude,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLongitudeRef,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLatitude,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSLatitudeRef,javax.imageio.plugins.tiff.ExifGPSTagSet$GPSVersionID"
};

$Object* allocate$ExifGPSTagSet($Class* clazz) {
	return $of($alloc(ExifGPSTagSet));
}

ExifGPSTagSet* ExifGPSTagSet::theInstance = nullptr;

$String* ExifGPSTagSet::GPS_VERSION_2_2 = nullptr;

$String* ExifGPSTagSet::LATITUDE_REF_NORTH = nullptr;

$String* ExifGPSTagSet::LATITUDE_REF_SOUTH = nullptr;

$String* ExifGPSTagSet::LONGITUDE_REF_EAST = nullptr;

$String* ExifGPSTagSet::LONGITUDE_REF_WEST = nullptr;

$String* ExifGPSTagSet::STATUS_MEASUREMENT_IN_PROGRESS = nullptr;

$String* ExifGPSTagSet::STATUS_MEASUREMENT_INTEROPERABILITY = nullptr;

$String* ExifGPSTagSet::MEASURE_MODE_2D = nullptr;

$String* ExifGPSTagSet::MEASURE_MODE_3D = nullptr;

$String* ExifGPSTagSet::SPEED_REF_KILOMETERS_PER_HOUR = nullptr;

$String* ExifGPSTagSet::SPEED_REF_MILES_PER_HOUR = nullptr;

$String* ExifGPSTagSet::SPEED_REF_KNOTS = nullptr;

$String* ExifGPSTagSet::DIRECTION_REF_TRUE = nullptr;

$String* ExifGPSTagSet::DIRECTION_REF_MAGNETIC = nullptr;

$String* ExifGPSTagSet::DEST_DISTANCE_REF_KILOMETERS = nullptr;

$String* ExifGPSTagSet::DEST_DISTANCE_REF_MILES = nullptr;

$String* ExifGPSTagSet::DEST_DISTANCE_REF_KNOTS = nullptr;

$List* ExifGPSTagSet::initTags() {
	$init(ExifGPSTagSet);
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, tags, $new($ArrayList, 31));
	tags->add($$new($ExifGPSTagSet$GPSVersionID));
	tags->add($$new($ExifGPSTagSet$GPSLatitudeRef));
	tags->add($$new($ExifGPSTagSet$GPSLatitude));
	tags->add($$new($ExifGPSTagSet$GPSLongitudeRef));
	tags->add($$new($ExifGPSTagSet$GPSLongitude));
	tags->add($$new($ExifGPSTagSet$GPSAltitudeRef));
	tags->add($$new($ExifGPSTagSet$GPSAltitude));
	tags->add($$new($ExifGPSTagSet$GPSTimeStamp));
	tags->add($$new($ExifGPSTagSet$GPSSatellites));
	tags->add($$new($ExifGPSTagSet$GPSStatus));
	tags->add($$new($ExifGPSTagSet$GPSMeasureMode));
	tags->add($$new($ExifGPSTagSet$GPSDOP));
	tags->add($$new($ExifGPSTagSet$GPSSpeedRef));
	tags->add($$new($ExifGPSTagSet$GPSSpeed));
	tags->add($$new($ExifGPSTagSet$GPSTrackRef));
	tags->add($$new($ExifGPSTagSet$GPSTrack));
	tags->add($$new($ExifGPSTagSet$GPSImgDirectionRef));
	tags->add($$new($ExifGPSTagSet$GPSImgDirection));
	tags->add($$new($ExifGPSTagSet$GPSMapDatum));
	tags->add($$new($ExifGPSTagSet$GPSDestLatitudeRef));
	tags->add($$new($ExifGPSTagSet$GPSDestLatitude));
	tags->add($$new($ExifGPSTagSet$GPSDestLongitudeRef));
	tags->add($$new($ExifGPSTagSet$GPSDestLongitude));
	tags->add($$new($ExifGPSTagSet$GPSDestBearingRef));
	tags->add($$new($ExifGPSTagSet$GPSDestBearing));
	tags->add($$new($ExifGPSTagSet$GPSDestDistanceRef));
	tags->add($$new($ExifGPSTagSet$GPSDestDistance));
	tags->add($$new($ExifGPSTagSet$GPSProcessingMethod));
	tags->add($$new($ExifGPSTagSet$GPSAreaInformation));
	tags->add($$new($ExifGPSTagSet$GPSDateStamp));
	tags->add($$new($ExifGPSTagSet$GPSDifferential));
	return tags;
}

void ExifGPSTagSet::init$() {
	$TIFFTagSet::init$($(initTags()));
}

ExifGPSTagSet* ExifGPSTagSet::getInstance() {
	$load(ExifGPSTagSet);
	$synchronized(class$) {
		$init(ExifGPSTagSet);
		if (ExifGPSTagSet::theInstance == nullptr) {
			$assignStatic(ExifGPSTagSet::theInstance, $new(ExifGPSTagSet));
		}
		return ExifGPSTagSet::theInstance;
	}
}

void clinit$ExifGPSTagSet($Class* class$) {
	$assignStatic(ExifGPSTagSet::GPS_VERSION_2_2, "2200"_s);
	$assignStatic(ExifGPSTagSet::LATITUDE_REF_NORTH, "N"_s);
	$assignStatic(ExifGPSTagSet::LATITUDE_REF_SOUTH, "S"_s);
	$assignStatic(ExifGPSTagSet::LONGITUDE_REF_EAST, "E"_s);
	$assignStatic(ExifGPSTagSet::LONGITUDE_REF_WEST, "W"_s);
	$assignStatic(ExifGPSTagSet::STATUS_MEASUREMENT_IN_PROGRESS, "A"_s);
	$assignStatic(ExifGPSTagSet::STATUS_MEASUREMENT_INTEROPERABILITY, "V"_s);
	$assignStatic(ExifGPSTagSet::MEASURE_MODE_2D, "2"_s);
	$assignStatic(ExifGPSTagSet::MEASURE_MODE_3D, "3"_s);
	$assignStatic(ExifGPSTagSet::SPEED_REF_KILOMETERS_PER_HOUR, "K"_s);
	$assignStatic(ExifGPSTagSet::SPEED_REF_MILES_PER_HOUR, "M"_s);
	$assignStatic(ExifGPSTagSet::SPEED_REF_KNOTS, "N"_s);
	$assignStatic(ExifGPSTagSet::DIRECTION_REF_TRUE, "T"_s);
	$assignStatic(ExifGPSTagSet::DIRECTION_REF_MAGNETIC, "M"_s);
	$assignStatic(ExifGPSTagSet::DEST_DISTANCE_REF_KILOMETERS, "K"_s);
	$assignStatic(ExifGPSTagSet::DEST_DISTANCE_REF_MILES, "M"_s);
	$assignStatic(ExifGPSTagSet::DEST_DISTANCE_REF_KNOTS, "N"_s);
	$assignStatic(ExifGPSTagSet::theInstance, nullptr);
}

ExifGPSTagSet::ExifGPSTagSet() {
}

$Class* ExifGPSTagSet::load$($String* name, bool initialize) {
	$loadClass(ExifGPSTagSet, name, initialize, &_ExifGPSTagSet_ClassInfo_, clinit$ExifGPSTagSet, allocate$ExifGPSTagSet);
	return class$;
}

$Class* ExifGPSTagSet::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax