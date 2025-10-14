#ifndef _javax_imageio_metadata_IIOMetadataFormatImpl$Attribute_h_
#define _javax_imageio_metadata_IIOMetadataFormatImpl$Attribute_h_
//$ class javax.imageio.metadata.IIOMetadataFormatImpl$Attribute
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadataFormatImpl;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace metadata {

class $import IIOMetadataFormatImpl$Attribute : public ::java::lang::Object {
	$class(IIOMetadataFormatImpl$Attribute, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IIOMetadataFormatImpl$Attribute();
	void init$(::javax::imageio::metadata::IIOMetadataFormatImpl* this$0);
	::javax::imageio::metadata::IIOMetadataFormatImpl* this$0 = nullptr;
	$String* attrName = nullptr;
	int32_t valueType = 0;
	int32_t dataType = 0;
	bool required = false;
	$String* defaultValue = nullptr;
	::java::util::List* enumeratedValues = nullptr;
	$String* minValue = nullptr;
	$String* maxValue = nullptr;
	int32_t listMinLength = 0;
	int32_t listMaxLength = 0;
};

		} // metadata
	} // imageio
} // javax

#endif // _javax_imageio_metadata_IIOMetadataFormatImpl$Attribute_h_