#include <bug6493680.h>

#include <bug6493680$Test.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef NUMBER_OF_TRIES

using $bug6493680$Test = ::bug6493680$Test;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

$FieldInfo _bug6493680_FieldInfo_[] = {
	{"NUMBER_OF_TRIES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6493680, NUMBER_OF_TRIES)},
	{}
};

$MethodInfo _bug6493680_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6493680::*)()>(&bug6493680::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6493680::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6493680_InnerClassesInfo_[] = {
	{"bug6493680$Test", "bug6493680", "Test", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug6493680_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6493680",
	"java.lang.Object",
	nullptr,
	_bug6493680_FieldInfo_,
	_bug6493680_MethodInfo_,
	nullptr,
	nullptr,
	_bug6493680_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6493680$Test,bug6493680$Test$TestSwingWorker,bug6493680$Test$1"
};

$Object* allocate$bug6493680($Class* clazz) {
	return $of($alloc(bug6493680));
}

void bug6493680::init$() {
}

void bug6493680::main($StringArray* args) {
	for (int32_t i = 0; i < bug6493680::NUMBER_OF_TRIES; ++i) {
		if (!($$new($bug6493680$Test))->test()) {
			$throwNew($RuntimeException, "failed"_s);
		}
	}
}

bug6493680::bug6493680() {
}

$Class* bug6493680::load$($String* name, bool initialize) {
	$loadClass(bug6493680, name, initialize, &_bug6493680_ClassInfo_, allocate$bug6493680);
	return class$;
}

$Class* bug6493680::class$ = nullptr;