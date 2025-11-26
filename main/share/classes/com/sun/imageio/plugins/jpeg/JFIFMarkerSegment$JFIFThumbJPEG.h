#ifndef _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumbJPEG_h_
#define _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumbJPEG_h_
//$ class com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbJPEG
//$ extends com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumb

#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumb.h>
#include <java/lang/Array.h>

#pragma push_macro("PREAMBLE_SIZE")
#undef PREAMBLE_SIZE

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class JFIFMarkerSegment;
					class JPEGBuffer;
					class JPEGImageReader;
					class JPEGImageWriter;
					class JPEGMetadata;
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
			class ImageInputStream;
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

class JFIFMarkerSegment$JFIFThumbJPEG : public ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumb {
	$class(JFIFMarkerSegment$JFIFThumbJPEG, $NO_CLASS_INIT, ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumb)
public:
	JFIFMarkerSegment$JFIFThumbJPEG();
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer, int32_t length, ::com::sun::imageio::plugins::jpeg::JPEGImageReader* reader);
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::org::w3c::dom::Node* node);
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::java::awt::image::BufferedImage* thumb);
	virtual $Object* clone() override;
	virtual int32_t getHeight() override;
	virtual int32_t getLength() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode() override;
	virtual ::java::awt::image::BufferedImage* getThumbnail(::javax::imageio::stream::ImageInputStream* iis, ::com::sun::imageio::plugins::jpeg::JPEGImageReader* reader) override;
	virtual int32_t getWidth() override;
	virtual void print() override;
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer) override;
	::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0 = nullptr;
	::com::sun::imageio::plugins::jpeg::JPEGMetadata* thumbMetadata = nullptr;
	$bytes* data = nullptr;
	static const int32_t PREAMBLE_SIZE = 6;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("PREAMBLE_SIZE")

#endif // _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumbJPEG_h_