#include <TestProxyLazyValue.h>

#include <TestProxyLazyValue$UserLazyClass.h>
#include <TestProxyLazyValue$UserProxyLazyValue.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults$ProxyLazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

#undef CONSTRUCTOR_ARG
#undef RESULT_1
#undef RESULT_2

using $TestProxyLazyValue$UserLazyClass = ::TestProxyLazyValue$UserLazyClass;
using $TestProxyLazyValue$UserProxyLazyValue = ::TestProxyLazyValue$UserProxyLazyValue;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ProxyLazyValue = ::javax::swing::UIDefaults$ProxyLazyValue;

class TestProxyLazyValue$$Lambda$testUserProxyLazyValue : public $Runnable {
	$class(TestProxyLazyValue$$Lambda$testUserProxyLazyValue, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestProxyLazyValue::testUserProxyLazyValue();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestProxyLazyValue$$Lambda$testUserProxyLazyValue>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestProxyLazyValue$$Lambda$testUserProxyLazyValue::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestProxyLazyValue$$Lambda$testUserProxyLazyValue::*)()>(&TestProxyLazyValue$$Lambda$testUserProxyLazyValue::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestProxyLazyValue$$Lambda$testUserProxyLazyValue::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestProxyLazyValue$$Lambda$testUserProxyLazyValue",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestProxyLazyValue$$Lambda$testUserProxyLazyValue::load$($String* name, bool initialize) {
	$loadClass(TestProxyLazyValue$$Lambda$testUserProxyLazyValue, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestProxyLazyValue$$Lambda$testUserProxyLazyValue::class$ = nullptr;

class TestProxyLazyValue$$Lambda$testProxyLazyValue$1 : public $Runnable {
	$class(TestProxyLazyValue$$Lambda$testProxyLazyValue$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestProxyLazyValue::testProxyLazyValue();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestProxyLazyValue$$Lambda$testProxyLazyValue$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestProxyLazyValue$$Lambda$testProxyLazyValue$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestProxyLazyValue$$Lambda$testProxyLazyValue$1::*)()>(&TestProxyLazyValue$$Lambda$testProxyLazyValue$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestProxyLazyValue$$Lambda$testProxyLazyValue$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestProxyLazyValue$$Lambda$testProxyLazyValue$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestProxyLazyValue$$Lambda$testProxyLazyValue$1::load$($String* name, bool initialize) {
	$loadClass(TestProxyLazyValue$$Lambda$testProxyLazyValue$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestProxyLazyValue$$Lambda$testProxyLazyValue$1::class$ = nullptr;

$MethodInfo _TestProxyLazyValue_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestProxyLazyValue::*)()>(&TestProxyLazyValue::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestProxyLazyValue::main)), "java.lang.Exception"},
	{"testProxyLazyValue", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestProxyLazyValue::testProxyLazyValue))},
	{"testUserProxyLazyValue", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TestProxyLazyValue::testUserProxyLazyValue))},
	{}
};

$InnerClassInfo _TestProxyLazyValue_InnerClassesInfo_[] = {
	{"TestProxyLazyValue$UserProxyLazyValue", "TestProxyLazyValue", "UserProxyLazyValue", $PUBLIC | $STATIC},
	{"TestProxyLazyValue$UserLazyClass", "TestProxyLazyValue", "UserLazyClass", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestProxyLazyValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestProxyLazyValue",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TestProxyLazyValue_MethodInfo_,
	nullptr,
	nullptr,
	_TestProxyLazyValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestProxyLazyValue$UserProxyLazyValue,TestProxyLazyValue$UserLazyClass"
};

$Object* allocate$TestProxyLazyValue($Class* clazz) {
	return $of($alloc(TestProxyLazyValue));
}

void TestProxyLazyValue::init$() {
}

void TestProxyLazyValue::main($StringArray* args) {
	$load(TestProxyLazyValue);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestProxyLazyValue$$Lambda$testUserProxyLazyValue)));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestProxyLazyValue$$Lambda$testProxyLazyValue$1)));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestProxyLazyValue$$Lambda$testUserProxyLazyValue)));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestProxyLazyValue$$Lambda$testProxyLazyValue$1)));
}

void TestProxyLazyValue::testUserProxyLazyValue() {
	$useLocalCurrentObjectStackCache();
	$load($TestProxyLazyValue$UserLazyClass);
	$var($Object, obj, $$new($TestProxyLazyValue$UserProxyLazyValue, $($TestProxyLazyValue$UserLazyClass::class$->getName()))->createValue(nullptr));
	if (!($instanceOf($TestProxyLazyValue$UserLazyClass, obj))) {
		$throwNew($RuntimeException, "Object is not UserLazyClass!"_s);
	}
	$var($String, var$0, $TestProxyLazyValue$UserLazyClass::class$->getName());
	$assign(obj, $$new($TestProxyLazyValue$UserProxyLazyValue, var$0, $$new($ObjectArray, {$($of($Integer::valueOf($TestProxyLazyValue$UserLazyClass::CONSTRUCTOR_ARG)))}))->createValue(nullptr));
	if (!($instanceOf($TestProxyLazyValue$UserLazyClass, obj))) {
		$throwNew($RuntimeException, "Object is not UserLazyClass!"_s);
	}
	if ($nc(($cast($TestProxyLazyValue$UserLazyClass, obj)))->arg != $TestProxyLazyValue$UserLazyClass::CONSTRUCTOR_ARG) {
		$throwNew($RuntimeException, "Constructt argument is wrong!"_s);
	}
	$assign(obj, $$new($TestProxyLazyValue$UserProxyLazyValue, $($TestProxyLazyValue$UserLazyClass::class$->getName()), "method1"_s)->createValue(nullptr));
	$init($TestProxyLazyValue$UserLazyClass);
	if (!$nc($TestProxyLazyValue$UserLazyClass::RESULT_1)->equals(obj)) {
		$throwNew($RuntimeException, "Result is wrong!"_s);
	}
	$assign(obj, $$new($TestProxyLazyValue$UserProxyLazyValue, $($TestProxyLazyValue$UserLazyClass::class$->getName()), "method2"_s, $$new($ObjectArray, {$of($TestProxyLazyValue$UserLazyClass::RESULT_2)}))->createValue(nullptr));
	if (!$nc($TestProxyLazyValue$UserLazyClass::RESULT_2)->equals(obj)) {
		$throwNew($RuntimeException, "Result is wrong!"_s);
	}
}

void TestProxyLazyValue::testProxyLazyValue() {
	$useLocalCurrentObjectStackCache();
	$load($TestProxyLazyValue$UserLazyClass);
	$var($Object, obj, $$new($UIDefaults$ProxyLazyValue, $($TestProxyLazyValue$UserLazyClass::class$->getName()))->createValue(nullptr));
	if (!($instanceOf($TestProxyLazyValue$UserLazyClass, obj))) {
		$throwNew($RuntimeException, "Object is not UserLazyClass!"_s);
	}
	$var($String, var$0, $TestProxyLazyValue$UserLazyClass::class$->getName());
	$assign(obj, $$new($UIDefaults$ProxyLazyValue, var$0, $$new($ObjectArray, {$($of($Integer::valueOf($TestProxyLazyValue$UserLazyClass::CONSTRUCTOR_ARG)))}))->createValue(nullptr));
	if (!($instanceOf($TestProxyLazyValue$UserLazyClass, obj))) {
		$throwNew($RuntimeException, "Object is not UserLazyClass!"_s);
	}
	if ($nc(($cast($TestProxyLazyValue$UserLazyClass, obj)))->arg != $TestProxyLazyValue$UserLazyClass::CONSTRUCTOR_ARG) {
		$throwNew($RuntimeException, "Constructt argument is wrong!"_s);
	}
	$assign(obj, $$new($UIDefaults$ProxyLazyValue, $($TestProxyLazyValue$UserLazyClass::class$->getName()), "method1"_s)->createValue(nullptr));
	$init($TestProxyLazyValue$UserLazyClass);
	if (!$nc($TestProxyLazyValue$UserLazyClass::RESULT_1)->equals(obj)) {
		$throwNew($RuntimeException, "Result is wrong!"_s);
	}
	$assign(obj, $$new($UIDefaults$ProxyLazyValue, $($TestProxyLazyValue$UserLazyClass::class$->getName()), "method2"_s, $$new($ObjectArray, {$of($TestProxyLazyValue$UserLazyClass::RESULT_2)}))->createValue(nullptr));
	if (!$nc($TestProxyLazyValue$UserLazyClass::RESULT_2)->equals(obj)) {
		$throwNew($RuntimeException, "Result is wrong!"_s);
	}
}

TestProxyLazyValue::TestProxyLazyValue() {
}

$Class* TestProxyLazyValue::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestProxyLazyValue$$Lambda$testUserProxyLazyValue::classInfo$.name)) {
			return TestProxyLazyValue$$Lambda$testUserProxyLazyValue::load$(name, initialize);
		}
		if (name->equals(TestProxyLazyValue$$Lambda$testProxyLazyValue$1::classInfo$.name)) {
			return TestProxyLazyValue$$Lambda$testProxyLazyValue$1::load$(name, initialize);
		}
	}
	$loadClass(TestProxyLazyValue, name, initialize, &_TestProxyLazyValue_ClassInfo_, allocate$TestProxyLazyValue);
	return class$;
}

$Class* TestProxyLazyValue::class$ = nullptr;