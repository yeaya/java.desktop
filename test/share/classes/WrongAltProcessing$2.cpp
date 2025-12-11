#include <WrongAltProcessing$2.h>

#include <WrongAltProcessing.h>
#include <jcpp.h>

using $WrongAltProcessing = ::WrongAltProcessing;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _WrongAltProcessing$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WrongAltProcessing$2::*)()>(&WrongAltProcessing$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WrongAltProcessing$2_EnclosingMethodInfo_ = {
	"WrongAltProcessing",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _WrongAltProcessing$2_InnerClassesInfo_[] = {
	{"WrongAltProcessing$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WrongAltProcessing$2_ClassInfo_ = {
	$ACC_SUPER,
	"WrongAltProcessing$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_WrongAltProcessing$2_MethodInfo_,
	nullptr,
	&_WrongAltProcessing$2_EnclosingMethodInfo_,
	_WrongAltProcessing$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"WrongAltProcessing"
};

$Object* allocate$WrongAltProcessing$2($Class* clazz) {
	return $of($alloc(WrongAltProcessing$2));
}

void WrongAltProcessing$2::init$() {
}

void WrongAltProcessing$2::run() {
	$WrongAltProcessing::verify();
}

WrongAltProcessing$2::WrongAltProcessing$2() {
}

$Class* WrongAltProcessing$2::load$($String* name, bool initialize) {
	$loadClass(WrongAltProcessing$2, name, initialize, &_WrongAltProcessing$2_ClassInfo_, allocate$WrongAltProcessing$2);
	return class$;
}

$Class* WrongAltProcessing$2::class$ = nullptr;