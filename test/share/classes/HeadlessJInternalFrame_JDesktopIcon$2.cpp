#include <HeadlessJInternalFrame_JDesktopIcon$2.h>

#include <HeadlessJInternalFrame_JDesktopIcon.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJInternalFrame_JDesktopIcon$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJInternalFrame_JDesktopIcon$2::*)()>(&HeadlessJInternalFrame_JDesktopIcon$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJInternalFrame_JDesktopIcon$2_EnclosingMethodInfo_ = {
	"HeadlessJInternalFrame_JDesktopIcon",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJInternalFrame_JDesktopIcon$2_InnerClassesInfo_[] = {
	{"HeadlessJInternalFrame_JDesktopIcon$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJInternalFrame_JDesktopIcon$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJInternalFrame_JDesktopIcon$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJInternalFrame_JDesktopIcon$2_MethodInfo_,
	nullptr,
	&_HeadlessJInternalFrame_JDesktopIcon$2_EnclosingMethodInfo_,
	_HeadlessJInternalFrame_JDesktopIcon$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJInternalFrame_JDesktopIcon"
};

$Object* allocate$HeadlessJInternalFrame_JDesktopIcon$2($Class* clazz) {
	return $of($alloc(HeadlessJInternalFrame_JDesktopIcon$2));
}

void HeadlessJInternalFrame_JDesktopIcon$2::init$() {
	$Component::init$();
}

HeadlessJInternalFrame_JDesktopIcon$2::HeadlessJInternalFrame_JDesktopIcon$2() {
}

$Class* HeadlessJInternalFrame_JDesktopIcon$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJInternalFrame_JDesktopIcon$2, name, initialize, &_HeadlessJInternalFrame_JDesktopIcon$2_ClassInfo_, allocate$HeadlessJInternalFrame_JDesktopIcon$2);
	return class$;
}

$Class* HeadlessJInternalFrame_JDesktopIcon$2::class$ = nullptr;