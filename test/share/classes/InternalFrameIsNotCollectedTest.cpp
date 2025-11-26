#include <InternalFrameIsNotCollectedTest.h>

#include <InternalFrameIsNotCollectedTest$1.h>
#include <InternalFrameIsNotCollectedTest$CustomInternalFrame.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Date.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/WindowConstants.h>
#include <jcpp.h>

#undef CENTER
#undef DISPOSE_ON_CLOSE

using $InternalFrameIsNotCollectedTest$1 = ::InternalFrameIsNotCollectedTest$1;
using $InternalFrameIsNotCollectedTest$CustomInternalFrame = ::InternalFrameIsNotCollectedTest$CustomInternalFrame;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
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
using $Date = ::java::util::Date;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $DesktopManager = ::javax::swing::DesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $WindowConstants = ::javax::swing::WindowConstants;

class InternalFrameIsNotCollectedTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(InternalFrameIsNotCollectedTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		InternalFrameIsNotCollectedTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<InternalFrameIsNotCollectedTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo InternalFrameIsNotCollectedTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InternalFrameIsNotCollectedTest$$Lambda$lambda$main$0::*)()>(&InternalFrameIsNotCollectedTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo InternalFrameIsNotCollectedTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"InternalFrameIsNotCollectedTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* InternalFrameIsNotCollectedTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(InternalFrameIsNotCollectedTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* InternalFrameIsNotCollectedTest$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _InternalFrameIsNotCollectedTest_FieldInfo_[] = {
	{"maxWaitTime", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InternalFrameIsNotCollectedTest, maxWaitTime)},
	{"waitTime", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(InternalFrameIsNotCollectedTest, waitTime)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(InternalFrameIsNotCollectedTest, robot)},
	{"iFrame", "LInternalFrameIsNotCollectedTest$CustomInternalFrame;", nullptr, $PRIVATE | $STATIC, $staticField(InternalFrameIsNotCollectedTest, iFrame)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(InternalFrameIsNotCollectedTest, frame)},
	{}
};

$MethodInfo _InternalFrameIsNotCollectedTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InternalFrameIsNotCollectedTest::*)()>(&InternalFrameIsNotCollectedTest::init$))},
	{"closeInternalFrame", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&InternalFrameIsNotCollectedTest::closeInternalFrame)), "java.beans.PropertyVetoException"},
	{"initRobot", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&InternalFrameIsNotCollectedTest::initRobot)), "java.awt.AWTException"},
	{"initUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&InternalFrameIsNotCollectedTest::initUI))},
	{"invokeGC", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&InternalFrameIsNotCollectedTest::invokeGC))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&InternalFrameIsNotCollectedTest::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InternalFrameIsNotCollectedTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _InternalFrameIsNotCollectedTest_InnerClassesInfo_[] = {
	{"InternalFrameIsNotCollectedTest$CustomInternalFrame", "InternalFrameIsNotCollectedTest", "CustomInternalFrame", $PUBLIC | $STATIC},
	{"InternalFrameIsNotCollectedTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InternalFrameIsNotCollectedTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InternalFrameIsNotCollectedTest",
	"java.lang.Object",
	nullptr,
	_InternalFrameIsNotCollectedTest_FieldInfo_,
	_InternalFrameIsNotCollectedTest_MethodInfo_,
	nullptr,
	nullptr,
	_InternalFrameIsNotCollectedTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"InternalFrameIsNotCollectedTest$CustomInternalFrame,InternalFrameIsNotCollectedTest$1"
};

$Object* allocate$InternalFrameIsNotCollectedTest($Class* clazz) {
	return $of($alloc(InternalFrameIsNotCollectedTest));
}

$Robot* InternalFrameIsNotCollectedTest::robot = nullptr;
$InternalFrameIsNotCollectedTest$CustomInternalFrame* InternalFrameIsNotCollectedTest::iFrame = nullptr;
$JFrame* InternalFrameIsNotCollectedTest::frame = nullptr;

void InternalFrameIsNotCollectedTest::init$() {
}

void InternalFrameIsNotCollectedTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			initRobot();
			$SwingUtilities::invokeAndWait($$new($InternalFrameIsNotCollectedTest$1));
			$init(InternalFrameIsNotCollectedTest);
			$nc(InternalFrameIsNotCollectedTest::robot)->waitForIdle();
			invokeGC();
			$System::runFinalization();
			$Thread::sleep(1000);
			$var($Date, startWaiting, $new($Date));
			$init($InternalFrameIsNotCollectedTest$CustomInternalFrame);
			$synchronized($InternalFrameIsNotCollectedTest$CustomInternalFrame::waiter) {
				$var($Date, now, $new($Date));
				while (true) {
					int64_t var$1 = now->getTime();
					if (!(var$1 - startWaiting->getTime() < InternalFrameIsNotCollectedTest::maxWaitTime && !$InternalFrameIsNotCollectedTest$CustomInternalFrame::finalized)) {
						break;
					}
					{
						$nc($of($InternalFrameIsNotCollectedTest$CustomInternalFrame::waiter))->wait(InternalFrameIsNotCollectedTest::waitTime);
						$assign(now, $new($Date));
					}
				}
			}
			if (!$InternalFrameIsNotCollectedTest$CustomInternalFrame::finalized) {
				$throwNew($RuntimeException, "Closed internal frame wasn\'t collected"_s);
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$init(InternalFrameIsNotCollectedTest);
			if (InternalFrameIsNotCollectedTest::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(InternalFrameIsNotCollectedTest$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void InternalFrameIsNotCollectedTest::initRobot() {
	$init(InternalFrameIsNotCollectedTest);
	$assignStatic(InternalFrameIsNotCollectedTest::robot, $new($Robot));
	$nc(InternalFrameIsNotCollectedTest::robot)->setAutoDelay(100);
}

void InternalFrameIsNotCollectedTest::closeInternalFrame() {
	$init(InternalFrameIsNotCollectedTest);
	$nc(InternalFrameIsNotCollectedTest::iFrame)->setClosed(true);
	$assignStatic(InternalFrameIsNotCollectedTest::iFrame, nullptr);
}

void InternalFrameIsNotCollectedTest::initUI() {
	$useLocalCurrentObjectStackCache();
	$init(InternalFrameIsNotCollectedTest);
	$assignStatic(InternalFrameIsNotCollectedTest::frame, $new($JFrame, "Internal Frame Test"_s));
	$nc($($nc(InternalFrameIsNotCollectedTest::frame)->getContentPane()))->setLayout($$new($BorderLayout));
	$var($JDesktopPane, desktopPane, $new($JDesktopPane));
	desktopPane->setDesktopManager($$new($DefaultDesktopManager));
	$init($BorderLayout);
	$nc($($nc(InternalFrameIsNotCollectedTest::frame)->getContentPane()))->add(static_cast<$Component*>(desktopPane), $of($BorderLayout::CENTER));
	$assignStatic(InternalFrameIsNotCollectedTest::iFrame, $new($InternalFrameIsNotCollectedTest$CustomInternalFrame, "Dummy Frame"_s));
	$nc(InternalFrameIsNotCollectedTest::iFrame)->setSize(200, 200);
	$nc(InternalFrameIsNotCollectedTest::iFrame)->setDefaultCloseOperation($WindowConstants::DISPOSE_ON_CLOSE);
	desktopPane->add(static_cast<$Component*>(InternalFrameIsNotCollectedTest::iFrame));
	$nc(InternalFrameIsNotCollectedTest::frame)->setSize(800, 600);
	$nc(InternalFrameIsNotCollectedTest::frame)->setDefaultCloseOperation($WindowConstants::DISPOSE_ON_CLOSE);
	$nc(InternalFrameIsNotCollectedTest::frame)->setVisible(true);
	$nc(InternalFrameIsNotCollectedTest::iFrame)->setVisible(true);
}

void InternalFrameIsNotCollectedTest::invokeGC() {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("Firing garbage collection!"_s);
	try {
		$var($StringBuilder, sb, $new($StringBuilder));
		while (true) {
			sb->append($$str({"any string. some test. a little bit more text."_s, $(sb->toString())}));
		}
	} catch ($Throwable& e) {
	}
}

void InternalFrameIsNotCollectedTest::lambda$main$0() {
	$init(InternalFrameIsNotCollectedTest);
	$nc(InternalFrameIsNotCollectedTest::frame)->dispose();
}

InternalFrameIsNotCollectedTest::InternalFrameIsNotCollectedTest() {
}

$Class* InternalFrameIsNotCollectedTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(InternalFrameIsNotCollectedTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return InternalFrameIsNotCollectedTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(InternalFrameIsNotCollectedTest, name, initialize, &_InternalFrameIsNotCollectedTest_ClassInfo_, allocate$InternalFrameIsNotCollectedTest);
	return class$;
}

$Class* InternalFrameIsNotCollectedTest::class$ = nullptr;