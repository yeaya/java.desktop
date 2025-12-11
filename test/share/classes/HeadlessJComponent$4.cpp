#include <HeadlessJComponent$4.h>

#include <HeadlessJComponent.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJComponent$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJComponent$4::*)()>(&HeadlessJComponent$4::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJComponent$4_EnclosingMethodInfo_ = {
	"HeadlessJComponent",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJComponent$4_InnerClassesInfo_[] = {
	{"HeadlessJComponent$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJComponent$4_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJComponent$4",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJComponent$4_MethodInfo_,
	nullptr,
	&_HeadlessJComponent$4_EnclosingMethodInfo_,
	_HeadlessJComponent$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJComponent"
};

$Object* allocate$HeadlessJComponent$4($Class* clazz) {
	return $of($alloc(HeadlessJComponent$4));
}

void HeadlessJComponent$4::init$() {
	$Component::init$();
}

HeadlessJComponent$4::HeadlessJComponent$4() {
}

$Class* HeadlessJComponent$4::load$($String* name, bool initialize) {
	$loadClass(HeadlessJComponent$4, name, initialize, &_HeadlessJComponent$4_ClassInfo_, allocate$HeadlessJComponent$4);
	return class$;
}

$Class* HeadlessJComponent$4::class$ = nullptr;