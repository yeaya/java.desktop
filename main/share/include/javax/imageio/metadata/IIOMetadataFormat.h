#ifndef _javax_imageio_metadata_IIOMetadataFormat_h_
#define _javax_imageio_metadata_IIOMetadataFormat_h_
//$ interface javax.imageio.metadata.IIOMetadataFormat
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHILD_POLICY_ALL")
#undef CHILD_POLICY_ALL
#pragma push_macro("CHILD_POLICY_CHOICE")
#undef CHILD_POLICY_CHOICE
#pragma push_macro("CHILD_POLICY_EMPTY")
#undef CHILD_POLICY_EMPTY
#pragma push_macro("CHILD_POLICY_MAX")
#undef CHILD_POLICY_MAX
#pragma push_macro("CHILD_POLICY_REPEAT")
#undef CHILD_POLICY_REPEAT
#pragma push_macro("CHILD_POLICY_SEQUENCE")
#undef CHILD_POLICY_SEQUENCE
#pragma push_macro("CHILD_POLICY_SOME")
#undef CHILD_POLICY_SOME
#pragma push_macro("DATATYPE_BOOLEAN")
#undef DATATYPE_BOOLEAN
#pragma push_macro("DATATYPE_DOUBLE")
#undef DATATYPE_DOUBLE
#pragma push_macro("DATATYPE_FLOAT")
#undef DATATYPE_FLOAT
#pragma push_macro("DATATYPE_INTEGER")
#undef DATATYPE_INTEGER
#pragma push_macro("DATATYPE_STRING")
#undef DATATYPE_STRING
#pragma push_macro("VALUE_ARBITRARY")
#undef VALUE_ARBITRARY
#pragma push_macro("VALUE_ENUMERATION")
#undef VALUE_ENUMERATION
#pragma push_macro("VALUE_LIST")
#undef VALUE_LIST
#pragma push_macro("VALUE_NONE")
#undef VALUE_NONE
#pragma push_macro("VALUE_RANGE")
#undef VALUE_RANGE
#pragma push_macro("VALUE_RANGE_MAX_INCLUSIVE")
#undef VALUE_RANGE_MAX_INCLUSIVE
#pragma push_macro("VALUE_RANGE_MAX_INCLUSIVE_MASK")
#undef VALUE_RANGE_MAX_INCLUSIVE_MASK
#pragma push_macro("VALUE_RANGE_MIN_INCLUSIVE")
#undef VALUE_RANGE_MIN_INCLUSIVE
#pragma push_macro("VALUE_RANGE_MIN_INCLUSIVE_MASK")
#undef VALUE_RANGE_MIN_INCLUSIVE_MASK
#pragma push_macro("VALUE_RANGE_MIN_MAX_INCLUSIVE")
#undef VALUE_RANGE_MIN_MAX_INCLUSIVE

namespace java {
	namespace lang {
		class Comparable;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace imageio {
		class ImageTypeSpecifier;
	}
}

namespace javax {
	namespace imageio {
		namespace metadata {

class $import IIOMetadataFormat : public ::java::lang::Object {
	$interface(IIOMetadataFormat, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool canNodeAppear($String* elementName, ::javax::imageio::ImageTypeSpecifier* imageType) {return false;}
	virtual int32_t getAttributeDataType($String* elementName, $String* attrName) {return 0;}
	virtual $String* getAttributeDefaultValue($String* elementName, $String* attrName) {return nullptr;}
	virtual $String* getAttributeDescription($String* elementName, $String* attrName, ::java::util::Locale* locale) {return nullptr;}
	virtual $StringArray* getAttributeEnumerations($String* elementName, $String* attrName) {return nullptr;}
	virtual int32_t getAttributeListMaxLength($String* elementName, $String* attrName) {return 0;}
	virtual int32_t getAttributeListMinLength($String* elementName, $String* attrName) {return 0;}
	virtual $String* getAttributeMaxValue($String* elementName, $String* attrName) {return nullptr;}
	virtual $String* getAttributeMinValue($String* elementName, $String* attrName) {return nullptr;}
	virtual $StringArray* getAttributeNames($String* elementName) {return nullptr;}
	virtual int32_t getAttributeValueType($String* elementName, $String* attrName) {return 0;}
	virtual $StringArray* getChildNames($String* elementName) {return nullptr;}
	virtual int32_t getChildPolicy($String* elementName) {return 0;}
	virtual $String* getElementDescription($String* elementName, ::java::util::Locale* locale) {return nullptr;}
	virtual int32_t getElementMaxChildren($String* elementName) {return 0;}
	virtual int32_t getElementMinChildren($String* elementName) {return 0;}
	virtual int32_t getObjectArrayMaxLength($String* elementName) {return 0;}
	virtual int32_t getObjectArrayMinLength($String* elementName) {return 0;}
	virtual $Class* getObjectClass($String* elementName) {return nullptr;}
	virtual $Object* getObjectDefaultValue($String* elementName) {return nullptr;}
	virtual $ObjectArray* getObjectEnumerations($String* elementName) {return nullptr;}
	virtual ::java::lang::Comparable* getObjectMaxValue($String* elementName) {return nullptr;}
	virtual ::java::lang::Comparable* getObjectMinValue($String* elementName) {return nullptr;}
	virtual int32_t getObjectValueType($String* elementName) {return 0;}
	virtual $String* getRootName() {return nullptr;}
	virtual bool isAttributeRequired($String* elementName, $String* attrName) {return false;}
	static const int32_t CHILD_POLICY_EMPTY = 0;
	static const int32_t CHILD_POLICY_ALL = 1;
	static const int32_t CHILD_POLICY_SOME = 2;
	static const int32_t CHILD_POLICY_CHOICE = 3;
	static const int32_t CHILD_POLICY_SEQUENCE = 4;
	static const int32_t CHILD_POLICY_REPEAT = 5;
	static const int32_t CHILD_POLICY_MAX = CHILD_POLICY_REPEAT;
	static const int32_t VALUE_NONE = 0;
	static const int32_t VALUE_ARBITRARY = 1;
	static const int32_t VALUE_RANGE = 2;
	static const int32_t VALUE_RANGE_MIN_INCLUSIVE_MASK = 4;
	static const int32_t VALUE_RANGE_MAX_INCLUSIVE_MASK = 8;
	static const int32_t VALUE_RANGE_MIN_INCLUSIVE = 6; // VALUE_RANGE | VALUE_RANGE_MIN_INCLUSIVE_MASK
	static const int32_t VALUE_RANGE_MAX_INCLUSIVE = 10; // VALUE_RANGE | VALUE_RANGE_MAX_INCLUSIVE_MASK
	static const int32_t VALUE_RANGE_MIN_MAX_INCLUSIVE = 14; // VALUE_RANGE | VALUE_RANGE_MIN_INCLUSIVE_MASK | VALUE_RANGE_MAX_INCLUSIVE_MASK
	static const int32_t VALUE_ENUMERATION = 16;
	static const int32_t VALUE_LIST = 32;
	static const int32_t DATATYPE_STRING = 0;
	static const int32_t DATATYPE_BOOLEAN = 1;
	static const int32_t DATATYPE_INTEGER = 2;
	static const int32_t DATATYPE_FLOAT = 3;
	static const int32_t DATATYPE_DOUBLE = 4;
};

		} // metadata
	} // imageio
} // javax

#pragma pop_macro("CHILD_POLICY_ALL")
#pragma pop_macro("CHILD_POLICY_CHOICE")
#pragma pop_macro("CHILD_POLICY_EMPTY")
#pragma pop_macro("CHILD_POLICY_MAX")
#pragma pop_macro("CHILD_POLICY_REPEAT")
#pragma pop_macro("CHILD_POLICY_SEQUENCE")
#pragma pop_macro("CHILD_POLICY_SOME")
#pragma pop_macro("DATATYPE_BOOLEAN")
#pragma pop_macro("DATATYPE_DOUBLE")
#pragma pop_macro("DATATYPE_FLOAT")
#pragma pop_macro("DATATYPE_INTEGER")
#pragma pop_macro("DATATYPE_STRING")
#pragma pop_macro("VALUE_ARBITRARY")
#pragma pop_macro("VALUE_ENUMERATION")
#pragma pop_macro("VALUE_LIST")
#pragma pop_macro("VALUE_NONE")
#pragma pop_macro("VALUE_RANGE")
#pragma pop_macro("VALUE_RANGE_MAX_INCLUSIVE")
#pragma pop_macro("VALUE_RANGE_MAX_INCLUSIVE_MASK")
#pragma pop_macro("VALUE_RANGE_MIN_INCLUSIVE")
#pragma pop_macro("VALUE_RANGE_MIN_INCLUSIVE_MASK")
#pragma pop_macro("VALUE_RANGE_MIN_MAX_INCLUSIVE")

#endif // _javax_imageio_metadata_IIOMetadataFormat_h_