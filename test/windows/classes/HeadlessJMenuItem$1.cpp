#include <HeadlessJMenuItem$1.h>

#include <HeadlessJMenuItem.h>
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

using $HeadlessJMenuItem = ::HeadlessJMenuItem;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJMenuItem$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJMenuItem$1::*)()>(&HeadlessJMenuItem$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJMenuItem$1_EnclosingMethodInfo_ = {
	"HeadlessJMenuItem",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJMenuItem$1_InnerClassesInfo_[] = {
	{"HeadlessJMenuItem$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJMenuItem$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJMenuItem$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJMenuItem$1_MethodInfo_,
	nullptr,
	&_HeadlessJMenuItem$1_EnclosingMethodInfo_,
	_HeadlessJMenuItem$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJMenuItem"
};

$Object* allocate$HeadlessJMenuItem$1($Class* clazz) {
	return $of($alloc(HeadlessJMenuItem$1));
}

void HeadlessJMenuItem$1::init$() {
	$Component::init$();
}

HeadlessJMenuItem$1::HeadlessJMenuItem$1() {
}

$Class* HeadlessJMenuItem$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJMenuItem$1, name, initialize, &_HeadlessJMenuItem$1_ClassInfo_, allocate$HeadlessJMenuItem$1);
	return class$;
}

$Class* HeadlessJMenuItem$1::class$ = nullptr;