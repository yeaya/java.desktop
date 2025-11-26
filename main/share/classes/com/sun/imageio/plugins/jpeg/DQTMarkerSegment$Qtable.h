#ifndef _com_sun_imageio_plugins_jpeg_DQTMarkerSegment$Qtable_h_
#define _com_sun_imageio_plugins_jpeg_DQTMarkerSegment$Qtable_h_
//$ class com.sun.imageio.plugins.jpeg.DQTMarkerSegment$Qtable
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("QTABLE_SIZE")
#undef QTABLE_SIZE

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class DQTMarkerSegment;
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
				class JPEGQTable;
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

class DQTMarkerSegment$Qtable : public ::java::lang::Cloneable {
	$class(DQTMarkerSegment$Qtable, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	DQTMarkerSegment$Qtable();
	void init$(::com::sun::imageio::plugins::jpeg::DQTMarkerSegment* this$0, bool wantLuma, float quality);
	void init$(::com::sun::imageio::plugins::jpeg::DQTMarkerSegment* this$0, ::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	void init$(::com::sun::imageio::plugins::jpeg::DQTMarkerSegment* this$0, ::javax::imageio::plugins::jpeg::JPEGQTable* table, int32_t id);
	void init$(::com::sun::imageio::plugins::jpeg::DQTMarkerSegment* this$0, ::org::w3c::dom::Node* node);
	virtual $Object* clone() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode();
	virtual void print();
	::com::sun::imageio::plugins::jpeg::DQTMarkerSegment* this$0 = nullptr;
	int32_t elementPrecision = 0;
	int32_t tableID = 0;
	static const int32_t QTABLE_SIZE = 64;
	$ints* data = nullptr;
	$ints* zigzag = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("QTABLE_SIZE")

#endif // _com_sun_imageio_plugins_jpeg_DQTMarkerSegment$Qtable_h_