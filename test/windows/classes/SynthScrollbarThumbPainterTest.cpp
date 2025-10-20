#include <SynthScrollbarThumbPainterTest.h>

#include <FillPainter.h>
#include <MyFrame.h>
#include <SynthScrollbarThumbPainterTest$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
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
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BLUE
#undef BUTTON1_DOWN_MASK
#undef GREEN
#undef RED

using $FillPainter = ::FillPainter;
using $MyFrame = ::MyFrame;
using $SynthScrollbarThumbPainterTest$1 = ::SynthScrollbarThumbPainterTest$1;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;

class SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0 : public $Runnable {
	$class(SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SynthScrollbarThumbPainterTest::lambda$disposeTestUI$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0::*)()>(&SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0::load$($String* name, bool initialize) {
	$loadClass(SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0::class$ = nullptr;

$FieldInfo _SynthScrollbarThumbPainterTest_FieldInfo_[] = {
	{"testRobot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(SynthScrollbarThumbPainterTest, testRobot)},
	{"pos", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(SynthScrollbarThumbPainterTest, pos)},
	{"testFrame", "LMyFrame;", nullptr, $PRIVATE | $STATIC, $staticField(SynthScrollbarThumbPainterTest, testFrame)},
	{}
};

$MethodInfo _SynthScrollbarThumbPainterTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthScrollbarThumbPainterTest::*)()>(&SynthScrollbarThumbPainterTest::init$))},
	{"constructTestUI", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&SynthScrollbarThumbPainterTest::constructTestUI)), "java.lang.Exception"},
	{"disposeTestUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SynthScrollbarThumbPainterTest::disposeTestUI)), "java.lang.Exception"},
	{"lambda$disposeTestUI$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&SynthScrollbarThumbPainterTest::lambda$disposeTestUI$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SynthScrollbarThumbPainterTest::main)), "java.lang.Exception"},
	{"testScrollBarThumbPainter", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SynthScrollbarThumbPainterTest::testScrollBarThumbPainter)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _SynthScrollbarThumbPainterTest_InnerClassesInfo_[] = {
	{"SynthScrollbarThumbPainterTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthScrollbarThumbPainterTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SynthScrollbarThumbPainterTest",
	"java.lang.Object",
	nullptr,
	_SynthScrollbarThumbPainterTest_FieldInfo_,
	_SynthScrollbarThumbPainterTest_MethodInfo_,
	nullptr,
	nullptr,
	_SynthScrollbarThumbPainterTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SynthScrollbarThumbPainterTest$1"
};

$Object* allocate$SynthScrollbarThumbPainterTest($Class* clazz) {
	return $of($alloc(SynthScrollbarThumbPainterTest));
}

$Robot* SynthScrollbarThumbPainterTest::testRobot = nullptr;
$Point* SynthScrollbarThumbPainterTest::pos = nullptr;
$MyFrame* SynthScrollbarThumbPainterTest::testFrame = nullptr;

void SynthScrollbarThumbPainterTest::init$() {
}

void SynthScrollbarThumbPainterTest::main($StringArray* args) {
	$init(SynthScrollbarThumbPainterTest);
	$useLocalCurrentObjectStackCache();
	$assignStatic(SynthScrollbarThumbPainterTest::testRobot, $new($Robot));
	$var($String, lookAndFeelString, "javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	$SwingUtilities::invokeAndWait($$new($SynthScrollbarThumbPainterTest$1, lookAndFeelString));
	$nc(SynthScrollbarThumbPainterTest::testRobot)->waitForIdle();
	$nc(SynthScrollbarThumbPainterTest::testRobot)->delay(200);
	testScrollBarThumbPainter();
	disposeTestUI();
}

void SynthScrollbarThumbPainterTest::disposeTestUI() {
	$init(SynthScrollbarThumbPainterTest);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0)));
}

void SynthScrollbarThumbPainterTest::constructTestUI($String* lookAndFeelString) {
	$init(SynthScrollbarThumbPainterTest);
	$useLocalCurrentObjectStackCache();
	$UIManager::setLookAndFeel(lookAndFeelString);
	$init($Color);
	$nc($($UIManager::getLookAndFeelDefaults()))->put("ScrollBar:ScrollBarThumb[Enabled].backgroundPainter"_s, $$new($FillPainter, $Color::RED));
	$nc($($UIManager::getLookAndFeelDefaults()))->put("ScrollBar:ScrollBarThumb[MouseOver].backgroundPainter"_s, $$new($FillPainter, $Color::GREEN));
	$nc($($UIManager::getLookAndFeelDefaults()))->put("ScrollBar:ScrollBarThumb[Pressed].backgroundPainter"_s, $$new($FillPainter, $Color::BLUE));
	$assignStatic(SynthScrollbarThumbPainterTest::testFrame, $new($MyFrame));
}

void SynthScrollbarThumbPainterTest::testScrollBarThumbPainter() {
	$init(SynthScrollbarThumbPainterTest);
	$useLocalCurrentObjectStackCache();
	$var($Point, p, $nc(SynthScrollbarThumbPainterTest::testFrame)->getLocation());
	$nc(SynthScrollbarThumbPainterTest::pos)->setLocation($nc(p)->x + 185, p->y + 80);
	$nc(SynthScrollbarThumbPainterTest::testRobot)->delay(200);
	$var($Color, ScrollbarColor, $nc(SynthScrollbarThumbPainterTest::testFrame)->getPixelColor($nc(SynthScrollbarThumbPainterTest::pos)->x - $nc(p)->x, $nc(SynthScrollbarThumbPainterTest::pos)->y - p->y));
	$init($Color);
	if (!$nc(ScrollbarColor)->equals($Color::RED)) {
		disposeTestUI();
		$throwNew($RuntimeException, "ScrollbarThumb \'Enable\' state color does not match expected color"_s);
	}
	$nc(SynthScrollbarThumbPainterTest::testRobot)->mouseMove($nc(SynthScrollbarThumbPainterTest::pos)->x, $nc(SynthScrollbarThumbPainterTest::pos)->y);
	$nc(SynthScrollbarThumbPainterTest::testRobot)->delay(200);
	$assign(ScrollbarColor, $nc(SynthScrollbarThumbPainterTest::testFrame)->getPixelColor($nc(SynthScrollbarThumbPainterTest::pos)->x - $nc(p)->x, $nc(SynthScrollbarThumbPainterTest::pos)->y - p->y));
	if (!$nc(ScrollbarColor)->equals($Color::GREEN)) {
		disposeTestUI();
		$throwNew($RuntimeException, "ScrollbarThumb \'MouseOver\' state color does not match expected color"_s);
	}
	$nc(SynthScrollbarThumbPainterTest::testRobot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	$nc(SynthScrollbarThumbPainterTest::testRobot)->delay(200);
	$assign(ScrollbarColor, $nc(SynthScrollbarThumbPainterTest::testFrame)->getPixelColor($nc(SynthScrollbarThumbPainterTest::pos)->x - $nc(p)->x, $nc(SynthScrollbarThumbPainterTest::pos)->y - p->y));
	$nc(SynthScrollbarThumbPainterTest::testRobot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	$nc(SynthScrollbarThumbPainterTest::testRobot)->delay(200);
	if (!$nc(ScrollbarColor)->equals($Color::BLUE)) {
		disposeTestUI();
		$throwNew($RuntimeException, "ScrollbarThumb \'Pressed\' state color does not match expected color"_s);
	}
}

void SynthScrollbarThumbPainterTest::lambda$disposeTestUI$0() {
	$init(SynthScrollbarThumbPainterTest);
	$nc(SynthScrollbarThumbPainterTest::testFrame)->dispose();
}

void clinit$SynthScrollbarThumbPainterTest($Class* class$) {
	$assignStatic(SynthScrollbarThumbPainterTest::pos, $new($Point));
}

SynthScrollbarThumbPainterTest::SynthScrollbarThumbPainterTest() {
}

$Class* SynthScrollbarThumbPainterTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0::classInfo$.name)) {
			return SynthScrollbarThumbPainterTest$$Lambda$lambda$disposeTestUI$0::load$(name, initialize);
		}
	}
	$loadClass(SynthScrollbarThumbPainterTest, name, initialize, &_SynthScrollbarThumbPainterTest_ClassInfo_, clinit$SynthScrollbarThumbPainterTest, allocate$SynthScrollbarThumbPainterTest);
	return class$;
}

$Class* SynthScrollbarThumbPainterTest::class$ = nullptr;