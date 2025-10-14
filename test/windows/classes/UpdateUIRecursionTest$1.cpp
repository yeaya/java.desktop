#include <UpdateUIRecursionTest$1.h>

#include <UpdateUIRecursionTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $UpdateUIRecursionTest = ::UpdateUIRecursionTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _UpdateUIRecursionTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(UpdateUIRecursionTest$1::*)()>(&UpdateUIRecursionTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _UpdateUIRecursionTest$1_EnclosingMethodInfo_ = {
	"UpdateUIRecursionTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _UpdateUIRecursionTest$1_InnerClassesInfo_[] = {
	{"UpdateUIRecursionTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _UpdateUIRecursionTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"UpdateUIRecursionTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_UpdateUIRecursionTest$1_MethodInfo_,
	nullptr,
	&_UpdateUIRecursionTest$1_EnclosingMethodInfo_,
	_UpdateUIRecursionTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"UpdateUIRecursionTest"
};

$Object* allocate$UpdateUIRecursionTest$1($Class* clazz) {
	return $of($alloc(UpdateUIRecursionTest$1));
}

void UpdateUIRecursionTest$1::init$() {
}

void UpdateUIRecursionTest$1::run() {
	$var($UpdateUIRecursionTest, obj, $new($UpdateUIRecursionTest));
	obj->test();
	obj->disposeUI();
}

UpdateUIRecursionTest$1::UpdateUIRecursionTest$1() {
}

$Class* UpdateUIRecursionTest$1::load$($String* name, bool initialize) {
	$loadClass(UpdateUIRecursionTest$1, name, initialize, &_UpdateUIRecursionTest$1_ClassInfo_, allocate$UpdateUIRecursionTest$1);
	return class$;
}

$Class* UpdateUIRecursionTest$1::class$ = nullptr;