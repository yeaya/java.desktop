#include <HeadlessJScrollPane$3.h>

#include <HeadlessJScrollPane.h>
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

using $HeadlessJScrollPane = ::HeadlessJScrollPane;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJScrollPane$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJScrollPane$3::*)()>(&HeadlessJScrollPane$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJScrollPane$3_EnclosingMethodInfo_ = {
	"HeadlessJScrollPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJScrollPane$3_InnerClassesInfo_[] = {
	{"HeadlessJScrollPane$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJScrollPane$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJScrollPane$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJScrollPane$3_MethodInfo_,
	nullptr,
	&_HeadlessJScrollPane$3_EnclosingMethodInfo_,
	_HeadlessJScrollPane$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJScrollPane"
};

$Object* allocate$HeadlessJScrollPane$3($Class* clazz) {
	return $of($alloc(HeadlessJScrollPane$3));
}

void HeadlessJScrollPane$3::init$() {
	$Component::init$();
}

HeadlessJScrollPane$3::HeadlessJScrollPane$3() {
}

$Class* HeadlessJScrollPane$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJScrollPane$3, name, initialize, &_HeadlessJScrollPane$3_ClassInfo_, allocate$HeadlessJScrollPane$3);
	return class$;
}

$Class* HeadlessJScrollPane$3::class$ = nullptr;