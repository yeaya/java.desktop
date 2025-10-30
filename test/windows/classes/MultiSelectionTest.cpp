#include <MultiSelectionTest.h>

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
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
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

class MultiSelectionTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MultiSelectionTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiSelectionTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MultiSelectionTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiSelectionTest$$Lambda$lambda$main$0::*)()>(&MultiSelectionTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MultiSelectionTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"MultiSelectionTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* MultiSelectionTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(MultiSelectionTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiSelectionTest$$Lambda$lambda$main$0::class$ = nullptr;

class MultiSelectionTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MultiSelectionTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiSelectionTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MultiSelectionTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiSelectionTest$$Lambda$lambda$main$1$1::*)()>(&MultiSelectionTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MultiSelectionTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"MultiSelectionTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* MultiSelectionTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(MultiSelectionTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiSelectionTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class MultiSelectionTest$$Lambda$requestFocus$2 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$requestFocus$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JComponent* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->requestFocus();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiSelectionTest$$Lambda$requestFocus$2>());
	}
	$JComponent* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MultiSelectionTest$$Lambda$requestFocus$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MultiSelectionTest$$Lambda$requestFocus$2, inst$)},
	{}
};
$MethodInfo MultiSelectionTest$$Lambda$requestFocus$2::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(MultiSelectionTest$$Lambda$requestFocus$2::*)($JComponent*)>(&MultiSelectionTest$$Lambda$requestFocus$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MultiSelectionTest$$Lambda$requestFocus$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"MultiSelectionTest$$Lambda$requestFocus$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* MultiSelectionTest$$Lambda$requestFocus$2::load$($String* name, bool initialize) {
	$loadClass(MultiSelectionTest$$Lambda$requestFocus$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiSelectionTest$$Lambda$requestFocus$2::class$ = nullptr;

class MultiSelectionTest$$Lambda$selectAll$3 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$selectAll$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JTextComponent* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->selectAll();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiSelectionTest$$Lambda$selectAll$3>());
	}
	$JTextComponent* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MultiSelectionTest$$Lambda$selectAll$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MultiSelectionTest$$Lambda$selectAll$3, inst$)},
	{}
};
$MethodInfo MultiSelectionTest$$Lambda$selectAll$3::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(MultiSelectionTest$$Lambda$selectAll$3::*)($JTextComponent*)>(&MultiSelectionTest$$Lambda$selectAll$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MultiSelectionTest$$Lambda$selectAll$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"MultiSelectionTest$$Lambda$selectAll$3",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* MultiSelectionTest$$Lambda$selectAll$3::load$($String* name, bool initialize) {
	$loadClass(MultiSelectionTest$$Lambda$selectAll$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiSelectionTest$$Lambda$selectAll$3::class$ = nullptr;

class MultiSelectionTest$$Lambda$lambda$main$2$4 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$lambda$main$2$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MultiSelectionTest::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiSelectionTest$$Lambda$lambda$main$2$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MultiSelectionTest$$Lambda$lambda$main$2$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiSelectionTest$$Lambda$lambda$main$2$4::*)()>(&MultiSelectionTest$$Lambda$lambda$main$2$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MultiSelectionTest$$Lambda$lambda$main$2$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"MultiSelectionTest$$Lambda$lambda$main$2$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* MultiSelectionTest$$Lambda$lambda$main$2$4::load$($String* name, bool initialize) {
	$loadClass(MultiSelectionTest$$Lambda$lambda$main$2$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiSelectionTest$$Lambda$lambda$main$2$4::class$ = nullptr;

class MultiSelectionTest$$Lambda$clearSelectedPath$5 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$clearSelectedPath$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$($MenuSelectionManager* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->clearSelectedPath();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiSelectionTest$$Lambda$clearSelectedPath$5>());
	}
	$MenuSelectionManager* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MultiSelectionTest$$Lambda$clearSelectedPath$5::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MultiSelectionTest$$Lambda$clearSelectedPath$5, inst$)},
	{}
};
$MethodInfo MultiSelectionTest$$Lambda$clearSelectedPath$5::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC, $method(static_cast<void(MultiSelectionTest$$Lambda$clearSelectedPath$5::*)($MenuSelectionManager*)>(&MultiSelectionTest$$Lambda$clearSelectedPath$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MultiSelectionTest$$Lambda$clearSelectedPath$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"MultiSelectionTest$$Lambda$clearSelectedPath$5",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* MultiSelectionTest$$Lambda$clearSelectedPath$5::load$($String* name, bool initialize) {
	$loadClass(MultiSelectionTest$$Lambda$clearSelectedPath$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiSelectionTest$$Lambda$clearSelectedPath$5::class$ = nullptr;

class MultiSelectionTest$$Lambda$lambda$main$3$6 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$lambda$main$3$6, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MultiSelectionTest::lambda$main$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiSelectionTest$$Lambda$lambda$main$3$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MultiSelectionTest$$Lambda$lambda$main$3$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiSelectionTest$$Lambda$lambda$main$3$6::*)()>(&MultiSelectionTest$$Lambda$lambda$main$3$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MultiSelectionTest$$Lambda$lambda$main$3$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"MultiSelectionTest$$Lambda$lambda$main$3$6",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* MultiSelectionTest$$Lambda$lambda$main$3$6::load$($String* name, bool initialize) {
	$loadClass(MultiSelectionTest$$Lambda$lambda$main$3$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiSelectionTest$$Lambda$lambda$main$3$6::class$ = nullptr;

class MultiSelectionTest$$Lambda$dispose$7 : public $Runnable {
	$class(MultiSelectionTest$$Lambda$dispose$7, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiSelectionTest$$Lambda$dispose$7>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MultiSelectionTest$$Lambda$dispose$7::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MultiSelectionTest$$Lambda$dispose$7, inst$)},
	{}
};
$MethodInfo MultiSelectionTest$$Lambda$dispose$7::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(MultiSelectionTest$$Lambda$dispose$7::*)($Window*)>(&MultiSelectionTest$$Lambda$dispose$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MultiSelectionTest$$Lambda$dispose$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"MultiSelectionTest$$Lambda$dispose$7",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* MultiSelectionTest$$Lambda$dispose$7::load$($String* name, bool initialize) {
	$loadClass(MultiSelectionTest$$Lambda$dispose$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiSelectionTest$$Lambda$dispose$7::class$ = nullptr;

$FieldInfo _MultiSelectionTest_FieldInfo_[] = {
	{"field1", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, field1)},
	{"field2", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, field2)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, frame)},
	{"bounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, bounds)},
	{"menu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, menu)},
	{"anotherWindow", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, anotherWindow)},
	{"menuLoc", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, menuLoc)},
	{"frame2", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(MultiSelectionTest, frame2)},
	{}
};

$MethodInfo _MultiSelectionTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiSelectionTest::*)()>(&MultiSelectionTest::init$))},
	{"biEqual", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($BufferedImage*,$BufferedImage*)>(&MultiSelectionTest::biEqual))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&MultiSelectionTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&MultiSelectionTest::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&MultiSelectionTest::lambda$main$2))},
	{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&MultiSelectionTest::lambda$main$3))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MultiSelectionTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _MultiSelectionTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MultiSelectionTest",
	"java.lang.Object",
	nullptr,
	_MultiSelectionTest_FieldInfo_,
	_MultiSelectionTest_MethodInfo_
};

$Object* allocate$MultiSelectionTest($Class* clazz) {
	return $of($alloc(MultiSelectionTest));
}

$JTextField* MultiSelectionTest::field1 = nullptr;
$JTextField* MultiSelectionTest::field2 = nullptr;
$JFrame* MultiSelectionTest::frame = nullptr;
$Rectangle* MultiSelectionTest::bounds = nullptr;
$JMenu* MultiSelectionTest::menu = nullptr;
$JTextField* MultiSelectionTest::anotherWindow = nullptr;
$Point* MultiSelectionTest::menuLoc = nullptr;
$JFrame* MultiSelectionTest::frame2 = nullptr;

void MultiSelectionTest::init$() {
}

void MultiSelectionTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MultiSelectionTest$$Lambda$lambda$main$0)));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->delay(200);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MultiSelectionTest$$Lambda$lambda$main$1$1)));
	$init(MultiSelectionTest);
	$var($BufferedImage, nosel, robot->createScreenCapture(MultiSelectionTest::bounds));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MultiSelectionTest$$Lambda$requestFocus$2, static_cast<$JTextField*>($nc(MultiSelectionTest::field2)))));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MultiSelectionTest$$Lambda$selectAll$3, static_cast<$JTextField*>($nc(MultiSelectionTest::field2)))));
	robot->waitForIdle();
	robot->delay(200);
	$var($BufferedImage, sel, robot->createScreenCapture(MultiSelectionTest::bounds));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MultiSelectionTest$$Lambda$lambda$main$2$4)));
	robot->mouseMove($nc(MultiSelectionTest::menuLoc)->x, $nc(MultiSelectionTest::menuLoc)->y);
	robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	robot->delay(50);
	robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	robot->waitForIdle();
	robot->delay(200);
	if (!biEqual($(robot->createScreenCapture(MultiSelectionTest::bounds)), sel)) {
		$throwNew($RuntimeException, "Test fails: menu hides selection"_s);
	}
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MultiSelectionTest$$Lambda$clearSelectedPath$5, static_cast<$MenuSelectionManager*>($nc($($MenuSelectionManager::defaultManager()))))));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MultiSelectionTest$$Lambda$requestFocus$2, static_cast<$JTextField*>($nc(MultiSelectionTest::field1)))));
	robot->waitForIdle();
	robot->delay(200);
	if (!biEqual($(robot->createScreenCapture(MultiSelectionTest::bounds)), sel)) {
		$throwNew($RuntimeException, "Test fails: focus lost hides single selection"_s);
	}
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MultiSelectionTest$$Lambda$selectAll$3, static_cast<$JTextField*>($nc(MultiSelectionTest::field1)))));
	robot->waitForIdle();
	robot->delay(200);
	if (!biEqual($(robot->createScreenCapture(MultiSelectionTest::bounds)), nosel)) {
		$throwNew($RuntimeException, "Test fails: focus lost doesn\'t hide selection upon multi selection"_s);
	}
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MultiSelectionTest$$Lambda$requestFocus$2, static_cast<$JTextField*>($nc(MultiSelectionTest::field2)))));
	robot->waitForIdle();
	robot->delay(200);
	if (!biEqual($(robot->createScreenCapture(MultiSelectionTest::bounds)), sel)) {
		$throwNew($RuntimeException, "Test fails: focus gain hides selection upon multi selection"_s);
	}
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MultiSelectionTest$$Lambda$requestFocus$2, static_cast<$JTextField*>($nc(MultiSelectionTest::field2)))));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MultiSelectionTest$$Lambda$lambda$main$3$6)));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MultiSelectionTest$$Lambda$requestFocus$2, static_cast<$JTextField*>($nc(MultiSelectionTest::anotherWindow)))));
	robot->waitForIdle();
	robot->delay(200);
	if (biEqual($(robot->createScreenCapture(MultiSelectionTest::bounds)), nosel)) {
		$throwNew($RuntimeException, "Test fails: switch window hides selection"_s);
	}
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MultiSelectionTest$$Lambda$selectAll$3, static_cast<$JTextField*>($nc(MultiSelectionTest::anotherWindow)))));
	robot->waitForIdle();
	robot->delay(200);
	if (biEqual($(robot->createScreenCapture(MultiSelectionTest::bounds)), sel)) {
		$throwNew($RuntimeException, "Test fails: selection ownership is lost selection is shown"_s);
	}
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(MultiSelectionTest$$Lambda$dispose$7, static_cast<$JFrame*>($nc(MultiSelectionTest::frame2)))));
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(MultiSelectionTest$$Lambda$dispose$7, static_cast<$JFrame*>($nc(MultiSelectionTest::frame)))));
}

bool MultiSelectionTest::biEqual($BufferedImage* i1, $BufferedImage* i2) {
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

void MultiSelectionTest::lambda$main$3() {
	$init(MultiSelectionTest);
	$assignStatic(MultiSelectionTest::frame2, $new($JFrame));
	$var($Point, loc, $nc(MultiSelectionTest::frame)->getLocationOnScreen());
	$nc(loc)->translate(0, $nc(MultiSelectionTest::frame)->getHeight());
	$nc(MultiSelectionTest::frame2)->setLocation(loc);
	$assignStatic(MultiSelectionTest::anotherWindow, $new($JTextField, "textField3"_s));
	$nc(MultiSelectionTest::frame2)->add(static_cast<$Component*>(MultiSelectionTest::anotherWindow));
	$nc(MultiSelectionTest::frame2)->pack();
	$nc(MultiSelectionTest::frame2)->setVisible(true);
}

void MultiSelectionTest::lambda$main$2() {
	$init(MultiSelectionTest);
	$assignStatic(MultiSelectionTest::menuLoc, $nc(MultiSelectionTest::menu)->getLocationOnScreen());
	$nc(MultiSelectionTest::menuLoc)->translate(10, 10);
}

void MultiSelectionTest::lambda$main$1() {
	$init(MultiSelectionTest);
	$assignStatic(MultiSelectionTest::bounds, $nc(MultiSelectionTest::field2)->getBounds());
	$nc(MultiSelectionTest::bounds)->setLocation($($nc(MultiSelectionTest::field2)->getLocationOnScreen()));
}

void MultiSelectionTest::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	$init(MultiSelectionTest);
	$assignStatic(MultiSelectionTest::frame, $new($JFrame));
	$assignStatic(MultiSelectionTest::field1, $new($JTextField, "field1                       "_s));
	$assignStatic(MultiSelectionTest::field2, $new($JTextField, "field2                       "_s));
	$nc(MultiSelectionTest::field1)->setEditable(false);
	$nc(MultiSelectionTest::field2)->setEditable(false);
	$nc($($nc(MultiSelectionTest::frame)->getContentPane()))->setLayout($$new($FlowLayout));
	$nc($($nc(MultiSelectionTest::frame)->getContentPane()))->add(static_cast<$Component*>(MultiSelectionTest::field1));
	$nc($($nc(MultiSelectionTest::frame)->getContentPane()))->add(static_cast<$Component*>(MultiSelectionTest::field2));
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$assignStatic(MultiSelectionTest::menu, $new($JMenu, "menu"_s));
	$nc(MultiSelectionTest::menu)->add($$new($JMenuItem, "item"_s));
	menuBar->add(MultiSelectionTest::menu);
	$nc(MultiSelectionTest::frame)->setJMenuBar(menuBar);
	$nc(MultiSelectionTest::frame)->pack();
	$nc(MultiSelectionTest::frame)->setVisible(true);
}

MultiSelectionTest::MultiSelectionTest() {
}

$Class* MultiSelectionTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MultiSelectionTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return MultiSelectionTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(MultiSelectionTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return MultiSelectionTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(MultiSelectionTest$$Lambda$requestFocus$2::classInfo$.name)) {
			return MultiSelectionTest$$Lambda$requestFocus$2::load$(name, initialize);
		}
		if (name->equals(MultiSelectionTest$$Lambda$selectAll$3::classInfo$.name)) {
			return MultiSelectionTest$$Lambda$selectAll$3::load$(name, initialize);
		}
		if (name->equals(MultiSelectionTest$$Lambda$lambda$main$2$4::classInfo$.name)) {
			return MultiSelectionTest$$Lambda$lambda$main$2$4::load$(name, initialize);
		}
		if (name->equals(MultiSelectionTest$$Lambda$clearSelectedPath$5::classInfo$.name)) {
			return MultiSelectionTest$$Lambda$clearSelectedPath$5::load$(name, initialize);
		}
		if (name->equals(MultiSelectionTest$$Lambda$lambda$main$3$6::classInfo$.name)) {
			return MultiSelectionTest$$Lambda$lambda$main$3$6::load$(name, initialize);
		}
		if (name->equals(MultiSelectionTest$$Lambda$dispose$7::classInfo$.name)) {
			return MultiSelectionTest$$Lambda$dispose$7::load$(name, initialize);
		}
	}
	$loadClass(MultiSelectionTest, name, initialize, &_MultiSelectionTest_ClassInfo_, allocate$MultiSelectionTest);
	return class$;
}

$Class* MultiSelectionTest::class$ = nullptr;