#ifndef _com_sun_imageio_plugins_jpeg_AdobeMarkerSegment_h_
#define _com_sun_imageio_plugins_jpeg_AdobeMarkerSegment_h_
//$ class com.sun.imageio.plugins.jpeg.AdobeMarkerSegment
//$ extends com.sun.imageio.plugins.jpeg.MarkerSegment

#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>

#pragma push_macro("ID_SIZE")
#undef ID_SIZE

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class JPEGBuffer;
				}
			}
		}
	}
}
namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadataNode;
		}
	}
}
namespace javax {
	namespace imageio {
		namespace stream {
			class ImageOutputStream;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class AdobeMarkerSegment : public ::com::sun::imageio::plugins::jpeg::MarkerSegment {
	$class(AdobeMarkerSegment, $NO_CLASS_INIT, ::com::sun::imageio::plugins::jpeg::MarkerSegment)
public:
	AdobeMarkerSegment();
	void init$(int32_t transform);
	void init$(::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	void init$(::org::w3c::dom::Node* node);
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode() override;
	virtual void print() override;
	virtual void updateFromNativeNode(::org::w3c::dom::Node* node, bool fromScratch);
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios) override;
	static void writeAdobeSegment(::javax::imageio::stream::ImageOutputStream* ios, int32_t transform);
	int32_t version = 0;
	int32_t flags0 = 0;
	int32_t flags1 = 0;
	int32_t transform = 0;
	static const int32_t ID_SIZE = 5;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("ID_SIZE")

#endif // _com_sun_imageio_plugins_jpeg_AdobeMarkerSegment_h_