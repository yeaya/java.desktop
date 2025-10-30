#include <HeadlessJDesktopPane$4.h>

#include <HeadlessJDesktopPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJDesktopPane = ::HeadlessJDesktopPane;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJDesktopPane$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJDesktopPane$4::*)()>(&HeadlessJDesktopPane$4::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJDesktopPane$4_EnclosingMethodInfo_ = {
	"HeadlessJDesktopPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJDesktopPane$4_InnerClassesInfo_[] = {
	{"HeadlessJDesktopPane$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJDesktopPane$4_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJDesktopPane$4",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJDesktopPane$4_MethodInfo_,
	nullptr,
	&_HeadlessJDesktopPane$4_EnclosingMethodInfo_,
	_HeadlessJDesktopPane$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJDesktopPane"
};

$Object* allocate$HeadlessJDesktopPane$4($Class* clazz) {
	return $of($alloc(HeadlessJDesktopPane$4));
}

void HeadlessJDesktopPane$4::init$() {
	$Component::init$();
}

HeadlessJDesktopPane$4::HeadlessJDesktopPane$4() {
}

$Class* HeadlessJDesktopPane$4::load$($String* name, bool initialize) {
	$loadClass(HeadlessJDesktopPane$4, name, initialize, &_HeadlessJDesktopPane$4_ClassInfo_, allocate$HeadlessJDesktopPane$4);
	return class$;
}

$Class* HeadlessJDesktopPane$4::class$ = nullptr;