#include <javax/imageio/metadata/IIONamedNodeMap.h>

#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef NO_MODIFICATION_ALLOWED_ERR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $DOMException = ::org::w3c::dom::DOMException;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace imageio {
		namespace metadata {

$FieldInfo _IIONamedNodeMap_FieldInfo_[] = {
	{"nodes", "Ljava/util/List;", "Ljava/util/List<+Lorg/w3c/dom/Node;>;", 0, $field(IIONamedNodeMap, nodes)},
	{}
};

$MethodInfo _IIONamedNodeMap_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<+Lorg/w3c/dom/Node;>;)V", $PUBLIC, $method(static_cast<void(IIONamedNodeMap::*)($List*)>(&IIONamedNodeMap::init$))},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getNamedItem", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getNamedItemNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"removeNamedItem", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"removeNamedItemNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"setNamedItem", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"setNamedItemNS", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IIONamedNodeMap_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.metadata.IIONamedNodeMap",
	"java.lang.Object",
	"org.w3c.dom.NamedNodeMap",
	_IIONamedNodeMap_FieldInfo_,
	_IIONamedNodeMap_MethodInfo_
};

$Object* allocate$IIONamedNodeMap($Class* clazz) {
	return $of($alloc(IIONamedNodeMap));
}

void IIONamedNodeMap::init$($List* nodes) {
	$set(this, nodes, nodes);
}

int32_t IIONamedNodeMap::getLength() {
	return $nc(this->nodes)->size();
}

$Node* IIONamedNodeMap::getNamedItem($String* name) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->nodes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Node, node, $cast($Node, i$->next()));
			{
				if ($nc(name)->equals($($nc(node)->getNodeName()))) {
					return node;
				}
			}
		}
	}
	return nullptr;
}

$Node* IIONamedNodeMap::item(int32_t index) {
	$var($Node, node, $cast($Node, $nc(this->nodes)->get(index)));
	return node;
}

$Node* IIONamedNodeMap::removeNamedItem($String* name) {
	$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, "This NamedNodeMap is read-only!"_s);
	$shouldNotReachHere();
}

$Node* IIONamedNodeMap::setNamedItem($Node* arg) {
	$throwNew($DOMException, $DOMException::NO_MODIFICATION_ALLOWED_ERR, "This NamedNodeMap is read-only!"_s);
	$shouldNotReachHere();
}

$Node* IIONamedNodeMap::getNamedItemNS($String* namespaceURI, $String* localName) {
	return getNamedItem(localName);
}

$Node* IIONamedNodeMap::setNamedItemNS($Node* arg) {
	return setNamedItem(arg);
}

$Node* IIONamedNodeMap::removeNamedItemNS($String* namespaceURI, $String* localName) {
	return removeNamedItem(localName);
}

IIONamedNodeMap::IIONamedNodeMap() {
}

$Class* IIONamedNodeMap::load$($String* name, bool initialize) {
	$loadClass(IIONamedNodeMap, name, initialize, &_IIONamedNodeMap_ClassInfo_, allocate$IIONamedNodeMap);
	return class$;
}

$Class* IIONamedNodeMap::class$ = nullptr;

		} // metadata
	} // imageio
} // javax