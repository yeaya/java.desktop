#ifndef _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumbUncompressed_h_
#define _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumbUncompressed_h_
//$ class com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbUncompressed
//$ extends com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumb

#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumb.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class JFIFMarkerSegment;
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

class JFIFMarkerSegment$JFIFThumbUncompressed : public ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumb {
	$class(JFIFMarkerSegment$JFIFThumbUncompressed, $NO_CLASS_INIT, ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumb)
public:
	JFIFMarkerSegment$JFIFThumbUncompressed();
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer, int32_t width, int32_t height, int32_t skip, $String* name);
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::org::w3c::dom::Node* node, $String* name);
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::java::awt::image::BufferedImage* thumb);
	virtual int32_t getHeight() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode() override;
	virtual int32_t getWidth() override;
	virtual void print() override;
	virtual void readByteBuffer(::javax::imageio::stream::ImageInputStream* iis, $bytes* data, ::com::sun::imageio::plugins::jpeg::JPEGImageReader* reader, float workPortion, float workOffset);
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer) override;
	virtual void writePixels(::javax::imageio::stream::ImageOutputStream* ios, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer);
	::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0 = nullptr;
	::java::awt::image::BufferedImage* thumbnail = nullptr;
	int32_t thumbWidth = 0;
	int32_t thumbHeight = 0;
	$String* name = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumbUncompressed_h_