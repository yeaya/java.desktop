#include <bug6209975.h>

#include <bug6209975$1.h>
#include <bug6209975$2.h>
#include <bug6209975$3.h>
#include <bug6209975$MyIcon.h>
#include <bug6209975$ReturnObject.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef EXIT_ON_CLOSE
#undef LEADING
#undef LEFT_TO_RIGHT
#undef RO1
#undef RO2
#undef TRAILING

using $PointArray = $Array<::java::awt::Point>;
using $bug6209975$1 = ::bug6209975$1;
using $bug6209975$2 = ::bug6209975$2;
using $bug6209975$3 = ::bug6209975$3;
using $bug6209975$MyIcon = ::bug6209975$MyIcon;
using $bug6209975$ReturnObject = ::bug6209975$ReturnObject;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug6209975$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6209975$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6209975::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6209975$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6209975$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6209975$$Lambda$lambda$main$0::*)()>(&bug6209975$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6209975$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6209975$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6209975$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6209975$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6209975$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug6209975_FieldInfo_[] = {
	{"RO1", "Lbug6209975$ReturnObject;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6209975, RO1)},
	{"RO2", "Lbug6209975$ReturnObject;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6209975, RO2)},
	{"menu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $STATIC, $staticField(bug6209975, menu)},
	{"button", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(bug6209975, button)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6209975, frame)},
	{}
};

$MethodInfo _bug6209975_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6209975::*)()>(&bug6209975::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6209975::createAndShowGUI))},
	{"getButtonClickPoint", "()Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Point*(*)()>(&bug6209975::getButtonClickPoint)), "java.lang.Exception"},
	{"getMenuClickPoint", "()Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Point*(*)()>(&bug6209975::getMenuClickPoint)), "java.lang.Exception"},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6209975::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6209975::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6209975_InnerClassesInfo_[] = {
	{"bug6209975$MyIcon", "bug6209975", "MyIcon", $PUBLIC | $STATIC},
	{"bug6209975$ReturnObject", "bug6209975", "ReturnObject", $PUBLIC | $STATIC},
	{"bug6209975$3", nullptr, nullptr, 0},
	{"bug6209975$2", nullptr, nullptr, 0},
	{"bug6209975$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6209975_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6209975",
	"java.lang.Object",
	nullptr,
	_bug6209975_FieldInfo_,
	_bug6209975_MethodInfo_,
	nullptr,
	nullptr,
	_bug6209975_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6209975$MyIcon,bug6209975$ReturnObject,bug6209975$3,bug6209975$2,bug6209975$1"
};

$Object* allocate$bug6209975($Class* clazz) {
	return $of($alloc(bug6209975));
}

$bug6209975$ReturnObject* bug6209975::RO1 = nullptr;
$bug6209975$ReturnObject* bug6209975::RO2 = nullptr;
$JMenu* bug6209975::menu = nullptr;
$JButton* bug6209975::button = nullptr;
$JFrame* bug6209975::frame = nullptr;

void bug6209975::init$() {
}

void bug6209975::main($StringArray* args) {
	$init(bug6209975);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(500);
			$SwingUtilities::invokeAndWait($$new($bug6209975$1));
			robot->waitForIdle();
			$var($Point, clickPoint, getButtonClickPoint());
			robot->mouseMove($nc(clickPoint)->x, clickPoint->y);
			robot->mousePress($InputEvent::BUTTON1_MASK);
			robot->mouseRelease($InputEvent::BUTTON1_MASK);
			robot->waitForIdle();
			$assign(clickPoint, getMenuClickPoint());
			robot->mouseMove($nc(clickPoint)->x, clickPoint->y);
			robot->mousePress($InputEvent::BUTTON1_MASK);
			robot->mouseRelease($InputEvent::BUTTON1_MASK);
			robot->waitForIdle();
			if ($nc(bug6209975::RO1)->itsValue <= $nc(bug6209975::RO2)->itsValue) {
				$throwNew($RuntimeException, "Offset if the second icon is invalid."_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (bug6209975::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6209975$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Point* bug6209975::getButtonClickPoint() {
	$init(bug6209975);
	$useLocalCurrentObjectStackCache();
	$var($PointArray, result, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug6209975$2, result));
	return result->get(0);
}

$Point* bug6209975::getMenuClickPoint() {
	$init(bug6209975);
	$useLocalCurrentObjectStackCache();
	$var($PointArray, result, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug6209975$3, result));
	return result->get(0);
}

void bug6209975::createAndShowGUI() {
	$init(bug6209975);
	$useLocalCurrentObjectStackCache();
	$assignStatic(bug6209975::frame, $new($JFrame, "Test6209975"_s));
	$nc(bug6209975::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$init($ComponentOrientation);
	$nc(bug6209975::frame)->applyComponentOrientation($ComponentOrientation::LEFT_TO_RIGHT);
	$nc(bug6209975::frame)->setLayout($$new($BorderLayout));
	$assignStatic(bug6209975::button, $new($JButton, "Focus holder"_s));
	$nc(bug6209975::frame)->add(static_cast<$Component*>(bug6209975::button));
	$var($JMenuBar, mb, $new($JMenuBar));
	$assignStatic(bug6209975::menu, $new($JMenu, "File"_s));
	$var($JMenuItem, item, nullptr);
	$assign(item, $new($JMenuItem, "Just a menu item"_s));
	item->setIcon($$new($bug6209975$MyIcon, bug6209975::RO1));
	item->setHorizontalTextPosition($SwingConstants::LEADING);
	$nc(bug6209975::menu)->add(item);
	$assign(item, $new($JMenuItem, "Menu Item with another icon"_s));
	item->setIcon($$new($bug6209975$MyIcon, bug6209975::RO2));
	item->setHorizontalTextPosition($SwingConstants::TRAILING);
	$nc(bug6209975::menu)->add(item);
	mb->add(bug6209975::menu);
	$nc(bug6209975::frame)->setJMenuBar(mb);
	$nc(bug6209975::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(bug6209975::frame)->pack();
	$nc(bug6209975::frame)->setLocation(400, 300);
	$nc(bug6209975::frame)->setVisible(true);
}

void bug6209975::lambda$main$0() {
	$init(bug6209975);
	$nc(bug6209975::frame)->dispose();
}

void clinit$bug6209975($Class* class$) {
	$assignStatic(bug6209975::RO1, $new($bug6209975$ReturnObject));
	$assignStatic(bug6209975::RO2, $new($bug6209975$ReturnObject));
}

bug6209975::bug6209975() {
}

$Class* bug6209975::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6209975$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6209975$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug6209975, name, initialize, &_bug6209975_ClassInfo_, clinit$bug6209975, allocate$bug6209975);
	return class$;
}

$Class* bug6209975::class$ = nullptr;