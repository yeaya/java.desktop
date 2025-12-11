#include <JMenuSelectedColorTest$1.h>

#include <JMenuSelectedColorTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE

using $JMenuSelectedColorTest = ::JMenuSelectedColorTest;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPanel = ::javax::swing::JPanel;

$MethodInfo _JMenuSelectedColorTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JMenuSelectedColorTest$1::*)()>(&JMenuSelectedColorTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JMenuSelectedColorTest$1_EnclosingMethodInfo_ = {
	"JMenuSelectedColorTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _JMenuSelectedColorTest$1_InnerClassesInfo_[] = {
	{"JMenuSelectedColorTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JMenuSelectedColorTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"JMenuSelectedColorTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_JMenuSelectedColorTest$1_MethodInfo_,
	nullptr,
	&_JMenuSelectedColorTest$1_EnclosingMethodInfo_,
	_JMenuSelectedColorTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JMenuSelectedColorTest"
};

$Object* allocate$JMenuSelectedColorTest$1($Class* clazz) {
	return $of($alloc(JMenuSelectedColorTest$1));
}

void JMenuSelectedColorTest$1::init$() {
}

void JMenuSelectedColorTest$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($JMenuSelectedColorTest);
	$assignStatic($JMenuSelectedColorTest::menu, $new($JMenu, "         "_s));
	$assignStatic($JMenuSelectedColorTest::menuitem, $new($JMenuItem, "        "_s));
	$nc($JMenuSelectedColorTest::menu)->add($JMenuSelectedColorTest::menuitem);
	$var($JPanel, panel, $new($JPanel));
	panel->setLayout($$new($BorderLayout));
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$var($JPanel, menuPanel, $new($JPanel));
	menuPanel->setLayout($$new($FlowLayout));
	menuBar->add($JMenuSelectedColorTest::menu);
	menuPanel->add(static_cast<$Component*>(menuBar));
	$init($BorderLayout);
	panel->add(static_cast<$Component*>(menuPanel), $of($BorderLayout::CENTER));
	$assignStatic($JMenuSelectedColorTest::frame, $new($JFrame, "JMenuSelectedColor"_s));
	$nc($JMenuSelectedColorTest::frame)->add(static_cast<$Component*>(panel));
	$nc($JMenuSelectedColorTest::frame)->setSize(200, 200);
	$nc($JMenuSelectedColorTest::frame)->setAlwaysOnTop(true);
	$nc($JMenuSelectedColorTest::frame)->setLocationRelativeTo(nullptr);
	$nc($JMenuSelectedColorTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($JMenuSelectedColorTest::frame)->setVisible(true);
}

JMenuSelectedColorTest$1::JMenuSelectedColorTest$1() {
}

$Class* JMenuSelectedColorTest$1::load$($String* name, bool initialize) {
	$loadClass(JMenuSelectedColorTest$1, name, initialize, &_JMenuSelectedColorTest$1_ClassInfo_, allocate$JMenuSelectedColorTest$1);
	return class$;
}

$Class* JMenuSelectedColorTest$1::class$ = nullptr;