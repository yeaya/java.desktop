#include <HeadlessJRootPane$2.h>

#include <HeadlessJRootPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJRootPane$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJRootPane$2::*)()>(&HeadlessJRootPane$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJRootPane$2_EnclosingMethodInfo_ = {
	"HeadlessJRootPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJRootPane$2_InnerClassesInfo_[] = {
	{"HeadlessJRootPane$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJRootPane$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJRootPane$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJRootPane$2_MethodInfo_,
	nullptr,
	&_HeadlessJRootPane$2_EnclosingMethodInfo_,
	_HeadlessJRootPane$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJRootPane"
};

$Object* allocate$HeadlessJRootPane$2($Class* clazz) {
	return $of($alloc(HeadlessJRootPane$2));
}

void HeadlessJRootPane$2::init$() {
	$Component::init$();
}

HeadlessJRootPane$2::HeadlessJRootPane$2() {
}

$Class* HeadlessJRootPane$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJRootPane$2, name, initialize, &_HeadlessJRootPane$2_ClassInfo_, allocate$HeadlessJRootPane$2);
	return class$;
}

$Class* HeadlessJRootPane$2::class$ = nullptr;