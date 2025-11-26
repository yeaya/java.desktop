#ifndef _com_sun_imageio_plugins_jpeg_DQTMarkerSegment_h_
#define _com_sun_imageio_plugins_jpeg_DQTMarkerSegment_h_
//$ class com.sun.imageio.plugins.jpeg.DQTMarkerSegment
//$ extends com.sun.imageio.plugins.jpeg.MarkerSegment

#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class DQTMarkerSegment$Qtable;
					class JPEGBuffer;
				}
			}
		}
	}
}
namespace java {
	namespace util {
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
		namespace plugins {
			namespace jpeg {
				class JPEGQTable;
			}
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

class DQTMarkerSegment : public ::com::sun::imageio::plugins::jpeg::MarkerSegment {
	$class(DQTMarkerSegment, $NO_CLASS_INIT, ::com::sun::imageio::plugins::jpeg::MarkerSegment)
public:
	DQTMarkerSegment();
	void init$(float quality, bool needTwo);
	void init$(::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	void init$($Array<::javax::imageio::plugins::jpeg::JPEGQTable>* qtables);
	void init$(::org::w3c::dom::Node* node);
	virtual $Object* clone() override;
	virtual ::com::sun::imageio::plugins::jpeg::DQTMarkerSegment$Qtable* getChromaForLuma(::com::sun::imageio::plugins::jpeg::DQTMarkerSegment$Qtable* luma);
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode() override;
	virtual ::com::sun::imageio::plugins::jpeg::DQTMarkerSegment$Qtable* getQtableFromNode(::org::w3c::dom::Node* node);
	virtual void print() override;
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios) override;
	::java::util::List* tables = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_DQTMarkerSegment_h_