#include <PressedButtonRightClickTest$1.h>

#include <PressedButtonRightClickTest.h>
#include <jcpp.h>

using $PressedButtonRightClickTest = ::PressedButtonRightClickTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _PressedButtonRightClickTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PressedButtonRightClickTest$1::*)()>(&PressedButtonRightClickTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PressedButtonRightClickTest$1_EnclosingMethodInfo_ = {
	"PressedButtonRightClickTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _PressedButtonRightClickTest$1_InnerClassesInfo_[] = {
	{"PressedButtonRightClickTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PressedButtonRightClickTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"PressedButtonRightClickTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_PressedButtonRightClickTest$1_MethodInfo_,
	nullptr,
	&_PressedButtonRightClickTest$1_EnclosingMethodInfo_,
	_PressedButtonRightClickTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PressedButtonRightClickTest"
};

$Object* allocate$PressedButtonRightClickTest$1($Class* clazz) {
	return $of($alloc(PressedButtonRightClickTest$1));
}

void PressedButtonRightClickTest$1::init$() {
}

void PressedButtonRightClickTest$1::run() {
	$PressedButtonRightClickTest::constructTestUI();
}

PressedButtonRightClickTest$1::PressedButtonRightClickTest$1() {
}

$Class* PressedButtonRightClickTest$1::load$($String* name, bool initialize) {
	$loadClass(PressedButtonRightClickTest$1, name, initialize, &_PressedButtonRightClickTest$1_ClassInfo_, allocate$PressedButtonRightClickTest$1);
	return class$;
}

$Class* PressedButtonRightClickTest$1::class$ = nullptr;