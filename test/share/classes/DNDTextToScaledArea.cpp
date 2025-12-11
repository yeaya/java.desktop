#include <DNDTextToScaledArea.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef CENTER
#undef SIZE
#undef SOUTH
#undef TEXT

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class DNDTextToScaledArea$$Lambda$lambda$test$0 : public $Runnable {
	$class(DNDTextToScaledArea$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($GraphicsDevice* device) {
		$set(this, device, device);
	}
	virtual void run() override {
		DNDTextToScaledArea::lambda$test$0(device);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DNDTextToScaledArea$$Lambda$lambda$test$0>());
	}
	$GraphicsDevice* device = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DNDTextToScaledArea$$Lambda$lambda$test$0::fieldInfos[2] = {
	{"device", "Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC, $field(DNDTextToScaledArea$$Lambda$lambda$test$0, device)},
	{}
};
$MethodInfo DNDTextToScaledArea$$Lambda$lambda$test$0::methodInfos[3] = {
	{"<init>", "(Ljava/awt/GraphicsDevice;)V", nullptr, $PUBLIC, $method(static_cast<void(DNDTextToScaledArea$$Lambda$lambda$test$0::*)($GraphicsDevice*)>(&DNDTextToScaledArea$$Lambda$lambda$test$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DNDTextToScaledArea$$Lambda$lambda$test$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"DNDTextToScaledArea$$Lambda$lambda$test$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* DNDTextToScaledArea$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$loadClass(DNDTextToScaledArea$$Lambda$lambda$test$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DNDTextToScaledArea$$Lambda$lambda$test$0::class$ = nullptr;

class DNDTextToScaledArea$$Lambda$lambda$test$1$1 : public $Runnable {
	$class(DNDTextToScaledArea$$Lambda$lambda$test$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DNDTextToScaledArea::lambda$test$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DNDTextToScaledArea$$Lambda$lambda$test$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DNDTextToScaledArea$$Lambda$lambda$test$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DNDTextToScaledArea$$Lambda$lambda$test$1$1::*)()>(&DNDTextToScaledArea$$Lambda$lambda$test$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DNDTextToScaledArea$$Lambda$lambda$test$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"DNDTextToScaledArea$$Lambda$lambda$test$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* DNDTextToScaledArea$$Lambda$lambda$test$1$1::load$($String* name, bool initialize) {
	$loadClass(DNDTextToScaledArea$$Lambda$lambda$test$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DNDTextToScaledArea$$Lambda$lambda$test$1$1::class$ = nullptr;

class DNDTextToScaledArea$$Lambda$lambda$test$2$2 : public $Runnable {
	$class(DNDTextToScaledArea$$Lambda$lambda$test$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DNDTextToScaledArea::lambda$test$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DNDTextToScaledArea$$Lambda$lambda$test$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DNDTextToScaledArea$$Lambda$lambda$test$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DNDTextToScaledArea$$Lambda$lambda$test$2$2::*)()>(&DNDTextToScaledArea$$Lambda$lambda$test$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DNDTextToScaledArea$$Lambda$lambda$test$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"DNDTextToScaledArea$$Lambda$lambda$test$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* DNDTextToScaledArea$$Lambda$lambda$test$2$2::load$($String* name, bool initialize) {
	$loadClass(DNDTextToScaledArea$$Lambda$lambda$test$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DNDTextToScaledArea$$Lambda$lambda$test$2$2::class$ = nullptr;

$FieldInfo _DNDTextToScaledArea_FieldInfo_[] = {
	{"SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DNDTextToScaledArea, SIZE)},
	{"TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DNDTextToScaledArea, TEXT)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(DNDTextToScaledArea, frame)},
	{"srcTextArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(DNDTextToScaledArea, srcTextArea)},
	{"dstTextArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(DNDTextToScaledArea, dstTextArea)},
	{"srcPoint", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(DNDTextToScaledArea, srcPoint)},
	{"dstPoint", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(DNDTextToScaledArea, dstPoint)},
	{"passed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(DNDTextToScaledArea, passed)},
	{}
};

$MethodInfo _DNDTextToScaledArea_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DNDTextToScaledArea::*)()>(&DNDTextToScaledArea::init$))},
	{"createAndShowGUI", "(Ljava/awt/GraphicsDevice;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($GraphicsDevice*)>(&DNDTextToScaledArea::createAndShowGUI))},
	{"dragAndDrop", "(Ljava/awt/Robot;Ljava/awt/Point;Ljava/awt/Point;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Robot*,$Point*,$Point*)>(&DNDTextToScaledArea::dragAndDrop)), "java.lang.Exception"},
	{"getPoint", "(Ljava/awt/Component;D)Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Point*(*)($Component*,double)>(&DNDTextToScaledArea::getPoint))},
	{"lambda$test$0", "(Ljava/awt/GraphicsDevice;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($GraphicsDevice*)>(&DNDTextToScaledArea::lambda$test$0))},
	{"lambda$test$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&DNDTextToScaledArea::lambda$test$1))},
	{"lambda$test$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&DNDTextToScaledArea::lambda$test$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DNDTextToScaledArea::main)), "java.lang.Exception"},
	{"test", "(Ljava/awt/GraphicsDevice;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($GraphicsDevice*)>(&DNDTextToScaledArea::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _DNDTextToScaledArea_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DNDTextToScaledArea",
	"java.lang.Object",
	nullptr,
	_DNDTextToScaledArea_FieldInfo_,
	_DNDTextToScaledArea_MethodInfo_
};

$Object* allocate$DNDTextToScaledArea($Class* clazz) {
	return $of($alloc(DNDTextToScaledArea));
}

$String* DNDTextToScaledArea::TEXT = nullptr;
$JFrame* DNDTextToScaledArea::frame = nullptr;
$JTextArea* DNDTextToScaledArea::srcTextArea = nullptr;
$JTextArea* DNDTextToScaledArea::dstTextArea = nullptr;
$volatile($Point*) DNDTextToScaledArea::srcPoint = nullptr;
$volatile($Point*) DNDTextToScaledArea::dstPoint = nullptr;
$volatile(bool) DNDTextToScaledArea::passed = false;

void DNDTextToScaledArea::init$() {
}

void DNDTextToScaledArea::main($StringArray* args) {
	$init(DNDTextToScaledArea);
	$useLocalCurrentObjectStackCache();
	$var($GraphicsEnvironment, lge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	{
		$var($GraphicsDeviceArray, arr$, $nc(lge)->getScreenDevices());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($GraphicsDevice, device, arr$->get(i$));
			{
				test(device);
			}
		}
	}
}

void DNDTextToScaledArea::test($GraphicsDevice* device) {
	$init(DNDTextToScaledArea);
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(150);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(DNDTextToScaledArea$$Lambda$lambda$test$0, device)));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(DNDTextToScaledArea$$Lambda$lambda$test$1$1)));
	robot->waitForIdle();
	robot->mouseMove($nc(DNDTextToScaledArea::dstPoint)->x, $nc(DNDTextToScaledArea::dstPoint)->y);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
	robot->waitForIdle();
	dragAndDrop(robot, DNDTextToScaledArea::srcPoint, DNDTextToScaledArea::dstPoint);
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(DNDTextToScaledArea$$Lambda$lambda$test$2$2)));
	robot->waitForIdle();
	if (!DNDTextToScaledArea::passed) {
		$throwNew($RuntimeException, "Text Drag and Drop failed!"_s);
	}
}

void DNDTextToScaledArea::createAndShowGUI($GraphicsDevice* device) {
	$init(DNDTextToScaledArea);
	$useLocalCurrentObjectStackCache();
	$assignStatic(DNDTextToScaledArea::frame, $new($JFrame, $($nc(device)->getDefaultConfiguration())));
	$var($Rectangle, screen, $nc($($nc(device)->getDefaultConfiguration()))->getBounds());
	int32_t x = $cast(int32_t, ($nc(screen)->getCenterX() - DNDTextToScaledArea::SIZE / 2));
	int32_t y = $cast(int32_t, (screen->getCenterY() - DNDTextToScaledArea::SIZE / 2));
	$nc(DNDTextToScaledArea::frame)->setBounds(x, y, DNDTextToScaledArea::SIZE, DNDTextToScaledArea::SIZE);
	$var($JPanel, panel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$assignStatic(DNDTextToScaledArea::srcTextArea, $new($JTextArea, DNDTextToScaledArea::TEXT));
	$nc(DNDTextToScaledArea::srcTextArea)->setDragEnabled(true);
	$nc(DNDTextToScaledArea::srcTextArea)->selectAll();
	$assignStatic(DNDTextToScaledArea::dstTextArea, $new($JTextArea));
	$init($BorderLayout);
	panel->add(static_cast<$Component*>(DNDTextToScaledArea::dstTextArea), $of($BorderLayout::CENTER));
	panel->add(static_cast<$Component*>(DNDTextToScaledArea::srcTextArea), $of($BorderLayout::SOUTH));
	$nc($($nc(DNDTextToScaledArea::frame)->getContentPane()))->add(static_cast<$Component*>(panel));
	$nc(DNDTextToScaledArea::frame)->setVisible(true);
}

$Point* DNDTextToScaledArea::getPoint($Component* component, double scale) {
	$init(DNDTextToScaledArea);
	$useLocalCurrentObjectStackCache();
	$var($Point, point, $nc(component)->getLocationOnScreen());
	$var($Dimension, bounds, component->getSize());
	$nc(point)->translate($cast(int32_t, ($nc(bounds)->width * scale)), $cast(int32_t, (bounds->height * scale)));
	return point;
}

void DNDTextToScaledArea::dragAndDrop($Robot* robot, $Point* src, $Point* dst) {
	$init(DNDTextToScaledArea);
	int32_t x1 = $nc(src)->x;
	int32_t y1 = src->y;
	int32_t x2 = $nc(dst)->x;
	int32_t y2 = dst->y;
	$nc(robot)->mouseMove(x1, y1);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	int32_t var$0 = $Math::abs(x2 - x1);
	float dmax = (float)$Math::max(var$0, $Math::abs(y2 - y1));
	float dx = (x2 - x1) / dmax;
	float dy = (y2 - y1) / dmax;
	for (int32_t i = 0; i <= dmax; i += 5) {
		robot->mouseMove($cast(int32_t, (x1 + dx * i)), $cast(int32_t, (y1 + dy * i)));
	}
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
}

void DNDTextToScaledArea::lambda$test$2() {
	$init(DNDTextToScaledArea);
	DNDTextToScaledArea::passed = $nc(DNDTextToScaledArea::TEXT)->equals($($nc(DNDTextToScaledArea::dstTextArea)->getText()));
	$nc(DNDTextToScaledArea::frame)->dispose();
}

void DNDTextToScaledArea::lambda$test$1() {
	$init(DNDTextToScaledArea);
	$assignStatic(DNDTextToScaledArea::srcPoint, getPoint(DNDTextToScaledArea::srcTextArea, 0.1));
	$assignStatic(DNDTextToScaledArea::dstPoint, getPoint(DNDTextToScaledArea::dstTextArea, 0.75));
}

void DNDTextToScaledArea::lambda$test$0($GraphicsDevice* device) {
	$init(DNDTextToScaledArea);
	createAndShowGUI(device);
}

void clinit$DNDTextToScaledArea($Class* class$) {
	$assignStatic(DNDTextToScaledArea::TEXT, "ABCDEFGH"_s);
	DNDTextToScaledArea::passed = false;
}

DNDTextToScaledArea::DNDTextToScaledArea() {
}

$Class* DNDTextToScaledArea::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DNDTextToScaledArea$$Lambda$lambda$test$0::classInfo$.name)) {
			return DNDTextToScaledArea$$Lambda$lambda$test$0::load$(name, initialize);
		}
		if (name->equals(DNDTextToScaledArea$$Lambda$lambda$test$1$1::classInfo$.name)) {
			return DNDTextToScaledArea$$Lambda$lambda$test$1$1::load$(name, initialize);
		}
		if (name->equals(DNDTextToScaledArea$$Lambda$lambda$test$2$2::classInfo$.name)) {
			return DNDTextToScaledArea$$Lambda$lambda$test$2$2::load$(name, initialize);
		}
	}
	$loadClass(DNDTextToScaledArea, name, initialize, &_DNDTextToScaledArea_ClassInfo_, clinit$DNDTextToScaledArea, allocate$DNDTextToScaledArea);
	return class$;
}

$Class* DNDTextToScaledArea::class$ = nullptr;