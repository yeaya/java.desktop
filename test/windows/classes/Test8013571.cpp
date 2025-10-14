#include <Test8013571.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;

$MethodInfo _Test8013571_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/tree/DefaultMutableTreeNode;)V", nullptr, $PRIVATE, $method(static_cast<void(Test8013571::*)($DefaultMutableTreeNode*)>(&Test8013571::init$))},
	{"create", "(Ljava/lang/String;[Ljava/lang/String;)Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<$DefaultMutableTreeNode*(*)($String*,$StringArray*)>(&Test8013571::create))},
	{"fireTreeChanged", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(Test8013571::*)(Object$*)>(&Test8013571::fireTreeChanged))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8013571::main))},
	{}
};

$ClassInfo _Test8013571_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8013571",
	"javax.swing.tree.DefaultTreeModel",
	nullptr,
	nullptr,
	_Test8013571_MethodInfo_
};

$Object* allocate$Test8013571($Class* clazz) {
	return $of($alloc(Test8013571));
}

void Test8013571::main($StringArray* args) {
	$init(Test8013571);
	$var($DefaultMutableTreeNode, root, create("root"_s, $$new($StringArray, 0)));
	$nc(root)->add($(create("colors"_s, $$new($StringArray, {
		"blue"_s,
		"violet"_s,
		"red"_s,
		"yellow"_s
	}))));
	root->add($(create("sports"_s, $$new($StringArray, {
		"basketball"_s,
		"soccer"_s,
		"football"_s,
		"hockey"_s
	}))));
	root->add($(create("food"_s, $$new($StringArray, {
		"hot dogs"_s,
		"pizza"_s,
		"ravioli"_s,
		"bananas"_s
	}))));
	$var(Test8013571, model, $new(Test8013571, root));
	$var($JTree, tree, $new($JTree, static_cast<$TreeModel*>(model)));
	model->fireTreeChanged(tree);
}

$DefaultMutableTreeNode* Test8013571::create($String* name, $StringArray* values) {
	$init(Test8013571);
	$var($DefaultMutableTreeNode, node, $new($DefaultMutableTreeNode, name));
	{
		$var($StringArray, arr$, values);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, value, arr$->get(i$));
			{
				node->add($(create(value, $$new($StringArray, 0))));
			}
		}
	}
	return node;
}

void Test8013571::init$($DefaultMutableTreeNode* root) {
	$DefaultTreeModel::init$(root);
}

void Test8013571::fireTreeChanged(Object$* source) {
	fireTreeNodesInserted(source, nullptr, nullptr, nullptr);
	fireTreeNodesChanged(source, nullptr, nullptr, nullptr);
	fireTreeNodesRemoved(source, nullptr, nullptr, nullptr);
	fireTreeStructureChanged(source, nullptr, nullptr, nullptr);
}

Test8013571::Test8013571() {
}

$Class* Test8013571::load$($String* name, bool initialize) {
	$loadClass(Test8013571, name, initialize, &_Test8013571_ClassInfo_, allocate$Test8013571);
	return class$;
}

$Class* Test8013571::class$ = nullptr;