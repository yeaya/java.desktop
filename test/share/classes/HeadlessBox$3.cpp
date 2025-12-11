#include <HeadlessBox$3.h>

#include <HeadlessBox.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessBox$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessBox$3::*)()>(&HeadlessBox$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessBox$3_EnclosingMethodInfo_ = {
	"HeadlessBox",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessBox$3_InnerClassesInfo_[] = {
	{"HeadlessBox$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessBox$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessBox$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessBox$3_MethodInfo_,
	nullptr,
	&_HeadlessBox$3_EnclosingMethodInfo_,
	_HeadlessBox$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessBox"
};

$Object* allocate$HeadlessBox$3($Class* clazz) {
	return $of($alloc(HeadlessBox$3));
}

void HeadlessBox$3::init$() {
	$Component::init$();
}

HeadlessBox$3::HeadlessBox$3() {
}

$Class* HeadlessBox$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessBox$3, name, initialize, &_HeadlessBox$3_ClassInfo_, allocate$HeadlessBox$3);
	return class$;
}

$Class* HeadlessBox$3::class$ = nullptr;