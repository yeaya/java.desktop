#include <HeadlessJList$3.h>

#include <HeadlessJList.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJList = ::HeadlessJList;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJList$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJList$3::*)()>(&HeadlessJList$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJList$3_EnclosingMethodInfo_ = {
	"HeadlessJList",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJList$3_InnerClassesInfo_[] = {
	{"HeadlessJList$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJList$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJList$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJList$3_MethodInfo_,
	nullptr,
	&_HeadlessJList$3_EnclosingMethodInfo_,
	_HeadlessJList$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJList"
};

$Object* allocate$HeadlessJList$3($Class* clazz) {
	return $of($alloc(HeadlessJList$3));
}

void HeadlessJList$3::init$() {
	$Component::init$();
}

HeadlessJList$3::HeadlessJList$3() {
}

$Class* HeadlessJList$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJList$3, name, initialize, &_HeadlessJList$3_ClassInfo_, allocate$HeadlessJList$3);
	return class$;
}

$Class* HeadlessJList$3::class$ = nullptr;