#include <TestGlyphBreak.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestGlyphBreak$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestGlyphBreak$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestGlyphBreak::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestGlyphBreak$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestGlyphBreak$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestGlyphBreak$$Lambda$lambda$main$0::*)()>(&TestGlyphBreak$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestGlyphBreak$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestGlyphBreak$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestGlyphBreak$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestGlyphBreak$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestGlyphBreak$$Lambda$lambda$main$0::class$ = nullptr;

class TestGlyphBreak$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TestGlyphBreak$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestGlyphBreak::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestGlyphBreak$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestGlyphBreak$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestGlyphBreak$$Lambda$lambda$main$1$1::*)()>(&TestGlyphBreak$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestGlyphBreak$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestGlyphBreak$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestGlyphBreak$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(TestGlyphBreak$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestGlyphBreak$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _TestGlyphBreak_FieldInfo_[] = {
	{"f", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(TestGlyphBreak, f)},
	{"btnHeight", "I", nullptr, $STATIC, $staticField(TestGlyphBreak, btnHeight)},
	{"fm", "Ljava/awt/FontMetrics;", nullptr, $STATIC, $staticField(TestGlyphBreak, fm)},
	{}
};

$MethodInfo _TestGlyphBreak_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestGlyphBreak::*)()>(&TestGlyphBreak::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestGlyphBreak::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestGlyphBreak::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestGlyphBreak::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TestGlyphBreak_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestGlyphBreak",
	"java.lang.Object",
	nullptr,
	_TestGlyphBreak_FieldInfo_,
	_TestGlyphBreak_MethodInfo_
};

$Object* allocate$TestGlyphBreak($Class* clazz) {
	return $of($alloc(TestGlyphBreak));
}

$JFrame* TestGlyphBreak::f = nullptr;
int32_t TestGlyphBreak::btnHeight = 0;
$FontMetrics* TestGlyphBreak::fm = nullptr;

void TestGlyphBreak::init$() {
}

void TestGlyphBreak::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestGlyphBreak$$Lambda$lambda$main$0)));
	try {
		$Thread::sleep(2000);
	} catch ($InterruptedException& ex) {
	}
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestGlyphBreak$$Lambda$lambda$main$1$1)));
	$init(TestGlyphBreak);
	$nc($System::out)->println($$str({"metrics getHeight "_s, $$str($nc(TestGlyphBreak::fm)->getHeight()), " button height "_s, $$str(TestGlyphBreak::btnHeight)}));
	if (TestGlyphBreak::btnHeight > 2 * $nc(TestGlyphBreak::fm)->getHeight()) {
		$throwNew($RuntimeException, "TextView is broken into different lines"_s);
	}
}

void TestGlyphBreak::lambda$main$1() {
	$init(TestGlyphBreak);
	$nc(TestGlyphBreak::f)->dispose();
}

void TestGlyphBreak::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	$var($String, str, "<html><font size=2 color=red><bold>Three!</font></html>"_s);
	$var($JButton, b, $new($JButton));
	b->setText(str);
	$init(TestGlyphBreak);
	$assignStatic(TestGlyphBreak::f, $new($JFrame));
	$nc(TestGlyphBreak::f)->add(static_cast<$Component*>(b));
	$nc(TestGlyphBreak::f)->pack();
	$nc(TestGlyphBreak::f)->setVisible(true);
	TestGlyphBreak::btnHeight = b->getHeight();
	$assignStatic(TestGlyphBreak::fm, b->getFontMetrics($(b->getFont())));
}

TestGlyphBreak::TestGlyphBreak() {
}

$Class* TestGlyphBreak::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestGlyphBreak$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestGlyphBreak$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(TestGlyphBreak$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return TestGlyphBreak$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(TestGlyphBreak, name, initialize, &_TestGlyphBreak_ClassInfo_, allocate$TestGlyphBreak);
	return class$;
}

$Class* TestGlyphBreak::class$ = nullptr;