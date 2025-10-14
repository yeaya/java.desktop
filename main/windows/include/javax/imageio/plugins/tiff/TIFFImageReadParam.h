#ifndef _javax_imageio_plugins_tiff_TIFFImageReadParam_h_
#define _javax_imageio_plugins_tiff_TIFFImageReadParam_h_
//$ class javax.imageio.plugins.tiff.TIFFImageReadParam
//$ extends javax.imageio.ImageReadParam

#include <javax/imageio/ImageReadParam.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {
				class TIFFTagSet;
			}
		}
	}
}

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

class $import TIFFImageReadParam : public ::javax::imageio::ImageReadParam {
	$class(TIFFImageReadParam, $NO_CLASS_INIT, ::javax::imageio::ImageReadParam)
public:
	TIFFImageReadParam();
	void init$();
	void addAllowedTagSet(::javax::imageio::plugins::tiff::TIFFTagSet* tagSet);
	::java::util::List* getAllowedTagSets();
	bool getReadUnknownTags();
	void removeAllowedTagSet(::javax::imageio::plugins::tiff::TIFFTagSet* tagSet);
	void setReadUnknownTags(bool readUnknownTags);
	::java::util::List* allowedTagSets = nullptr;
	bool readUnknownTags = false;
};

			} // tiff
		} // plugins
	} // imageio
} // javax

#endif // _javax_imageio_plugins_tiff_TIFFImageReadParam_h_