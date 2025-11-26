#ifndef _javax_imageio_ImageTranscoder_h_
#define _javax_imageio_ImageTranscoder_h_
//$ interface javax.imageio.ImageTranscoder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace imageio {
		class ImageTypeSpecifier;
		class ImageWriteParam;
	}
}
namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadata;
		}
	}
}

namespace javax {
	namespace imageio {

class $import ImageTranscoder : public ::java::lang::Object {
	$interface(ImageTranscoder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::imageio::metadata::IIOMetadata* convertImageMetadata(::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::ImageTypeSpecifier* imageType, ::javax::imageio::ImageWriteParam* param) {return nullptr;}
	virtual ::javax::imageio::metadata::IIOMetadata* convertStreamMetadata(::javax::imageio::metadata::IIOMetadata* inData, ::javax::imageio::ImageWriteParam* param) {return nullptr;}
};

	} // imageio
} // javax

#endif // _javax_imageio_ImageTranscoder_h_