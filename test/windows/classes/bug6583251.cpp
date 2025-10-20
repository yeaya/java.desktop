#include <bug6583251.h>

#include <bug6583251$1.h>
#include <bug6583251$2.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Frame.h>
#include <java/awt/Image.h>
#include <java/awt/Robot.h>
#include <java/awt/SystemTray.h>
#include <java/awt/Toolkit.h>
#include <java/awt/TrayIcon.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef MOUSE_PRESSED
#undef TYPE_INT_ARGB

using $bug6583251$1 = ::bug6583251$1;
using $bug6583251$2 = ::bug6583251$2;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $Frame = ::java::awt::Frame;
using $Image = ::java::awt::Image;
using $Robot = ::java::awt::Robot;
using $SystemTray = ::java::awt::SystemTray;
using $Toolkit = ::java::awt::Toolkit;
using $TrayIcon = ::java::awt::TrayIcon;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPanel = ::javax::swing::JPanel;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6583251_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6583251, frame)},
	{"menu", "Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE | $STATIC, $staticField(bug6583251, menu)},
	{}
};

$MethodInfo _bug6583251_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6583251::*)()>(&bug6583251::init$))},
	{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6583251::createGui))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6583251::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6583251_InnerClassesInfo_[] = {
	{"bug6583251$2", nullptr, nullptr, 0},
	{"bug6583251$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6583251_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6583251",
	"java.lang.Object",
	nullptr,
	_bug6583251_FieldInfo_,
	_bug6583251_MethodInfo_,
	nullptr,
	nullptr,
	_bug6583251_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6583251$2,bug6583251$1"
};

$Object* allocate$bug6583251($Class* clazz) {
	return $of($alloc(bug6583251));
}

$JFrame* bug6583251::frame = nullptr;
$JPopupMenu* bug6583251::menu = nullptr;

void bug6583251::init$() {
}

void bug6583251::createGui() {
	$useLocalCurrentObjectStackCache();
	$init(bug6583251);
	$assignStatic(bug6583251::frame, $new($JFrame));
	$nc(bug6583251::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JPanel, panel, $new($JPanel));
	$assignStatic(bug6583251::menu, $new($JPopupMenu));
	$nc(bug6583251::menu)->add($$new($JMenuItem, "item"_s));
	panel->setComponentPopupMenu(bug6583251::menu);
	$nc(bug6583251::frame)->add(static_cast<$Component*>(panel));
	$nc(bug6583251::frame)->setSize(200, 200);
	$nc(bug6583251::frame)->setLocationRelativeTo(nullptr);
	$nc(bug6583251::frame)->setVisible(true);
}

void bug6583251::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	if ($SystemTray::isSupported()) {
		$SwingUtilities::invokeAndWait($$new($bug6583251$1));
		$var($Robot, robot, $new($Robot));
		robot->waitForIdle();
		$init(bug6583251);
		$nc(bug6583251::menu)->show(bug6583251::frame, 0, 0);
		robot->waitForIdle();
		$var($TrayIcon, trayIcon, $new($TrayIcon, $$new($BufferedImage, 1, 1, $BufferedImage::TYPE_INT_ARGB)));
		$var($Component, var$0, static_cast<$Component*>($new($JButton)));
		$var($MouseEvent, ev, $new($MouseEvent, var$0, $MouseEvent::MOUSE_PRESSED, $System::currentTimeMillis(), 0, 0, 0, 1, false));
		ev->setSource(trayIcon);
		$nc($($nc($($Toolkit::getDefaultToolkit()))->getSystemEventQueue()))->postEvent(ev);
		$SwingUtilities::invokeAndWait($$new($bug6583251$2));
	} else {
		$init($System);
		$nc($System::out)->println("SystemTray not supported. Skipping the test."_s);
	}
}

bug6583251::bug6583251() {
}

$Class* bug6583251::load$($String* name, bool initialize) {
	$loadClass(bug6583251, name, initialize, &_bug6583251_ClassInfo_, allocate$bug6583251);
	return class$;
}

$Class* bug6583251::class$ = nullptr;