#include <javax/swing/tree/DefaultMutableTreeNode$PostorderEnumeration.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

#undef EMPTY_ENUMERATION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $TreeNode = ::javax::swing::tree::TreeNode;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _DefaultMutableTreeNode$PostorderEnumeration_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMutableTreeNode$PostorderEnumeration, this$0)},
	{"root", "Ljavax/swing/tree/TreeNode;", nullptr, $PROTECTED, $field(DefaultMutableTreeNode$PostorderEnumeration, root)},
	{"children", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<+Ljavax/swing/tree/TreeNode;>;", $PROTECTED, $field(DefaultMutableTreeNode$PostorderEnumeration, children)},
	{"subtree", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;", $PROTECTED, $field(DefaultMutableTreeNode$PostorderEnumeration, subtree)},
	{}
};

$MethodInfo _DefaultMutableTreeNode$PostorderEnumeration_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/DefaultMutableTreeNode;Ljavax/swing/tree/TreeNode;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultMutableTreeNode$PostorderEnumeration::*)($DefaultMutableTreeNode*,$TreeNode*)>(&DefaultMutableTreeNode$PostorderEnumeration::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultMutableTreeNode$PostorderEnumeration_InnerClassesInfo_[] = {
	{"javax.swing.tree.DefaultMutableTreeNode$PostorderEnumeration", "javax.swing.tree.DefaultMutableTreeNode", "PostorderEnumeration", $FINAL},
	{}
};

$ClassInfo _DefaultMutableTreeNode$PostorderEnumeration_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.tree.DefaultMutableTreeNode$PostorderEnumeration",
	"java.lang.Object",
	"java.util.Enumeration",
	_DefaultMutableTreeNode$PostorderEnumeration_FieldInfo_,
	_DefaultMutableTreeNode$PostorderEnumeration_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;",
	nullptr,
	_DefaultMutableTreeNode$PostorderEnumeration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.tree.DefaultMutableTreeNode"
};

$Object* allocate$DefaultMutableTreeNode$PostorderEnumeration($Class* clazz) {
	return $of($alloc(DefaultMutableTreeNode$PostorderEnumeration));
}

void DefaultMutableTreeNode$PostorderEnumeration::init$($DefaultMutableTreeNode* this$0, $TreeNode* rootNode) {
	$set(this, this$0, this$0);
	$set(this, root, rootNode);
	$set(this, children, $nc(this->root)->children());
	$init($DefaultMutableTreeNode);
	$set(this, subtree, $DefaultMutableTreeNode::EMPTY_ENUMERATION);
}

bool DefaultMutableTreeNode$PostorderEnumeration::hasMoreElements() {
	return this->root != nullptr;
}

$Object* DefaultMutableTreeNode$PostorderEnumeration::nextElement() {
	$useLocalCurrentObjectStackCache();
	$var($TreeNode, retval, nullptr);
	if ($nc(this->subtree)->hasMoreElements()) {
		$assign(retval, $cast($TreeNode, $nc(this->subtree)->nextElement()));
	} else if ($nc(this->children)->hasMoreElements()) {
		$set(this, subtree, $new(DefaultMutableTreeNode$PostorderEnumeration, this->this$0, $cast($TreeNode, $($nc(this->children)->nextElement()))));
		$assign(retval, $cast($TreeNode, $nc(this->subtree)->nextElement()));
	} else {
		$assign(retval, this->root);
		$set(this, root, nullptr);
	}
	return $of(retval);
}

DefaultMutableTreeNode$PostorderEnumeration::DefaultMutableTreeNode$PostorderEnumeration() {
}

$Class* DefaultMutableTreeNode$PostorderEnumeration::load$($String* name, bool initialize) {
	$loadClass(DefaultMutableTreeNode$PostorderEnumeration, name, initialize, &_DefaultMutableTreeNode$PostorderEnumeration_ClassInfo_, allocate$DefaultMutableTreeNode$PostorderEnumeration);
	return class$;
}

$Class* DefaultMutableTreeNode$PostorderEnumeration::class$ = nullptr;

		} // tree
	} // swing
} // javax