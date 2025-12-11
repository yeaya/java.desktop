#include <HeadlessJRootPane$3.h>

#include <HeadlessJRootPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJRootPane$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJRootPane$3::*)()>(&HeadlessJRootPane$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJRootPane$3_EnclosingMethodInfo_ = {
	"HeadlessJRootPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJRootPane$3_InnerClassesInfo_[] = {
	{"HeadlessJRootPane$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJRootPane$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJRootPane$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJRootPane$3_MethodInfo_,
	nullptr,
	&_HeadlessJRootPane$3_EnclosingMethodInfo_,
	_HeadlessJRootPane$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJRootPane"
};

$Object* allocate$HeadlessJRootPane$3($Class* clazz) {
	return $of($alloc(HeadlessJRootPane$3));
}

void HeadlessJRootPane$3::init$() {
	$Component::init$();
}

HeadlessJRootPane$3::HeadlessJRootPane$3() {
}

$Class* HeadlessJRootPane$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJRootPane$3, name, initialize, &_HeadlessJRootPane$3_ClassInfo_, allocate$HeadlessJRootPane$3);
	return class$;
}

$Class* HeadlessJRootPane$3::class$ = nullptr;