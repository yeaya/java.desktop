#include <HeadlessJViewport$3.h>

#include <HeadlessJViewport.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJViewport = ::HeadlessJViewport;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJViewport$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJViewport$3::*)()>(&HeadlessJViewport$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJViewport$3_EnclosingMethodInfo_ = {
	"HeadlessJViewport",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJViewport$3_InnerClassesInfo_[] = {
	{"HeadlessJViewport$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJViewport$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJViewport$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJViewport$3_MethodInfo_,
	nullptr,
	&_HeadlessJViewport$3_EnclosingMethodInfo_,
	_HeadlessJViewport$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJViewport"
};

$Object* allocate$HeadlessJViewport$3($Class* clazz) {
	return $of($alloc(HeadlessJViewport$3));
}

void HeadlessJViewport$3::init$() {
	$Component::init$();
}

HeadlessJViewport$3::HeadlessJViewport$3() {
}

$Class* HeadlessJViewport$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJViewport$3, name, initialize, &_HeadlessJViewport$3_ClassInfo_, allocate$HeadlessJViewport$3);
	return class$;
}

$Class* HeadlessJViewport$3::class$ = nullptr;