#include <HeadlessJToggleButton$1.h>

#include <HeadlessJToggleButton.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJToggleButton$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJToggleButton$1::*)()>(&HeadlessJToggleButton$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJToggleButton$1_EnclosingMethodInfo_ = {
	"HeadlessJToggleButton",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJToggleButton$1_InnerClassesInfo_[] = {
	{"HeadlessJToggleButton$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJToggleButton$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJToggleButton$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJToggleButton$1_MethodInfo_,
	nullptr,
	&_HeadlessJToggleButton$1_EnclosingMethodInfo_,
	_HeadlessJToggleButton$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJToggleButton"
};

$Object* allocate$HeadlessJToggleButton$1($Class* clazz) {
	return $of($alloc(HeadlessJToggleButton$1));
}

void HeadlessJToggleButton$1::init$() {
	$Component::init$();
}

HeadlessJToggleButton$1::HeadlessJToggleButton$1() {
}

$Class* HeadlessJToggleButton$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJToggleButton$1, name, initialize, &_HeadlessJToggleButton$1_ClassInfo_, allocate$HeadlessJToggleButton$1);
	return class$;
}

$Class* HeadlessJToggleButton$1::class$ = nullptr;