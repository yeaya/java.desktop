#include <HeadlessJMenu$2.h>

#include <HeadlessJMenu.h>
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

using $HeadlessJMenu = ::HeadlessJMenu;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJMenu$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJMenu$2::*)()>(&HeadlessJMenu$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJMenu$2_EnclosingMethodInfo_ = {
	"HeadlessJMenu",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJMenu$2_InnerClassesInfo_[] = {
	{"HeadlessJMenu$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJMenu$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJMenu$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJMenu$2_MethodInfo_,
	nullptr,
	&_HeadlessJMenu$2_EnclosingMethodInfo_,
	_HeadlessJMenu$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJMenu"
};

$Object* allocate$HeadlessJMenu$2($Class* clazz) {
	return $of($alloc(HeadlessJMenu$2));
}

void HeadlessJMenu$2::init$() {
	$Component::init$();
}

HeadlessJMenu$2::HeadlessJMenu$2() {
}

$Class* HeadlessJMenu$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJMenu$2, name, initialize, &_HeadlessJMenu$2_ClassInfo_, allocate$HeadlessJMenu$2);
	return class$;
}

$Class* HeadlessJMenu$2::class$ = nullptr;