#ifndef _com_sun_imageio_plugins_png_PNGMetadata_h_
#define _com_sun_imageio_plugins_png_PNGMetadata_h_
//$ class com.sun.imageio.plugins.png.PNGMetadata
//$ extends javax.imageio.metadata.IIOMetadata
//$ implements java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <javax/imageio/metadata/IIOMetadata.h>

#pragma push_macro("PHYS_UNIT_METER")
#undef PHYS_UNIT_METER
#pragma push_macro("PHYS_UNIT_UNKNOWN")
#undef PHYS_UNIT_UNKNOWN

namespace java {
	namespace time {
		class OffsetDateTime;
		class ZoneOffset;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class ListIterator;
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
			class IIOMetadataNode;
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

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

class PNGMetadata : public ::javax::imageio::metadata::IIOMetadata, public ::java::lang::Cloneable {
	$class(PNGMetadata, 0, ::javax::imageio::metadata::IIOMetadata, ::java::lang::Cloneable)
public:
	PNGMetadata();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::javax::imageio::metadata::IIOMetadata* metadata);
	virtual $Object* clone() override;
	::java::util::ArrayList* cloneBytesArrayList(::java::util::ArrayList* in);
	virtual void decodeImageCreationTimeFromTextChunk(::java::util::ListIterator* iterChunk);
	virtual void encodeImageCreationTimeToTextChunk();
	void fatal(::org::w3c::dom::Node* node, $String* reason);
	virtual ::org::w3c::dom::Node* getAsTree($String* formatName) override;
	$String* getAttribute(::org::w3c::dom::Node* node, $String* name, $String* defaultValue, bool required);
	$String* getAttribute(::org::w3c::dom::Node* node, $String* name);
	bool getBooleanAttribute(::org::w3c::dom::Node* node, $String* name, bool defaultValue, bool required);
	bool getBooleanAttribute(::org::w3c::dom::Node* node, $String* name);
	$String* getEncodedTime();
	int32_t getEnumeratedAttribute(::org::w3c::dom::Node* node, $String* name, $StringArray* legalNames, int32_t defaultValue, bool required);
	int32_t getEnumeratedAttribute(::org::w3c::dom::Node* node, $String* name, $StringArray* legalNames);
	float getFloatAttribute(::org::w3c::dom::Node* node, $String* name, float defaultValue, bool required);
	float getFloatAttribute(::org::w3c::dom::Node* node, $String* name);
	int32_t getIntAttribute(::org::w3c::dom::Node* node, $String* name, int32_t defaultValue, bool required);
	int32_t getIntAttribute(::org::w3c::dom::Node* node, $String* name);
	::org::w3c::dom::Node* getNativeTree();
	int32_t getNumChannels();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardChromaNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardCompressionNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDataNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDimensionNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDocumentNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardTextNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardTransparencyNode() override;
	$String* getStringAttribute(::org::w3c::dom::Node* node, $String* name, $String* defaultValue, bool required);
	virtual bool hasTransparentColor();
	virtual void initImageCreationTime(::java::time::OffsetDateTime* offsetDateTime);
	virtual void initImageCreationTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t min, int32_t second);
	virtual void initialize(::javax::imageio::ImageTypeSpecifier* imageType, int32_t numBands);
	bool isISOLatin($String* s, bool isLineFeedAllowed);
	virtual bool isReadOnly() override;
	bool isValidKeyword($String* s);
	void mergeNativeTree(::org::w3c::dom::Node* root);
	void mergeStandardTree(::org::w3c::dom::Node* root);
	virtual void mergeTree($String* formatName, ::org::w3c::dom::Node* root) override;
	::java::time::OffsetDateTime* parseEncodedTime($String* encodedTime);
	$String* repeat($String* s, int32_t times);
	virtual void reset() override;
	void setCreationTimeChunk(::java::util::ListIterator* iter);
	void setEncodedTime($String* encodedTime);
	virtual $String* toString() override;
	static $String* nativeMetadataFormatName;
	static $String* nativeMetadataFormatClassName;
	static $StringArray* IHDR_colorTypeNames;
	static $ints* IHDR_numChannels;
	static $StringArray* IHDR_bitDepths;
	static $StringArray* IHDR_compressionMethodNames;
	static $StringArray* IHDR_filterMethodNames;
	static $StringArray* IHDR_interlaceMethodNames;
	static $StringArray* iCCP_compressionMethodNames;
	static $StringArray* zTXt_compressionMethodNames;
	static const int32_t PHYS_UNIT_UNKNOWN = 0;
	static const int32_t PHYS_UNIT_METER = 1;
	static $StringArray* unitSpecifierNames;
	static $StringArray* renderingIntentNames;
	static $StringArray* colorSpaceTypeNames;
	bool IHDR_present = false;
	int32_t IHDR_width = 0;
	int32_t IHDR_height = 0;
	int32_t IHDR_bitDepth = 0;
	int32_t IHDR_colorType = 0;
	int32_t IHDR_compressionMethod = 0;
	int32_t IHDR_filterMethod = 0;
	int32_t IHDR_interlaceMethod = 0;
	bool PLTE_present = false;
	$bytes* PLTE_red = nullptr;
	$bytes* PLTE_green = nullptr;
	$bytes* PLTE_blue = nullptr;
	$ints* PLTE_order = nullptr;
	bool bKGD_present = false;
	int32_t bKGD_colorType = 0;
	int32_t bKGD_index = 0;
	int32_t bKGD_gray = 0;
	int32_t bKGD_red = 0;
	int32_t bKGD_green = 0;
	int32_t bKGD_blue = 0;
	bool cHRM_present = false;
	int32_t cHRM_whitePointX = 0;
	int32_t cHRM_whitePointY = 0;
	int32_t cHRM_redX = 0;
	int32_t cHRM_redY = 0;
	int32_t cHRM_greenX = 0;
	int32_t cHRM_greenY = 0;
	int32_t cHRM_blueX = 0;
	int32_t cHRM_blueY = 0;
	bool gAMA_present = false;
	int32_t gAMA_gamma = 0;
	bool hIST_present = false;
	$chars* hIST_histogram = nullptr;
	bool iCCP_present = false;
	$String* iCCP_profileName = nullptr;
	int32_t iCCP_compressionMethod = 0;
	$bytes* iCCP_compressedProfile = nullptr;
	::java::util::ArrayList* iTXt_keyword = nullptr;
	::java::util::ArrayList* iTXt_compressionFlag = nullptr;
	::java::util::ArrayList* iTXt_compressionMethod = nullptr;
	::java::util::ArrayList* iTXt_languageTag = nullptr;
	::java::util::ArrayList* iTXt_translatedKeyword = nullptr;
	::java::util::ArrayList* iTXt_text = nullptr;
	bool pHYs_present = false;
	int32_t pHYs_pixelsPerUnitXAxis = 0;
	int32_t pHYs_pixelsPerUnitYAxis = 0;
	int32_t pHYs_unitSpecifier = 0;
	bool sBIT_present = false;
	int32_t sBIT_colorType = 0;
	int32_t sBIT_grayBits = 0;
	int32_t sBIT_redBits = 0;
	int32_t sBIT_greenBits = 0;
	int32_t sBIT_blueBits = 0;
	int32_t sBIT_alphaBits = 0;
	bool sPLT_present = false;
	$String* sPLT_paletteName = nullptr;
	int32_t sPLT_sampleDepth = 0;
	$ints* sPLT_red = nullptr;
	$ints* sPLT_green = nullptr;
	$ints* sPLT_blue = nullptr;
	$ints* sPLT_alpha = nullptr;
	$ints* sPLT_frequency = nullptr;
	bool sRGB_present = false;
	int32_t sRGB_renderingIntent = 0;
	::java::util::ArrayList* tEXt_keyword = nullptr;
	::java::util::ArrayList* tEXt_text = nullptr;
	bool tIME_present = false;
	int32_t tIME_year = 0;
	int32_t tIME_month = 0;
	int32_t tIME_day = 0;
	int32_t tIME_hour = 0;
	int32_t tIME_minute = 0;
	int32_t tIME_second = 0;
	bool creation_time_present = false;
	int32_t creation_time_year = 0;
	int32_t creation_time_month = 0;
	int32_t creation_time_day = 0;
	int32_t creation_time_hour = 0;
	int32_t creation_time_minute = 0;
	int32_t creation_time_second = 0;
	::java::time::ZoneOffset* creation_time_offset = nullptr;
	bool tEXt_creation_time_present = false;
	::java::util::ListIterator* tEXt_creation_time_iter = nullptr;
	static $String* tEXt_creationTimeKey;
	bool tRNS_present = false;
	int32_t tRNS_colorType = 0;
	$bytes* tRNS_alpha = nullptr;
	int32_t tRNS_gray = 0;
	int32_t tRNS_red = 0;
	int32_t tRNS_green = 0;
	int32_t tRNS_blue = 0;
	::java::util::ArrayList* zTXt_keyword = nullptr;
	::java::util::ArrayList* zTXt_compressionMethod = nullptr;
	::java::util::ArrayList* zTXt_text = nullptr;
	::java::util::ArrayList* unknownChunkType = nullptr;
	::java::util::ArrayList* unknownChunkData = nullptr;
};

				} // png
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("PHYS_UNIT_METER")
#pragma pop_macro("PHYS_UNIT_UNKNOWN")

#endif // _com_sun_imageio_plugins_png_PNGMetadata_h_