#include <TestProxyLazyValue$UserProxyLazyValue.h>

#include <TestProxyLazyValue.h>
#include <javax/swing/UIDefaults$ProxyLazyValue.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults$ProxyLazyValue = ::javax::swing::UIDefaults$ProxyLazyValue;

$MethodInfo _TestProxyLazyValue$UserProxyLazyValue_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TestProxyLazyValue$UserProxyLazyValue::*)($String*)>(&TestProxyLazyValue$UserProxyLazyValue::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestProxyLazyValue$UserProxyLazyValue::*)($String*,$ObjectArray*)>(&TestProxyLazyValue$UserProxyLazyValue::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TestProxyLazyValue$UserProxyLazyValue::*)($String*,$String*)>(&TestProxyLazyValue$UserProxyLazyValue::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TestProxyLazyValue$UserProxyLazyValue::*)($String*,$String*,$ObjectArray*)>(&TestProxyLazyValue$UserProxyLazyValue::init$))},
	{}
};

$InnerClassInfo _TestProxyLazyValue$UserProxyLazyValue_InnerClassesInfo_[] = {
	{"TestProxyLazyValue$UserProxyLazyValue", "TestProxyLazyValue", "UserProxyLazyValue", $PUBLIC | $STATIC},
	{"javax.swing.UIDefaults$ProxyLazyValue", "javax.swing.UIDefaults", "ProxyLazyValue", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestProxyLazyValue$UserProxyLazyValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestProxyLazyValue$UserProxyLazyValue",
	"javax.swing.UIDefaults$ProxyLazyValue",
	nullptr,
	nullptr,
	_TestProxyLazyValue$UserProxyLazyValue_MethodInfo_,
	nullptr,
	nullptr,
	_TestProxyLazyValue$UserProxyLazyValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestProxyLazyValue"
};

$Object* allocate$TestProxyLazyValue$UserProxyLazyValue($Class* clazz) {
	return $of($alloc(TestProxyLazyValue$UserProxyLazyValue));
}

void TestProxyLazyValue$UserProxyLazyValue::init$($String* className) {
	$UIDefaults$ProxyLazyValue::init$(className);
}

void TestProxyLazyValue$UserProxyLazyValue::init$($String* className, $ObjectArray* constructorArgs) {
	$UIDefaults$ProxyLazyValue::init$(className, constructorArgs);
}

void TestProxyLazyValue$UserProxyLazyValue::init$($String* className, $String* methodName) {
	$UIDefaults$ProxyLazyValue::init$(className, methodName);
}

void TestProxyLazyValue$UserProxyLazyValue::init$($String* className, $String* methodName, $ObjectArray* methodArgs) {
	$UIDefaults$ProxyLazyValue::init$(className, methodName, methodArgs);
}

TestProxyLazyValue$UserProxyLazyValue::TestProxyLazyValue$UserProxyLazyValue() {
}

$Class* TestProxyLazyValue$UserProxyLazyValue::load$($String* name, bool initialize) {
	$loadClass(TestProxyLazyValue$UserProxyLazyValue, name, initialize, &_TestProxyLazyValue$UserProxyLazyValue_ClassInfo_, allocate$TestProxyLazyValue$UserProxyLazyValue);
	return class$;
}

$Class* TestProxyLazyValue$UserProxyLazyValue::class$ = nullptr;