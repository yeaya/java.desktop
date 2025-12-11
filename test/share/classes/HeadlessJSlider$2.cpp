#include <HeadlessJSlider$2.h>

#include <HeadlessJSlider.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJSlider$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJSlider$2::*)()>(&HeadlessJSlider$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJSlider$2_EnclosingMethodInfo_ = {
	"HeadlessJSlider",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJSlider$2_InnerClassesInfo_[] = {
	{"HeadlessJSlider$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJSlider$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJSlider$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJSlider$2_MethodInfo_,
	nullptr,
	&_HeadlessJSlider$2_EnclosingMethodInfo_,
	_HeadlessJSlider$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJSlider"
};

$Object* allocate$HeadlessJSlider$2($Class* clazz) {
	return $of($alloc(HeadlessJSlider$2));
}

void HeadlessJSlider$2::init$() {
	$Component::init$();
}

HeadlessJSlider$2::HeadlessJSlider$2() {
}

$Class* HeadlessJSlider$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJSlider$2, name, initialize, &_HeadlessJSlider$2_ClassInfo_, allocate$HeadlessJSlider$2);
	return class$;
}

$Class* HeadlessJSlider$2::class$ = nullptr;