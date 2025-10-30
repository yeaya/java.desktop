#include <TestTooltipBackgroundColor.h>

#include <TestTooltipBackgroundColor$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef GTK_LAF_CLASS

using $TestTooltipBackgroundColor$1 = ::TestTooltipBackgroundColor$1;
using $ComponentArray = $Array<::java::awt::Component>;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class TestTooltipBackgroundColor$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestTooltipBackgroundColor$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestTooltipBackgroundColor::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestTooltipBackgroundColor$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestTooltipBackgroundColor$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestTooltipBackgroundColor$$Lambda$lambda$main$0::*)()>(&TestTooltipBackgroundColor$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestTooltipBackgroundColor$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestTooltipBackgroundColor$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestTooltipBackgroundColor$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestTooltipBackgroundColor$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestTooltipBackgroundColor$$Lambda$lambda$main$0::class$ = nullptr;

class TestTooltipBackgroundColor$$Lambda$dispose$1 : public $Runnable {
	$class(TestTooltipBackgroundColor$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestTooltipBackgroundColor$$Lambda$dispose$1>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestTooltipBackgroundColor$$Lambda$dispose$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestTooltipBackgroundColor$$Lambda$dispose$1, inst$)},
	{}
};
$MethodInfo TestTooltipBackgroundColor$$Lambda$dispose$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(TestTooltipBackgroundColor$$Lambda$dispose$1::*)($Window*)>(&TestTooltipBackgroundColor$$Lambda$dispose$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestTooltipBackgroundColor$$Lambda$dispose$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestTooltipBackgroundColor$$Lambda$dispose$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestTooltipBackgroundColor$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$loadClass(TestTooltipBackgroundColor$$Lambda$dispose$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestTooltipBackgroundColor$$Lambda$dispose$1::class$ = nullptr;

$FieldInfo _TestTooltipBackgroundColor_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestTooltipBackgroundColor, frame)},
	{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(TestTooltipBackgroundColor, label)},
	{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(TestTooltipBackgroundColor, point)},
	{"rect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(TestTooltipBackgroundColor, rect)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(TestTooltipBackgroundColor, robot)},
	{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestTooltipBackgroundColor, GTK_LAF_CLASS)},
	{"minColorDifference", "I", nullptr, $PRIVATE | $STATIC, $staticField(TestTooltipBackgroundColor, minColorDifference)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestTooltipBackgroundColor, latch)},
	{}
};

$MethodInfo _TestTooltipBackgroundColor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestTooltipBackgroundColor::*)()>(&TestTooltipBackgroundColor::init$))},
	{"blockTillDisplayed", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Component*)>(&TestTooltipBackgroundColor::blockTillDisplayed))},
	{"findSubComponent", "(Ljava/awt/Component;Ljava/lang/String;)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Component*(*)($Component*,$String*)>(&TestTooltipBackgroundColor::findSubComponent))},
	{"getMaxColorDiff", "(Ljava/awt/Color;Ljava/awt/Color;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Color*,$Color*)>(&TestTooltipBackgroundColor::getMaxColorDiff))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestTooltipBackgroundColor::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestTooltipBackgroundColor::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestTooltipBackgroundColor_InnerClassesInfo_[] = {
	{"TestTooltipBackgroundColor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestTooltipBackgroundColor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestTooltipBackgroundColor",
	"java.lang.Object",
	nullptr,
	_TestTooltipBackgroundColor_FieldInfo_,
	_TestTooltipBackgroundColor_MethodInfo_,
	nullptr,
	nullptr,
	_TestTooltipBackgroundColor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestTooltipBackgroundColor$1,TestTooltipBackgroundColor$1$2,TestTooltipBackgroundColor$1$1"
};

$Object* allocate$TestTooltipBackgroundColor($Class* clazz) {
	return $of($alloc(TestTooltipBackgroundColor));
}

$JFrame* TestTooltipBackgroundColor::frame = nullptr;
$JLabel* TestTooltipBackgroundColor::label = nullptr;
$Point* TestTooltipBackgroundColor::point = nullptr;
$Rectangle* TestTooltipBackgroundColor::rect = nullptr;
$Robot* TestTooltipBackgroundColor::robot = nullptr;
$String* TestTooltipBackgroundColor::GTK_LAF_CLASS = nullptr;
int32_t TestTooltipBackgroundColor::minColorDifference = 0;
$CountDownLatch* TestTooltipBackgroundColor::latch = nullptr;

void TestTooltipBackgroundColor::init$() {
}

void TestTooltipBackgroundColor::blockTillDisplayed($Component* comp) {
	$init(TestTooltipBackgroundColor);
	$var($Point, p, nullptr);
	while (p == nullptr) {
		try {
			$assign(p, $nc(comp)->getLocationOnScreen());
		} catch ($IllegalStateException& e) {
			try {
				$Thread::sleep(500);
			} catch ($InterruptedException& ie) {
			}
		}
	}
}

$Component* TestTooltipBackgroundColor::findSubComponent($Component* parent, $String* className) {
	$init(TestTooltipBackgroundColor);
	$useLocalCurrentObjectStackCache();
	$var($String, parentClassName, $nc($of(parent))->getClass()->getName());
	if ($nc(parentClassName)->contains(className)) {
		return parent;
	}
	if ($instanceOf($Container, parent)) {
		{
			$var($ComponentArray, arr$, $nc(($cast($Container, parent)))->getComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, child, arr$->get(i$));
				{
					$var($Component, subComponent, findSubComponent(child, className));
					if (subComponent != nullptr) {
						return subComponent;
					}
				}
			}
		}
	}
	return nullptr;
}

int32_t TestTooltipBackgroundColor::getMaxColorDiff($Color* c1, $Color* c2) {
	$init(TestTooltipBackgroundColor);
	int32_t var$1 = $nc(c1)->getRed();
	int32_t var$0 = $Math::abs(var$1 - $nc(c2)->getRed());
	int32_t var$3 = $nc(c1)->getGreen();
	int32_t var$2 = $Math::abs(var$3 - $nc(c2)->getGreen());
	int32_t var$4 = $nc(c1)->getBlue();
	return $Math::max(var$0, $Math::max(var$2, $Math::abs(var$4 - $nc(c2)->getBlue())));
}

void TestTooltipBackgroundColor::main($StringArray* args) {
	$init(TestTooltipBackgroundColor);
	$useLocalCurrentObjectStackCache();
	if (!$nc($($System::getProperty("os.name"_s)))->startsWith("Linux"_s)) {
		$nc($System::out)->println("This test is meant for Linux platform only"_s);
		return;
	}
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			{
				if ($nc($($nc(lookAndFeelInfo)->getClassName()))->contains(TestTooltipBackgroundColor::GTK_LAF_CLASS)) {
					try {
						$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
					} catch ($UnsupportedLookAndFeelException& ignored) {
						$nc($System::out)->println("GTK L&F could not be set, so this test can not be run in this scenario "_s);
						return;
					}
				}
			}
		}
	}
	$assignStatic(TestTooltipBackgroundColor::robot, $new($Robot));
	$nc(TestTooltipBackgroundColor::robot)->setAutoDelay(100);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($TestTooltipBackgroundColor$1));
			$nc(TestTooltipBackgroundColor::robot)->waitForIdle();
			$nc(TestTooltipBackgroundColor::robot)->delay(500);
			blockTillDisplayed(TestTooltipBackgroundColor::label);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestTooltipBackgroundColor$$Lambda$lambda$main$0)));
			$nc(TestTooltipBackgroundColor::robot)->waitForIdle();
			$nc(TestTooltipBackgroundColor::robot)->delay(500);
			$var($Color, backgroundColor, $nc(TestTooltipBackgroundColor::robot)->getPixelColor($nc(TestTooltipBackgroundColor::point)->x + $nc(TestTooltipBackgroundColor::rect)->width / 2, $nc(TestTooltipBackgroundColor::point)->y + $nc(TestTooltipBackgroundColor::rect)->height * 2));
			$nc(TestTooltipBackgroundColor::robot)->waitForIdle();
			$nc(TestTooltipBackgroundColor::robot)->delay(500);
			$nc(TestTooltipBackgroundColor::robot)->mouseMove($nc(TestTooltipBackgroundColor::point)->x + $nc(TestTooltipBackgroundColor::rect)->width / 2, $nc(TestTooltipBackgroundColor::point)->y + $nc(TestTooltipBackgroundColor::rect)->height / 2);
			$nc(TestTooltipBackgroundColor::latch)->await();
			$nc(TestTooltipBackgroundColor::robot)->waitForIdle();
			$nc(TestTooltipBackgroundColor::robot)->delay(500);
			$var($Color, highlightColor, $nc(TestTooltipBackgroundColor::robot)->getPixelColor($nc(TestTooltipBackgroundColor::point)->x + $nc(TestTooltipBackgroundColor::rect)->width / 2, $nc(TestTooltipBackgroundColor::point)->y + $nc(TestTooltipBackgroundColor::rect)->height * 2));
			$nc(TestTooltipBackgroundColor::robot)->waitForIdle();
			$nc(TestTooltipBackgroundColor::robot)->delay(500);
			int32_t actualColorDifference = getMaxColorDiff(backgroundColor, highlightColor);
			if (actualColorDifference < TestTooltipBackgroundColor::minColorDifference) {
				$throwNew($RuntimeException, "The expected background color for tooltip not found"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (TestTooltipBackgroundColor::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestTooltipBackgroundColor$$Lambda$dispose$1, static_cast<$JFrame*>($nc(TestTooltipBackgroundColor::frame)))));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TestTooltipBackgroundColor::lambda$main$0() {
	$init(TestTooltipBackgroundColor);
	$assignStatic(TestTooltipBackgroundColor::point, $nc(TestTooltipBackgroundColor::label)->getLocationOnScreen());
	$assignStatic(TestTooltipBackgroundColor::rect, $nc(TestTooltipBackgroundColor::label)->getBounds());
}

void clinit$TestTooltipBackgroundColor($Class* class$) {
	$assignStatic(TestTooltipBackgroundColor::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
	TestTooltipBackgroundColor::minColorDifference = 100;
	$assignStatic(TestTooltipBackgroundColor::latch, $new($CountDownLatch, 1));
}

TestTooltipBackgroundColor::TestTooltipBackgroundColor() {
}

$Class* TestTooltipBackgroundColor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestTooltipBackgroundColor$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestTooltipBackgroundColor$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(TestTooltipBackgroundColor$$Lambda$dispose$1::classInfo$.name)) {
			return TestTooltipBackgroundColor$$Lambda$dispose$1::load$(name, initialize);
		}
	}
	$loadClass(TestTooltipBackgroundColor, name, initialize, &_TestTooltipBackgroundColor_ClassInfo_, clinit$TestTooltipBackgroundColor, allocate$TestTooltipBackgroundColor);
	return class$;
}

$Class* TestTooltipBackgroundColor::class$ = nullptr;