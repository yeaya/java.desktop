#include <NormalBoundsTest.h>

#include <NormalBoundsTest$1.h>
#include <NormalBoundsTest$10.h>
#include <NormalBoundsTest$2.h>
#include <NormalBoundsTest$3.h>
#include <NormalBoundsTest$4.h>
#include <NormalBoundsTest$5.h>
#include <NormalBoundsTest$6.h>
#include <NormalBoundsTest$7.h>
#include <NormalBoundsTest$8.h>
#include <NormalBoundsTest$9.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/WindowConstants.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef BUTTON2_MASK
#undef BUTTON3_MASK
#undef DO_NOTHING_ON_CLOSE
#undef EXIT_ON_CLOSE
#undef OUTLINE_DRAG_MODE

using $NormalBoundsTest$1 = ::NormalBoundsTest$1;
using $NormalBoundsTest$10 = ::NormalBoundsTest$10;
using $NormalBoundsTest$2 = ::NormalBoundsTest$2;
using $NormalBoundsTest$3 = ::NormalBoundsTest$3;
using $NormalBoundsTest$4 = ::NormalBoundsTest$4;
using $NormalBoundsTest$5 = ::NormalBoundsTest$5;
using $NormalBoundsTest$6 = ::NormalBoundsTest$6;
using $NormalBoundsTest$7 = ::NormalBoundsTest$7;
using $NormalBoundsTest$8 = ::NormalBoundsTest$8;
using $NormalBoundsTest$9 = ::NormalBoundsTest$9;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $WindowConstants = ::javax::swing::WindowConstants;

$FieldInfo _NormalBoundsTest_FieldInfo_[] = {
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(NormalBoundsTest, mainFrame)},
	{"internalFrame", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $STATIC, $staticField(NormalBoundsTest, internalFrame)},
	{"bounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(NormalBoundsTest, bounds)},
	{}
};

$MethodInfo _NormalBoundsTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NormalBoundsTest::*)()>(&NormalBoundsTest::init$))},
	{"createUI", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&NormalBoundsTest::createUI))},
	{"drag", "(Ljava/awt/Robot;Ljava/awt/Point;Ljava/awt/Point;I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Robot*,$Point*,$Point*,int32_t)>(&NormalBoundsTest::drag))},
	{"executeTest", "(Ljava/awt/Robot;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Robot*)>(&NormalBoundsTest::executeTest)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NormalBoundsTest::main)), "java.lang.Exception"},
	{"mouseMove", "(Ljava/awt/Robot;Ljava/awt/Point;Ljava/awt/Point;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Robot*,$Point*,$Point*)>(&NormalBoundsTest::mouseMove))},
	{"signWOZero", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&NormalBoundsTest::signWOZero))},
	{"tryLookAndFeel", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&NormalBoundsTest::tryLookAndFeel))},
	{}
};

$InnerClassInfo _NormalBoundsTest_InnerClassesInfo_[] = {
	{"NormalBoundsTest$10", nullptr, nullptr, 0},
	{"NormalBoundsTest$9", nullptr, nullptr, 0},
	{"NormalBoundsTest$8", nullptr, nullptr, 0},
	{"NormalBoundsTest$7", nullptr, nullptr, 0},
	{"NormalBoundsTest$6", nullptr, nullptr, 0},
	{"NormalBoundsTest$5", nullptr, nullptr, 0},
	{"NormalBoundsTest$4", nullptr, nullptr, 0},
	{"NormalBoundsTest$3", nullptr, nullptr, 0},
	{"NormalBoundsTest$2", nullptr, nullptr, 0},
	{"NormalBoundsTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NormalBoundsTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NormalBoundsTest",
	"java.lang.Object",
	nullptr,
	_NormalBoundsTest_FieldInfo_,
	_NormalBoundsTest_MethodInfo_,
	nullptr,
	nullptr,
	_NormalBoundsTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"NormalBoundsTest$10,NormalBoundsTest$9,NormalBoundsTest$8,NormalBoundsTest$7,NormalBoundsTest$6,NormalBoundsTest$5,NormalBoundsTest$4,NormalBoundsTest$3,NormalBoundsTest$2,NormalBoundsTest$1"
};

$Object* allocate$NormalBoundsTest($Class* clazz) {
	return $of($alloc(NormalBoundsTest));
}

$JFrame* NormalBoundsTest::mainFrame = nullptr;
$JInternalFrame* NormalBoundsTest::internalFrame = nullptr;
$Rectangle* NormalBoundsTest::bounds = nullptr;

void NormalBoundsTest::init$() {
}

void NormalBoundsTest::createUI($String* lookAndFeelString) {
	$init(NormalBoundsTest);
	$assignStatic(NormalBoundsTest::internalFrame, $new($JInternalFrame, "Internal"_s, true, true, true, true));
	$nc(NormalBoundsTest::internalFrame)->setDefaultCloseOperation($WindowConstants::DO_NOTHING_ON_CLOSE);
	$nc(NormalBoundsTest::internalFrame)->setSize(200, 200);
	$var($JDesktopPane, desktopPane, $new($JDesktopPane));
	desktopPane->setDragMode($JDesktopPane::OUTLINE_DRAG_MODE);
	desktopPane->add(static_cast<$Component*>(NormalBoundsTest::internalFrame));
	$assignStatic(NormalBoundsTest::mainFrame, $new($JFrame, lookAndFeelString));
	$nc(NormalBoundsTest::mainFrame)->setSize(640, 480);
	$nc(NormalBoundsTest::mainFrame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(NormalBoundsTest::mainFrame)->setContentPane(desktopPane);
	$nc(NormalBoundsTest::mainFrame)->setVisible(true);
	$nc(NormalBoundsTest::internalFrame)->setVisible(true);
}

int32_t NormalBoundsTest::signWOZero(int32_t i) {
	return (i > 0) ? 1 : -1;
}

void NormalBoundsTest::mouseMove($Robot* robot, $Point* startPt, $Point* endPt) {
	int32_t dx = $nc(endPt)->x - $nc(startPt)->x;
	int32_t dy = endPt->y - startPt->y;
	int32_t ax = $Math::abs(dx) * 2;
	int32_t ay = $Math::abs(dy) * 2;
	int32_t sx = signWOZero(dx);
	int32_t sy = signWOZero(dy);
	int32_t x = startPt->x;
	int32_t y = startPt->y;
	int32_t d = 0;
	if (ax > ay) {
		d = ay - ax / 2;
		while (true) {
			$nc(robot)->mouseMove(x, y);
			robot->delay(50);
			if (x == endPt->x) {
				return;
			}
			if (d >= 0) {
				y = y + sy;
				d = d - ax;
			}
			x = x + sx;
			d = d + ay;
		}
	} else {
		d = ax - ay / 2;
		while (true) {
			$nc(robot)->mouseMove(x, y);
			robot->delay(50);
			if (y == endPt->y) {
				return;
			}
			if (d >= 0) {
				x = x + sx;
				d = d - ay;
			}
			y = y + sy;
			d = d + ax;
		}
	}
}

void NormalBoundsTest::drag($Robot* r, $Point* startPt, $Point* endPt, int32_t button) {
	if (!(button == $InputEvent::BUTTON1_MASK || button == $InputEvent::BUTTON2_MASK || button == $InputEvent::BUTTON3_MASK)) {
		$throwNew($IllegalArgumentException, "invalid mouse button"_s);
	}
	$nc(r)->mouseMove($nc(startPt)->x, startPt->y);
	r->mousePress(button);
	{
		$var($Throwable, var$0, nullptr);
		try {
			mouseMove(r, startPt, endPt);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			r->mouseRelease(button);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool NormalBoundsTest::tryLookAndFeel($String* lookAndFeelString) {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel(lookAndFeelString);
		return true;
	} catch ($UnsupportedLookAndFeelException&) {
		$var($Exception, e, $catch());
		return false;
	} catch ($ClassNotFoundException&) {
		$var($Exception, e, $catch());
		return false;
	} catch ($InstantiationException&) {
		$var($Exception, e, $catch());
		return false;
	} catch ($IllegalAccessException&) {
		$var($Exception, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

void NormalBoundsTest::executeTest($Robot* robot) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait($$new($NormalBoundsTest$1));
	$nc(robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($NormalBoundsTest$2));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($NormalBoundsTest$3, robot));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($NormalBoundsTest$4));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($NormalBoundsTest$5));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($NormalBoundsTest$6));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($NormalBoundsTest$7));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($NormalBoundsTest$8));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($NormalBoundsTest$9));
	robot->waitForIdle();
	$init(NormalBoundsTest);
	$nc(NormalBoundsTest::mainFrame)->dispose();
}

void NormalBoundsTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				$var($String, lookAndFeelString, $nc(lookAndFeelItem)->getClassName());
				if (tryLookAndFeel(lookAndFeelString)) {
					$SwingUtilities::invokeAndWait($$new($NormalBoundsTest$10, lookAndFeelString));
					robot->waitForIdle();
					executeTest(robot);
				} else {
					$throwNew($RuntimeException, "Setting Look and Feel Failed"_s);
				}
			}
		}
	}
}

NormalBoundsTest::NormalBoundsTest() {
}

$Class* NormalBoundsTest::load$($String* name, bool initialize) {
	$loadClass(NormalBoundsTest, name, initialize, &_NormalBoundsTest_ClassInfo_, allocate$NormalBoundsTest);
	return class$;
}

$Class* NormalBoundsTest::class$ = nullptr;