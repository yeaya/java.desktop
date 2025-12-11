#include <HeadlessJTabbedPane$1.h>

#include <HeadlessJTabbedPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJTabbedPane$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTabbedPane$1::*)()>(&HeadlessJTabbedPane$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJTabbedPane$1_EnclosingMethodInfo_ = {
	"HeadlessJTabbedPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTabbedPane$1_InnerClassesInfo_[] = {
	{"HeadlessJTabbedPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTabbedPane$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTabbedPane$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJTabbedPane$1_MethodInfo_,
	nullptr,
	&_HeadlessJTabbedPane$1_EnclosingMethodInfo_,
	_HeadlessJTabbedPane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTabbedPane"
};

$Object* allocate$HeadlessJTabbedPane$1($Class* clazz) {
	return $of($alloc(HeadlessJTabbedPane$1));
}

void HeadlessJTabbedPane$1::init$() {
	$Component::init$();
}

HeadlessJTabbedPane$1::HeadlessJTabbedPane$1() {
}

$Class* HeadlessJTabbedPane$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTabbedPane$1, name, initialize, &_HeadlessJTabbedPane$1_ClassInfo_, allocate$HeadlessJTabbedPane$1);
	return class$;
}

$Class* HeadlessJTabbedPane$1::class$ = nullptr;