#include <GetUpToDateData$1.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _GetUpToDateData$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GetUpToDateData$1::*)()>(&GetUpToDateData$1::init$))},
	{}
};

$EnclosingMethodInfo _GetUpToDateData$1_EnclosingMethodInfo_ = {
	"GetUpToDateData",
	nullptr,
	nullptr
};

$InnerClassInfo _GetUpToDateData$1_InnerClassesInfo_[] = {
	{"GetUpToDateData$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GetUpToDateData$1_ClassInfo_ = {
	$ACC_SUPER,
	"GetUpToDateData$1",
	"java.lang.Object",
	"java.util.EventListener",
	nullptr,
	_GetUpToDateData$1_MethodInfo_,
	nullptr,
	&_GetUpToDateData$1_EnclosingMethodInfo_,
	_GetUpToDateData$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GetUpToDateData"
};

$Object* allocate$GetUpToDateData$1($Class* clazz) {
	return $of($alloc(GetUpToDateData$1));
}

void GetUpToDateData$1::init$() {
}

GetUpToDateData$1::GetUpToDateData$1() {
}

$Class* GetUpToDateData$1::load$($String* name, bool initialize) {
	$loadClass(GetUpToDateData$1, name, initialize, &_GetUpToDateData$1_ClassInfo_, allocate$GetUpToDateData$1);
	return class$;
}

$Class* GetUpToDateData$1::class$ = nullptr;