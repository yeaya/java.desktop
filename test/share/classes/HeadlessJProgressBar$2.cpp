#include <HeadlessJProgressBar$2.h>

#include <HeadlessJProgressBar.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJProgressBar$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJProgressBar$2::*)()>(&HeadlessJProgressBar$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJProgressBar$2_EnclosingMethodInfo_ = {
	"HeadlessJProgressBar",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJProgressBar$2_InnerClassesInfo_[] = {
	{"HeadlessJProgressBar$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJProgressBar$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJProgressBar$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJProgressBar$2_MethodInfo_,
	nullptr,
	&_HeadlessJProgressBar$2_EnclosingMethodInfo_,
	_HeadlessJProgressBar$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJProgressBar"
};

$Object* allocate$HeadlessJProgressBar$2($Class* clazz) {
	return $of($alloc(HeadlessJProgressBar$2));
}

void HeadlessJProgressBar$2::init$() {
	$Component::init$();
}

HeadlessJProgressBar$2::HeadlessJProgressBar$2() {
}

$Class* HeadlessJProgressBar$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJProgressBar$2, name, initialize, &_HeadlessJProgressBar$2_ClassInfo_, allocate$HeadlessJProgressBar$2);
	return class$;
}

$Class* HeadlessJProgressBar$2::class$ = nullptr;