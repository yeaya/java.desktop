#include <HeadlessJSpinner$2.h>

#include <HeadlessJSpinner.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJSpinner$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJSpinner$2::*)()>(&HeadlessJSpinner$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJSpinner$2_EnclosingMethodInfo_ = {
	"HeadlessJSpinner",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJSpinner$2_InnerClassesInfo_[] = {
	{"HeadlessJSpinner$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJSpinner$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJSpinner$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJSpinner$2_MethodInfo_,
	nullptr,
	&_HeadlessJSpinner$2_EnclosingMethodInfo_,
	_HeadlessJSpinner$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJSpinner"
};

$Object* allocate$HeadlessJSpinner$2($Class* clazz) {
	return $of($alloc(HeadlessJSpinner$2));
}

void HeadlessJSpinner$2::init$() {
	$Component::init$();
}

HeadlessJSpinner$2::HeadlessJSpinner$2() {
}

$Class* HeadlessJSpinner$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJSpinner$2, name, initialize, &_HeadlessJSpinner$2_ClassInfo_, allocate$HeadlessJSpinner$2);
	return class$;
}

$Class* HeadlessJSpinner$2::class$ = nullptr;