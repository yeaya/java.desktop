#include <HeadlessJTextField$1.h>

#include <HeadlessJTextField.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJTextField = ::HeadlessJTextField;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJTextField$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTextField$1::*)()>(&HeadlessJTextField$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJTextField$1_EnclosingMethodInfo_ = {
	"HeadlessJTextField",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTextField$1_InnerClassesInfo_[] = {
	{"HeadlessJTextField$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTextField$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTextField$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJTextField$1_MethodInfo_,
	nullptr,
	&_HeadlessJTextField$1_EnclosingMethodInfo_,
	_HeadlessJTextField$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTextField"
};

$Object* allocate$HeadlessJTextField$1($Class* clazz) {
	return $of($alloc(HeadlessJTextField$1));
}

void HeadlessJTextField$1::init$() {
	$Component::init$();
}

HeadlessJTextField$1::HeadlessJTextField$1() {
}

$Class* HeadlessJTextField$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTextField$1, name, initialize, &_HeadlessJTextField$1_ClassInfo_, allocate$HeadlessJTextField$1);
	return class$;
}

$Class* HeadlessJTextField$1::class$ = nullptr;