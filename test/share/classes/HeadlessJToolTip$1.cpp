#include <HeadlessJToolTip$1.h>

#include <HeadlessJToolTip.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJToolTip$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJToolTip$1::*)()>(&HeadlessJToolTip$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJToolTip$1_EnclosingMethodInfo_ = {
	"HeadlessJToolTip",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJToolTip$1_InnerClassesInfo_[] = {
	{"HeadlessJToolTip$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJToolTip$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJToolTip$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJToolTip$1_MethodInfo_,
	nullptr,
	&_HeadlessJToolTip$1_EnclosingMethodInfo_,
	_HeadlessJToolTip$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJToolTip"
};

$Object* allocate$HeadlessJToolTip$1($Class* clazz) {
	return $of($alloc(HeadlessJToolTip$1));
}

void HeadlessJToolTip$1::init$() {
	$Component::init$();
}

HeadlessJToolTip$1::HeadlessJToolTip$1() {
}

$Class* HeadlessJToolTip$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJToolTip$1, name, initialize, &_HeadlessJToolTip$1_ClassInfo_, allocate$HeadlessJToolTip$1);
	return class$;
}

$Class* HeadlessJToolTip$1::class$ = nullptr;