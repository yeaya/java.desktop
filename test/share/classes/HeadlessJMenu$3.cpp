#include <HeadlessJMenu$3.h>

#include <HeadlessJMenu.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJMenu$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJMenu$3::*)()>(&HeadlessJMenu$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJMenu$3_EnclosingMethodInfo_ = {
	"HeadlessJMenu",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJMenu$3_InnerClassesInfo_[] = {
	{"HeadlessJMenu$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJMenu$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJMenu$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJMenu$3_MethodInfo_,
	nullptr,
	&_HeadlessJMenu$3_EnclosingMethodInfo_,
	_HeadlessJMenu$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJMenu"
};

$Object* allocate$HeadlessJMenu$3($Class* clazz) {
	return $of($alloc(HeadlessJMenu$3));
}

void HeadlessJMenu$3::init$() {
	$Component::init$();
}

HeadlessJMenu$3::HeadlessJMenu$3() {
}

$Class* HeadlessJMenu$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJMenu$3, name, initialize, &_HeadlessJMenu$3_ClassInfo_, allocate$HeadlessJMenu$3);
	return class$;
}

$Class* HeadlessJMenu$3::class$ = nullptr;