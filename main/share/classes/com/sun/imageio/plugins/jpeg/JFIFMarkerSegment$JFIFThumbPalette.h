#ifndef _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumbPalette_h_
#define _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumbPalette_h_
//$ class com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbPalette
//$ extends com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbUncompressed

#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbUncompressed.h>

#pragma push_macro("PALETTE_SIZE")
#undef PALETTE_SIZE

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

class JFIFMarkerSegment$JFIFThumbPalette : public ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbUncompressed {
	$class(JFIFMarkerSegment$JFIFThumbPalette, $NO_CLASS_INIT, ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbUncompressed)
public:
	JFIFMarkerSegment$JFIFThumbPalette();
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer, int32_t width, int32_t height);
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::org::w3c::dom::Node* node);
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::java::awt::image::BufferedImage* thumb);
	virtual int32_t getLength() override;
	virtual ::java::awt::image::BufferedImage* getThumbnail(::javax::imageio::stream::ImageInputStream* iis, ::com::sun::imageio::plugins::jpeg::JPEGImageReader* reader) override;
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer) override;
	::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0 = nullptr;
	static const int32_t PALETTE_SIZE = 768;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("PALETTE_SIZE")

#endif // _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumbPalette_h_