#include <HeadlessJButton$1.h>

#include <HeadlessJButton.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJButton = ::HeadlessJButton;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJButton$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJButton$1::*)()>(&HeadlessJButton$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJButton$1_EnclosingMethodInfo_ = {
	"HeadlessJButton",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJButton$1_InnerClassesInfo_[] = {
	{"HeadlessJButton$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJButton$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJButton$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJButton$1_MethodInfo_,
	nullptr,
	&_HeadlessJButton$1_EnclosingMethodInfo_,
	_HeadlessJButton$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJButton"
};

$Object* allocate$HeadlessJButton$1($Class* clazz) {
	return $of($alloc(HeadlessJButton$1));
}

void HeadlessJButton$1::init$() {
	$Component::init$();
}

HeadlessJButton$1::HeadlessJButton$1() {
}

$Class* HeadlessJButton$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJButton$1, name, initialize, &_HeadlessJButton$1_ClassInfo_, allocate$HeadlessJButton$1);
	return class$;
}

$Class* HeadlessJButton$1::class$ = nullptr;