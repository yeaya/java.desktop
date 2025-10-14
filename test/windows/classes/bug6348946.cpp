#include <bug6348946.h>

#include <bug6348946$1.h>
#include <bug6348946$2.h>
#include <bug6348946$3.h>
#include <bug6348946$ParameterTable.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef CENTER

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $bug6348946$1 = ::bug6348946$1;
using $bug6348946$2 = ::bug6348946$2;
using $bug6348946$3 = ::bug6348946$3;
using $bug6348946$ParameterTable = ::bug6348946$ParameterTable;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$FieldInfo _bug6348946_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6348946, frame)},
	{"panel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(bug6348946, panel)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug6348946, robot)},
	{"passed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug6348946, passed)},
	{}
};

$MethodInfo _bug6348946_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6348946::*)()>(&bug6348946::init$))},
	{"checkResult", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6348946::checkResult))},
	{"clickOnSlider", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6348946::clickOnSlider)), "java.lang.Exception"},
	{"getPanelRectangle", "()Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Rectangle*(*)()>(&bug6348946::getPanelRectangle)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6348946::main)), "java.lang.Exception"},
	{"setupUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6348946::setupUI))},
	{"stopEDT", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6348946::stopEDT))},
	{}
};

$InnerClassInfo _bug6348946_InnerClassesInfo_[] = {
	{"bug6348946$Editor", "bug6348946", "Editor", $PRIVATE | $STATIC},
	{"bug6348946$Renderer", "bug6348946", "Renderer", $PRIVATE | $STATIC},
	{"bug6348946$ParameterTable", "bug6348946", "ParameterTable", $PRIVATE | $STATIC},
	{"bug6348946$3", nullptr, nullptr, 0},
	{"bug6348946$2", nullptr, nullptr, 0},
	{"bug6348946$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6348946_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6348946",
	"java.lang.Object",
	nullptr,
	_bug6348946_FieldInfo_,
	_bug6348946_MethodInfo_,
	nullptr,
	nullptr,
	_bug6348946_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6348946$Editor,bug6348946$Editor$1,bug6348946$Renderer,bug6348946$ParameterTable,bug6348946$3,bug6348946$2,bug6348946$1"
};

$Object* allocate$bug6348946($Class* clazz) {
	return $of($alloc(bug6348946));
}

$JFrame* bug6348946::frame = nullptr;
$JPanel* bug6348946::panel = nullptr;
$Robot* bug6348946::robot = nullptr;
$volatile(bool) bug6348946::passed = false;

void bug6348946::init$() {
}

void bug6348946::main($StringArray* args) {
	$init(bug6348946);
	$assignStatic(bug6348946::robot, $new($Robot));
	$nc(bug6348946::robot)->setAutoDelay(10);
	$var($String, lf, "javax.swing.plaf.metal.MetalLookAndFeel"_s);
	$UIManager::setLookAndFeel(lf);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($bug6348946$1));
			$nc(bug6348946::robot)->waitForIdle();
			clickOnSlider();
			$nc(bug6348946::robot)->waitForIdle();
			checkResult();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			stopEDT();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6348946::setupUI() {
	$init(bug6348946);
	$assignStatic(bug6348946::frame, $new($JFrame));
	$assignStatic(bug6348946::panel, $new($JPanel));
	$nc(bug6348946::panel)->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	$nc(bug6348946::panel)->add(static_cast<$Component*>($$new($bug6348946$ParameterTable)), $of($BorderLayout::CENTER));
	$nc($($nc(bug6348946::frame)->getContentPane()))->add(static_cast<$Component*>(bug6348946::panel));
	$nc(bug6348946::frame)->pack();
	$nc(bug6348946::frame)->setLocationRelativeTo(nullptr);
	$nc(bug6348946::frame)->setVisible(true);
}

void bug6348946::clickOnSlider() {
	$init(bug6348946);
	$var($Rectangle, rect, getPanelRectangle());
	double var$0 = $nc(rect)->getX();
	double clickX = var$0 + rect->getWidth() / 4;
	double var$1 = rect->getY();
	double clickY = var$1 + rect->getHeight() / 2;
	$nc(bug6348946::robot)->mouseMove($cast(int32_t, clickX), $cast(int32_t, clickY));
	$nc(bug6348946::robot)->mousePress($InputEvent::BUTTON1_MASK);
	$nc(bug6348946::robot)->mouseRelease($InputEvent::BUTTON1_MASK);
}

void bug6348946::checkResult() {
	$init(bug6348946);
	if (bug6348946::passed) {
		$init($System);
		$nc($System::out)->println("Test passed"_s);
	} else {
		$throwNew($RuntimeException, "The thumb moved to the right instead of the left!"_s);
	}
}

void bug6348946::stopEDT() {
	$init(bug6348946);
	$SwingUtilities::invokeLater($$new($bug6348946$2));
}

$Rectangle* bug6348946::getPanelRectangle() {
	$init(bug6348946);
	$var($RectangleArray, result, $new($RectangleArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug6348946$3, result));
	return result->get(0);
}

void clinit$bug6348946($Class* class$) {
	bug6348946::passed = false;
}

bug6348946::bug6348946() {
}

$Class* bug6348946::load$($String* name, bool initialize) {
	$loadClass(bug6348946, name, initialize, &_bug6348946_ClassInfo_, clinit$bug6348946, allocate$bug6348946);
	return class$;
}

$Class* bug6348946::class$ = nullptr;