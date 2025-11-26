#ifndef _javax_imageio_plugins_tiff_ExifGPSTagSet_h_
#define _javax_imageio_plugins_tiff_ExifGPSTagSet_h_
//$ class javax.imageio.plugins.tiff.ExifGPSTagSet
//$ extends javax.imageio.plugins.tiff.TIFFTagSet

#include <javax/imageio/plugins/tiff/TIFFTagSet.h>

#pragma push_macro("ALTITUDE_REF_SEA_LEVEL")
#undef ALTITUDE_REF_SEA_LEVEL
#pragma push_macro("ALTITUDE_REF_SEA_LEVEL_REFERENCE")
#undef ALTITUDE_REF_SEA_LEVEL_REFERENCE
#pragma push_macro("DEST_DISTANCE_REF_KILOMETERS")
#undef DEST_DISTANCE_REF_KILOMETERS
#pragma push_macro("DEST_DISTANCE_REF_KNOTS")
#undef DEST_DISTANCE_REF_KNOTS
#pragma push_macro("DEST_DISTANCE_REF_MILES")
#undef DEST_DISTANCE_REF_MILES
#pragma push_macro("DIFFERENTIAL_CORRECTION_APPLIED")
#undef DIFFERENTIAL_CORRECTION_APPLIED
#pragma push_macro("DIFFERENTIAL_CORRECTION_NONE")
#undef DIFFERENTIAL_CORRECTION_NONE
#pragma push_macro("DIRECTION_REF_MAGNETIC")
#undef DIRECTION_REF_MAGNETIC
#pragma push_macro("DIRECTION_REF_TRUE")
#undef DIRECTION_REF_TRUE
#pragma push_macro("GPS_VERSION_2_2")
#undef GPS_VERSION_2_2
#pragma push_macro("LATITUDE_REF_NORTH")
#undef LATITUDE_REF_NORTH
#pragma push_macro("LATITUDE_REF_SOUTH")
#undef LATITUDE_REF_SOUTH
#pragma push_macro("LONGITUDE_REF_EAST")
#undef LONGITUDE_REF_EAST
#pragma push_macro("LONGITUDE_REF_WEST")
#undef LONGITUDE_REF_WEST
#pragma push_macro("MEASURE_MODE_2D")
#undef MEASURE_MODE_2D
#pragma push_macro("MEASURE_MODE_3D")
#undef MEASURE_MODE_3D
#pragma push_macro("SPEED_REF_KILOMETERS_PER_HOUR")
#undef SPEED_REF_KILOMETERS_PER_HOUR
#pragma push_macro("SPEED_REF_KNOTS")
#undef SPEED_REF_KNOTS
#pragma push_macro("SPEED_REF_MILES_PER_HOUR")
#undef SPEED_REF_MILES_PER_HOUR
#pragma push_macro("STATUS_MEASUREMENT_INTEROPERABILITY")
#undef STATUS_MEASUREMENT_INTEROPERABILITY
#pragma push_macro("STATUS_MEASUREMENT_IN_PROGRESS")
#undef STATUS_MEASUREMENT_IN_PROGRESS
#pragma push_macro("TAG_GPS_ALTITUDE")
#undef TAG_GPS_ALTITUDE
#pragma push_macro("TAG_GPS_ALTITUDE_REF")
#undef TAG_GPS_ALTITUDE_REF
#pragma push_macro("TAG_GPS_AREA_INFORMATION")
#undef TAG_GPS_AREA_INFORMATION
#pragma push_macro("TAG_GPS_DATE_STAMP")
#undef TAG_GPS_DATE_STAMP
#pragma push_macro("TAG_GPS_DEST_BEARING")
#undef TAG_GPS_DEST_BEARING
#pragma push_macro("TAG_GPS_DEST_BEARING_REF")
#undef TAG_GPS_DEST_BEARING_REF
#pragma push_macro("TAG_GPS_DEST_DISTANCE")
#undef TAG_GPS_DEST_DISTANCE
#pragma push_macro("TAG_GPS_DEST_DISTANCE_REF")
#undef TAG_GPS_DEST_DISTANCE_REF
#pragma push_macro("TAG_GPS_DEST_LATITUDE")
#undef TAG_GPS_DEST_LATITUDE
#pragma push_macro("TAG_GPS_DEST_LATITUDE_REF")
#undef TAG_GPS_DEST_LATITUDE_REF
#pragma push_macro("TAG_GPS_DEST_LONGITUDE")
#undef TAG_GPS_DEST_LONGITUDE
#pragma push_macro("TAG_GPS_DEST_LONGITUDE_REF")
#undef TAG_GPS_DEST_LONGITUDE_REF
#pragma push_macro("TAG_GPS_DIFFERENTIAL")
#undef TAG_GPS_DIFFERENTIAL
#pragma push_macro("TAG_GPS_DOP")
#undef TAG_GPS_DOP
#pragma push_macro("TAG_GPS_IMG_DIRECTION")
#undef TAG_GPS_IMG_DIRECTION
#pragma push_macro("TAG_GPS_IMG_DIRECTION_REF")
#undef TAG_GPS_IMG_DIRECTION_REF
#pragma push_macro("TAG_GPS_LATITUDE")
#undef TAG_GPS_LATITUDE
#pragma push_macro("TAG_GPS_LATITUDE_REF")
#undef TAG_GPS_LATITUDE_REF
#pragma push_macro("TAG_GPS_LONGITUDE")
#undef TAG_GPS_LONGITUDE
#pragma push_macro("TAG_GPS_LONGITUDE_REF")
#undef TAG_GPS_LONGITUDE_REF
#pragma push_macro("TAG_GPS_MAP_DATUM")
#undef TAG_GPS_MAP_DATUM
#pragma push_macro("TAG_GPS_MEASURE_MODE")
#undef TAG_GPS_MEASURE_MODE
#pragma push_macro("TAG_GPS_PROCESSING_METHOD")
#undef TAG_GPS_PROCESSING_METHOD
#pragma push_macro("TAG_GPS_SATELLITES")
#undef TAG_GPS_SATELLITES
#pragma push_macro("TAG_GPS_SPEED")
#undef TAG_GPS_SPEED
#pragma push_macro("TAG_GPS_SPEED_REF")
#undef TAG_GPS_SPEED_REF
#pragma push_macro("TAG_GPS_STATUS")
#undef TAG_GPS_STATUS
#pragma push_macro("TAG_GPS_TIME_STAMP")
#undef TAG_GPS_TIME_STAMP
#pragma push_macro("TAG_GPS_TRACK")
#undef TAG_GPS_TRACK
#pragma push_macro("TAG_GPS_TRACK_REF")
#undef TAG_GPS_TRACK_REF
#pragma push_macro("TAG_GPS_VERSION_ID")
#undef TAG_GPS_VERSION_ID

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

class $import ExifGPSTagSet : public ::javax::imageio::plugins::tiff::TIFFTagSet {
	$class(ExifGPSTagSet, 0, ::javax::imageio::plugins::tiff::TIFFTagSet)
public:
	ExifGPSTagSet();
	void init$();
	static ::javax::imageio::plugins::tiff::ExifGPSTagSet* getInstance();
	static ::java::util::List* initTags();
	static ::javax::imageio::plugins::tiff::ExifGPSTagSet* theInstance;
	static const int32_t TAG_GPS_VERSION_ID = 0;
	static $String* GPS_VERSION_2_2;
	static const int32_t TAG_GPS_LATITUDE_REF = 1;
	static const int32_t TAG_GPS_LATITUDE = 2;
	static const int32_t TAG_GPS_LONGITUDE_REF = 3;
	static const int32_t TAG_GPS_LONGITUDE = 4;
	static const int32_t TAG_GPS_ALTITUDE_REF = 5;
	static const int32_t TAG_GPS_ALTITUDE = 6;
	static const int32_t TAG_GPS_TIME_STAMP = 7;
	static const int32_t TAG_GPS_SATELLITES = 8;
	static const int32_t TAG_GPS_STATUS = 9;
	static const int32_t TAG_GPS_MEASURE_MODE = 10;
	static const int32_t TAG_GPS_DOP = 11;
	static const int32_t TAG_GPS_SPEED_REF = 12;
	static const int32_t TAG_GPS_SPEED = 13;
	static const int32_t TAG_GPS_TRACK_REF = 14;
	static const int32_t TAG_GPS_TRACK = 15;
	static const int32_t TAG_GPS_IMG_DIRECTION_REF = 16;
	static const int32_t TAG_GPS_IMG_DIRECTION = 17;
	static const int32_t TAG_GPS_MAP_DATUM = 18;
	static const int32_t TAG_GPS_DEST_LATITUDE_REF = 19;
	static const int32_t TAG_GPS_DEST_LATITUDE = 20;
	static const int32_t TAG_GPS_DEST_LONGITUDE_REF = 21;
	static const int32_t TAG_GPS_DEST_LONGITUDE = 22;
	static const int32_t TAG_GPS_DEST_BEARING_REF = 23;
	static const int32_t TAG_GPS_DEST_BEARING = 24;
	static const int32_t TAG_GPS_DEST_DISTANCE_REF = 25;
	static const int32_t TAG_GPS_DEST_DISTANCE = 26;
	static const int32_t TAG_GPS_PROCESSING_METHOD = 27;
	static const int32_t TAG_GPS_AREA_INFORMATION = 28;
	static const int32_t TAG_GPS_DATE_STAMP = 29;
	static const int32_t TAG_GPS_DIFFERENTIAL = 30;
	static $String* LATITUDE_REF_NORTH;
	static $String* LATITUDE_REF_SOUTH;
	static $String* LONGITUDE_REF_EAST;
	static $String* LONGITUDE_REF_WEST;
	static const int32_t ALTITUDE_REF_SEA_LEVEL = 0;
	static const int32_t ALTITUDE_REF_SEA_LEVEL_REFERENCE = 1;
	static $String* STATUS_MEASUREMENT_IN_PROGRESS;
	static $String* STATUS_MEASUREMENT_INTEROPERABILITY;
	static $String* MEASURE_MODE_2D;
	static $String* MEASURE_MODE_3D;
	static $String* SPEED_REF_KILOMETERS_PER_HOUR;
	static $String* SPEED_REF_MILES_PER_HOUR;
	static $String* SPEED_REF_KNOTS;
	static $String* DIRECTION_REF_TRUE;
	static $String* DIRECTION_REF_MAGNETIC;
	static $String* DEST_DISTANCE_REF_KILOMETERS;
	static $String* DEST_DISTANCE_REF_MILES;
	static $String* DEST_DISTANCE_REF_KNOTS;
	static const int32_t DIFFERENTIAL_CORRECTION_NONE = 0;
	static const int32_t DIFFERENTIAL_CORRECTION_APPLIED = 1;
};

			} // tiff
		} // plugins
	} // imageio
} // javax

#pragma pop_macro("ALTITUDE_REF_SEA_LEVEL")
#pragma pop_macro("ALTITUDE_REF_SEA_LEVEL_REFERENCE")
#pragma pop_macro("DEST_DISTANCE_REF_KILOMETERS")
#pragma pop_macro("DEST_DISTANCE_REF_KNOTS")
#pragma pop_macro("DEST_DISTANCE_REF_MILES")
#pragma pop_macro("DIFFERENTIAL_CORRECTION_APPLIED")
#pragma pop_macro("DIFFERENTIAL_CORRECTION_NONE")
#pragma pop_macro("DIRECTION_REF_MAGNETIC")
#pragma pop_macro("DIRECTION_REF_TRUE")
#pragma pop_macro("GPS_VERSION_2_2")
#pragma pop_macro("LATITUDE_REF_NORTH")
#pragma pop_macro("LATITUDE_REF_SOUTH")
#pragma pop_macro("LONGITUDE_REF_EAST")
#pragma pop_macro("LONGITUDE_REF_WEST")
#pragma pop_macro("MEASURE_MODE_2D")
#pragma pop_macro("MEASURE_MODE_3D")
#pragma pop_macro("SPEED_REF_KILOMETERS_PER_HOUR")
#pragma pop_macro("SPEED_REF_KNOTS")
#pragma pop_macro("SPEED_REF_MILES_PER_HOUR")
#pragma pop_macro("STATUS_MEASUREMENT_INTEROPERABILITY")
#pragma pop_macro("STATUS_MEASUREMENT_IN_PROGRESS")
#pragma pop_macro("TAG_GPS_ALTITUDE")
#pragma pop_macro("TAG_GPS_ALTITUDE_REF")
#pragma pop_macro("TAG_GPS_AREA_INFORMATION")
#pragma pop_macro("TAG_GPS_DATE_STAMP")
#pragma pop_macro("TAG_GPS_DEST_BEARING")
#pragma pop_macro("TAG_GPS_DEST_BEARING_REF")
#pragma pop_macro("TAG_GPS_DEST_DISTANCE")
#pragma pop_macro("TAG_GPS_DEST_DISTANCE_REF")
#pragma pop_macro("TAG_GPS_DEST_LATITUDE")
#pragma pop_macro("TAG_GPS_DEST_LATITUDE_REF")
#pragma pop_macro("TAG_GPS_DEST_LONGITUDE")
#pragma pop_macro("TAG_GPS_DEST_LONGITUDE_REF")
#pragma pop_macro("TAG_GPS_DIFFERENTIAL")
#pragma pop_macro("TAG_GPS_DOP")
#pragma pop_macro("TAG_GPS_IMG_DIRECTION")
#pragma pop_macro("TAG_GPS_IMG_DIRECTION_REF")
#pragma pop_macro("TAG_GPS_LATITUDE")
#pragma pop_macro("TAG_GPS_LATITUDE_REF")
#pragma pop_macro("TAG_GPS_LONGITUDE")
#pragma pop_macro("TAG_GPS_LONGITUDE_REF")
#pragma pop_macro("TAG_GPS_MAP_DATUM")
#pragma pop_macro("TAG_GPS_MEASURE_MODE")
#pragma pop_macro("TAG_GPS_PROCESSING_METHOD")
#pragma pop_macro("TAG_GPS_SATELLITES")
#pragma pop_macro("TAG_GPS_SPEED")
#pragma pop_macro("TAG_GPS_SPEED_REF")
#pragma pop_macro("TAG_GPS_STATUS")
#pragma pop_macro("TAG_GPS_TIME_STAMP")
#pragma pop_macro("TAG_GPS_TRACK")
#pragma pop_macro("TAG_GPS_TRACK_REF")
#pragma pop_macro("TAG_GPS_VERSION_ID")

#endif // _javax_imageio_plugins_tiff_ExifGPSTagSet_h_