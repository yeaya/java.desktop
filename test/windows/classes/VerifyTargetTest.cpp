#include <VerifyTargetTest.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/InputVerifier.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef NORTH
#undef SOUTH

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $PrintStream = ::java::io::PrintStream;
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
using $InputVerifier = ::javax::swing::InputVerifier;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class VerifyTargetTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(VerifyTargetTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		VerifyTargetTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VerifyTargetTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo VerifyTargetTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VerifyTargetTest$$Lambda$lambda$main$0::*)()>(&VerifyTargetTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo VerifyTargetTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"VerifyTargetTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* VerifyTargetTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(VerifyTargetTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VerifyTargetTest$$Lambda$lambda$main$0::class$ = nullptr;

class VerifyTargetTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(VerifyTargetTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		VerifyTargetTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VerifyTargetTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo VerifyTargetTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VerifyTargetTest$$Lambda$lambda$main$1$1::*)()>(&VerifyTargetTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo VerifyTargetTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"VerifyTargetTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* VerifyTargetTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(VerifyTargetTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VerifyTargetTest$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _VerifyTargetTest_FieldInfo_[] = {
	{"success", "Z", nullptr, $STATIC, $staticField(VerifyTargetTest, success)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(VerifyTargetTest, frame)},
	{"field2", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(VerifyTargetTest, field2)},
	{}
};

$MethodInfo _VerifyTargetTest_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VerifyTargetTest::*)()>(&VerifyTargetTest::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&VerifyTargetTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&VerifyTargetTest::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&VerifyTargetTest::main)), "java.lang.Exception"},
	{"setup", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&VerifyTargetTest::setup))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"verify", "(Ljavax/swing/JComponent;)Z", nullptr, $PUBLIC},
	{"verifyTarget", "(Ljavax/swing/JComponent;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _VerifyTargetTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"VerifyTargetTest",
	"javax.swing.InputVerifier",
	"java.awt.event.FocusListener",
	_VerifyTargetTest_FieldInfo_,
	_VerifyTargetTest_MethodInfo_
};

$Object* allocate$VerifyTargetTest($Class* clazz) {
	return $of($alloc(VerifyTargetTest));
}

int32_t VerifyTargetTest::hashCode() {
	 return this->$InputVerifier::hashCode();
}

bool VerifyTargetTest::equals(Object$* arg0) {
	 return this->$InputVerifier::equals(arg0);
}

$Object* VerifyTargetTest::clone() {
	 return this->$InputVerifier::clone();
}

$String* VerifyTargetTest::toString() {
	 return this->$InputVerifier::toString();
}

void VerifyTargetTest::finalize() {
	this->$InputVerifier::finalize();
}

bool VerifyTargetTest::success = false;
$JFrame* VerifyTargetTest::frame = nullptr;
$JTextField* VerifyTargetTest::field2 = nullptr;

void VerifyTargetTest::init$() {
	$InputVerifier::init$();
}

void VerifyTargetTest::main($StringArray* args) {
	$init(VerifyTargetTest);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(VerifyTargetTest$$Lambda$lambda$main$0)));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->waitForIdle();
			robot->delay(200);
			$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->focusNextComponent();
			robot->waitForIdle();
			robot->delay(200);
			if (!VerifyTargetTest::success) {
				$throwNew($RuntimeException, "Failed"_s);
			} else {
				$init($System);
				$nc($System::out)->println("ok"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(VerifyTargetTest$$Lambda$lambda$main$1$1)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void VerifyTargetTest::setup() {
	$init(VerifyTargetTest);
	$assignStatic(VerifyTargetTest::frame, $new($JFrame));
	$var($JTextField, field1, $new($JTextField, "Input 1"_s));
	$var(VerifyTargetTest, test, $new(VerifyTargetTest));
	field1->setInputVerifier(test);
	field1->addFocusListener(test);
	$init($BorderLayout);
	$nc($($nc(VerifyTargetTest::frame)->getContentPane()))->add(static_cast<$Component*>(field1), $of($BorderLayout::NORTH));
	$assignStatic(VerifyTargetTest::field2, $new($JTextField, "Input 2"_s));
	$nc($($nc(VerifyTargetTest::frame)->getContentPane()))->add(static_cast<$Component*>(VerifyTargetTest::field2), $of($BorderLayout::SOUTH));
	$nc(VerifyTargetTest::frame)->pack();
	$nc(VerifyTargetTest::frame)->setVisible(true);
}

bool VerifyTargetTest::verify($JComponent* input) {
	return true;
}

bool VerifyTargetTest::verifyTarget($JComponent* input) {
	VerifyTargetTest::success = $equals(input, VerifyTargetTest::field2);
	return false;
}

void VerifyTargetTest::focusGained($FocusEvent* e) {
}

void VerifyTargetTest::focusLost($FocusEvent* e) {
	VerifyTargetTest::success = false;
}

void VerifyTargetTest::lambda$main$1() {
	$init(VerifyTargetTest);
	$nc(VerifyTargetTest::frame)->dispose();
}

void VerifyTargetTest::lambda$main$0() {
	$init(VerifyTargetTest);
	setup();
}

VerifyTargetTest::VerifyTargetTest() {
}

$Class* VerifyTargetTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(VerifyTargetTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return VerifyTargetTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(VerifyTargetTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return VerifyTargetTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(VerifyTargetTest, name, initialize, &_VerifyTargetTest_ClassInfo_, allocate$VerifyTargetTest);
	return class$;
}

$Class* VerifyTargetTest::class$ = nullptr;