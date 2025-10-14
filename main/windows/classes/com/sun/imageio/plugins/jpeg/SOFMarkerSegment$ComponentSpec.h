#ifndef _com_sun_imageio_plugins_jpeg_SOFMarkerSegment$ComponentSpec_h_
#define _com_sun_imageio_plugins_jpeg_SOFMarkerSegment$ComponentSpec_h_
//$ class com.sun.imageio.plugins.jpeg.SOFMarkerSegment$ComponentSpec
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class JPEGBuffer;
					class SOFMarkerSegment;
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

class SOFMarkerSegment$ComponentSpec : public ::java::lang::Cloneable {
	$class(SOFMarkerSegment$ComponentSpec, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	SOFMarkerSegment$ComponentSpec();
	void init$(::com::sun::imageio::plugins::jpeg::SOFMarkerSegment* this$0, int8_t id, int32_t factor, int32_t qSelector);
	void init$(::com::sun::imageio::plugins::jpeg::SOFMarkerSegment* this$0, ::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	void init$(::com::sun::imageio::plugins::jpeg::SOFMarkerSegment* this$0, ::org::w3c::dom::Node* node);
	virtual $Object* clone() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode();
	virtual void print();
	::com::sun::imageio::plugins::jpeg::SOFMarkerSegment* this$0 = nullptr;
	int32_t componentId = 0;
	int32_t HsamplingFactor = 0;
	int32_t VsamplingFactor = 0;
	int32_t QtableSelector = 0;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_SOFMarkerSegment$ComponentSpec_h_