#include <SwingFontMetricsTest.h>

#include <SwingFontMetricsTest$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Map.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef KEY_TEXT_ANTIALIASING
#undef LOWER_CASE_TEXT
#undef SECONDS
#undef TEXT
#undef UPPER_CASE_TEXT
#undef VALUE_TEXT_ANTIALIAS_DEFAULT

using $SwingFontMetricsTest$1 = ::SwingFontMetricsTest$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $RenderingHints = ::java::awt::RenderingHints;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Map = ::java::util::Map;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class SwingFontMetricsTest$$Lambda$createAndShowGUI : public $Runnable {
	$class(SwingFontMetricsTest$$Lambda$createAndShowGUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SwingFontMetricsTest::createAndShowGUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SwingFontMetricsTest$$Lambda$createAndShowGUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SwingFontMetricsTest$$Lambda$createAndShowGUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SwingFontMetricsTest$$Lambda$createAndShowGUI::*)()>(&SwingFontMetricsTest$$Lambda$createAndShowGUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SwingFontMetricsTest$$Lambda$createAndShowGUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"SwingFontMetricsTest$$Lambda$createAndShowGUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* SwingFontMetricsTest$$Lambda$createAndShowGUI::load$($String* name, bool initialize) {
	$loadClass(SwingFontMetricsTest$$Lambda$createAndShowGUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SwingFontMetricsTest$$Lambda$createAndShowGUI::class$ = nullptr;

$FieldInfo _SwingFontMetricsTest_FieldInfo_[] = {
	{"LOWER_CASE_TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingFontMetricsTest, LOWER_CASE_TEXT)},
	{"UPPER_CASE_TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingFontMetricsTest, UPPER_CASE_TEXT)},
	{"TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingFontMetricsTest, TEXT)},
	{"passed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(SwingFontMetricsTest, passed)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC, $staticField(SwingFontMetricsTest, latch)},
	{"aaHint", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticField(SwingFontMetricsTest, aaHint)},
	{}
};

$MethodInfo _SwingFontMetricsTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SwingFontMetricsTest::*)()>(&SwingFontMetricsTest::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SwingFontMetricsTest::createAndShowGUI))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SwingFontMetricsTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _SwingFontMetricsTest_InnerClassesInfo_[] = {
	{"SwingFontMetricsTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingFontMetricsTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SwingFontMetricsTest",
	"java.lang.Object",
	nullptr,
	_SwingFontMetricsTest_FieldInfo_,
	_SwingFontMetricsTest_MethodInfo_,
	nullptr,
	nullptr,
	_SwingFontMetricsTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SwingFontMetricsTest$1"
};

$Object* allocate$SwingFontMetricsTest($Class* clazz) {
	return $of($alloc(SwingFontMetricsTest));
}

$String* SwingFontMetricsTest::LOWER_CASE_TEXT = nullptr;
$String* SwingFontMetricsTest::UPPER_CASE_TEXT = nullptr;
$String* SwingFontMetricsTest::TEXT = nullptr;
bool SwingFontMetricsTest::passed = false;
$CountDownLatch* SwingFontMetricsTest::latch = nullptr;
$Object* SwingFontMetricsTest::aaHint = nullptr;

void SwingFontMetricsTest::init$() {
}

void SwingFontMetricsTest::main($StringArray* args) {
	$init(SwingFontMetricsTest);
	$useLocalCurrentObjectStackCache();
	$var($Map, map, $cast($Map, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("awt.font.desktophints"_s)));
	$init($RenderingHints);
	$assignStatic(SwingFontMetricsTest::aaHint, $nc(map)->get($RenderingHints::KEY_TEXT_ANTIALIASING));
	if (SwingFontMetricsTest::aaHint == nullptr) {
		$assignStatic(SwingFontMetricsTest::aaHint, $RenderingHints::VALUE_TEXT_ANTIALIAS_DEFAULT);
	}
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(SwingFontMetricsTest$$Lambda$createAndShowGUI)));
	$init($TimeUnit);
	$nc(SwingFontMetricsTest::latch)->await(5, $TimeUnit::SECONDS);
	if (!SwingFontMetricsTest::passed) {
		$throwNew($RuntimeException, "Test Failed!"_s);
	}
}

void SwingFontMetricsTest::createAndShowGUI() {
	$init(SwingFontMetricsTest);
	$useLocalCurrentObjectStackCache();
	$var($JFrame, frame, $new($JFrame));
	frame->setSize(300, 300);
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JLabel, label, $new($SwingFontMetricsTest$1, SwingFontMetricsTest::TEXT, frame));
	frame->add(static_cast<$Component*>(label));
	frame->setVisible(true);
}

void clinit$SwingFontMetricsTest($Class* class$) {
	$assignStatic(SwingFontMetricsTest::LOWER_CASE_TEXT, "the quick brown fox jumps over the lazy dog"_s);
	$assignStatic(SwingFontMetricsTest::UPPER_CASE_TEXT, $nc(SwingFontMetricsTest::LOWER_CASE_TEXT)->toUpperCase());
	$assignStatic(SwingFontMetricsTest::TEXT, $str({SwingFontMetricsTest::LOWER_CASE_TEXT, SwingFontMetricsTest::UPPER_CASE_TEXT}));
	SwingFontMetricsTest::passed = false;
	$assignStatic(SwingFontMetricsTest::latch, $new($CountDownLatch, 1));
	$assignStatic(SwingFontMetricsTest::aaHint, nullptr);
}

SwingFontMetricsTest::SwingFontMetricsTest() {
}

$Class* SwingFontMetricsTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SwingFontMetricsTest$$Lambda$createAndShowGUI::classInfo$.name)) {
			return SwingFontMetricsTest$$Lambda$createAndShowGUI::load$(name, initialize);
		}
	}
	$loadClass(SwingFontMetricsTest, name, initialize, &_SwingFontMetricsTest_ClassInfo_, clinit$SwingFontMetricsTest, allocate$SwingFontMetricsTest);
	return class$;
}

$Class* SwingFontMetricsTest::class$ = nullptr;