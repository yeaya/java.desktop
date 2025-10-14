#include <HeadlessJSeparator$2.h>

#include <HeadlessJSeparator.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $HeadlessJSeparator = ::HeadlessJSeparator;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJSeparator$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJSeparator$2::*)()>(&HeadlessJSeparator$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJSeparator$2_EnclosingMethodInfo_ = {
	"HeadlessJSeparator",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJSeparator$2_InnerClassesInfo_[] = {
	{"HeadlessJSeparator$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJSeparator$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJSeparator$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJSeparator$2_MethodInfo_,
	nullptr,
	&_HeadlessJSeparator$2_EnclosingMethodInfo_,
	_HeadlessJSeparator$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJSeparator"
};

$Object* allocate$HeadlessJSeparator$2($Class* clazz) {
	return $of($alloc(HeadlessJSeparator$2));
}

void HeadlessJSeparator$2::init$() {
	$Component::init$();
}

HeadlessJSeparator$2::HeadlessJSeparator$2() {
}

$Class* HeadlessJSeparator$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJSeparator$2, name, initialize, &_HeadlessJSeparator$2_ClassInfo_, allocate$HeadlessJSeparator$2);
	return class$;
}

$Class* HeadlessJSeparator$2::class$ = nullptr;