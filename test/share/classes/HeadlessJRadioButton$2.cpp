#include <HeadlessJRadioButton$2.h>

#include <HeadlessJRadioButton.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJRadioButton$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJRadioButton$2::*)()>(&HeadlessJRadioButton$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJRadioButton$2_EnclosingMethodInfo_ = {
	"HeadlessJRadioButton",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJRadioButton$2_InnerClassesInfo_[] = {
	{"HeadlessJRadioButton$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJRadioButton$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJRadioButton$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJRadioButton$2_MethodInfo_,
	nullptr,
	&_HeadlessJRadioButton$2_EnclosingMethodInfo_,
	_HeadlessJRadioButton$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJRadioButton"
};

$Object* allocate$HeadlessJRadioButton$2($Class* clazz) {
	return $of($alloc(HeadlessJRadioButton$2));
}

void HeadlessJRadioButton$2::init$() {
	$Component::init$();
}

HeadlessJRadioButton$2::HeadlessJRadioButton$2() {
}

$Class* HeadlessJRadioButton$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJRadioButton$2, name, initialize, &_HeadlessJRadioButton$2_ClassInfo_, allocate$HeadlessJRadioButton$2);
	return class$;
}

$Class* HeadlessJRadioButton$2::class$ = nullptr;