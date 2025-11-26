#ifndef _com_sun_imageio_plugins_jpeg_SOFMarkerSegment_h_
#define _com_sun_imageio_plugins_jpeg_SOFMarkerSegment_h_
//$ class com.sun.imageio.plugins.jpeg.SOFMarkerSegment
//$ extends com.sun.imageio.plugins.jpeg.MarkerSegment

#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class JPEGBuffer;
					class SOFMarkerSegment$ComponentSpec;
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

class SOFMarkerSegment : public ::com::sun::imageio::plugins::jpeg::MarkerSegment {
	$class(SOFMarkerSegment, $NO_CLASS_INIT, ::com::sun::imageio::plugins::jpeg::MarkerSegment)
public:
	SOFMarkerSegment();
	void init$(bool wantProg, bool wantExtended, bool willSubsample, $bytes* componentIDs, int32_t numComponents);
	void init$(::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	void init$(::org::w3c::dom::Node* node);
	virtual $Object* clone() override;
	virtual ::com::sun::imageio::plugins::jpeg::SOFMarkerSegment$ComponentSpec* getComponentSpec(int8_t id, int32_t factor, int32_t qSelector);
	virtual int32_t getIDencodedCSType();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode() override;
	virtual void print() override;
	virtual void updateFromNativeNode(::org::w3c::dom::Node* node, bool fromScratch);
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios) override;
	int32_t samplePrecision = 0;
	int32_t numLines = 0;
	int32_t samplesPerLine = 0;
	$Array<::com::sun::imageio::plugins::jpeg::SOFMarkerSegment$ComponentSpec>* componentSpecs = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_SOFMarkerSegment_h_