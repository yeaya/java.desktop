#ifndef _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumbRGB_h_
#define _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumbRGB_h_
//$ class com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbRGB
//$ extends com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbUncompressed

#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbUncompressed.h>

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

class JFIFMarkerSegment$JFIFThumbRGB : public ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbUncompressed {
	$class(JFIFMarkerSegment$JFIFThumbRGB, $NO_CLASS_INIT, ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbUncompressed)
public:
	JFIFMarkerSegment$JFIFThumbRGB();
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer, int32_t width, int32_t height);
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::org::w3c::dom::Node* node);
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::java::awt::image::BufferedImage* thumb);
	virtual int32_t getLength() override;
	virtual ::java::awt::image::BufferedImage* getThumbnail(::javax::imageio::stream::ImageInputStream* iis, ::com::sun::imageio::plugins::jpeg::JPEGImageReader* reader) override;
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer) override;
	::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0 = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumbRGB_h_