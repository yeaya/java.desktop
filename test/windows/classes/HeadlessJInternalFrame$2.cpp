#include <HeadlessJInternalFrame$2.h>

#include <HeadlessJInternalFrame.h>
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

using $HeadlessJInternalFrame = ::HeadlessJInternalFrame;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJInternalFrame$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJInternalFrame$2::*)()>(&HeadlessJInternalFrame$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJInternalFrame$2_EnclosingMethodInfo_ = {
	"HeadlessJInternalFrame",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJInternalFrame$2_InnerClassesInfo_[] = {
	{"HeadlessJInternalFrame$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJInternalFrame$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJInternalFrame$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJInternalFrame$2_MethodInfo_,
	nullptr,
	&_HeadlessJInternalFrame$2_EnclosingMethodInfo_,
	_HeadlessJInternalFrame$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJInternalFrame"
};

$Object* allocate$HeadlessJInternalFrame$2($Class* clazz) {
	return $of($alloc(HeadlessJInternalFrame$2));
}

void HeadlessJInternalFrame$2::init$() {
	$Component::init$();
}

HeadlessJInternalFrame$2::HeadlessJInternalFrame$2() {
}

$Class* HeadlessJInternalFrame$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJInternalFrame$2, name, initialize, &_HeadlessJInternalFrame$2_ClassInfo_, allocate$HeadlessJInternalFrame$2);
	return class$;
}

$Class* HeadlessJInternalFrame$2::class$ = nullptr;