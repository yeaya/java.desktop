#ifndef _com_sun_imageio_plugins_tiff_TIFFMetadataFormat_h_
#define _com_sun_imageio_plugins_tiff_TIFFMetadataFormat_h_
//$ class com.sun.imageio.plugins.tiff.TIFFMetadataFormat
//$ extends javax.imageio.metadata.IIOMetadataFormat

#include <java/lang/Array.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {
					class TIFFAttrInfo;
					class TIFFElementInfo;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Comparable;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFMetadataFormat : public ::javax::imageio::metadata::IIOMetadataFormat {
	$class(TIFFMetadataFormat, $NO_CLASS_INIT, ::javax::imageio::metadata::IIOMetadataFormat)
public:
	TIFFMetadataFormat();
	void init$();
	::com::sun::imageio::plugins::tiff::TIFFAttrInfo* getAttrInfo($String* elementName, $String* attrName);
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
	virtual $String* getElementDescription($String* elementName, ::java::util::Locale* locale) override;
	::com::sun::imageio::plugins::tiff::TIFFElementInfo* getElementInfo($String* elementName);
	virtual int32_t getElementMaxChildren($String* elementName) override;
	virtual int32_t getElementMinChildren($String* elementName) override;
	virtual int32_t getObjectArrayMaxLength($String* elementName) override;
	virtual int32_t getObjectArrayMinLength($String* elementName) override;
	virtual $Class* getObjectClass($String* elementName) override;
	virtual $Object* getObjectDefaultValue($String* elementName) override;
	virtual $ObjectArray* getObjectEnumerations($String* elementName) override;
	virtual ::java::lang::Comparable* getObjectMaxValue($String* elementName) override;
	virtual ::java::lang::Comparable* getObjectMinValue($String* elementName) override;
	virtual int32_t getObjectValueType($String* elementName) override;
	$String* getResource($String* key, ::java::util::Locale* locale);
	virtual $String* getRootName() override;
	virtual bool isAttributeRequired($String* elementName, $String* attrName) override;
	::java::util::Map* elementInfoMap = nullptr;
	::java::util::Map* attrInfoMap = nullptr;
	$String* resourceBaseName = nullptr;
	$String* rootName = nullptr;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFMetadataFormat_h_