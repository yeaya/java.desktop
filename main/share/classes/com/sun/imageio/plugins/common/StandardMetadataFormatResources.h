#ifndef _com_sun_imageio_plugins_common_StandardMetadataFormatResources_h_
#define _com_sun_imageio_plugins_common_StandardMetadataFormatResources_h_
//$ class com.sun.imageio.plugins.common.StandardMetadataFormatResources
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

class StandardMetadataFormatResources : public ::java::util::ListResourceBundle {
	$class(StandardMetadataFormatResources, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	StandardMetadataFormatResources();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_common_StandardMetadataFormatResources_h_