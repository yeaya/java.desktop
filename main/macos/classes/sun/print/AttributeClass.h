#ifndef _sun_print_AttributeClass_h_
#define _sun_print_AttributeClass_h_
//$ class sun.print.AttributeClass
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ATTRIBUTES_CHARSET")
#undef ATTRIBUTES_CHARSET
#pragma push_macro("ATTRIBUTES_NATURAL_LANGUAGE")
#undef ATTRIBUTES_NATURAL_LANGUAGE
#pragma push_macro("TAG_BOOL")
#undef TAG_BOOL
#pragma push_macro("TAG_CHARSET")
#undef TAG_CHARSET
#pragma push_macro("TAG_DATE")
#undef TAG_DATE
#pragma push_macro("TAG_ENUM")
#undef TAG_ENUM
#pragma push_macro("TAG_INT")
#undef TAG_INT
#pragma push_macro("TAG_KEYWORD")
#undef TAG_KEYWORD
#pragma push_macro("TAG_MEMBER_ATTRNAME")
#undef TAG_MEMBER_ATTRNAME
#pragma push_macro("TAG_MIME_MEDIATYPE")
#undef TAG_MIME_MEDIATYPE
#pragma push_macro("TAG_NAME_LANGUAGE")
#undef TAG_NAME_LANGUAGE
#pragma push_macro("TAG_NAME_WO_LANGUAGE")
#undef TAG_NAME_WO_LANGUAGE
#pragma push_macro("TAG_NATURALLANGUAGE")
#undef TAG_NATURALLANGUAGE
#pragma push_macro("TAG_OCTET")
#undef TAG_OCTET
#pragma push_macro("TAG_RANGE_INTEGER")
#undef TAG_RANGE_INTEGER
#pragma push_macro("TAG_RESOLUTION")
#undef TAG_RESOLUTION
#pragma push_macro("TAG_TEXT_LANGUAGE")
#undef TAG_TEXT_LANGUAGE
#pragma push_macro("TAG_TEXT_WO_LANGUAGE")
#undef TAG_TEXT_WO_LANGUAGE
#pragma push_macro("TAG_UNSUPPORTED_VALUE")
#undef TAG_UNSUPPORTED_VALUE
#pragma push_macro("TAG_URI")
#undef TAG_URI

namespace sun {
	namespace print {

class AttributeClass : public ::java::lang::Object {
	$class(AttributeClass, 0, ::java::lang::Object)
public:
	AttributeClass();
	void init$($String* name, int32_t type, Object$* value);
	int32_t convertToInt($bytes* buf);
	virtual bool equals(Object$* obj) override;
	virtual $ints* getArrayOfIntValues();
	virtual $StringArray* getArrayOfStringValues();
	virtual int8_t getByteValue();
	virtual $ints* getIntRangeValue();
	virtual int32_t getIntValue();
	virtual $chars* getLenChars();
	virtual $String* getName();
	virtual $Object* getObjectValue();
	virtual $String* getStringValue();
	virtual int8_t getType();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	int32_t unsignedByteToInt(int8_t b);
	$String* myName = nullptr;
	int32_t myType = 0;
	int32_t nameLen = 0;
	$Object* myValue = nullptr;
	static const int32_t TAG_UNSUPPORTED_VALUE = 16;
	static const int32_t TAG_INT = 33;
	static const int32_t TAG_BOOL = 34;
	static const int32_t TAG_ENUM = 35;
	static const int32_t TAG_OCTET = 48;
	static const int32_t TAG_DATE = 49;
	static const int32_t TAG_RESOLUTION = 50;
	static const int32_t TAG_RANGE_INTEGER = 51;
	static const int32_t TAG_TEXT_LANGUAGE = 53;
	static const int32_t TAG_NAME_LANGUAGE = 54;
	static const int32_t TAG_TEXT_WO_LANGUAGE = 65;
	static const int32_t TAG_NAME_WO_LANGUAGE = 66;
	static const int32_t TAG_KEYWORD = 68;
	static const int32_t TAG_URI = 69;
	static const int32_t TAG_CHARSET = 71;
	static const int32_t TAG_NATURALLANGUAGE = 72;
	static const int32_t TAG_MIME_MEDIATYPE = 73;
	static const int32_t TAG_MEMBER_ATTRNAME = 74;
	static ::sun::print::AttributeClass* ATTRIBUTES_CHARSET;
	static ::sun::print::AttributeClass* ATTRIBUTES_NATURAL_LANGUAGE;
};

	} // print
} // sun

#pragma pop_macro("ATTRIBUTES_CHARSET")
#pragma pop_macro("ATTRIBUTES_NATURAL_LANGUAGE")
#pragma pop_macro("TAG_BOOL")
#pragma pop_macro("TAG_CHARSET")
#pragma pop_macro("TAG_DATE")
#pragma pop_macro("TAG_ENUM")
#pragma pop_macro("TAG_INT")
#pragma pop_macro("TAG_KEYWORD")
#pragma pop_macro("TAG_MEMBER_ATTRNAME")
#pragma pop_macro("TAG_MIME_MEDIATYPE")
#pragma pop_macro("TAG_NAME_LANGUAGE")
#pragma pop_macro("TAG_NAME_WO_LANGUAGE")
#pragma pop_macro("TAG_NATURALLANGUAGE")
#pragma pop_macro("TAG_OCTET")
#pragma pop_macro("TAG_RANGE_INTEGER")
#pragma pop_macro("TAG_RESOLUTION")
#pragma pop_macro("TAG_TEXT_LANGUAGE")
#pragma pop_macro("TAG_TEXT_WO_LANGUAGE")
#pragma pop_macro("TAG_UNSUPPORTED_VALUE")
#pragma pop_macro("TAG_URI")

#endif // _sun_print_AttributeClass_h_