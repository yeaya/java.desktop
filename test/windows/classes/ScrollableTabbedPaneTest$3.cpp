#include <ScrollableTabbedPaneTest$3.h>

#include <ScrollableTabbedPaneTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingConstants.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef LEFT
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
using $SwingConstants = ::javax::swing::SwingConstants;

$FieldInfo _ScrollableTabbedPaneTest$3_FieldInfo_[] = {
	{"val$shortLAF", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ScrollableTabbedPaneTest$3, val$shortLAF)},
	{}
};

$MethodInfo _ScrollableTabbedPaneTest$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(ScrollableTabbedPaneTest$3::*)($String*)>(&ScrollableTabbedPaneTest$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ScrollableTabbedPaneTest$3_EnclosingMethodInfo_ = {
	"ScrollableTabbedPaneTest",
	"createLeftUI",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _ScrollableTabbedPaneTest$3_InnerClassesInfo_[] = {
	{"ScrollableTabbedPaneTest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScrollableTabbedPaneTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"ScrollableTabbedPaneTest$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_ScrollableTabbedPaneTest$3_FieldInfo_,
	_ScrollableTabbedPaneTest$3_MethodInfo_,
	nullptr,
	&_ScrollableTabbedPaneTest$3_EnclosingMethodInfo_,
	_ScrollableTabbedPaneTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ScrollableTabbedPaneTest"
};

$Object* allocate$ScrollableTabbedPaneTest$3($Class* clazz) {
	return $of($alloc(ScrollableTabbedPaneTest$3));
}

void ScrollableTabbedPaneTest$3::init$($String* val$shortLAF) {
	$set(this, val$shortLAF, val$shortLAF);
}

void ScrollableTabbedPaneTest$3::run() {
	$init($ScrollableTabbedPaneTest);
	$assignStatic($ScrollableTabbedPaneTest::frame, $new($JFrame, this->val$shortLAF));
	$nc($ScrollableTabbedPaneTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($ScrollableTabbedPaneTest::frame)->setVisible(true);
	$assignStatic($ScrollableTabbedPaneTest::pane, $new($JTabbedPane));
	$nc($ScrollableTabbedPaneTest::pane)->setTabLayoutPolicy($JTabbedPane::SCROLL_TAB_LAYOUT);
	$nc($ScrollableTabbedPaneTest::pane)->setTabPlacement($SwingConstants::LEFT);
	$nc($ScrollableTabbedPaneTest::frame)->add(static_cast<$Component*>($ScrollableTabbedPaneTest::pane));
	$nc($ScrollableTabbedPaneTest::frame)->setSize(500, 500);
}

ScrollableTabbedPaneTest$3::ScrollableTabbedPaneTest$3() {
}

$Class* ScrollableTabbedPaneTest$3::load$($String* name, bool initialize) {
	$loadClass(ScrollableTabbedPaneTest$3, name, initialize, &_ScrollableTabbedPaneTest$3_ClassInfo_, allocate$ScrollableTabbedPaneTest$3);
	return class$;
}

$Class* ScrollableTabbedPaneTest$3::class$ = nullptr;