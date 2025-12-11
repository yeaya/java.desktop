#include <HeadlessJTree$2.h>

#include <HeadlessJTree.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJTree$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTree$2::*)()>(&HeadlessJTree$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJTree$2_EnclosingMethodInfo_ = {
	"HeadlessJTree",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTree$2_InnerClassesInfo_[] = {
	{"HeadlessJTree$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTree$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTree$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJTree$2_MethodInfo_,
	nullptr,
	&_HeadlessJTree$2_EnclosingMethodInfo_,
	_HeadlessJTree$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTree"
};

$Object* allocate$HeadlessJTree$2($Class* clazz) {
	return $of($alloc(HeadlessJTree$2));
}

void HeadlessJTree$2::init$() {
	$Component::init$();
}

HeadlessJTree$2::HeadlessJTree$2() {
}

$Class* HeadlessJTree$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTree$2, name, initialize, &_HeadlessJTree$2_ClassInfo_, allocate$HeadlessJTree$2);
	return class$;
}

$Class* HeadlessJTree$2::class$ = nullptr;