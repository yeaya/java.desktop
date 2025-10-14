#include <TestJProgressBarHighlightColor.h>

#include <TestJProgressBarHighlightColor$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
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
#include <javax/swing/JProgressBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef GTK_LAF_CLASS

using $TestJProgressBarHighlightColor$1 = ::TestJProgressBarHighlightColor$1;
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
using $JProgressBar = ::javax::swing::JProgressBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class TestJProgressBarHighlightColor$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestJProgressBarHighlightColor$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJProgressBarHighlightColor::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJProgressBarHighlightColor$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJProgressBarHighlightColor$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJProgressBarHighlightColor$$Lambda$lambda$main$0::*)()>(&TestJProgressBarHighlightColor$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJProgressBarHighlightColor$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJProgressBarHighlightColor$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJProgressBarHighlightColor$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestJProgressBarHighlightColor$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJProgressBarHighlightColor$$Lambda$lambda$main$0::class$ = nullptr;

class TestJProgressBarHighlightColor$$Lambda$dispose$1 : public $Runnable {
	$class(TestJProgressBarHighlightColor$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJProgressBarHighlightColor$$Lambda$dispose$1>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestJProgressBarHighlightColor$$Lambda$dispose$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestJProgressBarHighlightColor$$Lambda$dispose$1, inst$)},
	{}
};
$MethodInfo TestJProgressBarHighlightColor$$Lambda$dispose$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(TestJProgressBarHighlightColor$$Lambda$dispose$1::*)($Window*)>(&TestJProgressBarHighlightColor$$Lambda$dispose$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJProgressBarHighlightColor$$Lambda$dispose$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJProgressBarHighlightColor$$Lambda$dispose$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestJProgressBarHighlightColor$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$loadClass(TestJProgressBarHighlightColor$$Lambda$dispose$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJProgressBarHighlightColor$$Lambda$dispose$1::class$ = nullptr;

$FieldInfo _TestJProgressBarHighlightColor_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestJProgressBarHighlightColor, frame)},
	{"progressBar", "Ljavax/swing/JProgressBar;", nullptr, $PRIVATE | $STATIC, $staticField(TestJProgressBarHighlightColor, progressBar)},
	{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(TestJProgressBarHighlightColor, point)},
	{"rect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(TestJProgressBarHighlightColor, rect)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(TestJProgressBarHighlightColor, robot)},
	{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJProgressBarHighlightColor, GTK_LAF_CLASS)},
	{"minColorDifference", "I", nullptr, $PRIVATE | $STATIC, $staticField(TestJProgressBarHighlightColor, minColorDifference)},
	{}
};

$MethodInfo _TestJProgressBarHighlightColor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJProgressBarHighlightColor::*)()>(&TestJProgressBarHighlightColor::init$))},
	{"blockTillDisplayed", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Component*)>(&TestJProgressBarHighlightColor::blockTillDisplayed))},
	{"getMaxColorDiff", "(Ljava/awt/Color;Ljava/awt/Color;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Color*,$Color*)>(&TestJProgressBarHighlightColor::getMaxColorDiff))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestJProgressBarHighlightColor::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestJProgressBarHighlightColor::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestJProgressBarHighlightColor_InnerClassesInfo_[] = {
	{"TestJProgressBarHighlightColor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJProgressBarHighlightColor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestJProgressBarHighlightColor",
	"java.lang.Object",
	nullptr,
	_TestJProgressBarHighlightColor_FieldInfo_,
	_TestJProgressBarHighlightColor_MethodInfo_,
	nullptr,
	nullptr,
	_TestJProgressBarHighlightColor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestJProgressBarHighlightColor$1"
};

$Object* allocate$TestJProgressBarHighlightColor($Class* clazz) {
	return $of($alloc(TestJProgressBarHighlightColor));
}

$JFrame* TestJProgressBarHighlightColor::frame = nullptr;
$JProgressBar* TestJProgressBarHighlightColor::progressBar = nullptr;
$Point* TestJProgressBarHighlightColor::point = nullptr;
$Rectangle* TestJProgressBarHighlightColor::rect = nullptr;
$Robot* TestJProgressBarHighlightColor::robot = nullptr;
$String* TestJProgressBarHighlightColor::GTK_LAF_CLASS = nullptr;
int32_t TestJProgressBarHighlightColor::minColorDifference = 0;

void TestJProgressBarHighlightColor::init$() {
}

void TestJProgressBarHighlightColor::blockTillDisplayed($Component* comp) {
	$init(TestJProgressBarHighlightColor);
	$var($Point, p, nullptr);
	while (p == nullptr) {
		try {
			$assign(p, $nc(comp)->getLocationOnScreen());
		} catch ($IllegalStateException&) {
			$var($IllegalStateException, e, $catch());
			try {
				$Thread::sleep(500);
			} catch ($InterruptedException&) {
				$catch();
			}
		}
	}
}

int32_t TestJProgressBarHighlightColor::getMaxColorDiff($Color* c1, $Color* c2) {
	$init(TestJProgressBarHighlightColor);
	int32_t var$1 = $nc(c1)->getRed();
	int32_t var$0 = $Math::abs(var$1 - $nc(c2)->getRed());
	int32_t var$3 = $nc(c1)->getGreen();
	int32_t var$2 = $Math::abs(var$3 - $nc(c2)->getGreen());
	int32_t var$4 = $nc(c1)->getBlue();
	return $Math::max(var$0, $Math::max(var$2, $Math::abs(var$4 - $nc(c2)->getBlue())));
}

void TestJProgressBarHighlightColor::main($StringArray* args) {
	$init(TestJProgressBarHighlightColor);
	if (!$nc($($System::getProperty("os.name"_s)))->startsWith("Linux"_s)) {
		$init($System);
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
				if ($nc($($nc(lookAndFeelInfo)->getClassName()))->contains(TestJProgressBarHighlightColor::GTK_LAF_CLASS)) {
					try {
						$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
					} catch ($UnsupportedLookAndFeelException&) {
						$var($UnsupportedLookAndFeelException, ignored, $catch());
						$nc($System::out)->println("GTK L&F could not be set, so this test can not be run in this scenario "_s);
						return;
					}
				}
			}
		}
	}
	$assignStatic(TestJProgressBarHighlightColor::robot, $new($Robot));
	$nc(TestJProgressBarHighlightColor::robot)->setAutoDelay(100);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($TestJProgressBarHighlightColor$1));
			$nc(TestJProgressBarHighlightColor::robot)->waitForIdle();
			$nc(TestJProgressBarHighlightColor::robot)->delay(500);
			blockTillDisplayed(TestJProgressBarHighlightColor::progressBar);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJProgressBarHighlightColor$$Lambda$lambda$main$0)));
			$nc(TestJProgressBarHighlightColor::robot)->waitForIdle();
			$nc(TestJProgressBarHighlightColor::robot)->delay(500);
			$var($Color, backgroundColor, $nc(TestJProgressBarHighlightColor::robot)->getPixelColor($nc(TestJProgressBarHighlightColor::point)->x + $nc(TestJProgressBarHighlightColor::rect)->width * 3 / 4, $nc(TestJProgressBarHighlightColor::point)->y + $nc(TestJProgressBarHighlightColor::rect)->height / 2));
			$nc(TestJProgressBarHighlightColor::robot)->waitForIdle();
			$nc(TestJProgressBarHighlightColor::robot)->delay(500);
			$var($Color, highlightColor, $nc(TestJProgressBarHighlightColor::robot)->getPixelColor($nc(TestJProgressBarHighlightColor::point)->x + $nc(TestJProgressBarHighlightColor::rect)->width / 4, $nc(TestJProgressBarHighlightColor::point)->y + $nc(TestJProgressBarHighlightColor::rect)->height / 2));
			$nc(TestJProgressBarHighlightColor::robot)->waitForIdle();
			$nc(TestJProgressBarHighlightColor::robot)->delay(500);
			int32_t actualColorDifference = getMaxColorDiff(backgroundColor, highlightColor);
			if (actualColorDifference < TestJProgressBarHighlightColor::minColorDifference) {
				$throwNew($RuntimeException, "The expected highlight color for JProgressBar was not found"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (TestJProgressBarHighlightColor::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJProgressBarHighlightColor$$Lambda$dispose$1, static_cast<$JFrame*>($nc(TestJProgressBarHighlightColor::frame)))));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TestJProgressBarHighlightColor::lambda$main$0() {
	$init(TestJProgressBarHighlightColor);
	$assignStatic(TestJProgressBarHighlightColor::point, $nc(TestJProgressBarHighlightColor::progressBar)->getLocationOnScreen());
	$assignStatic(TestJProgressBarHighlightColor::rect, $nc(TestJProgressBarHighlightColor::progressBar)->getBounds());
}

void clinit$TestJProgressBarHighlightColor($Class* class$) {
	$assignStatic(TestJProgressBarHighlightColor::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
	TestJProgressBarHighlightColor::minColorDifference = 100;
}

TestJProgressBarHighlightColor::TestJProgressBarHighlightColor() {
}

$Class* TestJProgressBarHighlightColor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestJProgressBarHighlightColor$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestJProgressBarHighlightColor$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(TestJProgressBarHighlightColor$$Lambda$dispose$1::classInfo$.name)) {
			return TestJProgressBarHighlightColor$$Lambda$dispose$1::load$(name, initialize);
		}
	}
	$loadClass(TestJProgressBarHighlightColor, name, initialize, &_TestJProgressBarHighlightColor_ClassInfo_, clinit$TestJProgressBarHighlightColor, allocate$TestJProgressBarHighlightColor);
	return class$;
}

$Class* TestJProgressBarHighlightColor::class$ = nullptr;