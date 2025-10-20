#include <HidingSelectionTest.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
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
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $BufferedImage = ::java::awt::image::BufferedImage;
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
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JTextField = ::javax::swing::JTextField;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class HidingSelectionTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HidingSelectionTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HidingSelectionTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HidingSelectionTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HidingSelectionTest$$Lambda$lambda$main$0::*)()>(&HidingSelectionTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HidingSelectionTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"HidingSelectionTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HidingSelectionTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(HidingSelectionTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HidingSelectionTest$$Lambda$lambda$main$0::class$ = nullptr;

class HidingSelectionTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HidingSelectionTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HidingSelectionTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HidingSelectionTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HidingSelectionTest$$Lambda$lambda$main$1$1::*)()>(&HidingSelectionTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HidingSelectionTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"HidingSelectionTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HidingSelectionTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(HidingSelectionTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HidingSelectionTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class HidingSelectionTest$$Lambda$requestFocus$2 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$requestFocus$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JComponent* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->requestFocus();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HidingSelectionTest$$Lambda$requestFocus$2>());
	}
	$JComponent* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HidingSelectionTest$$Lambda$requestFocus$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HidingSelectionTest$$Lambda$requestFocus$2, inst$)},
	{}
};
$MethodInfo HidingSelectionTest$$Lambda$requestFocus$2::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(HidingSelectionTest$$Lambda$requestFocus$2::*)($JComponent*)>(&HidingSelectionTest$$Lambda$requestFocus$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HidingSelectionTest$$Lambda$requestFocus$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"HidingSelectionTest$$Lambda$requestFocus$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* HidingSelectionTest$$Lambda$requestFocus$2::load$($String* name, bool initialize) {
	$loadClass(HidingSelectionTest$$Lambda$requestFocus$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HidingSelectionTest$$Lambda$requestFocus$2::class$ = nullptr;

class HidingSelectionTest$$Lambda$selectAll$3 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$selectAll$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JTextComponent* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->selectAll();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HidingSelectionTest$$Lambda$selectAll$3>());
	}
	$JTextComponent* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HidingSelectionTest$$Lambda$selectAll$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HidingSelectionTest$$Lambda$selectAll$3, inst$)},
	{}
};
$MethodInfo HidingSelectionTest$$Lambda$selectAll$3::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(HidingSelectionTest$$Lambda$selectAll$3::*)($JTextComponent*)>(&HidingSelectionTest$$Lambda$selectAll$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HidingSelectionTest$$Lambda$selectAll$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"HidingSelectionTest$$Lambda$selectAll$3",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* HidingSelectionTest$$Lambda$selectAll$3::load$($String* name, bool initialize) {
	$loadClass(HidingSelectionTest$$Lambda$selectAll$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HidingSelectionTest$$Lambda$selectAll$3::class$ = nullptr;

class HidingSelectionTest$$Lambda$lambda$main$2$4 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$lambda$main$2$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HidingSelectionTest::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HidingSelectionTest$$Lambda$lambda$main$2$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HidingSelectionTest$$Lambda$lambda$main$2$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HidingSelectionTest$$Lambda$lambda$main$2$4::*)()>(&HidingSelectionTest$$Lambda$lambda$main$2$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HidingSelectionTest$$Lambda$lambda$main$2$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"HidingSelectionTest$$Lambda$lambda$main$2$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HidingSelectionTest$$Lambda$lambda$main$2$4::load$($String* name, bool initialize) {
	$loadClass(HidingSelectionTest$$Lambda$lambda$main$2$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HidingSelectionTest$$Lambda$lambda$main$2$4::class$ = nullptr;

class HidingSelectionTest$$Lambda$clearSelectedPath$5 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$clearSelectedPath$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$($MenuSelectionManager* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->clearSelectedPath();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HidingSelectionTest$$Lambda$clearSelectedPath$5>());
	}
	$MenuSelectionManager* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HidingSelectionTest$$Lambda$clearSelectedPath$5::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HidingSelectionTest$$Lambda$clearSelectedPath$5, inst$)},
	{}
};
$MethodInfo HidingSelectionTest$$Lambda$clearSelectedPath$5::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC, $method(static_cast<void(HidingSelectionTest$$Lambda$clearSelectedPath$5::*)($MenuSelectionManager*)>(&HidingSelectionTest$$Lambda$clearSelectedPath$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HidingSelectionTest$$Lambda$clearSelectedPath$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"HidingSelectionTest$$Lambda$clearSelectedPath$5",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* HidingSelectionTest$$Lambda$clearSelectedPath$5::load$($String* name, bool initialize) {
	$loadClass(HidingSelectionTest$$Lambda$clearSelectedPath$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HidingSelectionTest$$Lambda$clearSelectedPath$5::class$ = nullptr;

class HidingSelectionTest$$Lambda$lambda$main$3$6 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$lambda$main$3$6, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HidingSelectionTest::lambda$main$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HidingSelectionTest$$Lambda$lambda$main$3$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo HidingSelectionTest$$Lambda$lambda$main$3$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HidingSelectionTest$$Lambda$lambda$main$3$6::*)()>(&HidingSelectionTest$$Lambda$lambda$main$3$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HidingSelectionTest$$Lambda$lambda$main$3$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"HidingSelectionTest$$Lambda$lambda$main$3$6",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* HidingSelectionTest$$Lambda$lambda$main$3$6::load$($String* name, bool initialize) {
	$loadClass(HidingSelectionTest$$Lambda$lambda$main$3$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HidingSelectionTest$$Lambda$lambda$main$3$6::class$ = nullptr;

class HidingSelectionTest$$Lambda$dispose$7 : public $Runnable {
	$class(HidingSelectionTest$$Lambda$dispose$7, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<HidingSelectionTest$$Lambda$dispose$7>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo HidingSelectionTest$$Lambda$dispose$7::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HidingSelectionTest$$Lambda$dispose$7, inst$)},
	{}
};
$MethodInfo HidingSelectionTest$$Lambda$dispose$7::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(HidingSelectionTest$$Lambda$dispose$7::*)($Window*)>(&HidingSelectionTest$$Lambda$dispose$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo HidingSelectionTest$$Lambda$dispose$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"HidingSelectionTest$$Lambda$dispose$7",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* HidingSelectionTest$$Lambda$dispose$7::load$($String* name, bool initialize) {
	$loadClass(HidingSelectionTest$$Lambda$dispose$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* HidingSelectionTest$$Lambda$dispose$7::class$ = nullptr;

$FieldInfo _HidingSelectionTest_FieldInfo_[] = {
	{"field1", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, field1)},
	{"field2", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, field2)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, frame)},
	{"bounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, bounds)},
	{"menu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, menu)},
	{"anotherWindow", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, anotherWindow)},
	{"menuLoc", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, menuLoc)},
	{"frame2", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(HidingSelectionTest, frame2)},
	{}
};

$MethodInfo _HidingSelectionTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HidingSelectionTest::*)()>(&HidingSelectionTest::init$))},
	{"biEqual", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($BufferedImage*,$BufferedImage*)>(&HidingSelectionTest::biEqual))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HidingSelectionTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HidingSelectionTest::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HidingSelectionTest::lambda$main$2))},
	{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&HidingSelectionTest::lambda$main$3))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HidingSelectionTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _HidingSelectionTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HidingSelectionTest",
	"java.lang.Object",
	nullptr,
	_HidingSelectionTest_FieldInfo_,
	_HidingSelectionTest_MethodInfo_
};

$Object* allocate$HidingSelectionTest($Class* clazz) {
	return $of($alloc(HidingSelectionTest));
}

$JTextField* HidingSelectionTest::field1 = nullptr;
$JTextField* HidingSelectionTest::field2 = nullptr;
$JFrame* HidingSelectionTest::frame = nullptr;
$Rectangle* HidingSelectionTest::bounds = nullptr;
$JMenu* HidingSelectionTest::menu = nullptr;
$JTextField* HidingSelectionTest::anotherWindow = nullptr;
$Point* HidingSelectionTest::menuLoc = nullptr;
$JFrame* HidingSelectionTest::frame2 = nullptr;

void HidingSelectionTest::init$() {
}

void HidingSelectionTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HidingSelectionTest$$Lambda$lambda$main$0)));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->delay(200);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HidingSelectionTest$$Lambda$lambda$main$1$1)));
	$init(HidingSelectionTest);
	$var($BufferedImage, nosel, robot->createScreenCapture(HidingSelectionTest::bounds));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HidingSelectionTest$$Lambda$requestFocus$2, static_cast<$JTextField*>($nc(HidingSelectionTest::field2)))));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HidingSelectionTest$$Lambda$selectAll$3, static_cast<$JTextField*>($nc(HidingSelectionTest::field2)))));
	robot->waitForIdle();
	robot->delay(200);
	$var($BufferedImage, sel, robot->createScreenCapture(HidingSelectionTest::bounds));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HidingSelectionTest$$Lambda$lambda$main$2$4)));
	robot->mouseMove($nc(HidingSelectionTest::menuLoc)->x, $nc(HidingSelectionTest::menuLoc)->y);
	robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	robot->delay(50);
	robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	robot->waitForIdle();
	robot->delay(200);
	if (!biEqual($(robot->createScreenCapture(HidingSelectionTest::bounds)), sel)) {
		$throwNew($RuntimeException, "Test fails: menu hides selection"_s);
	}
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HidingSelectionTest$$Lambda$clearSelectedPath$5, static_cast<$MenuSelectionManager*>($nc($($MenuSelectionManager::defaultManager()))))));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HidingSelectionTest$$Lambda$requestFocus$2, static_cast<$JTextField*>($nc(HidingSelectionTest::field1)))));
	robot->waitForIdle();
	robot->delay(200);
	if (!biEqual($(robot->createScreenCapture(HidingSelectionTest::bounds)), nosel)) {
		$throwNew($RuntimeException, "Test fails: focus lost doesn\'t hide selection"_s);
	}
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HidingSelectionTest$$Lambda$requestFocus$2, static_cast<$JTextField*>($nc(HidingSelectionTest::field2)))));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HidingSelectionTest$$Lambda$lambda$main$3$6)));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HidingSelectionTest$$Lambda$requestFocus$2, static_cast<$JTextField*>($nc(HidingSelectionTest::anotherWindow)))));
	robot->waitForIdle();
	robot->delay(200);
	if (biEqual($(robot->createScreenCapture(HidingSelectionTest::bounds)), nosel)) {
		$throwNew($RuntimeException, "Test fails: switch window hides selection"_s);
	}
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(HidingSelectionTest$$Lambda$selectAll$3, static_cast<$JTextField*>($nc(HidingSelectionTest::anotherWindow)))));
	robot->waitForIdle();
	robot->delay(200);
	if (biEqual($(robot->createScreenCapture(HidingSelectionTest::bounds)), sel)) {
		$throwNew($RuntimeException, "Test fails: selection ownership is lost selection is shown"_s);
	}
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(HidingSelectionTest$$Lambda$dispose$7, static_cast<$JFrame*>($nc(HidingSelectionTest::frame2)))));
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(HidingSelectionTest$$Lambda$dispose$7, static_cast<$JFrame*>($nc(HidingSelectionTest::frame)))));
}

bool HidingSelectionTest::biEqual($BufferedImage* i1, $BufferedImage* i2) {
	int32_t var$1 = $nc(i1)->getWidth();
	bool var$0 = var$1 == $nc(i2)->getWidth();
	if (var$0) {
		int32_t var$2 = i1->getHeight();
		var$0 = var$2 == i2->getHeight();
	}
	if (var$0) {
		for (int32_t x = 0; x < i1->getWidth(); ++x) {
			for (int32_t y = 0; y < i1->getHeight(); ++y) {
				int32_t var$3 = i1->getRGB(x, y);
				if (var$3 != i2->getRGB(x, y)) {
					return false;
				}
			}
		}
		return true;
	}
	return false;
}

void HidingSelectionTest::lambda$main$3() {
	$init(HidingSelectionTest);
	$assignStatic(HidingSelectionTest::frame2, $new($JFrame));
	$var($Point, loc, $nc(HidingSelectionTest::frame)->getLocationOnScreen());
	$nc(loc)->translate(0, $nc(HidingSelectionTest::frame)->getHeight());
	$nc(HidingSelectionTest::frame2)->setLocation(loc);
	$assignStatic(HidingSelectionTest::anotherWindow, $new($JTextField, "textField3"_s));
	$nc(HidingSelectionTest::frame2)->add(static_cast<$Component*>(HidingSelectionTest::anotherWindow));
	$nc(HidingSelectionTest::frame2)->pack();
	$nc(HidingSelectionTest::frame2)->setVisible(true);
}

void HidingSelectionTest::lambda$main$2() {
	$init(HidingSelectionTest);
	$assignStatic(HidingSelectionTest::menuLoc, $nc(HidingSelectionTest::menu)->getLocationOnScreen());
	$nc(HidingSelectionTest::menuLoc)->translate(10, 10);
}

void HidingSelectionTest::lambda$main$1() {
	$init(HidingSelectionTest);
	$assignStatic(HidingSelectionTest::bounds, $nc(HidingSelectionTest::field2)->getBounds());
	$nc(HidingSelectionTest::bounds)->setLocation($($nc(HidingSelectionTest::field2)->getLocationOnScreen()));
}

void HidingSelectionTest::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	$init(HidingSelectionTest);
	$assignStatic(HidingSelectionTest::frame, $new($JFrame));
	$assignStatic(HidingSelectionTest::field1, $new($JTextField, "field1                       "_s));
	$assignStatic(HidingSelectionTest::field2, $new($JTextField, "field2                       "_s));
	$nc(HidingSelectionTest::field1)->setEditable(false);
	$nc(HidingSelectionTest::field2)->setEditable(false);
	$nc($($nc(HidingSelectionTest::frame)->getContentPane()))->setLayout($$new($FlowLayout));
	$nc($($nc(HidingSelectionTest::frame)->getContentPane()))->add(static_cast<$Component*>(HidingSelectionTest::field1));
	$nc($($nc(HidingSelectionTest::frame)->getContentPane()))->add(static_cast<$Component*>(HidingSelectionTest::field2));
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$assignStatic(HidingSelectionTest::menu, $new($JMenu, "menu"_s));
	$nc(HidingSelectionTest::menu)->add($$new($JMenuItem, "item"_s));
	menuBar->add(HidingSelectionTest::menu);
	$nc(HidingSelectionTest::frame)->setJMenuBar(menuBar);
	$nc(HidingSelectionTest::frame)->pack();
	$nc(HidingSelectionTest::frame)->setVisible(true);
}

HidingSelectionTest::HidingSelectionTest() {
}

$Class* HidingSelectionTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(HidingSelectionTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return HidingSelectionTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(HidingSelectionTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return HidingSelectionTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(HidingSelectionTest$$Lambda$requestFocus$2::classInfo$.name)) {
			return HidingSelectionTest$$Lambda$requestFocus$2::load$(name, initialize);
		}
		if (name->equals(HidingSelectionTest$$Lambda$selectAll$3::classInfo$.name)) {
			return HidingSelectionTest$$Lambda$selectAll$3::load$(name, initialize);
		}
		if (name->equals(HidingSelectionTest$$Lambda$lambda$main$2$4::classInfo$.name)) {
			return HidingSelectionTest$$Lambda$lambda$main$2$4::load$(name, initialize);
		}
		if (name->equals(HidingSelectionTest$$Lambda$clearSelectedPath$5::classInfo$.name)) {
			return HidingSelectionTest$$Lambda$clearSelectedPath$5::load$(name, initialize);
		}
		if (name->equals(HidingSelectionTest$$Lambda$lambda$main$3$6::classInfo$.name)) {
			return HidingSelectionTest$$Lambda$lambda$main$3$6::load$(name, initialize);
		}
		if (name->equals(HidingSelectionTest$$Lambda$dispose$7::classInfo$.name)) {
			return HidingSelectionTest$$Lambda$dispose$7::load$(name, initialize);
		}
	}
	$loadClass(HidingSelectionTest, name, initialize, &_HidingSelectionTest_ClassInfo_, allocate$HidingSelectionTest);
	return class$;
}

$Class* HidingSelectionTest::class$ = nullptr;