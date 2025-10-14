#ifndef _javax_imageio_metadata_IIOMetadataFormatImpl_h_
#define _javax_imageio_metadata_IIOMetadataFormatImpl_h_
//$ class javax.imageio.metadata.IIOMetadataFormatImpl
//$ extends javax.imageio.metadata.IIOMetadataFormat

#include <java/lang/Array.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>

namespace java {
	namespace lang {
		class Comparable;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class List;
		class Locale;
	}
}
namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadataFormatImpl$Attribute;
			class IIOMetadataFormatImpl$Element;
			class IIOMetadataFormatImpl$ObjectValue;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace metadata {

class $export IIOMetadataFormatImpl : public ::javax::imageio::metadata::IIOMetadataFormat {
	$class(IIOMetadataFormatImpl, 0, ::javax::imageio::metadata::IIOMetadataFormat)
public:
	IIOMetadataFormatImpl();
	virtual bool canNodeAppear($String* elementName, ::javax::imageio::ImageTypeSpecifier* imageType) override {return false;}
	void init$($String* rootName, int32_t childPolicy);
	void init$($String* rootName, int32_t minChildren, int32_t maxChildren);
	virtual void addAttribute($String* elementName, $String* attrName, int32_t dataType, bool required, $String* defaultValue);
	virtual void addAttribute($String* elementName, $String* attrName, int32_t dataType, bool required, $String* defaultValue, ::java::util::List* enumeratedValues);
	virtual void addAttribute($String* elementName, $String* attrName, int32_t dataType, bool required, $String* defaultValue, $String* minValue, $String* maxValue, bool minInclusive, bool maxInclusive);
	virtual void addAttribute($String* elementName, $String* attrName, int32_t dataType, bool required, int32_t listMinLength, int32_t listMaxLength);
	virtual void addBooleanAttribute($String* elementName, $String* attrName, bool hasDefaultValue, bool defaultValue);
	virtual void addChildElement($String* elementName, $String* parentName);
	virtual void addElement($String* elementName, $String* parentName, int32_t childPolicy);
	virtual void addElement($String* elementName, $String* parentName, int32_t minChildren, int32_t maxChildren);
	virtual void addObjectValue($String* elementName, $Class* classType, bool required, Object$* defaultValue);
	virtual void addObjectValue($String* elementName, $Class* classType, bool required, Object$* defaultValue, ::java::util::List* enumeratedValues);
	virtual void addObjectValue($String* elementName, $Class* classType, Object$* defaultValue, ::java::lang::Comparable* minValue, ::java::lang::Comparable* maxValue, bool minInclusive, bool maxInclusive);
	virtual void addObjectValue($String* elementName, $Class* classType, int32_t arrayMinLength, int32_t arrayMaxLength);
	static void createStandardFormat();
	::javax::imageio::metadata::IIOMetadataFormatImpl$Attribute* getAttribute($String* elementName, $String* attrName);
	virtual int32_t getAttributeDataType($String* elementName, $String* attrName) override;
	virtual $String* getAttributeDefaultValue($String* elementName, $String* attrName) override;
	virtual $String* getAttributeDescription($String* elementName, $String* attrName, ::java::util::Locale* locale) override;
	virtual $StringArray* getAttributeEnumerations($String* elementName, $String* attrName) override;
	virtual int32_t getAttributeListMaxLength($String* elementName, $String* attrName) override;
	virtual int32_t getAttributeListMinLength($String* elementName, $String* attrName) override;
	virtual $String* getAttributeMaxValue($String* elementName, $String* attrName) override;
	virtual $String* getAttributeMinValue($String* elementName, $String* attrName) override;
	virtual $StringArray* getAttributeNames($String* elementName) override;
	virtual int32_t getAttributeValueType($String* elementName, $String* attrName) override;
	virtual $StringArray* getChildNames($String* elementName) override;
	virtual int32_t getChildPolicy($String* elementName) override;
	::javax::imageio::metadata::IIOMetadataFormatImpl$Element* getElement($String* elementName, bool mustAppear);
	::javax::imageio::metadata::IIOMetadataFormatImpl$Element* getElement($String* elementName);
	virtual $String* getElementDescription($String* elementName, ::java::util::Locale* locale) override;
	virtual int32_t getElementMaxChildren($String* elementName) override;
	virtual int32_t getElementMinChildren($String* elementName) override;
	virtual int32_t getObjectArrayMaxLength($String* elementName) override;
	virtual int32_t getObjectArrayMinLength($String* elementName) override;
	virtual $Class* getObjectClass($String* elementName) override;
	virtual $Object* getObjectDefaultValue($String* elementName) override;
	virtual $ObjectArray* getObjectEnumerations($String* elementName) override;
	virtual ::java::lang::Comparable* getObjectMaxValue($String* elementName) override;
	virtual ::java::lang::Comparable* getObjectMinValue($String* elementName) override;
	::javax::imageio::metadata::IIOMetadataFormatImpl$ObjectValue* getObjectValue($String* elementName);
	virtual int32_t getObjectValueType($String* elementName) override;
	$String* getResource($String* key, ::java::util::Locale* locale);
	virtual $String* getResourceBaseName();
	virtual $String* getRootName() override;
	static ::javax::imageio::metadata::IIOMetadataFormat* getStandardFormatInstance();
	virtual bool isAttributeRequired($String* elementName, $String* attrName) override;
	virtual void removeAttribute($String* elementName, $String* attrName);
	virtual void removeElement($String* elementName);
	virtual void removeObjectValue($String* elementName);
	virtual void setResourceBaseName($String* resourceBaseName);
	static $String* standardMetadataFormatName;
	static ::javax::imageio::metadata::IIOMetadataFormat* standardFormat;
	$String* resourceBaseName = nullptr;
	$String* rootName = nullptr;
	::java::util::HashMap* elementMap = nullptr;
};

		} // metadata
	} // imageio
} // javax

#endif // _javax_imageio_metadata_IIOMetadataFormatImpl_h_