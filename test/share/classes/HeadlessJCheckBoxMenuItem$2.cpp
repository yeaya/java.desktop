#include <HeadlessJCheckBoxMenuItem$2.h>

#include <HeadlessJCheckBoxMenuItem.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJCheckBoxMenuItem$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJCheckBoxMenuItem$2::*)()>(&HeadlessJCheckBoxMenuItem$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJCheckBoxMenuItem$2_EnclosingMethodInfo_ = {
	"HeadlessJCheckBoxMenuItem",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJCheckBoxMenuItem$2_InnerClassesInfo_[] = {
	{"HeadlessJCheckBoxMenuItem$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJCheckBoxMenuItem$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJCheckBoxMenuItem$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJCheckBoxMenuItem$2_MethodInfo_,
	nullptr,
	&_HeadlessJCheckBoxMenuItem$2_EnclosingMethodInfo_,
	_HeadlessJCheckBoxMenuItem$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJCheckBoxMenuItem"
};

$Object* allocate$HeadlessJCheckBoxMenuItem$2($Class* clazz) {
	return $of($alloc(HeadlessJCheckBoxMenuItem$2));
}

void HeadlessJCheckBoxMenuItem$2::init$() {
	$Component::init$();
}

HeadlessJCheckBoxMenuItem$2::HeadlessJCheckBoxMenuItem$2() {
}

$Class* HeadlessJCheckBoxMenuItem$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJCheckBoxMenuItem$2, name, initialize, &_HeadlessJCheckBoxMenuItem$2_ClassInfo_, allocate$HeadlessJCheckBoxMenuItem$2);
	return class$;
}

$Class* HeadlessJCheckBoxMenuItem$2::class$ = nullptr;