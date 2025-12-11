#include <HeadlessJRootPane$1.h>

#include <HeadlessJRootPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJRootPane$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJRootPane$1::*)()>(&HeadlessJRootPane$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJRootPane$1_EnclosingMethodInfo_ = {
	"HeadlessJRootPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJRootPane$1_InnerClassesInfo_[] = {
	{"HeadlessJRootPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJRootPane$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJRootPane$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJRootPane$1_MethodInfo_,
	nullptr,
	&_HeadlessJRootPane$1_EnclosingMethodInfo_,
	_HeadlessJRootPane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJRootPane"
};

$Object* allocate$HeadlessJRootPane$1($Class* clazz) {
	return $of($alloc(HeadlessJRootPane$1));
}

void HeadlessJRootPane$1::init$() {
	$Component::init$();
}

HeadlessJRootPane$1::HeadlessJRootPane$1() {
}

$Class* HeadlessJRootPane$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJRootPane$1, name, initialize, &_HeadlessJRootPane$1_ClassInfo_, allocate$HeadlessJRootPane$1);
	return class$;
}

$Class* HeadlessJRootPane$1::class$ = nullptr;