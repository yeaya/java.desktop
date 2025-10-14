#ifndef _javax_imageio_metadata_IIOMetadataController_h_
#define _javax_imageio_metadata_IIOMetadataController_h_
//$ interface javax.imageio.metadata.IIOMetadataController
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadata;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace metadata {

class $export IIOMetadataController : public ::java::lang::Object {
	$interface(IIOMetadataController, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool activate(::javax::imageio::metadata::IIOMetadata* metadata) {return false;}
};

		} // metadata
	} // imageio
} // javax

#endif // _javax_imageio_metadata_IIOMetadataController_h_