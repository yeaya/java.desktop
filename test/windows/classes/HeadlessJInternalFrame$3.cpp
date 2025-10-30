#include <HeadlessJInternalFrame$3.h>

#include <HeadlessJInternalFrame.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJInternalFrame = ::HeadlessJInternalFrame;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJInternalFrame$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJInternalFrame$3::*)()>(&HeadlessJInternalFrame$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJInternalFrame$3_EnclosingMethodInfo_ = {
	"HeadlessJInternalFrame",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJInternalFrame$3_InnerClassesInfo_[] = {
	{"HeadlessJInternalFrame$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJInternalFrame$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJInternalFrame$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJInternalFrame$3_MethodInfo_,
	nullptr,
	&_HeadlessJInternalFrame$3_EnclosingMethodInfo_,
	_HeadlessJInternalFrame$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJInternalFrame"
};

$Object* allocate$HeadlessJInternalFrame$3($Class* clazz) {
	return $of($alloc(HeadlessJInternalFrame$3));
}

void HeadlessJInternalFrame$3::init$() {
	$Component::init$();
}

HeadlessJInternalFrame$3::HeadlessJInternalFrame$3() {
}

$Class* HeadlessJInternalFrame$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJInternalFrame$3, name, initialize, &_HeadlessJInternalFrame$3_ClassInfo_, allocate$HeadlessJInternalFrame$3);
	return class$;
}

$Class* HeadlessJInternalFrame$3::class$ = nullptr;