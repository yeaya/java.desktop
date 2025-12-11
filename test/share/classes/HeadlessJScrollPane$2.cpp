#include <HeadlessJScrollPane$2.h>

#include <HeadlessJScrollPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJScrollPane$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJScrollPane$2::*)()>(&HeadlessJScrollPane$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJScrollPane$2_EnclosingMethodInfo_ = {
	"HeadlessJScrollPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJScrollPane$2_InnerClassesInfo_[] = {
	{"HeadlessJScrollPane$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJScrollPane$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJScrollPane$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJScrollPane$2_MethodInfo_,
	nullptr,
	&_HeadlessJScrollPane$2_EnclosingMethodInfo_,
	_HeadlessJScrollPane$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJScrollPane"
};

$Object* allocate$HeadlessJScrollPane$2($Class* clazz) {
	return $of($alloc(HeadlessJScrollPane$2));
}

void HeadlessJScrollPane$2::init$() {
	$Component::init$();
}

HeadlessJScrollPane$2::HeadlessJScrollPane$2() {
}

$Class* HeadlessJScrollPane$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJScrollPane$2, name, initialize, &_HeadlessJScrollPane$2_ClassInfo_, allocate$HeadlessJScrollPane$2);
	return class$;
}

$Class* HeadlessJScrollPane$2::class$ = nullptr;