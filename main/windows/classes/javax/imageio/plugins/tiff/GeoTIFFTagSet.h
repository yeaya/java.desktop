#ifndef _javax_imageio_plugins_tiff_GeoTIFFTagSet_h_
#define _javax_imageio_plugins_tiff_GeoTIFFTagSet_h_
//$ class javax.imageio.plugins.tiff.GeoTIFFTagSet
//$ extends javax.imageio.plugins.tiff.TIFFTagSet

#include <javax/imageio/plugins/tiff/TIFFTagSet.h>

#pragma push_macro("TAG_GEO_ASCII_PARAMS")
#undef TAG_GEO_ASCII_PARAMS
#pragma push_macro("TAG_GEO_DOUBLE_PARAMS")
#undef TAG_GEO_DOUBLE_PARAMS
#pragma push_macro("TAG_GEO_KEY_DIRECTORY")
#undef TAG_GEO_KEY_DIRECTORY
#pragma push_macro("TAG_MODEL_PIXEL_SCALE")
#undef TAG_MODEL_PIXEL_SCALE
#pragma push_macro("TAG_MODEL_TIE_POINT")
#undef TAG_MODEL_TIE_POINT
#pragma push_macro("TAG_MODEL_TRANSFORMATION")
#undef TAG_MODEL_TRANSFORMATION

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

class $export GeoTIFFTagSet : public ::javax::imageio::plugins::tiff::TIFFTagSet {
	$class(GeoTIFFTagSet, 0, ::javax::imageio::plugins::tiff::TIFFTagSet)
public:
	GeoTIFFTagSet();
	void init$();
	static ::javax::imageio::plugins::tiff::GeoTIFFTagSet* getInstance();
	static void initTags();
	static ::javax::imageio::plugins::tiff::GeoTIFFTagSet* theInstance;
	static const int32_t TAG_MODEL_PIXEL_SCALE = 0x0000830E;
	static const int32_t TAG_MODEL_TRANSFORMATION = 0x000085D8;
	static const int32_t TAG_MODEL_TIE_POINT = 0x00008482;
	static const int32_t TAG_GEO_KEY_DIRECTORY = 0x000087AF;
	static const int32_t TAG_GEO_DOUBLE_PARAMS = 0x000087B0;
	static const int32_t TAG_GEO_ASCII_PARAMS = 0x000087B1;
	static ::java::util::List* tags;
};

			} // tiff
		} // plugins
	} // imageio
} // javax

#pragma pop_macro("TAG_GEO_ASCII_PARAMS")
#pragma pop_macro("TAG_GEO_DOUBLE_PARAMS")
#pragma pop_macro("TAG_GEO_KEY_DIRECTORY")
#pragma pop_macro("TAG_MODEL_PIXEL_SCALE")
#pragma pop_macro("TAG_MODEL_TIE_POINT")
#pragma pop_macro("TAG_MODEL_TRANSFORMATION")

#endif // _javax_imageio_plugins_tiff_GeoTIFFTagSet_h_