#include <HeadlessJButton$2.h>

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

$MethodInfo _HeadlessJButton$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJButton$2::*)()>(&HeadlessJButton$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJButton$2_EnclosingMethodInfo_ = {
	"HeadlessJButton",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJButton$2_InnerClassesInfo_[] = {
	{"HeadlessJButton$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJButton$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJButton$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJButton$2_MethodInfo_,
	nullptr,
	&_HeadlessJButton$2_EnclosingMethodInfo_,
	_HeadlessJButton$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJButton"
};

$Object* allocate$HeadlessJButton$2($Class* clazz) {
	return $of($alloc(HeadlessJButton$2));
}

void HeadlessJButton$2::init$() {
	$Component::init$();
}

HeadlessJButton$2::HeadlessJButton$2() {
}

$Class* HeadlessJButton$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJButton$2, name, initialize, &_HeadlessJButton$2_ClassInfo_, allocate$HeadlessJButton$2);
	return class$;
}

$Class* HeadlessJButton$2::class$ = nullptr;