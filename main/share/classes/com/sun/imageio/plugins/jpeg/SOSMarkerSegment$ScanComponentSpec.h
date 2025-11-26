#ifndef _com_sun_imageio_plugins_jpeg_SOSMarkerSegment$ScanComponentSpec_h_
#define _com_sun_imageio_plugins_jpeg_SOSMarkerSegment$ScanComponentSpec_h_
//$ class com.sun.imageio.plugins.jpeg.SOSMarkerSegment$ScanComponentSpec
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class JPEGBuffer;
					class SOSMarkerSegment;
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

class SOSMarkerSegment$ScanComponentSpec : public ::java::lang::Cloneable {
	$class(SOSMarkerSegment$ScanComponentSpec, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	SOSMarkerSegment$ScanComponentSpec();
	void init$(::com::sun::imageio::plugins::jpeg::SOSMarkerSegment* this$0, int8_t componentSel, int32_t tableSel);
	void init$(::com::sun::imageio::plugins::jpeg::SOSMarkerSegment* this$0, ::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	void init$(::com::sun::imageio::plugins::jpeg::SOSMarkerSegment* this$0, ::org::w3c::dom::Node* node);
	virtual $Object* clone() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode();
	virtual void print();
	::com::sun::imageio::plugins::jpeg::SOSMarkerSegment* this$0 = nullptr;
	int32_t componentSelector = 0;
	int32_t dcHuffTable = 0;
	int32_t acHuffTable = 0;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_SOSMarkerSegment$ScanComponentSpec_h_