#ifndef _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFExtensionMarkerSegment_h_
#define _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFExtensionMarkerSegment_h_
//$ class com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFExtensionMarkerSegment
//$ extends com.sun.imageio.plugins.jpeg.MarkerSegment

#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>

#pragma push_macro("DATA_SIZE")
#undef DATA_SIZE
#pragma push_macro("ID_SIZE")
#undef ID_SIZE

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class JFIFMarkerSegment;
					class JFIFMarkerSegment$JFIFThumb;
					class JPEGBuffer;
					class JPEGImageReader;
					class JPEGImageWriter;
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
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

class JFIFMarkerSegment$JFIFExtensionMarkerSegment : public ::com::sun::imageio::plugins::jpeg::MarkerSegment {
	$class(JFIFMarkerSegment$JFIFExtensionMarkerSegment, $NO_CLASS_INIT, ::com::sun::imageio::plugins::jpeg::MarkerSegment)
public:
	JFIFMarkerSegment$JFIFExtensionMarkerSegment();
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer, ::com::sun::imageio::plugins::jpeg::JPEGImageReader* reader);
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::org::w3c::dom::Node* node);
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::java::awt::image::BufferedImage* thumbnail);
	virtual $Object* clone() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode() override;
	virtual void print() override;
	virtual void setThumbnail(::java::awt::image::BufferedImage* thumbnail);
	using ::com::sun::imageio::plugins::jpeg::MarkerSegment::write;
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer);
	::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0 = nullptr;
	int32_t code = 0;
	::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumb* thumb = nullptr;
	static const int32_t DATA_SIZE = 6;
	static const int32_t ID_SIZE = 5;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("DATA_SIZE")
#pragma pop_macro("ID_SIZE")

#endif // _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFExtensionMarkerSegment_h_