#include <HeadlessJTree$4.h>

#include <HeadlessJTree.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJTree$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTree$4::*)()>(&HeadlessJTree$4::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJTree$4_EnclosingMethodInfo_ = {
	"HeadlessJTree",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTree$4_InnerClassesInfo_[] = {
	{"HeadlessJTree$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTree$4_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTree$4",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJTree$4_MethodInfo_,
	nullptr,
	&_HeadlessJTree$4_EnclosingMethodInfo_,
	_HeadlessJTree$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTree"
};

$Object* allocate$HeadlessJTree$4($Class* clazz) {
	return $of($alloc(HeadlessJTree$4));
}

void HeadlessJTree$4::init$() {
	$Component::init$();
}

HeadlessJTree$4::HeadlessJTree$4() {
}

$Class* HeadlessJTree$4::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTree$4, name, initialize, &_HeadlessJTree$4_ClassInfo_, allocate$HeadlessJTree$4);
	return class$;
}

$Class* HeadlessJTree$4::class$ = nullptr;