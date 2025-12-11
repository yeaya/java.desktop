#include <HeadlessJViewport$1.h>

#include <HeadlessJViewport.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJViewport$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJViewport$1::*)()>(&HeadlessJViewport$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJViewport$1_EnclosingMethodInfo_ = {
	"HeadlessJViewport",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJViewport$1_InnerClassesInfo_[] = {
	{"HeadlessJViewport$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJViewport$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJViewport$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJViewport$1_MethodInfo_,
	nullptr,
	&_HeadlessJViewport$1_EnclosingMethodInfo_,
	_HeadlessJViewport$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJViewport"
};

$Object* allocate$HeadlessJViewport$1($Class* clazz) {
	return $of($alloc(HeadlessJViewport$1));
}

void HeadlessJViewport$1::init$() {
	$Component::init$();
}

HeadlessJViewport$1::HeadlessJViewport$1() {
}

$Class* HeadlessJViewport$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJViewport$1, name, initialize, &_HeadlessJViewport$1_ClassInfo_, allocate$HeadlessJViewport$1);
	return class$;
}

$Class* HeadlessJViewport$1::class$ = nullptr;