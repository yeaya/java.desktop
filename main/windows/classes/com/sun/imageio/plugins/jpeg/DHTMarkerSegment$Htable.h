#ifndef _com_sun_imageio_plugins_jpeg_DHTMarkerSegment$Htable_h_
#define _com_sun_imageio_plugins_jpeg_DHTMarkerSegment$Htable_h_
//$ class com.sun.imageio.plugins.jpeg.DHTMarkerSegment$Htable
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("NUM_LENGTHS")
#undef NUM_LENGTHS

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class DHTMarkerSegment;
					class JPEGBuffer;
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
		namespace plugins {
			namespace jpeg {
				class JPEGHuffmanTable;
			}
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

class DHTMarkerSegment$Htable : public ::java::lang::Cloneable {
	$class(DHTMarkerSegment$Htable, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	DHTMarkerSegment$Htable();
	void init$(::com::sun::imageio::plugins::jpeg::DHTMarkerSegment* this$0, ::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	void init$(::com::sun::imageio::plugins::jpeg::DHTMarkerSegment* this$0, ::javax::imageio::plugins::jpeg::JPEGHuffmanTable* table, bool isDC, int32_t id);
	void init$(::com::sun::imageio::plugins::jpeg::DHTMarkerSegment* this$0, ::org::w3c::dom::Node* node);
	virtual $Object* clone() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode();
	virtual void print();
	::com::sun::imageio::plugins::jpeg::DHTMarkerSegment* this$0 = nullptr;
	int32_t tableClass = 0;
	int32_t tableID = 0;
	static const int32_t NUM_LENGTHS = 16;
	$shorts* numCodes = nullptr;
	$shorts* values = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("NUM_LENGTHS")

#endif // _com_sun_imageio_plugins_jpeg_DHTMarkerSegment$Htable_h_