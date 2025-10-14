#include <HeadlessCellRendererPane$3.h>

#include <HeadlessCellRendererPane.h>
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

using $HeadlessCellRendererPane = ::HeadlessCellRendererPane;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessCellRendererPane$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessCellRendererPane$3::*)()>(&HeadlessCellRendererPane$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessCellRendererPane$3_EnclosingMethodInfo_ = {
	"HeadlessCellRendererPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessCellRendererPane$3_InnerClassesInfo_[] = {
	{"HeadlessCellRendererPane$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessCellRendererPane$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessCellRendererPane$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessCellRendererPane$3_MethodInfo_,
	nullptr,
	&_HeadlessCellRendererPane$3_EnclosingMethodInfo_,
	_HeadlessCellRendererPane$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessCellRendererPane"
};

$Object* allocate$HeadlessCellRendererPane$3($Class* clazz) {
	return $of($alloc(HeadlessCellRendererPane$3));
}

void HeadlessCellRendererPane$3::init$() {
	$Component::init$();
}

HeadlessCellRendererPane$3::HeadlessCellRendererPane$3() {
}

$Class* HeadlessCellRendererPane$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessCellRendererPane$3, name, initialize, &_HeadlessCellRendererPane$3_ClassInfo_, allocate$HeadlessCellRendererPane$3);
	return class$;
}

$Class* HeadlessCellRendererPane$3::class$ = nullptr;