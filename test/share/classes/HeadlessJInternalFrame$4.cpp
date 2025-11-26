#include <HeadlessJInternalFrame$4.h>

#include <HeadlessJInternalFrame.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJInternalFrame = ::HeadlessJInternalFrame;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJInternalFrame$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJInternalFrame$4::*)()>(&HeadlessJInternalFrame$4::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJInternalFrame$4_EnclosingMethodInfo_ = {
	"HeadlessJInternalFrame",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJInternalFrame$4_InnerClassesInfo_[] = {
	{"HeadlessJInternalFrame$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJInternalFrame$4_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJInternalFrame$4",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJInternalFrame$4_MethodInfo_,
	nullptr,
	&_HeadlessJInternalFrame$4_EnclosingMethodInfo_,
	_HeadlessJInternalFrame$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJInternalFrame"
};

$Object* allocate$HeadlessJInternalFrame$4($Class* clazz) {
	return $of($alloc(HeadlessJInternalFrame$4));
}

void HeadlessJInternalFrame$4::init$() {
	$Component::init$();
}

HeadlessJInternalFrame$4::HeadlessJInternalFrame$4() {
}

$Class* HeadlessJInternalFrame$4::load$($String* name, bool initialize) {
	$loadClass(HeadlessJInternalFrame$4, name, initialize, &_HeadlessJInternalFrame$4_ClassInfo_, allocate$HeadlessJInternalFrame$4);
	return class$;
}

$Class* HeadlessJInternalFrame$4::class$ = nullptr;