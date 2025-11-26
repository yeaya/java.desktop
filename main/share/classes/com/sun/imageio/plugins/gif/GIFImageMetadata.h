#ifndef _com_sun_imageio_plugins_gif_GIFImageMetadata_h_
#define _com_sun_imageio_plugins_gif_GIFImageMetadata_h_
//$ class com.sun.imageio.plugins.gif.GIFImageMetadata
//$ extends com.sun.imageio.plugins.gif.GIFMetadata

#include <com/sun/imageio/plugins/gif/GIFMetadata.h>
#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
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
				namespace gif {

class GIFImageMetadata : public ::com::sun::imageio::plugins::gif::GIFMetadata {
	$class(GIFImageMetadata, 0, ::com::sun::imageio::plugins::gif::GIFMetadata)
public:
	GIFImageMetadata();
	void init$(bool standardMetadataFormatSupported, $String* nativeMetadataFormatName, $String* nativeMetadataFormatClassName, $StringArray* extraMetadataFormatNames, $StringArray* extraMetadataFormatClassNames);
	void init$();
	virtual ::org::w3c::dom::Node* getAsTree($String* formatName) override;
	::org::w3c::dom::Node* getNativeTree();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardChromaNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardCompressionNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDataNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDimensionNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardTextNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardTransparencyNode() override;
	virtual bool isReadOnly() override;
	virtual void mergeNativeTree(::org::w3c::dom::Node* root) override;
	virtual void mergeStandardTree(::org::w3c::dom::Node* root) override;
	virtual void mergeTree($String* formatName, ::org::w3c::dom::Node* root) override;
	virtual void reset() override;
	virtual void setFromTree($String* formatName, ::org::w3c::dom::Node* root) override;
	$String* toISO8859($bytes* data);
	static $String* nativeMetadataFormatName;
	static $StringArray* disposalMethodNames;
	int32_t imageLeftPosition = 0;
	int32_t imageTopPosition = 0;
	int32_t imageWidth = 0;
	int32_t imageHeight = 0;
	bool interlaceFlag = false;
	bool sortFlag = false;
	$bytes* localColorTable = nullptr;
	int32_t disposalMethod = 0;
	bool userInputFlag = false;
	bool transparentColorFlag = false;
	int32_t delayTime = 0;
	int32_t transparentColorIndex = 0;
	bool hasPlainTextExtension = false;
	int32_t textGridLeft = 0;
	int32_t textGridTop = 0;
	int32_t textGridWidth = 0;
	int32_t textGridHeight = 0;
	int32_t characterCellWidth = 0;
	int32_t characterCellHeight = 0;
	int32_t textForegroundColor = 0;
	int32_t textBackgroundColor = 0;
	$bytes* text = nullptr;
	::java::util::List* applicationIDs = nullptr;
	::java::util::List* authenticationCodes = nullptr;
	::java::util::List* applicationData = nullptr;
	::java::util::List* comments = nullptr;
};

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_gif_GIFImageMetadata_h_