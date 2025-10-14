#include <HeadlessJViewport$2.h>

#include <HeadlessJViewport.h>
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

using $HeadlessJViewport = ::HeadlessJViewport;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJViewport$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJViewport$2::*)()>(&HeadlessJViewport$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJViewport$2_EnclosingMethodInfo_ = {
	"HeadlessJViewport",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJViewport$2_InnerClassesInfo_[] = {
	{"HeadlessJViewport$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJViewport$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJViewport$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJViewport$2_MethodInfo_,
	nullptr,
	&_HeadlessJViewport$2_EnclosingMethodInfo_,
	_HeadlessJViewport$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJViewport"
};

$Object* allocate$HeadlessJViewport$2($Class* clazz) {
	return $of($alloc(HeadlessJViewport$2));
}

void HeadlessJViewport$2::init$() {
	$Component::init$();
}

HeadlessJViewport$2::HeadlessJViewport$2() {
}

$Class* HeadlessJViewport$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJViewport$2, name, initialize, &_HeadlessJViewport$2_ClassInfo_, allocate$HeadlessJViewport$2);
	return class$;
}

$Class* HeadlessJViewport$2::class$ = nullptr;