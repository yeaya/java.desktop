#include <TestBoxFiller.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/ContainerOrderFocusTraversalPolicy.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
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
#include <javax/swing/Box$Filler.h>
#include <javax/swing/Box.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef VK_TAB

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ContainerOrderFocusTraversalPolicy = ::java::awt::ContainerOrderFocusTraversalPolicy;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Box = ::javax::swing::Box;
using $Box$Filler = ::javax::swing::Box$Filler;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TestBoxFiller$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestBoxFiller$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestBoxFiller::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestBoxFiller$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestBoxFiller$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestBoxFiller$$Lambda$lambda$main$0::*)()>(&TestBoxFiller$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestBoxFiller$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestBoxFiller$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestBoxFiller$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestBoxFiller$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestBoxFiller$$Lambda$lambda$main$0::class$ = nullptr;

class TestBoxFiller$$Lambda$dispose$1 : public $Runnable {
	$class(TestBoxFiller$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestBoxFiller$$Lambda$dispose$1>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestBoxFiller$$Lambda$dispose$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestBoxFiller$$Lambda$dispose$1, inst$)},
	{}
};
$MethodInfo TestBoxFiller$$Lambda$dispose$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(TestBoxFiller$$Lambda$dispose$1::*)($Window*)>(&TestBoxFiller$$Lambda$dispose$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestBoxFiller$$Lambda$dispose$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestBoxFiller$$Lambda$dispose$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestBoxFiller$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$loadClass(TestBoxFiller$$Lambda$dispose$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestBoxFiller$$Lambda$dispose$1::class$ = nullptr;

class TestBoxFiller$$Lambda$showFocusOwner$2 : public $PropertyChangeListener {
	$class(TestBoxFiller$$Lambda$showFocusOwner$2, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$() {
	}
	virtual void propertyChange($PropertyChangeEvent* e) override {
		TestBoxFiller::showFocusOwner(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestBoxFiller$$Lambda$showFocusOwner$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestBoxFiller$$Lambda$showFocusOwner$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestBoxFiller$$Lambda$showFocusOwner$2::*)()>(&TestBoxFiller$$Lambda$showFocusOwner$2::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestBoxFiller$$Lambda$showFocusOwner$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestBoxFiller$$Lambda$showFocusOwner$2",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	nullptr,
	methodInfos
};
$Class* TestBoxFiller$$Lambda$showFocusOwner$2::load$($String* name, bool initialize) {
	$loadClass(TestBoxFiller$$Lambda$showFocusOwner$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestBoxFiller$$Lambda$showFocusOwner$2::class$ = nullptr;

$FieldInfo _TestBoxFiller_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestBoxFiller, frame)},
	{}
};

$MethodInfo _TestBoxFiller_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestBoxFiller::*)()>(&TestBoxFiller::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestBoxFiller::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestBoxFiller::main)), "java.lang.Exception"},
	{"showFocusOwner", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($PropertyChangeEvent*)>(&TestBoxFiller::showFocusOwner))},
	{}
};

$ClassInfo _TestBoxFiller_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestBoxFiller",
	"java.lang.Object",
	nullptr,
	_TestBoxFiller_FieldInfo_,
	_TestBoxFiller_MethodInfo_
};

$Object* allocate$TestBoxFiller($Class* clazz) {
	return $of($alloc(TestBoxFiller));
}

$JFrame* TestBoxFiller::frame = nullptr;

void TestBoxFiller::init$() {
}

void TestBoxFiller::showFocusOwner($PropertyChangeEvent* e) {
	$var($Object, c, $nc(e)->getNewValue());
	if ($instanceOf($Box$Filler, c)) {
		$throwNew($RuntimeException, "Box.Filler having focus"_s);
	}
}

void TestBoxFiller::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(100);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestBoxFiller$$Lambda$lambda$main$0)));
			robot->waitForIdle();
			robot->keyPress($KeyEvent::VK_TAB);
			robot->keyRelease($KeyEvent::VK_TAB);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init(TestBoxFiller);
			if (TestBoxFiller::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestBoxFiller$$Lambda$dispose$1, static_cast<$JFrame*>($nc(TestBoxFiller::frame)))));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TestBoxFiller::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	$init(TestBoxFiller);
	$assignStatic(TestBoxFiller::frame, $new($JFrame));
	$var($KeyboardFocusManager, m, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
	$nc(m)->addPropertyChangeListener("focusOwner"_s, static_cast<$PropertyChangeListener*>($$new(TestBoxFiller$$Lambda$showFocusOwner$2)));
	$var($Box, box, $Box::createHorizontalBox());
	$var($JTextField, tf1, $new($JTextField, "Test"_s));
	tf1->setColumns(40);
	$var($JTextField, tf2, $new($JTextField, "Test"_s));
	tf2->setColumns(40);
	$nc(box)->add(static_cast<$Component*>(tf1));
	box->add($($Box::createHorizontalStrut(20)));
	box->add(static_cast<$Component*>(tf2));
	$nc(TestBoxFiller::frame)->setContentPane(box);
	$nc(TestBoxFiller::frame)->setFocusTraversalPolicy($$new($ContainerOrderFocusTraversalPolicy));
	$nc(TestBoxFiller::frame)->pack();
	$nc(TestBoxFiller::frame)->setVisible(true);
	$nc(TestBoxFiller::frame)->setLocationRelativeTo(nullptr);
	tf1->requestFocusInWindow();
}

TestBoxFiller::TestBoxFiller() {
}

$Class* TestBoxFiller::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestBoxFiller$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestBoxFiller$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(TestBoxFiller$$Lambda$dispose$1::classInfo$.name)) {
			return TestBoxFiller$$Lambda$dispose$1::load$(name, initialize);
		}
		if (name->equals(TestBoxFiller$$Lambda$showFocusOwner$2::classInfo$.name)) {
			return TestBoxFiller$$Lambda$showFocusOwner$2::load$(name, initialize);
		}
	}
	$loadClass(TestBoxFiller, name, initialize, &_TestBoxFiller_ClassInfo_, allocate$TestBoxFiller);
	return class$;
}

$Class* TestBoxFiller::class$ = nullptr;