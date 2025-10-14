#ifndef _com_sun_imageio_plugins_tiff_TIFFFieldNode_h_
#define _com_sun_imageio_plugins_tiff_TIFFFieldNode_h_
//$ class com.sun.imageio.plugins.tiff.TIFFFieldNode
//$ extends javax.imageio.metadata.IIOMetadataNode

#include <javax/imageio/metadata/IIOMetadataNode.h>

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {
				class TIFFField;
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

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

class TIFFFieldNode : public ::javax::imageio::metadata::IIOMetadataNode {
	$class(TIFFFieldNode, $NO_CLASS_INIT, ::javax::imageio::metadata::IIOMetadataNode)
public:
	TIFFFieldNode();
	using ::javax::imageio::metadata::IIOMetadataNode::getNodeName;
	void init$(::javax::imageio::plugins::tiff::TIFFField* field);
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* newChild) override;
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual ::org::w3c::dom::Node* getFirstChild() override;
	virtual ::org::w3c::dom::Node* getLastChild() override;
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Node* getNextSibling() override;
	static $String* getNodeName(::javax::imageio::plugins::tiff::TIFFField* f);
	virtual ::org::w3c::dom::Node* getPreviousSibling() override;
	virtual bool hasChildNodes() override;
	void initialize();
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	static bool isIFD(::javax::imageio::plugins::tiff::TIFFField* f);
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	bool isIFD$ = false;
	::java::lang::Boolean* isInitialized = nullptr;
	::javax::imageio::plugins::tiff::TIFFField* field = nullptr;
};

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_tiff_TIFFFieldNode_h_