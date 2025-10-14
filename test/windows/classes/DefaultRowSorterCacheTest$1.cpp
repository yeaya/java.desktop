#include <DefaultRowSorterCacheTest$1.h>

#include <DefaultRowSorterCacheTest.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DefaultRowSorterCacheTest = ::DefaultRowSorterCacheTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _DefaultRowSorterCacheTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultRowSorterCacheTest$1::*)()>(&DefaultRowSorterCacheTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultRowSorterCacheTest$1_EnclosingMethodInfo_ = {
	"DefaultRowSorterCacheTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _DefaultRowSorterCacheTest$1_InnerClassesInfo_[] = {
	{"DefaultRowSorterCacheTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultRowSorterCacheTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"DefaultRowSorterCacheTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_DefaultRowSorterCacheTest$1_MethodInfo_,
	nullptr,
	&_DefaultRowSorterCacheTest$1_EnclosingMethodInfo_,
	_DefaultRowSorterCacheTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DefaultRowSorterCacheTest"
};

$Object* allocate$DefaultRowSorterCacheTest$1($Class* clazz) {
	return $of($alloc(DefaultRowSorterCacheTest$1));
}

void DefaultRowSorterCacheTest$1::init$() {
}

void DefaultRowSorterCacheTest$1::run() {
	$$new($DefaultRowSorterCacheTest)->testSort();
}

DefaultRowSorterCacheTest$1::DefaultRowSorterCacheTest$1() {
}

$Class* DefaultRowSorterCacheTest$1::load$($String* name, bool initialize) {
	$loadClass(DefaultRowSorterCacheTest$1, name, initialize, &_DefaultRowSorterCacheTest$1_ClassInfo_, allocate$DefaultRowSorterCacheTest$1);
	return class$;
}

$Class* DefaultRowSorterCacheTest$1::class$ = nullptr;