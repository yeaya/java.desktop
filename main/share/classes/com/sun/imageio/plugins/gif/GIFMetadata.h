#ifndef _com_sun_imageio_plugins_gif_GIFMetadata_h_
#define _com_sun_imageio_plugins_gif_GIFMetadata_h_
//$ class com.sun.imageio.plugins.gif.GIFMetadata
//$ extends javax.imageio.metadata.IIOMetadata

#include <java/lang/Array.h>
#include <javax/imageio/metadata/IIOMetadata.h>

#pragma push_macro("UNDEFINED_INTEGER_VALUE")
#undef UNDEFINED_INTEGER_VALUE

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
				namespace gif {

class GIFMetadata : public ::javax::imageio::metadata::IIOMetadata {
	$class(GIFMetadata, $NO_CLASS_INIT, ::javax::imageio::metadata::IIOMetadata)
public:
	GIFMetadata();
	void init$(bool standardMetadataFormatSupported, $String* nativeMetadataFormatName, $String* nativeMetadataFormatClassName, $StringArray* extraMetadataFormatNames, $StringArray* extraMetadataFormatClassNames);
	static void fatal(::org::w3c::dom::Node* node, $String* reason);
	static $String* getAttribute(::org::w3c::dom::Node* node, $String* name, $String* defaultValue, bool required);
	static $String* getAttribute(::org::w3c::dom::Node* node, $String* name);
	static bool getBooleanAttribute(::org::w3c::dom::Node* node, $String* name, bool defaultValue, bool required);
	static bool getBooleanAttribute(::org::w3c::dom::Node* node, $String* name);
	virtual $bytes* getColorTable(::org::w3c::dom::Node* colorTableNode, $String* entryNodeName, bool lengthExpected, int32_t expectedLength);
	static int32_t getEnumeratedAttribute(::org::w3c::dom::Node* node, $String* name, $StringArray* legalNames, int32_t defaultValue, bool required);
	static int32_t getEnumeratedAttribute(::org::w3c::dom::Node* node, $String* name, $StringArray* legalNames);
	static float getFloatAttribute(::org::w3c::dom::Node* node, $String* name, float defaultValue, bool required);
	static float getFloatAttribute(::org::w3c::dom::Node* node, $String* name);
	static int32_t getIntAttribute(::org::w3c::dom::Node* node, $String* name, int32_t defaultValue, bool required, bool bounded, int32_t min, int32_t max);
	static int32_t getIntAttribute(::org::w3c::dom::Node* node, $String* name, bool bounded, int32_t min, int32_t max);
	static $String* getStringAttribute(::org::w3c::dom::Node* node, $String* name, $String* defaultValue, bool required, $StringArray* range);
	virtual void mergeNativeTree(::org::w3c::dom::Node* root) {}
	virtual void mergeStandardTree(::org::w3c::dom::Node* root) {}
	virtual void mergeTree($String* formatName, ::org::w3c::dom::Node* root) override;
	static const int32_t UNDEFINED_INTEGER_VALUE = (-1);
};

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com

#pragma pop_macro("UNDEFINED_INTEGER_VALUE")

#endif // _com_sun_imageio_plugins_gif_GIFMetadata_h_