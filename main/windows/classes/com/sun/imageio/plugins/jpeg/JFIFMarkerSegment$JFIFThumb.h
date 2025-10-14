#ifndef _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumb_h_
#define _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumb_h_
//$ class com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumb
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

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

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class JFIFMarkerSegment$JFIFThumb : public ::java::lang::Cloneable {
	$class(JFIFMarkerSegment$JFIFThumb, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	JFIFMarkerSegment$JFIFThumb();
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0);
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	virtual $Object* clone() override;
	virtual int32_t getHeight() {return 0;}
	virtual int32_t getLength() {return 0;}
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode() {return nullptr;}
	virtual ::java::awt::image::BufferedImage* getThumbnail(::javax::imageio::stream::ImageInputStream* iis, ::com::sun::imageio::plugins::jpeg::JPEGImageReader* reader) {return nullptr;}
	virtual int32_t getWidth() {return 0;}
	virtual void print() {}
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer) {}
	::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0 = nullptr;
	int64_t streamPos = 0;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$JFIFThumb_h_