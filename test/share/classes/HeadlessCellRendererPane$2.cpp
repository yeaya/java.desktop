#include <HeadlessCellRendererPane$2.h>

#include <HeadlessCellRendererPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessCellRendererPane = ::HeadlessCellRendererPane;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessCellRendererPane$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessCellRendererPane$2::*)()>(&HeadlessCellRendererPane$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessCellRendererPane$2_EnclosingMethodInfo_ = {
	"HeadlessCellRendererPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessCellRendererPane$2_InnerClassesInfo_[] = {
	{"HeadlessCellRendererPane$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessCellRendererPane$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessCellRendererPane$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessCellRendererPane$2_MethodInfo_,
	nullptr,
	&_HeadlessCellRendererPane$2_EnclosingMethodInfo_,
	_HeadlessCellRendererPane$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessCellRendererPane"
};

$Object* allocate$HeadlessCellRendererPane$2($Class* clazz) {
	return $of($alloc(HeadlessCellRendererPane$2));
}

void HeadlessCellRendererPane$2::init$() {
	$Component::init$();
}

HeadlessCellRendererPane$2::HeadlessCellRendererPane$2() {
}

$Class* HeadlessCellRendererPane$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessCellRendererPane$2, name, initialize, &_HeadlessCellRendererPane$2_ClassInfo_, allocate$HeadlessCellRendererPane$2);
	return class$;
}

$Class* HeadlessCellRendererPane$2::class$ = nullptr;