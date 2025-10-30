#include <JMenuSelectedColorTest.h>

#include <JMenuSelectedColorTest$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef GTK_LAF_CLASS

using $JMenuSelectedColorTest$1 = ::JMenuSelectedColorTest$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class JMenuSelectedColorTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(JMenuSelectedColorTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JMenuSelectedColorTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JMenuSelectedColorTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JMenuSelectedColorTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMenuSelectedColorTest$$Lambda$lambda$main$0::*)()>(&JMenuSelectedColorTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JMenuSelectedColorTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"JMenuSelectedColorTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JMenuSelectedColorTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(JMenuSelectedColorTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JMenuSelectedColorTest$$Lambda$lambda$main$0::class$ = nullptr;

class JMenuSelectedColorTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(JMenuSelectedColorTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JMenuSelectedColorTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JMenuSelectedColorTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JMenuSelectedColorTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMenuSelectedColorTest$$Lambda$lambda$main$1$1::*)()>(&JMenuSelectedColorTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JMenuSelectedColorTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"JMenuSelectedColorTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JMenuSelectedColorTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(JMenuSelectedColorTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JMenuSelectedColorTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class JMenuSelectedColorTest$$Lambda$dispose$2 : public $Runnable {
	$class(JMenuSelectedColorTest$$Lambda$dispose$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JMenuSelectedColorTest$$Lambda$dispose$2>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JMenuSelectedColorTest$$Lambda$dispose$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JMenuSelectedColorTest$$Lambda$dispose$2, inst$)},
	{}
};
$MethodInfo JMenuSelectedColorTest$$Lambda$dispose$2::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(JMenuSelectedColorTest$$Lambda$dispose$2::*)($Window*)>(&JMenuSelectedColorTest$$Lambda$dispose$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JMenuSelectedColorTest$$Lambda$dispose$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"JMenuSelectedColorTest$$Lambda$dispose$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* JMenuSelectedColorTest$$Lambda$dispose$2::load$($String* name, bool initialize) {
	$loadClass(JMenuSelectedColorTest$$Lambda$dispose$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JMenuSelectedColorTest$$Lambda$dispose$2::class$ = nullptr;

$FieldInfo _JMenuSelectedColorTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JMenuSelectedColorTest, frame)},
	{"menu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $STATIC, $staticField(JMenuSelectedColorTest, menu)},
	{"menuitem", "Ljavax/swing/JMenuItem;", nullptr, $PRIVATE | $STATIC, $staticField(JMenuSelectedColorTest, menuitem)},
	{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(JMenuSelectedColorTest, point)},
	{"rect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(JMenuSelectedColorTest, rect)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(JMenuSelectedColorTest, robot)},
	{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JMenuSelectedColorTest, GTK_LAF_CLASS)},
	{"minColorDifference", "I", nullptr, $PRIVATE | $STATIC, $staticField(JMenuSelectedColorTest, minColorDifference)},
	{}
};

$MethodInfo _JMenuSelectedColorTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JMenuSelectedColorTest::*)()>(&JMenuSelectedColorTest::init$))},
	{"blockTillDisplayed", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Component*)>(&JMenuSelectedColorTest::blockTillDisplayed))},
	{"getMaxColorDiff", "(Ljava/awt/Color;Ljava/awt/Color;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($Color*,$Color*)>(&JMenuSelectedColorTest::getMaxColorDiff))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&JMenuSelectedColorTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&JMenuSelectedColorTest::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JMenuSelectedColorTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _JMenuSelectedColorTest_InnerClassesInfo_[] = {
	{"JMenuSelectedColorTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JMenuSelectedColorTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JMenuSelectedColorTest",
	"java.lang.Object",
	nullptr,
	_JMenuSelectedColorTest_FieldInfo_,
	_JMenuSelectedColorTest_MethodInfo_,
	nullptr,
	nullptr,
	_JMenuSelectedColorTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JMenuSelectedColorTest$1"
};

$Object* allocate$JMenuSelectedColorTest($Class* clazz) {
	return $of($alloc(JMenuSelectedColorTest));
}

$JFrame* JMenuSelectedColorTest::frame = nullptr;
$JMenu* JMenuSelectedColorTest::menu = nullptr;
$JMenuItem* JMenuSelectedColorTest::menuitem = nullptr;
$Point* JMenuSelectedColorTest::point = nullptr;
$Rectangle* JMenuSelectedColorTest::rect = nullptr;
$Robot* JMenuSelectedColorTest::robot = nullptr;
$String* JMenuSelectedColorTest::GTK_LAF_CLASS = nullptr;
int32_t JMenuSelectedColorTest::minColorDifference = 0;

void JMenuSelectedColorTest::init$() {
}

void JMenuSelectedColorTest::blockTillDisplayed($Component* comp) {
	$init(JMenuSelectedColorTest);
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

int32_t JMenuSelectedColorTest::getMaxColorDiff($Color* c1, $Color* c2) {
	$init(JMenuSelectedColorTest);
	int32_t var$1 = $nc(c1)->getRed();
	int32_t var$0 = $Math::abs(var$1 - $nc(c2)->getRed());
	int32_t var$3 = $nc(c1)->getGreen();
	int32_t var$2 = $Math::abs(var$3 - $nc(c2)->getGreen());
	int32_t var$4 = $nc(c1)->getBlue();
	return $Math::max(var$0, $Math::max(var$2, $Math::abs(var$4 - $nc(c2)->getBlue())));
}

void JMenuSelectedColorTest::main($StringArray* args) {
	$init(JMenuSelectedColorTest);
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
				if ($nc($($nc(lookAndFeelInfo)->getClassName()))->contains(JMenuSelectedColorTest::GTK_LAF_CLASS)) {
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
	$assignStatic(JMenuSelectedColorTest::robot, $new($Robot));
	$nc(JMenuSelectedColorTest::robot)->setAutoDelay(100);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($JMenuSelectedColorTest$1));
			$nc(JMenuSelectedColorTest::robot)->waitForIdle();
			$nc(JMenuSelectedColorTest::robot)->delay(500);
			blockTillDisplayed(JMenuSelectedColorTest::menu);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JMenuSelectedColorTest$$Lambda$lambda$main$0)));
			$nc(JMenuSelectedColorTest::robot)->waitForIdle();
			$nc(JMenuSelectedColorTest::robot)->delay(500);
			$var($Color, backgroundColor, $nc(JMenuSelectedColorTest::robot)->getPixelColor($nc(JMenuSelectedColorTest::point)->x + $nc(JMenuSelectedColorTest::rect)->width / 2, $nc(JMenuSelectedColorTest::point)->y + $nc(JMenuSelectedColorTest::rect)->height / 2));
			$nc(JMenuSelectedColorTest::robot)->waitForIdle();
			$nc(JMenuSelectedColorTest::robot)->delay(500);
			$nc(JMenuSelectedColorTest::menu)->setSelected(true);
			$nc(JMenuSelectedColorTest::robot)->waitForIdle();
			$nc(JMenuSelectedColorTest::robot)->delay(500);
			$var($Color, highlightColor, $nc(JMenuSelectedColorTest::robot)->getPixelColor($nc(JMenuSelectedColorTest::point)->x + $nc(JMenuSelectedColorTest::rect)->width / 2, $nc(JMenuSelectedColorTest::point)->y + $nc(JMenuSelectedColorTest::rect)->height / 2));
			$nc(JMenuSelectedColorTest::robot)->waitForIdle();
			$nc(JMenuSelectedColorTest::robot)->delay(500);
			int32_t actualColorDifference = getMaxColorDiff(backgroundColor, highlightColor);
			if (actualColorDifference < JMenuSelectedColorTest::minColorDifference) {
				$throwNew($RuntimeException, "The expected highlight color for Menu was not found"_s);
			}
			$nc(JMenuSelectedColorTest::robot)->mouseMove($nc(JMenuSelectedColorTest::point)->x + $nc(JMenuSelectedColorTest::rect)->width / 2, $nc(JMenuSelectedColorTest::point)->y + $nc(JMenuSelectedColorTest::rect)->height / 2);
			$nc(JMenuSelectedColorTest::robot)->waitForIdle();
			$nc(JMenuSelectedColorTest::robot)->delay(500);
			$nc(JMenuSelectedColorTest::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
			$nc(JMenuSelectedColorTest::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
			$nc(JMenuSelectedColorTest::robot)->waitForIdle();
			$nc(JMenuSelectedColorTest::robot)->delay(500);
			blockTillDisplayed(JMenuSelectedColorTest::menuitem);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JMenuSelectedColorTest$$Lambda$lambda$main$1$1)));
			$nc(JMenuSelectedColorTest::robot)->waitForIdle();
			$nc(JMenuSelectedColorTest::robot)->delay(500);
			$assign(backgroundColor, $nc(JMenuSelectedColorTest::robot)->getPixelColor($nc(JMenuSelectedColorTest::point)->x + $nc(JMenuSelectedColorTest::rect)->width / 2, $nc(JMenuSelectedColorTest::point)->y + $nc(JMenuSelectedColorTest::rect)->height / 2));
			$nc(JMenuSelectedColorTest::robot)->waitForIdle();
			$nc(JMenuSelectedColorTest::robot)->delay(500);
			$nc(JMenuSelectedColorTest::robot)->mouseMove($nc(JMenuSelectedColorTest::point)->x + $nc(JMenuSelectedColorTest::rect)->width / 2, $nc(JMenuSelectedColorTest::point)->y + $nc(JMenuSelectedColorTest::rect)->height / 2);
			$nc(JMenuSelectedColorTest::robot)->waitForIdle();
			$nc(JMenuSelectedColorTest::robot)->delay(500);
			$assign(highlightColor, $nc(JMenuSelectedColorTest::robot)->getPixelColor($nc(JMenuSelectedColorTest::point)->x + $nc(JMenuSelectedColorTest::rect)->width / 2, $nc(JMenuSelectedColorTest::point)->y + $nc(JMenuSelectedColorTest::rect)->height / 2));
			$nc(JMenuSelectedColorTest::robot)->waitForIdle();
			$nc(JMenuSelectedColorTest::robot)->delay(500);
			actualColorDifference = getMaxColorDiff(backgroundColor, highlightColor);
			if (actualColorDifference < JMenuSelectedColorTest::minColorDifference) {
				$throwNew($RuntimeException, "The expected highlight color for Menuitem was not found"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (JMenuSelectedColorTest::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JMenuSelectedColorTest$$Lambda$dispose$2, static_cast<$JFrame*>($nc(JMenuSelectedColorTest::frame)))));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void JMenuSelectedColorTest::lambda$main$1() {
	$init(JMenuSelectedColorTest);
	$assignStatic(JMenuSelectedColorTest::point, $nc(JMenuSelectedColorTest::menuitem)->getLocationOnScreen());
	$assignStatic(JMenuSelectedColorTest::rect, $nc(JMenuSelectedColorTest::menuitem)->getBounds());
}

void JMenuSelectedColorTest::lambda$main$0() {
	$init(JMenuSelectedColorTest);
	$assignStatic(JMenuSelectedColorTest::point, $nc(JMenuSelectedColorTest::menu)->getLocationOnScreen());
	$assignStatic(JMenuSelectedColorTest::rect, $nc(JMenuSelectedColorTest::menu)->getBounds());
}

void clinit$JMenuSelectedColorTest($Class* class$) {
	$assignStatic(JMenuSelectedColorTest::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
	JMenuSelectedColorTest::minColorDifference = 100;
}

JMenuSelectedColorTest::JMenuSelectedColorTest() {
}

$Class* JMenuSelectedColorTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JMenuSelectedColorTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return JMenuSelectedColorTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(JMenuSelectedColorTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return JMenuSelectedColorTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(JMenuSelectedColorTest$$Lambda$dispose$2::classInfo$.name)) {
			return JMenuSelectedColorTest$$Lambda$dispose$2::load$(name, initialize);
		}
	}
	$loadClass(JMenuSelectedColorTest, name, initialize, &_JMenuSelectedColorTest_ClassInfo_, clinit$JMenuSelectedColorTest, allocate$JMenuSelectedColorTest);
	return class$;
}

$Class* JMenuSelectedColorTest::class$ = nullptr;