#include <bug4314199.h>

#include <bug4314199$1.h>
#include <bug4314199$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Box.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $bug4314199$1 = ::bug4314199$1;
using $bug4314199$2 = ::bug4314199$2;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Box = ::javax::swing::Box;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;
using $TreePath = ::javax::swing::tree::TreePath;

$MethodInfo _bug4314199_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4314199::*)()>(&bug4314199::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug4314199::*)()>(&bug4314199::createAndShowGUI))},
	{"createAndShowMessage", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(bug4314199::*)($String*)>(&bug4314199::createAndShowMessage))},
	{"init", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4314199_InnerClassesInfo_[] = {
	{"bug4314199$2", nullptr, nullptr, 0},
	{"bug4314199$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4314199_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4314199",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_bug4314199_MethodInfo_,
	nullptr,
	nullptr,
	_bug4314199_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4314199$2,bug4314199$1"
};

$Object* allocate$bug4314199($Class* clazz) {
	return $of($alloc(bug4314199));
}

void bug4314199::init$() {
	$JApplet::init$();
}

void bug4314199::init() {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
		$SwingUtilities::invokeAndWait($$new($bug4314199$1, this));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$SwingUtilities::invokeLater($$new($bug4314199$2, this, e));
	}
}

void bug4314199::createAndShowMessage($String* message) {
	$useLocalCurrentObjectStackCache();
	$nc($(getContentPane()))->add(static_cast<$Component*>($$new($JLabel, message)));
}

void bug4314199::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	$var($JMenuBar, mb, $new($JMenuBar));
	mb->add($($Box::createHorizontalStrut(27)));
	$var($JMenu, mn, $new($JMenu, "Menu"_s));
	$var($JMenuItem, mi, $new($JMenuItem, "MenuItem"_s));
	mn->add(mi);
	mb->add(mn);
	setJMenuBar(mb);
	$var($DefaultMutableTreeNode, n1, $new($DefaultMutableTreeNode, "Root"_s));
	$var($DefaultMutableTreeNode, n2, $new($DefaultMutableTreeNode, "Duke"_s));
	n1->add(n2);
	$var($DefaultMutableTreeNode, n3, $new($DefaultMutableTreeNode, "Bug"_s));
	n2->add(n3);
	n3->add($$new($DefaultMutableTreeNode, "Blah"_s));
	n3->add($$new($DefaultMutableTreeNode, "Blah"_s));
	n3->add($$new($DefaultMutableTreeNode, "Blah"_s));
	$var($DefaultMutableTreeNode, n4, $new($DefaultMutableTreeNode, "Here"_s));
	n2->add(n4);
	$var($JTree, tree, $new($JTree, static_cast<$TreeModel*>($$new($DefaultTreeModel, n1))));
	tree->putClientProperty("JTree.lineStyle"_s, "Angled"_s);
	tree->expandPath($$new($TreePath, $$new($ObjectArray, {
		$of(n1),
		$of(n2),
		$of(n3)
	})));
	setContentPane(tree);
}

bug4314199::bug4314199() {
}

$Class* bug4314199::load$($String* name, bool initialize) {
	$loadClass(bug4314199, name, initialize, &_bug4314199_ClassInfo_, allocate$bug4314199);
	return class$;
}

$Class* bug4314199::class$ = nullptr;