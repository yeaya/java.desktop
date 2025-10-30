#include <RepaintOnFrameIconifiedStateChangeTest.h>

#include <RepaintOnFrameIconifiedStateChangeTest$1.h>
#include <RepaintOnFrameIconifiedStateChangeTest$2.h>
#include <RepaintOnFrameIconifiedStateChangeTest$3.h>
#include <RepaintOnFrameIconifiedStateChangeTest$4.h>
#include <RepaintOnFrameIconifiedStateChangeTest$5.h>
#include <RepaintOnFrameIconifiedStateChangeTest$6.h>
#include <RepaintOnFrameIconifiedStateChangeTest$7.h>
#include <java/awt/AWTException.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Robot.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE
#undef ICONIFIED
#undef NORMAL

using $RepaintOnFrameIconifiedStateChangeTest$1 = ::RepaintOnFrameIconifiedStateChangeTest$1;
using $RepaintOnFrameIconifiedStateChangeTest$2 = ::RepaintOnFrameIconifiedStateChangeTest$2;
using $RepaintOnFrameIconifiedStateChangeTest$3 = ::RepaintOnFrameIconifiedStateChangeTest$3;
using $RepaintOnFrameIconifiedStateChangeTest$4 = ::RepaintOnFrameIconifiedStateChangeTest$4;
using $RepaintOnFrameIconifiedStateChangeTest$5 = ::RepaintOnFrameIconifiedStateChangeTest$5;
using $RepaintOnFrameIconifiedStateChangeTest$6 = ::RepaintOnFrameIconifiedStateChangeTest$6;
using $RepaintOnFrameIconifiedStateChangeTest$7 = ::RepaintOnFrameIconifiedStateChangeTest$7;
using $JComponentArray = $Array<::javax::swing::JComponent>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $AWTException = ::java::awt::AWTException;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Robot = ::java::awt::Robot;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

$FieldInfo _RepaintOnFrameIconifiedStateChangeTest_FieldInfo_[] = {
	{"strsForComps", "[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RepaintOnFrameIconifiedStateChangeTest, strsForComps)},
	{"lblIndex", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RepaintOnFrameIconifiedStateChangeTest, lblIndex)},
	{"btnIndex", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RepaintOnFrameIconifiedStateChangeTest, btnIndex)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(RepaintOnFrameIconifiedStateChangeTest, frame)},
	{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(RepaintOnFrameIconifiedStateChangeTest, label)},
	{"button", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(RepaintOnFrameIconifiedStateChangeTest, button)},
	{"comps", "[Ljavax/swing/JComponent;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(RepaintOnFrameIconifiedStateChangeTest, comps)},
	{"compRedrawn", "[Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(RepaintOnFrameIconifiedStateChangeTest, compRedrawn)},
	{"compRedrawnFlagCanBeSet", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(RepaintOnFrameIconifiedStateChangeTest, compRedrawnFlagCanBeSet)},
	{}
};

$MethodInfo _RepaintOnFrameIconifiedStateChangeTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RepaintOnFrameIconifiedStateChangeTest::*)()>(&RepaintOnFrameIconifiedStateChangeTest::init$))},
	{"createGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&RepaintOnFrameIconifiedStateChangeTest::createGUI))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RepaintOnFrameIconifiedStateChangeTest::main))},
	{}
};

$InnerClassInfo _RepaintOnFrameIconifiedStateChangeTest_InnerClassesInfo_[] = {
	{"RepaintOnFrameIconifiedStateChangeTest$7", nullptr, nullptr, 0},
	{"RepaintOnFrameIconifiedStateChangeTest$6", nullptr, nullptr, 0},
	{"RepaintOnFrameIconifiedStateChangeTest$5", nullptr, nullptr, 0},
	{"RepaintOnFrameIconifiedStateChangeTest$4", nullptr, nullptr, 0},
	{"RepaintOnFrameIconifiedStateChangeTest$3", nullptr, nullptr, 0},
	{"RepaintOnFrameIconifiedStateChangeTest$2", nullptr, nullptr, 0},
	{"RepaintOnFrameIconifiedStateChangeTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintOnFrameIconifiedStateChangeTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RepaintOnFrameIconifiedStateChangeTest",
	"java.lang.Object",
	nullptr,
	_RepaintOnFrameIconifiedStateChangeTest_FieldInfo_,
	_RepaintOnFrameIconifiedStateChangeTest_MethodInfo_,
	nullptr,
	nullptr,
	_RepaintOnFrameIconifiedStateChangeTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"RepaintOnFrameIconifiedStateChangeTest$7,RepaintOnFrameIconifiedStateChangeTest$6,RepaintOnFrameIconifiedStateChangeTest$5,RepaintOnFrameIconifiedStateChangeTest$4,RepaintOnFrameIconifiedStateChangeTest$3,RepaintOnFrameIconifiedStateChangeTest$2,RepaintOnFrameIconifiedStateChangeTest$1"
};

$Object* allocate$RepaintOnFrameIconifiedStateChangeTest($Class* clazz) {
	return $of($alloc(RepaintOnFrameIconifiedStateChangeTest));
}

$StringArray2* RepaintOnFrameIconifiedStateChangeTest::strsForComps = nullptr;
$volatile($JFrame*) RepaintOnFrameIconifiedStateChangeTest::frame = nullptr;
$volatile($JLabel*) RepaintOnFrameIconifiedStateChangeTest::label = nullptr;
$volatile($JButton*) RepaintOnFrameIconifiedStateChangeTest::button = nullptr;
$volatile($JComponentArray*) RepaintOnFrameIconifiedStateChangeTest::comps = nullptr;
$volatile($booleans*) RepaintOnFrameIconifiedStateChangeTest::compRedrawn = nullptr;
$volatile(bool) RepaintOnFrameIconifiedStateChangeTest::compRedrawnFlagCanBeSet = false;

void RepaintOnFrameIconifiedStateChangeTest::init$() {
}

void RepaintOnFrameIconifiedStateChangeTest::main($StringArray* args) {
	$init(RepaintOnFrameIconifiedStateChangeTest);
	$useLocalCurrentObjectStackCache();
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	bool var$0 = !$nc(toolkit)->isFrameStateSupported($JFrame::ICONIFIED);
	if (var$0 || !$nc(toolkit)->isFrameStateSupported($JFrame::NORMAL)) {
		$nc($System::out)->println("ICONIFIED or NORMAL frame states are notsupported by a toolkit."_s);
		return;
	}
	{
		$var($Throwable, var$1, nullptr);
		try {
			try {
				$SwingUtilities::invokeAndWait($$new($RepaintOnFrameIconifiedStateChangeTest$1));
				$var($Robot, robot, $new($Robot));
				robot->delay(2000);
				$SwingUtilities::invokeAndWait($$new($RepaintOnFrameIconifiedStateChangeTest$2));
				robot->delay(2000);
				$SwingUtilities::invokeAndWait($$new($RepaintOnFrameIconifiedStateChangeTest$3));
				robot->delay(2000);
				$SwingUtilities::invokeAndWait($$new($RepaintOnFrameIconifiedStateChangeTest$4));
				robot->delay(2000);
				int32_t notRedrawnCompsCount = 0;
				for (int32_t i = 0; i < $nc(RepaintOnFrameIconifiedStateChangeTest::compRedrawn)->length; ++i) {
					if (!$nc(RepaintOnFrameIconifiedStateChangeTest::compRedrawn)->get(i)) {
						++notRedrawnCompsCount;
						$nc($System::out)->println($($String::format("Not redrawn component #%d: \'%s\'"_s, $$new($ObjectArray, {
							$($of($Integer::valueOf(i))),
							$of($nc(RepaintOnFrameIconifiedStateChangeTest::comps)->get(i))
						}))));
					}
				}
				if (notRedrawnCompsCount > 0) {
					$throwNew($RuntimeException, $($String::format("\'%d\' components were not redrawn."_s, $$new($ObjectArray, {$($of($Integer::valueOf(notRedrawnCompsCount)))}))));
				}
				$nc($System::out)->println("Test passed."_s);
			} catch ($InterruptedException& e) {
				$throwNew($RuntimeException, static_cast<$Throwable*>(e));
			} catch ($InvocationTargetException& e) {
				$throwNew($RuntimeException, static_cast<$Throwable*>(e));
			} catch ($AWTException& e) {
				$throwNew($RuntimeException, static_cast<$Throwable*>(e));
			}
		} catch ($Throwable& var$2) {
			$assign(var$1, var$2);
		} /*finally*/ {
			try {
				$SwingUtilities::invokeAndWait($$new($RepaintOnFrameIconifiedStateChangeTest$5));
			} catch ($InterruptedException& e) {
				$throwNew($RuntimeException, static_cast<$Throwable*>(e));
			} catch ($InvocationTargetException& e) {
				$throwNew($RuntimeException, static_cast<$Throwable*>(e));
			}
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
}

void RepaintOnFrameIconifiedStateChangeTest::createGUI() {
	$init(RepaintOnFrameIconifiedStateChangeTest);
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($MetalLookAndFeel, $($UIManager::getLookAndFeel())))) {
		try {
			$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
		} catch ($UnsupportedLookAndFeelException& ulafe) {
			$throwNew($RuntimeException, static_cast<$Throwable*>(ulafe));
		}
	}
	$assignStatic(RepaintOnFrameIconifiedStateChangeTest::frame, $new($JFrame, "RepaintOnFrameIconifiedStateChangeTest"_s));
	$nc(RepaintOnFrameIconifiedStateChangeTest::frame)->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
	$var($Container, content, $nc(RepaintOnFrameIconifiedStateChangeTest::frame)->getContentPane());
	$nc(content)->setLayout($$new($FlowLayout));
	$nc(RepaintOnFrameIconifiedStateChangeTest::comps)->set(RepaintOnFrameIconifiedStateChangeTest::lblIndex, ($assignStatic(RepaintOnFrameIconifiedStateChangeTest::label, $new($RepaintOnFrameIconifiedStateChangeTest$6, $nc($nc(RepaintOnFrameIconifiedStateChangeTest::strsForComps)->get(RepaintOnFrameIconifiedStateChangeTest::lblIndex))->get(0)))));
	$nc(RepaintOnFrameIconifiedStateChangeTest::label)->setPreferredSize($$new($Dimension, 150, 50));
	content->add(static_cast<$Component*>(RepaintOnFrameIconifiedStateChangeTest::label));
	$nc(RepaintOnFrameIconifiedStateChangeTest::comps)->set(RepaintOnFrameIconifiedStateChangeTest::btnIndex, ($assignStatic(RepaintOnFrameIconifiedStateChangeTest::button, $new($RepaintOnFrameIconifiedStateChangeTest$7, $nc($nc(RepaintOnFrameIconifiedStateChangeTest::strsForComps)->get(RepaintOnFrameIconifiedStateChangeTest::btnIndex))->get(0)))));
	$nc(RepaintOnFrameIconifiedStateChangeTest::button)->setPreferredSize($$new($Dimension, 200, 50));
	$nc(RepaintOnFrameIconifiedStateChangeTest::button)->setFocusable(false);
	content->add(static_cast<$Component*>(RepaintOnFrameIconifiedStateChangeTest::button));
	$nc(RepaintOnFrameIconifiedStateChangeTest::frame)->pack();
	$nc(RepaintOnFrameIconifiedStateChangeTest::frame)->setVisible(true);
}

void clinit$RepaintOnFrameIconifiedStateChangeTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(RepaintOnFrameIconifiedStateChangeTest::strsForComps, $new($StringArray2, {
		$$new($StringArray, {
			"JLabel AAA"_s,
			"JLabel BBB"_s
		}),
		$$new($StringArray, {
			"JButton AAA"_s,
			"JButton BBB"_s
		})
	}));
	$assignStatic(RepaintOnFrameIconifiedStateChangeTest::comps, $new($JComponentArray, 2));
	$assignStatic(RepaintOnFrameIconifiedStateChangeTest::compRedrawn, $new($booleans, 2));
	RepaintOnFrameIconifiedStateChangeTest::compRedrawnFlagCanBeSet = false;
}

RepaintOnFrameIconifiedStateChangeTest::RepaintOnFrameIconifiedStateChangeTest() {
}

$Class* RepaintOnFrameIconifiedStateChangeTest::load$($String* name, bool initialize) {
	$loadClass(RepaintOnFrameIconifiedStateChangeTest, name, initialize, &_RepaintOnFrameIconifiedStateChangeTest_ClassInfo_, clinit$RepaintOnFrameIconifiedStateChangeTest, allocate$RepaintOnFrameIconifiedStateChangeTest);
	return class$;
}

$Class* RepaintOnFrameIconifiedStateChangeTest::class$ = nullptr;