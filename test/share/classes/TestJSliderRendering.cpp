#include <TestJSliderRendering.h>

#include <TestJSliderRendering$1.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef GTK_LAF_CLASS

using $TestJSliderRendering$1 = ::TestJSliderRendering$1;
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
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JSlider = ::javax::swing::JSlider;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class TestJSliderRendering$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestJSliderRendering$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJSliderRendering::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJSliderRendering$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJSliderRendering$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJSliderRendering$$Lambda$lambda$main$0::*)()>(&TestJSliderRendering$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJSliderRendering$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJSliderRendering$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJSliderRendering$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestJSliderRendering$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJSliderRendering$$Lambda$lambda$main$0::class$ = nullptr;

class TestJSliderRendering$$Lambda$dispose$1 : public $Runnable {
	$class(TestJSliderRendering$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJSliderRendering$$Lambda$dispose$1>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestJSliderRendering$$Lambda$dispose$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestJSliderRendering$$Lambda$dispose$1, inst$)},
	{}
};
$MethodInfo TestJSliderRendering$$Lambda$dispose$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(TestJSliderRendering$$Lambda$dispose$1::*)($Window*)>(&TestJSliderRendering$$Lambda$dispose$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJSliderRendering$$Lambda$dispose$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJSliderRendering$$Lambda$dispose$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestJSliderRendering$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$loadClass(TestJSliderRendering$$Lambda$dispose$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJSliderRendering$$Lambda$dispose$1::class$ = nullptr;

$FieldInfo _TestJSliderRendering_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestJSliderRendering, frame)},
	{"slider", "Ljavax/swing/JSlider;", nullptr, $PRIVATE | $STATIC, $staticField(TestJSliderRendering, slider)},
	{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(TestJSliderRendering, point)},
	{"rect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(TestJSliderRendering, rect)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(TestJSliderRendering, robot)},
	{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJSliderRendering, GTK_LAF_CLASS)},
	{"minColorDifference", "I", nullptr, $PRIVATE | $STATIC, $staticField(TestJSliderRendering, minColorDifference)},
	{}
};

$MethodInfo _TestJSliderRendering_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJSliderRendering::*)()>(&TestJSliderRendering::init$))},
	{"blockTillDisplayed", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Component*)>(&TestJSliderRendering::blockTillDisplayed))},
	{"getMaxColorDiff", "(Ljava/awt/Color;Ljava/awt/Color;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Color*,$Color*)>(&TestJSliderRendering::getMaxColorDiff))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestJSliderRendering::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestJSliderRendering::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestJSliderRendering_InnerClassesInfo_[] = {
	{"TestJSliderRendering$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJSliderRendering_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestJSliderRendering",
	"java.lang.Object",
	nullptr,
	_TestJSliderRendering_FieldInfo_,
	_TestJSliderRendering_MethodInfo_,
	nullptr,
	nullptr,
	_TestJSliderRendering_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestJSliderRendering$1"
};

$Object* allocate$TestJSliderRendering($Class* clazz) {
	return $of($alloc(TestJSliderRendering));
}

$JFrame* TestJSliderRendering::frame = nullptr;
$JSlider* TestJSliderRendering::slider = nullptr;
$Point* TestJSliderRendering::point = nullptr;
$Rectangle* TestJSliderRendering::rect = nullptr;
$Robot* TestJSliderRendering::robot = nullptr;
$String* TestJSliderRendering::GTK_LAF_CLASS = nullptr;
int32_t TestJSliderRendering::minColorDifference = 0;

void TestJSliderRendering::init$() {
}

void TestJSliderRendering::blockTillDisplayed($Component* comp) {
	$init(TestJSliderRendering);
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

int32_t TestJSliderRendering::getMaxColorDiff($Color* c1, $Color* c2) {
	$init(TestJSliderRendering);
	int32_t var$1 = $nc(c1)->getRed();
	int32_t var$0 = $Math::abs(var$1 - $nc(c2)->getRed());
	int32_t var$3 = $nc(c1)->getGreen();
	int32_t var$2 = $Math::abs(var$3 - $nc(c2)->getGreen());
	int32_t var$4 = $nc(c1)->getBlue();
	return $Math::max(var$0, $Math::max(var$2, $Math::abs(var$4 - $nc(c2)->getBlue())));
}

void TestJSliderRendering::main($StringArray* args) {
	$init(TestJSliderRendering);
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
				if ($nc($($nc(lookAndFeelInfo)->getClassName()))->contains(TestJSliderRendering::GTK_LAF_CLASS)) {
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
	$assignStatic(TestJSliderRendering::robot, $new($Robot));
	$nc(TestJSliderRendering::robot)->setAutoDelay(100);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($TestJSliderRendering$1));
			$nc(TestJSliderRendering::robot)->waitForIdle();
			$nc(TestJSliderRendering::robot)->delay(500);
			blockTillDisplayed(TestJSliderRendering::slider);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJSliderRendering$$Lambda$lambda$main$0)));
			$nc(TestJSliderRendering::robot)->waitForIdle();
			$nc(TestJSliderRendering::robot)->delay(500);
			int32_t h = $nc(TestJSliderRendering::point)->y + $nc(TestJSliderRendering::rect)->height * 6 / 7;
			$var($Color, backgroundColor, $nc(TestJSliderRendering::robot)->getPixelColor($nc(TestJSliderRendering::point)->x + $nc(TestJSliderRendering::rect)->width / 4, h));
			$nc(TestJSliderRendering::robot)->waitForIdle();
			bool knobFound = false;
			for (int32_t i = $nc(TestJSliderRendering::point)->x + $nc(TestJSliderRendering::rect)->width / 4; i < $nc(TestJSliderRendering::point)->x + $nc(TestJSliderRendering::rect)->width * 3 / 4; i += 2) {
				$var($Color, highlightColor, $nc(TestJSliderRendering::robot)->getPixelColor(i, h));
				if (getMaxColorDiff(backgroundColor, highlightColor) > TestJSliderRendering::minColorDifference) {
					knobFound = true;
					break;
				}
				$nc(TestJSliderRendering::robot)->waitForIdle();
			}
			if (!knobFound) {
				$throwNew($RuntimeException, "The slider is not rendered properly"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (TestJSliderRendering::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJSliderRendering$$Lambda$dispose$1, static_cast<$JFrame*>($nc(TestJSliderRendering::frame)))));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TestJSliderRendering::lambda$main$0() {
	$init(TestJSliderRendering);
	$assignStatic(TestJSliderRendering::point, $nc(TestJSliderRendering::slider)->getLocationOnScreen());
	$assignStatic(TestJSliderRendering::rect, $nc(TestJSliderRendering::slider)->getBounds());
}

void clinit$TestJSliderRendering($Class* class$) {
	$assignStatic(TestJSliderRendering::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
	TestJSliderRendering::minColorDifference = 50;
}

TestJSliderRendering::TestJSliderRendering() {
}

$Class* TestJSliderRendering::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestJSliderRendering$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestJSliderRendering$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(TestJSliderRendering$$Lambda$dispose$1::classInfo$.name)) {
			return TestJSliderRendering$$Lambda$dispose$1::load$(name, initialize);
		}
	}
	$loadClass(TestJSliderRendering, name, initialize, &_TestJSliderRendering_ClassInfo_, clinit$TestJSliderRendering, allocate$TestJSliderRendering);
	return class$;
}

$Class* TestJSliderRendering::class$ = nullptr;