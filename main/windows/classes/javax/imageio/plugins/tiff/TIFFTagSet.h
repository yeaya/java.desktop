#ifndef _javax_imageio_plugins_tiff_TIFFTagSet_h_
#define _javax_imageio_plugins_tiff_TIFFTagSet_h_
//$ class javax.imageio.plugins.tiff.TIFFTagSet
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
		class SortedMap;
		class SortedSet;
	}
}
namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {
				class TIFFTag;
			}
		}
	}
}

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

class $export TIFFTagSet : public ::java::lang::Object {
	$class(TIFFTagSet, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TIFFTagSet();
	void init$();
	void init$(::java::util::List* tags);
	virtual ::javax::imageio::plugins::tiff::TIFFTag* getTag(int32_t tagNumber);
	virtual ::javax::imageio::plugins::tiff::TIFFTag* getTag($String* tagName);
	virtual ::java::util::SortedSet* getTagNames();
	virtual ::java::util::SortedSet* getTagNumbers();
	::java::util::SortedMap* allowedTagsByNumber = nullptr;
	::java::util::SortedMap* allowedTagsByName = nullptr;
};

			} // tiff
		} // plugins
	} // imageio
} // javax

#endif // _javax_imageio_plugins_tiff_TIFFTagSet_h_