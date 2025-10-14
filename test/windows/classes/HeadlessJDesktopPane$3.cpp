#include <HeadlessJDesktopPane$3.h>

#include <HeadlessJDesktopPane.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $HeadlessJDesktopPane = ::HeadlessJDesktopPane;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJDesktopPane$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJDesktopPane$3::*)()>(&HeadlessJDesktopPane$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJDesktopPane$3_EnclosingMethodInfo_ = {
	"HeadlessJDesktopPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJDesktopPane$3_InnerClassesInfo_[] = {
	{"HeadlessJDesktopPane$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJDesktopPane$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJDesktopPane$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJDesktopPane$3_MethodInfo_,
	nullptr,
	&_HeadlessJDesktopPane$3_EnclosingMethodInfo_,
	_HeadlessJDesktopPane$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJDesktopPane"
};

$Object* allocate$HeadlessJDesktopPane$3($Class* clazz) {
	return $of($alloc(HeadlessJDesktopPane$3));
}

void HeadlessJDesktopPane$3::init$() {
	$Component::init$();
}

HeadlessJDesktopPane$3::HeadlessJDesktopPane$3() {
}

$Class* HeadlessJDesktopPane$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJDesktopPane$3, name, initialize, &_HeadlessJDesktopPane$3_ClassInfo_, allocate$HeadlessJDesktopPane$3);
	return class$;
}

$Class* HeadlessJDesktopPane$3::class$ = nullptr;