#ifndef _com_sun_imageio_plugins_jpeg_DRIMarkerSegment_h_
#define _com_sun_imageio_plugins_jpeg_DRIMarkerSegment_h_
//$ class com.sun.imageio.plugins.jpeg.DRIMarkerSegment
//$ extends com.sun.imageio.plugins.jpeg.MarkerSegment

#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>

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

class DRIMarkerSegment : public ::com::sun::imageio::plugins::jpeg::MarkerSegment {
	$class(DRIMarkerSegment, $NO_CLASS_INIT, ::com::sun::imageio::plugins::jpeg::MarkerSegment)
public:
	DRIMarkerSegment();
	void init$(::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	void init$(::org::w3c::dom::Node* node);
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode() override;
	virtual void print() override;
	virtual void updateFromNativeNode(::org::w3c::dom::Node* node, bool fromScratch);
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios) override;
	int32_t restartInterval = 0;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_DRIMarkerSegment_h_