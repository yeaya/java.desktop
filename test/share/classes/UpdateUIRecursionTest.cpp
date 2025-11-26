#include <UpdateUIRecursionTest.h>

#include <UpdateUIRecursionTest$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <javax/swing/tree/TreeCellRenderer.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE

using $UpdateUIRecursionTest$1 = ::UpdateUIRecursionTest$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
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
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;
using $TreeCellRenderer = ::javax::swing::tree::TreeCellRenderer;

$FieldInfo _UpdateUIRecursionTest_FieldInfo_[] = {
	{"tree", "Ljavax/swing/JTree;", nullptr, 0, $field(UpdateUIRecursionTest, tree)},
	{"renderer", "Ljavax/swing/tree/DefaultTreeCellRenderer;", nullptr, 0, $field(UpdateUIRecursionTest, renderer)},
	{}
};

$MethodInfo _UpdateUIRecursionTest_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UpdateUIRecursionTest::*)()>(&UpdateUIRecursionTest::init$))},
	{"disposeUI", "()V", nullptr, $PUBLIC},
	{"getTreeCellRendererComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZIZ)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&UpdateUIRecursionTest::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _UpdateUIRecursionTest_InnerClassesInfo_[] = {
	{"UpdateUIRecursionTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UpdateUIRecursionTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"UpdateUIRecursionTest",
	"javax.swing.JFrame",
	"javax.swing.tree.TreeCellRenderer",
	_UpdateUIRecursionTest_FieldInfo_,
	_UpdateUIRecursionTest_MethodInfo_,
	nullptr,
	nullptr,
	_UpdateUIRecursionTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"UpdateUIRecursionTest$1"
};

$Object* allocate$UpdateUIRecursionTest($Class* clazz) {
	return $of($alloc(UpdateUIRecursionTest));
}

$String* UpdateUIRecursionTest::toString() {
	 return this->$JFrame::toString();
}

int32_t UpdateUIRecursionTest::hashCode() {
	 return this->$JFrame::hashCode();
}

bool UpdateUIRecursionTest::equals(Object$* arg0) {
	 return this->$JFrame::equals(arg0);
}

$Object* UpdateUIRecursionTest::clone() {
	 return this->$JFrame::clone();
}

void UpdateUIRecursionTest::finalize() {
	this->$JFrame::finalize();
}

void UpdateUIRecursionTest::init$() {
	$useLocalCurrentObjectStackCache();
	$JFrame::init$("UpdateUIRecursionTest"_s);
	setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	setSize(400, 400);
	$var($StringArray, listData, $new($StringArray, {
		"First"_s,
		"Second"_s,
		"Third"_s,
		"Fourth"_s,
		"Fifth"_s,
		"Sixth"_s
	}));
	$set(this, tree, $new($JTree, listData));
	$set(this, renderer, $new($DefaultTreeCellRenderer));
	$init($BorderLayout);
	$nc($(getContentPane()))->add(static_cast<$Component*>($$new($JScrollPane, this->tree)), $of($BorderLayout::CENTER));
	$nc(this->tree)->setCellRenderer(this);
	setVisible(true);
}

void UpdateUIRecursionTest::main($StringArray* args) {
	$init(UpdateUIRecursionTest);
	$SwingUtilities::invokeAndWait($$new($UpdateUIRecursionTest$1));
}

void UpdateUIRecursionTest::test() {
	$nc(this->tree)->updateUI();
}

void UpdateUIRecursionTest::disposeUI() {
	setVisible(false);
	dispose();
}

$Component* UpdateUIRecursionTest::getTreeCellRendererComponent($JTree* tree, Object$* value, bool selected, bool expanded, bool leaf, int32_t row, bool hasFocus) {
	return $nc(this->renderer)->getTreeCellRendererComponent(tree, value, leaf, expanded, leaf, row, hasFocus);
}

UpdateUIRecursionTest::UpdateUIRecursionTest() {
}

$Class* UpdateUIRecursionTest::load$($String* name, bool initialize) {
	$loadClass(UpdateUIRecursionTest, name, initialize, &_UpdateUIRecursionTest_ClassInfo_, allocate$UpdateUIRecursionTest);
	return class$;
}

$Class* UpdateUIRecursionTest::class$ = nullptr;