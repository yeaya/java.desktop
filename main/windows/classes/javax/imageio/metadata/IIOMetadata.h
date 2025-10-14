#ifndef _javax_imageio_metadata_IIOMetadata_h_
#define _javax_imageio_metadata_IIOMetadata_h_
//$ class javax.imageio.metadata.IIOMetadata
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace imageio {
		namespace metadata {
			class IIOMetadataController;
			class IIOMetadataFormat;
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

namespace javax {
	namespace imageio {
		namespace metadata {

class $export IIOMetadata : public ::java::lang::Object {
	$class(IIOMetadata, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IIOMetadata();
	void init$();
	void init$(bool standardMetadataFormatSupported, $String* nativeMetadataFormatName, $String* nativeMetadataFormatClassName, $StringArray* extraMetadataFormatNames, $StringArray* extraMetadataFormatClassNames);
	virtual bool activateController();
	void append(::javax::imageio::metadata::IIOMetadataNode* root, ::javax::imageio::metadata::IIOMetadataNode* node);
	virtual ::org::w3c::dom::Node* getAsTree($String* formatName) {return nullptr;}
	virtual ::javax::imageio::metadata::IIOMetadataController* getController();
	virtual ::javax::imageio::metadata::IIOMetadataController* getDefaultController();
	virtual $StringArray* getExtraMetadataFormatNames();
	virtual ::javax::imageio::metadata::IIOMetadataFormat* getMetadataFormat($String* formatName);
	$Class* getMetadataFormatClass($String* formatClassName);
	virtual $StringArray* getMetadataFormatNames();
	virtual $String* getNativeMetadataFormatName();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardChromaNode();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardCompressionNode();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDataNode();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDimensionNode();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardDocumentNode();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardTextNode();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardTileNode();
	virtual ::javax::imageio::metadata::IIOMetadataNode* getStandardTransparencyNode();
	::javax::imageio::metadata::IIOMetadataNode* getStandardTree();
	virtual bool hasController();
	virtual bool isReadOnly() {return false;}
	virtual bool isStandardMetadataFormatSupported();
	$Class* lambda$getMetadataFormat$0($String* className);
	virtual void mergeTree($String* formatName, ::org::w3c::dom::Node* root) {}
	virtual void reset() {}
	virtual void setController(::javax::imageio::metadata::IIOMetadataController* controller);
	virtual void setFromTree($String* formatName, ::org::w3c::dom::Node* root);
	bool standardFormatSupported = false;
	$String* nativeMetadataFormatName = nullptr;
	$String* nativeMetadataFormatClassName = nullptr;
	$StringArray* extraMetadataFormatNames = nullptr;
	$StringArray* extraMetadataFormatClassNames = nullptr;
	::javax::imageio::metadata::IIOMetadataController* defaultController = nullptr;
	::javax::imageio::metadata::IIOMetadataController* controller = nullptr;
};

		} // metadata
	} // imageio
} // javax

#endif // _javax_imageio_metadata_IIOMetadata_h_