#ifndef _com_sun_imageio_plugins_jpeg_SOSMarkerSegment_h_
#define _com_sun_imageio_plugins_jpeg_SOSMarkerSegment_h_
//$ class com.sun.imageio.plugins.jpeg.SOSMarkerSegment
//$ extends com.sun.imageio.plugins.jpeg.MarkerSegment

#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class JPEGBuffer;
					class SOSMarkerSegment$ScanComponentSpec;
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

class SOSMarkerSegment : public ::com::sun::imageio::plugins::jpeg::MarkerSegment {
	$class(SOSMarkerSegment, $NO_CLASS_INIT, ::com::sun::imageio::plugins::jpeg::MarkerSegment)
public:
	SOSMarkerSegment();
	void init$(bool willSubsample, $bytes* componentIDs, int32_t numComponents);
	void init$(::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	void init$(::org::w3c::dom::Node* node);
	virtual $Object* clone() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode() override;
	virtual ::com::sun::imageio::plugins::jpeg::SOSMarkerSegment$ScanComponentSpec* getScanComponentSpec(int8_t componentSel, int32_t tableSel);
	virtual void print() override;
	virtual void updateFromNativeNode(::org::w3c::dom::Node* node, bool fromScratch);
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios) override;
	int32_t startSpectralSelection = 0;
	int32_t endSpectralSelection = 0;
	int32_t approxHigh = 0;
	int32_t approxLow = 0;
	$Array<::com::sun::imageio::plugins::jpeg::SOSMarkerSegment$ScanComponentSpec>* componentSpecs = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_SOSMarkerSegment_h_