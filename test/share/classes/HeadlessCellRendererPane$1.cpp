#include <HeadlessCellRendererPane$1.h>

#include <HeadlessCellRendererPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessCellRendererPane$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessCellRendererPane$1::*)()>(&HeadlessCellRendererPane$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessCellRendererPane$1_EnclosingMethodInfo_ = {
	"HeadlessCellRendererPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessCellRendererPane$1_InnerClassesInfo_[] = {
	{"HeadlessCellRendererPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessCellRendererPane$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessCellRendererPane$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessCellRendererPane$1_MethodInfo_,
	nullptr,
	&_HeadlessCellRendererPane$1_EnclosingMethodInfo_,
	_HeadlessCellRendererPane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessCellRendererPane"
};

$Object* allocate$HeadlessCellRendererPane$1($Class* clazz) {
	return $of($alloc(HeadlessCellRendererPane$1));
}

void HeadlessCellRendererPane$1::init$() {
	$Component::init$();
}

HeadlessCellRendererPane$1::HeadlessCellRendererPane$1() {
}

$Class* HeadlessCellRendererPane$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessCellRendererPane$1, name, initialize, &_HeadlessCellRendererPane$1_ClassInfo_, allocate$HeadlessCellRendererPane$1);
	return class$;
}

$Class* HeadlessCellRendererPane$1::class$ = nullptr;