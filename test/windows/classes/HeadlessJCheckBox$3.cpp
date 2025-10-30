#include <HeadlessJCheckBox$3.h>

#include <HeadlessJCheckBox.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJCheckBox = ::HeadlessJCheckBox;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJCheckBox$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJCheckBox$3::*)()>(&HeadlessJCheckBox$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJCheckBox$3_EnclosingMethodInfo_ = {
	"HeadlessJCheckBox",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJCheckBox$3_InnerClassesInfo_[] = {
	{"HeadlessJCheckBox$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJCheckBox$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJCheckBox$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJCheckBox$3_MethodInfo_,
	nullptr,
	&_HeadlessJCheckBox$3_EnclosingMethodInfo_,
	_HeadlessJCheckBox$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJCheckBox"
};

$Object* allocate$HeadlessJCheckBox$3($Class* clazz) {
	return $of($alloc(HeadlessJCheckBox$3));
}

void HeadlessJCheckBox$3::init$() {
	$Component::init$();
}

HeadlessJCheckBox$3::HeadlessJCheckBox$3() {
}

$Class* HeadlessJCheckBox$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJCheckBox$3, name, initialize, &_HeadlessJCheckBox$3_ClassInfo_, allocate$HeadlessJCheckBox$3);
	return class$;
}

$Class* HeadlessJCheckBox$3::class$ = nullptr;