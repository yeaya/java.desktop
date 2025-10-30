#include <HeadlessJSeparator$3.h>

#include <HeadlessJSeparator.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJSeparator = ::HeadlessJSeparator;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJSeparator$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJSeparator$3::*)()>(&HeadlessJSeparator$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJSeparator$3_EnclosingMethodInfo_ = {
	"HeadlessJSeparator",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJSeparator$3_InnerClassesInfo_[] = {
	{"HeadlessJSeparator$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJSeparator$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJSeparator$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJSeparator$3_MethodInfo_,
	nullptr,
	&_HeadlessJSeparator$3_EnclosingMethodInfo_,
	_HeadlessJSeparator$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJSeparator"
};

$Object* allocate$HeadlessJSeparator$3($Class* clazz) {
	return $of($alloc(HeadlessJSeparator$3));
}

void HeadlessJSeparator$3::init$() {
	$Component::init$();
}

HeadlessJSeparator$3::HeadlessJSeparator$3() {
}

$Class* HeadlessJSeparator$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJSeparator$3, name, initialize, &_HeadlessJSeparator$3_ClassInfo_, allocate$HeadlessJSeparator$3);
	return class$;
}

$Class* HeadlessJSeparator$3::class$ = nullptr;