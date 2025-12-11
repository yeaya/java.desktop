#include <HeadlessJMenu$1.h>

#include <HeadlessJMenu.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJMenu$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJMenu$1::*)()>(&HeadlessJMenu$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJMenu$1_EnclosingMethodInfo_ = {
	"HeadlessJMenu",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJMenu$1_InnerClassesInfo_[] = {
	{"HeadlessJMenu$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJMenu$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJMenu$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJMenu$1_MethodInfo_,
	nullptr,
	&_HeadlessJMenu$1_EnclosingMethodInfo_,
	_HeadlessJMenu$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJMenu"
};

$Object* allocate$HeadlessJMenu$1($Class* clazz) {
	return $of($alloc(HeadlessJMenu$1));
}

void HeadlessJMenu$1::init$() {
	$Component::init$();
}

HeadlessJMenu$1::HeadlessJMenu$1() {
}

$Class* HeadlessJMenu$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJMenu$1, name, initialize, &_HeadlessJMenu$1_ClassInfo_, allocate$HeadlessJMenu$1);
	return class$;
}

$Class* HeadlessJMenu$1::class$ = nullptr;