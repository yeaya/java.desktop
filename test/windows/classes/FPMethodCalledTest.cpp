#include <FPMethodCalledTest.h>

#include <FPMethodCalledTest$1.h>
#include <FPMethodCalledTest$10.h>
#include <FPMethodCalledTest$2.h>
#include <FPMethodCalledTest$3.h>
#include <FPMethodCalledTest$4.h>
#include <FPMethodCalledTest$5.h>
#include <FPMethodCalledTest$6.h>
#include <FPMethodCalledTest$7.h>
#include <FPMethodCalledTest$8.h>
#include <FPMethodCalledTest$9.h>
#include <FPMethodCalledTest$Resultable.h>
#include <FPMethodCalledTest$Test.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalTextFieldUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef TESTS

using $FPMethodCalledTest$1 = ::FPMethodCalledTest$1;
using $FPMethodCalledTest$10 = ::FPMethodCalledTest$10;
using $FPMethodCalledTest$2 = ::FPMethodCalledTest$2;
using $FPMethodCalledTest$3 = ::FPMethodCalledTest$3;
using $FPMethodCalledTest$4 = ::FPMethodCalledTest$4;
using $FPMethodCalledTest$5 = ::FPMethodCalledTest$5;
using $FPMethodCalledTest$6 = ::FPMethodCalledTest$6;
using $FPMethodCalledTest$7 = ::FPMethodCalledTest$7;
using $FPMethodCalledTest$8 = ::FPMethodCalledTest$8;
using $FPMethodCalledTest$9 = ::FPMethodCalledTest$9;
using $FPMethodCalledTest$Resultable = ::FPMethodCalledTest$Resultable;
using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $FPMethodCalledTest$TestArray = $Array<FPMethodCalledTest$Test>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
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
using $JPanel = ::javax::swing::JPanel;
using $JPasswordField = ::javax::swing::JPasswordField;
using $JTextField = ::javax::swing::JTextField;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalTextFieldUI = ::javax::swing::plaf::metal::MetalTextFieldUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class FPMethodCalledTest$$Lambda$lambda$test$0 : public $Runnable {
	$class(FPMethodCalledTest$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($FPMethodCalledTest$Test* test) {
		$set(this, test, test);
	}
	virtual void run() override {
		FPMethodCalledTest::lambda$test$0(test);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FPMethodCalledTest$$Lambda$lambda$test$0>());
	}
	$FPMethodCalledTest$Test* test = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FPMethodCalledTest$$Lambda$lambda$test$0::fieldInfos[2] = {
	{"test", "LFPMethodCalledTest$Test;", nullptr, $PUBLIC, $field(FPMethodCalledTest$$Lambda$lambda$test$0, test)},
	{}
};
$MethodInfo FPMethodCalledTest$$Lambda$lambda$test$0::methodInfos[3] = {
	{"<init>", "(LFPMethodCalledTest$Test;)V", nullptr, $PUBLIC, $method(static_cast<void(FPMethodCalledTest$$Lambda$lambda$test$0::*)($FPMethodCalledTest$Test*)>(&FPMethodCalledTest$$Lambda$lambda$test$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FPMethodCalledTest$$Lambda$lambda$test$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"FPMethodCalledTest$$Lambda$lambda$test$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* FPMethodCalledTest$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$$Lambda$lambda$test$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FPMethodCalledTest$$Lambda$lambda$test$0::class$ = nullptr;

class FPMethodCalledTest$$Lambda$lambda$test$1$1 : public $Runnable {
	$class(FPMethodCalledTest$$Lambda$lambda$test$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		FPMethodCalledTest::lambda$test$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FPMethodCalledTest$$Lambda$lambda$test$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FPMethodCalledTest$$Lambda$lambda$test$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FPMethodCalledTest$$Lambda$lambda$test$1$1::*)()>(&FPMethodCalledTest$$Lambda$lambda$test$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FPMethodCalledTest$$Lambda$lambda$test$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"FPMethodCalledTest$$Lambda$lambda$test$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* FPMethodCalledTest$$Lambda$lambda$test$1$1::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$$Lambda$lambda$test$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FPMethodCalledTest$$Lambda$lambda$test$1$1::class$ = nullptr;

class FPMethodCalledTest$$Lambda$lambda$test$2$2 : public $Runnable {
	$class(FPMethodCalledTest$$Lambda$lambda$test$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($FPMethodCalledTest$Test* test) {
		$set(this, test, test);
	}
	virtual void run() override {
		FPMethodCalledTest::lambda$test$2(test);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FPMethodCalledTest$$Lambda$lambda$test$2$2>());
	}
	$FPMethodCalledTest$Test* test = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FPMethodCalledTest$$Lambda$lambda$test$2$2::fieldInfos[2] = {
	{"test", "LFPMethodCalledTest$Test;", nullptr, $PUBLIC, $field(FPMethodCalledTest$$Lambda$lambda$test$2$2, test)},
	{}
};
$MethodInfo FPMethodCalledTest$$Lambda$lambda$test$2$2::methodInfos[3] = {
	{"<init>", "(LFPMethodCalledTest$Test;)V", nullptr, $PUBLIC, $method(static_cast<void(FPMethodCalledTest$$Lambda$lambda$test$2$2::*)($FPMethodCalledTest$Test*)>(&FPMethodCalledTest$$Lambda$lambda$test$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FPMethodCalledTest$$Lambda$lambda$test$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"FPMethodCalledTest$$Lambda$lambda$test$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* FPMethodCalledTest$$Lambda$lambda$test$2$2::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$$Lambda$lambda$test$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FPMethodCalledTest$$Lambda$lambda$test$2$2::class$ = nullptr;

class FPMethodCalledTest$$Lambda$lambda$test$3$3 : public $Runnable {
	$class(FPMethodCalledTest$$Lambda$lambda$test$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		FPMethodCalledTest::lambda$test$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FPMethodCalledTest$$Lambda$lambda$test$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FPMethodCalledTest$$Lambda$lambda$test$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FPMethodCalledTest$$Lambda$lambda$test$3$3::*)()>(&FPMethodCalledTest$$Lambda$lambda$test$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FPMethodCalledTest$$Lambda$lambda$test$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"FPMethodCalledTest$$Lambda$lambda$test$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* FPMethodCalledTest$$Lambda$lambda$test$3$3::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$$Lambda$lambda$test$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FPMethodCalledTest$$Lambda$lambda$test$3$3::class$ = nullptr;

$FieldInfo _FPMethodCalledTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(FPMethodCalledTest, frame)},
	{"textField", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(FPMethodCalledTest, textField)},
	{"TESTS", "[LFPMethodCalledTest$Test;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FPMethodCalledTest, TESTS)},
	{}
};

$MethodInfo _FPMethodCalledTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FPMethodCalledTest::*)()>(&FPMethodCalledTest::init$))},
	{"createAndShowGUI", "(LFPMethodCalledTest$Test;)V", nullptr, $STATIC, $method(static_cast<void(*)($FPMethodCalledTest$Test*)>(&FPMethodCalledTest::createAndShowGUI))},
	{"lambda$test$0", "(LFPMethodCalledTest$Test;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($FPMethodCalledTest$Test*)>(&FPMethodCalledTest::lambda$test$0))},
	{"lambda$test$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&FPMethodCalledTest::lambda$test$1))},
	{"lambda$test$2", "(LFPMethodCalledTest$Test;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($FPMethodCalledTest$Test*)>(&FPMethodCalledTest::lambda$test$2))},
	{"lambda$test$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&FPMethodCalledTest::lambda$test$3))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FPMethodCalledTest::main)), "java.lang.Exception"},
	{"test", "(LFPMethodCalledTest$Test;)V", nullptr, $STATIC, $method(static_cast<void(*)($FPMethodCalledTest$Test*)>(&FPMethodCalledTest::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _FPMethodCalledTest_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$PasswordViewMixedAPI", "FPMethodCalledTest", "PasswordViewMixedAPI", $STATIC},
	{"FPMethodCalledTest$PasswordViewFPAPI", "FPMethodCalledTest", "PasswordViewFPAPI", $STATIC},
	{"FPMethodCalledTest$PasswordViewINTAPI", "FPMethodCalledTest", "PasswordViewINTAPI", $STATIC},
	{"FPMethodCalledTest$WrappedPlainViewMixedAPI", "FPMethodCalledTest", "WrappedPlainViewMixedAPI", $STATIC},
	{"FPMethodCalledTest$WrappedPlainViewFPAPI", "FPMethodCalledTest", "WrappedPlainViewFPAPI", $STATIC},
	{"FPMethodCalledTest$WrappedPlainViewINTAPI", "FPMethodCalledTest", "WrappedPlainViewINTAPI", $STATIC},
	{"FPMethodCalledTest$PlainViewMixedAPI", "FPMethodCalledTest", "PlainViewMixedAPI", $STATIC},
	{"FPMethodCalledTest$PlainViewFPAPI", "FPMethodCalledTest", "PlainViewFPAPI", $STATIC},
	{"FPMethodCalledTest$PlainViewINTAPI", "FPMethodCalledTest", "PlainViewINTAPI", $STATIC},
	{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
	{"FPMethodCalledTest$Resultable", "FPMethodCalledTest", "Resultable", $STATIC | $INTERFACE | $ABSTRACT},
	{"FPMethodCalledTest$10", nullptr, nullptr, 0},
	{"FPMethodCalledTest$9", nullptr, nullptr, 0},
	{"FPMethodCalledTest$8", nullptr, nullptr, 0},
	{"FPMethodCalledTest$7", nullptr, nullptr, 0},
	{"FPMethodCalledTest$6", nullptr, nullptr, 0},
	{"FPMethodCalledTest$5", nullptr, nullptr, 0},
	{"FPMethodCalledTest$4", nullptr, nullptr, 0},
	{"FPMethodCalledTest$3", nullptr, nullptr, 0},
	{"FPMethodCalledTest$2", nullptr, nullptr, 0},
	{"FPMethodCalledTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FPMethodCalledTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FPMethodCalledTest",
	"java.lang.Object",
	nullptr,
	_FPMethodCalledTest_FieldInfo_,
	_FPMethodCalledTest_MethodInfo_,
	nullptr,
	nullptr,
	_FPMethodCalledTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"FPMethodCalledTest$PasswordViewMixedAPI,FPMethodCalledTest$PasswordViewFPAPI,FPMethodCalledTest$PasswordViewINTAPI,FPMethodCalledTest$WrappedPlainViewMixedAPI,FPMethodCalledTest$WrappedPlainViewFPAPI,FPMethodCalledTest$WrappedPlainViewINTAPI,FPMethodCalledTest$PlainViewMixedAPI,FPMethodCalledTest$PlainViewFPAPI,FPMethodCalledTest$PlainViewINTAPI,FPMethodCalledTest$Test,FPMethodCalledTest$Resultable,FPMethodCalledTest$10,FPMethodCalledTest$9,FPMethodCalledTest$8,FPMethodCalledTest$7,FPMethodCalledTest$6,FPMethodCalledTest$5,FPMethodCalledTest$4,FPMethodCalledTest$3,FPMethodCalledTest$2,FPMethodCalledTest$1"
};

$Object* allocate$FPMethodCalledTest($Class* clazz) {
	return $of($alloc(FPMethodCalledTest));
}

$JFrame* FPMethodCalledTest::frame = nullptr;
$JTextField* FPMethodCalledTest::textField = nullptr;
$FPMethodCalledTest$TestArray* FPMethodCalledTest::TESTS = nullptr;

void FPMethodCalledTest::init$() {
}

void FPMethodCalledTest::main($StringArray* args) {
	$init(FPMethodCalledTest);
	$useLocalCurrentObjectStackCache();
	{
		$var($FPMethodCalledTest$TestArray, arr$, FPMethodCalledTest::TESTS);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($FPMethodCalledTest$Test, test, arr$->get(i$));
			{
				FPMethodCalledTest::test(test);
			}
		}
	}
}

void FPMethodCalledTest::test($FPMethodCalledTest$Test* test) {
	$init(FPMethodCalledTest);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(50);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(FPMethodCalledTest$$Lambda$lambda$test$0, test)));
			robot->waitForIdle();
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(FPMethodCalledTest$$Lambda$lambda$test$1$1)));
			robot->waitForIdle();
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(FPMethodCalledTest$$Lambda$lambda$test$2$2, test)));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(FPMethodCalledTest$$Lambda$lambda$test$3$3)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void FPMethodCalledTest::createAndShowGUI($FPMethodCalledTest$Test* test) {
	$init(FPMethodCalledTest);
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$assignStatic(FPMethodCalledTest::frame, $new($JFrame));
	$nc(FPMethodCalledTest::frame)->setSize(300, 300);
	$nc(FPMethodCalledTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JPanel, panel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout))));
	$var($String, text, "AAAAAAA"_s);
	$assignStatic(FPMethodCalledTest::textField, $nc(test)->isPasswordField() ? static_cast<$JTextField*>($new($JPasswordField, text)) : $new($JTextField, text));
	$nc(FPMethodCalledTest::textField)->setUI(static_cast<$TextUI*>($$new($FPMethodCalledTest$1, test)));
	panel->add(static_cast<$Component*>(FPMethodCalledTest::textField));
	$nc($($nc(FPMethodCalledTest::frame)->getContentPane()))->add(static_cast<$Component*>(panel));
	$nc(FPMethodCalledTest::frame)->setVisible(true);
}

void FPMethodCalledTest::lambda$test$3() {
	$init(FPMethodCalledTest);
	if (FPMethodCalledTest::frame != nullptr) {
		$nc(FPMethodCalledTest::frame)->dispose();
	}
}

void FPMethodCalledTest::lambda$test$2($FPMethodCalledTest$Test* test) {
	$init(FPMethodCalledTest);
	$useLocalCurrentObjectStackCache();
	$var($FPMethodCalledTest$Resultable, resultable, $nc(test)->resultable);
	if (!$nc(resultable)->getResult()) {
		$throwNew($RuntimeException, $$str({"Test fails for: "_s, resultable}));
	}
}

void FPMethodCalledTest::lambda$test$1() {
	$init(FPMethodCalledTest);
	$nc(FPMethodCalledTest::textField)->select(1, 3);
}

void FPMethodCalledTest::lambda$test$0($FPMethodCalledTest$Test* test) {
	$init(FPMethodCalledTest);
	createAndShowGUI(test);
}

void clinit$FPMethodCalledTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(FPMethodCalledTest::TESTS, $new($FPMethodCalledTest$TestArray, {
		static_cast<$FPMethodCalledTest$Test*>($$new($FPMethodCalledTest$2)),
		static_cast<$FPMethodCalledTest$Test*>($$new($FPMethodCalledTest$3)),
		static_cast<$FPMethodCalledTest$Test*>($$new($FPMethodCalledTest$4)),
		static_cast<$FPMethodCalledTest$Test*>($$new($FPMethodCalledTest$5)),
		static_cast<$FPMethodCalledTest$Test*>($$new($FPMethodCalledTest$6)),
		static_cast<$FPMethodCalledTest$Test*>($$new($FPMethodCalledTest$7)),
		static_cast<$FPMethodCalledTest$Test*>($$new($FPMethodCalledTest$8, true)),
		static_cast<$FPMethodCalledTest$Test*>($$new($FPMethodCalledTest$9, true)),
		static_cast<$FPMethodCalledTest$Test*>($$new($FPMethodCalledTest$10, true))
	}));
}

FPMethodCalledTest::FPMethodCalledTest() {
}

$Class* FPMethodCalledTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FPMethodCalledTest$$Lambda$lambda$test$0::classInfo$.name)) {
			return FPMethodCalledTest$$Lambda$lambda$test$0::load$(name, initialize);
		}
		if (name->equals(FPMethodCalledTest$$Lambda$lambda$test$1$1::classInfo$.name)) {
			return FPMethodCalledTest$$Lambda$lambda$test$1$1::load$(name, initialize);
		}
		if (name->equals(FPMethodCalledTest$$Lambda$lambda$test$2$2::classInfo$.name)) {
			return FPMethodCalledTest$$Lambda$lambda$test$2$2::load$(name, initialize);
		}
		if (name->equals(FPMethodCalledTest$$Lambda$lambda$test$3$3::classInfo$.name)) {
			return FPMethodCalledTest$$Lambda$lambda$test$3$3::load$(name, initialize);
		}
	}
	$loadClass(FPMethodCalledTest, name, initialize, &_FPMethodCalledTest_ClassInfo_, clinit$FPMethodCalledTest, allocate$FPMethodCalledTest);
	return class$;
}

$Class* FPMethodCalledTest::class$ = nullptr;