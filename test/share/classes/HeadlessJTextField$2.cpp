#include <HeadlessJTextField$2.h>

#include <HeadlessJTextField.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJTextField = ::HeadlessJTextField;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJTextField$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTextField$2::*)()>(&HeadlessJTextField$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJTextField$2_EnclosingMethodInfo_ = {
	"HeadlessJTextField",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTextField$2_InnerClassesInfo_[] = {
	{"HeadlessJTextField$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTextField$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTextField$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJTextField$2_MethodInfo_,
	nullptr,
	&_HeadlessJTextField$2_EnclosingMethodInfo_,
	_HeadlessJTextField$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTextField"
};

$Object* allocate$HeadlessJTextField$2($Class* clazz) {
	return $of($alloc(HeadlessJTextField$2));
}

void HeadlessJTextField$2::init$() {
	$Component::init$();
}

HeadlessJTextField$2::HeadlessJTextField$2() {
}

$Class* HeadlessJTextField$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTextField$2, name, initialize, &_HeadlessJTextField$2_ClassInfo_, allocate$HeadlessJTextField$2);
	return class$;
}

$Class* HeadlessJTextField$2::class$ = nullptr;