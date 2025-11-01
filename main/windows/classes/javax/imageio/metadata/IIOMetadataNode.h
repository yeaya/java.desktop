#ifndef _javax_imageio_metadata_IIOMetadataNode_h_
#define _javax_imageio_metadata_IIOMetadataNode_h_
//$ class javax.imageio.metadata.IIOMetadataNode
//$ extends org.w3c.dom.Element
//$ implements org.w3c.dom.NodeList

#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NodeList.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
			class Document;
			class NamedNodeMap;
			class Node;
			class TypeInfo;
			class UserDataHandler;
		}
	}
}

namespace javax {
	namespace imageio {
		namespace metadata {

class $export IIOMetadataNode : public ::org::w3c::dom::Element, public ::org::w3c::dom::NodeList {
	$class(IIOMetadataNode, $NO_CLASS_INIT, ::org::w3c::dom::Element, ::org::w3c::dom::NodeList)
public:
	IIOMetadataNode();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* nodeName);
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* newChild) override;
	void checkNode(::org::w3c::dom::Node* node);
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual int16_t compareDocumentPosition(::org::w3c::dom::Node* other) override;
	virtual $String* getAttribute($String* name) override;
	virtual $String* getAttributeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Attr* getAttributeNode($String* name) override;
	virtual ::org::w3c::dom::Attr* getAttributeNodeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::NamedNodeMap* getAttributes() override;
	virtual $String* getBaseURI() override;
	virtual ::org::w3c::dom::NodeList* getChildNodes() override;
	virtual ::org::w3c::dom::NodeList* getElementsByTagName($String* name) override;
	void getElementsByTagName($String* name, ::java::util::List* l);
	virtual ::org::w3c::dom::NodeList* getElementsByTagNameNS($String* namespaceURI, $String* localName) override;
	virtual $Object* getFeature($String* feature, $String* version) override;
	virtual ::org::w3c::dom::Node* getFirstChild() override;
	virtual ::org::w3c::dom::Node* getLastChild() override;
	virtual int32_t getLength() override;
	virtual $String* getLocalName() override;
	virtual $String* getNamespaceURI() override;
	virtual ::org::w3c::dom::Node* getNextSibling() override;
	virtual $String* getNodeName() override;
	virtual int16_t getNodeType() override;
	virtual $String* getNodeValue() override;
	virtual ::org::w3c::dom::Document* getOwnerDocument() override;
	virtual ::org::w3c::dom::Node* getParentNode() override;
	virtual $String* getPrefix() override;
	virtual ::org::w3c::dom::Node* getPreviousSibling() override;
	virtual ::org::w3c::dom::TypeInfo* getSchemaTypeInfo() override;
	virtual $String* getTagName() override;
	virtual $String* getTextContent() override;
	virtual $Object* getUserData($String* key) override;
	virtual $Object* getUserObject();
	virtual bool hasAttribute($String* name) override;
	virtual bool hasAttributeNS($String* namespaceURI, $String* localName) override;
	virtual bool hasAttributes() override;
	virtual bool hasChildNodes() override;
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual bool isDefaultNamespace($String* namespaceURI) override;
	virtual bool isEqualNode(::org::w3c::dom::Node* node) override;
	virtual bool isSameNode(::org::w3c::dom::Node* node) override;
	virtual bool isSupported($String* feature, $String* version) override;
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	virtual $String* lookupNamespaceURI($String* prefix) override;
	virtual $String* lookupPrefix($String* namespaceURI) override;
	virtual void normalize() override;
	virtual void removeAttribute($String* name) override;
	void removeAttribute($String* name, bool checkPresent);
	virtual void removeAttributeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Attr* removeAttributeNode(::org::w3c::dom::Attr* oldAttr) override;
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void setAttribute($String* name, $String* value) override;
	virtual void setAttributeNS($String* namespaceURI, $String* qualifiedName, $String* value) override;
	virtual ::org::w3c::dom::Attr* setAttributeNode(::org::w3c::dom::Attr* newAttr) override;
	virtual ::org::w3c::dom::Attr* setAttributeNodeNS(::org::w3c::dom::Attr* newAttr) override;
	virtual void setIdAttribute($String* name, bool isId) override;
	virtual void setIdAttributeNS($String* namespaceURI, $String* localName, bool isId) override;
	virtual void setIdAttributeNode(::org::w3c::dom::Attr* idAttr, bool isId) override;
	virtual void setNodeValue($String* nodeValue) override;
	virtual void setPrefix($String* prefix) override;
	virtual void setTextContent($String* textContent) override;
	virtual $Object* setUserData($String* key, Object$* data, ::org::w3c::dom::UserDataHandler* handler) override;
	virtual void setUserObject(Object$* userObject);
	virtual $String* toString() override;
	$String* nodeName = nullptr;
	$String* nodeValue = nullptr;
	$Object* userObject = nullptr;
	::javax::imageio::metadata::IIOMetadataNode* parent = nullptr;
	int32_t numChildren = 0;
	::javax::imageio::metadata::IIOMetadataNode* firstChild = nullptr;
	::javax::imageio::metadata::IIOMetadataNode* lastChild = nullptr;
	::javax::imageio::metadata::IIOMetadataNode* nextSibling = nullptr;
	::javax::imageio::metadata::IIOMetadataNode* previousSibling = nullptr;
	::java::util::List* attributes = nullptr;
};

		} // metadata
	} // imageio
} // javax

#endif // _javax_imageio_metadata_IIOMetadataNode_h_