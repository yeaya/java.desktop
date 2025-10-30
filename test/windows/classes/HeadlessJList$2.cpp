#include <HeadlessJList$2.h>

#include <HeadlessJList.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJList = ::HeadlessJList;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJList$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJList$2::*)()>(&HeadlessJList$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJList$2_EnclosingMethodInfo_ = {
	"HeadlessJList",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJList$2_InnerClassesInfo_[] = {
	{"HeadlessJList$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJList$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJList$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJList$2_MethodInfo_,
	nullptr,
	&_HeadlessJList$2_EnclosingMethodInfo_,
	_HeadlessJList$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJList"
};

$Object* allocate$HeadlessJList$2($Class* clazz) {
	return $of($alloc(HeadlessJList$2));
}

void HeadlessJList$2::init$() {
	$Component::init$();
}

HeadlessJList$2::HeadlessJList$2() {
}

$Class* HeadlessJList$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJList$2, name, initialize, &_HeadlessJList$2_ClassInfo_, allocate$HeadlessJList$2);
	return class$;
}

$Class* HeadlessJList$2::class$ = nullptr;