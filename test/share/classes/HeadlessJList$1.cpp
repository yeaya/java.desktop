#include <HeadlessJList$1.h>

#include <HeadlessJList.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJList$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJList$1::*)()>(&HeadlessJList$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJList$1_EnclosingMethodInfo_ = {
	"HeadlessJList",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJList$1_InnerClassesInfo_[] = {
	{"HeadlessJList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJList$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJList$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJList$1_MethodInfo_,
	nullptr,
	&_HeadlessJList$1_EnclosingMethodInfo_,
	_HeadlessJList$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJList"
};

$Object* allocate$HeadlessJList$1($Class* clazz) {
	return $of($alloc(HeadlessJList$1));
}

void HeadlessJList$1::init$() {
	$Component::init$();
}

HeadlessJList$1::HeadlessJList$1() {
}

$Class* HeadlessJList$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJList$1, name, initialize, &_HeadlessJList$1_ClassInfo_, allocate$HeadlessJList$1);
	return class$;
}

$Class* HeadlessJList$1::class$ = nullptr;