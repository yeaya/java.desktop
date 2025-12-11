#include <HeadlessJToggleButton$3.h>

#include <HeadlessJToggleButton.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJToggleButton$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJToggleButton$3::*)()>(&HeadlessJToggleButton$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJToggleButton$3_EnclosingMethodInfo_ = {
	"HeadlessJToggleButton",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJToggleButton$3_InnerClassesInfo_[] = {
	{"HeadlessJToggleButton$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJToggleButton$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJToggleButton$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJToggleButton$3_MethodInfo_,
	nullptr,
	&_HeadlessJToggleButton$3_EnclosingMethodInfo_,
	_HeadlessJToggleButton$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJToggleButton"
};

$Object* allocate$HeadlessJToggleButton$3($Class* clazz) {
	return $of($alloc(HeadlessJToggleButton$3));
}

void HeadlessJToggleButton$3::init$() {
	$Component::init$();
}

HeadlessJToggleButton$3::HeadlessJToggleButton$3() {
}

$Class* HeadlessJToggleButton$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJToggleButton$3, name, initialize, &_HeadlessJToggleButton$3_ClassInfo_, allocate$HeadlessJToggleButton$3);
	return class$;
}

$Class* HeadlessJToggleButton$3::class$ = nullptr;