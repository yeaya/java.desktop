#include <WrongAltProcessing$1.h>

#include <WrongAltProcessing.h>
#include <jcpp.h>

using $WrongAltProcessing = ::WrongAltProcessing;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _WrongAltProcessing$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WrongAltProcessing$1::*)()>(&WrongAltProcessing$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WrongAltProcessing$1_EnclosingMethodInfo_ = {
	"WrongAltProcessing",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _WrongAltProcessing$1_InnerClassesInfo_[] = {
	{"WrongAltProcessing$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WrongAltProcessing$1_ClassInfo_ = {
	$ACC_SUPER,
	"WrongAltProcessing$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_WrongAltProcessing$1_MethodInfo_,
	nullptr,
	&_WrongAltProcessing$1_EnclosingMethodInfo_,
	_WrongAltProcessing$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WrongAltProcessing"
};

$Object* allocate$WrongAltProcessing$1($Class* clazz) {
	return $of($alloc(WrongAltProcessing$1));
}

void WrongAltProcessing$1::init$() {
}

void WrongAltProcessing$1::run() {
	$WrongAltProcessing::createWindows();
}

WrongAltProcessing$1::WrongAltProcessing$1() {
}

$Class* WrongAltProcessing$1::load$($String* name, bool initialize) {
	$loadClass(WrongAltProcessing$1, name, initialize, &_WrongAltProcessing$1_ClassInfo_, allocate$WrongAltProcessing$1);
	return class$;
}

$Class* WrongAltProcessing$1::class$ = nullptr;