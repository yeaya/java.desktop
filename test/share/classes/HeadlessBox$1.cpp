#include <HeadlessBox$1.h>

#include <HeadlessBox.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessBox$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessBox$1::*)()>(&HeadlessBox$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessBox$1_EnclosingMethodInfo_ = {
	"HeadlessBox",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessBox$1_InnerClassesInfo_[] = {
	{"HeadlessBox$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessBox$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessBox$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessBox$1_MethodInfo_,
	nullptr,
	&_HeadlessBox$1_EnclosingMethodInfo_,
	_HeadlessBox$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessBox"
};

$Object* allocate$HeadlessBox$1($Class* clazz) {
	return $of($alloc(HeadlessBox$1));
}

void HeadlessBox$1::init$() {
	$Component::init$();
}

HeadlessBox$1::HeadlessBox$1() {
}

$Class* HeadlessBox$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessBox$1, name, initialize, &_HeadlessBox$1_ClassInfo_, allocate$HeadlessBox$1);
	return class$;
}

$Class* HeadlessBox$1::class$ = nullptr;