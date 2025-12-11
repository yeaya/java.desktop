#include <DefaultButtonTest$1.h>

#include <DefaultButtonTest.h>
#include <jcpp.h>

using $DefaultButtonTest = ::DefaultButtonTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _DefaultButtonTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultButtonTest$1::*)()>(&DefaultButtonTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultButtonTest$1_EnclosingMethodInfo_ = {
	"DefaultButtonTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _DefaultButtonTest$1_InnerClassesInfo_[] = {
	{"DefaultButtonTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultButtonTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"DefaultButtonTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_DefaultButtonTest$1_MethodInfo_,
	nullptr,
	&_DefaultButtonTest$1_EnclosingMethodInfo_,
	_DefaultButtonTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DefaultButtonTest"
};

$Object* allocate$DefaultButtonTest$1($Class* clazz) {
	return $of($alloc(DefaultButtonTest$1));
}

void DefaultButtonTest$1::init$() {
}

void DefaultButtonTest$1::run() {
	$new($DefaultButtonTest);
}

DefaultButtonTest$1::DefaultButtonTest$1() {
}

$Class* DefaultButtonTest$1::load$($String* name, bool initialize) {
	$loadClass(DefaultButtonTest$1, name, initialize, &_DefaultButtonTest$1_ClassInfo_, allocate$DefaultButtonTest$1);
	return class$;
}

$Class* DefaultButtonTest$1::class$ = nullptr;