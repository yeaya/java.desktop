#ifndef _javax_imageio_plugins_tiff_TIFFField_h_
#define _javax_imageio_plugins_tiff_TIFFField_h_
//$ class javax.imageio.plugins.tiff.TIFFField
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("IS_INTEGRAL")
#undef IS_INTEGRAL
#pragma push_macro("MAX_UINT32")
#undef MAX_UINT32
#pragma push_macro("TYPE_NAMES")
#undef TYPE_NAMES

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {
				class TIFFDirectory;
				class TIFFTag;
				class TIFFTagSet;
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

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

class $export TIFFField : public ::java::lang::Cloneable {
	$class(TIFFField, 0, ::java::lang::Cloneable)
public:
	TIFFField();
	void init$();
	void init$(::javax::imageio::plugins::tiff::TIFFTag* tag, int32_t type, int32_t count, Object$* data);
	void init$(::javax::imageio::plugins::tiff::TIFFTag* tag, int32_t type, int32_t count);
	void init$(::javax::imageio::plugins::tiff::TIFFTag* tag, int64_t value);
	void init$(::javax::imageio::plugins::tiff::TIFFTag* tag, int32_t type, int64_t offset, ::javax::imageio::plugins::tiff::TIFFDirectory* dir);
	virtual ::javax::imageio::plugins::tiff::TIFFField* clone() override;
	static $Object* createArrayForType(int32_t dataType, int32_t count);
	static ::javax::imageio::plugins::tiff::TIFFField* createFromMetadataNode(::javax::imageio::plugins::tiff::TIFFTagSet* tagSet, ::org::w3c::dom::Node* node);
	$bytes* getAsBytes();
	$chars* getAsChars();
	double getAsDouble(int32_t index);
	$doubles* getAsDoubles();
	float getAsFloat(int32_t index);
	$floats* getAsFloats();
	int32_t getAsInt(int32_t index);
	$ints* getAsInts();
	int64_t getAsLong(int32_t index);
	$longs* getAsLongs();
	::org::w3c::dom::Node* getAsNativeNode();
	$longs* getAsRational(int32_t index);
	$Array<int64_t, 2>* getAsRationals();
	$ints* getAsSRational(int32_t index);
	$Array<int32_t, 2>* getAsSRationals();
	$shorts* getAsShorts();
	$String* getAsString(int32_t index);
	static $String* getAttribute(::org::w3c::dom::Node* node, $String* attrName);
	int32_t getCount();
	$Object* getData();
	::javax::imageio::plugins::tiff::TIFFDirectory* getDirectory();
	::javax::imageio::plugins::tiff::TIFFTag* getTag();
	int32_t getTagNumber();
	int32_t getType();
	static int32_t getTypeByName($String* typeName);
	static $String* getTypeName(int32_t dataType);
	$String* getValueAsString(int32_t index);
	bool hasDirectory();
	static void initData(::org::w3c::dom::Node* node, $ints* otype, $ints* ocount, $ObjectArray* odata);
	bool isIntegral();
	static const int64_t MAX_UINT32 = (int64_t)0x00000000FFFFFFFF;
	static $StringArray* TYPE_NAMES;
	static $booleans* IS_INTEGRAL;
	::javax::imageio::plugins::tiff::TIFFTag* tag = nullptr;
	int32_t tagNumber = 0;
	int32_t type = 0;
	int32_t count = 0;
	$Object* data = nullptr;
	::javax::imageio::plugins::tiff::TIFFDirectory* dir = nullptr;
};

			} // tiff
		} // plugins
	} // imageio
} // javax

#pragma pop_macro("IS_INTEGRAL")
#pragma pop_macro("MAX_UINT32")
#pragma pop_macro("TYPE_NAMES")

#endif // _javax_imageio_plugins_tiff_TIFFField_h_