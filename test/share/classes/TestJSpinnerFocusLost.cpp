#include <TestJSpinnerFocusLost.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InstantiationException = ::java::lang::InstantiationException;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $SpinnerModel = ::javax::swing::SpinnerModel;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

class TestJSpinnerFocusLost$$Lambda$lambda$doTest$0 : public $Runnable {
	$class(TestJSpinnerFocusLost$$Lambda$lambda$doTest$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(TestJSpinnerFocusLost* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$doTest$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJSpinnerFocusLost$$Lambda$lambda$doTest$0>());
	}
	TestJSpinnerFocusLost* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestJSpinnerFocusLost$$Lambda$lambda$doTest$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestJSpinnerFocusLost$$Lambda$lambda$doTest$0, inst$)},
	{}
};
$MethodInfo TestJSpinnerFocusLost$$Lambda$lambda$doTest$0::methodInfos[3] = {
	{"<init>", "(LTestJSpinnerFocusLost;)V", nullptr, $PUBLIC, $method(static_cast<void(TestJSpinnerFocusLost$$Lambda$lambda$doTest$0::*)(TestJSpinnerFocusLost*)>(&TestJSpinnerFocusLost$$Lambda$lambda$doTest$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJSpinnerFocusLost$$Lambda$lambda$doTest$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJSpinnerFocusLost$$Lambda$lambda$doTest$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestJSpinnerFocusLost$$Lambda$lambda$doTest$0::load$($String* name, bool initialize) {
	$loadClass(TestJSpinnerFocusLost$$Lambda$lambda$doTest$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJSpinnerFocusLost$$Lambda$lambda$doTest$0::class$ = nullptr;

class TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1 : public $Runnable {
	$class(TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(TestJSpinnerFocusLost* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$doTest$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1>());
	}
	TestJSpinnerFocusLost* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1, inst$)},
	{}
};
$MethodInfo TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1::methodInfos[3] = {
	{"<init>", "(LTestJSpinnerFocusLost;)V", nullptr, $PUBLIC, $method(static_cast<void(TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1::*)(TestJSpinnerFocusLost*)>(&TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1::load$($String* name, bool initialize) {
	$loadClass(TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1::class$ = nullptr;

class TestJSpinnerFocusLost$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(TestJSpinnerFocusLost$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		TestJSpinnerFocusLost::lambda$main$2(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJSpinnerFocusLost$$Lambda$lambda$main$2$2>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestJSpinnerFocusLost$$Lambda$lambda$main$2$2::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(TestJSpinnerFocusLost$$Lambda$lambda$main$2$2, laf)},
	{}
};
$MethodInfo TestJSpinnerFocusLost$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(TestJSpinnerFocusLost$$Lambda$lambda$main$2$2::*)($UIManager$LookAndFeelInfo*)>(&TestJSpinnerFocusLost$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJSpinnerFocusLost$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJSpinnerFocusLost$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestJSpinnerFocusLost$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(TestJSpinnerFocusLost$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJSpinnerFocusLost$$Lambda$lambda$main$2$2::class$ = nullptr;

class TestJSpinnerFocusLost$$Lambda$lambda$main$3$3 : public $Runnable {
	$class(TestJSpinnerFocusLost$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJSpinnerFocusLost::lambda$main$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJSpinnerFocusLost$$Lambda$lambda$main$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJSpinnerFocusLost$$Lambda$lambda$main$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJSpinnerFocusLost$$Lambda$lambda$main$3$3::*)()>(&TestJSpinnerFocusLost$$Lambda$lambda$main$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJSpinnerFocusLost$$Lambda$lambda$main$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJSpinnerFocusLost$$Lambda$lambda$main$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJSpinnerFocusLost$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$loadClass(TestJSpinnerFocusLost$$Lambda$lambda$main$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJSpinnerFocusLost$$Lambda$lambda$main$3$3::class$ = nullptr;

class TestJSpinnerFocusLost$$Lambda$lambda$main$4$4 : public $Runnable {
	$class(TestJSpinnerFocusLost$$Lambda$lambda$main$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJSpinnerFocusLost::lambda$main$4();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJSpinnerFocusLost$$Lambda$lambda$main$4$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJSpinnerFocusLost$$Lambda$lambda$main$4$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJSpinnerFocusLost$$Lambda$lambda$main$4$4::*)()>(&TestJSpinnerFocusLost$$Lambda$lambda$main$4$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJSpinnerFocusLost$$Lambda$lambda$main$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJSpinnerFocusLost$$Lambda$lambda$main$4$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJSpinnerFocusLost$$Lambda$lambda$main$4$4::load$($String* name, bool initialize) {
	$loadClass(TestJSpinnerFocusLost$$Lambda$lambda$main$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJSpinnerFocusLost$$Lambda$lambda$main$4$4::class$ = nullptr;

$FieldInfo _TestJSpinnerFocusLost_FieldInfo_[] = {
	{"spinner", "Ljavax/swing/JSpinner;", nullptr, 0, $field(TestJSpinnerFocusLost, spinner)},
	{"spinnerGainedFocus", "Z", nullptr, 0, $field(TestJSpinnerFocusLost, spinnerGainedFocus)},
	{"spinnerLostFocus", "Z", nullptr, 0, $field(TestJSpinnerFocusLost, spinnerLostFocus)},
	{"b", "LTestJSpinnerFocusLost;", nullptr, $STATIC, $staticField(TestJSpinnerFocusLost, b)},
	{"p", "Ljava/awt/Point;", nullptr, 0, $field(TestJSpinnerFocusLost, p)},
	{"rect", "Ljava/awt/Rectangle;", nullptr, 0, $field(TestJSpinnerFocusLost, rect)},
	{"robot", "Ljava/awt/Robot;", nullptr, $STATIC, $staticField(TestJSpinnerFocusLost, robot)},
	{"changing", "Z", nullptr, $PRIVATE, $field(TestJSpinnerFocusLost, changing)},
	{}
};

$MethodInfo _TestJSpinnerFocusLost_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJSpinnerFocusLost::*)()>(&TestJSpinnerFocusLost::init$))},
	{"blockTillDisplayed", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Component*)>(&TestJSpinnerFocusLost::blockTillDisplayed))},
	{"doTest", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"lambda$doTest$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TestJSpinnerFocusLost::*)()>(&TestJSpinnerFocusLost::lambda$doTest$0))},
	{"lambda$doTest$1", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(TestJSpinnerFocusLost::*)()>(&TestJSpinnerFocusLost::lambda$doTest$1))},
	{"lambda$main$2", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&TestJSpinnerFocusLost::lambda$main$2))},
	{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestJSpinnerFocusLost::lambda$main$3))},
	{"lambda$main$4", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestJSpinnerFocusLost::lambda$main$4))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestJSpinnerFocusLost::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&TestJSpinnerFocusLost::setLookAndFeel))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TestJSpinnerFocusLost_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestJSpinnerFocusLost",
	"javax.swing.JFrame",
	"javax.swing.event.ChangeListener,java.awt.event.FocusListener",
	_TestJSpinnerFocusLost_FieldInfo_,
	_TestJSpinnerFocusLost_MethodInfo_
};

$Object* allocate$TestJSpinnerFocusLost($Class* clazz) {
	return $of($alloc(TestJSpinnerFocusLost));
}

$String* TestJSpinnerFocusLost::toString() {
	 return this->$JFrame::toString();
}

int32_t TestJSpinnerFocusLost::hashCode() {
	 return this->$JFrame::hashCode();
}

bool TestJSpinnerFocusLost::equals(Object$* arg0) {
	 return this->$JFrame::equals(arg0);
}

$Object* TestJSpinnerFocusLost::clone() {
	 return this->$JFrame::clone();
}

void TestJSpinnerFocusLost::finalize() {
	this->$JFrame::finalize();
}

TestJSpinnerFocusLost* TestJSpinnerFocusLost::b = nullptr;
$Robot* TestJSpinnerFocusLost::robot = nullptr;

void TestJSpinnerFocusLost::blockTillDisplayed($Component* comp) {
	$init(TestJSpinnerFocusLost);
	$var($Point, p, nullptr);
	while (p == nullptr) {
		try {
			$assign(p, $nc(comp)->getLocationOnScreen());
		} catch ($IllegalStateException& e) {
			try {
				$Thread::sleep(1000);
			} catch ($InterruptedException& ie) {
			}
		}
	}
}

void TestJSpinnerFocusLost::init$() {
	$useLocalCurrentObjectStackCache();
	$JFrame::init$();
	this->spinnerGainedFocus = false;
	this->spinnerLostFocus = false;
	this->changing = false;
	$set(this, spinner, $new($JSpinner, $$new($SpinnerNumberModel, 10, 1, 100, 1)));
	$nc(this->spinner)->addChangeListener(this);
	$nc($($nc(($cast($JSpinner$DefaultEditor, $($nc(this->spinner)->getEditor()))))->getTextField()))->addFocusListener(this);
	$nc($(getContentPane()))->add(static_cast<$Component*>(this->spinner));
}

void TestJSpinnerFocusLost::doTest() {
	$useLocalCurrentObjectStackCache();
	blockTillDisplayed(this->spinner);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJSpinnerFocusLost$$Lambda$lambda$doTest$0, this)));
	try {
		$synchronized(this) {
			if (!this->spinnerGainedFocus) {
				$of(this)->wait(2000);
			}
		}
		$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1, this)));
		$nc(TestJSpinnerFocusLost::robot)->delay(1000);
		$nc(TestJSpinnerFocusLost::robot)->mouseMove($nc(this->p)->x + $nc(this->rect)->width - 5, $nc(this->p)->y + 3);
		$nc(TestJSpinnerFocusLost::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
		$nc(TestJSpinnerFocusLost::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
		$synchronized(this) {
			while (!this->spinnerLostFocus) {
				$of(this)->wait(2000);
			}
		}
	} catch ($Exception& ex) {
		ex->printStackTrace();
	}
	if ($nc(($cast($Integer, $($nc(this->spinner)->getValue()))))->intValue() != 11) {
		$nc($System::out)->println($$str({"spinner value "_s, $$str($nc(($cast($Integer, $($nc(this->spinner)->getValue()))))->intValue())}));
		$throwNew($RuntimeException, "Spinner value shouldn\'t be other than 11"_s);
	}
}

void TestJSpinnerFocusLost::stateChanged($ChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->changing) {
		return;
	}
	$var($JSpinner, spinner, $cast($JSpinner, $nc(e)->getSource()));
	int32_t value = $nc(($cast($Integer, $($nc(spinner)->getValue()))))->intValue();
	if (value > 10) {
		this->changing = true;
		$JOptionPane::showMessageDialog(spinner, "10 exceeded"_s);
	}
}

void TestJSpinnerFocusLost::focusGained($FocusEvent* e) {
	$synchronized(this) {
		this->spinnerGainedFocus = true;
		$of(this)->notifyAll();
	}
}

void TestJSpinnerFocusLost::focusLost($FocusEvent* e) {
	$synchronized(this) {
		this->spinnerLostFocus = true;
		$of(this)->notifyAll();
	}
}

void TestJSpinnerFocusLost::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(TestJSpinnerFocusLost);
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported L&F: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void TestJSpinnerFocusLost::main($StringArray* argv) {
	$init(TestJSpinnerFocusLost);
	$useLocalCurrentObjectStackCache();
	$assignStatic(TestJSpinnerFocusLost::robot, $new($Robot));
	$nc(TestJSpinnerFocusLost::robot)->setAutoWaitForIdle(true);
	$nc(TestJSpinnerFocusLost::robot)->setAutoDelay(250);
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$nc($System::out)->println($$str({"Testing L&F: "_s, $($nc(laf)->getClassName())}));
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJSpinnerFocusLost$$Lambda$lambda$main$2$2, laf)));
				{
					$var($Throwable, var$0, nullptr);
					try {
						$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJSpinnerFocusLost$$Lambda$lambda$main$3$3)));
						$nc(TestJSpinnerFocusLost::robot)->waitForIdle();
						$nc(TestJSpinnerFocusLost::b)->doTest();
						$nc(TestJSpinnerFocusLost::robot)->delay(500);
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJSpinnerFocusLost$$Lambda$lambda$main$4$4)));
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
				$nc(TestJSpinnerFocusLost::robot)->delay(1000);
			}
		}
	}
}

void TestJSpinnerFocusLost::lambda$main$4() {
	$init(TestJSpinnerFocusLost);
	if (TestJSpinnerFocusLost::b != nullptr) {
		$nc(TestJSpinnerFocusLost::b)->dispose();
	}
}

void TestJSpinnerFocusLost::lambda$main$3() {
	$init(TestJSpinnerFocusLost);
	$assignStatic(TestJSpinnerFocusLost::b, $new(TestJSpinnerFocusLost));
	$nc(TestJSpinnerFocusLost::b)->pack();
	$nc(TestJSpinnerFocusLost::b)->setLocationRelativeTo(nullptr);
	$nc(TestJSpinnerFocusLost::b)->setVisible(true);
}

void TestJSpinnerFocusLost::lambda$main$2($UIManager$LookAndFeelInfo* laf) {
	$init(TestJSpinnerFocusLost);
	setLookAndFeel(laf);
}

void TestJSpinnerFocusLost::lambda$doTest$1() {
	$set(this, p, $nc(this->spinner)->getLocationOnScreen());
	$set(this, rect, $nc(this->spinner)->getBounds());
}

void TestJSpinnerFocusLost::lambda$doTest$0() {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(($cast($JSpinner$DefaultEditor, $($nc(this->spinner)->getEditor()))))->getTextField()))->requestFocus();
}

TestJSpinnerFocusLost::TestJSpinnerFocusLost() {
}

$Class* TestJSpinnerFocusLost::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestJSpinnerFocusLost$$Lambda$lambda$doTest$0::classInfo$.name)) {
			return TestJSpinnerFocusLost$$Lambda$lambda$doTest$0::load$(name, initialize);
		}
		if (name->equals(TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1::classInfo$.name)) {
			return TestJSpinnerFocusLost$$Lambda$lambda$doTest$1$1::load$(name, initialize);
		}
		if (name->equals(TestJSpinnerFocusLost$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return TestJSpinnerFocusLost$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals(TestJSpinnerFocusLost$$Lambda$lambda$main$3$3::classInfo$.name)) {
			return TestJSpinnerFocusLost$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
		if (name->equals(TestJSpinnerFocusLost$$Lambda$lambda$main$4$4::classInfo$.name)) {
			return TestJSpinnerFocusLost$$Lambda$lambda$main$4$4::load$(name, initialize);
		}
	}
	$loadClass(TestJSpinnerFocusLost, name, initialize, &_TestJSpinnerFocusLost_ClassInfo_, allocate$TestJSpinnerFocusLost);
	return class$;
}

$Class* TestJSpinnerFocusLost::class$ = nullptr;