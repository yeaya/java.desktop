#include <TestDefaultFormatter$1.h>

#include <TestDefaultFormatter.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <jcpp.h>

using $TestDefaultFormatter = ::TestDefaultFormatter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;

$MethodInfo _TestDefaultFormatter$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestDefaultFormatter$1::*)()>(&TestDefaultFormatter$1::init$))},
	{}
};

$EnclosingMethodInfo _TestDefaultFormatter$1_EnclosingMethodInfo_ = {
	"TestDefaultFormatter",
	"testDefaultFormatter",
	"()V"
};

$InnerClassInfo _TestDefaultFormatter$1_InnerClassesInfo_[] = {
	{"TestDefaultFormatter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestDefaultFormatter$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestDefaultFormatter$1",
	"javax.swing.text.DefaultFormatter",
	nullptr,
	nullptr,
	_TestDefaultFormatter$1_MethodInfo_,
	nullptr,
	&_TestDefaultFormatter$1_EnclosingMethodInfo_,
	_TestDefaultFormatter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestDefaultFormatter"
};

$Object* allocate$TestDefaultFormatter$1($Class* clazz) {
	return $of($alloc(TestDefaultFormatter$1));
}

void TestDefaultFormatter$1::init$() {
	$DefaultFormatter::init$();
}

TestDefaultFormatter$1::TestDefaultFormatter$1() {
}

$Class* TestDefaultFormatter$1::load$($String* name, bool initialize) {
	$loadClass(TestDefaultFormatter$1, name, initialize, &_TestDefaultFormatter$1_ClassInfo_, allocate$TestDefaultFormatter$1);
	return class$;
}

$Class* TestDefaultFormatter$1::class$ = nullptr;