#include <HeadlessJRadioButtonMenuItem$1.h>

#include <HeadlessJRadioButtonMenuItem.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJRadioButtonMenuItem = ::HeadlessJRadioButtonMenuItem;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJRadioButtonMenuItem$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJRadioButtonMenuItem$1::*)()>(&HeadlessJRadioButtonMenuItem$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJRadioButtonMenuItem$1_EnclosingMethodInfo_ = {
	"HeadlessJRadioButtonMenuItem",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJRadioButtonMenuItem$1_InnerClassesInfo_[] = {
	{"HeadlessJRadioButtonMenuItem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJRadioButtonMenuItem$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJRadioButtonMenuItem$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJRadioButtonMenuItem$1_MethodInfo_,
	nullptr,
	&_HeadlessJRadioButtonMenuItem$1_EnclosingMethodInfo_,
	_HeadlessJRadioButtonMenuItem$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJRadioButtonMenuItem"
};

$Object* allocate$HeadlessJRadioButtonMenuItem$1($Class* clazz) {
	return $of($alloc(HeadlessJRadioButtonMenuItem$1));
}

void HeadlessJRadioButtonMenuItem$1::init$() {
	$Component::init$();
}

HeadlessJRadioButtonMenuItem$1::HeadlessJRadioButtonMenuItem$1() {
}

$Class* HeadlessJRadioButtonMenuItem$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJRadioButtonMenuItem$1, name, initialize, &_HeadlessJRadioButtonMenuItem$1_ClassInfo_, allocate$HeadlessJRadioButtonMenuItem$1);
	return class$;
}

$Class* HeadlessJRadioButtonMenuItem$1::class$ = nullptr;