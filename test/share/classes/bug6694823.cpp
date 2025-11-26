#include <bug6694823.h>

#include <bug6694823$1.h>
#include <bug6694823$2.h>
#include <bug6694823$3.h>
#include <bug6694823$4.h>
#include <bug6694823$5.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE

using $bug6694823$1 = ::bug6694823$1;
using $bug6694823$2 = ::bug6694823$2;
using $bug6694823$3 = ::bug6694823$3;
using $bug6694823$4 = ::bug6694823$4;
using $bug6694823$5 = ::bug6694823$5;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityManager = ::java::lang::SecurityManager;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPanel = ::javax::swing::JPanel;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6694823_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6694823, frame)},
	{"popup", "Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE | $STATIC, $staticField(bug6694823, popup)},
	{"toolkit", "Ljava/awt/Toolkit;", nullptr, $PRIVATE | $STATIC, $staticField(bug6694823, toolkit)},
	{"screenInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC, $staticField(bug6694823, screenInsets)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug6694823, robot)},
	{}
};

$MethodInfo _bug6694823_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6694823::*)()>(&bug6694823::init$))},
	{"checkPopup", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6694823::checkPopup)), "java.lang.Exception"},
	{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6694823::createGui))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6694823::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6694823_InnerClassesInfo_[] = {
	{"bug6694823$5", nullptr, nullptr, 0},
	{"bug6694823$4", nullptr, nullptr, 0},
	{"bug6694823$3", nullptr, nullptr, 0},
	{"bug6694823$2", nullptr, nullptr, 0},
	{"bug6694823$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6694823_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6694823",
	"java.lang.Object",
	nullptr,
	_bug6694823_FieldInfo_,
	_bug6694823_MethodInfo_,
	nullptr,
	nullptr,
	_bug6694823_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6694823$5,bug6694823$4,bug6694823$3,bug6694823$2,bug6694823$1"
};

$Object* allocate$bug6694823($Class* clazz) {
	return $of($alloc(bug6694823));
}

$JFrame* bug6694823::frame = nullptr;
$JPopupMenu* bug6694823::popup = nullptr;
$Toolkit* bug6694823::toolkit = nullptr;
$Insets* bug6694823::screenInsets = nullptr;
$Robot* bug6694823::robot = nullptr;

void bug6694823::init$() {
}

void bug6694823::main($StringArray* args) {
	$load(bug6694823);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init(bug6694823);
	$assignStatic(bug6694823::robot, $new($Robot));
	$assignStatic(bug6694823::toolkit, $Toolkit::getDefaultToolkit());
	$SwingUtilities::invokeAndWait($$new($bug6694823$1));
	$nc(bug6694823::robot)->waitForIdle();
	$assignStatic(bug6694823::screenInsets, $nc(bug6694823::toolkit)->getScreenInsets($($nc(bug6694823::frame)->getGraphicsConfiguration())));
	if ($nc(bug6694823::screenInsets)->bottom == 0) {
		return;
	}
	$System::setSecurityManager($$new($bug6694823$2));
	checkPopup();
}

void bug6694823::createGui() {
	$useLocalCurrentObjectStackCache();
	$init(bug6694823);
	$assignStatic(bug6694823::frame, $new($JFrame));
	$nc(bug6694823::frame)->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
	$nc(bug6694823::frame)->setUndecorated(true);
	$assignStatic(bug6694823::popup, $new($JPopupMenu, "Menu"_s));
	for (int32_t i = 0; i < 7; ++i) {
		$nc(bug6694823::popup)->add($$new($JMenuItem, "MenuItem"_s));
	}
	$var($JPanel, panel, $new($JPanel));
	panel->setComponentPopupMenu(bug6694823::popup);
	$nc(bug6694823::frame)->add(static_cast<$Component*>(panel));
	$nc(bug6694823::frame)->setSize(200, 200);
}

void bug6694823::checkPopup() {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait($$new($bug6694823$3));
	$init(bug6694823);
	$nc(bug6694823::robot)->waitForIdle();
	$var($Point, point, $new($Point));
	$SwingUtilities::invokeAndWait($$new($bug6694823$4, point));
	$nc(bug6694823::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug6694823$5, point));
}

bug6694823::bug6694823() {
}

$Class* bug6694823::load$($String* name, bool initialize) {
	$loadClass(bug6694823, name, initialize, &_bug6694823_ClassInfo_, allocate$bug6694823);
	return class$;
}

$Class* bug6694823::class$ = nullptr;