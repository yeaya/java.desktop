#include <HeadlessJTextField$3.h>

#include <HeadlessJTextField.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJTextField$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTextField$3::*)()>(&HeadlessJTextField$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJTextField$3_EnclosingMethodInfo_ = {
	"HeadlessJTextField",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTextField$3_InnerClassesInfo_[] = {
	{"HeadlessJTextField$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTextField$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTextField$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJTextField$3_MethodInfo_,
	nullptr,
	&_HeadlessJTextField$3_EnclosingMethodInfo_,
	_HeadlessJTextField$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTextField"
};

$Object* allocate$HeadlessJTextField$3($Class* clazz) {
	return $of($alloc(HeadlessJTextField$3));
}

void HeadlessJTextField$3::init$() {
	$Component::init$();
}

HeadlessJTextField$3::HeadlessJTextField$3() {
}

$Class* HeadlessJTextField$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTextField$3, name, initialize, &_HeadlessJTextField$3_ClassInfo_, allocate$HeadlessJTextField$3);
	return class$;
}

$Class* HeadlessJTextField$3::class$ = nullptr;