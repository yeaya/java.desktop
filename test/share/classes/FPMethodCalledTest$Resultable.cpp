#include <FPMethodCalledTest$Resultable.h>

#include <FPMethodCalledTest.h>
#include <jcpp.h>

using $FPMethodCalledTest = ::FPMethodCalledTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _FPMethodCalledTest$Resultable_MethodInfo_[] = {
	{"getResult", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _FPMethodCalledTest$Resultable_InnerClassesInfo_[] = {
	{"FPMethodCalledTest$Resultable", "FPMethodCalledTest", "Resultable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _FPMethodCalledTest$Resultable_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"FPMethodCalledTest$Resultable",
	nullptr,
	nullptr,
	nullptr,
	_FPMethodCalledTest$Resultable_MethodInfo_,
	nullptr,
	nullptr,
	_FPMethodCalledTest$Resultable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FPMethodCalledTest"
};

$Object* allocate$FPMethodCalledTest$Resultable($Class* clazz) {
	return $of($alloc(FPMethodCalledTest$Resultable));
}

$Class* FPMethodCalledTest$Resultable::load$($String* name, bool initialize) {
	$loadClass(FPMethodCalledTest$Resultable, name, initialize, &_FPMethodCalledTest$Resultable_ClassInfo_, allocate$FPMethodCalledTest$Resultable);
	return class$;
}

$Class* FPMethodCalledTest$Resultable::class$ = nullptr;