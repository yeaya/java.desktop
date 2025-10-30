#include <javax/imageio/metadata/IIONodeList.h>

#include <java/util/List.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace javax {
	namespace imageio {
		namespace metadata {

$FieldInfo _IIONodeList_FieldInfo_[] = {
	{"nodes", "Ljava/util/List;", "Ljava/util/List<+Lorg/w3c/dom/Node;>;", 0, $field(IIONodeList, nodes)},
	{}
};

$MethodInfo _IIONodeList_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<+Lorg/w3c/dom/Node;>;)V", $PUBLIC, $method(static_cast<void(IIONodeList::*)($List*)>(&IIONodeList::init$))},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IIONodeList_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.metadata.IIONodeList",
	"java.lang.Object",
	"org.w3c.dom.NodeList",
	_IIONodeList_FieldInfo_,
	_IIONodeList_MethodInfo_
};

$Object* allocate$IIONodeList($Class* clazz) {
	return $of($alloc(IIONodeList));
}

void IIONodeList::init$($List* nodes) {
	$set(this, nodes, nodes);
}

int32_t IIONodeList::getLength() {
	return $nc(this->nodes)->size();
}

$Node* IIONodeList::item(int32_t index) {
	if (index < 0 || index >= $nc(this->nodes)->size()) {
		return nullptr;
	}
	return $cast($Node, $nc(this->nodes)->get(index));
}

IIONodeList::IIONodeList() {
}

$Class* IIONodeList::load$($String* name, bool initialize) {
	$loadClass(IIONodeList, name, initialize, &_IIONodeList_ClassInfo_, allocate$IIONodeList);
	return class$;
}

$Class* IIONodeList::class$ = nullptr;

		} // metadata
	} // imageio
} // javax