#ifndef _com_sun_imageio_plugins_tiff_TIFFStreamMetadataFormatResources_h_
#define _com_sun_imageio_plugins_tiff_TIFFStreamMetadataFormatResources_h_
//$ class com.sun.imageio.plugins.tiff.TIFFStreamMetadataFormatResources
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFStreamMetadataFormatResources : public ::java::util::ListResourceBundle {
	$class(TIFFStreamMetadataFormatResources, 0, ::java::util::ListResourceBundle)
public:
	TIFFStreamMetadataFormatResources();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
	static $Array<::java::lang::Object, 2>* contents;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFStreamMetadataFormatResources_h_