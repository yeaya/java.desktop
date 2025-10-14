#ifndef _javax_imageio_metadata_IIOMetadataFormatImpl$Element_h_
#define _javax_imageio_metadata_IIOMetadataFormatImpl$Element_h_
//$ class javax.imageio.metadata.IIOMetadataFormatImpl$Element
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadataFormatImpl;
			class IIOMetadataFormatImpl$ObjectValue;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace metadata {

class $import IIOMetadataFormatImpl$Element : public ::java::lang::Object {
	$class(IIOMetadataFormatImpl$Element, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IIOMetadataFormatImpl$Element();
	void init$(::javax::imageio::metadata::IIOMetadataFormatImpl* this$0);
	::javax::imageio::metadata::IIOMetadataFormatImpl* this$0 = nullptr;
	$String* elementName = nullptr;
	int32_t childPolicy = 0;
	int32_t minChildren = 0;
	int32_t maxChildren = 0;
	::java::util::List* childList = nullptr;
	::java::util::List* parentList = nullptr;
	::java::util::List* attrList = nullptr;
	::java::util::Map* attrMap = nullptr;
	::javax::imageio::metadata::IIOMetadataFormatImpl$ObjectValue* objectValue = nullptr;
};

		} // metadata
	} // imageio
} // javax

#endif // _javax_imageio_metadata_IIOMetadataFormatImpl$Element_h_