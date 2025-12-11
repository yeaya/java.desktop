#include <HeadlessJCheckBox$1.h>

#include <HeadlessJCheckBox.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJCheckBox$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJCheckBox$1::*)()>(&HeadlessJCheckBox$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJCheckBox$1_EnclosingMethodInfo_ = {
	"HeadlessJCheckBox",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJCheckBox$1_InnerClassesInfo_[] = {
	{"HeadlessJCheckBox$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJCheckBox$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJCheckBox$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJCheckBox$1_MethodInfo_,
	nullptr,
	&_HeadlessJCheckBox$1_EnclosingMethodInfo_,
	_HeadlessJCheckBox$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJCheckBox"
};

$Object* allocate$HeadlessJCheckBox$1($Class* clazz) {
	return $of($alloc(HeadlessJCheckBox$1));
}

void HeadlessJCheckBox$1::init$() {
	$Component::init$();
}

HeadlessJCheckBox$1::HeadlessJCheckBox$1() {
}

$Class* HeadlessJCheckBox$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJCheckBox$1, name, initialize, &_HeadlessJCheckBox$1_ClassInfo_, allocate$HeadlessJCheckBox$1);
	return class$;
}

$Class* HeadlessJCheckBox$1::class$ = nullptr;