#include <HeadlessJDesktopPane$2.h>

#include <HeadlessJDesktopPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJDesktopPane = ::HeadlessJDesktopPane;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJDesktopPane$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJDesktopPane$2::*)()>(&HeadlessJDesktopPane$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJDesktopPane$2_EnclosingMethodInfo_ = {
	"HeadlessJDesktopPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJDesktopPane$2_InnerClassesInfo_[] = {
	{"HeadlessJDesktopPane$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJDesktopPane$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJDesktopPane$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJDesktopPane$2_MethodInfo_,
	nullptr,
	&_HeadlessJDesktopPane$2_EnclosingMethodInfo_,
	_HeadlessJDesktopPane$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJDesktopPane"
};

$Object* allocate$HeadlessJDesktopPane$2($Class* clazz) {
	return $of($alloc(HeadlessJDesktopPane$2));
}

void HeadlessJDesktopPane$2::init$() {
	$Component::init$();
}

HeadlessJDesktopPane$2::HeadlessJDesktopPane$2() {
}

$Class* HeadlessJDesktopPane$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJDesktopPane$2, name, initialize, &_HeadlessJDesktopPane$2_ClassInfo_, allocate$HeadlessJDesktopPane$2);
	return class$;
}

$Class* HeadlessJDesktopPane$2::class$ = nullptr;