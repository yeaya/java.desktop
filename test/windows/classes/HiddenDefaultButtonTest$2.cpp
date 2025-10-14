#include <HiddenDefaultButtonTest$2.h>

#include <HiddenDefaultButtonTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $HiddenDefaultButtonTest = ::HiddenDefaultButtonTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _HiddenDefaultButtonTest$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HiddenDefaultButtonTest$2::*)()>(&HiddenDefaultButtonTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HiddenDefaultButtonTest$2_EnclosingMethodInfo_ = {
	"HiddenDefaultButtonTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HiddenDefaultButtonTest$2_InnerClassesInfo_[] = {
	{"HiddenDefaultButtonTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HiddenDefaultButtonTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"HiddenDefaultButtonTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_HiddenDefaultButtonTest$2_MethodInfo_,
	nullptr,
	&_HiddenDefaultButtonTest$2_EnclosingMethodInfo_,
	_HiddenDefaultButtonTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HiddenDefaultButtonTest"
};

$Object* allocate$HiddenDefaultButtonTest$2($Class* clazz) {
	return $of($alloc(HiddenDefaultButtonTest$2));
}

void HiddenDefaultButtonTest$2::init$() {
}

void HiddenDefaultButtonTest$2::run() {
	$HiddenDefaultButtonTest::createGUI();
}

HiddenDefaultButtonTest$2::HiddenDefaultButtonTest$2() {
}

$Class* HiddenDefaultButtonTest$2::load$($String* name, bool initialize) {
	$loadClass(HiddenDefaultButtonTest$2, name, initialize, &_HiddenDefaultButtonTest$2_ClassInfo_, allocate$HiddenDefaultButtonTest$2);
	return class$;
}

$Class* HiddenDefaultButtonTest$2::class$ = nullptr;