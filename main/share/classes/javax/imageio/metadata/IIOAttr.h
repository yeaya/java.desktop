#ifndef _javax_imageio_metadata_IIOAttr_h_
#define _javax_imageio_metadata_IIOAttr_h_
//$ class javax.imageio.metadata.IIOAttr
//$ extends javax.imageio.metadata.IIOMetadataNode
//$ implements org.w3c.dom.Attr

#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <org/w3c/dom/Attr.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Element;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace metadata {

class IIOAttr : public ::javax::imageio::metadata::IIOMetadataNode, public ::org::w3c::dom::Attr {
	$class(IIOAttr, $NO_CLASS_INIT, ::javax::imageio::metadata::IIOMetadataNode, ::org::w3c::dom::Attr)
public:
	IIOAttr();
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* newChild) override;
	virtual $Object* clone() override;
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual int16_t compareDocumentPosition(::org::w3c::dom::Node* other) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::org::w3c::dom::NamedNodeMap* getAttributes() override;
	virtual $String* getBaseURI() override;
	virtual ::org::w3c::dom::NodeList* getChildNodes() override;
	virtual $Object* getFeature($String* feature, $String* version) override;
	virtual ::org::w3c::dom::Node* getFirstChild() override;
	virtual ::org::w3c::dom::Node* getLastChild() override;
	virtual $String* getLocalName() override;
	virtual $String* getNamespaceURI() override;
	virtual ::org::w3c::dom::Node* getNextSibling() override;
	virtual ::org::w3c::dom::Document* getOwnerDocument() override;
	virtual ::org::w3c::dom::Node* getParentNode() override;
	virtual $String* getPrefix() override;
	virtual ::org::w3c::dom::Node* getPreviousSibling() override;
	virtual ::org::w3c::dom::TypeInfo* getSchemaTypeInfo() override;
	virtual $String* getTextContent() override;
	virtual $Object* getUserData($String* key) override;
	virtual bool hasAttributes() override;
	virtual bool hasChildNodes() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Element* owner, $String* name, $String* value);
	virtual $String* getName() override;
	virtual $String* getNodeName() override;
	virtual int16_t getNodeType() override;
	virtual $String* getNodeValue() override;
	virtual ::org::w3c::dom::Element* getOwnerElement() override;
	virtual bool getSpecified() override;
	virtual $String* getValue() override;
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isEqualNode(::org::w3c::dom::Node* node) override;
	virtual bool isId() override;
	virtual bool isSameNode(::org::w3c::dom::Node* node) override;
	virtual bool isSupported($String* feature, $String* version) override;
	virtual $String* lookupNamespaceURI($String* prefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void normalize() override;
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void setNodeValue($String* value) override;
	virtual void setOwnerElement(::org::w3c::dom::Element* owner);
	virtual void setPrefix($String* prefix) override;
	virtual void setTextContent($String* textContent) override;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual void setValue($String* value) override;
	virtual $String* toString() override;
	::org::w3c::dom::Element* owner = nullptr;
	$String* name = nullptr;
	$String* value = nullptr;
};

		} // metadata
	} // imageio
} // javax

#endif // _javax_imageio_metadata_IIOAttr_h_