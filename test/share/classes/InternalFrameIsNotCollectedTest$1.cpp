#include <InternalFrameIsNotCollectedTest$1.h>

#include <InternalFrameIsNotCollectedTest.h>
#include <java/beans/PropertyVetoException.h>
#include <jcpp.h>

using $InternalFrameIsNotCollectedTest = ::InternalFrameIsNotCollectedTest;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _InternalFrameIsNotCollectedTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(InternalFrameIsNotCollectedTest$1::*)()>(&InternalFrameIsNotCollectedTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InternalFrameIsNotCollectedTest$1_EnclosingMethodInfo_ = {
	"InternalFrameIsNotCollectedTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _InternalFrameIsNotCollectedTest$1_InnerClassesInfo_[] = {
	{"InternalFrameIsNotCollectedTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InternalFrameIsNotCollectedTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"InternalFrameIsNotCollectedTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_InternalFrameIsNotCollectedTest$1_MethodInfo_,
	nullptr,
	&_InternalFrameIsNotCollectedTest$1_EnclosingMethodInfo_,
	_InternalFrameIsNotCollectedTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"InternalFrameIsNotCollectedTest"
};

$Object* allocate$InternalFrameIsNotCollectedTest$1($Class* clazz) {
	return $of($alloc(InternalFrameIsNotCollectedTest$1));
}

void InternalFrameIsNotCollectedTest$1::init$() {
}

void InternalFrameIsNotCollectedTest$1::run() {
	$InternalFrameIsNotCollectedTest::initUI();
	try {
		$InternalFrameIsNotCollectedTest::closeInternalFrame();
	} catch ($PropertyVetoException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

InternalFrameIsNotCollectedTest$1::InternalFrameIsNotCollectedTest$1() {
}

$Class* InternalFrameIsNotCollectedTest$1::load$($String* name, bool initialize) {
	$loadClass(InternalFrameIsNotCollectedTest$1, name, initialize, &_InternalFrameIsNotCollectedTest$1_ClassInfo_, allocate$InternalFrameIsNotCollectedTest$1);
	return class$;
}

$Class* InternalFrameIsNotCollectedTest$1::class$ = nullptr;