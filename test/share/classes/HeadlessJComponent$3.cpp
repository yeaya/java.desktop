#include <HeadlessJComponent$3.h>

#include <HeadlessJComponent.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJComponent$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJComponent$3::*)()>(&HeadlessJComponent$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJComponent$3_EnclosingMethodInfo_ = {
	"HeadlessJComponent",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJComponent$3_InnerClassesInfo_[] = {
	{"HeadlessJComponent$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJComponent$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJComponent$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJComponent$3_MethodInfo_,
	nullptr,
	&_HeadlessJComponent$3_EnclosingMethodInfo_,
	_HeadlessJComponent$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJComponent"
};

$Object* allocate$HeadlessJComponent$3($Class* clazz) {
	return $of($alloc(HeadlessJComponent$3));
}

void HeadlessJComponent$3::init$() {
	$Component::init$();
}

HeadlessJComponent$3::HeadlessJComponent$3() {
}

$Class* HeadlessJComponent$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJComponent$3, name, initialize, &_HeadlessJComponent$3_ClassInfo_, allocate$HeadlessJComponent$3);
	return class$;
}

$Class* HeadlessJComponent$3::class$ = nullptr;