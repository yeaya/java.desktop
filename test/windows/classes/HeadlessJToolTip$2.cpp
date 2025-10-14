#include <HeadlessJToolTip$2.h>

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

$MethodInfo _HeadlessJToolTip$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJToolTip$2::*)()>(&HeadlessJToolTip$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJToolTip$2_EnclosingMethodInfo_ = {
	"HeadlessJToolTip",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJToolTip$2_InnerClassesInfo_[] = {
	{"HeadlessJToolTip$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJToolTip$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJToolTip$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJToolTip$2_MethodInfo_,
	nullptr,
	&_HeadlessJToolTip$2_EnclosingMethodInfo_,
	_HeadlessJToolTip$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJToolTip"
};

$Object* allocate$HeadlessJToolTip$2($Class* clazz) {
	return $of($alloc(HeadlessJToolTip$2));
}

void HeadlessJToolTip$2::init$() {
	$Component::init$();
}

HeadlessJToolTip$2::HeadlessJToolTip$2() {
}

$Class* HeadlessJToolTip$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJToolTip$2, name, initialize, &_HeadlessJToolTip$2_ClassInfo_, allocate$HeadlessJToolTip$2);
	return class$;
}

$Class* HeadlessJToolTip$2::class$ = nullptr;