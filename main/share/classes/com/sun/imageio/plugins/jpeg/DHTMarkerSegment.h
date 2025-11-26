#ifndef _com_sun_imageio_plugins_jpeg_DHTMarkerSegment_h_
#define _com_sun_imageio_plugins_jpeg_DHTMarkerSegment_h_
//$ class com.sun.imageio.plugins.jpeg.DHTMarkerSegment
//$ extends com.sun.imageio.plugins.jpeg.MarkerSegment

#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
					class DHTMarkerSegment$Htable;
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
				class JPEGHuffmanTable;
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

class DHTMarkerSegment : public ::com::sun::imageio::plugins::jpeg::MarkerSegment {
	$class(DHTMarkerSegment, $NO_CLASS_INIT, ::com::sun::imageio::plugins::jpeg::MarkerSegment)
public:
	DHTMarkerSegment();
	void init$(bool needFour);
	void init$(::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	void init$($Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* dcTables, $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>* acTables);
	void init$(::org::w3c::dom::Node* node);
	virtual void addHtable(::javax::imageio::plugins::jpeg::JPEGHuffmanTable* table, bool isDC, int32_t id);
	virtual $Object* clone() override;
	virtual ::com::sun::imageio::plugins::jpeg::DHTMarkerSegment$Htable* getHtableFromNode(::org::w3c::dom::Node* node);
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode() override;
	virtual void print() override;
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios) override;
	::java::util::List* tables = nullptr;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_jpeg_DHTMarkerSegment_h_