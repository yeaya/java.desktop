#include <TestPopupMenu.h>

#include <TestPopupMenu$TestInternalFrame.h>
#include <TestPopupMenu$TestInternalFrameWPopup.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON3_DOWN_MASK
#undef CTRL_MASK
#undef VK_CONTROL
#undef VK_U
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT

using $TestPopupMenu$TestInternalFrame = ::TestPopupMenu$TestInternalFrame;
using $TestPopupMenu$TestInternalFrameWPopup = ::TestPopupMenu$TestInternalFrameWPopup;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
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
using $JLabel = ::javax::swing::JLabel;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JRootPane = ::javax::swing::JRootPane;
using $JScrollPane = ::javax::swing::JScrollPane;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0 : public $Runnable {
	$class(TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(TestPopupMenu* inst, $JComponent* comp) {
		$set(this, inst$, inst);
		$set(this, comp, comp);
	}
	virtual void run() override {
		$nc(inst$)->lambda$blockTillDisplayed$0(comp);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0>());
	}
	TestPopupMenu* inst$ = nullptr;
	$JComponent* comp = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0, inst$)},
	{"comp", "Ljavax/swing/JComponent;", nullptr, $PUBLIC, $field(TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0, comp)},
	{}
};
$MethodInfo TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0::methodInfos[3] = {
	{"<init>", "(LTestPopupMenu;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0::*)(TestPopupMenu*,$JComponent*)>(&TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0::load$($String* name, bool initialize) {
	$loadClass(TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0::class$ = nullptr;

class TestPopupMenu$$Lambda$lambda$new$1$1 : public $Runnable {
	$class(TestPopupMenu$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(TestPopupMenu* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestPopupMenu$$Lambda$lambda$new$1$1>());
	}
	TestPopupMenu* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestPopupMenu$$Lambda$lambda$new$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestPopupMenu$$Lambda$lambda$new$1$1, inst$)},
	{}
};
$MethodInfo TestPopupMenu$$Lambda$lambda$new$1$1::methodInfos[3] = {
	{"<init>", "(LTestPopupMenu;)V", nullptr, $PUBLIC, $method(static_cast<void(TestPopupMenu$$Lambda$lambda$new$1$1::*)(TestPopupMenu*)>(&TestPopupMenu$$Lambda$lambda$new$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestPopupMenu$$Lambda$lambda$new$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestPopupMenu$$Lambda$lambda$new$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestPopupMenu$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$loadClass(TestPopupMenu$$Lambda$lambda$new$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestPopupMenu$$Lambda$lambda$new$1$1::class$ = nullptr;

class TestPopupMenu$$Lambda$lambda$new$2$2 : public $Runnable {
	$class(TestPopupMenu$$Lambda$lambda$new$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(TestPopupMenu* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestPopupMenu$$Lambda$lambda$new$2$2>());
	}
	TestPopupMenu* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestPopupMenu$$Lambda$lambda$new$2$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestPopupMenu$$Lambda$lambda$new$2$2, inst$)},
	{}
};
$MethodInfo TestPopupMenu$$Lambda$lambda$new$2$2::methodInfos[3] = {
	{"<init>", "(LTestPopupMenu;)V", nullptr, $PUBLIC, $method(static_cast<void(TestPopupMenu$$Lambda$lambda$new$2$2::*)(TestPopupMenu*)>(&TestPopupMenu$$Lambda$lambda$new$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestPopupMenu$$Lambda$lambda$new$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestPopupMenu$$Lambda$lambda$new$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestPopupMenu$$Lambda$lambda$new$2$2::load$($String* name, bool initialize) {
	$loadClass(TestPopupMenu$$Lambda$lambda$new$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestPopupMenu$$Lambda$lambda$new$2$2::class$ = nullptr;

class TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3 : public $ActionListener {
	$class(TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(TestPopupMenu* inst, $JDesktopPane* pane) {
		$set(this, inst$, inst);
		$set(this, pane, pane);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$createAndShowUI$3(pane, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3>());
	}
	TestPopupMenu* inst$ = nullptr;
	$JDesktopPane* pane = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3, inst$)},
	{"pane", "Ljavax/swing/JDesktopPane;", nullptr, $PUBLIC, $field(TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3, pane)},
	{}
};
$MethodInfo TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3::methodInfos[3] = {
	{"<init>", "(LTestPopupMenu;Ljavax/swing/JDesktopPane;)V", nullptr, $PUBLIC, $method(static_cast<void(TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3::*)(TestPopupMenu*,$JDesktopPane*)>(&TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3::load$($String* name, bool initialize) {
	$loadClass(TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3::class$ = nullptr;

$FieldInfo _TestPopupMenu_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(TestPopupMenu, frame)},
	{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(TestPopupMenu, label)},
	{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(TestPopupMenu, p)},
	{"d", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $VOLATILE, $field(TestPopupMenu, d)},
	{}
};

$MethodInfo _TestPopupMenu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestPopupMenu::*)()>(&TestPopupMenu::init$)), "java.lang.Exception"},
	{"blockTillDisplayed", "(Ljavax/swing/JComponent;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"createAndShowUI", "()V", nullptr, $PRIVATE, $method(static_cast<void(TestPopupMenu::*)()>(&TestPopupMenu::createAndShowUI)), "java.lang.Exception"},
	{"lambda$blockTillDisplayed$0", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TestPopupMenu::*)($JComponent*)>(&TestPopupMenu::lambda$blockTillDisplayed$0))},
	{"lambda$createAndShowUI$3", "(Ljavax/swing/JDesktopPane;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TestPopupMenu::*)($JDesktopPane*,$ActionEvent*)>(&TestPopupMenu::lambda$createAndShowUI$3))},
	{"lambda$new$1", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TestPopupMenu::*)()>(&TestPopupMenu::lambda$new$1))},
	{"lambda$new$2", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TestPopupMenu::*)()>(&TestPopupMenu::lambda$new$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestPopupMenu::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestPopupMenu_InnerClassesInfo_[] = {
	{"TestPopupMenu$TestInternalFrame", "TestPopupMenu", "TestInternalFrame", 0},
	{"TestPopupMenu$TestInternalFrameWPopup", "TestPopupMenu", "TestInternalFrameWPopup", 0},
	{}
};

$ClassInfo _TestPopupMenu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestPopupMenu",
	"java.lang.Object",
	nullptr,
	_TestPopupMenu_FieldInfo_,
	_TestPopupMenu_MethodInfo_,
	nullptr,
	nullptr,
	_TestPopupMenu_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestPopupMenu$TestInternalFrame,TestPopupMenu$TestInternalFrameWPopup"
};

$Object* allocate$TestPopupMenu($Class* clazz) {
	return $of($alloc(TestPopupMenu));
}

void TestPopupMenu::main($StringArray* args) {
	$new(TestPopupMenu);
}

void TestPopupMenu::blockTillDisplayed($JComponent* comp) {
	$useLocalCurrentObjectStackCache();
	while (this->p == nullptr) {
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0, this, comp)));
		} catch ($IllegalStateException& e) {
			try {
				$Thread::sleep(1000);
			} catch ($InterruptedException& ie) {
			}
		}
	}
}

void TestPopupMenu::init$() {
	$useLocalCurrentObjectStackCache();
	$set(this, p, nullptr);
	$set(this, d, nullptr);
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(200);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestPopupMenu$$Lambda$lambda$new$1$1, this)));
			blockTillDisplayed(this->label);
			robot->waitForIdle();
			robot->mouseMove($nc(this->p)->x + $nc(this->d)->width / 2, $nc(this->p)->y + $nc(this->d)->height / 2);
			robot->mousePress($InputEvent::BUTTON3_DOWN_MASK);
			robot->mouseRelease($InputEvent::BUTTON3_DOWN_MASK);
			robot->waitForIdle();
			robot->keyPress($KeyEvent::VK_CONTROL);
			robot->keyPress($KeyEvent::VK_U);
			robot->keyRelease($KeyEvent::VK_U);
			robot->keyRelease($KeyEvent::VK_CONTROL);
			robot->waitForIdle();
			$var($JPopupMenu, popup, $nc(this->label)->getComponentPopupMenu());
			if (popup != nullptr && popup->isVisible()) {
				$throwNew($RuntimeException, "Popup is visible in wrong internal frame"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestPopupMenu$$Lambda$lambda$new$2$2, this)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TestPopupMenu::createAndShowUI() {
	$useLocalCurrentObjectStackCache();
	$set(this, frame, $new($JFrame));
	$nc(this->frame)->setTitle("Test Frame"_s);
	$nc(this->frame)->setSize(800, 600);
	$var($JDesktopPane, pane, $new($JDesktopPane));
	$var($TestPopupMenu$TestInternalFrameWPopup, testInternalFrame1, $new($TestPopupMenu$TestInternalFrameWPopup, this));
	pane->add(static_cast<$Component*>(testInternalFrame1));
	testInternalFrame1->setVisible(true);
	$var($JScrollPane, scrollPane, $new($JScrollPane, pane));
	$nc($($nc(this->frame)->getContentPane()))->add(static_cast<$Component*>(scrollPane));
	testInternalFrame1->setMaximum(true);
	$var($ActionListener, var$0, static_cast<$ActionListener*>($new(TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3, this, pane)));
	$nc($($nc(this->frame)->getRootPane()))->registerKeyboardAction(var$0, $($KeyStroke::getKeyStroke($KeyEvent::VK_U, $KeyEvent::CTRL_MASK)), $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT);
	$nc(this->frame)->setVisible(true);
}

void TestPopupMenu::lambda$createAndShowUI$3($JDesktopPane* pane, $ActionEvent* e) {
	$var($TestPopupMenu$TestInternalFrame, testInternalFrame2, $new($TestPopupMenu$TestInternalFrame, this));
	$nc(pane)->add(static_cast<$Component*>(testInternalFrame2));
	try {
		testInternalFrame2->setMaximum(true);
	} catch ($PropertyVetoException& ex) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	}
	testInternalFrame2->setVisible(true);
}

void TestPopupMenu::lambda$new$2() {
	$nc(this->frame)->dispose();
}

void TestPopupMenu::lambda$new$1() {
	try {
		createAndShowUI();
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	}
}

void TestPopupMenu::lambda$blockTillDisplayed$0($JComponent* comp) {
	$set(this, p, $nc(comp)->getLocationOnScreen());
	$set(this, d, comp->getSize());
}

TestPopupMenu::TestPopupMenu() {
}

$Class* TestPopupMenu::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0::classInfo$.name)) {
			return TestPopupMenu$$Lambda$lambda$blockTillDisplayed$0::load$(name, initialize);
		}
		if (name->equals(TestPopupMenu$$Lambda$lambda$new$1$1::classInfo$.name)) {
			return TestPopupMenu$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
		if (name->equals(TestPopupMenu$$Lambda$lambda$new$2$2::classInfo$.name)) {
			return TestPopupMenu$$Lambda$lambda$new$2$2::load$(name, initialize);
		}
		if (name->equals(TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3::classInfo$.name)) {
			return TestPopupMenu$$Lambda$lambda$createAndShowUI$3$3::load$(name, initialize);
		}
	}
	$loadClass(TestPopupMenu, name, initialize, &_TestPopupMenu_ClassInfo_, allocate$TestPopupMenu);
	return class$;
}

$Class* TestPopupMenu::class$ = nullptr;