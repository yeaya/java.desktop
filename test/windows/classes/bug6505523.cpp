#include <bug6505523.h>

#include <bug6505523$1.h>
#include <bug6505523$2.h>
#include <bug6505523$3.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/TreeExpansionListener.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef EXIT_ON_CLOSE

using $PointArray = $Array<::java::awt::Point>;
using $bug6505523$1 = ::bug6505523$1;
using $bug6505523$2 = ::bug6505523$2;
using $bug6505523$3 = ::bug6505523$3;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TreeExpansionListener = ::javax::swing::event::TreeExpansionListener;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;

$FieldInfo _bug6505523_FieldInfo_[] = {
	{"tree", "Ljavax/swing/JTree;", nullptr, $PRIVATE | $STATIC, $staticField(bug6505523, tree)},
	{}
};

$MethodInfo _bug6505523_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6505523::*)()>(&bug6505523::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6505523::createAndShowGUI))},
	{"getRowPointToClick", "(I)Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Point*(*)(int32_t)>(&bug6505523::getRowPointToClick)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6505523::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6505523_InnerClassesInfo_[] = {
	{"bug6505523$3", nullptr, nullptr, 0},
	{"bug6505523$2", nullptr, nullptr, 0},
	{"bug6505523$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6505523_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6505523",
	"java.lang.Object",
	nullptr,
	_bug6505523_FieldInfo_,
	_bug6505523_MethodInfo_,
	nullptr,
	nullptr,
	_bug6505523_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6505523$3,bug6505523$2,bug6505523$1"
};

$Object* allocate$bug6505523($Class* clazz) {
	return $of($alloc(bug6505523));
}

$JTree* bug6505523::tree = nullptr;

void bug6505523::init$() {
}

void bug6505523::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(50);
	$SwingUtilities::invokeAndWait($$new($bug6505523$1));
	robot->waitForIdle();
	$var($Point, point, getRowPointToClick(2));
	robot->mouseMove($nc(point)->x, point->y);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
	robot->waitForIdle();
}

$Point* bug6505523::getRowPointToClick(int32_t row) {
	$useLocalCurrentObjectStackCache();
	$var($PointArray, result, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug6505523$2, row, result));
	return result->get(0);
}

void bug6505523::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	$var($DefaultMutableTreeNode, root, $new($DefaultMutableTreeNode, "Problem with NPE under JDK 1.6"_s));
	$var($DefaultMutableTreeNode, problematic, $new($DefaultMutableTreeNode, "Expand me and behold a NPE in stderr"_s));
	problematic->add($$new($DefaultMutableTreeNode, "some content"_s));
	root->add($$new($DefaultMutableTreeNode, "irrelevant..."_s));
	root->add(problematic);
	$var($DefaultTreeModel, model, $new($DefaultTreeModel, root));
	$init(bug6505523);
	$assignStatic(bug6505523::tree, $new($JTree, static_cast<$TreeModel*>(model)));
	$nc(bug6505523::tree)->setRootVisible(true);
	$nc(bug6505523::tree)->setShowsRootHandles(true);
	$nc(bug6505523::tree)->expandRow(0);
	$nc(bug6505523::tree)->collapseRow(2);
	$nc(bug6505523::tree)->setDragEnabled(true);
	$nc(bug6505523::tree)->addTreeExpansionListener($$new($bug6505523$3, problematic, model));
	$var($JFrame, frame, $new($JFrame, "JTree Problem"_s));
	frame->add(static_cast<$Component*>($$new($JScrollPane, bug6505523::tree)));
	frame->setSize(500, 300);
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	frame->setLocationRelativeTo(nullptr);
	frame->setVisible(true);
}

bug6505523::bug6505523() {
}

$Class* bug6505523::load$($String* name, bool initialize) {
	$loadClass(bug6505523, name, initialize, &_bug6505523_ClassInfo_, allocate$bug6505523);
	return class$;
}

$Class* bug6505523::class$ = nullptr;