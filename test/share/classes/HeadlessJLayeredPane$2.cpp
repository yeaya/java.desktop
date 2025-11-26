#include <HeadlessJLayeredPane$2.h>

#include <HeadlessJLayeredPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJLayeredPane = ::HeadlessJLayeredPane;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJLayeredPane$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJLayeredPane$2::*)()>(&HeadlessJLayeredPane$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJLayeredPane$2_EnclosingMethodInfo_ = {
	"HeadlessJLayeredPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJLayeredPane$2_InnerClassesInfo_[] = {
	{"HeadlessJLayeredPane$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJLayeredPane$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJLayeredPane$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJLayeredPane$2_MethodInfo_,
	nullptr,
	&_HeadlessJLayeredPane$2_EnclosingMethodInfo_,
	_HeadlessJLayeredPane$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJLayeredPane"
};

$Object* allocate$HeadlessJLayeredPane$2($Class* clazz) {
	return $of($alloc(HeadlessJLayeredPane$2));
}

void HeadlessJLayeredPane$2::init$() {
	$Component::init$();
}

HeadlessJLayeredPane$2::HeadlessJLayeredPane$2() {
}

$Class* HeadlessJLayeredPane$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJLayeredPane$2, name, initialize, &_HeadlessJLayeredPane$2_ClassInfo_, allocate$HeadlessJLayeredPane$2);
	return class$;
}

$Class* HeadlessJLayeredPane$2::class$ = nullptr;