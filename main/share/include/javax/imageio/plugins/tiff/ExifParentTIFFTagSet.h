#ifndef _javax_imageio_plugins_tiff_ExifParentTIFFTagSet_h_
#define _javax_imageio_plugins_tiff_ExifParentTIFFTagSet_h_
//$ class javax.imageio.plugins.tiff.ExifParentTIFFTagSet
//$ extends javax.imageio.plugins.tiff.TIFFTagSet

#include <javax/imageio/plugins/tiff/TIFFTagSet.h>

#pragma push_macro("TAG_EXIF_IFD_POINTER")
#undef TAG_EXIF_IFD_POINTER
#pragma push_macro("TAG_GPS_INFO_IFD_POINTER")
#undef TAG_GPS_INFO_IFD_POINTER

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

class $import ExifParentTIFFTagSet : public ::javax::imageio::plugins::tiff::TIFFTagSet {
	$class(ExifParentTIFFTagSet, 0, ::javax::imageio::plugins::tiff::TIFFTagSet)
public:
	ExifParentTIFFTagSet();
	void init$();
	static ::javax::imageio::plugins::tiff::ExifParentTIFFTagSet* getInstance();
	static void initTags();
	static ::javax::imageio::plugins::tiff::ExifParentTIFFTagSet* theInstance;
	static const int32_t TAG_EXIF_IFD_POINTER = 0x00008769;
	static const int32_t TAG_GPS_INFO_IFD_POINTER = 0x00008825;
	static ::java::util::List* tags;
};

			} // tiff
		} // plugins
	} // imageio
} // javax

#pragma pop_macro("TAG_EXIF_IFD_POINTER")
#pragma pop_macro("TAG_GPS_INFO_IFD_POINTER")

#endif // _javax_imageio_plugins_tiff_ExifParentTIFFTagSet_h_