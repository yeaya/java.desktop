#include <HeadlessJSeparator$1.h>

#include <HeadlessJSeparator.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJSeparator = ::HeadlessJSeparator;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJSeparator$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJSeparator$1::*)()>(&HeadlessJSeparator$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJSeparator$1_EnclosingMethodInfo_ = {
	"HeadlessJSeparator",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJSeparator$1_InnerClassesInfo_[] = {
	{"HeadlessJSeparator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJSeparator$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJSeparator$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJSeparator$1_MethodInfo_,
	nullptr,
	&_HeadlessJSeparator$1_EnclosingMethodInfo_,
	_HeadlessJSeparator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJSeparator"
};

$Object* allocate$HeadlessJSeparator$1($Class* clazz) {
	return $of($alloc(HeadlessJSeparator$1));
}

void HeadlessJSeparator$1::init$() {
	$Component::init$();
}

HeadlessJSeparator$1::HeadlessJSeparator$1() {
}

$Class* HeadlessJSeparator$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJSeparator$1, name, initialize, &_HeadlessJSeparator$1_ClassInfo_, allocate$HeadlessJSeparator$1);
	return class$;
}

$Class* HeadlessJSeparator$1::class$ = nullptr;