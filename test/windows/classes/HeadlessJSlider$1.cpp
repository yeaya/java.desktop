#include <HeadlessJSlider$1.h>

#include <HeadlessJSlider.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $HeadlessJSlider = ::HeadlessJSlider;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJSlider$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJSlider$1::*)()>(&HeadlessJSlider$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJSlider$1_EnclosingMethodInfo_ = {
	"HeadlessJSlider",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJSlider$1_InnerClassesInfo_[] = {
	{"HeadlessJSlider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJSlider$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJSlider$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJSlider$1_MethodInfo_,
	nullptr,
	&_HeadlessJSlider$1_EnclosingMethodInfo_,
	_HeadlessJSlider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJSlider"
};

$Object* allocate$HeadlessJSlider$1($Class* clazz) {
	return $of($alloc(HeadlessJSlider$1));
}

void HeadlessJSlider$1::init$() {
	$Component::init$();
}

HeadlessJSlider$1::HeadlessJSlider$1() {
}

$Class* HeadlessJSlider$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJSlider$1, name, initialize, &_HeadlessJSlider$1_ClassInfo_, allocate$HeadlessJSlider$1);
	return class$;
}

$Class* HeadlessJSlider$1::class$ = nullptr;