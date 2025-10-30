#include <ContextualMenuClearsTextSelectionTest.h>

#include <ContextualMenuClearsTextSelectionTest$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef DISPOSE_ON_CLOSE
#undef NORTH
#undef VK_CONTROL

using $ContextualMenuClearsTextSelectionTest$1 = ::ContextualMenuClearsTextSelectionTest$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $PrintStream = ::java::io::PrintStream;
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
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $WindowConstants = ::javax::swing::WindowConstants;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ContextualMenuClearsTextSelectionTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$0::*)()>(&ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$0::class$ = nullptr;

class ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ContextualMenuClearsTextSelectionTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$1$1::*)()>(&ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ContextualMenuClearsTextSelectionTest::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$2$2::*)()>(&ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$2$2::class$ = nullptr;

class ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$3$3 : public $Runnable {
	$class(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ContextualMenuClearsTextSelectionTest::lambda$main$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$3$3::*)()>(&ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$loadClass(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$3$3::class$ = nullptr;

$FieldInfo _ContextualMenuClearsTextSelectionTest_FieldInfo_[] = {
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(ContextualMenuClearsTextSelectionTest, robot)},
	{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(ContextualMenuClearsTextSelectionTest, p)},
	{"textField", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(ContextualMenuClearsTextSelectionTest, textField)},
	{"popupMenu", "Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE | $STATIC, $staticField(ContextualMenuClearsTextSelectionTest, popupMenu)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(ContextualMenuClearsTextSelectionTest, frame)},
	{"isSelectionCleared", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ContextualMenuClearsTextSelectionTest, isSelectionCleared)},
	{}
};

$MethodInfo _ContextualMenuClearsTextSelectionTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ContextualMenuClearsTextSelectionTest::*)()>(&ContextualMenuClearsTextSelectionTest::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&ContextualMenuClearsTextSelectionTest::createAndShowGUI))},
	{"createPopup", "(Ljavax/swing/JTextField;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JTextField*)>(&ContextualMenuClearsTextSelectionTest::createPopup))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&ContextualMenuClearsTextSelectionTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&ContextualMenuClearsTextSelectionTest::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&ContextualMenuClearsTextSelectionTest::lambda$main$2))},
	{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&ContextualMenuClearsTextSelectionTest::lambda$main$3))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ContextualMenuClearsTextSelectionTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ContextualMenuClearsTextSelectionTest_InnerClassesInfo_[] = {
	{"ContextualMenuClearsTextSelectionTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ContextualMenuClearsTextSelectionTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ContextualMenuClearsTextSelectionTest",
	"java.lang.Object",
	nullptr,
	_ContextualMenuClearsTextSelectionTest_FieldInfo_,
	_ContextualMenuClearsTextSelectionTest_MethodInfo_,
	nullptr,
	nullptr,
	_ContextualMenuClearsTextSelectionTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ContextualMenuClearsTextSelectionTest$1"
};

$Object* allocate$ContextualMenuClearsTextSelectionTest($Class* clazz) {
	return $of($alloc(ContextualMenuClearsTextSelectionTest));
}

$Robot* ContextualMenuClearsTextSelectionTest::robot = nullptr;
$Point* ContextualMenuClearsTextSelectionTest::p = nullptr;
$JTextField* ContextualMenuClearsTextSelectionTest::textField = nullptr;
$JPopupMenu* ContextualMenuClearsTextSelectionTest::popupMenu = nullptr;
$JFrame* ContextualMenuClearsTextSelectionTest::frame = nullptr;
bool ContextualMenuClearsTextSelectionTest::isSelectionCleared = false;

void ContextualMenuClearsTextSelectionTest::init$() {
}

void ContextualMenuClearsTextSelectionTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($System::getProperty("os.name"_s)))->startsWith("Mac"_s)) {
		$nc($System::out)->println("This test is meant for Mac platform only"_s);
		return;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init(ContextualMenuClearsTextSelectionTest);
			$assignStatic(ContextualMenuClearsTextSelectionTest::robot, $new($Robot));
			$nc(ContextualMenuClearsTextSelectionTest::robot)->setAutoDelay(50);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$0)));
			$nc(ContextualMenuClearsTextSelectionTest::robot)->waitForIdle();
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$1$1)));
			$nc(ContextualMenuClearsTextSelectionTest::robot)->delay(200);
			$nc(ContextualMenuClearsTextSelectionTest::robot)->waitForIdle();
			$nc(ContextualMenuClearsTextSelectionTest::robot)->mouseMove($nc(ContextualMenuClearsTextSelectionTest::p)->x + 10, $nc(ContextualMenuClearsTextSelectionTest::p)->y + 10);
			$nc(ContextualMenuClearsTextSelectionTest::robot)->waitForIdle();
			$nc(ContextualMenuClearsTextSelectionTest::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
			$nc(ContextualMenuClearsTextSelectionTest::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
			$nc(ContextualMenuClearsTextSelectionTest::robot)->waitForIdle();
			$nc(ContextualMenuClearsTextSelectionTest::robot)->delay(2000);
			$nc(ContextualMenuClearsTextSelectionTest::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
			$nc(ContextualMenuClearsTextSelectionTest::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
			$nc(ContextualMenuClearsTextSelectionTest::robot)->waitForIdle();
			$nc(ContextualMenuClearsTextSelectionTest::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
			$nc(ContextualMenuClearsTextSelectionTest::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
			$nc(ContextualMenuClearsTextSelectionTest::robot)->waitForIdle();
			$nc(ContextualMenuClearsTextSelectionTest::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
			$nc(ContextualMenuClearsTextSelectionTest::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
			$nc(ContextualMenuClearsTextSelectionTest::robot)->waitForIdle();
			$nc(ContextualMenuClearsTextSelectionTest::robot)->keyPress($KeyEvent::VK_CONTROL);
			$nc(ContextualMenuClearsTextSelectionTest::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
			$nc(ContextualMenuClearsTextSelectionTest::robot)->waitForIdle();
			$nc(ContextualMenuClearsTextSelectionTest::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
			$nc(ContextualMenuClearsTextSelectionTest::robot)->keyRelease($KeyEvent::VK_CONTROL);
			$nc(ContextualMenuClearsTextSelectionTest::robot)->waitForIdle();
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$2$2)));
			if (ContextualMenuClearsTextSelectionTest::isSelectionCleared) {
				$throwNew($RuntimeException, "Text selection is cleared"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init(ContextualMenuClearsTextSelectionTest);
			if (ContextualMenuClearsTextSelectionTest::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$3$3)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ContextualMenuClearsTextSelectionTest::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	$init(ContextualMenuClearsTextSelectionTest);
	$assignStatic(ContextualMenuClearsTextSelectionTest::frame, $new($JFrame));
	$nc(ContextualMenuClearsTextSelectionTest::frame)->setLayout($$new($BorderLayout));
	$nc(ContextualMenuClearsTextSelectionTest::frame)->setSize(200, 200);
	$assignStatic(ContextualMenuClearsTextSelectionTest::textField, $new($JTextField, "word"_s));
	$nc(ContextualMenuClearsTextSelectionTest::textField)->setSize(100, 20);
	$assignStatic(ContextualMenuClearsTextSelectionTest::popupMenu, $new($JPopupMenu));
	$nc(ContextualMenuClearsTextSelectionTest::popupMenu)->add($$new($JMenuItem, "Apple"_s));
	$nc(ContextualMenuClearsTextSelectionTest::popupMenu)->add($$new($JMenuItem, "Pear"_s));
	$nc(ContextualMenuClearsTextSelectionTest::popupMenu)->add($$new($JMenuItem, "Grape"_s));
	createPopup(ContextualMenuClearsTextSelectionTest::textField);
	$init($BorderLayout);
	$nc(ContextualMenuClearsTextSelectionTest::frame)->add(static_cast<$Component*>(ContextualMenuClearsTextSelectionTest::textField), $of($BorderLayout::NORTH));
	$nc(ContextualMenuClearsTextSelectionTest::frame)->setDefaultCloseOperation($WindowConstants::DISPOSE_ON_CLOSE);
	$nc(ContextualMenuClearsTextSelectionTest::frame)->pack();
	$nc(ContextualMenuClearsTextSelectionTest::frame)->setVisible(true);
}

void ContextualMenuClearsTextSelectionTest::createPopup($JTextField* f) {
	$var($MouseAdapter, a, $new($ContextualMenuClearsTextSelectionTest$1));
	$nc(f)->addMouseListener(a);
}

void ContextualMenuClearsTextSelectionTest::lambda$main$3() {
	$init(ContextualMenuClearsTextSelectionTest);
	$nc(ContextualMenuClearsTextSelectionTest::frame)->dispose();
}

void ContextualMenuClearsTextSelectionTest::lambda$main$2() {
	$init(ContextualMenuClearsTextSelectionTest);
	ContextualMenuClearsTextSelectionTest::isSelectionCleared = $nc(ContextualMenuClearsTextSelectionTest::textField)->getSelectedText() == nullptr ? true : false;
}

void ContextualMenuClearsTextSelectionTest::lambda$main$1() {
	$init(ContextualMenuClearsTextSelectionTest);
	$assignStatic(ContextualMenuClearsTextSelectionTest::p, $nc(ContextualMenuClearsTextSelectionTest::textField)->getLocationOnScreen());
	$nc(ContextualMenuClearsTextSelectionTest::textField)->requestFocusInWindow();
}

void ContextualMenuClearsTextSelectionTest::lambda$main$0() {
	createAndShowGUI();
}

ContextualMenuClearsTextSelectionTest::ContextualMenuClearsTextSelectionTest() {
}

$Class* ContextualMenuClearsTextSelectionTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals(ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$3$3::classInfo$.name)) {
			return ContextualMenuClearsTextSelectionTest$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
	}
	$loadClass(ContextualMenuClearsTextSelectionTest, name, initialize, &_ContextualMenuClearsTextSelectionTest_ClassInfo_, allocate$ContextualMenuClearsTextSelectionTest);
	return class$;
}

$Class* ContextualMenuClearsTextSelectionTest::class$ = nullptr;