#include <HeadlessJTabbedPane$3.h>

#include <HeadlessJTabbedPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJTabbedPane$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTabbedPane$3::*)()>(&HeadlessJTabbedPane$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJTabbedPane$3_EnclosingMethodInfo_ = {
	"HeadlessJTabbedPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTabbedPane$3_InnerClassesInfo_[] = {
	{"HeadlessJTabbedPane$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTabbedPane$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTabbedPane$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJTabbedPane$3_MethodInfo_,
	nullptr,
	&_HeadlessJTabbedPane$3_EnclosingMethodInfo_,
	_HeadlessJTabbedPane$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTabbedPane"
};

$Object* allocate$HeadlessJTabbedPane$3($Class* clazz) {
	return $of($alloc(HeadlessJTabbedPane$3));
}

void HeadlessJTabbedPane$3::init$() {
	$Component::init$();
}

HeadlessJTabbedPane$3::HeadlessJTabbedPane$3() {
}

$Class* HeadlessJTabbedPane$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTabbedPane$3, name, initialize, &_HeadlessJTabbedPane$3_ClassInfo_, allocate$HeadlessJTabbedPane$3);
	return class$;
}

$Class* HeadlessJTabbedPane$3::class$ = nullptr;