#include <WindowsComboBoxSizeTest.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
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
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class WindowsComboBoxSizeTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(WindowsComboBoxSizeTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		WindowsComboBoxSizeTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsComboBoxSizeTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsComboBoxSizeTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsComboBoxSizeTest$$Lambda$lambda$main$0::*)()>(&WindowsComboBoxSizeTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsComboBoxSizeTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"WindowsComboBoxSizeTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* WindowsComboBoxSizeTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(WindowsComboBoxSizeTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsComboBoxSizeTest$$Lambda$lambda$main$0::class$ = nullptr;

class WindowsComboBoxSizeTest$$Lambda$dispose$1 : public $Runnable {
	$class(WindowsComboBoxSizeTest$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsComboBoxSizeTest$$Lambda$dispose$1>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WindowsComboBoxSizeTest$$Lambda$dispose$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WindowsComboBoxSizeTest$$Lambda$dispose$1, inst$)},
	{}
};
$MethodInfo WindowsComboBoxSizeTest$$Lambda$dispose$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsComboBoxSizeTest$$Lambda$dispose$1::*)($Window*)>(&WindowsComboBoxSizeTest$$Lambda$dispose$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsComboBoxSizeTest$$Lambda$dispose$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"WindowsComboBoxSizeTest$$Lambda$dispose$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* WindowsComboBoxSizeTest$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$loadClass(WindowsComboBoxSizeTest$$Lambda$dispose$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsComboBoxSizeTest$$Lambda$dispose$1::class$ = nullptr;

class WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2 : public $Runnable {
	$class(WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		WindowsComboBoxSizeTest::lambda$test$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2::*)()>(&WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2::load$($String* name, bool initialize) {
	$loadClass(WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2::class$ = nullptr;

$FieldInfo _WindowsComboBoxSizeTest_FieldInfo_[] = {
	{"textField", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsComboBoxSizeTest, textField)},
	{"comboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(WindowsComboBoxSizeTest, comboBox)},
	{"comboBoxEd", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(WindowsComboBoxSizeTest, comboBoxEd)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsComboBoxSizeTest, frame)},
	{}
};

$MethodInfo _WindowsComboBoxSizeTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsComboBoxSizeTest::*)()>(&WindowsComboBoxSizeTest::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&WindowsComboBoxSizeTest::lambda$main$0))},
	{"lambda$test$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&WindowsComboBoxSizeTest::lambda$test$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WindowsComboBoxSizeTest::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&WindowsComboBoxSizeTest::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _WindowsComboBoxSizeTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"WindowsComboBoxSizeTest",
	"java.lang.Object",
	nullptr,
	_WindowsComboBoxSizeTest_FieldInfo_,
	_WindowsComboBoxSizeTest_MethodInfo_
};

$Object* allocate$WindowsComboBoxSizeTest($Class* clazz) {
	return $of($alloc(WindowsComboBoxSizeTest));
}

$JTextField* WindowsComboBoxSizeTest::textField = nullptr;
$JComboBox* WindowsComboBoxSizeTest::comboBox = nullptr;
$JComboBox* WindowsComboBoxSizeTest::comboBoxEd = nullptr;
$JFrame* WindowsComboBoxSizeTest::frame = nullptr;

void WindowsComboBoxSizeTest::init$() {
}

void WindowsComboBoxSizeTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel($($UIManager::getSystemLookAndFeelClassName()));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(WindowsComboBoxSizeTest$$Lambda$lambda$main$0)));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	{
		$var($Throwable, var$0, nullptr);
		try {
			test();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init(WindowsComboBoxSizeTest);
			$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(WindowsComboBoxSizeTest$$Lambda$dispose$1, static_cast<$JFrame*>($nc(WindowsComboBoxSizeTest::frame)))));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void WindowsComboBoxSizeTest::test() {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2)));
}

void WindowsComboBoxSizeTest::lambda$test$1() {
	$useLocalCurrentObjectStackCache();
	$init(WindowsComboBoxSizeTest);
	int32_t expected = $nc($($nc(WindowsComboBoxSizeTest::textField)->getSize()))->height;
	if ($nc($($nc(WindowsComboBoxSizeTest::comboBox)->getSize()))->height != expected) {
		$throwNew($RuntimeException, $$str({"Wrong non-editable JComboBox height "_s, $$str($nc($($nc(WindowsComboBoxSizeTest::comboBox)->getSize()))->height), " expected "_s, $$str(expected)}));
	}
	if ($nc($($nc(WindowsComboBoxSizeTest::comboBoxEd)->getSize()))->height != expected) {
		$throwNew($RuntimeException, $$str({"Wrong editable JComboBox height "_s, $$str($nc($($nc(WindowsComboBoxSizeTest::comboBoxEd)->getSize()))->height), " expected "_s, $$str(expected)}));
	}
}

void WindowsComboBoxSizeTest::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	$init(WindowsComboBoxSizeTest);
	$assignStatic(WindowsComboBoxSizeTest::frame, $new($JFrame));
	$nc($($nc(WindowsComboBoxSizeTest::frame)->getContentPane()))->setLayout($$new($FlowLayout));
	$assignStatic(WindowsComboBoxSizeTest::textField, $new($JTextField, "item 1"_s));
	$nc($($nc(WindowsComboBoxSizeTest::frame)->getContentPane()))->add(static_cast<$Component*>(WindowsComboBoxSizeTest::textField));
	$assignStatic(WindowsComboBoxSizeTest::comboBox, $new($JComboBox, $$new($StringArray, {
		"item 1"_s,
		"item 2"_s,
		"item 3"_s
	})));
	$nc($($nc(WindowsComboBoxSizeTest::frame)->getContentPane()))->add(static_cast<$Component*>(WindowsComboBoxSizeTest::comboBox));
	$assignStatic(WindowsComboBoxSizeTest::comboBoxEd, $new($JComboBox, $$new($StringArray, {
		"item 1"_s,
		"item 2"_s,
		"item 3"_s
	})));
	$nc(WindowsComboBoxSizeTest::comboBoxEd)->setEditable(true);
	$nc($($nc(WindowsComboBoxSizeTest::frame)->getContentPane()))->add(static_cast<$Component*>(WindowsComboBoxSizeTest::comboBoxEd));
	$nc(WindowsComboBoxSizeTest::frame)->pack();
	$nc(WindowsComboBoxSizeTest::frame)->setVisible(true);
}

WindowsComboBoxSizeTest::WindowsComboBoxSizeTest() {
}

$Class* WindowsComboBoxSizeTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WindowsComboBoxSizeTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return WindowsComboBoxSizeTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(WindowsComboBoxSizeTest$$Lambda$dispose$1::classInfo$.name)) {
			return WindowsComboBoxSizeTest$$Lambda$dispose$1::load$(name, initialize);
		}
		if (name->equals(WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2::classInfo$.name)) {
			return WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2::load$(name, initialize);
		}
	}
	$loadClass(WindowsComboBoxSizeTest, name, initialize, &_WindowsComboBoxSizeTest_ClassInfo_, allocate$WindowsComboBoxSizeTest);
	return class$;
}

$Class* WindowsComboBoxSizeTest::class$ = nullptr;