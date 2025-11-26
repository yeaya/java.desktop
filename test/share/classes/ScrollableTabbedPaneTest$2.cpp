#include <ScrollableTabbedPaneTest$2.h>

#include <ScrollableTabbedPaneTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef SCROLL_TAB_LAYOUT

using $ScrollableTabbedPaneTest = ::ScrollableTabbedPaneTest;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTabbedPane = ::javax::swing::JTabbedPane;

$FieldInfo _ScrollableTabbedPaneTest$2_FieldInfo_[] = {
	{"val$shortLAF", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ScrollableTabbedPaneTest$2, val$shortLAF)},
	{}
};

$MethodInfo _ScrollableTabbedPaneTest$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(ScrollableTabbedPaneTest$2::*)($String*)>(&ScrollableTabbedPaneTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ScrollableTabbedPaneTest$2_EnclosingMethodInfo_ = {
	"ScrollableTabbedPaneTest",
	"createUI",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _ScrollableTabbedPaneTest$2_InnerClassesInfo_[] = {
	{"ScrollableTabbedPaneTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScrollableTabbedPaneTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"ScrollableTabbedPaneTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_ScrollableTabbedPaneTest$2_FieldInfo_,
	_ScrollableTabbedPaneTest$2_MethodInfo_,
	nullptr,
	&_ScrollableTabbedPaneTest$2_EnclosingMethodInfo_,
	_ScrollableTabbedPaneTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ScrollableTabbedPaneTest"
};

$Object* allocate$ScrollableTabbedPaneTest$2($Class* clazz) {
	return $of($alloc(ScrollableTabbedPaneTest$2));
}

void ScrollableTabbedPaneTest$2::init$($String* val$shortLAF) {
	$set(this, val$shortLAF, val$shortLAF);
}

void ScrollableTabbedPaneTest$2::run() {
	$init($ScrollableTabbedPaneTest);
	$assignStatic($ScrollableTabbedPaneTest::frame, $new($JFrame, this->val$shortLAF));
	$nc($ScrollableTabbedPaneTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($ScrollableTabbedPaneTest::frame)->setVisible(true);
	$assignStatic($ScrollableTabbedPaneTest::pane, $new($JTabbedPane));
	$nc($ScrollableTabbedPaneTest::pane)->setTabLayoutPolicy($JTabbedPane::SCROLL_TAB_LAYOUT);
	$nc($ScrollableTabbedPaneTest::frame)->add(static_cast<$Component*>($ScrollableTabbedPaneTest::pane));
	$nc($ScrollableTabbedPaneTest::frame)->setSize(500, 500);
}

ScrollableTabbedPaneTest$2::ScrollableTabbedPaneTest$2() {
}

$Class* ScrollableTabbedPaneTest$2::load$($String* name, bool initialize) {
	$loadClass(ScrollableTabbedPaneTest$2, name, initialize, &_ScrollableTabbedPaneTest$2_ClassInfo_, allocate$ScrollableTabbedPaneTest$2);
	return class$;
}

$Class* ScrollableTabbedPaneTest$2::class$ = nullptr;