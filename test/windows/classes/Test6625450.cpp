#include <Test6625450.h>

#include <Test6625450$1.h>
#include <java/awt/Component.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef BORDER
#undef COMPONENT
#undef MAX_VALUE
#undef MIN_VALUE

using $Test6625450$1 = ::Test6625450$1;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $TitledBorder = ::javax::swing::border::TitledBorder;

$FieldInfo _Test6625450_FieldInfo_[] = {
	{"BORDER", "Ljavax/swing/border/TitledBorder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6625450, BORDER)},
	{"COMPONENT", "Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6625450, COMPONENT)},
	{}
};

$MethodInfo _Test6625450_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6625450::*)()>(&Test6625450::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6625450::main))},
	{"test", "(ZII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool,int32_t,int32_t)>(&Test6625450::test))},
	{}
};

$InnerClassInfo _Test6625450_InnerClassesInfo_[] = {
	{"Test6625450$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6625450_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6625450",
	"java.lang.Object",
	nullptr,
	_Test6625450_FieldInfo_,
	_Test6625450_MethodInfo_,
	nullptr,
	nullptr,
	_Test6625450_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test6625450$1"
};

$Object* allocate$Test6625450($Class* clazz) {
	return $of($alloc(Test6625450));
}

$TitledBorder* Test6625450::BORDER = nullptr;
$Component* Test6625450::COMPONENT = nullptr;

void Test6625450::init$() {
}

void Test6625450::main($StringArray* args) {
	$init(Test6625450);
	test(false, 0, $Integer::MAX_VALUE);
	test(false, 0, 1);
	test(true, 0, -1);
	test(true, 0, $Integer::MIN_VALUE);
	test(false, $Integer::MAX_VALUE, 0);
	test(false, 1, 0);
	test(true, -1, 0);
	test(true, $Integer::MIN_VALUE, 0);
}

void Test6625450::test(bool expected, int32_t width, int32_t height) {
	$init(Test6625450);
	try {
		$nc(Test6625450::BORDER)->getBaseline(Test6625450::COMPONENT, width, height);
		if (expected) {
			$throwNew($Error, "expected IllegalArgumentException"_s);
		}
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, exception, $catch());
		if (!expected) {
			$throwNew($Error, "unexpected exception"_s, exception);
		}
	}
}

void clinit$Test6625450($Class* class$) {
	$assignStatic(Test6625450::BORDER, $new($TitledBorder, "123"_s));
	$assignStatic(Test6625450::COMPONENT, $new($Test6625450$1));
}

Test6625450::Test6625450() {
}

$Class* Test6625450::load$($String* name, bool initialize) {
	$loadClass(Test6625450, name, initialize, &_Test6625450_ClassInfo_, clinit$Test6625450, allocate$Test6625450);
	return class$;
}

$Class* Test6625450::class$ = nullptr;