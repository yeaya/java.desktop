#include <HeadlessJRadioButtonMenuItem$3.h>

#include <HeadlessJRadioButtonMenuItem.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJRadioButtonMenuItem$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJRadioButtonMenuItem$3::*)()>(&HeadlessJRadioButtonMenuItem$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJRadioButtonMenuItem$3_EnclosingMethodInfo_ = {
	"HeadlessJRadioButtonMenuItem",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJRadioButtonMenuItem$3_InnerClassesInfo_[] = {
	{"HeadlessJRadioButtonMenuItem$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJRadioButtonMenuItem$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJRadioButtonMenuItem$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJRadioButtonMenuItem$3_MethodInfo_,
	nullptr,
	&_HeadlessJRadioButtonMenuItem$3_EnclosingMethodInfo_,
	_HeadlessJRadioButtonMenuItem$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJRadioButtonMenuItem"
};

$Object* allocate$HeadlessJRadioButtonMenuItem$3($Class* clazz) {
	return $of($alloc(HeadlessJRadioButtonMenuItem$3));
}

void HeadlessJRadioButtonMenuItem$3::init$() {
	$Component::init$();
}

HeadlessJRadioButtonMenuItem$3::HeadlessJRadioButtonMenuItem$3() {
}

$Class* HeadlessJRadioButtonMenuItem$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJRadioButtonMenuItem$3, name, initialize, &_HeadlessJRadioButtonMenuItem$3_ClassInfo_, allocate$HeadlessJRadioButtonMenuItem$3);
	return class$;
}

$Class* HeadlessJRadioButtonMenuItem$3::class$ = nullptr;