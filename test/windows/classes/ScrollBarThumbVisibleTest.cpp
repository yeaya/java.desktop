#include <ScrollBarThumbVisibleTest.h>

#include <ScrollBarThumbVisibleTest$1.h>
#include <ScrollBarThumbVisibleTest$2.h>
#include <ScrollBarThumbVisibleTest$3.h>
#include <java/awt/Adjustable.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef VERTICAL

using $ScrollBarThumbVisibleTest$1 = ::ScrollBarThumbVisibleTest$1;
using $ScrollBarThumbVisibleTest$2 = ::ScrollBarThumbVisibleTest$2;
using $ScrollBarThumbVisibleTest$3 = ::ScrollBarThumbVisibleTest$3;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Adjustable = ::java::awt::Adjustable;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollBar = ::javax::swing::JScrollBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

$FieldInfo _ScrollBarThumbVisibleTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(ScrollBarThumbVisibleTest, frame)},
	{"point", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(ScrollBarThumbVisibleTest, point)},
	{"bar", "Ljavax/swing/JScrollBar;", nullptr, $PRIVATE | $STATIC, $staticField(ScrollBarThumbVisibleTest, bar)},
	{}
};

$MethodInfo _ScrollBarThumbVisibleTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ScrollBarThumbVisibleTest::*)()>(&ScrollBarThumbVisibleTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ScrollBarThumbVisibleTest::main)), "java.lang.Exception"},
	{"setup", "(Ljavax/swing/JFrame;)V", nullptr, $STATIC, $method(static_cast<void(*)($JFrame*)>(&ScrollBarThumbVisibleTest::setup))},
	{}
};

$InnerClassInfo _ScrollBarThumbVisibleTest_InnerClassesInfo_[] = {
	{"ScrollBarThumbVisibleTest$3", nullptr, nullptr, 0},
	{"ScrollBarThumbVisibleTest$2", nullptr, nullptr, 0},
	{"ScrollBarThumbVisibleTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScrollBarThumbVisibleTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ScrollBarThumbVisibleTest",
	"java.lang.Object",
	nullptr,
	_ScrollBarThumbVisibleTest_FieldInfo_,
	_ScrollBarThumbVisibleTest_MethodInfo_,
	nullptr,
	nullptr,
	_ScrollBarThumbVisibleTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ScrollBarThumbVisibleTest$3,ScrollBarThumbVisibleTest$2,ScrollBarThumbVisibleTest$1"
};

$Object* allocate$ScrollBarThumbVisibleTest($Class* clazz) {
	return $of($alloc(ScrollBarThumbVisibleTest));
}

$JFrame* ScrollBarThumbVisibleTest::frame = nullptr;
$Point* ScrollBarThumbVisibleTest::point = nullptr;
$JScrollBar* ScrollBarThumbVisibleTest::bar = nullptr;

void ScrollBarThumbVisibleTest::init$() {
}

void ScrollBarThumbVisibleTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, info, arr$->get(i$));
			{
				if ("Nimbus"_s->equals($($nc(info)->getName()))) {
					try {
						$UIManager::setLookAndFeel($($nc(info)->getClassName()));
					} catch ($Exception&) {
						$catch();
					}
					break;
				}
			}
		}
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($ScrollBarThumbVisibleTest$1));
			$var($Robot, robot, $new($Robot));
			robot->delay(200);
			robot->waitForIdle();
			$SwingUtilities::invokeAndWait($$new($ScrollBarThumbVisibleTest$2));
			$init(ScrollBarThumbVisibleTest);
			$var($Color, color1, robot->getPixelColor($nc(ScrollBarThumbVisibleTest::point)->x + 48, $nc(ScrollBarThumbVisibleTest::point)->y + 55));
			$var($Color, color2, robot->getPixelColor($nc(ScrollBarThumbVisibleTest::point)->x + 48, $nc(ScrollBarThumbVisibleTest::point)->y + 125));
			$init($System);
			$nc($System::out)->println($of(color1));
			$nc($System::out)->println($of(color2));
			if ($nc(color1)->equals(color2)) {
				$throwNew($RuntimeException, "Thump is not visible"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$SwingUtilities::invokeAndWait($$new($ScrollBarThumbVisibleTest$3));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$init($System);
	$nc($System::out)->println("ok"_s);
}

void ScrollBarThumbVisibleTest::setup($JFrame* frame) {
	$init(ScrollBarThumbVisibleTest);
	$assignStatic(ScrollBarThumbVisibleTest::bar, $new($JScrollBar, $Adjustable::VERTICAL, 500, 0, 0, 1000));
	$nc($($nc(frame)->getContentPane()))->add(static_cast<$Component*>(ScrollBarThumbVisibleTest::bar));
	frame->setSize(50, 250);
	frame->setLocation(100, 100);
	frame->setVisible(true);
}

ScrollBarThumbVisibleTest::ScrollBarThumbVisibleTest() {
}

$Class* ScrollBarThumbVisibleTest::load$($String* name, bool initialize) {
	$loadClass(ScrollBarThumbVisibleTest, name, initialize, &_ScrollBarThumbVisibleTest_ClassInfo_, allocate$ScrollBarThumbVisibleTest);
	return class$;
}

$Class* ScrollBarThumbVisibleTest::class$ = nullptr;