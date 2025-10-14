#ifndef _com_sun_imageio_plugins_jpeg_MarkerSegment_h_
#define _com_sun_imageio_plugins_jpeg_MarkerSegment_h_
//$ class com.sun.imageio.plugins.jpeg.MarkerSegment
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("LENGTH_SIZE")
#undef LENGTH_SIZE

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {
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
		namespace stream {
			class ImageOutputStream;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class NamedNodeMap;
			class Node;
		}
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

class MarkerSegment : public ::java::lang::Cloneable {
	$class(MarkerSegment, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	MarkerSegment();
	void init$(::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	void init$(int32_t tag);
	void init$(::org::w3c::dom::Node* node);
	virtual $Object* clone() override;
	static int32_t getAttributeValue(::org::w3c::dom::Node* node, ::org::w3c::dom::NamedNodeMap* attrs, $String* name, int32_t min, int32_t max, bool required);
	virtual ::javax::imageio::metadata::IIOMetadataNode* getNativeNode();
	virtual void loadData(::com::sun::imageio::plugins::jpeg::JPEGBuffer* buffer);
	virtual void print();
	virtual void printTag($String* prefix);
	virtual void write(::javax::imageio::stream::ImageOutputStream* ios);
	static void write2bytes(::javax::imageio::stream::ImageOutputStream* ios, int32_t value);
	virtual void writeTag(::javax::imageio::stream::ImageOutputStream* ios);
	static const int32_t LENGTH_SIZE = 2;
	int32_t tag = 0;
	int32_t length = 0;
	$bytes* data = nullptr;
	bool unknown = false;
};

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("LENGTH_SIZE")

#endif // _com_sun_imageio_plugins_jpeg_MarkerSegment_h_