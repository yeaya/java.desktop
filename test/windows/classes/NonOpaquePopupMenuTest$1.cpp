#include <NonOpaquePopupMenuTest$1.h>

#include <NonOpaquePopupMenuTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $NonOpaquePopupMenuTest = ::NonOpaquePopupMenuTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _NonOpaquePopupMenuTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NonOpaquePopupMenuTest$1::*)()>(&NonOpaquePopupMenuTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NonOpaquePopupMenuTest$1_EnclosingMethodInfo_ = {
	"NonOpaquePopupMenuTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _NonOpaquePopupMenuTest$1_InnerClassesInfo_[] = {
	{"NonOpaquePopupMenuTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NonOpaquePopupMenuTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"NonOpaquePopupMenuTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_NonOpaquePopupMenuTest$1_MethodInfo_,
	nullptr,
	&_NonOpaquePopupMenuTest$1_EnclosingMethodInfo_,
	_NonOpaquePopupMenuTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NonOpaquePopupMenuTest"
};

$Object* allocate$NonOpaquePopupMenuTest$1($Class* clazz) {
	return $of($alloc(NonOpaquePopupMenuTest$1));
}

void NonOpaquePopupMenuTest$1::init$() {
}

void NonOpaquePopupMenuTest$1::run() {
	$new($NonOpaquePopupMenuTest);
}

NonOpaquePopupMenuTest$1::NonOpaquePopupMenuTest$1() {
}

$Class* NonOpaquePopupMenuTest$1::load$($String* name, bool initialize) {
	$loadClass(NonOpaquePopupMenuTest$1, name, initialize, &_NonOpaquePopupMenuTest$1_ClassInfo_, allocate$NonOpaquePopupMenuTest$1);
	return class$;
}

$Class* NonOpaquePopupMenuTest$1::class$ = nullptr;