#include <HeadlessJComponent$2.h>

#include <HeadlessJComponent.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJComponent = ::HeadlessJComponent;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJComponent$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJComponent$2::*)()>(&HeadlessJComponent$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJComponent$2_EnclosingMethodInfo_ = {
	"HeadlessJComponent",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJComponent$2_InnerClassesInfo_[] = {
	{"HeadlessJComponent$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJComponent$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJComponent$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJComponent$2_MethodInfo_,
	nullptr,
	&_HeadlessJComponent$2_EnclosingMethodInfo_,
	_HeadlessJComponent$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJComponent"
};

$Object* allocate$HeadlessJComponent$2($Class* clazz) {
	return $of($alloc(HeadlessJComponent$2));
}

void HeadlessJComponent$2::init$() {
	$Component::init$();
}

HeadlessJComponent$2::HeadlessJComponent$2() {
}

$Class* HeadlessJComponent$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJComponent$2, name, initialize, &_HeadlessJComponent$2_ClassInfo_, allocate$HeadlessJComponent$2);
	return class$;
}

$Class* HeadlessJComponent$2::class$ = nullptr;