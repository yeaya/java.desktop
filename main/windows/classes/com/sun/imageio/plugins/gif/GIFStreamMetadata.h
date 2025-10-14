#ifndef _com_sun_imageio_plugins_gif_GIFStreamMetadata_h_
#define _com_sun_imageio_plugins_gif_GIFStreamMetadata_h_
//$ class com.sun.imageio.plugins.gif.GIFStreamMetadata
//$ extends com.sun.imageio.plugins.gif.GIFMetadata

#include <com/sun/imageio/plugins/gif/GIFMetadata.h>
#include <java/lang/Array.h>

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
				namespace gif {

class GIFStreamMetadata : public ::com::sun::imageio::plugins::gif::GIFMetadata {
	$class(GIFStreamMetadata, 0, ::com::sun::imageio::plugins::gif::GIFMetadata)
public:
	GIFStreamMetadata();
	void init$(bool standardMetadataFormatSupported, $String* nativeMetadataFormatName, $String* nativeMetadataFormatClassName, $StringArray* extraMetadataFormatNames, $StringArray* extraMetadataFormatClassNames);
	void init$();
	virtual ::org::w3c::dom::Node* getAsTree($String* formatName) override;
	::org::w3c::dom::Node* getNativeTree();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardChromaNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardCompressionNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDataNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDimensionNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDocumentNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardTextNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardTransparencyNode() override;
	virtual bool isReadOnly() override;
	virtual void mergeNativeTree(::org::w3c::dom::Node* root) override;
	virtual void mergeStandardTree(::org::w3c::dom::Node* root) override;
	virtual void mergeTree($String* formatName, ::org::w3c::dom::Node* root) override;
	virtual void reset() override;
	virtual void setFromTree($String* formatName, ::org::w3c::dom::Node* root) override;
	static $String* nativeMetadataFormatName;
	static $StringArray* versionStrings;
	$String* version = nullptr;
	int32_t logicalScreenWidth = 0;
	int32_t logicalScreenHeight = 0;
	int32_t colorResolution = 0;
	int32_t pixelAspectRatio = 0;
	int32_t backgroundColorIndex = 0;
	bool sortFlag = false;
	static $StringArray* colorTableSizes;
	$bytes* globalColorTable = nullptr;
};

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_gif_GIFStreamMetadata_h_