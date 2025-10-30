#include <ScaledFrameBackgroundTest.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
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
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BACKGROUND
#undef EXIT_ON_CLOSE
#undef RED

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
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
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class ScaledFrameBackgroundTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(ScaledFrameBackgroundTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ScaledFrameBackgroundTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ScaledFrameBackgroundTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ScaledFrameBackgroundTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScaledFrameBackgroundTest$$Lambda$lambda$main$0::*)()>(&ScaledFrameBackgroundTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ScaledFrameBackgroundTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"ScaledFrameBackgroundTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ScaledFrameBackgroundTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(ScaledFrameBackgroundTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ScaledFrameBackgroundTest$$Lambda$lambda$main$0::class$ = nullptr;

class ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($RectangleArray* rects) {
		$set(this, rects, rects);
	}
	virtual void run() override {
		ScaledFrameBackgroundTest::lambda$main$1(rects);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1>());
	}
	$RectangleArray* rects = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1::fieldInfos[2] = {
	{"rects", "[Ljava/awt/Rectangle;", nullptr, $PUBLIC, $field(ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1, rects)},
	{}
};
$MethodInfo ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "([Ljava/awt/Rectangle;)V", nullptr, $PUBLIC, $method(static_cast<void(ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1::*)($RectangleArray*)>(&ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class ScaledFrameBackgroundTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(ScaledFrameBackgroundTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ScaledFrameBackgroundTest::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ScaledFrameBackgroundTest$$Lambda$lambda$main$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ScaledFrameBackgroundTest$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScaledFrameBackgroundTest$$Lambda$lambda$main$2$2::*)()>(&ScaledFrameBackgroundTest$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ScaledFrameBackgroundTest$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"ScaledFrameBackgroundTest$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ScaledFrameBackgroundTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(ScaledFrameBackgroundTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ScaledFrameBackgroundTest$$Lambda$lambda$main$2$2::class$ = nullptr;

$FieldInfo _ScaledFrameBackgroundTest_FieldInfo_[] = {
	{"BACKGROUND", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ScaledFrameBackgroundTest, BACKGROUND)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(ScaledFrameBackgroundTest, frame)},
	{}
};

$MethodInfo _ScaledFrameBackgroundTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScaledFrameBackgroundTest::*)()>(&ScaledFrameBackgroundTest::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&ScaledFrameBackgroundTest::lambda$main$0))},
	{"lambda$main$1", "([Ljava/awt/Rectangle;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($RectangleArray*)>(&ScaledFrameBackgroundTest::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&ScaledFrameBackgroundTest::lambda$main$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ScaledFrameBackgroundTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ScaledFrameBackgroundTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ScaledFrameBackgroundTest",
	"java.lang.Object",
	nullptr,
	_ScaledFrameBackgroundTest_FieldInfo_,
	_ScaledFrameBackgroundTest_MethodInfo_
};

$Object* allocate$ScaledFrameBackgroundTest($Class* clazz) {
	return $of($alloc(ScaledFrameBackgroundTest));
}

$Color* ScaledFrameBackgroundTest::BACKGROUND = nullptr;
$JFrame* ScaledFrameBackgroundTest::frame = nullptr;

void ScaledFrameBackgroundTest::init$() {
}

void ScaledFrameBackgroundTest::main($StringArray* args) {
	$init(ScaledFrameBackgroundTest);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(100);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ScaledFrameBackgroundTest$$Lambda$lambda$main$0)));
			robot->waitForIdle();
			robot->delay(1000);
			$var($RectangleArray, rects, $new($RectangleArray, 1));
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1, rects)));
			$var($Rectangle, bounds, rects->get(0));
			int32_t x = $nc(bounds)->x + bounds->width / 4;
			int32_t y = bounds->y + bounds->height / 4;
			$var($Color, color, robot->getPixelColor(x, y));
			if (!$nc(ScaledFrameBackgroundTest::BACKGROUND)->equals(color)) {
				$throwNew($RuntimeException, "Wrong backgound color!"_s);
			}
			x = bounds->x + 3 * bounds->width / 4;
			y = bounds->y + 3 * bounds->height / 4;
			$assign(color, robot->getPixelColor(x, y));
			if (!$nc(ScaledFrameBackgroundTest::BACKGROUND)->equals(color)) {
				$throwNew($RuntimeException, "Wrong backgound color!!"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (ScaledFrameBackgroundTest::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ScaledFrameBackgroundTest$$Lambda$lambda$main$2$2)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ScaledFrameBackgroundTest::lambda$main$2() {
	$init(ScaledFrameBackgroundTest);
	$nc(ScaledFrameBackgroundTest::frame)->dispose();
}

void ScaledFrameBackgroundTest::lambda$main$1($RectangleArray* rects) {
	$init(ScaledFrameBackgroundTest);
	$nc(rects)->set(0, $($nc(ScaledFrameBackgroundTest::frame)->getBounds()));
}

void ScaledFrameBackgroundTest::lambda$main$0() {
	$init(ScaledFrameBackgroundTest);
	$useLocalCurrentObjectStackCache();
	$assignStatic(ScaledFrameBackgroundTest::frame, $new($JFrame));
	$nc(ScaledFrameBackgroundTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(ScaledFrameBackgroundTest::frame)->setSize(400, 300);
	$var($JPanel, panel, $new($JPanel));
	panel->setBackground(ScaledFrameBackgroundTest::BACKGROUND);
	$nc($($nc(ScaledFrameBackgroundTest::frame)->getContentPane()))->add(static_cast<$Component*>(panel));
	$nc(ScaledFrameBackgroundTest::frame)->setVisible(true);
	$nc(ScaledFrameBackgroundTest::frame)->setLocationRelativeTo(nullptr);
}

void clinit$ScaledFrameBackgroundTest($Class* class$) {
	$init($Color);
	$assignStatic(ScaledFrameBackgroundTest::BACKGROUND, $Color::RED);
}

ScaledFrameBackgroundTest::ScaledFrameBackgroundTest() {
}

$Class* ScaledFrameBackgroundTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ScaledFrameBackgroundTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return ScaledFrameBackgroundTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return ScaledFrameBackgroundTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(ScaledFrameBackgroundTest$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return ScaledFrameBackgroundTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
	}
	$loadClass(ScaledFrameBackgroundTest, name, initialize, &_ScaledFrameBackgroundTest_ClassInfo_, clinit$ScaledFrameBackgroundTest, allocate$ScaledFrameBackgroundTest);
	return class$;
}

$Class* ScaledFrameBackgroundTest::class$ = nullptr;