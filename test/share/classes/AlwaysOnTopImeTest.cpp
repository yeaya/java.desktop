#include <AlwaysOnTopImeTest.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class AlwaysOnTopImeTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(AlwaysOnTopImeTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		AlwaysOnTopImeTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AlwaysOnTopImeTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AlwaysOnTopImeTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AlwaysOnTopImeTest$$Lambda$lambda$main$0::*)()>(&AlwaysOnTopImeTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo AlwaysOnTopImeTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"AlwaysOnTopImeTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* AlwaysOnTopImeTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(AlwaysOnTopImeTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AlwaysOnTopImeTest$$Lambda$lambda$main$0::class$ = nullptr;

class AlwaysOnTopImeTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(AlwaysOnTopImeTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		AlwaysOnTopImeTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AlwaysOnTopImeTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo AlwaysOnTopImeTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AlwaysOnTopImeTest$$Lambda$lambda$main$1$1::*)()>(&AlwaysOnTopImeTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo AlwaysOnTopImeTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"AlwaysOnTopImeTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* AlwaysOnTopImeTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(AlwaysOnTopImeTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AlwaysOnTopImeTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class AlwaysOnTopImeTest$$Lambda$dispose$2 : public $Runnable {
	$class(AlwaysOnTopImeTest$$Lambda$dispose$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<AlwaysOnTopImeTest$$Lambda$dispose$2>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo AlwaysOnTopImeTest$$Lambda$dispose$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(AlwaysOnTopImeTest$$Lambda$dispose$2, inst$)},
	{}
};
$MethodInfo AlwaysOnTopImeTest$$Lambda$dispose$2::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(AlwaysOnTopImeTest$$Lambda$dispose$2::*)($Window*)>(&AlwaysOnTopImeTest$$Lambda$dispose$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo AlwaysOnTopImeTest$$Lambda$dispose$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"AlwaysOnTopImeTest$$Lambda$dispose$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* AlwaysOnTopImeTest$$Lambda$dispose$2::load$($String* name, bool initialize) {
	$loadClass(AlwaysOnTopImeTest$$Lambda$dispose$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* AlwaysOnTopImeTest$$Lambda$dispose$2::class$ = nullptr;

$FieldInfo _AlwaysOnTopImeTest_FieldInfo_[] = {
	{"d", "Ljavax/swing/JDialog;", nullptr, $PRIVATE | $STATIC, $staticField(AlwaysOnTopImeTest, d)},
	{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(AlwaysOnTopImeTest, f)},
	{}
};

$MethodInfo _AlwaysOnTopImeTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AlwaysOnTopImeTest::*)()>(&AlwaysOnTopImeTest::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&AlwaysOnTopImeTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&AlwaysOnTopImeTest::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&AlwaysOnTopImeTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _AlwaysOnTopImeTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"AlwaysOnTopImeTest",
	"java.lang.Object",
	nullptr,
	_AlwaysOnTopImeTest_FieldInfo_,
	_AlwaysOnTopImeTest_MethodInfo_
};

$Object* allocate$AlwaysOnTopImeTest($Class* clazz) {
	return $of($alloc(AlwaysOnTopImeTest));
}

$JDialog* AlwaysOnTopImeTest::d = nullptr;
$JFrame* AlwaysOnTopImeTest::f = nullptr;

void AlwaysOnTopImeTest::init$() {
}

void AlwaysOnTopImeTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(AlwaysOnTopImeTest$$Lambda$lambda$main$0)));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->delay(200);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(AlwaysOnTopImeTest$$Lambda$lambda$main$1$1)));
	robot->waitForIdle();
	robot->delay(200);
	$init(AlwaysOnTopImeTest);
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(AlwaysOnTopImeTest$$Lambda$dispose$2, static_cast<$JFrame*>($nc(AlwaysOnTopImeTest::f)))));
}

void AlwaysOnTopImeTest::lambda$main$1() {
	$init(AlwaysOnTopImeTest);
	$nc(AlwaysOnTopImeTest::d)->setVisible(false);
}

void AlwaysOnTopImeTest::lambda$main$0() {
	$init(AlwaysOnTopImeTest);
	$assignStatic(AlwaysOnTopImeTest::f, $new($JFrame));
	$nc(AlwaysOnTopImeTest::f)->setVisible(true);
	$assignStatic(AlwaysOnTopImeTest::d, $new($JDialog, static_cast<$Frame*>(AlwaysOnTopImeTest::f)));
	$nc(AlwaysOnTopImeTest::d)->add(static_cast<$Component*>($$new($JTextField)));
	$nc(AlwaysOnTopImeTest::d)->pack();
	$nc(AlwaysOnTopImeTest::d)->setModal(true);
	$nc(AlwaysOnTopImeTest::f)->setAlwaysOnTop(true);
	$nc(AlwaysOnTopImeTest::d)->setVisible(true);
	$nc(AlwaysOnTopImeTest::f)->setAlwaysOnTop(false);
}

AlwaysOnTopImeTest::AlwaysOnTopImeTest() {
}

$Class* AlwaysOnTopImeTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(AlwaysOnTopImeTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return AlwaysOnTopImeTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(AlwaysOnTopImeTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return AlwaysOnTopImeTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(AlwaysOnTopImeTest$$Lambda$dispose$2::classInfo$.name)) {
			return AlwaysOnTopImeTest$$Lambda$dispose$2::load$(name, initialize);
		}
	}
	$loadClass(AlwaysOnTopImeTest, name, initialize, &_AlwaysOnTopImeTest_ClassInfo_, allocate$AlwaysOnTopImeTest);
	return class$;
}

$Class* AlwaysOnTopImeTest::class$ = nullptr;