#include <HeadlessJTree$3.h>

#include <HeadlessJTree.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJTree$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTree$3::*)()>(&HeadlessJTree$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJTree$3_EnclosingMethodInfo_ = {
	"HeadlessJTree",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTree$3_InnerClassesInfo_[] = {
	{"HeadlessJTree$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTree$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTree$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJTree$3_MethodInfo_,
	nullptr,
	&_HeadlessJTree$3_EnclosingMethodInfo_,
	_HeadlessJTree$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTree"
};

$Object* allocate$HeadlessJTree$3($Class* clazz) {
	return $of($alloc(HeadlessJTree$3));
}

void HeadlessJTree$3::init$() {
	$Component::init$();
}

HeadlessJTree$3::HeadlessJTree$3() {
}

$Class* HeadlessJTree$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTree$3, name, initialize, &_HeadlessJTree$3_ClassInfo_, allocate$HeadlessJTree$3);
	return class$;
}

$Class* HeadlessJTree$3::class$ = nullptr;