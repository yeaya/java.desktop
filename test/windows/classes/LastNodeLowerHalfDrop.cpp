#include <LastNodeLowerHalfDrop.h>

#include <LastNodeLowerHalfDrop$1.h>
#include <LastNodeLowerHalfDrop$2.h>
#include <LastNodeLowerHalfDrop$3.h>
#include <TreeTransferHandler.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <java/lang/Runnable.h>
#include <java/util/Enumeration.h>
#include <javax/swing/DropMode.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <javax/swing/tree/TreePath.h>
#include <javax/swing/tree/TreeSelectionModel.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef INSERT
#undef SINGLE_TREE_SELECTION

using $LastNodeLowerHalfDrop$1 = ::LastNodeLowerHalfDrop$1;
using $LastNodeLowerHalfDrop$2 = ::LastNodeLowerHalfDrop$2;
using $LastNodeLowerHalfDrop$3 = ::LastNodeLowerHalfDrop$3;
using $TreeTransferHandler = ::TreeTransferHandler;
using $TreeNodeArray = $Array<::javax::swing::tree::TreeNode>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Enumeration = ::java::util::Enumeration;
using $DropMode = ::javax::swing::DropMode;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;
using $TreePath = ::javax::swing::tree::TreePath;
using $TreeSelectionModel = ::javax::swing::tree::TreeSelectionModel;

$FieldInfo _LastNodeLowerHalfDrop_FieldInfo_[] = {
	{"b1", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PRIVATE | $STATIC, $staticField(LastNodeLowerHalfDrop, b1)},
	{"b2", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PRIVATE | $STATIC, $staticField(LastNodeLowerHalfDrop, b2)},
	{"c", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PRIVATE | $STATIC, $staticField(LastNodeLowerHalfDrop, c)},
	{"jTree", "Ljavax/swing/JTree;", nullptr, $PRIVATE | $STATIC, $staticField(LastNodeLowerHalfDrop, jTree)},
	{"a", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PRIVATE | $STATIC, $staticField(LastNodeLowerHalfDrop, a)},
	{"b", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PRIVATE | $STATIC, $staticField(LastNodeLowerHalfDrop, b)},
	{"a1", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PRIVATE | $STATIC, $staticField(LastNodeLowerHalfDrop, a1)},
	{"dragPoint", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(LastNodeLowerHalfDrop, dragPoint)},
	{"dropPoint", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(LastNodeLowerHalfDrop, dropPoint)},
	{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(LastNodeLowerHalfDrop, f)},
	{"c1", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PRIVATE | $STATIC, $staticField(LastNodeLowerHalfDrop, c1)},
	{"root", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $PRIVATE | $STATIC, $staticField(LastNodeLowerHalfDrop, root)},
	{}
};

$MethodInfo _LastNodeLowerHalfDrop_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LastNodeLowerHalfDrop::*)()>(&LastNodeLowerHalfDrop::init$))},
	{"cleanUp", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&LastNodeLowerHalfDrop::cleanUp)), "java.lang.Exception"},
	{"expandTree", "(Ljavax/swing/JTree;)V", nullptr, $PRIVATE, $method(static_cast<void(LastNodeLowerHalfDrop::*)($JTree*)>(&LastNodeLowerHalfDrop::expandTree))},
	{"getContent", "()Ljavax/swing/JScrollPane;", nullptr, $PRIVATE, $method(static_cast<$JScrollPane*(LastNodeLowerHalfDrop::*)()>(&LastNodeLowerHalfDrop::getContent))},
	{"getTreeModel", "()Ljavax/swing/tree/TreeModel;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$TreeModel*(*)()>(&LastNodeLowerHalfDrop::getTreeModel))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LastNodeLowerHalfDrop::main)), "java.lang.Exception"},
	{"testCase", "(Ljavax/swing/tree/DefaultMutableTreeNode;Ljavax/swing/tree/DefaultMutableTreeNode;F)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($DefaultMutableTreeNode*,$DefaultMutableTreeNode*,float)>(&LastNodeLowerHalfDrop::testCase)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _LastNodeLowerHalfDrop_InnerClassesInfo_[] = {
	{"LastNodeLowerHalfDrop$3", nullptr, nullptr, 0},
	{"LastNodeLowerHalfDrop$2", nullptr, nullptr, 0},
	{"LastNodeLowerHalfDrop$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LastNodeLowerHalfDrop_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LastNodeLowerHalfDrop",
	"java.lang.Object",
	nullptr,
	_LastNodeLowerHalfDrop_FieldInfo_,
	_LastNodeLowerHalfDrop_MethodInfo_,
	nullptr,
	nullptr,
	_LastNodeLowerHalfDrop_InnerClassesInfo_,
	nullptr,
	nullptr,
	"LastNodeLowerHalfDrop$3,LastNodeLowerHalfDrop$2,LastNodeLowerHalfDrop$1"
};

$Object* allocate$LastNodeLowerHalfDrop($Class* clazz) {
	return $of($alloc(LastNodeLowerHalfDrop));
}

$DefaultMutableTreeNode* LastNodeLowerHalfDrop::b1 = nullptr;
$DefaultMutableTreeNode* LastNodeLowerHalfDrop::b2 = nullptr;
$DefaultMutableTreeNode* LastNodeLowerHalfDrop::c = nullptr;
$JTree* LastNodeLowerHalfDrop::jTree = nullptr;
$DefaultMutableTreeNode* LastNodeLowerHalfDrop::a = nullptr;
$DefaultMutableTreeNode* LastNodeLowerHalfDrop::b = nullptr;
$DefaultMutableTreeNode* LastNodeLowerHalfDrop::a1 = nullptr;
$Point* LastNodeLowerHalfDrop::dragPoint = nullptr;
$Point* LastNodeLowerHalfDrop::dropPoint = nullptr;
$JFrame* LastNodeLowerHalfDrop::f = nullptr;
$DefaultMutableTreeNode* LastNodeLowerHalfDrop::c1 = nullptr;
$DefaultMutableTreeNode* LastNodeLowerHalfDrop::root = nullptr;

void LastNodeLowerHalfDrop::init$() {
}

void LastNodeLowerHalfDrop::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait($$new($LastNodeLowerHalfDrop$1));
	$init(LastNodeLowerHalfDrop);
	testCase(LastNodeLowerHalfDrop::b2, LastNodeLowerHalfDrop::a1, +0.4f);
	if (!"b2"_s->equals($($nc($of($($nc($($nc(LastNodeLowerHalfDrop::jTree)->getModel()))->getChild(LastNodeLowerHalfDrop::a, $nc(LastNodeLowerHalfDrop::a)->getChildCount() - 1))))->toString()))) {
		cleanUp();
		$throwNew($RuntimeException, "b1 was not inserted in the last position in a"_s);
	}
	testCase(LastNodeLowerHalfDrop::c1, LastNodeLowerHalfDrop::c, -0.4f);
	if (!"c1"_s->equals($($nc($of($($nc($($nc(LastNodeLowerHalfDrop::jTree)->getModel()))->getChild(LastNodeLowerHalfDrop::root, 2))))->toString()))) {
		cleanUp();
		$throwNew($RuntimeException, "c1 was not inserted between c and b nodes"_s);
	}
	cleanUp();
}

void LastNodeLowerHalfDrop::cleanUp() {
	$SwingUtilities::invokeAndWait($$new($LastNodeLowerHalfDrop$2));
}

void LastNodeLowerHalfDrop::testCase($DefaultMutableTreeNode* drag, $DefaultMutableTreeNode* drop, float shift) {
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($LastNodeLowerHalfDrop$3, drag, drop, shift));
	$init(LastNodeLowerHalfDrop);
	robot->mouseMove($nc(LastNodeLowerHalfDrop::dragPoint)->x, $nc(LastNodeLowerHalfDrop::dragPoint)->y);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	robot->delay(1000);
	robot->mouseMove($nc(LastNodeLowerHalfDrop::dropPoint)->x, $nc(LastNodeLowerHalfDrop::dropPoint)->y);
	robot->delay(1000);
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
	robot->delay(1000);
	robot->waitForIdle();
}

$JScrollPane* LastNodeLowerHalfDrop::getContent() {
	$useLocalCurrentObjectStackCache();
	$assignStatic(LastNodeLowerHalfDrop::jTree, $new($JTree, $(getTreeModel())));
	$nc(LastNodeLowerHalfDrop::jTree)->setRootVisible(false);
	$nc(LastNodeLowerHalfDrop::jTree)->setDragEnabled(true);
	$init($DropMode);
	$nc(LastNodeLowerHalfDrop::jTree)->setDropMode($DropMode::INSERT);
	$nc(LastNodeLowerHalfDrop::jTree)->setTransferHandler($$new($TreeTransferHandler));
	$nc($($nc(LastNodeLowerHalfDrop::jTree)->getSelectionModel()))->setSelectionMode($TreeSelectionModel::SINGLE_TREE_SELECTION);
	expandTree(LastNodeLowerHalfDrop::jTree);
	return $new($JScrollPane, LastNodeLowerHalfDrop::jTree);
}

$TreeModel* LastNodeLowerHalfDrop::getTreeModel() {
	$init(LastNodeLowerHalfDrop);
	$assignStatic(LastNodeLowerHalfDrop::root, $new($DefaultMutableTreeNode, "Root"_s));
	$assignStatic(LastNodeLowerHalfDrop::a, $new($DefaultMutableTreeNode, "A"_s));
	$nc(LastNodeLowerHalfDrop::root)->add(LastNodeLowerHalfDrop::a);
	$assignStatic(LastNodeLowerHalfDrop::a1, $new($DefaultMutableTreeNode, "a1"_s));
	$nc(LastNodeLowerHalfDrop::a)->add(LastNodeLowerHalfDrop::a1);
	$assignStatic(LastNodeLowerHalfDrop::b, $new($DefaultMutableTreeNode, "B"_s));
	$nc(LastNodeLowerHalfDrop::root)->add(LastNodeLowerHalfDrop::b);
	$assignStatic(LastNodeLowerHalfDrop::b1, $new($DefaultMutableTreeNode, "b1"_s));
	$nc(LastNodeLowerHalfDrop::b)->add(LastNodeLowerHalfDrop::b1);
	$assignStatic(LastNodeLowerHalfDrop::b2, $new($DefaultMutableTreeNode, "b2"_s));
	$nc(LastNodeLowerHalfDrop::b)->add(LastNodeLowerHalfDrop::b2);
	$assignStatic(LastNodeLowerHalfDrop::c, $new($DefaultMutableTreeNode, "C"_s));
	$nc(LastNodeLowerHalfDrop::root)->add(LastNodeLowerHalfDrop::c);
	$assignStatic(LastNodeLowerHalfDrop::c1, $new($DefaultMutableTreeNode, "c1"_s));
	$nc(LastNodeLowerHalfDrop::c)->add(LastNodeLowerHalfDrop::c1);
	return $new($DefaultTreeModel, LastNodeLowerHalfDrop::root);
}

void LastNodeLowerHalfDrop::expandTree($JTree* tree) {
	$useLocalCurrentObjectStackCache();
	$var($DefaultMutableTreeNode, root, $cast($DefaultMutableTreeNode, $nc($($nc(tree)->getModel()))->getRoot()));
	$var($Enumeration, e, $nc(root)->breadthFirstEnumeration());
	while ($nc(e)->hasMoreElements()) {
		$var($DefaultMutableTreeNode, node, $cast($DefaultMutableTreeNode, e->nextElement()));
		if ($nc(node)->isLeaf()) {
			continue;
		}
		int32_t row = tree->getRowForPath($$new($TreePath, $($nc(node)->getPath())));
		tree->expandRow(row);
	}
}

LastNodeLowerHalfDrop::LastNodeLowerHalfDrop() {
}

$Class* LastNodeLowerHalfDrop::load$($String* name, bool initialize) {
	$loadClass(LastNodeLowerHalfDrop, name, initialize, &_LastNodeLowerHalfDrop_ClassInfo_, allocate$LastNodeLowerHalfDrop);
	return class$;
}

$Class* LastNodeLowerHalfDrop::class$ = nullptr;