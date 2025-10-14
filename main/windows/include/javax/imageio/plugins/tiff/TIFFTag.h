#ifndef _javax_imageio_plugins_tiff_TIFFTag_h_
#define _javax_imageio_plugins_tiff_TIFFTag_h_
//$ class javax.imageio.plugins.tiff.TIFFTag
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DISALLOWED_DATATYPES_MASK")
#undef DISALLOWED_DATATYPES_MASK
#pragma push_macro("MAX_DATATYPE")
#undef MAX_DATATYPE
#pragma push_macro("MIN_DATATYPE")
#undef MIN_DATATYPE
#pragma push_macro("SIZE_OF_TYPE")
#undef SIZE_OF_TYPE
#pragma push_macro("TIFF_ASCII")
#undef TIFF_ASCII
#pragma push_macro("TIFF_BYTE")
#undef TIFF_BYTE
#pragma push_macro("TIFF_DOUBLE")
#undef TIFF_DOUBLE
#pragma push_macro("TIFF_FLOAT")
#undef TIFF_FLOAT
#pragma push_macro("TIFF_IFD_POINTER")
#undef TIFF_IFD_POINTER
#pragma push_macro("TIFF_LONG")
#undef TIFF_LONG
#pragma push_macro("TIFF_RATIONAL")
#undef TIFF_RATIONAL
#pragma push_macro("TIFF_SBYTE")
#undef TIFF_SBYTE
#pragma push_macro("TIFF_SHORT")
#undef TIFF_SHORT
#pragma push_macro("TIFF_SLONG")
#undef TIFF_SLONG
#pragma push_macro("TIFF_SRATIONAL")
#undef TIFF_SRATIONAL
#pragma push_macro("TIFF_SSHORT")
#undef TIFF_SSHORT
#pragma push_macro("TIFF_UNDEFINED")
#undef TIFF_UNDEFINED
#pragma push_macro("UNKNOWN_TAG_NAME")
#undef UNKNOWN_TAG_NAME

namespace java {
	namespace util {
		class SortedMap;
	}
}
namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {
				class TIFFTagSet;
			}
		}
	}
}

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

class $import TIFFTag : public ::java::lang::Object {
	$class(TIFFTag, 0, ::java::lang::Object)
public:
	TIFFTag();
	void init$($String* name, int32_t number, int32_t dataTypes, int32_t count);
	void init$($String* name, int32_t number, ::javax::imageio::plugins::tiff::TIFFTagSet* tagSet);
	void init$($String* name, int32_t number, int32_t dataTypes);
	virtual void addValueName(int32_t value, $String* name);
	virtual int32_t getCount();
	virtual int32_t getDataTypes();
	virtual $String* getName();
	virtual $ints* getNamedValues();
	virtual int32_t getNumber();
	static int32_t getSizeOfType(int32_t dataType);
	virtual ::javax::imageio::plugins::tiff::TIFFTagSet* getTagSet();
	virtual $String* getValueName(int32_t value);
	virtual bool hasValueNames();
	virtual bool isDataTypeOK(int32_t dataType);
	virtual bool isIFDPointer();
	static const int32_t TIFF_BYTE = 1;
	static const int32_t TIFF_ASCII = 2;
	static const int32_t TIFF_SHORT = 3;
	static const int32_t TIFF_LONG = 4;
	static const int32_t TIFF_RATIONAL = 5;
	static const int32_t TIFF_SBYTE = 6;
	static const int32_t TIFF_UNDEFINED = 7;
	static const int32_t TIFF_SSHORT = 8;
	static const int32_t TIFF_SLONG = 9;
	static const int32_t TIFF_SRATIONAL = 10;
	static const int32_t TIFF_FLOAT = 11;
	static const int32_t TIFF_DOUBLE = 12;
	static const int32_t TIFF_IFD_POINTER = 13;
	static const int32_t MIN_DATATYPE = TIFF_BYTE;
	static const int32_t MAX_DATATYPE = TIFF_IFD_POINTER;
	static $String* UNKNOWN_TAG_NAME;
	static const int32_t DISALLOWED_DATATYPES_MASK = ~16383;
	static $ints* SIZE_OF_TYPE;
	int32_t number = 0;
	$String* name = nullptr;
	int32_t dataTypes = 0;
	int32_t count = 0;
	::javax::imageio::plugins::tiff::TIFFTagSet* tagSet = nullptr;
	::java::util::SortedMap* valueNames = nullptr;
};

			} // tiff
		} // plugins
	} // imageio
} // javax

#pragma pop_macro("DISALLOWED_DATATYPES_MASK")
#pragma pop_macro("MAX_DATATYPE")
#pragma pop_macro("MIN_DATATYPE")
#pragma pop_macro("SIZE_OF_TYPE")
#pragma pop_macro("TIFF_ASCII")
#pragma pop_macro("TIFF_BYTE")
#pragma pop_macro("TIFF_DOUBLE")
#pragma pop_macro("TIFF_FLOAT")
#pragma pop_macro("TIFF_IFD_POINTER")
#pragma pop_macro("TIFF_LONG")
#pragma pop_macro("TIFF_RATIONAL")
#pragma pop_macro("TIFF_SBYTE")
#pragma pop_macro("TIFF_SHORT")
#pragma pop_macro("TIFF_SLONG")
#pragma pop_macro("TIFF_SRATIONAL")
#pragma pop_macro("TIFF_SSHORT")
#pragma pop_macro("TIFF_UNDEFINED")
#pragma pop_macro("UNKNOWN_TAG_NAME")

#endif // _javax_imageio_plugins_tiff_TIFFTag_h_