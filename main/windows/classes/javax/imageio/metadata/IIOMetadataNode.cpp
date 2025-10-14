#include <javax/imageio/metadata/IIOMetadataNode.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/imageio/metadata/IIOAttr.h>
#include <javax/imageio/metadata/IIODOMException.h>
#include <javax/imageio/metadata/IIONamedNodeMap.h>
#include <javax/imageio/metadata/IIONodeList.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/TypeInfo.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef INUSE_ATTRIBUTE_ERR
#undef INVALID_CHARACTER_ERR
#undef NOT_FOUND_ERR
#undef NOT_SUPPORTED_ERR
#undef WRONG_DOCUMENT_ERR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $IIOAttr = ::javax::imageio::metadata::IIOAttr;
using $IIODOMException = ::javax::imageio::metadata::IIODOMException;
using $IIONamedNodeMap = ::javax::imageio::metadata::IIONamedNodeMap;
using $IIONodeList = ::javax::imageio::metadata::IIONodeList;
using $Attr = ::org::w3c::dom::Attr;
using $DOMException = ::org::w3c::dom::DOMException;
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

$FieldInfo _IIOMetadataNode_FieldInfo_[] = {
	{"nodeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IIOMetadataNode, nodeName)},
	{"nodeValue", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IIOMetadataNode, nodeValue)},
	{"userObject", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(IIOMetadataNode, userObject)},
	{"parent", "Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PRIVATE, $field(IIOMetadataNode, parent)},
	{"numChildren", "I", nullptr, $PRIVATE, $field(IIOMetadataNode, numChildren)},
	{"firstChild", "Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PRIVATE, $field(IIOMetadataNode, firstChild)},
	{"lastChild", "Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PRIVATE, $field(IIOMetadataNode, lastChild)},
	{"nextSibling", "Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PRIVATE, $field(IIOMetadataNode, nextSibling)},
	{"previousSibling", "Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PRIVATE, $field(IIOMetadataNode, previousSibling)},
	{"attributes", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/metadata/IIOAttr;>;", $PRIVATE, $field(IIOMetadataNode, attributes)},
	{}
};

$MethodInfo _IIOMetadataNode_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IIOMetadataNode::*)()>(&IIOMetadataNode::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IIOMetadataNode::*)($String*)>(&IIOMetadataNode::init$))},
	{"appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"checkNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(IIOMetadataNode::*)($Node*)>(&IIOMetadataNode::checkNode)), "org.w3c.dom.DOMException"},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"compareDocumentPosition", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAttributeNode", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC},
	{"getAttributeNodeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC},
	{"getAttributes", "()Lorg/w3c/dom/NamedNodeMap;", nullptr, $PUBLIC},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"getChildNodes", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC},
	{"getElementsByTagName", "(Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC},
	{"getElementsByTagName", "(Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/util/List<Lorg/w3c/dom/Node;>;)V", $PRIVATE, $method(static_cast<void(IIOMetadataNode::*)($String*,$List*)>(&IIOMetadataNode::getElementsByTagName))},
	{"getElementsByTagNameNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC},
	{"getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getLastChild", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNamespaceURI", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getNodeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNodeType", "()S", nullptr, $PUBLIC},
	{"getNodeValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC},
	{"getParentNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPreviousSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getSchemaTypeInfo", "()Lorg/w3c/dom/TypeInfo;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTextContent", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"getUserData", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"getUserObject", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"hasAttribute", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"hasAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"hasAttributes", "()Z", nullptr, $PUBLIC},
	{"hasChildNodes", "()Z", nullptr, $PUBLIC},
	{"insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"isDefaultNamespace", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"isEqualNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"isSameNode", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"normalize", "()V", nullptr, $PUBLIC},
	{"removeAttribute", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"removeAttribute", "(Ljava/lang/String;Z)V", nullptr, $PRIVATE, $method(static_cast<void(IIOMetadataNode::*)($String*,bool)>(&IIOMetadataNode::removeAttribute))},
	{"removeAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"removeAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC},
	{"removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"setAttributeNodeNS", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC},
	{"setIdAttribute", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"setIdAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"setIdAttributeNode", "(Lorg/w3c/dom/Attr;Z)V", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"setNodeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setTextContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "org.w3c.dom.DOMException"},
	{"setUserObject", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IIOMetadataNode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.metadata.IIOMetadataNode",
	"java.lang.Object",
	"org.w3c.dom.Element,org.w3c.dom.NodeList",
	_IIOMetadataNode_FieldInfo_,
	_IIOMetadataNode_MethodInfo_
};

$Object* allocate$IIOMetadataNode($Class* clazz) {
	return $of($alloc(IIOMetadataNode));
}

int32_t IIOMetadataNode::hashCode() {
	 return this->$Element::hashCode();
}

bool IIOMetadataNode::equals(Object$* arg0) {
	 return this->$Element::equals(arg0);
}

$Object* IIOMetadataNode::clone() {
	 return this->$Element::clone();
}

$String* IIOMetadataNode::toString() {
	 return this->$Element::toString();
}

void IIOMetadataNode::finalize() {
	this->$Element::finalize();
}

void IIOMetadataNode::init$() {
	$set(this, nodeName, nullptr);
	$set(this, nodeValue, nullptr);
	$set(this, userObject, nullptr);
	$set(this, parent, nullptr);
	this->numChildren = 0;
	$set(this, firstChild, nullptr);
	$set(this, lastChild, nullptr);
	$set(this, nextSibling, nullptr);
	$set(this, previousSibling, nullptr);
	$set(this, attributes, $new($ArrayList));
}

void IIOMetadataNode::init$($String* nodeName) {
	$set(this, nodeName, nullptr);
	$set(this, nodeValue, nullptr);
	$set(this, userObject, nullptr);
	$set(this, parent, nullptr);
	this->numChildren = 0;
	$set(this, firstChild, nullptr);
	$set(this, lastChild, nullptr);
	$set(this, nextSibling, nullptr);
	$set(this, previousSibling, nullptr);
	$set(this, attributes, $new($ArrayList));
	$set(this, nodeName, nodeName);
}

void IIOMetadataNode::checkNode($Node* node) {
	if (node == nullptr) {
		return;
	}
	if (!($instanceOf(IIOMetadataNode, node))) {
		$throwNew($IIODOMException, $DOMException::WRONG_DOCUMENT_ERR, "Node not an IIOMetadataNode!"_s);
	}
}

$String* IIOMetadataNode::getNodeName() {
	return this->nodeName;
}

$String* IIOMetadataNode::getNodeValue() {
	return this->nodeValue;
}

void IIOMetadataNode::setNodeValue($String* nodeValue) {
	$set(this, nodeValue, nodeValue);
}

int16_t IIOMetadataNode::getNodeType() {
	return $Node::ELEMENT_NODE;
}

$Node* IIOMetadataNode::getParentNode() {
	return this->parent;
}

$NodeList* IIOMetadataNode::getChildNodes() {
	return this;
}

$Node* IIOMetadataNode::getFirstChild() {
	return this->firstChild;
}

$Node* IIOMetadataNode::getLastChild() {
	return this->lastChild;
}

$Node* IIOMetadataNode::getPreviousSibling() {
	return this->previousSibling;
}

$Node* IIOMetadataNode::getNextSibling() {
	return this->nextSibling;
}

$NamedNodeMap* IIOMetadataNode::getAttributes() {
	return $new($IIONamedNodeMap, this->attributes);
}

$Document* IIOMetadataNode::getOwnerDocument() {
	return nullptr;
}

$Node* IIOMetadataNode::insertBefore($Node* newChild, $Node* refChild) {
	if (newChild == nullptr) {
		$throwNew($IllegalArgumentException, "newChild == null!"_s);
	}
	checkNode(newChild);
	checkNode(refChild);
	$var(IIOMetadataNode, newChildNode, $cast(IIOMetadataNode, newChild));
	$var(IIOMetadataNode, refChildNode, $cast(IIOMetadataNode, refChild));
	$var(IIOMetadataNode, previous, nullptr);
	$var(IIOMetadataNode, next, nullptr);
	if (refChild == nullptr) {
		$assign(previous, this->lastChild);
		$assign(next, nullptr);
		$set(this, lastChild, newChildNode);
	} else {
		$assign(previous, $nc(refChildNode)->previousSibling);
		$assign(next, refChildNode);
	}
	if (previous != nullptr) {
		$set(previous, nextSibling, newChildNode);
	}
	if (next != nullptr) {
		$set(next, previousSibling, newChildNode);
	}
	$set($nc(newChildNode), parent, this);
	$set(newChildNode, previousSibling, previous);
	$set(newChildNode, nextSibling, next);
	if (this->firstChild == refChildNode) {
		$set(this, firstChild, newChildNode);
	}
	++this->numChildren;
	return newChildNode;
}

$Node* IIOMetadataNode::replaceChild($Node* newChild, $Node* oldChild) {
	if (newChild == nullptr) {
		$throwNew($IllegalArgumentException, "newChild == null!"_s);
	}
	checkNode(newChild);
	checkNode(oldChild);
	$var(IIOMetadataNode, newChildNode, $cast(IIOMetadataNode, newChild));
	$var(IIOMetadataNode, oldChildNode, $cast(IIOMetadataNode, oldChild));
	$var(IIOMetadataNode, previous, $nc(oldChildNode)->previousSibling);
	$var(IIOMetadataNode, next, oldChildNode->nextSibling);
	if (previous != nullptr) {
		$set(previous, nextSibling, newChildNode);
	}
	if (next != nullptr) {
		$set(next, previousSibling, newChildNode);
	}
	$set($nc(newChildNode), parent, this);
	$set(newChildNode, previousSibling, previous);
	$set(newChildNode, nextSibling, next);
	if (this->firstChild == oldChildNode) {
		$set(this, firstChild, newChildNode);
	}
	if (this->lastChild == oldChildNode) {
		$set(this, lastChild, newChildNode);
	}
	$set(oldChildNode, parent, nullptr);
	$set(oldChildNode, previousSibling, nullptr);
	$set(oldChildNode, nextSibling, nullptr);
	return oldChildNode;
}

$Node* IIOMetadataNode::removeChild($Node* oldChild) {
	if (oldChild == nullptr) {
		$throwNew($IllegalArgumentException, "oldChild == null!"_s);
	}
	checkNode(oldChild);
	$var(IIOMetadataNode, oldChildNode, $cast(IIOMetadataNode, oldChild));
	$var(IIOMetadataNode, previous, $nc(oldChildNode)->previousSibling);
	$var(IIOMetadataNode, next, oldChildNode->nextSibling);
	if (previous != nullptr) {
		$set(previous, nextSibling, next);
	}
	if (next != nullptr) {
		$set(next, previousSibling, previous);
	}
	if (this->firstChild == oldChildNode) {
		$set(this, firstChild, next);
	}
	if (this->lastChild == oldChildNode) {
		$set(this, lastChild, previous);
	}
	$set(oldChildNode, parent, nullptr);
	$set(oldChildNode, previousSibling, nullptr);
	$set(oldChildNode, nextSibling, nullptr);
	--this->numChildren;
	return oldChildNode;
}

$Node* IIOMetadataNode::appendChild($Node* newChild) {
	if (newChild == nullptr) {
		$throwNew($IllegalArgumentException, "newChild == null!"_s);
	}
	checkNode(newChild);
	return insertBefore(newChild, nullptr);
}

bool IIOMetadataNode::hasChildNodes() {
	return this->numChildren > 0;
}

$Node* IIOMetadataNode::cloneNode(bool deep) {
	$var(IIOMetadataNode, newNode, $new(IIOMetadataNode, this->nodeName));
	newNode->setUserObject($(getUserObject()));
	if (deep) {
		{
			$var(IIOMetadataNode, child, this->firstChild);
			for (; child != nullptr; $assign(child, $nc(child)->nextSibling)) {
				newNode->appendChild($(child->cloneNode(true)));
			}
		}
	}
	return newNode;
}

void IIOMetadataNode::normalize() {
}

bool IIOMetadataNode::isSupported($String* feature, $String* version) {
	return false;
}

$String* IIOMetadataNode::getNamespaceURI() {
	return nullptr;
}

$String* IIOMetadataNode::getPrefix() {
	return nullptr;
}

void IIOMetadataNode::setPrefix($String* prefix) {
}

$String* IIOMetadataNode::getLocalName() {
	return this->nodeName;
}

$String* IIOMetadataNode::getTagName() {
	return this->nodeName;
}

$String* IIOMetadataNode::getAttribute($String* name) {
	$var($Attr, attr, getAttributeNode(name));
	if (attr == nullptr) {
		return ""_s;
	}
	return $nc(attr)->getValue();
}

$String* IIOMetadataNode::getAttributeNS($String* namespaceURI, $String* localName) {
	return getAttribute(localName);
}

void IIOMetadataNode::setAttribute($String* name, $String* value) {
	bool valid = true;
	$var($chars, chs, $nc(name)->toCharArray());
	for (int32_t i = 0; i < chs->length; ++i) {
		if (chs->get(i) >= 0x0000FFFE) {
			valid = false;
			break;
		}
	}
	if (!valid) {
		$throwNew($IIODOMException, $DOMException::INVALID_CHARACTER_ERR, "Attribute name is illegal!"_s);
	}
	removeAttribute(name, false);
	$nc(this->attributes)->add($$new($IIOAttr, this, name, value));
}

void IIOMetadataNode::setAttributeNS($String* namespaceURI, $String* qualifiedName, $String* value) {
	setAttribute(qualifiedName, value);
}

void IIOMetadataNode::removeAttribute($String* name) {
	removeAttribute(name, true);
}

void IIOMetadataNode::removeAttribute($String* name, bool checkPresent) {
	int32_t numAttributes = $nc(this->attributes)->size();
	for (int32_t i = 0; i < numAttributes; ++i) {
		$var($IIOAttr, attr, $cast($IIOAttr, $nc(this->attributes)->get(i)));
		if ($nc(name)->equals($($nc(attr)->getName()))) {
			$nc(attr)->setOwnerElement(nullptr);
			$nc(this->attributes)->remove(i);
			return;
		}
	}
	if (checkPresent) {
		$throwNew($IIODOMException, $DOMException::NOT_FOUND_ERR, "No such attribute!"_s);
	}
}

void IIOMetadataNode::removeAttributeNS($String* namespaceURI, $String* localName) {
	removeAttribute(localName);
}

$Attr* IIOMetadataNode::getAttributeNode($String* name) {
	$var($Node, node, $nc($(getAttributes()))->getNamedItem(name));
	return $cast($Attr, node);
}

$Attr* IIOMetadataNode::getAttributeNodeNS($String* namespaceURI, $String* localName) {
	return getAttributeNode(localName);
}

$Attr* IIOMetadataNode::setAttributeNode($Attr* newAttr) {
	$var($Element, owner, $nc(newAttr)->getOwnerElement());
	if (owner != nullptr) {
		if ($equals(owner, this)) {
			return nullptr;
		} else {
			$throwNew($DOMException, $DOMException::INUSE_ATTRIBUTE_ERR, "Attribute is already in use"_s);
		}
	}
	$var($IIOAttr, attr, nullptr);
	if ($instanceOf($IIOAttr, newAttr)) {
		$assign(attr, $cast($IIOAttr, newAttr));
		attr->setOwnerElement(this);
	} else {
		$var($String, var$0, newAttr->getName());
		$assign(attr, $new($IIOAttr, this, var$0, $(newAttr->getValue())));
	}
	$var($Attr, oldAttr, getAttributeNode($($nc(attr)->getName())));
	if (oldAttr != nullptr) {
		removeAttributeNode(oldAttr);
	}
	$nc(this->attributes)->add(attr);
	return oldAttr;
}

$Attr* IIOMetadataNode::setAttributeNodeNS($Attr* newAttr) {
	return setAttributeNode(newAttr);
}

$Attr* IIOMetadataNode::removeAttributeNode($Attr* oldAttr) {
	removeAttribute($($nc(oldAttr)->getName()));
	return oldAttr;
}

$NodeList* IIOMetadataNode::getElementsByTagName($String* name) {
	$var($List, l, $new($ArrayList));
	getElementsByTagName(name, l);
	return $new($IIONodeList, l);
}

void IIOMetadataNode::getElementsByTagName($String* name, $List* l) {
	bool var$0 = $nc(this->nodeName)->equals(name);
	if (var$0 || "*"_s->equals(name)) {
		$nc(l)->add(this);
	}
	$var($Node, child, getFirstChild());
	while (child != nullptr) {
		$nc(($cast(IIOMetadataNode, child)))->getElementsByTagName(name, l);
		$assign(child, child->getNextSibling());
	}
}

$NodeList* IIOMetadataNode::getElementsByTagNameNS($String* namespaceURI, $String* localName) {
	return getElementsByTagName(localName);
}

bool IIOMetadataNode::hasAttributes() {
	return $nc(this->attributes)->size() > 0;
}

bool IIOMetadataNode::hasAttribute($String* name) {
	return getAttributeNode(name) != nullptr;
}

bool IIOMetadataNode::hasAttributeNS($String* namespaceURI, $String* localName) {
	return hasAttribute(localName);
}

int32_t IIOMetadataNode::getLength() {
	return this->numChildren;
}

$Node* IIOMetadataNode::item(int32_t index) {
	if (index < 0) {
		return nullptr;
	}
	$var($Node, child, getFirstChild());
	while (child != nullptr && index-- > 0) {
		$assign(child, child->getNextSibling());
	}
	return child;
}

$Object* IIOMetadataNode::getUserObject() {
	return $of(this->userObject);
}

void IIOMetadataNode::setUserObject(Object$* userObject) {
	$set(this, userObject, userObject);
}

void IIOMetadataNode::setIdAttribute($String* name, bool isId) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

void IIOMetadataNode::setIdAttributeNS($String* namespaceURI, $String* localName, bool isId) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

void IIOMetadataNode::setIdAttributeNode($Attr* idAttr, bool isId) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

$TypeInfo* IIOMetadataNode::getSchemaTypeInfo() {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Object* IIOMetadataNode::setUserData($String* key, Object$* data, $UserDataHandler* handler) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Object* IIOMetadataNode::getUserData($String* key) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$Object* IIOMetadataNode::getFeature($String* feature, $String* version) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

bool IIOMetadataNode::isSameNode($Node* node) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

bool IIOMetadataNode::isEqualNode($Node* node) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$String* IIOMetadataNode::lookupNamespaceURI($String* prefix) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

bool IIOMetadataNode::isDefaultNamespace($String* namespaceURI) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$String* IIOMetadataNode::lookupPrefix($String* namespaceURI) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$String* IIOMetadataNode::getTextContent() {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

void IIOMetadataNode::setTextContent($String* textContent) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
}

int16_t IIOMetadataNode::compareDocumentPosition($Node* other) {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

$String* IIOMetadataNode::getBaseURI() {
	$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, "Method not supported"_s);
	$shouldNotReachHere();
}

IIOMetadataNode::IIOMetadataNode() {
}

$Class* IIOMetadataNode::load$($String* name, bool initialize) {
	$loadClass(IIOMetadataNode, name, initialize, &_IIOMetadataNode_ClassInfo_, allocate$IIOMetadataNode);
	return class$;
}

$Class* IIOMetadataNode::class$ = nullptr;

		} // metadata
	} // imageio
} // javax