#include <ContextMenuScrollTest.h>

#include <ContextMenuScrollTest$1.h>
#include <ContextMenuScrollTest$2.h>
#include <ContextMenuScrollTest$3.h>
#include <ContextMenuScrollTest$4.h>
#include <ContextMenuScrollTest$5.h>
#include <ContextMenuScrollTest$6.h>
#include <ContextMenuScrollTest$7.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef VK_DELETE

using $ContextMenuScrollTest$1 = ::ContextMenuScrollTest$1;
using $ContextMenuScrollTest$2 = ::ContextMenuScrollTest$2;
using $ContextMenuScrollTest$3 = ::ContextMenuScrollTest$3;
using $ContextMenuScrollTest$4 = ::ContextMenuScrollTest$4;
using $ContextMenuScrollTest$5 = ::ContextMenuScrollTest$5;
using $ContextMenuScrollTest$6 = ::ContextMenuScrollTest$6;
using $ContextMenuScrollTest$7 = ::ContextMenuScrollTest$7;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JSeparator = ::javax::swing::JSeparator;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class ContextMenuScrollTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(ContextMenuScrollTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ContextMenuScrollTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ContextMenuScrollTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ContextMenuScrollTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ContextMenuScrollTest$$Lambda$lambda$main$0::*)()>(&ContextMenuScrollTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ContextMenuScrollTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"ContextMenuScrollTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ContextMenuScrollTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(ContextMenuScrollTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ContextMenuScrollTest$$Lambda$lambda$main$0::class$ = nullptr;

class ContextMenuScrollTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(ContextMenuScrollTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ContextMenuScrollTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ContextMenuScrollTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ContextMenuScrollTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ContextMenuScrollTest$$Lambda$lambda$main$1$1::*)()>(&ContextMenuScrollTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ContextMenuScrollTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"ContextMenuScrollTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ContextMenuScrollTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(ContextMenuScrollTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ContextMenuScrollTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class ContextMenuScrollTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(ContextMenuScrollTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ContextMenuScrollTest::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ContextMenuScrollTest$$Lambda$lambda$main$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ContextMenuScrollTest$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ContextMenuScrollTest$$Lambda$lambda$main$2$2::*)()>(&ContextMenuScrollTest$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ContextMenuScrollTest$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"ContextMenuScrollTest$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ContextMenuScrollTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(ContextMenuScrollTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ContextMenuScrollTest$$Lambda$lambda$main$2$2::class$ = nullptr;

class ContextMenuScrollTest$$Lambda$lambda$main$3$3 : public $Runnable {
	$class(ContextMenuScrollTest$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ContextMenuScrollTest::lambda$main$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ContextMenuScrollTest$$Lambda$lambda$main$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ContextMenuScrollTest$$Lambda$lambda$main$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ContextMenuScrollTest$$Lambda$lambda$main$3$3::*)()>(&ContextMenuScrollTest$$Lambda$lambda$main$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ContextMenuScrollTest$$Lambda$lambda$main$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"ContextMenuScrollTest$$Lambda$lambda$main$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ContextMenuScrollTest$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$loadClass(ContextMenuScrollTest$$Lambda$lambda$main$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ContextMenuScrollTest$$Lambda$lambda$main$3$3::class$ = nullptr;

$FieldInfo _ContextMenuScrollTest_FieldInfo_[] = {
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(ContextMenuScrollTest, robot)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(ContextMenuScrollTest, frame)},
	{"menu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $STATIC, $staticField(ContextMenuScrollTest, menu)},
	{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(ContextMenuScrollTest, p)},
	{"d", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(ContextMenuScrollTest, d)},
	{"popupVisible", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(ContextMenuScrollTest, popupVisible)},
	{}
};

$MethodInfo _ContextMenuScrollTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ContextMenuScrollTest::*)()>(&ContextMenuScrollTest::init$))},
	{"createGUI", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&ContextMenuScrollTest::createGUI))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&ContextMenuScrollTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&ContextMenuScrollTest::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&ContextMenuScrollTest::lambda$main$2))},
	{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&ContextMenuScrollTest::lambda$main$3))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ContextMenuScrollTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _ContextMenuScrollTest_InnerClassesInfo_[] = {
	{"ContextMenuScrollTest$7", nullptr, nullptr, 0},
	{"ContextMenuScrollTest$6", nullptr, nullptr, 0},
	{"ContextMenuScrollTest$5", nullptr, nullptr, 0},
	{"ContextMenuScrollTest$4", nullptr, nullptr, 0},
	{"ContextMenuScrollTest$3", nullptr, nullptr, 0},
	{"ContextMenuScrollTest$2", nullptr, nullptr, 0},
	{"ContextMenuScrollTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ContextMenuScrollTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ContextMenuScrollTest",
	"javax.swing.JPopupMenu",
	nullptr,
	_ContextMenuScrollTest_FieldInfo_,
	_ContextMenuScrollTest_MethodInfo_,
	nullptr,
	nullptr,
	_ContextMenuScrollTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ContextMenuScrollTest$7,ContextMenuScrollTest$6,ContextMenuScrollTest$5,ContextMenuScrollTest$4,ContextMenuScrollTest$3,ContextMenuScrollTest$2,ContextMenuScrollTest$1"
};

$Object* allocate$ContextMenuScrollTest($Class* clazz) {
	return $of($alloc(ContextMenuScrollTest));
}

$Robot* ContextMenuScrollTest::robot = nullptr;
$JFrame* ContextMenuScrollTest::frame = nullptr;
$JMenu* ContextMenuScrollTest::menu = nullptr;
$volatile($Point*) ContextMenuScrollTest::p = nullptr;
$volatile($Dimension*) ContextMenuScrollTest::d = nullptr;
$volatile(bool) ContextMenuScrollTest::popupVisible = false;

void ContextMenuScrollTest::init$() {
	$JPopupMenu::init$();
}

void ContextMenuScrollTest::main($StringArray* args) {
	$init(ContextMenuScrollTest);
	$useLocalCurrentObjectStackCache();
	$assignStatic(ContextMenuScrollTest::robot, $new($Robot));
	$nc(ContextMenuScrollTest::robot)->setAutoDelay(100);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ContextMenuScrollTest$$Lambda$lambda$main$0)));
			$nc(ContextMenuScrollTest::robot)->waitForIdle();
			$nc(ContextMenuScrollTest::robot)->delay(1000);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ContextMenuScrollTest$$Lambda$lambda$main$1$1)));
			$nc($System::out)->println($$str({"p "_s, ContextMenuScrollTest::p, " d "_s, ContextMenuScrollTest::d}));
			$nc(ContextMenuScrollTest::robot)->mouseMove($nc(ContextMenuScrollTest::p)->x + $nc(ContextMenuScrollTest::d)->width / 2, $nc(ContextMenuScrollTest::p)->y + $nc(ContextMenuScrollTest::d)->height / 2);
			$nc(ContextMenuScrollTest::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
			$nc(ContextMenuScrollTest::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
			$nc(ContextMenuScrollTest::robot)->waitForIdle();
			$nc(ContextMenuScrollTest::robot)->delay(1000);
			$nc(ContextMenuScrollTest::robot)->mouseWheel(1);
			$nc(ContextMenuScrollTest::robot)->waitForIdle();
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ContextMenuScrollTest$$Lambda$lambda$main$2$2)));
			if (!ContextMenuScrollTest::popupVisible) {
				$throwNew($RuntimeException, "Popup closes on mouse scroll"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ContextMenuScrollTest$$Lambda$lambda$main$3$3)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ContextMenuScrollTest::createGUI() {
	$init(ContextMenuScrollTest);
	$useLocalCurrentObjectStackCache();
	$assignStatic(ContextMenuScrollTest::frame, $new($JFrame));
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$assignStatic(ContextMenuScrollTest::menu, $new($JMenu, "Menu"_s));
	menuBar->add(ContextMenuScrollTest::menu);
	$var($JMenuItem, undo, $new($JMenuItem, "Undo"_s));
	undo->setEnabled(false);
	undo->setAccelerator($($KeyStroke::getKeyStroke("control Z"_s)));
	undo->addActionListener($$new($ContextMenuScrollTest$1));
	$nc(ContextMenuScrollTest::menu)->add(undo);
	$var($JMenuItem, redo, $new($JMenuItem, "Redo"_s));
	redo->setEnabled(false);
	redo->setAccelerator($($KeyStroke::getKeyStroke("control Y"_s)));
	redo->addActionListener($$new($ContextMenuScrollTest$2));
	$nc(ContextMenuScrollTest::menu)->add(redo);
	$nc(ContextMenuScrollTest::menu)->add(static_cast<$Component*>($$new($JSeparator)));
	$var($JMenuItem, cut, $new($JMenuItem, "Cut"_s));
	cut->setEnabled(false);
	cut->setAccelerator($($KeyStroke::getKeyStroke("control X"_s)));
	cut->addActionListener($$new($ContextMenuScrollTest$3));
	$nc(ContextMenuScrollTest::menu)->add(cut);
	$var($JMenuItem, copy, $new($JMenuItem, "Copy"_s));
	copy->setEnabled(false);
	copy->setAccelerator($($KeyStroke::getKeyStroke("control C"_s)));
	copy->addActionListener($$new($ContextMenuScrollTest$4));
	$nc(ContextMenuScrollTest::menu)->add(copy);
	$var($JMenuItem, paste, $new($JMenuItem, "Paste"_s));
	paste->setEnabled(false);
	paste->setAccelerator($($KeyStroke::getKeyStroke("control V"_s)));
	paste->addActionListener($$new($ContextMenuScrollTest$5));
	$nc(ContextMenuScrollTest::menu)->add(paste);
	$var($JMenuItem, delete$, $new($JMenuItem, "Delete"_s));
	delete$->setEnabled(false);
	delete$->setAccelerator($($KeyStroke::getKeyStroke($KeyEvent::VK_DELETE, 0)));
	delete$->addActionListener($$new($ContextMenuScrollTest$6));
	$nc(ContextMenuScrollTest::menu)->add(delete$);
	$nc(ContextMenuScrollTest::menu)->add(static_cast<$Component*>($$new($JSeparator)));
	$var($JMenuItem, selectAll, $new($JMenuItem, "Select All"_s));
	selectAll->setEnabled(false);
	selectAll->setAccelerator($($KeyStroke::getKeyStroke("control A"_s)));
	selectAll->addActionListener($$new($ContextMenuScrollTest$7));
	$nc(ContextMenuScrollTest::menu)->add(selectAll);
	$nc(ContextMenuScrollTest::frame)->setJMenuBar(menuBar);
	$nc(ContextMenuScrollTest::frame)->pack();
	$nc(ContextMenuScrollTest::frame)->setLocationRelativeTo(nullptr);
	$nc(ContextMenuScrollTest::frame)->setVisible(true);
}

void ContextMenuScrollTest::lambda$main$3() {
	$init(ContextMenuScrollTest);
	$nc(ContextMenuScrollTest::frame)->dispose();
}

void ContextMenuScrollTest::lambda$main$2() {
	$init(ContextMenuScrollTest);
	ContextMenuScrollTest::popupVisible = $nc(ContextMenuScrollTest::menu)->isPopupMenuVisible();
}

void ContextMenuScrollTest::lambda$main$1() {
	$init(ContextMenuScrollTest);
	$assignStatic(ContextMenuScrollTest::p, $nc(ContextMenuScrollTest::menu)->getLocationOnScreen());
	$assignStatic(ContextMenuScrollTest::d, $nc(ContextMenuScrollTest::menu)->getSize());
}

void ContextMenuScrollTest::lambda$main$0() {
	$init(ContextMenuScrollTest);
	createGUI();
}

void clinit$ContextMenuScrollTest($Class* class$) {
	$assignStatic(ContextMenuScrollTest::p, nullptr);
	$assignStatic(ContextMenuScrollTest::d, nullptr);
	ContextMenuScrollTest::popupVisible = false;
}

ContextMenuScrollTest::ContextMenuScrollTest() {
}

$Class* ContextMenuScrollTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ContextMenuScrollTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return ContextMenuScrollTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(ContextMenuScrollTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return ContextMenuScrollTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(ContextMenuScrollTest$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return ContextMenuScrollTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals(ContextMenuScrollTest$$Lambda$lambda$main$3$3::classInfo$.name)) {
			return ContextMenuScrollTest$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
	}
	$loadClass(ContextMenuScrollTest, name, initialize, &_ContextMenuScrollTest_ClassInfo_, clinit$ContextMenuScrollTest, allocate$ContextMenuScrollTest);
	return class$;
}

$Class* ContextMenuScrollTest::class$ = nullptr;