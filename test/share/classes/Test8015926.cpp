#include <Test8015926.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/Runnable.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/TreeModelEvent.h>
#include <javax/swing/event/TreeModelListener.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $TreeModelEvent = ::javax::swing::event::TreeModelEvent;
using $TreeModelListener = ::javax::swing::event::TreeModelListener;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;
using $TreePath = ::javax::swing::tree::TreePath;

$FieldInfo _Test8015926_FieldInfo_[] = {
	{"tree", "Ljavax/swing/JTree;", nullptr, $PRIVATE, $field(Test8015926, tree)},
	{}
};

$MethodInfo _Test8015926_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8015926::*)()>(&Test8015926::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8015926::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"treeNodesChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeNodesInserted", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeNodesRemoved", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeStructureChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Test8015926_InnerClassesInfo_[] = {
	{"java.lang.Thread$UncaughtExceptionHandler", "java.lang.Thread", "UncaughtExceptionHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Test8015926_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8015926",
	"java.lang.Object",
	"javax.swing.event.TreeModelListener,java.lang.Runnable,java.lang.Thread$UncaughtExceptionHandler",
	_Test8015926_FieldInfo_,
	_Test8015926_MethodInfo_,
	nullptr,
	nullptr,
	_Test8015926_InnerClassesInfo_
};

$Object* allocate$Test8015926($Class* clazz) {
	return $of($alloc(Test8015926));
}

int32_t Test8015926::hashCode() {
	 return this->$TreeModelListener::hashCode();
}

bool Test8015926::equals(Object$* arg0) {
	 return this->$TreeModelListener::equals(arg0);
}

$Object* Test8015926::clone() {
	 return this->$TreeModelListener::clone();
}

$String* Test8015926::toString() {
	 return this->$TreeModelListener::toString();
}

void Test8015926::finalize() {
	this->$TreeModelListener::finalize();
}

void Test8015926::init$() {
}

void Test8015926::main($StringArray* args) {
	$init(Test8015926);
	$UIManager::setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	$SwingUtilities::invokeAndWait($$new(Test8015926));
	$Thread::sleep(1000);
}

void Test8015926::treeStructureChanged($TreeModelEvent* event) {
}

void Test8015926::treeNodesRemoved($TreeModelEvent* event) {
}

void Test8015926::treeNodesInserted($TreeModelEvent* event) {
	$nc(this->tree)->expandPath($($nc(event)->getTreePath()));
}

void Test8015926::treeNodesChanged($TreeModelEvent* event) {
}

void Test8015926::run() {
	$useLocalCurrentObjectStackCache();
	$($Thread::currentThread())->setUncaughtExceptionHandler(this);
	$var($DefaultMutableTreeNode, root, $new($DefaultMutableTreeNode));
	$var($DefaultMutableTreeNode, child, $new($DefaultMutableTreeNode, "Child"_s));
	$var($DefaultTreeModel, model, $new($DefaultTreeModel, root));
	$set(this, tree, $new($JTree));
	$nc(this->tree)->setModel(model);
	$var($JFrame, frame, $new($JFrame, $($of(this)->getClass()->getSimpleName())));
	frame->add(static_cast<$Component*>(this->tree));
	model->addTreeModelListener(this);
	model->insertNodeInto(child, root, root->getChildCount());
	model->removeNodeFromParent(child);
	frame->setSize(640, 480);
	frame->setLocationRelativeTo(nullptr);
	frame->setDefaultCloseOperation(2);
	frame->setVisible(true);
}

void Test8015926::uncaughtException($Thread* thread, $Throwable* exception) {
	$nc(exception)->printStackTrace();
	$System::exit(1);
}

Test8015926::Test8015926() {
}

$Class* Test8015926::load$($String* name, bool initialize) {
	$loadClass(Test8015926, name, initialize, &_Test8015926_ClassInfo_, allocate$Test8015926);
	return class$;
}

$Class* Test8015926::class$ = nullptr;