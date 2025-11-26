#include <javax/swing/tree/DefaultMutableTreeNode$PathBetweenNodesEnumeration.h>

#include <java/util/EmptyStackException.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Stack.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EmptyStackException = ::java::util::EmptyStackException;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Stack = ::java::util::Stack;
using $Vector = ::java::util::Vector;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $TreeNode = ::javax::swing::tree::TreeNode;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _DefaultMutableTreeNode$PathBetweenNodesEnumeration_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMutableTreeNode$PathBetweenNodesEnumeration, this$0)},
	{"stack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljavax/swing/tree/TreeNode;>;", $PROTECTED, $field(DefaultMutableTreeNode$PathBetweenNodesEnumeration, stack)},
	{}
};

$MethodInfo _DefaultMutableTreeNode$PathBetweenNodesEnumeration_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/DefaultMutableTreeNode;Ljavax/swing/tree/TreeNode;Ljavax/swing/tree/TreeNode;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultMutableTreeNode$PathBetweenNodesEnumeration::*)($DefaultMutableTreeNode*,$TreeNode*,$TreeNode*)>(&DefaultMutableTreeNode$PathBetweenNodesEnumeration::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljavax/swing/tree/TreeNode;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultMutableTreeNode$PathBetweenNodesEnumeration_InnerClassesInfo_[] = {
	{"javax.swing.tree.DefaultMutableTreeNode$PathBetweenNodesEnumeration", "javax.swing.tree.DefaultMutableTreeNode", "PathBetweenNodesEnumeration", $FINAL},
	{}
};

$ClassInfo _DefaultMutableTreeNode$PathBetweenNodesEnumeration_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.tree.DefaultMutableTreeNode$PathBetweenNodesEnumeration",
	"java.lang.Object",
	"java.util.Enumeration",
	_DefaultMutableTreeNode$PathBetweenNodesEnumeration_FieldInfo_,
	_DefaultMutableTreeNode$PathBetweenNodesEnumeration_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljavax/swing/tree/TreeNode;>;",
	nullptr,
	_DefaultMutableTreeNode$PathBetweenNodesEnumeration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.tree.DefaultMutableTreeNode"
};

$Object* allocate$DefaultMutableTreeNode$PathBetweenNodesEnumeration($Class* clazz) {
	return $of($alloc(DefaultMutableTreeNode$PathBetweenNodesEnumeration));
}

void DefaultMutableTreeNode$PathBetweenNodesEnumeration::init$($DefaultMutableTreeNode* this$0, $TreeNode* ancestor, $TreeNode* descendant) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	if (ancestor == nullptr || descendant == nullptr) {
		$throwNew($IllegalArgumentException, "argument is null"_s);
	}
	$var($TreeNode, current, nullptr);
	$set(this, stack, $new($Stack));
	$nc(this->stack)->push(descendant);
	$assign(current, descendant);
	while (current != ancestor) {
		$assign(current, $nc(current)->getParent());
		if (current == nullptr && descendant != ancestor) {
			$throwNew($IllegalArgumentException, $$str({"node "_s, ancestor, " is not an ancestor of "_s, descendant}));
		}
		$nc(this->stack)->push(current);
	}
}

bool DefaultMutableTreeNode$PathBetweenNodesEnumeration::hasMoreElements() {
	return $nc(this->stack)->size() > 0;
}

$Object* DefaultMutableTreeNode$PathBetweenNodesEnumeration::nextElement() {
	try {
		return $of($cast($TreeNode, $nc(this->stack)->pop()));
	} catch ($EmptyStackException& e) {
		$throwNew($NoSuchElementException, "No more elements"_s);
	}
	$shouldNotReachHere();
}

DefaultMutableTreeNode$PathBetweenNodesEnumeration::DefaultMutableTreeNode$PathBetweenNodesEnumeration() {
}

$Class* DefaultMutableTreeNode$PathBetweenNodesEnumeration::load$($String* name, bool initialize) {
	$loadClass(DefaultMutableTreeNode$PathBetweenNodesEnumeration, name, initialize, &_DefaultMutableTreeNode$PathBetweenNodesEnumeration_ClassInfo_, allocate$DefaultMutableTreeNode$PathBetweenNodesEnumeration);
	return class$;
}

$Class* DefaultMutableTreeNode$PathBetweenNodesEnumeration::class$ = nullptr;

		} // tree
	} // swing
} // javax