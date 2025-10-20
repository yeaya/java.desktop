#include <TestBackgroundScrollPolicy.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
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
#include <javax/swing/JLabel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef BLUE
#undef DISPOSE_ON_CLOSE
#undef RED
#undef ROBOT
#undef SCROLL_TAB_LAYOUT

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
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
using $JLabel = ::javax::swing::JLabel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class TestBackgroundScrollPolicy$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestBackgroundScrollPolicy$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		TestBackgroundScrollPolicy::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestBackgroundScrollPolicy$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestBackgroundScrollPolicy$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(TestBackgroundScrollPolicy$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo TestBackgroundScrollPolicy$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(TestBackgroundScrollPolicy$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&TestBackgroundScrollPolicy$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestBackgroundScrollPolicy$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestBackgroundScrollPolicy$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestBackgroundScrollPolicy$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestBackgroundScrollPolicy$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestBackgroundScrollPolicy$$Lambda$lambda$main$0::class$ = nullptr;

class TestBackgroundScrollPolicy$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TestBackgroundScrollPolicy$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestBackgroundScrollPolicy::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestBackgroundScrollPolicy$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestBackgroundScrollPolicy$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestBackgroundScrollPolicy$$Lambda$lambda$main$1$1::*)()>(&TestBackgroundScrollPolicy$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestBackgroundScrollPolicy$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestBackgroundScrollPolicy$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestBackgroundScrollPolicy$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(TestBackgroundScrollPolicy$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestBackgroundScrollPolicy$$Lambda$lambda$main$1$1::class$ = nullptr;

class TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		TestBackgroundScrollPolicy::lambda$main$2(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2, laf)},
	{}
};
$MethodInfo TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2::*)($UIManager$LookAndFeelInfo*)>(&TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2::class$ = nullptr;

class TestBackgroundScrollPolicy$$Lambda$lambda$main$3$3 : public $Runnable {
	$class(TestBackgroundScrollPolicy$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestBackgroundScrollPolicy::lambda$main$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestBackgroundScrollPolicy$$Lambda$lambda$main$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestBackgroundScrollPolicy$$Lambda$lambda$main$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestBackgroundScrollPolicy$$Lambda$lambda$main$3$3::*)()>(&TestBackgroundScrollPolicy$$Lambda$lambda$main$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestBackgroundScrollPolicy$$Lambda$lambda$main$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestBackgroundScrollPolicy$$Lambda$lambda$main$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestBackgroundScrollPolicy$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$loadClass(TestBackgroundScrollPolicy$$Lambda$lambda$main$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestBackgroundScrollPolicy$$Lambda$lambda$main$3$3::class$ = nullptr;

$FieldInfo _TestBackgroundScrollPolicy_FieldInfo_[] = {
	{"ROBOT", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(TestBackgroundScrollPolicy, ROBOT)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestBackgroundScrollPolicy, frame)},
	{"pane", "Ljavax/swing/JTabbedPane;", nullptr, $PRIVATE | $STATIC, $staticField(TestBackgroundScrollPolicy, pane)},
	{}
};

$MethodInfo _TestBackgroundScrollPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestBackgroundScrollPolicy::*)()>(&TestBackgroundScrollPolicy::init$))},
	{"addOpaqueError", "(Ljavax/swing/UIManager$LookAndFeelInfo;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*,bool)>(&TestBackgroundScrollPolicy::addOpaqueError))},
	{"createGUI", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&TestBackgroundScrollPolicy::createGUI))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&TestBackgroundScrollPolicy::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestBackgroundScrollPolicy::lambda$main$1))},
	{"lambda$main$2", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&TestBackgroundScrollPolicy::lambda$main$2))},
	{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestBackgroundScrollPolicy::lambda$main$3))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestBackgroundScrollPolicy::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&TestBackgroundScrollPolicy::setLookAndFeel))},
	{"test", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&TestBackgroundScrollPolicy::test))},
	{}
};

$ClassInfo _TestBackgroundScrollPolicy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestBackgroundScrollPolicy",
	"java.lang.Object",
	nullptr,
	_TestBackgroundScrollPolicy_FieldInfo_,
	_TestBackgroundScrollPolicy_MethodInfo_
};

$Object* allocate$TestBackgroundScrollPolicy($Class* clazz) {
	return $of($alloc(TestBackgroundScrollPolicy));
}

$Robot* TestBackgroundScrollPolicy::ROBOT = nullptr;
$JFrame* TestBackgroundScrollPolicy::frame = nullptr;
$JTabbedPane* TestBackgroundScrollPolicy::pane = nullptr;

void TestBackgroundScrollPolicy::init$() {
}

void TestBackgroundScrollPolicy::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init(TestBackgroundScrollPolicy);
	$assignStatic(TestBackgroundScrollPolicy::ROBOT, $new($Robot));
	$nc(TestBackgroundScrollPolicy::ROBOT)->setAutoWaitForIdle(true);
	$nc(TestBackgroundScrollPolicy::ROBOT)->setAutoDelay(100);
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$init($System);
				$nc($System::out)->println($$str({"Testing L&F: "_s, $($nc(laf)->getClassName())}));
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestBackgroundScrollPolicy$$Lambda$lambda$main$0, laf)));
				{
					$var($Throwable, var$0, nullptr);
					try {
						$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestBackgroundScrollPolicy$$Lambda$lambda$main$1$1)));
						$nc(TestBackgroundScrollPolicy::ROBOT)->waitForIdle();
						$nc(TestBackgroundScrollPolicy::ROBOT)->delay(1000);
						$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2, laf)));
						$nc(TestBackgroundScrollPolicy::ROBOT)->delay(2000);
					} catch ($Throwable&) {
						$assign(var$0, $catch());
					} /*finally*/ {
						if (TestBackgroundScrollPolicy::frame != nullptr) {
							$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestBackgroundScrollPolicy$$Lambda$lambda$main$3$3)));
						}
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
				$nc(TestBackgroundScrollPolicy::ROBOT)->delay(1000);
			}
		}
	}
}

void TestBackgroundScrollPolicy::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException&) {
		$var($UnsupportedLookAndFeelException, ignored, $catch());
		$init($System);
		$nc($System::out)->println($$str({"Unsupported L&F: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void TestBackgroundScrollPolicy::addOpaqueError($UIManager$LookAndFeelInfo* laf, bool opaque) {
	$useLocalCurrentObjectStackCache();
	$throwNew($RuntimeException, $$str({$($nc(laf)->getClassName()), " background color wrong for opaque="_s, $$str(opaque)}));
}

void TestBackgroundScrollPolicy::createGUI() {
	$useLocalCurrentObjectStackCache();
	$init(TestBackgroundScrollPolicy);
	$assignStatic(TestBackgroundScrollPolicy::pane, $new($JTabbedPane));
	$nc(TestBackgroundScrollPolicy::pane)->setOpaque(true);
	$init($Color);
	$nc(TestBackgroundScrollPolicy::pane)->setBackground($Color::RED);
	for (int32_t i = 0; i < 3; ++i) {
		$nc(TestBackgroundScrollPolicy::pane)->addTab($$str({"Tab "_s, $$str(i)}), $$new($JLabel, $$str({"Content area "_s, $$str(i)})));
	}
	$nc(TestBackgroundScrollPolicy::pane)->setTabLayoutPolicy($JTabbedPane::SCROLL_TAB_LAYOUT);
	$nc(TestBackgroundScrollPolicy::pane)->repaint();
	$assignStatic(TestBackgroundScrollPolicy::frame, $new($JFrame));
	$nc($($nc(TestBackgroundScrollPolicy::frame)->getContentPane()))->setBackground($Color::BLUE);
	$nc(TestBackgroundScrollPolicy::frame)->add(static_cast<$Component*>(TestBackgroundScrollPolicy::pane));
	$nc(TestBackgroundScrollPolicy::frame)->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
	$nc(TestBackgroundScrollPolicy::frame)->setSize(400, 200);
	$nc(TestBackgroundScrollPolicy::frame)->setLocationRelativeTo(nullptr);
	$nc(TestBackgroundScrollPolicy::frame)->setVisible(true);
	$nc(TestBackgroundScrollPolicy::frame)->toFront();
}

void TestBackgroundScrollPolicy::test($UIManager$LookAndFeelInfo* laf) {
	$useLocalCurrentObjectStackCache();
	$init(TestBackgroundScrollPolicy);
	$var($Point, point, $new($Point, $nc(TestBackgroundScrollPolicy::pane)->getWidth() - 2, 2));
	$SwingUtilities::convertPointToScreen(point, TestBackgroundScrollPolicy::pane);
	$var($Color, actual, $nc(TestBackgroundScrollPolicy::ROBOT)->getPixelColor(point->x, point->y));
	bool opaque = $nc(TestBackgroundScrollPolicy::pane)->isOpaque();
	$var($Color, expected, opaque ? $nc(TestBackgroundScrollPolicy::pane)->getBackground() : $nc($($nc(TestBackgroundScrollPolicy::frame)->getContentPane()))->getBackground());
	if (!$nc(expected)->equals(actual)) {
		$init($System);
		$nc($System::out)->println($$str({"expected "_s, expected, " actual "_s, actual}));
		addOpaqueError(laf, opaque);
	}
}

void TestBackgroundScrollPolicy::lambda$main$3() {
	$init(TestBackgroundScrollPolicy);
	$nc(TestBackgroundScrollPolicy::frame)->dispose();
}

void TestBackgroundScrollPolicy::lambda$main$2($UIManager$LookAndFeelInfo* laf) {
	test(laf);
}

void TestBackgroundScrollPolicy::lambda$main$1() {
	createGUI();
}

void TestBackgroundScrollPolicy::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

TestBackgroundScrollPolicy::TestBackgroundScrollPolicy() {
}

$Class* TestBackgroundScrollPolicy::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestBackgroundScrollPolicy$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestBackgroundScrollPolicy$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(TestBackgroundScrollPolicy$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return TestBackgroundScrollPolicy$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return TestBackgroundScrollPolicy$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals(TestBackgroundScrollPolicy$$Lambda$lambda$main$3$3::classInfo$.name)) {
			return TestBackgroundScrollPolicy$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
	}
	$loadClass(TestBackgroundScrollPolicy, name, initialize, &_TestBackgroundScrollPolicy_ClassInfo_, allocate$TestBackgroundScrollPolicy);
	return class$;
}

$Class* TestBackgroundScrollPolicy::class$ = nullptr;