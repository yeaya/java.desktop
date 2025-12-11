#include <javax/swing/plaf/nimbus/NimbusDefaults$ColorTree.h>

#include <java/awt/Color.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/swing/plaf/nimbus/DerivedColor.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults$ColorTree$Node.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $DerivedColor = ::javax::swing::plaf::nimbus::DerivedColor;
using $NimbusDefaults = ::javax::swing::plaf::nimbus::NimbusDefaults;
using $NimbusDefaults$ColorTree$Node = ::javax::swing::plaf::nimbus::NimbusDefaults$ColorTree$Node;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusDefaults$ColorTree_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/nimbus/NimbusDefaults;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusDefaults$ColorTree, this$0)},
	{"root", "Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree$Node;", nullptr, $PRIVATE, $field(NimbusDefaults$ColorTree, root)},
	{"nodes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree$Node;>;", $PRIVATE, $field(NimbusDefaults$ColorTree, nodes)},
	{}
};

$MethodInfo _NimbusDefaults$ColorTree_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusDefaults;)V", nullptr, $PRIVATE, $method(static_cast<void(NimbusDefaults$ColorTree::*)($NimbusDefaults*)>(&NimbusDefaults$ColorTree::init$))},
	{"addColor", "(Ljava/lang/String;Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"getColor", "(Ljava/lang/String;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getParentNode", "(Ljava/awt/Color;)Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree$Node;", nullptr, $PRIVATE, $method(static_cast<$NimbusDefaults$ColorTree$Node*(NimbusDefaults$ColorTree::*)($Color*)>(&NimbusDefaults$ColorTree::getParentNode))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"update", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NimbusDefaults$ColorTree_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusDefaults$ColorTree", "javax.swing.plaf.nimbus.NimbusDefaults", "ColorTree", $PRIVATE},
	{"javax.swing.plaf.nimbus.NimbusDefaults$ColorTree$Node", "javax.swing.plaf.nimbus.NimbusDefaults$ColorTree", "Node", 0},
	{}
};

$ClassInfo _NimbusDefaults$ColorTree_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusDefaults$ColorTree",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_NimbusDefaults$ColorTree_FieldInfo_,
	_NimbusDefaults$ColorTree_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusDefaults$ColorTree_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusDefaults"
};

$Object* allocate$NimbusDefaults$ColorTree($Class* clazz) {
	return $of($alloc(NimbusDefaults$ColorTree));
}

void NimbusDefaults$ColorTree::init$($NimbusDefaults* this$0) {
	$set(this, this$0, this$0);
	$set(this, root, $new($NimbusDefaults$ColorTree$Node, this, nullptr, nullptr));
	$set(this, nodes, $new($HashMap));
}

$Color* NimbusDefaults$ColorTree::getColor($String* uin) {
	return $nc(($cast($NimbusDefaults$ColorTree$Node, $($nc(this->nodes)->get(uin)))))->color;
}

void NimbusDefaults$ColorTree::addColor($String* uin, $Color* color) {
	$useLocalCurrentObjectStackCache();
	$var($NimbusDefaults$ColorTree$Node, parent, getParentNode(color));
	$var($NimbusDefaults$ColorTree$Node, node, $new($NimbusDefaults$ColorTree$Node, this, color, parent));
	$nc($nc(parent)->children)->add(node);
	if (uin != nullptr) {
		$nc(this->nodes)->put(uin, node);
	}
}

$NimbusDefaults$ColorTree$Node* NimbusDefaults$ColorTree::getParentNode($Color* color) {
	$useLocalCurrentObjectStackCache();
	$var($NimbusDefaults$ColorTree$Node, parent, this->root);
	if ($instanceOf($DerivedColor, color)) {
		$var($String, parentUin, $nc(($cast($DerivedColor, color)))->getUiDefaultParentName());
		$var($NimbusDefaults$ColorTree$Node, p, $cast($NimbusDefaults$ColorTree$Node, $nc(this->nodes)->get(parentUin)));
		if (p != nullptr) {
			$assign(parent, p);
		}
	}
	return parent;
}

void NimbusDefaults$ColorTree::update() {
	$nc(this->root)->update();
}

void NimbusDefaults$ColorTree::propertyChange($PropertyChangeEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(ev)->getPropertyName());
	$var($NimbusDefaults$ColorTree$Node, node, $cast($NimbusDefaults$ColorTree$Node, $nc(this->nodes)->get(name)));
	if (node != nullptr) {
		$nc($nc(node->parent)->children)->remove($of(node));
		$var($Color, color, $cast($Color, ev->getNewValue()));
		$var($NimbusDefaults$ColorTree$Node, parent, getParentNode(color));
		node->set(color, parent);
		$nc($nc(parent)->children)->add(node);
		node->update();
	}
}

NimbusDefaults$ColorTree::NimbusDefaults$ColorTree() {
}

$Class* NimbusDefaults$ColorTree::load$($String* name, bool initialize) {
	$loadClass(NimbusDefaults$ColorTree, name, initialize, &_NimbusDefaults$ColorTree_ClassInfo_, allocate$NimbusDefaults$ColorTree);
	return class$;
}

$Class* NimbusDefaults$ColorTree::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax