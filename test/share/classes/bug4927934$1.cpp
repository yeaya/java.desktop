#include <bug4927934$1.h>

#include <bug4927934.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTree.h>
#include <javax/swing/event/TreeExpansionListener.h>
#include <javax/swing/event/TreeSelectionListener.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

using $bug4927934 = ::bug4927934;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTree = ::javax::swing::JTree;
using $TreeExpansionListener = ::javax::swing::event::TreeExpansionListener;
using $TreeSelectionListener = ::javax::swing::event::TreeSelectionListener;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeNode = ::javax::swing::tree::TreeNode;

$MethodInfo _bug4927934$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4927934$1::*)()>(&bug4927934$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4927934$1_EnclosingMethodInfo_ = {
	"bug4927934",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4927934$1_InnerClassesInfo_[] = {
	{"bug4927934$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4927934$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug4927934$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4927934$1_MethodInfo_,
	nullptr,
	&_bug4927934$1_EnclosingMethodInfo_,
	_bug4927934$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4927934"
};

$Object* allocate$bug4927934$1($Class* clazz) {
	return $of($alloc(bug4927934$1));
}

void bug4927934$1::init$() {
}

void bug4927934$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug4927934);
	$assignStatic($bug4927934::frame, $new($JFrame));
	$var($DefaultMutableTreeNode, root, $new($DefaultMutableTreeNode, "root"_s));
	$bug4927934::createNodes(root);
	$assignStatic($bug4927934::tree, $new($JTree, static_cast<$TreeNode*>(root)));
	$var($JScrollPane, scrollPane, $new($JScrollPane, $bug4927934::tree));
	$nc($($nc($bug4927934::frame)->getContentPane()))->add(static_cast<$Component*>(scrollPane));
	$nc($bug4927934::tree)->addFocusListener($cast($FocusListener, $bug4927934::listener));
	$nc($bug4927934::tree)->addTreeSelectionListener($cast($TreeSelectionListener, $bug4927934::listener));
	$nc($bug4927934::tree)->addTreeExpansionListener($cast($TreeExpansionListener, $bug4927934::listener));
	$nc($bug4927934::frame)->setSize(300, 300);
	$nc($bug4927934::frame)->setVisible(true);
}

bug4927934$1::bug4927934$1() {
}

$Class* bug4927934$1::load$($String* name, bool initialize) {
	$loadClass(bug4927934$1, name, initialize, &_bug4927934$1_ClassInfo_, allocate$bug4927934$1);
	return class$;
}

$Class* bug4927934$1::class$ = nullptr;