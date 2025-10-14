#include <HeadlessJButton$3.h>

#include <HeadlessJButton.h>
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

using $HeadlessJButton = ::HeadlessJButton;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJButton$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJButton$3::*)()>(&HeadlessJButton$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJButton$3_EnclosingMethodInfo_ = {
	"HeadlessJButton",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJButton$3_InnerClassesInfo_[] = {
	{"HeadlessJButton$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJButton$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJButton$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJButton$3_MethodInfo_,
	nullptr,
	&_HeadlessJButton$3_EnclosingMethodInfo_,
	_HeadlessJButton$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJButton"
};

$Object* allocate$HeadlessJButton$3($Class* clazz) {
	return $of($alloc(HeadlessJButton$3));
}

void HeadlessJButton$3::init$() {
	$Component::init$();
}

HeadlessJButton$3::HeadlessJButton$3() {
}

$Class* HeadlessJButton$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJButton$3, name, initialize, &_HeadlessJButton$3_ClassInfo_, allocate$HeadlessJButton$3);
	return class$;
}

$Class* HeadlessJButton$3::class$ = nullptr;