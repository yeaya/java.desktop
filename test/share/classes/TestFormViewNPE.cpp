#include <TestFormViewNPE.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef CENTER

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TestFormViewNPE$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestFormViewNPE$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestFormViewNPE::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestFormViewNPE$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestFormViewNPE$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestFormViewNPE$$Lambda$lambda$main$0::*)()>(&TestFormViewNPE$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestFormViewNPE$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestFormViewNPE$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestFormViewNPE$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestFormViewNPE$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestFormViewNPE$$Lambda$lambda$main$0::class$ = nullptr;

class TestFormViewNPE$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TestFormViewNPE$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestFormViewNPE::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestFormViewNPE$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestFormViewNPE$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestFormViewNPE$$Lambda$lambda$main$1$1::*)()>(&TestFormViewNPE$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestFormViewNPE$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestFormViewNPE$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestFormViewNPE$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(TestFormViewNPE$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestFormViewNPE$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _TestFormViewNPE_FieldInfo_[] = {
	{"html", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE | $STATIC, $staticField(TestFormViewNPE, html)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestFormViewNPE, frame)},
	{"width", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TestFormViewNPE, width)},
	{"height", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TestFormViewNPE, height)},
	{}
};

$MethodInfo _TestFormViewNPE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestFormViewNPE::*)()>(&TestFormViewNPE::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestFormViewNPE::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestFormViewNPE::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestFormViewNPE::main)), "java.lang.Exception"},
	{"setup", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestFormViewNPE::setup))},
	{}
};

$ClassInfo _TestFormViewNPE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestFormViewNPE",
	"java.lang.Object",
	nullptr,
	_TestFormViewNPE_FieldInfo_,
	_TestFormViewNPE_MethodInfo_
};

$Object* allocate$TestFormViewNPE($Class* clazz) {
	return $of($alloc(TestFormViewNPE));
}

$JEditorPane* TestFormViewNPE::html = nullptr;
$JFrame* TestFormViewNPE::frame = nullptr;

void TestFormViewNPE::init$() {
}

void TestFormViewNPE::setup() {
	$init(TestFormViewNPE);
	$assignStatic(TestFormViewNPE::html, $new($JEditorPane, "text/html"_s, "<html><body><form action=\"http://localhost.cgi\"><select name=select id=\"myCourses\" autofocus> \n            <option ></option> \n        </select> <input type=submit name=submit value=\"submit\"/></form></body></html>"_s));
	$assignStatic(TestFormViewNPE::frame, $new($JFrame));
	$nc(TestFormViewNPE::frame)->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	$nc(TestFormViewNPE::frame)->add(static_cast<$Component*>(TestFormViewNPE::html), $of($BorderLayout::CENTER));
	$nc(TestFormViewNPE::frame)->setSize(TestFormViewNPE::width, TestFormViewNPE::height);
	$nc(TestFormViewNPE::frame)->setVisible(true);
}

void TestFormViewNPE::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(100);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestFormViewNPE$$Lambda$lambda$main$0)));
			robot->waitForIdle();
			robot->delay(500);
			robot->mouseMove(TestFormViewNPE::width / 2, TestFormViewNPE::height / 2);
			robot->delay(500);
			robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
			robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestFormViewNPE$$Lambda$lambda$main$1$1)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TestFormViewNPE::lambda$main$1() {
	$init(TestFormViewNPE);
	$nc(TestFormViewNPE::frame)->dispose();
}

void TestFormViewNPE::lambda$main$0() {
	setup();
}

TestFormViewNPE::TestFormViewNPE() {
}

$Class* TestFormViewNPE::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestFormViewNPE$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestFormViewNPE$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(TestFormViewNPE$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return TestFormViewNPE$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(TestFormViewNPE, name, initialize, &_TestFormViewNPE_ClassInfo_, allocate$TestFormViewNPE);
	return class$;
}

$Class* TestFormViewNPE::class$ = nullptr;