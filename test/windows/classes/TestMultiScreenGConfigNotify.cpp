#include <TestMultiScreenGConfigNotify.h>

#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $Component = ::java::awt::Component;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
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
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestMultiScreenGConfigNotify$$Lambda$lambda$main$1 : public $Runnable {
	$class(TestMultiScreenGConfigNotify$$Lambda$lambda$main$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($GraphicsConfiguration* gc, $GraphicsConfiguration* gc2) {
		$set(this, gc, gc);
		$set(this, gc2, gc2);
	}
	virtual void run() override {
		TestMultiScreenGConfigNotify::lambda$main$1(gc, gc2);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestMultiScreenGConfigNotify$$Lambda$lambda$main$1>());
	}
	$GraphicsConfiguration* gc = nullptr;
	$GraphicsConfiguration* gc2 = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TestMultiScreenGConfigNotify$$Lambda$lambda$main$1::fieldInfos[3] = {
	{"gc", "Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC, $field(TestMultiScreenGConfigNotify$$Lambda$lambda$main$1, gc)},
	{"gc2", "Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC, $field(TestMultiScreenGConfigNotify$$Lambda$lambda$main$1, gc2)},
	{}
};
$MethodInfo TestMultiScreenGConfigNotify$$Lambda$lambda$main$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/GraphicsConfiguration;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(TestMultiScreenGConfigNotify$$Lambda$lambda$main$1::*)($GraphicsConfiguration*,$GraphicsConfiguration*)>(&TestMultiScreenGConfigNotify$$Lambda$lambda$main$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestMultiScreenGConfigNotify$$Lambda$lambda$main$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestMultiScreenGConfigNotify$$Lambda$lambda$main$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TestMultiScreenGConfigNotify$$Lambda$lambda$main$1::load$($String* name, bool initialize) {
	$loadClass(TestMultiScreenGConfigNotify$$Lambda$lambda$main$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestMultiScreenGConfigNotify$$Lambda$lambda$main$1::class$ = nullptr;

class TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1 : public $Runnable {
	$class(TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestMultiScreenGConfigNotify::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1::*)()>(&TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1::load$($String* name, bool initialize) {
	$loadClass(TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1::class$ = nullptr;

class TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2 : public $PropertyChangeListener {
	$class(TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$() {
	}
	virtual void propertyChange($PropertyChangeEvent* evt) override {
		TestMultiScreenGConfigNotify::lambda$main$0(evt);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2::*)()>(&TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	nullptr,
	methodInfos
};
$Class* TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2::load$($String* name, bool initialize) {
	$loadClass(TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2::class$ = nullptr;

$FieldInfo _TestMultiScreenGConfigNotify_FieldInfo_[] = {
	{"f", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(TestMultiScreenGConfigNotify, f)},
	{"propName", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(TestMultiScreenGConfigNotify, propName)},
	{"propCount", "I", nullptr, $STATIC, $staticField(TestMultiScreenGConfigNotify, propCount)},
	{"result", "Z", nullptr, $STATIC, $staticField(TestMultiScreenGConfigNotify, result)},
	{}
};

$MethodInfo _TestMultiScreenGConfigNotify_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestMultiScreenGConfigNotify::*)()>(&TestMultiScreenGConfigNotify::init$))},
	{"lambda$main$0", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($PropertyChangeEvent*)>(&TestMultiScreenGConfigNotify::lambda$main$0))},
	{"lambda$main$1", "(Ljava/awt/GraphicsConfiguration;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($GraphicsConfiguration*,$GraphicsConfiguration*)>(&TestMultiScreenGConfigNotify::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestMultiScreenGConfigNotify::lambda$main$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestMultiScreenGConfigNotify::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TestMultiScreenGConfigNotify_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestMultiScreenGConfigNotify",
	"java.lang.Object",
	nullptr,
	_TestMultiScreenGConfigNotify_FieldInfo_,
	_TestMultiScreenGConfigNotify_MethodInfo_
};

$Object* allocate$TestMultiScreenGConfigNotify($Class* clazz) {
	return $of($alloc(TestMultiScreenGConfigNotify));
}

$JFrame* TestMultiScreenGConfigNotify::f = nullptr;
$StringArray* TestMultiScreenGConfigNotify::propName = nullptr;
int32_t TestMultiScreenGConfigNotify::propCount = 0;
bool TestMultiScreenGConfigNotify::result = false;

void TestMultiScreenGConfigNotify::init$() {
}

void TestMultiScreenGConfigNotify::main($StringArray* args) {
	$init(TestMultiScreenGConfigNotify);
	$useLocalCurrentObjectStackCache();
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$var($GraphicsDeviceArray, gds, $nc(ge)->getScreenDevices());
	if ($nc(gds)->length < 2) {
		return;
	}
	$var($GraphicsConfiguration, gc, $nc($nc(gds)->get(0))->getDefaultConfiguration());
	$var($GraphicsConfiguration, gc2, $nc(gds->get(1))->getDefaultConfiguration());
	$assignStatic(TestMultiScreenGConfigNotify::propName, $new($StringArray, 10));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestMultiScreenGConfigNotify$$Lambda$lambda$main$1, gc, gc2)));
	$Thread::sleep(1000);
	for (int32_t i = 0; i < TestMultiScreenGConfigNotify::propCount; ++i) {
		if ($nc($nc(TestMultiScreenGConfigNotify::propName)->get(i))->equals("graphicsConfiguration"_s)) {
			TestMultiScreenGConfigNotify::result = true;
		}
	}
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1)));
	if (!TestMultiScreenGConfigNotify::result) {
		$throwNew($RuntimeException, "graphicsConfiguration notification not sent"_s);
	}
}

void TestMultiScreenGConfigNotify::lambda$main$2() {
	$init(TestMultiScreenGConfigNotify);
	$nc(TestMultiScreenGConfigNotify::f)->dispose();
}

void TestMultiScreenGConfigNotify::lambda$main$1($GraphicsConfiguration* gc, $GraphicsConfiguration* gc2) {
	$init(TestMultiScreenGConfigNotify);
	$useLocalCurrentObjectStackCache();
	$assignStatic(TestMultiScreenGConfigNotify::f, $new($JFrame));
	$nc(TestMultiScreenGConfigNotify::f)->setSize(300, 300);
	int32_t var$0 = $nc($($nc(gc)->getBounds()))->x;
	int32_t var$1 = $nc($(gc->getBounds()))->y;
	int32_t var$2 = $nc(TestMultiScreenGConfigNotify::f)->getWidth();
	$nc(TestMultiScreenGConfigNotify::f)->setBounds(var$0, var$1, var$2, $nc(TestMultiScreenGConfigNotify::f)->getHeight());
	$nc(TestMultiScreenGConfigNotify::f)->setVisible(true);
	$nc(TestMultiScreenGConfigNotify::f)->addPropertyChangeListener(static_cast<$PropertyChangeListener*>($$new(TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2)));
	try {
		$Thread::sleep(2000);
	} catch ($InterruptedException& ex) {
	}
	int32_t var$3 = $nc($($nc(gc2)->getBounds()))->x;
	int32_t var$4 = $nc($(gc2->getBounds()))->y;
	int32_t var$5 = $nc(TestMultiScreenGConfigNotify::f)->getWidth();
	$nc(TestMultiScreenGConfigNotify::f)->setBounds(var$3, var$4, var$5, $nc(TestMultiScreenGConfigNotify::f)->getHeight());
}

void TestMultiScreenGConfigNotify::lambda$main$0($PropertyChangeEvent* evt) {
	$init(TestMultiScreenGConfigNotify);
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(evt)->getPropertyName());
	$nc($System::out)->println($$str({"propertyChange "_s, name}));
	$nc(TestMultiScreenGConfigNotify::propName)->set(TestMultiScreenGConfigNotify::propCount, name);
	++TestMultiScreenGConfigNotify::propCount;
}

void clinit$TestMultiScreenGConfigNotify($Class* class$) {
	TestMultiScreenGConfigNotify::propCount = 0;
	TestMultiScreenGConfigNotify::result = false;
}

TestMultiScreenGConfigNotify::TestMultiScreenGConfigNotify() {
}

$Class* TestMultiScreenGConfigNotify::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestMultiScreenGConfigNotify$$Lambda$lambda$main$1::classInfo$.name)) {
			return TestMultiScreenGConfigNotify$$Lambda$lambda$main$1::load$(name, initialize);
		}
		if (name->equals(TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1::classInfo$.name)) {
			return TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1::load$(name, initialize);
		}
		if (name->equals(TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2::classInfo$.name)) {
			return TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2::load$(name, initialize);
		}
	}
	$loadClass(TestMultiScreenGConfigNotify, name, initialize, &_TestMultiScreenGConfigNotify_ClassInfo_, clinit$TestMultiScreenGConfigNotify, allocate$TestMultiScreenGConfigNotify);
	return class$;
}

$Class* TestMultiScreenGConfigNotify::class$ = nullptr;