#ifndef _com_sun_imageio_plugins_jpeg_COMMarkerSegment_h_
#define _com_sun_imageio_plugins_jpeg_COMMarkerSegment_h_
//$ class com.sun.imageio.plugins.jpeg.COMMarkerSegment
//$ extends com.sun.imageio.plugins.jpeg.MarkerSegment

#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>

#pragma push_macro("ENCODING")
#undef ENCODING

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

class COMMarkerSegment : public ::com::sun::imageio::plugins::jpeg::MarkerSegment {
	$class(COMMarkerSegment, 0, ::com::sun::imageio::plugins::jpeg::MarkerSegment)
public:
	COMMarkerSegment();
	void init$(::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	void init$($String* comment);
	void init$(::org::w3c::dom::Node* node);
	virtual $String* getComment();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode() override;
	virtual void print() override;
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios) override;
	static $String* ENCODING;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("ENCODING")

#endif // _com_sun_imageio_plugins_jpeg_COMMarkerSegment_h_