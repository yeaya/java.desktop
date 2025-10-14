#include <HeadlessJTabbedPane$2.h>

#include <HeadlessJTabbedPane.h>
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

using $HeadlessJTabbedPane = ::HeadlessJTabbedPane;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJTabbedPane$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTabbedPane$2::*)()>(&HeadlessJTabbedPane$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJTabbedPane$2_EnclosingMethodInfo_ = {
	"HeadlessJTabbedPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTabbedPane$2_InnerClassesInfo_[] = {
	{"HeadlessJTabbedPane$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTabbedPane$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTabbedPane$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJTabbedPane$2_MethodInfo_,
	nullptr,
	&_HeadlessJTabbedPane$2_EnclosingMethodInfo_,
	_HeadlessJTabbedPane$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTabbedPane"
};

$Object* allocate$HeadlessJTabbedPane$2($Class* clazz) {
	return $of($alloc(HeadlessJTabbedPane$2));
}

void HeadlessJTabbedPane$2::init$() {
	$Component::init$();
}

HeadlessJTabbedPane$2::HeadlessJTabbedPane$2() {
}

$Class* HeadlessJTabbedPane$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTabbedPane$2, name, initialize, &_HeadlessJTabbedPane$2_ClassInfo_, allocate$HeadlessJTabbedPane$2);
	return class$;
}

$Class* HeadlessJTabbedPane$2::class$ = nullptr;