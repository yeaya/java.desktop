#include <HeadlessJRadioButton$3.h>

#include <HeadlessJRadioButton.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJRadioButton = ::HeadlessJRadioButton;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJRadioButton$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJRadioButton$3::*)()>(&HeadlessJRadioButton$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJRadioButton$3_EnclosingMethodInfo_ = {
	"HeadlessJRadioButton",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJRadioButton$3_InnerClassesInfo_[] = {
	{"HeadlessJRadioButton$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJRadioButton$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJRadioButton$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJRadioButton$3_MethodInfo_,
	nullptr,
	&_HeadlessJRadioButton$3_EnclosingMethodInfo_,
	_HeadlessJRadioButton$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJRadioButton"
};

$Object* allocate$HeadlessJRadioButton$3($Class* clazz) {
	return $of($alloc(HeadlessJRadioButton$3));
}

void HeadlessJRadioButton$3::init$() {
	$Component::init$();
}

HeadlessJRadioButton$3::HeadlessJRadioButton$3() {
}

$Class* HeadlessJRadioButton$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJRadioButton$3, name, initialize, &_HeadlessJRadioButton$3_ClassInfo_, allocate$HeadlessJRadioButton$3);
	return class$;
}

$Class* HeadlessJRadioButton$3::class$ = nullptr;