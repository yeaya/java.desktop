#include <HeadlessJInternalFrame_JDesktopIcon$3.h>

#include <HeadlessJInternalFrame_JDesktopIcon.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJInternalFrame_JDesktopIcon = ::HeadlessJInternalFrame_JDesktopIcon;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJInternalFrame_JDesktopIcon$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJInternalFrame_JDesktopIcon$3::*)()>(&HeadlessJInternalFrame_JDesktopIcon$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJInternalFrame_JDesktopIcon$3_EnclosingMethodInfo_ = {
	"HeadlessJInternalFrame_JDesktopIcon",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJInternalFrame_JDesktopIcon$3_InnerClassesInfo_[] = {
	{"HeadlessJInternalFrame_JDesktopIcon$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJInternalFrame_JDesktopIcon$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJInternalFrame_JDesktopIcon$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJInternalFrame_JDesktopIcon$3_MethodInfo_,
	nullptr,
	&_HeadlessJInternalFrame_JDesktopIcon$3_EnclosingMethodInfo_,
	_HeadlessJInternalFrame_JDesktopIcon$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJInternalFrame_JDesktopIcon"
};

$Object* allocate$HeadlessJInternalFrame_JDesktopIcon$3($Class* clazz) {
	return $of($alloc(HeadlessJInternalFrame_JDesktopIcon$3));
}

void HeadlessJInternalFrame_JDesktopIcon$3::init$() {
	$Component::init$();
}

HeadlessJInternalFrame_JDesktopIcon$3::HeadlessJInternalFrame_JDesktopIcon$3() {
}

$Class* HeadlessJInternalFrame_JDesktopIcon$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJInternalFrame_JDesktopIcon$3, name, initialize, &_HeadlessJInternalFrame_JDesktopIcon$3_ClassInfo_, allocate$HeadlessJInternalFrame_JDesktopIcon$3);
	return class$;
}

$Class* HeadlessJInternalFrame_JDesktopIcon$3::class$ = nullptr;