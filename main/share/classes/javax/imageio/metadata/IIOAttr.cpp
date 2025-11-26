#include <javax/imageio/metadata/IIOAttr.h>

#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/TypeInfo.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $TypeInfo = ::org::w3c::dom::TypeInfo;
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;

namespace javax {
	namespace imageio {
		namespace metadata {

$FieldInfo _IIOAttr_FieldInfo_[] = {
	{"owner", "Lorg/w3c/dom/Element;", nullptr, 0, $field(IIOAttr, owner)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(IIOAttr, name)},
	{"value", "Ljava/lang/String;", nullptr, 0, $field(IIOAttr, value)},
	{}
};

$MethodInfo _IIOAttr_MethodInfo_[] = {
	{"*appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC},
	{"*getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC},
	{"*getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC},
	{"*getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*getSchemaTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC},
	{"*getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hasAttributes", "()Z", nullptr, $PUBLIC},
	{"*hasChildNodes", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IIOAttr::*)($Element*,$String*,$String*)>(&IIOAttr::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNodeType", "()S", nullptr, $PUBLIC},
	{"getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOwnerElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC},
	{"getSpecified", "()Z", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"isId", "()Z", nullptr, $PUBLIC},
	{"*isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC},
	{"*isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"*lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*normalize", "()V", nullptr, $PUBLIC},
	{"*removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setOwnerElement", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC},
	{"*setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IIOAttr_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.metadata.IIOAttr",
	"javax.imageio.metadata.IIOMetadataNode",
	"org.w3c.dom.Attr",
	_IIOAttr_FieldInfo_,
	_IIOAttr_MethodInfo_
};

$Object* allocate$IIOAttr($Class* clazz) {
	return $of($alloc(IIOAttr));
}

$Node* IIOAttr::getParentNode() {
	 return this->$IIOMetadataNode::getParentNode();
}

$NodeList* IIOAttr::getChildNodes() {
	 return this->$IIOMetadataNode::getChildNodes();
}

$Node* IIOAttr::getFirstChild() {
	 return this->$IIOMetadataNode::getFirstChild();
}

$Node* IIOAttr::getLastChild() {
	 return this->$IIOMetadataNode::getLastChild();
}

$Node* IIOAttr::getPreviousSibling() {
	 return this->$IIOMetadataNode::getPreviousSibling();
}

$Node* IIOAttr::getNextSibling() {
	 return this->$IIOMetadataNode::getNextSibling();
}

$NamedNodeMap* IIOAttr::getAttributes() {
	 return this->$IIOMetadataNode::getAttributes();
}

$Document* IIOAttr::getOwnerDocument() {
	 return this->$IIOMetadataNode::getOwnerDocument();
}

$Node* IIOAttr::insertBefore($Node* newChild, $Node* refChild) {
	 return this->$IIOMetadataNode::insertBefore(newChild, refChild);
}

$Node* IIOAttr::replaceChild($Node* newChild, $Node* oldChild) {
	 return this->$IIOMetadataNode::replaceChild(newChild, oldChild);
}

$Node* IIOAttr::removeChild($Node* oldChild) {
	 return this->$IIOMetadataNode::removeChild(oldChild);
}

$Node* IIOAttr::appendChild($Node* newChild) {
	 return this->$IIOMetadataNode::appendChild(newChild);
}

bool IIOAttr::hasChildNodes() {
	 return this->$IIOMetadataNode::hasChildNodes();
}

$Node* IIOAttr::cloneNode(bool deep) {
	 return this->$IIOMetadataNode::cloneNode(deep);
}

void IIOAttr::normalize() {
	this->$IIOMetadataNode::normalize();
}

bool IIOAttr::isSupported($String* feature, $String* version) {
	 return this->$IIOMetadataNode::isSupported(feature, version);
}

$String* IIOAttr::getNamespaceURI() {
	 return this->$IIOMetadataNode::getNamespaceURI();
}

$String* IIOAttr::getPrefix() {
	 return this->$IIOMetadataNode::getPrefix();
}

void IIOAttr::setPrefix($String* prefix) {
	this->$IIOMetadataNode::setPrefix(prefix);
}

$String* IIOAttr::getLocalName() {
	 return this->$IIOMetadataNode::getLocalName();
}

bool IIOAttr::hasAttributes() {
	 return this->$IIOMetadataNode::hasAttributes();
}

$TypeInfo* IIOAttr::getSchemaTypeInfo() {
	 return this->$IIOMetadataNode::getSchemaTypeInfo();
}

$Object* IIOAttr::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	 return this->$IIOMetadataNode::setUserData(key, data, handler);
}

$Object* IIOAttr::getUserData($String* key) {
	 return this->$IIOMetadataNode::getUserData(key);
}

$Object* IIOAttr::getFeature($String* feature, $String* version) {
	 return this->$IIOMetadataNode::getFeature(feature, version);
}

bool IIOAttr::isSameNode($Node* node) {
	 return this->$IIOMetadataNode::isSameNode(node);
}

bool IIOAttr::isEqualNode($Node* node) {
	 return this->$IIOMetadataNode::isEqualNode(node);
}

$String* IIOAttr::lookupNamespaceURI($String* prefix) {
	 return this->$IIOMetadataNode::lookupNamespaceURI(prefix);
}

bool IIOAttr::isDefaultNamespace($String* namespaceURI) {
	 return this->$IIOMetadataNode::isDefaultNamespace(namespaceURI);
}

$String* IIOAttr::lookupPrefix($String* namespaceURI) {
	 return this->$IIOMetadataNode::lookupPrefix(namespaceURI);
}

$String* IIOAttr::getTextContent() {
	 return this->$IIOMetadataNode::getTextContent();
}

void IIOAttr::setTextContent($String* textContent) {
	this->$IIOMetadataNode::setTextContent(textContent);
}

int16_t IIOAttr::compareDocumentPosition($Node* other) {
	 return this->$IIOMetadataNode::compareDocumentPosition(other);
}

$String* IIOAttr::getBaseURI() {
	 return this->$IIOMetadataNode::getBaseURI();
}

int32_t IIOAttr::hashCode() {
	 return this->$IIOMetadataNode::hashCode();
}

bool IIOAttr::equals(Object$* arg0) {
	 return this->$IIOMetadataNode::equals(arg0);
}

$Object* IIOAttr::clone() {
	 return this->$IIOMetadataNode::clone();
}

$String* IIOAttr::toString() {
	 return this->$IIOMetadataNode::toString();
}

void IIOAttr::finalize() {
	this->$IIOMetadataNode::finalize();
}

void IIOAttr::init$($Element* owner, $String* name, $String* value) {
	$IIOMetadataNode::init$();
	$set(this, owner, owner);
	$set(this, name, name);
	$set(this, value, value);
}

$String* IIOAttr::getName() {
	return this->name;
}

$String* IIOAttr::getNodeName() {
	return this->name;
}

int16_t IIOAttr::getNodeType() {
	return $Node::ATTRIBUTE_NODE;
}

bool IIOAttr::getSpecified() {
	return true;
}

$String* IIOAttr::getValue() {
	return this->value;
}

$String* IIOAttr::getNodeValue() {
	return this->value;
}

void IIOAttr::setValue($String* value) {
	$set(this, value, value);
}

void IIOAttr::setNodeValue($String* value) {
	$set(this, value, value);
}

$Element* IIOAttr::getOwnerElement() {
	return this->owner;
}

void IIOAttr::setOwnerElement($Element* owner) {
	$set(this, owner, owner);
}

bool IIOAttr::isId() {
	return false;
}

IIOAttr::IIOAttr() {
}

$Class* IIOAttr::load$($String* name, bool initialize) {
	$loadClass(IIOAttr, name, initialize, &_IIOAttr_ClassInfo_, allocate$IIOAttr);
	return class$;
}

$Class* IIOAttr::class$ = nullptr;

		} // metadata
	} // imageio
} // javax