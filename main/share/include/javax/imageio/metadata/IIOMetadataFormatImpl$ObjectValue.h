#ifndef _javax_imageio_metadata_IIOMetadataFormatImpl$ObjectValue_h_
#define _javax_imageio_metadata_IIOMetadataFormatImpl$ObjectValue_h_
//$ class javax.imageio.metadata.IIOMetadataFormatImpl$ObjectValue
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Comparable;
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
			class IIOMetadataFormatImpl;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace metadata {

class $import IIOMetadataFormatImpl$ObjectValue : public ::java::lang::Object {
	$class(IIOMetadataFormatImpl$ObjectValue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IIOMetadataFormatImpl$ObjectValue();
	void init$(::javax::imageio::metadata::IIOMetadataFormatImpl* this$0);
	::javax::imageio::metadata::IIOMetadataFormatImpl* this$0 = nullptr;
	int32_t valueType = 0;
	$Class* classType = nullptr;
	$Object* defaultValue = nullptr;
	::java::util::List* enumeratedValues = nullptr;
	::java::lang::Comparable* minValue = nullptr;
	::java::lang::Comparable* maxValue = nullptr;
	int32_t arrayMinLength = 0;
	int32_t arrayMaxLength = 0;
};

		} // metadata
	} // imageio
} // javax

#endif // _javax_imageio_metadata_IIOMetadataFormatImpl$ObjectValue_h_