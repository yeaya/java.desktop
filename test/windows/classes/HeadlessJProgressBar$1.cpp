#include <HeadlessJProgressBar$1.h>

#include <HeadlessJProgressBar.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJProgressBar = ::HeadlessJProgressBar;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJProgressBar$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJProgressBar$1::*)()>(&HeadlessJProgressBar$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJProgressBar$1_EnclosingMethodInfo_ = {
	"HeadlessJProgressBar",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJProgressBar$1_InnerClassesInfo_[] = {
	{"HeadlessJProgressBar$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJProgressBar$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJProgressBar$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJProgressBar$1_MethodInfo_,
	nullptr,
	&_HeadlessJProgressBar$1_EnclosingMethodInfo_,
	_HeadlessJProgressBar$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJProgressBar"
};

$Object* allocate$HeadlessJProgressBar$1($Class* clazz) {
	return $of($alloc(HeadlessJProgressBar$1));
}

void HeadlessJProgressBar$1::init$() {
	$Component::init$();
}

HeadlessJProgressBar$1::HeadlessJProgressBar$1() {
}

$Class* HeadlessJProgressBar$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJProgressBar$1, name, initialize, &_HeadlessJProgressBar$1_ClassInfo_, allocate$HeadlessJProgressBar$1);
	return class$;
}

$Class* HeadlessJProgressBar$1::class$ = nullptr;