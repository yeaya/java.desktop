#ifndef _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$ICCMarkerSegment_h_
#define _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$ICCMarkerSegment_h_
//$ class com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$ICCMarkerSegment
//$ extends com.sun.imageio.plugins.jpeg.MarkerSegment

#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/lang/Array.h>

#pragma push_macro("ID_SIZE")
#undef ID_SIZE

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class JFIFMarkerSegment;
					class JPEGBuffer;
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		namespace color {
			class ICC_ColorSpace;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
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

class JFIFMarkerSegment$ICCMarkerSegment : public ::com::sun::imageio::plugins::jpeg::MarkerSegment {
	$class(JFIFMarkerSegment$ICCMarkerSegment, $NO_CLASS_INIT, ::com::sun::imageio::plugins::jpeg::MarkerSegment)
public:
	JFIFMarkerSegment$ICCMarkerSegment();
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::java::awt::color::ICC_ColorSpace* cs);
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	void init$(::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0, ::org::w3c::dom::Node* node);
	virtual bool addData(::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	virtual $Object* clone() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode() override;
	virtual void print() override;
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios) override;
	::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment* this$0 = nullptr;
	::java::util::ArrayList* chunks = nullptr;
	$bytes* profile = nullptr;
	static const int32_t ID_SIZE = 12;
	int32_t chunksRead = 0;
	int32_t numChunks = 0;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("ID_SIZE")

#endif // _com_sun_imageio_plugins_jpeg_JFIFMarkerSegment$ICCMarkerSegment_h_