#include <HeadlessJInternalFrame_JDesktopIcon$1.h>

#include <HeadlessJInternalFrame_JDesktopIcon.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJInternalFrame_JDesktopIcon = ::HeadlessJInternalFrame_JDesktopIcon;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJInternalFrame_JDesktopIcon$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJInternalFrame_JDesktopIcon$1::*)()>(&HeadlessJInternalFrame_JDesktopIcon$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJInternalFrame_JDesktopIcon$1_EnclosingMethodInfo_ = {
	"HeadlessJInternalFrame_JDesktopIcon",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJInternalFrame_JDesktopIcon$1_InnerClassesInfo_[] = {
	{"HeadlessJInternalFrame_JDesktopIcon$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJInternalFrame_JDesktopIcon$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJInternalFrame_JDesktopIcon$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJInternalFrame_JDesktopIcon$1_MethodInfo_,
	nullptr,
	&_HeadlessJInternalFrame_JDesktopIcon$1_EnclosingMethodInfo_,
	_HeadlessJInternalFrame_JDesktopIcon$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJInternalFrame_JDesktopIcon"
};

$Object* allocate$HeadlessJInternalFrame_JDesktopIcon$1($Class* clazz) {
	return $of($alloc(HeadlessJInternalFrame_JDesktopIcon$1));
}

void HeadlessJInternalFrame_JDesktopIcon$1::init$() {
	$Component::init$();
}

HeadlessJInternalFrame_JDesktopIcon$1::HeadlessJInternalFrame_JDesktopIcon$1() {
}

$Class* HeadlessJInternalFrame_JDesktopIcon$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJInternalFrame_JDesktopIcon$1, name, initialize, &_HeadlessJInternalFrame_JDesktopIcon$1_ClassInfo_, allocate$HeadlessJInternalFrame_JDesktopIcon$1);
	return class$;
}

$Class* HeadlessJInternalFrame_JDesktopIcon$1::class$ = nullptr;