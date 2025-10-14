#include <Test6625450$1.h>

#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Test6625450$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test6625450$1::*)()>(&Test6625450$1::init$))},
	{}
};

$EnclosingMethodInfo _Test6625450$1_EnclosingMethodInfo_ = {
	"Test6625450",
	nullptr,
	nullptr
};

$InnerClassInfo _Test6625450$1_InnerClassesInfo_[] = {
	{"Test6625450$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6625450$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test6625450$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_Test6625450$1_MethodInfo_,
	nullptr,
	&_Test6625450$1_EnclosingMethodInfo_,
	_Test6625450$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6625450"
};

$Object* allocate$Test6625450$1($Class* clazz) {
	return $of($alloc(Test6625450$1));
}

void Test6625450$1::init$() {
	$Component::init$();
}

Test6625450$1::Test6625450$1() {
}

$Class* Test6625450$1::load$($String* name, bool initialize) {
	$loadClass(Test6625450$1, name, initialize, &_Test6625450$1_ClassInfo_, allocate$Test6625450$1);
	return class$;
}

$Class* Test6625450$1::class$ = nullptr;