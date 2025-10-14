#include <DockIconRepaint.h>

#include <DockIconRepaint$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyVetoException.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

#undef BLUE
#undef GREEN
#undef RED

using $DockIconRepaint$1 = ::DockIconRepaint$1;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $Frame = ::java::awt::Frame;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JPanel = ::javax::swing::JPanel;

class DockIconRepaint$$Lambda$createUI : public $Runnable {
	$class(DockIconRepaint$$Lambda$createUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DockIconRepaint::createUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DockIconRepaint$$Lambda$createUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DockIconRepaint$$Lambda$createUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DockIconRepaint$$Lambda$createUI::*)()>(&DockIconRepaint$$Lambda$createUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DockIconRepaint$$Lambda$createUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"DockIconRepaint$$Lambda$createUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* DockIconRepaint$$Lambda$createUI::load$($String* name, bool initialize) {
	$loadClass(DockIconRepaint$$Lambda$createUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DockIconRepaint$$Lambda$createUI::class$ = nullptr;

class DockIconRepaint$$Lambda$lambda$test$0$1 : public $Runnable {
	$class(DockIconRepaint$$Lambda$lambda$test$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DockIconRepaint::lambda$test$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DockIconRepaint$$Lambda$lambda$test$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DockIconRepaint$$Lambda$lambda$test$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DockIconRepaint$$Lambda$lambda$test$0$1::*)()>(&DockIconRepaint$$Lambda$lambda$test$0$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DockIconRepaint$$Lambda$lambda$test$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"DockIconRepaint$$Lambda$lambda$test$0$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* DockIconRepaint$$Lambda$lambda$test$0$1::load$($String* name, bool initialize) {
	$loadClass(DockIconRepaint$$Lambda$lambda$test$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DockIconRepaint$$Lambda$lambda$test$0$1::class$ = nullptr;

class DockIconRepaint$$Lambda$lambda$test$1$2 : public $Runnable {
	$class(DockIconRepaint$$Lambda$lambda$test$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DockIconRepaint::lambda$test$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DockIconRepaint$$Lambda$lambda$test$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DockIconRepaint$$Lambda$lambda$test$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DockIconRepaint$$Lambda$lambda$test$1$2::*)()>(&DockIconRepaint$$Lambda$lambda$test$1$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DockIconRepaint$$Lambda$lambda$test$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"DockIconRepaint$$Lambda$lambda$test$1$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* DockIconRepaint$$Lambda$lambda$test$1$2::load$($String* name, bool initialize) {
	$loadClass(DockIconRepaint$$Lambda$lambda$test$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DockIconRepaint$$Lambda$lambda$test$1$2::class$ = nullptr;

$FieldInfo _DockIconRepaint_FieldInfo_[] = {
	{"color", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(DockIconRepaint, color)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(DockIconRepaint, frame)},
	{"jif", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $STATIC, $staticField(DockIconRepaint, jif)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(DockIconRepaint, robot)},
	{"iconLoc", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(DockIconRepaint, iconLoc)},
	{"iconBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(DockIconRepaint, iconBounds)},
	{}
};

$MethodInfo _DockIconRepaint_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DockIconRepaint::*)()>(&DockIconRepaint::init$))},
	{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&DockIconRepaint::createUI))},
	{"lambda$test$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&DockIconRepaint::lambda$test$0))},
	{"lambda$test$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&DockIconRepaint::lambda$test$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DockIconRepaint::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&DockIconRepaint::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _DockIconRepaint_InnerClassesInfo_[] = {
	{"DockIconRepaint$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DockIconRepaint_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"DockIconRepaint",
	"java.lang.Object",
	nullptr,
	_DockIconRepaint_FieldInfo_,
	_DockIconRepaint_MethodInfo_,
	nullptr,
	nullptr,
	_DockIconRepaint_InnerClassesInfo_,
	nullptr,
	nullptr,
	"DockIconRepaint$1"
};

$Object* allocate$DockIconRepaint($Class* clazz) {
	return $of($alloc(DockIconRepaint));
}

$volatile($Color*) DockIconRepaint::color = nullptr;
$JFrame* DockIconRepaint::frame = nullptr;
$JInternalFrame* DockIconRepaint::jif = nullptr;
$Robot* DockIconRepaint::robot = nullptr;
$Point* DockIconRepaint::iconLoc = nullptr;
$Rectangle* DockIconRepaint::iconBounds = nullptr;

void DockIconRepaint::init$() {
}

void DockIconRepaint::main($StringArray* args) {
	$init(DockIconRepaint);
	$assignStatic(DockIconRepaint::robot, $new($Robot));
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(DockIconRepaint$$Lambda$createUI)));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(DockIconRepaint::robot)->waitForIdle();
			$init($Color);
			$assignStatic(DockIconRepaint::color, $Color::BLUE);
			test();
			$assignStatic(DockIconRepaint::color, $Color::RED);
			test();
			$assignStatic(DockIconRepaint::color, $Color::GREEN);
			test();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(DockIconRepaint::frame)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void DockIconRepaint::test() {
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(DockIconRepaint$$Lambda$lambda$test$0$1)));
	$init(DockIconRepaint);
	$nc(DockIconRepaint::robot)->waitForIdle();
	$Thread::sleep(1000);
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(DockIconRepaint$$Lambda$lambda$test$1$2)));
	$nc(DockIconRepaint::robot)->waitForIdle();
	$Thread::sleep(1000);
	$var($Color, c, $nc(DockIconRepaint::robot)->getPixelColor($nc(DockIconRepaint::iconLoc)->x + $nc(DockIconRepaint::iconBounds)->width / 2, $nc(DockIconRepaint::iconLoc)->y + $nc(DockIconRepaint::iconBounds)->height / 2));
	int32_t var$0 = $nc(c)->getRGB();
	if (var$0 != $nc(DockIconRepaint::color)->getRGB()) {
		$init($System);
		$nc($System::err)->println($$str({"Exp: "_s, $($Integer::toHexString($nc(DockIconRepaint::color)->getRGB()))}));
		$nc($System::err)->println($$str({"Actual: "_s, $($Integer::toHexString(c->getRGB()))}));
		$throwNew($RuntimeException, "Wrong color."_s);
	}
}

void DockIconRepaint::createUI() {
	$init(DockIconRepaint);
	$assignStatic(DockIconRepaint::frame, $new($JFrame));
	$nc(DockIconRepaint::frame)->setUndecorated(true);
	$nc(DockIconRepaint::frame)->setSize(300, 300);
	$nc(DockIconRepaint::frame)->setLocationRelativeTo(nullptr);
	$var($JDesktopPane, pane, $new($JDesktopPane));
	$var($JPanel, panel, $new($DockIconRepaint$1));
	$assignStatic(DockIconRepaint::jif, $new($JInternalFrame));
	$nc(DockIconRepaint::jif)->add(static_cast<$Component*>(panel));
	$nc(DockIconRepaint::jif)->setVisible(true);
	$nc(DockIconRepaint::jif)->setSize(300, 300);
	pane->add(static_cast<$Component*>(DockIconRepaint::jif));
	$nc(DockIconRepaint::frame)->add(static_cast<$Component*>(pane));
	$nc(DockIconRepaint::frame)->setVisible(true);
}

void DockIconRepaint::lambda$test$1() {
	try {
		$init(DockIconRepaint);
		$nc(DockIconRepaint::jif)->setIcon(true);
	} catch ($PropertyVetoException&) {
		$var($PropertyVetoException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$init(DockIconRepaint);
	$assignStatic(DockIconRepaint::iconLoc, $nc($($nc(DockIconRepaint::jif)->getDesktopIcon()))->getLocationOnScreen());
	$assignStatic(DockIconRepaint::iconBounds, $nc($($nc(DockIconRepaint::jif)->getDesktopIcon()))->getBounds());
}

void DockIconRepaint::lambda$test$0() {
	try {
		$init(DockIconRepaint);
		$nc(DockIconRepaint::jif)->setIcon(false);
		$nc(DockIconRepaint::jif)->setMaximum(true);
	} catch ($PropertyVetoException&) {
		$var($PropertyVetoException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

DockIconRepaint::DockIconRepaint() {
}

$Class* DockIconRepaint::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DockIconRepaint$$Lambda$createUI::classInfo$.name)) {
			return DockIconRepaint$$Lambda$createUI::load$(name, initialize);
		}
		if (name->equals(DockIconRepaint$$Lambda$lambda$test$0$1::classInfo$.name)) {
			return DockIconRepaint$$Lambda$lambda$test$0$1::load$(name, initialize);
		}
		if (name->equals(DockIconRepaint$$Lambda$lambda$test$1$2::classInfo$.name)) {
			return DockIconRepaint$$Lambda$lambda$test$1$2::load$(name, initialize);
		}
	}
	$loadClass(DockIconRepaint, name, initialize, &_DockIconRepaint_ClassInfo_, allocate$DockIconRepaint);
	return class$;
}

$Class* DockIconRepaint::class$ = nullptr;