#ifndef _javax_imageio_plugins_tiff_ExifInteroperabilityTagSet_h_
#define _javax_imageio_plugins_tiff_ExifInteroperabilityTagSet_h_
//$ class javax.imageio.plugins.tiff.ExifInteroperabilityTagSet
//$ extends javax.imageio.plugins.tiff.TIFFTagSet

#include <javax/imageio/plugins/tiff/TIFFTagSet.h>

#pragma push_macro("INTEROPERABILITY_INDEX_R98")
#undef INTEROPERABILITY_INDEX_R98
#pragma push_macro("INTEROPERABILITY_INDEX_THM")
#undef INTEROPERABILITY_INDEX_THM
#pragma push_macro("TAG_INTEROPERABILITY_INDEX")
#undef TAG_INTEROPERABILITY_INDEX

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

class $import ExifInteroperabilityTagSet : public ::javax::imageio::plugins::tiff::TIFFTagSet {
	$class(ExifInteroperabilityTagSet, 0, ::javax::imageio::plugins::tiff::TIFFTagSet)
public:
	ExifInteroperabilityTagSet();
	void init$();
	static ::javax::imageio::plugins::tiff::ExifInteroperabilityTagSet* getInstance();
	static void initTags();
	static const int32_t TAG_INTEROPERABILITY_INDEX = 1;
	static $String* INTEROPERABILITY_INDEX_R98;
	static $String* INTEROPERABILITY_INDEX_THM;
	static ::javax::imageio::plugins::tiff::ExifInteroperabilityTagSet* theInstance;
	static ::java::util::List* tags;
};

			} // tiff
		} // plugins
	} // imageio
} // javax

#pragma pop_macro("INTEROPERABILITY_INDEX_R98")
#pragma pop_macro("INTEROPERABILITY_INDEX_THM")
#pragma pop_macro("TAG_INTEROPERABILITY_INDEX")

#endif // _javax_imageio_plugins_tiff_ExifInteroperabilityTagSet_h_