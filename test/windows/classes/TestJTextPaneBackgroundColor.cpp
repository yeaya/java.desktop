#include <TestJTextPaneBackgroundColor.h>

#include <TestJTextPaneBackgroundColor$1.h>
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
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef GTK_LAF_CLASS

using $TestJTextPaneBackgroundColor$1 = ::TestJTextPaneBackgroundColor$1;
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
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JTextPane = ::javax::swing::JTextPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TestJTextPaneBackgroundColor$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestJTextPaneBackgroundColor$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestJTextPaneBackgroundColor::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJTextPaneBackgroundColor$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestJTextPaneBackgroundColor$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJTextPaneBackgroundColor$$Lambda$lambda$main$0::*)()>(&TestJTextPaneBackgroundColor$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJTextPaneBackgroundColor$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJTextPaneBackgroundColor$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestJTextPaneBackgroundColor$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestJTextPaneBackgroundColor$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJTextPaneBackgroundColor$$Lambda$lambda$main$0::class$ = nullptr;

class TestJTextPaneBackgroundColor$$Lambda$dispose$1 : public $Runnable {
	$class(TestJTextPaneBackgroundColor$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestJTextPaneBackgroundColor$$Lambda$dispose$1>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestJTextPaneBackgroundColor$$Lambda$dispose$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestJTextPaneBackgroundColor$$Lambda$dispose$1, inst$)},
	{}
};
$MethodInfo TestJTextPaneBackgroundColor$$Lambda$dispose$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(TestJTextPaneBackgroundColor$$Lambda$dispose$1::*)($Window*)>(&TestJTextPaneBackgroundColor$$Lambda$dispose$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestJTextPaneBackgroundColor$$Lambda$dispose$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestJTextPaneBackgroundColor$$Lambda$dispose$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestJTextPaneBackgroundColor$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$loadClass(TestJTextPaneBackgroundColor$$Lambda$dispose$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestJTextPaneBackgroundColor$$Lambda$dispose$1::class$ = nullptr;

$FieldInfo _TestJTextPaneBackgroundColor_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestJTextPaneBackgroundColor, frame)},
	{"textPane", "Ljavax/swing/JTextPane;", nullptr, $PRIVATE | $STATIC, $staticField(TestJTextPaneBackgroundColor, textPane)},
	{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(TestJTextPaneBackgroundColor, point)},
	{"rect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(TestJTextPaneBackgroundColor, rect)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(TestJTextPaneBackgroundColor, robot)},
	{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestJTextPaneBackgroundColor, GTK_LAF_CLASS)},
	{}
};

$MethodInfo _TestJTextPaneBackgroundColor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestJTextPaneBackgroundColor::*)()>(&TestJTextPaneBackgroundColor::init$))},
	{"blockTillDisplayed", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Component*)>(&TestJTextPaneBackgroundColor::blockTillDisplayed))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestJTextPaneBackgroundColor::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestJTextPaneBackgroundColor::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestJTextPaneBackgroundColor_InnerClassesInfo_[] = {
	{"TestJTextPaneBackgroundColor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestJTextPaneBackgroundColor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestJTextPaneBackgroundColor",
	"java.lang.Object",
	nullptr,
	_TestJTextPaneBackgroundColor_FieldInfo_,
	_TestJTextPaneBackgroundColor_MethodInfo_,
	nullptr,
	nullptr,
	_TestJTextPaneBackgroundColor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestJTextPaneBackgroundColor$1"
};

$Object* allocate$TestJTextPaneBackgroundColor($Class* clazz) {
	return $of($alloc(TestJTextPaneBackgroundColor));
}

$JFrame* TestJTextPaneBackgroundColor::frame = nullptr;
$JTextPane* TestJTextPaneBackgroundColor::textPane = nullptr;
$Point* TestJTextPaneBackgroundColor::point = nullptr;
$Rectangle* TestJTextPaneBackgroundColor::rect = nullptr;
$Robot* TestJTextPaneBackgroundColor::robot = nullptr;
$String* TestJTextPaneBackgroundColor::GTK_LAF_CLASS = nullptr;

void TestJTextPaneBackgroundColor::init$() {
}

void TestJTextPaneBackgroundColor::blockTillDisplayed($Component* comp) {
	$init(TestJTextPaneBackgroundColor);
	$useLocalCurrentObjectStackCache();
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

void TestJTextPaneBackgroundColor::main($StringArray* args) {
	$init(TestJTextPaneBackgroundColor);
	$useLocalCurrentObjectStackCache();
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
				if ($nc($($nc(lookAndFeelInfo)->getClassName()))->contains(TestJTextPaneBackgroundColor::GTK_LAF_CLASS)) {
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
	$assignStatic(TestJTextPaneBackgroundColor::robot, $new($Robot));
	$nc(TestJTextPaneBackgroundColor::robot)->setAutoDelay(100);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($TestJTextPaneBackgroundColor$1));
			$nc(TestJTextPaneBackgroundColor::robot)->waitForIdle();
			$nc(TestJTextPaneBackgroundColor::robot)->delay(500);
			blockTillDisplayed(TestJTextPaneBackgroundColor::textPane);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJTextPaneBackgroundColor$$Lambda$lambda$main$0)));
			$nc(TestJTextPaneBackgroundColor::robot)->waitForIdle();
			$nc(TestJTextPaneBackgroundColor::robot)->delay(500);
			$var($Color, textpaneBackgroundColor, $nc(TestJTextPaneBackgroundColor::robot)->getPixelColor($nc(TestJTextPaneBackgroundColor::point)->x + $nc(TestJTextPaneBackgroundColor::rect)->width / 2, $nc(TestJTextPaneBackgroundColor::point)->y + $nc(TestJTextPaneBackgroundColor::rect)->height / 2));
			$nc(TestJTextPaneBackgroundColor::robot)->waitForIdle();
			$nc(TestJTextPaneBackgroundColor::robot)->delay(500);
			$var($Color, panelColor, $nc(TestJTextPaneBackgroundColor::robot)->getPixelColor($nc(TestJTextPaneBackgroundColor::point)->x - $nc(TestJTextPaneBackgroundColor::rect)->width / 2, $nc(TestJTextPaneBackgroundColor::point)->y + $nc(TestJTextPaneBackgroundColor::rect)->height / 2));
			$nc(TestJTextPaneBackgroundColor::robot)->waitForIdle();
			$nc(TestJTextPaneBackgroundColor::robot)->delay(500);
			$nc($System::out)->println($of(textpaneBackgroundColor));
			$nc($System::out)->println($of(panelColor));
			if ($nc(textpaneBackgroundColor)->equals(panelColor)) {
				$throwNew($RuntimeException, "The expected background color for TextPane was not found"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (TestJTextPaneBackgroundColor::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestJTextPaneBackgroundColor$$Lambda$dispose$1, static_cast<$JFrame*>($nc(TestJTextPaneBackgroundColor::frame)))));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TestJTextPaneBackgroundColor::lambda$main$0() {
	$init(TestJTextPaneBackgroundColor);
	$assignStatic(TestJTextPaneBackgroundColor::point, $nc(TestJTextPaneBackgroundColor::textPane)->getLocationOnScreen());
	$assignStatic(TestJTextPaneBackgroundColor::rect, $nc(TestJTextPaneBackgroundColor::textPane)->getBounds());
}

TestJTextPaneBackgroundColor::TestJTextPaneBackgroundColor() {
}

void clinit$TestJTextPaneBackgroundColor($Class* class$) {
	$assignStatic(TestJTextPaneBackgroundColor::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
}

$Class* TestJTextPaneBackgroundColor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestJTextPaneBackgroundColor$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestJTextPaneBackgroundColor$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(TestJTextPaneBackgroundColor$$Lambda$dispose$1::classInfo$.name)) {
			return TestJTextPaneBackgroundColor$$Lambda$dispose$1::load$(name, initialize);
		}
	}
	$loadClass(TestJTextPaneBackgroundColor, name, initialize, &_TestJTextPaneBackgroundColor_ClassInfo_, clinit$TestJTextPaneBackgroundColor, allocate$TestJTextPaneBackgroundColor);
	return class$;
}

$Class* TestJTextPaneBackgroundColor::class$ = nullptr;