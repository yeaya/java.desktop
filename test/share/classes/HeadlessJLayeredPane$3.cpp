#include <HeadlessJLayeredPane$3.h>

#include <HeadlessJLayeredPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJLayeredPane = ::HeadlessJLayeredPane;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJLayeredPane$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJLayeredPane$3::*)()>(&HeadlessJLayeredPane$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJLayeredPane$3_EnclosingMethodInfo_ = {
	"HeadlessJLayeredPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJLayeredPane$3_InnerClassesInfo_[] = {
	{"HeadlessJLayeredPane$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJLayeredPane$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJLayeredPane$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJLayeredPane$3_MethodInfo_,
	nullptr,
	&_HeadlessJLayeredPane$3_EnclosingMethodInfo_,
	_HeadlessJLayeredPane$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJLayeredPane"
};

$Object* allocate$HeadlessJLayeredPane$3($Class* clazz) {
	return $of($alloc(HeadlessJLayeredPane$3));
}

void HeadlessJLayeredPane$3::init$() {
	$Component::init$();
}

HeadlessJLayeredPane$3::HeadlessJLayeredPane$3() {
}

$Class* HeadlessJLayeredPane$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJLayeredPane$3, name, initialize, &_HeadlessJLayeredPane$3_ClassInfo_, allocate$HeadlessJLayeredPane$3);
	return class$;
}

$Class* HeadlessJLayeredPane$3::class$ = nullptr;