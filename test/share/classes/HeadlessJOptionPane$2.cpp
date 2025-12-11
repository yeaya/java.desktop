#include <HeadlessJOptionPane$2.h>

#include <HeadlessJOptionPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJOptionPane$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJOptionPane$2::*)()>(&HeadlessJOptionPane$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJOptionPane$2_EnclosingMethodInfo_ = {
	"HeadlessJOptionPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJOptionPane$2_InnerClassesInfo_[] = {
	{"HeadlessJOptionPane$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJOptionPane$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJOptionPane$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJOptionPane$2_MethodInfo_,
	nullptr,
	&_HeadlessJOptionPane$2_EnclosingMethodInfo_,
	_HeadlessJOptionPane$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJOptionPane"
};

$Object* allocate$HeadlessJOptionPane$2($Class* clazz) {
	return $of($alloc(HeadlessJOptionPane$2));
}

void HeadlessJOptionPane$2::init$() {
	$Component::init$();
}

HeadlessJOptionPane$2::HeadlessJOptionPane$2() {
}

$Class* HeadlessJOptionPane$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJOptionPane$2, name, initialize, &_HeadlessJOptionPane$2_ClassInfo_, allocate$HeadlessJOptionPane$2);
	return class$;
}

$Class* HeadlessJOptionPane$2::class$ = nullptr;