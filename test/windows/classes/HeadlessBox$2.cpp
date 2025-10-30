#include <HeadlessBox$2.h>

#include <HeadlessBox.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessBox = ::HeadlessBox;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessBox$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessBox$2::*)()>(&HeadlessBox$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessBox$2_EnclosingMethodInfo_ = {
	"HeadlessBox",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessBox$2_InnerClassesInfo_[] = {
	{"HeadlessBox$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessBox$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessBox$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessBox$2_MethodInfo_,
	nullptr,
	&_HeadlessBox$2_EnclosingMethodInfo_,
	_HeadlessBox$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessBox"
};

$Object* allocate$HeadlessBox$2($Class* clazz) {
	return $of($alloc(HeadlessBox$2));
}

void HeadlessBox$2::init$() {
	$Component::init$();
}

HeadlessBox$2::HeadlessBox$2() {
}

$Class* HeadlessBox$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessBox$2, name, initialize, &_HeadlessBox$2_ClassInfo_, allocate$HeadlessBox$2);
	return class$;
}

$Class* HeadlessBox$2::class$ = nullptr;