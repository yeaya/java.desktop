#include <HeadlessJToggleButton$2.h>

#include <HeadlessJToggleButton.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJToggleButton = ::HeadlessJToggleButton;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJToggleButton$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJToggleButton$2::*)()>(&HeadlessJToggleButton$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJToggleButton$2_EnclosingMethodInfo_ = {
	"HeadlessJToggleButton",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJToggleButton$2_InnerClassesInfo_[] = {
	{"HeadlessJToggleButton$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJToggleButton$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJToggleButton$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJToggleButton$2_MethodInfo_,
	nullptr,
	&_HeadlessJToggleButton$2_EnclosingMethodInfo_,
	_HeadlessJToggleButton$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJToggleButton"
};

$Object* allocate$HeadlessJToggleButton$2($Class* clazz) {
	return $of($alloc(HeadlessJToggleButton$2));
}

void HeadlessJToggleButton$2::init$() {
	$Component::init$();
}

HeadlessJToggleButton$2::HeadlessJToggleButton$2() {
}

$Class* HeadlessJToggleButton$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJToggleButton$2, name, initialize, &_HeadlessJToggleButton$2_ClassInfo_, allocate$HeadlessJToggleButton$2);
	return class$;
}

$Class* HeadlessJToggleButton$2::class$ = nullptr;