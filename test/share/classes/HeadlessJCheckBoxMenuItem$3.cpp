#include <HeadlessJCheckBoxMenuItem$3.h>

#include <HeadlessJCheckBoxMenuItem.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJCheckBoxMenuItem$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJCheckBoxMenuItem$3::*)()>(&HeadlessJCheckBoxMenuItem$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJCheckBoxMenuItem$3_EnclosingMethodInfo_ = {
	"HeadlessJCheckBoxMenuItem",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJCheckBoxMenuItem$3_InnerClassesInfo_[] = {
	{"HeadlessJCheckBoxMenuItem$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJCheckBoxMenuItem$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJCheckBoxMenuItem$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJCheckBoxMenuItem$3_MethodInfo_,
	nullptr,
	&_HeadlessJCheckBoxMenuItem$3_EnclosingMethodInfo_,
	_HeadlessJCheckBoxMenuItem$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJCheckBoxMenuItem"
};

$Object* allocate$HeadlessJCheckBoxMenuItem$3($Class* clazz) {
	return $of($alloc(HeadlessJCheckBoxMenuItem$3));
}

void HeadlessJCheckBoxMenuItem$3::init$() {
	$Component::init$();
}

HeadlessJCheckBoxMenuItem$3::HeadlessJCheckBoxMenuItem$3() {
}

$Class* HeadlessJCheckBoxMenuItem$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJCheckBoxMenuItem$3, name, initialize, &_HeadlessJCheckBoxMenuItem$3_ClassInfo_, allocate$HeadlessJCheckBoxMenuItem$3);
	return class$;
}

$Class* HeadlessJCheckBoxMenuItem$3::class$ = nullptr;