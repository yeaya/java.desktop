#include <TestProxyLazyValue$UserLazyClass.h>

#include <TestProxyLazyValue.h>
#include <jcpp.h>

#undef CONSTRUCTOR_ARG
#undef RESULT_1
#undef RESULT_2

using $TestProxyLazyValue = ::TestProxyLazyValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestProxyLazyValue$UserLazyClass_FieldInfo_[] = {
	{"CONSTRUCTOR_ARG", "I", nullptr, $STATIC | $FINAL, $constField(TestProxyLazyValue$UserLazyClass, CONSTRUCTOR_ARG)},
	{"RESULT_1", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TestProxyLazyValue$UserLazyClass, RESULT_1)},
	{"RESULT_2", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(TestProxyLazyValue$UserLazyClass, RESULT_2)},
	{"arg", "I", nullptr, 0, $field(TestProxyLazyValue$UserLazyClass, arg)},
	{}
};

$MethodInfo _TestProxyLazyValue$UserLazyClass_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestProxyLazyValue$UserLazyClass::*)()>(&TestProxyLazyValue$UserLazyClass::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(TestProxyLazyValue$UserLazyClass::*)(int32_t)>(&TestProxyLazyValue$UserLazyClass::init$))},
	{"method1", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&TestProxyLazyValue$UserLazyClass::method1))},
	{"method2", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&TestProxyLazyValue$UserLazyClass::method2))},
	{}
};

$InnerClassInfo _TestProxyLazyValue$UserLazyClass_InnerClassesInfo_[] = {
	{"TestProxyLazyValue$UserLazyClass", "TestProxyLazyValue", "UserLazyClass", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestProxyLazyValue$UserLazyClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestProxyLazyValue$UserLazyClass",
	"java.lang.Object",
	nullptr,
	_TestProxyLazyValue$UserLazyClass_FieldInfo_,
	_TestProxyLazyValue$UserLazyClass_MethodInfo_,
	nullptr,
	nullptr,
	_TestProxyLazyValue$UserLazyClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestProxyLazyValue"
};

$Object* allocate$TestProxyLazyValue$UserLazyClass($Class* clazz) {
	return $of($alloc(TestProxyLazyValue$UserLazyClass));
}

$String* TestProxyLazyValue$UserLazyClass::RESULT_1 = nullptr;
$String* TestProxyLazyValue$UserLazyClass::RESULT_2 = nullptr;

void TestProxyLazyValue$UserLazyClass::init$() {
}

void TestProxyLazyValue$UserLazyClass::init$(int32_t arg) {
	this->arg = arg;
}

$String* TestProxyLazyValue$UserLazyClass::method1() {
	$init(TestProxyLazyValue$UserLazyClass);
	return TestProxyLazyValue$UserLazyClass::RESULT_1;
}

$String* TestProxyLazyValue$UserLazyClass::method2($String* arg) {
	$init(TestProxyLazyValue$UserLazyClass);
	return arg;
}

TestProxyLazyValue$UserLazyClass::TestProxyLazyValue$UserLazyClass() {
}

void clinit$TestProxyLazyValue$UserLazyClass($Class* class$) {
	$assignStatic(TestProxyLazyValue$UserLazyClass::RESULT_1, "1"_s);
	$assignStatic(TestProxyLazyValue$UserLazyClass::RESULT_2, "2"_s);
}

$Class* TestProxyLazyValue$UserLazyClass::load$($String* name, bool initialize) {
	$loadClass(TestProxyLazyValue$UserLazyClass, name, initialize, &_TestProxyLazyValue$UserLazyClass_ClassInfo_, clinit$TestProxyLazyValue$UserLazyClass, allocate$TestProxyLazyValue$UserLazyClass);
	return class$;
}

$Class* TestProxyLazyValue$UserLazyClass::class$ = nullptr;