#include <TestButtonGroupFocusTraversal.h>

#include <TestButtonGroupFocusTraversal$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef VK_DOWN
#undef VK_LEFT
#undef VK_RIGHT
#undef VK_SHIFT
#undef VK_TAB
#undef VK_UP

using $TestButtonGroupFocusTraversal$1 = ::TestButtonGroupFocusTraversal$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TestButtonGroupFocusTraversal$$Lambda$requestFocus : public $Runnable {
	$class(TestButtonGroupFocusTraversal$$Lambda$requestFocus, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JComponent* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->requestFocus();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestButtonGroupFocusTraversal$$Lambda$requestFocus>());
	}
	$JComponent* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestButtonGroupFocusTraversal$$Lambda$requestFocus::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestButtonGroupFocusTraversal$$Lambda$requestFocus, inst$)},
	{}
};
$MethodInfo TestButtonGroupFocusTraversal$$Lambda$requestFocus::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(TestButtonGroupFocusTraversal$$Lambda$requestFocus::*)($JComponent*)>(&TestButtonGroupFocusTraversal$$Lambda$requestFocus::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestButtonGroupFocusTraversal$$Lambda$requestFocus::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestButtonGroupFocusTraversal$$Lambda$requestFocus",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestButtonGroupFocusTraversal$$Lambda$requestFocus::load$($String* name, bool initialize) {
	$loadClass(TestButtonGroupFocusTraversal$$Lambda$requestFocus, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestButtonGroupFocusTraversal$$Lambda$requestFocus::class$ = nullptr;

class TestButtonGroupFocusTraversal$$Lambda$dispose$1 : public $Runnable {
	$class(TestButtonGroupFocusTraversal$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestButtonGroupFocusTraversal$$Lambda$dispose$1>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestButtonGroupFocusTraversal$$Lambda$dispose$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestButtonGroupFocusTraversal$$Lambda$dispose$1, inst$)},
	{}
};
$MethodInfo TestButtonGroupFocusTraversal$$Lambda$dispose$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(TestButtonGroupFocusTraversal$$Lambda$dispose$1::*)($Window*)>(&TestButtonGroupFocusTraversal$$Lambda$dispose$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestButtonGroupFocusTraversal$$Lambda$dispose$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestButtonGroupFocusTraversal$$Lambda$dispose$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestButtonGroupFocusTraversal$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$loadClass(TestButtonGroupFocusTraversal$$Lambda$dispose$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestButtonGroupFocusTraversal$$Lambda$dispose$1::class$ = nullptr;

$FieldInfo _TestButtonGroupFocusTraversal_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, frame)},
	{"textFieldFirst", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, textFieldFirst)},
	{"textFieldLast", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, textFieldLast)},
	{"toggleButton1", "Ljavax/swing/JToggleButton;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, toggleButton1)},
	{"toggleButton2", "Ljavax/swing/JToggleButton;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, toggleButton2)},
	{"checkBox1", "Ljavax/swing/JCheckBox;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, checkBox1)},
	{"checkBox2", "Ljavax/swing/JCheckBox;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, checkBox2)},
	{"toggleButtonActionPerformed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, toggleButtonActionPerformed)},
	{"checkboxActionPerformed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, checkboxActionPerformed)},
	{"radioButton1", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, radioButton1)},
	{"radioButton2", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, radioButton2)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, robot)},
	{}
};

$MethodInfo _TestButtonGroupFocusTraversal_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestButtonGroupFocusTraversal::*)()>(&TestButtonGroupFocusTraversal::init$))},
	{"blockTillDisplayed", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Component*)>(&TestButtonGroupFocusTraversal::blockTillDisplayed))},
	{"checkCheckboxActionPerformed", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestButtonGroupFocusTraversal::checkCheckboxActionPerformed))},
	{"checkFocusedComponent", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Component*)>(&TestButtonGroupFocusTraversal::checkFocusedComponent))},
	{"checkToggleButtonActionPerformed", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestButtonGroupFocusTraversal::checkToggleButtonActionPerformed))},
	{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestButtonGroupFocusTraversal::createUI)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestButtonGroupFocusTraversal::main)), "java.lang.Exception"},
	{"pressKey", "([I)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $method(static_cast<void(*)($ints*)>(&TestButtonGroupFocusTraversal::pressKey))},
	{}
};

$InnerClassInfo _TestButtonGroupFocusTraversal_InnerClassesInfo_[] = {
	{"TestButtonGroupFocusTraversal$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestButtonGroupFocusTraversal_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestButtonGroupFocusTraversal",
	"java.lang.Object",
	nullptr,
	_TestButtonGroupFocusTraversal_FieldInfo_,
	_TestButtonGroupFocusTraversal_MethodInfo_,
	nullptr,
	nullptr,
	_TestButtonGroupFocusTraversal_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestButtonGroupFocusTraversal$1,TestButtonGroupFocusTraversal$1$4,TestButtonGroupFocusTraversal$1$3,TestButtonGroupFocusTraversal$1$2,TestButtonGroupFocusTraversal$1$1"
};

$Object* allocate$TestButtonGroupFocusTraversal($Class* clazz) {
	return $of($alloc(TestButtonGroupFocusTraversal));
}

$JFrame* TestButtonGroupFocusTraversal::frame = nullptr;
$JTextField* TestButtonGroupFocusTraversal::textFieldFirst = nullptr;
$JTextField* TestButtonGroupFocusTraversal::textFieldLast = nullptr;
$JToggleButton* TestButtonGroupFocusTraversal::toggleButton1 = nullptr;
$JToggleButton* TestButtonGroupFocusTraversal::toggleButton2 = nullptr;
$JCheckBox* TestButtonGroupFocusTraversal::checkBox1 = nullptr;
$JCheckBox* TestButtonGroupFocusTraversal::checkBox2 = nullptr;
bool TestButtonGroupFocusTraversal::toggleButtonActionPerformed = false;
bool TestButtonGroupFocusTraversal::checkboxActionPerformed = false;
$JRadioButton* TestButtonGroupFocusTraversal::radioButton1 = nullptr;
$JRadioButton* TestButtonGroupFocusTraversal::radioButton2 = nullptr;
$Robot* TestButtonGroupFocusTraversal::robot = nullptr;

void TestButtonGroupFocusTraversal::init$() {
}

void TestButtonGroupFocusTraversal::blockTillDisplayed($Component* comp) {
	$var($Point, p, nullptr);
	while (p == nullptr) {
		try {
			$assign(p, $nc(comp)->getLocationOnScreen());
		} catch ($IllegalStateException& e) {
			try {
				$Thread::sleep(500);
			} catch ($InterruptedException& ie) {
			}
		}
	}
}

void TestButtonGroupFocusTraversal::createUI() {
	$SwingUtilities::invokeAndWait($$new($TestButtonGroupFocusTraversal$1));
}

void TestButtonGroupFocusTraversal::pressKey($ints* keys) {
	int32_t num = $nc(keys)->length;
	for (int32_t i = 0; i < num; ++i) {
		$init(TestButtonGroupFocusTraversal);
		$nc(TestButtonGroupFocusTraversal::robot)->keyPress(keys->get(i));
	}
	for (int32_t i = num; i > 0; --i) {
		$init(TestButtonGroupFocusTraversal);
		$nc(TestButtonGroupFocusTraversal::robot)->keyRelease(keys->get(i - 1));
	}
	$init(TestButtonGroupFocusTraversal);
	$nc(TestButtonGroupFocusTraversal::robot)->waitForIdle();
	$nc(TestButtonGroupFocusTraversal::robot)->delay(200);
}

void TestButtonGroupFocusTraversal::checkFocusedComponent($Component* component) {
	$useLocalCurrentObjectStackCache();
	$var($Component, focusedComponent, $nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner());
	if (!$nc($of(focusedComponent))->equals(component)) {
		$nc($System::out)->println($of(component));
		$nc($System::out)->println($of(focusedComponent));
		$throwNew($RuntimeException, "Wrong Component Selected"_s);
	}
}

void TestButtonGroupFocusTraversal::checkToggleButtonActionPerformed() {
	$init(TestButtonGroupFocusTraversal);
	if (TestButtonGroupFocusTraversal::toggleButtonActionPerformed) {
		$throwNew($RuntimeException, "Toggle Button Action should not beperformed"_s);
	}
}

void TestButtonGroupFocusTraversal::checkCheckboxActionPerformed() {
	$init(TestButtonGroupFocusTraversal);
	if (TestButtonGroupFocusTraversal::toggleButtonActionPerformed) {
		$throwNew($RuntimeException, "Checkbox Action should not beperformed"_s);
	}
}

void TestButtonGroupFocusTraversal::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init(TestButtonGroupFocusTraversal);
	$assignStatic(TestButtonGroupFocusTraversal::robot, $new($Robot));
	$nc(TestButtonGroupFocusTraversal::robot)->setAutoDelay(100);
	$var($UIManager$LookAndFeelInfoArray, infos, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, infos);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, info, arr$->get(i$));
			{
				$UIManager::setLookAndFeel($($nc(info)->getClassName()));
				$nc($System::out)->println($($nc(info)->getClassName()));
				{
					$var($Throwable, var$0, nullptr);
					try {
						createUI();
						$nc(TestButtonGroupFocusTraversal::robot)->waitForIdle();
						$nc(TestButtonGroupFocusTraversal::robot)->delay(200);
						blockTillDisplayed(TestButtonGroupFocusTraversal::frame);
						$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestButtonGroupFocusTraversal$$Lambda$requestFocus, static_cast<$JTextField*>($nc(TestButtonGroupFocusTraversal::textFieldFirst)))));
						if (!$nc($of(TestButtonGroupFocusTraversal::textFieldFirst))->equals($($nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->getFocusOwner()))) {
							try {
								$Thread::sleep(100);
							} catch ($InterruptedException& e) {
								e->printStackTrace();
							}
							$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestButtonGroupFocusTraversal$$Lambda$requestFocus, static_cast<$JTextField*>($nc(TestButtonGroupFocusTraversal::textFieldFirst)))));
						}
						$nc(TestButtonGroupFocusTraversal::robot)->waitForIdle();
						$nc(TestButtonGroupFocusTraversal::robot)->delay(200);
						pressKey($$new($ints, {$KeyEvent::VK_TAB}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::toggleButton2);
						pressKey($$new($ints, {$KeyEvent::VK_TAB}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::radioButton2);
						pressKey($$new($ints, {$KeyEvent::VK_TAB}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::checkBox2);
						pressKey($$new($ints, {$KeyEvent::VK_TAB}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::textFieldLast);
						pressKey($$new($ints, {
							$KeyEvent::VK_SHIFT,
							$KeyEvent::VK_TAB
						}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::checkBox2);
						pressKey($$new($ints, {
							$KeyEvent::VK_SHIFT,
							$KeyEvent::VK_TAB
						}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::radioButton2);
						pressKey($$new($ints, {
							$KeyEvent::VK_SHIFT,
							$KeyEvent::VK_TAB
						}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::toggleButton2);
						pressKey($$new($ints, {
							$KeyEvent::VK_SHIFT,
							$KeyEvent::VK_TAB
						}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::textFieldFirst);
						pressKey($$new($ints, {$KeyEvent::VK_TAB}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::toggleButton2);
						pressKey($$new($ints, {$KeyEvent::VK_LEFT}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::toggleButton1);
						checkToggleButtonActionPerformed();
						pressKey($$new($ints, {$KeyEvent::VK_RIGHT}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::toggleButton2);
						checkToggleButtonActionPerformed();
						pressKey($$new($ints, {$KeyEvent::VK_UP}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::toggleButton1);
						checkToggleButtonActionPerformed();
						pressKey($$new($ints, {$KeyEvent::VK_DOWN}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::toggleButton2);
						checkToggleButtonActionPerformed();
						pressKey($$new($ints, {$KeyEvent::VK_TAB}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::radioButton2);
						pressKey($$new($ints, {$KeyEvent::VK_LEFT}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::radioButton1);
						pressKey($$new($ints, {$KeyEvent::VK_RIGHT}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::radioButton2);
						pressKey($$new($ints, {$KeyEvent::VK_UP}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::radioButton1);
						pressKey($$new($ints, {$KeyEvent::VK_DOWN}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::radioButton2);
						pressKey($$new($ints, {$KeyEvent::VK_TAB}));
						checkFocusedComponent(TestButtonGroupFocusTraversal::checkBox2);
						pressKey($$new($ints, {$KeyEvent::VK_LEFT}));
						checkCheckboxActionPerformed();
						checkFocusedComponent(TestButtonGroupFocusTraversal::checkBox1);
						pressKey($$new($ints, {$KeyEvent::VK_RIGHT}));
						checkCheckboxActionPerformed();
						checkFocusedComponent(TestButtonGroupFocusTraversal::checkBox2);
						pressKey($$new($ints, {$KeyEvent::VK_UP}));
						checkCheckboxActionPerformed();
						checkFocusedComponent(TestButtonGroupFocusTraversal::checkBox1);
						pressKey($$new($ints, {$KeyEvent::VK_DOWN}));
						checkCheckboxActionPerformed();
						checkFocusedComponent(TestButtonGroupFocusTraversal::checkBox2);
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						if (TestButtonGroupFocusTraversal::frame != nullptr) {
							$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestButtonGroupFocusTraversal$$Lambda$dispose$1, static_cast<$JFrame*>($nc(TestButtonGroupFocusTraversal::frame)))));
						}
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		}
	}
}

TestButtonGroupFocusTraversal::TestButtonGroupFocusTraversal() {
}

$Class* TestButtonGroupFocusTraversal::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestButtonGroupFocusTraversal$$Lambda$requestFocus::classInfo$.name)) {
			return TestButtonGroupFocusTraversal$$Lambda$requestFocus::load$(name, initialize);
		}
		if (name->equals(TestButtonGroupFocusTraversal$$Lambda$dispose$1::classInfo$.name)) {
			return TestButtonGroupFocusTraversal$$Lambda$dispose$1::load$(name, initialize);
		}
	}
	$loadClass(TestButtonGroupFocusTraversal, name, initialize, &_TestButtonGroupFocusTraversal_ClassInfo_, allocate$TestButtonGroupFocusTraversal);
	return class$;
}

$Class* TestButtonGroupFocusTraversal::class$ = nullptr;