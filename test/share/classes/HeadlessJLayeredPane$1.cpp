#include <HeadlessJLayeredPane$1.h>

#include <HeadlessJLayeredPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJLayeredPane$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJLayeredPane$1::*)()>(&HeadlessJLayeredPane$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJLayeredPane$1_EnclosingMethodInfo_ = {
	"HeadlessJLayeredPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJLayeredPane$1_InnerClassesInfo_[] = {
	{"HeadlessJLayeredPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJLayeredPane$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJLayeredPane$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJLayeredPane$1_MethodInfo_,
	nullptr,
	&_HeadlessJLayeredPane$1_EnclosingMethodInfo_,
	_HeadlessJLayeredPane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJLayeredPane"
};

$Object* allocate$HeadlessJLayeredPane$1($Class* clazz) {
	return $of($alloc(HeadlessJLayeredPane$1));
}

void HeadlessJLayeredPane$1::init$() {
	$Component::init$();
}

HeadlessJLayeredPane$1::HeadlessJLayeredPane$1() {
}

$Class* HeadlessJLayeredPane$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJLayeredPane$1, name, initialize, &_HeadlessJLayeredPane$1_ClassInfo_, allocate$HeadlessJLayeredPane$1);
	return class$;
}

$Class* HeadlessJLayeredPane$1::class$ = nullptr;