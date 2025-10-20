#include <TestSingleScreenGConfigNotify.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
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
#include <java/util/Objects.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef SECONDS

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Window = ::java::awt::Window;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Objects = ::java::util::Objects;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;

class TestSingleScreenGConfigNotify$$Lambda$lambda$main$1 : public $Runnable {
	$class(TestSingleScreenGConfigNotify$$Lambda$lambda$main$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestSingleScreenGConfigNotify::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestSingleScreenGConfigNotify$$Lambda$lambda$main$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestSingleScreenGConfigNotify$$Lambda$lambda$main$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestSingleScreenGConfigNotify$$Lambda$lambda$main$1::*)()>(&TestSingleScreenGConfigNotify$$Lambda$lambda$main$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestSingleScreenGConfigNotify$$Lambda$lambda$main$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestSingleScreenGConfigNotify$$Lambda$lambda$main$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestSingleScreenGConfigNotify$$Lambda$lambda$main$1::load$($String* name, bool initialize) {
	$loadClass(TestSingleScreenGConfigNotify$$Lambda$lambda$main$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestSingleScreenGConfigNotify$$Lambda$lambda$main$1::class$ = nullptr;

class TestSingleScreenGConfigNotify$$Lambda$lambda$main$2$1 : public $Runnable {
	$class(TestSingleScreenGConfigNotify$$Lambda$lambda$main$2$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestSingleScreenGConfigNotify::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestSingleScreenGConfigNotify$$Lambda$lambda$main$2$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestSingleScreenGConfigNotify$$Lambda$lambda$main$2$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestSingleScreenGConfigNotify$$Lambda$lambda$main$2$1::*)()>(&TestSingleScreenGConfigNotify$$Lambda$lambda$main$2$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestSingleScreenGConfigNotify$$Lambda$lambda$main$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestSingleScreenGConfigNotify$$Lambda$lambda$main$2$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestSingleScreenGConfigNotify$$Lambda$lambda$main$2$1::load$($String* name, bool initialize) {
	$loadClass(TestSingleScreenGConfigNotify$$Lambda$lambda$main$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestSingleScreenGConfigNotify$$Lambda$lambda$main$2$1::class$ = nullptr;

class TestSingleScreenGConfigNotify$$Lambda$lambda$main$0$2 : public $PropertyChangeListener {
	$class(TestSingleScreenGConfigNotify$$Lambda$lambda$main$0$2, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$() {
	}
	virtual void propertyChange($PropertyChangeEvent* evt) override {
		TestSingleScreenGConfigNotify::lambda$main$0(evt);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestSingleScreenGConfigNotify$$Lambda$lambda$main$0$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestSingleScreenGConfigNotify$$Lambda$lambda$main$0$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestSingleScreenGConfigNotify$$Lambda$lambda$main$0$2::*)()>(&TestSingleScreenGConfigNotify$$Lambda$lambda$main$0$2::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestSingleScreenGConfigNotify$$Lambda$lambda$main$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestSingleScreenGConfigNotify$$Lambda$lambda$main$0$2",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	nullptr,
	methodInfos
};
$Class* TestSingleScreenGConfigNotify$$Lambda$lambda$main$0$2::load$($String* name, bool initialize) {
	$loadClass(TestSingleScreenGConfigNotify$$Lambda$lambda$main$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestSingleScreenGConfigNotify$$Lambda$lambda$main$0$2::class$ = nullptr;

$FieldInfo _TestSingleScreenGConfigNotify_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(TestSingleScreenGConfigNotify, name)},
	{"go", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC, $staticField(TestSingleScreenGConfigNotify, go)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestSingleScreenGConfigNotify, frame)},
	{"after", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE | $STATIC, $staticField(TestSingleScreenGConfigNotify, after)},
	{"before", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE | $STATIC, $staticField(TestSingleScreenGConfigNotify, before)},
	{"button", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(TestSingleScreenGConfigNotify, button)},
	{}
};

$MethodInfo _TestSingleScreenGConfigNotify_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestSingleScreenGConfigNotify::*)()>(&TestSingleScreenGConfigNotify::init$))},
	{"lambda$main$0", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($PropertyChangeEvent*)>(&TestSingleScreenGConfigNotify::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestSingleScreenGConfigNotify::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestSingleScreenGConfigNotify::lambda$main$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestSingleScreenGConfigNotify::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TestSingleScreenGConfigNotify_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"TestSingleScreenGConfigNotify",
	"java.lang.Object",
	nullptr,
	_TestSingleScreenGConfigNotify_FieldInfo_,
	_TestSingleScreenGConfigNotify_MethodInfo_
};

$Object* allocate$TestSingleScreenGConfigNotify($Class* clazz) {
	return $of($alloc(TestSingleScreenGConfigNotify));
}

$String* TestSingleScreenGConfigNotify::name = nullptr;
$CountDownLatch* TestSingleScreenGConfigNotify::go = nullptr;
$JFrame* TestSingleScreenGConfigNotify::frame = nullptr;
$GraphicsConfiguration* TestSingleScreenGConfigNotify::after = nullptr;
$GraphicsConfiguration* TestSingleScreenGConfigNotify::before = nullptr;
$JButton* TestSingleScreenGConfigNotify::button = nullptr;

void TestSingleScreenGConfigNotify::init$() {
}

void TestSingleScreenGConfigNotify::main($StringArray* args) {
	$init(TestSingleScreenGConfigNotify);
	$useLocalCurrentObjectStackCache();
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(TestSingleScreenGConfigNotify$$Lambda$lambda$main$1)));
	$init($TimeUnit);
	bool called = $nc(TestSingleScreenGConfigNotify::go)->await(10, $TimeUnit::SECONDS);
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(TestSingleScreenGConfigNotify$$Lambda$lambda$main$2$1)));
	if ($Objects::equals(TestSingleScreenGConfigNotify::before, TestSingleScreenGConfigNotify::after) && called) {
		$throwNew($RuntimeException, "propertyChange() should not be called"_s);
	}
	if (!$Objects::equals(TestSingleScreenGConfigNotify::before, TestSingleScreenGConfigNotify::after) && !called) {
		$throwNew($RuntimeException, "propertyChange() should be called"_s);
	}
}

void TestSingleScreenGConfigNotify::lambda$main$2() {
	$init(TestSingleScreenGConfigNotify);
	$assignStatic(TestSingleScreenGConfigNotify::after, $nc(TestSingleScreenGConfigNotify::button)->getGraphicsConfiguration());
	$nc(TestSingleScreenGConfigNotify::frame)->dispose();
}

void TestSingleScreenGConfigNotify::lambda$main$1() {
	$init(TestSingleScreenGConfigNotify);
	$assignStatic(TestSingleScreenGConfigNotify::frame, $new($JFrame));
	$nc(TestSingleScreenGConfigNotify::frame)->setSize(300, 300);
	$nc(TestSingleScreenGConfigNotify::frame)->setLocationRelativeTo(nullptr);
	$assignStatic(TestSingleScreenGConfigNotify::button, $new($JButton));
	$nc(TestSingleScreenGConfigNotify::button)->addPropertyChangeListener(static_cast<$PropertyChangeListener*>($$new(TestSingleScreenGConfigNotify$$Lambda$lambda$main$0$2)));
	$assignStatic(TestSingleScreenGConfigNotify::before, $nc(TestSingleScreenGConfigNotify::button)->getGraphicsConfiguration());
	$nc(TestSingleScreenGConfigNotify::frame)->add(static_cast<$Component*>(TestSingleScreenGConfigNotify::button));
	$nc(TestSingleScreenGConfigNotify::frame)->setVisible(true);
}

void TestSingleScreenGConfigNotify::lambda$main$0($PropertyChangeEvent* evt) {
	$init(TestSingleScreenGConfigNotify);
	if ($nc($($nc(evt)->getPropertyName()))->equals(TestSingleScreenGConfigNotify::name)) {
		$nc(TestSingleScreenGConfigNotify::go)->countDown();
	}
}

void clinit$TestSingleScreenGConfigNotify($Class* class$) {
	$assignStatic(TestSingleScreenGConfigNotify::name, "graphicsConfiguration"_s);
	$assignStatic(TestSingleScreenGConfigNotify::go, $new($CountDownLatch, 1));
}

TestSingleScreenGConfigNotify::TestSingleScreenGConfigNotify() {
}

$Class* TestSingleScreenGConfigNotify::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestSingleScreenGConfigNotify$$Lambda$lambda$main$1::classInfo$.name)) {
			return TestSingleScreenGConfigNotify$$Lambda$lambda$main$1::load$(name, initialize);
		}
		if (name->equals(TestSingleScreenGConfigNotify$$Lambda$lambda$main$2$1::classInfo$.name)) {
			return TestSingleScreenGConfigNotify$$Lambda$lambda$main$2$1::load$(name, initialize);
		}
		if (name->equals(TestSingleScreenGConfigNotify$$Lambda$lambda$main$0$2::classInfo$.name)) {
			return TestSingleScreenGConfigNotify$$Lambda$lambda$main$0$2::load$(name, initialize);
		}
	}
	$loadClass(TestSingleScreenGConfigNotify, name, initialize, &_TestSingleScreenGConfigNotify_ClassInfo_, clinit$TestSingleScreenGConfigNotify, allocate$TestSingleScreenGConfigNotify);
	return class$;
}

$Class* TestSingleScreenGConfigNotify::class$ = nullptr;