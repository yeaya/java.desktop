#include <HeadlessJSlider$3.h>

#include <HeadlessJSlider.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJSlider = ::HeadlessJSlider;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJSlider$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJSlider$3::*)()>(&HeadlessJSlider$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJSlider$3_EnclosingMethodInfo_ = {
	"HeadlessJSlider",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJSlider$3_InnerClassesInfo_[] = {
	{"HeadlessJSlider$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJSlider$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJSlider$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJSlider$3_MethodInfo_,
	nullptr,
	&_HeadlessJSlider$3_EnclosingMethodInfo_,
	_HeadlessJSlider$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJSlider"
};

$Object* allocate$HeadlessJSlider$3($Class* clazz) {
	return $of($alloc(HeadlessJSlider$3));
}

void HeadlessJSlider$3::init$() {
	$Component::init$();
}

HeadlessJSlider$3::HeadlessJSlider$3() {
}

$Class* HeadlessJSlider$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJSlider$3, name, initialize, &_HeadlessJSlider$3_ClassInfo_, allocate$HeadlessJSlider$3);
	return class$;
}

$Class* HeadlessJSlider$3::class$ = nullptr;