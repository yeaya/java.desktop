#include <bug6505523$3.h>

#include <bug6505523.h>
#include <javax/swing/event/TreeExpansionEvent.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeExpansionEvent = ::javax::swing::event::TreeExpansionEvent;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeNode = ::javax::swing::tree::TreeNode;

$FieldInfo _bug6505523$3_FieldInfo_[] = {
	{"val$model", "Ljavax/swing/tree/DefaultTreeModel;", nullptr, $FINAL | $SYNTHETIC, $field(bug6505523$3, val$model)},
	{"val$problematic", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $FINAL | $SYNTHETIC, $field(bug6505523$3, val$problematic)},
	{}
};

$MethodInfo _bug6505523$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/DefaultMutableTreeNode;Ljavax/swing/tree/DefaultTreeModel;)V", "()V", 0, $method(static_cast<void(bug6505523$3::*)($DefaultMutableTreeNode*,$DefaultTreeModel*)>(&bug6505523$3::init$))},
	{"treeCollapsed", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC},
	{"treeExpanded", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6505523$3_EnclosingMethodInfo_ = {
	"bug6505523",
	"createAndShowGUI",
	"()V"
};

$InnerClassInfo _bug6505523$3_InnerClassesInfo_[] = {
	{"bug6505523$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6505523$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug6505523$3",
	"java.lang.Object",
	"javax.swing.event.TreeExpansionListener",
	_bug6505523$3_FieldInfo_,
	_bug6505523$3_MethodInfo_,
	nullptr,
	&_bug6505523$3_EnclosingMethodInfo_,
	_bug6505523$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6505523"
};

$Object* allocate$bug6505523$3($Class* clazz) {
	return $of($alloc(bug6505523$3));
}

void bug6505523$3::init$($DefaultMutableTreeNode* val$problematic, $DefaultTreeModel* val$model) {
	$set(this, val$problematic, val$problematic);
	$set(this, val$model, val$model);
}

void bug6505523$3::treeExpanded($TreeExpansionEvent* event) {
	$var($TreeNode, parent, $nc(this->val$problematic)->getParent());
	if ($instanceOf($DefaultMutableTreeNode, parent)) {
		$nc(this->val$model)->removeNodeFromParent(this->val$problematic);
	}
}

void bug6505523$3::treeCollapsed($TreeExpansionEvent* event) {
}

bug6505523$3::bug6505523$3() {
}

$Class* bug6505523$3::load$($String* name, bool initialize) {
	$loadClass(bug6505523$3, name, initialize, &_bug6505523$3_ClassInfo_, allocate$bug6505523$3);
	return class$;
}

$Class* bug6505523$3::class$ = nullptr;