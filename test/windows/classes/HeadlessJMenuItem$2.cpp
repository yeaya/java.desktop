#include <HeadlessJMenuItem$2.h>

#include <HeadlessJMenuItem.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJMenuItem = ::HeadlessJMenuItem;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJMenuItem$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJMenuItem$2::*)()>(&HeadlessJMenuItem$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJMenuItem$2_EnclosingMethodInfo_ = {
	"HeadlessJMenuItem",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJMenuItem$2_InnerClassesInfo_[] = {
	{"HeadlessJMenuItem$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJMenuItem$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJMenuItem$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJMenuItem$2_MethodInfo_,
	nullptr,
	&_HeadlessJMenuItem$2_EnclosingMethodInfo_,
	_HeadlessJMenuItem$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJMenuItem"
};

$Object* allocate$HeadlessJMenuItem$2($Class* clazz) {
	return $of($alloc(HeadlessJMenuItem$2));
}

void HeadlessJMenuItem$2::init$() {
	$Component::init$();
}

HeadlessJMenuItem$2::HeadlessJMenuItem$2() {
}

$Class* HeadlessJMenuItem$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJMenuItem$2, name, initialize, &_HeadlessJMenuItem$2_ClassInfo_, allocate$HeadlessJMenuItem$2);
	return class$;
}

$Class* HeadlessJMenuItem$2::class$ = nullptr;