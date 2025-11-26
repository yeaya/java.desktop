#ifndef _com_sun_imageio_plugins_wbmp_WBMPMetadata_h_
#define _com_sun_imageio_plugins_wbmp_WBMPMetadata_h_
//$ class com.sun.imageio.plugins.wbmp.WBMPMetadata
//$ extends javax.imageio.metadata.IIOMetadata

#include <javax/imageio/metadata/IIOMetadata.h>

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
				namespace wbmp {

class WBMPMetadata : public ::javax::imageio::metadata::IIOMetadata {
	$class(WBMPMetadata, 0, ::javax::imageio::metadata::IIOMetadata)
public:
	WBMPMetadata();
	void init$();
	::javax::imageio::metadata::IIOMetadataNode* addChildNode(::javax::imageio::metadata::IIOMetadataNode* root, $String* name, Object$* object);
	virtual ::org::w3c::dom::Node* getAsTree($String* formatName) override;
	::org::w3c::dom::Node* getNativeTree();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardChromaNode() override;
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDimensionNode() override;
	virtual bool isReadOnly() override;
	virtual void mergeTree($String* formatName, ::org::w3c::dom::Node* root) override;
	virtual void reset() override;
	virtual void setFromTree($String* formatName, ::org::w3c::dom::Node* root) override;
	static $String* nativeMetadataFormatName;
	int32_t wbmpType = 0;
	int32_t width = 0;
	int32_t height = 0;
};

				} // wbmp
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_wbmp_WBMPMetadata_h_