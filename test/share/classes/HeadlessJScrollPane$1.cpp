#include <HeadlessJScrollPane$1.h>

#include <HeadlessJScrollPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJScrollPane$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJScrollPane$1::*)()>(&HeadlessJScrollPane$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJScrollPane$1_EnclosingMethodInfo_ = {
	"HeadlessJScrollPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJScrollPane$1_InnerClassesInfo_[] = {
	{"HeadlessJScrollPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJScrollPane$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJScrollPane$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJScrollPane$1_MethodInfo_,
	nullptr,
	&_HeadlessJScrollPane$1_EnclosingMethodInfo_,
	_HeadlessJScrollPane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJScrollPane"
};

$Object* allocate$HeadlessJScrollPane$1($Class* clazz) {
	return $of($alloc(HeadlessJScrollPane$1));
}

void HeadlessJScrollPane$1::init$() {
	$Component::init$();
}

HeadlessJScrollPane$1::HeadlessJScrollPane$1() {
}

$Class* HeadlessJScrollPane$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJScrollPane$1, name, initialize, &_HeadlessJScrollPane$1_ClassInfo_, allocate$HeadlessJScrollPane$1);
	return class$;
}

$Class* HeadlessJScrollPane$1::class$ = nullptr;