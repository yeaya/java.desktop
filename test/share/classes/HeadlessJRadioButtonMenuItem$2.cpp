#include <HeadlessJRadioButtonMenuItem$2.h>

#include <HeadlessJRadioButtonMenuItem.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJRadioButtonMenuItem$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJRadioButtonMenuItem$2::*)()>(&HeadlessJRadioButtonMenuItem$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJRadioButtonMenuItem$2_EnclosingMethodInfo_ = {
	"HeadlessJRadioButtonMenuItem",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJRadioButtonMenuItem$2_InnerClassesInfo_[] = {
	{"HeadlessJRadioButtonMenuItem$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJRadioButtonMenuItem$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJRadioButtonMenuItem$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJRadioButtonMenuItem$2_MethodInfo_,
	nullptr,
	&_HeadlessJRadioButtonMenuItem$2_EnclosingMethodInfo_,
	_HeadlessJRadioButtonMenuItem$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJRadioButtonMenuItem"
};

$Object* allocate$HeadlessJRadioButtonMenuItem$2($Class* clazz) {
	return $of($alloc(HeadlessJRadioButtonMenuItem$2));
}

void HeadlessJRadioButtonMenuItem$2::init$() {
	$Component::init$();
}

HeadlessJRadioButtonMenuItem$2::HeadlessJRadioButtonMenuItem$2() {
}

$Class* HeadlessJRadioButtonMenuItem$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJRadioButtonMenuItem$2, name, initialize, &_HeadlessJRadioButtonMenuItem$2_ClassInfo_, allocate$HeadlessJRadioButtonMenuItem$2);
	return class$;
}

$Class* HeadlessJRadioButtonMenuItem$2::class$ = nullptr;