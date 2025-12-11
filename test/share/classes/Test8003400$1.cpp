#include <Test8003400$1.h>

#include <Test8003400.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE
#undef OBJECTS

using $Test8003400 = ::Test8003400;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTree = ::javax::swing::JTree;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeNode = ::javax::swing::tree::TreeNode;

$MethodInfo _Test8003400$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test8003400$1::*)()>(&Test8003400$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Test8003400$1_EnclosingMethodInfo_ = {
	"Test8003400",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test8003400$1_InnerClassesInfo_[] = {
	{"Test8003400$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test8003400$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test8003400$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Test8003400$1_MethodInfo_,
	nullptr,
	&_Test8003400$1_EnclosingMethodInfo_,
	_Test8003400$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test8003400"
};

$Object* allocate$Test8003400$1($Class* clazz) {
	return $of($alloc(Test8003400$1));
}

void Test8003400$1::init$() {
}

void Test8003400$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($DefaultMutableTreeNode, root, $new($DefaultMutableTreeNode));
	$init($Test8003400);
	$assignStatic($Test8003400::tree, $new($JTree, static_cast<$TreeNode*>(root)));
	$nc($Test8003400::tree)->setLargeModel(true);
	$nc($Test8003400::tree)->setRowHeight(16);
	$assignStatic($Test8003400::frame, $new($JFrame, "Test JTree with a large model"_s));
	$nc($Test8003400::frame)->add(static_cast<$Component*>(($assignStatic($Test8003400::pane, $new($JScrollPane, $Test8003400::tree)))));
	$nc($Test8003400::frame)->setSize(200, 100);
	$nc($Test8003400::frame)->setAlwaysOnTop(true);
	$nc($Test8003400::frame)->setLocationRelativeTo(nullptr);
	$nc($Test8003400::frame)->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
	$nc($Test8003400::frame)->setVisible(true);
	{
		$var($Iterator, i$, $nc($Test8003400::OBJECTS)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, object, $cast($String, i$->next()));
			{
				root->add($$new($DefaultMutableTreeNode, object));
			}
		}
	}
	$nc($Test8003400::tree)->expandRow(0);
}

Test8003400$1::Test8003400$1() {
}

$Class* Test8003400$1::load$($String* name, bool initialize) {
	$loadClass(Test8003400$1, name, initialize, &_Test8003400$1_ClassInfo_, allocate$Test8003400$1);
	return class$;
}

$Class* Test8003400$1::class$ = nullptr;