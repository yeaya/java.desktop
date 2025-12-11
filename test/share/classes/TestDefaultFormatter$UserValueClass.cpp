#include <TestDefaultFormatter$UserValueClass.h>

#include <TestDefaultFormatter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestDefaultFormatter$UserValueClass_FieldInfo_[] = {
	{"str", "Ljava/lang/String;", nullptr, 0, $field(TestDefaultFormatter$UserValueClass, str)},
	{}
};

$MethodInfo _TestDefaultFormatter$UserValueClass_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TestDefaultFormatter$UserValueClass::*)($String*)>(&TestDefaultFormatter$UserValueClass::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestDefaultFormatter$UserValueClass_InnerClassesInfo_[] = {
	{"TestDefaultFormatter$UserValueClass", "TestDefaultFormatter", "UserValueClass", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TestDefaultFormatter$UserValueClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestDefaultFormatter$UserValueClass",
	"java.lang.Object",
	nullptr,
	_TestDefaultFormatter$UserValueClass_FieldInfo_,
	_TestDefaultFormatter$UserValueClass_MethodInfo_,
	nullptr,
	nullptr,
	_TestDefaultFormatter$UserValueClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestDefaultFormatter"
};

$Object* allocate$TestDefaultFormatter$UserValueClass($Class* clazz) {
	return $of($alloc(TestDefaultFormatter$UserValueClass));
}

void TestDefaultFormatter$UserValueClass::init$($String* str) {
	$set(this, str, str);
}

$String* TestDefaultFormatter$UserValueClass::toString() {
	return $str({"UserValueClass: "_s, this->str});
}

TestDefaultFormatter$UserValueClass::TestDefaultFormatter$UserValueClass() {
}

$Class* TestDefaultFormatter$UserValueClass::load$($String* name, bool initialize) {
	$loadClass(TestDefaultFormatter$UserValueClass, name, initialize, &_TestDefaultFormatter$UserValueClass_ClassInfo_, allocate$TestDefaultFormatter$UserValueClass);
	return class$;
}

$Class* TestDefaultFormatter$UserValueClass::class$ = nullptr;