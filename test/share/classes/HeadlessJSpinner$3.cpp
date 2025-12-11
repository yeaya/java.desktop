#include <HeadlessJSpinner$3.h>

#include <HeadlessJSpinner.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJSpinner$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJSpinner$3::*)()>(&HeadlessJSpinner$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJSpinner$3_EnclosingMethodInfo_ = {
	"HeadlessJSpinner",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJSpinner$3_InnerClassesInfo_[] = {
	{"HeadlessJSpinner$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJSpinner$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJSpinner$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJSpinner$3_MethodInfo_,
	nullptr,
	&_HeadlessJSpinner$3_EnclosingMethodInfo_,
	_HeadlessJSpinner$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJSpinner"
};

$Object* allocate$HeadlessJSpinner$3($Class* clazz) {
	return $of($alloc(HeadlessJSpinner$3));
}

void HeadlessJSpinner$3::init$() {
	$Component::init$();
}

HeadlessJSpinner$3::HeadlessJSpinner$3() {
}

$Class* HeadlessJSpinner$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJSpinner$3, name, initialize, &_HeadlessJSpinner$3_ClassInfo_, allocate$HeadlessJSpinner$3);
	return class$;
}

$Class* HeadlessJSpinner$3::class$ = nullptr;