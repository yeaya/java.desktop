#include <bug4885629$2.h>

#include <bug4885629.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SplitPaneUI.h>
#include <javax/swing/plaf/basic/BasicBorders$SplitPaneBorder.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

#undef BGCOLOR
#undef EXIT_ON_CLOSE
#undef VERTICAL_SPLIT

using $bug4885629 = ::bug4885629;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JSplitPane = ::javax::swing::JSplitPane;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $SplitPaneUI = ::javax::swing::plaf::SplitPaneUI;
using $BasicBorders$SplitPaneBorder = ::javax::swing::plaf::basic::BasicBorders$SplitPaneBorder;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

$MethodInfo _bug4885629$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4885629$2::*)()>(&bug4885629$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4885629$2_EnclosingMethodInfo_ = {
	"bug4885629",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4885629$2_InnerClassesInfo_[] = {
	{"bug4885629$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4885629$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4885629$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4885629$2_MethodInfo_,
	nullptr,
	&_bug4885629$2_EnclosingMethodInfo_,
	_bug4885629$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4885629"
};

$Object* allocate$bug4885629$2($Class* clazz) {
	return $of($alloc(bug4885629$2));
}

void bug4885629$2::init$() {
}

void bug4885629$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug4885629);
	$assignStatic($bug4885629::frame, $new($JFrame));
	$var($JComponent, a, $new($JPanel));
	$init($Color);
	a->setBackground($Color::white);
	a->setMinimumSize($$new($Dimension, 10, 10));
	$var($JComponent, b, $new($JPanel));
	b->setBackground($Color::white);
	b->setMinimumSize($$new($Dimension, 10, 10));
	$assignStatic($bug4885629::sp, $new($JSplitPane, $JSplitPane::VERTICAL_SPLIT, a, b));
	$nc($bug4885629::sp)->setPreferredSize($$new($Dimension, 20, 20));
	$nc($bug4885629::sp)->setBackground($bug4885629::BGCOLOR);
	$var($Border, bo, $new($BasicBorders$SplitPaneBorder, $bug4885629::lightHighlight, $Color::red));
	$var($Border, ibo, $new($EmptyBorder, 0, 0, 0, 0));
	$nc($bug4885629::sp)->setBorder(bo);
	$nc($bug4885629::sp)->setMinimumSize($$new($Dimension, 200, 200));
	$nc($($nc(($cast($BasicSplitPaneUI, $($cast($SplitPaneUI, $nc($bug4885629::sp)->getUI())))))->getDivider()))->setBorder(ibo);
	$nc($($nc($bug4885629::frame)->getContentPane()))->setLayout($$new($FlowLayout));
	$nc($($nc($bug4885629::frame)->getContentPane()))->setBackground($bug4885629::darkShadow);
	$nc($($nc($bug4885629::frame)->getContentPane()))->add(static_cast<$Component*>($bug4885629::sp));
	$nc($bug4885629::frame)->setSize(200, 200);
	$nc($bug4885629::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($bug4885629::frame)->setVisible(true);
}

bug4885629$2::bug4885629$2() {
}

$Class* bug4885629$2::load$($String* name, bool initialize) {
	$loadClass(bug4885629$2, name, initialize, &_bug4885629$2_ClassInfo_, allocate$bug4885629$2);
	return class$;
}

$Class* bug4885629$2::class$ = nullptr;