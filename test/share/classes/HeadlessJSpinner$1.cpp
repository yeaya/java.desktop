#include <HeadlessJSpinner$1.h>

#include <HeadlessJSpinner.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJSpinner$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJSpinner$1::*)()>(&HeadlessJSpinner$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJSpinner$1_EnclosingMethodInfo_ = {
	"HeadlessJSpinner",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJSpinner$1_InnerClassesInfo_[] = {
	{"HeadlessJSpinner$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJSpinner$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJSpinner$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJSpinner$1_MethodInfo_,
	nullptr,
	&_HeadlessJSpinner$1_EnclosingMethodInfo_,
	_HeadlessJSpinner$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJSpinner"
};

$Object* allocate$HeadlessJSpinner$1($Class* clazz) {
	return $of($alloc(HeadlessJSpinner$1));
}

void HeadlessJSpinner$1::init$() {
	$Component::init$();
}

HeadlessJSpinner$1::HeadlessJSpinner$1() {
}

$Class* HeadlessJSpinner$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJSpinner$1, name, initialize, &_HeadlessJSpinner$1_ClassInfo_, allocate$HeadlessJSpinner$1);
	return class$;
}

$Class* HeadlessJSpinner$1::class$ = nullptr;