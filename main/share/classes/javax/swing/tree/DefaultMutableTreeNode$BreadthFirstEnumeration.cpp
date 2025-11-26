#include <javax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration.h>

#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultMutableTreeNode$BreadthFirstEnumeration$Queue = ::javax::swing::tree::DefaultMutableTreeNode$BreadthFirstEnumeration$Queue;
using $TreeNode = ::javax::swing::tree::TreeNode;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _DefaultMutableTreeNode$BreadthFirstEnumeration_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMutableTreeNode$BreadthFirstEnumeration, this$0)},
	{"queue", "Ljavax/swing/tree/DefaultMutableTreeNode$BreadthFirstEnumeration$Queue;", nullptr, $PROTECTED, $field(DefaultMutableTreeNode$BreadthFirstEnumeration, queue)},
	{}
};

$MethodInfo _DefaultMutableTreeNode$BreadthFirstEnumeration_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/DefaultMutableTreeNode;Ljavax/swing/tree/TreeNode;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultMutableTreeNode$BreadthFirstEnumeration::*)($DefaultMutableTreeNode*,$TreeNode*)>(&DefaultMutableTreeNode$BreadthFirstEnumeration::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultMutableTreeNode$BreadthFirstEnumeration_InnerClassesInfo_[] = {
	{"javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration", "javax.swing.tree.DefaultMutableTreeNode", "BreadthFirstEnumeration", $FINAL},
	{"javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration$Queue", "javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration", "Queue", $FINAL},
	{}
};

$ClassInfo _DefaultMutableTreeNode$BreadthFirstEnumeration_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.tree.DefaultMutableTreeNode$BreadthFirstEnumeration",
	"java.lang.Object",
	"java.util.Enumeration",
	_DefaultMutableTreeNode$BreadthFirstEnumeration_FieldInfo_,
	_DefaultMutableTreeNode$BreadthFirstEnumeration_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;",
	nullptr,
	_DefaultMutableTreeNode$BreadthFirstEnumeration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.tree.DefaultMutableTreeNode"
};

$Object* allocate$DefaultMutableTreeNode$BreadthFirstEnumeration($Class* clazz) {
	return $of($alloc(DefaultMutableTreeNode$BreadthFirstEnumeration));
}

void DefaultMutableTreeNode$BreadthFirstEnumeration::init$($DefaultMutableTreeNode* this$0, $TreeNode* rootNode) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$var($Vector, v, $new($Vector, 1));
	v->addElement(rootNode);
	$set(this, queue, $new($DefaultMutableTreeNode$BreadthFirstEnumeration$Queue, this));
	$nc(this->queue)->enqueue($(v->elements()));
}

bool DefaultMutableTreeNode$BreadthFirstEnumeration::hasMoreElements() {
	bool var$0 = !$nc(this->queue)->isEmpty();
	return (var$0 && $nc(($cast($Enumeration, $($nc(this->queue)->firstObject()))))->hasMoreElements());
}

$Object* DefaultMutableTreeNode$BreadthFirstEnumeration::nextElement() {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, enumer, $cast($Enumeration, $nc(this->queue)->firstObject()));
	$var($TreeNode, node, $cast($TreeNode, $nc(enumer)->nextElement()));
	$var($Enumeration, children, $nc(node)->children());
	if (!enumer->hasMoreElements()) {
		$nc(this->queue)->dequeue();
	}
	if ($nc(children)->hasMoreElements()) {
		$nc(this->queue)->enqueue(children);
	}
	return $of(node);
}

DefaultMutableTreeNode$BreadthFirstEnumeration::DefaultMutableTreeNode$BreadthFirstEnumeration() {
}

$Class* DefaultMutableTreeNode$BreadthFirstEnumeration::load$($String* name, bool initialize) {
	$loadClass(DefaultMutableTreeNode$BreadthFirstEnumeration, name, initialize, &_DefaultMutableTreeNode$BreadthFirstEnumeration_ClassInfo_, allocate$DefaultMutableTreeNode$BreadthFirstEnumeration);
	return class$;
}

$Class* DefaultMutableTreeNode$BreadthFirstEnumeration::class$ = nullptr;

		} // tree
	} // swing
} // javax