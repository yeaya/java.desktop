#include <HeadlessJToolTip$3.h>

#include <HeadlessJToolTip.h>
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

using $HeadlessJToolTip = ::HeadlessJToolTip;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJToolTip$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJToolTip$3::*)()>(&HeadlessJToolTip$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJToolTip$3_EnclosingMethodInfo_ = {
	"HeadlessJToolTip",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJToolTip$3_InnerClassesInfo_[] = {
	{"HeadlessJToolTip$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJToolTip$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJToolTip$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJToolTip$3_MethodInfo_,
	nullptr,
	&_HeadlessJToolTip$3_EnclosingMethodInfo_,
	_HeadlessJToolTip$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJToolTip"
};

$Object* allocate$HeadlessJToolTip$3($Class* clazz) {
	return $of($alloc(HeadlessJToolTip$3));
}

void HeadlessJToolTip$3::init$() {
	$Component::init$();
}

HeadlessJToolTip$3::HeadlessJToolTip$3() {
}

$Class* HeadlessJToolTip$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJToolTip$3, name, initialize, &_HeadlessJToolTip$3_ClassInfo_, allocate$HeadlessJToolTip$3);
	return class$;
}

$Class* HeadlessJToolTip$3::class$ = nullptr;