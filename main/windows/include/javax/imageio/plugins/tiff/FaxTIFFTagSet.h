#ifndef _javax_imageio_plugins_tiff_FaxTIFFTagSet_h_
#define _javax_imageio_plugins_tiff_FaxTIFFTagSet_h_
//$ class javax.imageio.plugins.tiff.FaxTIFFTagSet
//$ extends javax.imageio.plugins.tiff.TIFFTagSet

#include <javax/imageio/plugins/tiff/TIFFTagSet.h>

#pragma push_macro("CLEAN_FAX_DATA_ERRORS_CORRECTED")
#undef CLEAN_FAX_DATA_ERRORS_CORRECTED
#pragma push_macro("CLEAN_FAX_DATA_ERRORS_UNCORRECTED")
#undef CLEAN_FAX_DATA_ERRORS_UNCORRECTED
#pragma push_macro("CLEAN_FAX_DATA_NO_ERRORS")
#undef CLEAN_FAX_DATA_NO_ERRORS
#pragma push_macro("TAG_BAD_FAX_LINES")
#undef TAG_BAD_FAX_LINES
#pragma push_macro("TAG_CLEAN_FAX_DATA")
#undef TAG_CLEAN_FAX_DATA
#pragma push_macro("TAG_CONSECUTIVE_BAD_LINES")
#undef TAG_CONSECUTIVE_BAD_LINES

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

class $import FaxTIFFTagSet : public ::javax::imageio::plugins::tiff::TIFFTagSet {
	$class(FaxTIFFTagSet, 0, ::javax::imageio::plugins::tiff::TIFFTagSet)
public:
	FaxTIFFTagSet();
	void init$();
	static ::javax::imageio::plugins::tiff::FaxTIFFTagSet* getInstance();
	static void initTags();
	static ::javax::imageio::plugins::tiff::FaxTIFFTagSet* theInstance;
	static const int32_t TAG_BAD_FAX_LINES = 326;
	static const int32_t TAG_CLEAN_FAX_DATA = 327;
	static const int32_t CLEAN_FAX_DATA_NO_ERRORS = 0;
	static const int32_t CLEAN_FAX_DATA_ERRORS_CORRECTED = 1;
	static const int32_t CLEAN_FAX_DATA_ERRORS_UNCORRECTED = 2;
	static const int32_t TAG_CONSECUTIVE_BAD_LINES = 328;
	static ::java::util::List* tags;
};

			} // tiff
		} // plugins
	} // imageio
} // javax

#pragma pop_macro("CLEAN_FAX_DATA_ERRORS_CORRECTED")
#pragma pop_macro("CLEAN_FAX_DATA_ERRORS_UNCORRECTED")
#pragma pop_macro("CLEAN_FAX_DATA_NO_ERRORS")
#pragma pop_macro("TAG_BAD_FAX_LINES")
#pragma pop_macro("TAG_CLEAN_FAX_DATA")
#pragma pop_macro("TAG_CONSECUTIVE_BAD_LINES")

#endif // _javax_imageio_plugins_tiff_FaxTIFFTagSet_h_