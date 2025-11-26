#include <javax/swing/tree/DefaultMutableTreeNode$PreorderEnumeration.h>

#include <java/util/Enumeration.h>
#include <java/util/Stack.h>
#include <java/util/Vector.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Stack = ::java::util::Stack;
using $Vector = ::java::util::Vector;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $TreeNode = ::javax::swing::tree::TreeNode;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _DefaultMutableTreeNode$PreorderEnumeration_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMutableTreeNode$PreorderEnumeration, this$0)},
	{"stack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/util/Enumeration<+Ljavax/swing/tree/TreeNode;>;>;", $PRIVATE | $FINAL, $field(DefaultMutableTreeNode$PreorderEnumeration, stack)},
	{}
};

$MethodInfo _DefaultMutableTreeNode$PreorderEnumeration_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/DefaultMutableTreeNode;Ljavax/swing/tree/TreeNode;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultMutableTreeNode$PreorderEnumeration::*)($DefaultMutableTreeNode*,$TreeNode*)>(&DefaultMutableTreeNode$PreorderEnumeration::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultMutableTreeNode$PreorderEnumeration_InnerClassesInfo_[] = {
	{"javax.swing.tree.DefaultMutableTreeNode$PreorderEnumeration", "javax.swing.tree.DefaultMutableTreeNode", "PreorderEnumeration", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _DefaultMutableTreeNode$PreorderEnumeration_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.tree.DefaultMutableTreeNode$PreorderEnumeration",
	"java.lang.Object",
	"java.util.Enumeration",
	_DefaultMutableTreeNode$PreorderEnumeration_FieldInfo_,
	_DefaultMutableTreeNode$PreorderEnumeration_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;",
	nullptr,
	_DefaultMutableTreeNode$PreorderEnumeration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.tree.DefaultMutableTreeNode"
};

$Object* allocate$DefaultMutableTreeNode$PreorderEnumeration($Class* clazz) {
	return $of($alloc(DefaultMutableTreeNode$PreorderEnumeration));
}

void DefaultMutableTreeNode$PreorderEnumeration::init$($DefaultMutableTreeNode* this$0, $TreeNode* rootNode) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$set(this, stack, $new($Stack));
	$var($Vector, v, $new($Vector, 1));
	v->addElement(rootNode);
	$nc(this->stack)->push($(v->elements()));
}

bool DefaultMutableTreeNode$PreorderEnumeration::hasMoreElements() {
	bool var$0 = !$nc(this->stack)->empty();
	return (var$0 && $nc(($cast($Enumeration, $($nc(this->stack)->peek()))))->hasMoreElements());
}

$Object* DefaultMutableTreeNode$PreorderEnumeration::nextElement() {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, enumer, $cast($Enumeration, $nc(this->stack)->peek()));
	$var($TreeNode, node, $cast($TreeNode, $nc(enumer)->nextElement()));
	$var($Enumeration, children, $nc(node)->children());
	if (!enumer->hasMoreElements()) {
		$nc(this->stack)->pop();
	}
	if ($nc(children)->hasMoreElements()) {
		$nc(this->stack)->push(children);
	}
	return $of(node);
}

DefaultMutableTreeNode$PreorderEnumeration::DefaultMutableTreeNode$PreorderEnumeration() {
}

$Class* DefaultMutableTreeNode$PreorderEnumeration::load$($String* name, bool initialize) {
	$loadClass(DefaultMutableTreeNode$PreorderEnumeration, name, initialize, &_DefaultMutableTreeNode$PreorderEnumeration_ClassInfo_, allocate$DefaultMutableTreeNode$PreorderEnumeration);
	return class$;
}

$Class* DefaultMutableTreeNode$PreorderEnumeration::class$ = nullptr;

		} // tree
	} // swing
} // javax