#include <DefaultButtonModelCrashTest.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef NORTH
#undef VK_TAB

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class DefaultButtonModelCrashTest$$Lambda$lambda$new$0 : public $Runnable {
	$class(DefaultButtonModelCrashTest$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(DefaultButtonModelCrashTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultButtonModelCrashTest$$Lambda$lambda$new$0>());
	}
	DefaultButtonModelCrashTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DefaultButtonModelCrashTest$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DefaultButtonModelCrashTest$$Lambda$lambda$new$0, inst$)},
	{}
};
$MethodInfo DefaultButtonModelCrashTest$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(LDefaultButtonModelCrashTest;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultButtonModelCrashTest$$Lambda$lambda$new$0::*)(DefaultButtonModelCrashTest*)>(&DefaultButtonModelCrashTest$$Lambda$lambda$new$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultButtonModelCrashTest$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultButtonModelCrashTest$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* DefaultButtonModelCrashTest$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(DefaultButtonModelCrashTest$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultButtonModelCrashTest$$Lambda$lambda$new$0::class$ = nullptr;

class DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1 : public $Runnable {
	$class(DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(DefaultButtonModelCrashTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1>());
	}
	DefaultButtonModelCrashTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1, inst$)},
	{}
};
$MethodInfo DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1::methodInfos[3] = {
	{"<init>", "(LDefaultButtonModelCrashTest;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1::*)(DefaultButtonModelCrashTest*)>(&DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$loadClass(DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1::class$ = nullptr;

$FieldInfo _DefaultButtonModelCrashTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(DefaultButtonModelCrashTest, frame)},
	{"panel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(DefaultButtonModelCrashTest, panel)},
	{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(DefaultButtonModelCrashTest, p)},
	{}
};

$MethodInfo _DefaultButtonModelCrashTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultButtonModelCrashTest::*)()>(&DefaultButtonModelCrashTest::init$)), "java.lang.Exception"},
	{"go", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultButtonModelCrashTest::*)()>(&DefaultButtonModelCrashTest::go))},
	{"lambda$new$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(DefaultButtonModelCrashTest::*)()>(&DefaultButtonModelCrashTest::lambda$new$0))},
	{"lambda$new$1", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(DefaultButtonModelCrashTest::*)()>(&DefaultButtonModelCrashTest::lambda$new$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DefaultButtonModelCrashTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _DefaultButtonModelCrashTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DefaultButtonModelCrashTest",
	"java.lang.Object",
	nullptr,
	_DefaultButtonModelCrashTest_FieldInfo_,
	_DefaultButtonModelCrashTest_MethodInfo_
};

$Object* allocate$DefaultButtonModelCrashTest($Class* clazz) {
	return $of($alloc(DefaultButtonModelCrashTest));
}

void DefaultButtonModelCrashTest::main($StringArray* args) {
	$new(DefaultButtonModelCrashTest);
}

void DefaultButtonModelCrashTest::init$() {
	$useLocalCurrentObjectStackCache();
	$set(this, frame, nullptr);
	$set(this, p, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(200);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(DefaultButtonModelCrashTest$$Lambda$lambda$new$0, this)));
			robot->waitForIdle();
			robot->keyPress($KeyEvent::VK_TAB);
			robot->keyRelease($KeyEvent::VK_TAB);
			robot->delay(100);
			robot->keyPress($KeyEvent::VK_TAB);
			robot->keyRelease($KeyEvent::VK_TAB);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (this->frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1, this)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void DefaultButtonModelCrashTest::go() {
	$useLocalCurrentObjectStackCache();
	$set(this, frame, $new($JFrame));
	$nc(this->frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($Container, contentPane, $nc(this->frame)->getContentPane());
	$var($ButtonModel, model, $new($DefaultButtonModel));
	$var($JCheckBox, check, $new($JCheckBox, "a bit broken"_s));
	check->setModel(model);
	$set(this, panel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$init($BorderLayout);
	$nc(this->panel)->add(static_cast<$Component*>($$new($JTextField, "Press Tab (twice?)"_s)), $of($BorderLayout::NORTH));
	$nc(this->panel)->add(static_cast<$Component*>(check));
	$nc(contentPane)->add(static_cast<$Component*>(this->panel));
	$nc(this->frame)->setLocationRelativeTo(nullptr);
	$nc(this->frame)->pack();
	$nc(this->frame)->setVisible(true);
}

void DefaultButtonModelCrashTest::lambda$new$1() {
	$nc(this->frame)->dispose();
}

void DefaultButtonModelCrashTest::lambda$new$0() {
	go();
}

DefaultButtonModelCrashTest::DefaultButtonModelCrashTest() {
}

$Class* DefaultButtonModelCrashTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DefaultButtonModelCrashTest$$Lambda$lambda$new$0::classInfo$.name)) {
			return DefaultButtonModelCrashTest$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals(DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1::classInfo$.name)) {
			return DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
	}
	$loadClass(DefaultButtonModelCrashTest, name, initialize, &_DefaultButtonModelCrashTest_ClassInfo_, allocate$DefaultButtonModelCrashTest);
	return class$;
}

$Class* DefaultButtonModelCrashTest::class$ = nullptr;