#include <HeadlessJCheckBoxMenuItem$1.h>

#include <HeadlessJCheckBoxMenuItem.h>
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

using $HeadlessJCheckBoxMenuItem = ::HeadlessJCheckBoxMenuItem;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJCheckBoxMenuItem$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJCheckBoxMenuItem$1::*)()>(&HeadlessJCheckBoxMenuItem$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJCheckBoxMenuItem$1_EnclosingMethodInfo_ = {
	"HeadlessJCheckBoxMenuItem",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJCheckBoxMenuItem$1_InnerClassesInfo_[] = {
	{"HeadlessJCheckBoxMenuItem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJCheckBoxMenuItem$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJCheckBoxMenuItem$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJCheckBoxMenuItem$1_MethodInfo_,
	nullptr,
	&_HeadlessJCheckBoxMenuItem$1_EnclosingMethodInfo_,
	_HeadlessJCheckBoxMenuItem$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJCheckBoxMenuItem"
};

$Object* allocate$HeadlessJCheckBoxMenuItem$1($Class* clazz) {
	return $of($alloc(HeadlessJCheckBoxMenuItem$1));
}

void HeadlessJCheckBoxMenuItem$1::init$() {
	$Component::init$();
}

HeadlessJCheckBoxMenuItem$1::HeadlessJCheckBoxMenuItem$1() {
}

$Class* HeadlessJCheckBoxMenuItem$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJCheckBoxMenuItem$1, name, initialize, &_HeadlessJCheckBoxMenuItem$1_ClassInfo_, allocate$HeadlessJCheckBoxMenuItem$1);
	return class$;
}

$Class* HeadlessJCheckBoxMenuItem$1::class$ = nullptr;