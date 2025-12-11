#include <SpinnerTest.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
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
#include <javax/swing/AbstractSpinnerModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerListModel.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_SPACE

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JSpinner = ::javax::swing::JSpinner;
using $SpinnerListModel = ::javax::swing::SpinnerListModel;
using $SpinnerModel = ::javax::swing::SpinnerModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class SpinnerTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(SpinnerTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SpinnerTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpinnerTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpinnerTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SpinnerTest$$Lambda$lambda$main$0::*)()>(&SpinnerTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SpinnerTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpinnerTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* SpinnerTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(SpinnerTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpinnerTest$$Lambda$lambda$main$0::class$ = nullptr;

class SpinnerTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(SpinnerTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SpinnerTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SpinnerTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SpinnerTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SpinnerTest$$Lambda$lambda$main$1$1::*)()>(&SpinnerTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SpinnerTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"SpinnerTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* SpinnerTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(SpinnerTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SpinnerTest$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _SpinnerTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(SpinnerTest, frame)},
	{"spinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE | $STATIC, $staticField(SpinnerTest, spinner)},
	{}
};

$MethodInfo _SpinnerTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SpinnerTest::*)()>(&SpinnerTest::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&SpinnerTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&SpinnerTest::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SpinnerTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _SpinnerTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SpinnerTest",
	"java.lang.Object",
	nullptr,
	_SpinnerTest_FieldInfo_,
	_SpinnerTest_MethodInfo_
};

$Object* allocate$SpinnerTest($Class* clazz) {
	return $of($alloc(SpinnerTest));
}

$JFrame* SpinnerTest::frame = nullptr;
$JSpinner* SpinnerTest::spinner = nullptr;

void SpinnerTest::init$() {
}

void SpinnerTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(100);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(SpinnerTest$$Lambda$lambda$main$0)));
			robot->waitForIdle();
			robot->delay(1000);
			$init(SpinnerTest);
			$var($Point, loc, $nc(SpinnerTest::spinner)->getLocationOnScreen());
			robot->mouseMove($nc(loc)->x, loc->y);
			robot->keyPress($KeyEvent::VK_SPACE);
			robot->keyRelease($KeyEvent::VK_SPACE);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init(SpinnerTest);
			if (SpinnerTest::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(SpinnerTest$$Lambda$lambda$main$1$1)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SpinnerTest::lambda$main$1() {
	$init(SpinnerTest);
	$nc(SpinnerTest::frame)->dispose();
}

void SpinnerTest::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	$init(SpinnerTest);
	$assignStatic(SpinnerTest::frame, $new($JFrame, "SpinnerDemo"_s));
	$nc(SpinnerTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JPanel, panel, $new($JPanel));
	$var($StringArray, values, $new($StringArray, {
		"Month: "_s,
		"Year: "_s,
		($String*)nullptr,
		"Date"_s,
		"Sent"_s
	}));
	$var($SpinnerListModel, listModel, $new($SpinnerListModel, values));
	$var($JLabel, l, $new($JLabel, "Spinner"_s));
	panel->add(static_cast<$Component*>(l));
	$assignStatic(SpinnerTest::spinner, $new($JSpinner, listModel));
	l->setLabelFor(SpinnerTest::spinner);
	panel->add(static_cast<$Component*>(SpinnerTest::spinner));
	panel->setOpaque(true);
	$nc(SpinnerTest::frame)->setContentPane(panel);
	$nc(SpinnerTest::frame)->pack();
	$nc(SpinnerTest::frame)->setVisible(true);
	$nc(SpinnerTest::frame)->setLocationRelativeTo(nullptr);
}

SpinnerTest::SpinnerTest() {
}

$Class* SpinnerTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SpinnerTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return SpinnerTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(SpinnerTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return SpinnerTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(SpinnerTest, name, initialize, &_SpinnerTest_ClassInfo_, allocate$SpinnerTest);
	return class$;
}

$Class* SpinnerTest::class$ = nullptr;