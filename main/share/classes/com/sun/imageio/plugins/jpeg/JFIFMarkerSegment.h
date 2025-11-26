#ifndef _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment_h_
#define _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment_h_
//$ class com.sun.imageio.plugins.jpeg.JFIFMarkerSegment
//$ extends com.sun.imageio.plugins.jpeg.MarkerSegment

#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/lang/Array.h>

#pragma push_macro("DATA_SIZE")
#undef DATA_SIZE
#pragma push_macro("ID_SIZE")
#undef ID_SIZE
#pragma push_macro("MAX_THUMB_HEIGHT")
#undef MAX_THUMB_HEIGHT
#pragma push_macro("MAX_THUMB_WIDTH")
#undef MAX_THUMB_WIDTH
#pragma push_macro("THUMB_JPEG")
#undef THUMB_JPEG
#pragma push_macro("THUMB_PALETTE")
#undef THUMB_PALETTE
#pragma push_macro("THUMB_RGB")
#undef THUMB_RGB
#pragma push_macro("THUMB_UNASSIGNED")
#undef THUMB_UNASSIGNED

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class JFIFMarkerSegment$ICCMarkerSegment;
					class JFIFMarkerSegment$JFIFExtensionMarkerSegment;
					class JFIFMarkerSegment$JFIFThumbRGB;
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
		namespace color {
			class ICC_ColorSpace;
			class ICC_Profile;
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
namespace java {
	namespace util {
		class ArrayList;
		class List;
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

class JFIFMarkerSegment : public ::com::sun::imageio::plugins::jpeg::MarkerSegment {
	$class(JFIFMarkerSegment, $NO_CLASS_INIT, ::com::sun::imageio::plugins::jpeg::MarkerSegment)
public:
	JFIFMarkerSegment();
	void init$();
	void init$(::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	void init$(::org::w3c::dom::Node* node);
	virtual void addICC(::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	virtual void addICC(::java::awt::color::ICC_ColorSpace* cs);
	virtual void addJFXX(::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer, ::com::sun::imageio::plugins::jpeg::JPEGImageReader* reader);
	virtual $Object* clone() override;
	static ::java::awt::image::BufferedImage* expandGrayThumb(::java::awt::image::BufferedImage* thumb);
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode() override;
	virtual ::java::awt::image::BufferedImage* getThumbnail(::javax::imageio::stream::ImageInputStream* iis, int32_t index, ::com::sun::imageio::plugins::jpeg::JPEGImageReader* reader);
	virtual int32_t getThumbnailHeight(int32_t index);
	virtual int32_t getThumbnailWidth(int32_t index);
	virtual void print() override;
	virtual void updateFromNativeNode(::org::w3c::dom::Node* node, bool fromScratch);
	using ::com::sun::imageio::plugins::jpeg::MarkerSegment::write;
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer);
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios, ::java::awt::image::BufferedImage* thumb, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer);
	static void writeDefaultJFIF(::javax::imageio::stream::ImageOutputStream* ios, ::java::util::List* thumbnails, ::java::awt::color::ICC_Profile* iccProfile, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer);
	static void writeICC(::java::awt::color::ICC_Profile* profile, ::javax::imageio::stream::ImageOutputStream* ios);
	void writeJFXXSegment(int32_t index, ::java::awt::image::BufferedImage* thumbnail, ::javax::imageio::stream::ImageOutputStream* ios, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer);
	void writeThumb(::javax::imageio::stream::ImageOutputStream* ios, ::java::awt::image::BufferedImage* thumb, ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFExtensionMarkerSegment* jfxx, int32_t index, bool onlyOne, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer);
	virtual void writeThumbnailData(::javax::imageio::stream::ImageOutputStream* ios, $ints* thumbData, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer);
	virtual void writeWithThumbs(::javax::imageio::stream::ImageOutputStream* ios, ::java::util::List* thumbnails, ::com::sun::imageio::plugins::jpeg::JPEGImageWriter* writer);
	int32_t majorVersion = 0;
	int32_t minorVersion = 0;
	int32_t resUnits = 0;
	int32_t Xdensity = 0;
	int32_t Ydensity = 0;
	int32_t thumbWidth = 0;
	int32_t thumbHeight = 0;
	::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbRGB* thumb = nullptr;
	::java::util::ArrayList* extSegments = nullptr;
	::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$ICCMarkerSegment* iccSegment = nullptr;
	static const int32_t THUMB_JPEG = 16;
	static const int32_t THUMB_PALETTE = 17;
	static const int32_t THUMB_UNASSIGNED = 18;
	static const int32_t THUMB_RGB = 19;
	static const int32_t DATA_SIZE = 14;
	static const int32_t ID_SIZE = 5;
	static const int32_t MAX_THUMB_WIDTH = 255;
	static const int32_t MAX_THUMB_HEIGHT = 255;
	static const bool debug = false;
	bool inICC = false;
	::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$ICCMarkerSegment* tempICCSegment = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("DATA_SIZE")
#pragma pop_macro("ID_SIZE")
#pragma pop_macro("MAX_THUMB_HEIGHT")
#pragma pop_macro("MAX_THUMB_WIDTH")
#pragma pop_macro("THUMB_JPEG")
#pragma pop_macro("THUMB_PALETTE")
#pragma pop_macro("THUMB_RGB")
#pragma pop_macro("THUMB_UNASSIGNED")

#endif // _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment_h_