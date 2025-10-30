#include <bug8038113$1.h>

#include <bug8038113$1$1.h>
#include <bug8038113.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TreeUI.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

#undef CENTER

using $bug8038113 = ::bug8038113;
using $bug8038113$1$1 = ::bug8038113$1$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JTree = ::javax::swing::JTree;
using $TreeUI = ::javax::swing::plaf::TreeUI;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;

$FieldInfo _bug8038113$1_FieldInfo_[] = {
	{"this$0", "Lbug8038113;", nullptr, $FINAL | $SYNTHETIC, $field(bug8038113$1, this$0)},
	{}
};

$MethodInfo _bug8038113$1_MethodInfo_[] = {
	{"<init>", "(Lbug8038113;)V", nullptr, 0, $method(static_cast<void(bug8038113$1::*)($bug8038113*)>(&bug8038113$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8038113$1_EnclosingMethodInfo_ = {
	"bug8038113",
	"init",
	"()V"
};

$InnerClassInfo _bug8038113$1_InnerClassesInfo_[] = {
	{"bug8038113$1", nullptr, nullptr, 0},
	{"bug8038113$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8038113$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8038113$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug8038113$1_FieldInfo_,
	_bug8038113$1_MethodInfo_,
	nullptr,
	&_bug8038113$1_EnclosingMethodInfo_,
	_bug8038113$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8038113"
};

$Object* allocate$bug8038113$1($Class* clazz) {
	return $of($alloc(bug8038113$1));
}

void bug8038113$1::init$($bug8038113* this$0) {
	$set(this, this$0, this$0);
}

void bug8038113$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JTree, tree, $new($JTree));
	$var($BasicTreeUI, treeUI, $cast($BasicTreeUI, $cast($TreeUI, tree->getUI())));
	$var($JPanel, panel, $new($bug8038113$1$1, this, treeUI));
	$nc($(this->this$0->getContentPane()))->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	$nc($(this->this$0->getContentPane()))->add(static_cast<$Component*>(panel), $of($BorderLayout::CENTER));
}

bug8038113$1::bug8038113$1() {
}

$Class* bug8038113$1::load$($String* name, bool initialize) {
	$loadClass(bug8038113$1, name, initialize, &_bug8038113$1_ClassInfo_, allocate$bug8038113$1);
	return class$;
}

$Class* bug8038113$1::class$ = nullptr;