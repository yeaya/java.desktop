#include <HeadlessJCheckBox$2.h>

#include <HeadlessJCheckBox.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJCheckBox$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJCheckBox$2::*)()>(&HeadlessJCheckBox$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJCheckBox$2_EnclosingMethodInfo_ = {
	"HeadlessJCheckBox",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJCheckBox$2_InnerClassesInfo_[] = {
	{"HeadlessJCheckBox$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJCheckBox$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJCheckBox$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJCheckBox$2_MethodInfo_,
	nullptr,
	&_HeadlessJCheckBox$2_EnclosingMethodInfo_,
	_HeadlessJCheckBox$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJCheckBox"
};

$Object* allocate$HeadlessJCheckBox$2($Class* clazz) {
	return $of($alloc(HeadlessJCheckBox$2));
}

void HeadlessJCheckBox$2::init$() {
	$Component::init$();
}

HeadlessJCheckBox$2::HeadlessJCheckBox$2() {
}

$Class* HeadlessJCheckBox$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJCheckBox$2, name, initialize, &_HeadlessJCheckBox$2_ClassInfo_, allocate$HeadlessJCheckBox$2);
	return class$;
}

$Class* HeadlessJCheckBox$2::class$ = nullptr;