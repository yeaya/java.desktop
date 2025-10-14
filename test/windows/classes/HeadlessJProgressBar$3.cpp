#include <HeadlessJProgressBar$3.h>

#include <HeadlessJProgressBar.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $HeadlessJProgressBar = ::HeadlessJProgressBar;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJProgressBar$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJProgressBar$3::*)()>(&HeadlessJProgressBar$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJProgressBar$3_EnclosingMethodInfo_ = {
	"HeadlessJProgressBar",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJProgressBar$3_InnerClassesInfo_[] = {
	{"HeadlessJProgressBar$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJProgressBar$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJProgressBar$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJProgressBar$3_MethodInfo_,
	nullptr,
	&_HeadlessJProgressBar$3_EnclosingMethodInfo_,
	_HeadlessJProgressBar$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJProgressBar"
};

$Object* allocate$HeadlessJProgressBar$3($Class* clazz) {
	return $of($alloc(HeadlessJProgressBar$3));
}

void HeadlessJProgressBar$3::init$() {
	$Component::init$();
}

HeadlessJProgressBar$3::HeadlessJProgressBar$3() {
}

$Class* HeadlessJProgressBar$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJProgressBar$3, name, initialize, &_HeadlessJProgressBar$3_ClassInfo_, allocate$HeadlessJProgressBar$3);
	return class$;
}

$Class* HeadlessJProgressBar$3::class$ = nullptr;