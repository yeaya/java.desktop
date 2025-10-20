#include <LabelDotTest.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
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
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/IntStream.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BOTH
#undef CENTER
#undef EXIT_ON_CLOSE
#undef REMAINDER

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntStream = ::java::util::stream::IntStream;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JPanel = ::javax::swing::JPanel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class LabelDotTest$$Lambda$lambda$runTest$1 : public $IntConsumer {
	$class(LabelDotTest$$Lambda$lambda$runTest$1, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$($Robot* robot) {
		$set(this, robot, robot);
	}
	virtual void accept(int32_t i) override {
		LabelDotTest::lambda$runTest$1(robot, i);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LabelDotTest$$Lambda$lambda$runTest$1>());
	}
	$Robot* robot = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LabelDotTest$$Lambda$lambda$runTest$1::fieldInfos[2] = {
	{"robot", "Ljava/awt/Robot;", nullptr, $PUBLIC, $field(LabelDotTest$$Lambda$lambda$runTest$1, robot)},
	{}
};
$MethodInfo LabelDotTest$$Lambda$lambda$runTest$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Robot;)V", nullptr, $PUBLIC, $method(static_cast<void(LabelDotTest$$Lambda$lambda$runTest$1::*)($Robot*)>(&LabelDotTest$$Lambda$lambda$runTest$1::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LabelDotTest$$Lambda$lambda$runTest$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"LabelDotTest$$Lambda$lambda$runTest$1",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	fieldInfos,
	methodInfos
};
$Class* LabelDotTest$$Lambda$lambda$runTest$1::load$($String* name, bool initialize) {
	$loadClass(LabelDotTest$$Lambda$lambda$runTest$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LabelDotTest$$Lambda$lambda$runTest$1::class$ = nullptr;

class LabelDotTest$$Lambda$lambda$main$2$1 : public $Runnable {
	$class(LabelDotTest$$Lambda$lambda$main$2$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		LabelDotTest::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LabelDotTest$$Lambda$lambda$main$2$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LabelDotTest$$Lambda$lambda$main$2$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LabelDotTest$$Lambda$lambda$main$2$1::*)()>(&LabelDotTest$$Lambda$lambda$main$2$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LabelDotTest$$Lambda$lambda$main$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"LabelDotTest$$Lambda$lambda$main$2$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* LabelDotTest$$Lambda$lambda$main$2$1::load$($String* name, bool initialize) {
	$loadClass(LabelDotTest$$Lambda$lambda$main$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LabelDotTest$$Lambda$lambda$main$2$1::class$ = nullptr;

class LabelDotTest$$Lambda$lambda$main$3$2 : public $Runnable {
	$class(LabelDotTest$$Lambda$lambda$main$3$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		LabelDotTest::lambda$main$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LabelDotTest$$Lambda$lambda$main$3$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LabelDotTest$$Lambda$lambda$main$3$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LabelDotTest$$Lambda$lambda$main$3$2::*)()>(&LabelDotTest$$Lambda$lambda$main$3$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LabelDotTest$$Lambda$lambda$main$3$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"LabelDotTest$$Lambda$lambda$main$3$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* LabelDotTest$$Lambda$lambda$main$3$2::load$($String* name, bool initialize) {
	$loadClass(LabelDotTest$$Lambda$lambda$main$3$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LabelDotTest$$Lambda$lambda$main$3$2::class$ = nullptr;

class LabelDotTest$$Lambda$lambda$runTest$0$3 : public $Runnable {
	$class(LabelDotTest$$Lambda$lambda$runTest$0$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		LabelDotTest::lambda$runTest$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LabelDotTest$$Lambda$lambda$runTest$0$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo LabelDotTest$$Lambda$lambda$runTest$0$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LabelDotTest$$Lambda$lambda$runTest$0$3::*)()>(&LabelDotTest$$Lambda$lambda$runTest$0$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo LabelDotTest$$Lambda$lambda$runTest$0$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"LabelDotTest$$Lambda$lambda$runTest$0$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* LabelDotTest$$Lambda$lambda$runTest$0$3::load$($String* name, bool initialize) {
	$loadClass(LabelDotTest$$Lambda$lambda$runTest$0$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LabelDotTest$$Lambda$lambda$runTest$0$3::class$ = nullptr;

$FieldInfo _LabelDotTest_FieldInfo_[] = {
	{"longText", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LabelDotTest, longText)},
	{"shortText", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LabelDotTest, shortText)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(LabelDotTest, frame)},
	{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(LabelDotTest, label)},
	{"menu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $STATIC, $staticField(LabelDotTest, menu)},
	{"isException", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(LabelDotTest, isException)},
	{}
};

$MethodInfo _LabelDotTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LabelDotTest::*)()>(&LabelDotTest::init$))},
	{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&LabelDotTest::createUI))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&LabelDotTest::lambda$main$2))},
	{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&LabelDotTest::lambda$main$3))},
	{"lambda$runTest$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&LabelDotTest::lambda$runTest$0))},
	{"lambda$runTest$1", "(Ljava/awt/Robot;I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Robot*,int32_t)>(&LabelDotTest::lambda$runTest$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&LabelDotTest::main)), "java.lang.Exception"},
	{"runTest", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&LabelDotTest::runTest)), "java.lang.Exception"},
	{}
};

$ClassInfo _LabelDotTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"LabelDotTest",
	"java.lang.Object",
	nullptr,
	_LabelDotTest_FieldInfo_,
	_LabelDotTest_MethodInfo_
};

$Object* allocate$LabelDotTest($Class* clazz) {
	return $of($alloc(LabelDotTest));
}

$String* LabelDotTest::longText = nullptr;
$String* LabelDotTest::shortText = nullptr;
$JFrame* LabelDotTest::frame = nullptr;
$JLabel* LabelDotTest::label = nullptr;
$JMenu* LabelDotTest::menu = nullptr;
$volatile(bool) LabelDotTest::isException = false;

void LabelDotTest::init$() {
}

void LabelDotTest::createUI() {
	$init(LabelDotTest);
	$useLocalCurrentObjectStackCache();
	$init($System);
	$nc($System::out)->println("BEFORE CREATION"_s);
	$assignStatic(LabelDotTest::frame, $new($JFrame));
	$nc(LabelDotTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(LabelDotTest::frame)->setSize($$new($Dimension, 50, 150));
	$nc(LabelDotTest::frame)->setLocationRelativeTo(nullptr);
	$nc(LabelDotTest::frame)->setLayout($$new($GridBagLayout));
	$var($GridBagConstraints, c, $new($GridBagConstraints));
	c->fill = $GridBagConstraints::BOTH;
	c->weightx = 1.0;
	c->weighty = 0.0;
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$assignStatic(LabelDotTest::menu, $new($JMenu, "Menu"_s));
	menuBar->add(LabelDotTest::menu);
	$nc(LabelDotTest::frame)->add(static_cast<$Component*>(menuBar), $of(c));
	$nc(LabelDotTest::frame)->add(static_cast<$Component*>($$new($JLabel, "Title"_s, $SwingConstants::CENTER)), $of(c));
	c->weighty = 1.0;
	$nc(LabelDotTest::frame)->add(static_cast<$Component*>($$new($JPanel, static_cast<$LayoutManager*>($$new($GridBagLayout)))), $of(c));
	c->weighty = 0.0;
	$assignStatic(LabelDotTest::label, $new($JLabel, LabelDotTest::shortText));
	$nc(LabelDotTest::frame)->add(static_cast<$Component*>(LabelDotTest::label), $of(c));
	$nc(LabelDotTest::frame)->setVisible(true);
}

void LabelDotTest::runTest(int32_t iterations) {
	$init(LabelDotTest);
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	$nc($($IntStream::range(0, iterations)))->forEach(static_cast<$IntConsumer*>($$new(LabelDotTest$$Lambda$lambda$runTest$1, robot)));
}

void LabelDotTest::main($StringArray* args) {
	$init(LabelDotTest);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(LabelDotTest$$Lambda$lambda$main$2$1)));
			runTest(50);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (LabelDotTest::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(LabelDotTest$$Lambda$lambda$main$3$2)));
			}
			if (LabelDotTest::isException) {
				$throwNew($RuntimeException, "Size of Menu bar is not correct."_s);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void LabelDotTest::lambda$main$3() {
	$init(LabelDotTest);
	$nc(LabelDotTest::frame)->dispose();
}

void LabelDotTest::lambda$main$2() {
	$init(LabelDotTest);
	createUI();
}

void LabelDotTest::lambda$runTest$1($Robot* robot, int32_t i) {
	$init(LabelDotTest);
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(LabelDotTest$$Lambda$lambda$runTest$0$3)));
	$nc(robot)->waitForIdle();
}

void LabelDotTest::lambda$runTest$0() {
	$init(LabelDotTest);
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(LabelDotTest::label)->getText()))->equals(LabelDotTest::shortText)) {
		$nc(LabelDotTest::label)->setText(LabelDotTest::longText);
	} else {
		$nc(LabelDotTest::label)->setText(LabelDotTest::shortText);
	}
	bool var$0 = $nc($($nc(LabelDotTest::menu)->getMinimumSize()))->height == 1;
	LabelDotTest::isException = (var$0 && !$nc($($nc(LabelDotTest::menu)->getMinimumSize()))->equals($($nc(LabelDotTest::menu)->getPreferredSize()))) || LabelDotTest::isException;
}

void clinit$LabelDotTest($Class* class$) {
	$assignStatic(LabelDotTest::longText, "show a very long text to have it automatically shortened"_s);
	$assignStatic(LabelDotTest::shortText, "show short text"_s);
	LabelDotTest::isException = false;
}

LabelDotTest::LabelDotTest() {
}

$Class* LabelDotTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LabelDotTest$$Lambda$lambda$runTest$1::classInfo$.name)) {
			return LabelDotTest$$Lambda$lambda$runTest$1::load$(name, initialize);
		}
		if (name->equals(LabelDotTest$$Lambda$lambda$main$2$1::classInfo$.name)) {
			return LabelDotTest$$Lambda$lambda$main$2$1::load$(name, initialize);
		}
		if (name->equals(LabelDotTest$$Lambda$lambda$main$3$2::classInfo$.name)) {
			return LabelDotTest$$Lambda$lambda$main$3$2::load$(name, initialize);
		}
		if (name->equals(LabelDotTest$$Lambda$lambda$runTest$0$3::classInfo$.name)) {
			return LabelDotTest$$Lambda$lambda$runTest$0$3::load$(name, initialize);
		}
	}
	$loadClass(LabelDotTest, name, initialize, &_LabelDotTest_ClassInfo_, clinit$LabelDotTest, allocate$LabelDotTest);
	return class$;
}

$Class* LabelDotTest::class$ = nullptr;