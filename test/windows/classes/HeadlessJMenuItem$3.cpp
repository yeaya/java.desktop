#include <HeadlessJMenuItem$3.h>

#include <HeadlessJMenuItem.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJMenuItem = ::HeadlessJMenuItem;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJMenuItem$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJMenuItem$3::*)()>(&HeadlessJMenuItem$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJMenuItem$3_EnclosingMethodInfo_ = {
	"HeadlessJMenuItem",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJMenuItem$3_InnerClassesInfo_[] = {
	{"HeadlessJMenuItem$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJMenuItem$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJMenuItem$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJMenuItem$3_MethodInfo_,
	nullptr,
	&_HeadlessJMenuItem$3_EnclosingMethodInfo_,
	_HeadlessJMenuItem$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJMenuItem"
};

$Object* allocate$HeadlessJMenuItem$3($Class* clazz) {
	return $of($alloc(HeadlessJMenuItem$3));
}

void HeadlessJMenuItem$3::init$() {
	$Component::init$();
}

HeadlessJMenuItem$3::HeadlessJMenuItem$3() {
}

$Class* HeadlessJMenuItem$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJMenuItem$3, name, initialize, &_HeadlessJMenuItem$3_ClassInfo_, allocate$HeadlessJMenuItem$3);
	return class$;
}

$Class* HeadlessJMenuItem$3::class$ = nullptr;