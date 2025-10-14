#include <JInternalFrameIconTest$1.h>

#include <JInternalFrameIconTest$1$1.h>
#include <JInternalFrameIconTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
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
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $JInternalFrameIconTest = ::JInternalFrameIconTest;
using $JInternalFrameIconTest$1$1 = ::JInternalFrameIconTest$1$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;

$FieldInfo _JInternalFrameIconTest$1_FieldInfo_[] = {
	{"val$lookAndFeelString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(JInternalFrameIconTest$1, val$lookAndFeelString)},
	{}
};

$MethodInfo _JInternalFrameIconTest$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(JInternalFrameIconTest$1::*)($String*)>(&JInternalFrameIconTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JInternalFrameIconTest$1_EnclosingMethodInfo_ = {
	"JInternalFrameIconTest",
	"createImageIconUI",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _JInternalFrameIconTest$1_InnerClassesInfo_[] = {
	{"JInternalFrameIconTest$1", nullptr, nullptr, 0},
	{"JInternalFrameIconTest$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JInternalFrameIconTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"JInternalFrameIconTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_JInternalFrameIconTest$1_FieldInfo_,
	_JInternalFrameIconTest$1_MethodInfo_,
	nullptr,
	&_JInternalFrameIconTest$1_EnclosingMethodInfo_,
	_JInternalFrameIconTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JInternalFrameIconTest"
};

$Object* allocate$JInternalFrameIconTest$1($Class* clazz) {
	return $of($alloc(JInternalFrameIconTest$1));
}

void JInternalFrameIconTest$1::init$($String* val$lookAndFeelString) {
	$set(this, val$lookAndFeelString, val$lookAndFeelString);
}

void JInternalFrameIconTest$1::run() {
	$init($JInternalFrameIconTest);
	$assignStatic($JInternalFrameIconTest::desktopPane, $new($JDesktopPane));
	$assignStatic($JInternalFrameIconTest::internalFrame, $new($JInternalFrame));
	$assignStatic($JInternalFrameIconTest::frame, $new($JFrame));
	$nc($JInternalFrameIconTest::internalFrame)->setTitle(this->val$lookAndFeelString);
	$assignStatic($JInternalFrameIconTest::titleImageIcon, $new($JInternalFrameIconTest$1$1, this));
	$nc($JInternalFrameIconTest::internalFrame)->setFrameIcon($JInternalFrameIconTest::titleImageIcon);
	$nc($JInternalFrameIconTest::internalFrame)->setSize(500, 200);
	$nc($JInternalFrameIconTest::internalFrame)->setVisible(true);
	$nc($JInternalFrameIconTest::desktopPane)->add(static_cast<$Component*>($JInternalFrameIconTest::internalFrame));
	$nc($JInternalFrameIconTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($($nc($JInternalFrameIconTest::frame)->getContentPane()))->setLayout($$new($BorderLayout));
	$nc($($nc($JInternalFrameIconTest::frame)->getContentPane()))->add(static_cast<$Component*>($JInternalFrameIconTest::desktopPane), $of("Center"_s));
	$nc($JInternalFrameIconTest::frame)->setSize(500, 500);
	$nc($JInternalFrameIconTest::frame)->setLocationRelativeTo(nullptr);
	$nc($JInternalFrameIconTest::frame)->setVisible(true);
	$nc($JInternalFrameIconTest::frame)->toFront();
}

JInternalFrameIconTest$1::JInternalFrameIconTest$1() {
}

$Class* JInternalFrameIconTest$1::load$($String* name, bool initialize) {
	$loadClass(JInternalFrameIconTest$1, name, initialize, &_JInternalFrameIconTest$1_ClassInfo_, allocate$JInternalFrameIconTest$1);
	return class$;
}

$Class* JInternalFrameIconTest$1::class$ = nullptr;