#include <HeadlessJOptionPane$1.h>

#include <HeadlessJOptionPane.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJOptionPane = ::HeadlessJOptionPane;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJOptionPane$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJOptionPane$1::*)()>(&HeadlessJOptionPane$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJOptionPane$1_EnclosingMethodInfo_ = {
	"HeadlessJOptionPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJOptionPane$1_InnerClassesInfo_[] = {
	{"HeadlessJOptionPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJOptionPane$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJOptionPane$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJOptionPane$1_MethodInfo_,
	nullptr,
	&_HeadlessJOptionPane$1_EnclosingMethodInfo_,
	_HeadlessJOptionPane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJOptionPane"
};

$Object* allocate$HeadlessJOptionPane$1($Class* clazz) {
	return $of($alloc(HeadlessJOptionPane$1));
}

void HeadlessJOptionPane$1::init$() {
	$Component::init$();
}

HeadlessJOptionPane$1::HeadlessJOptionPane$1() {
}

$Class* HeadlessJOptionPane$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJOptionPane$1, name, initialize, &_HeadlessJOptionPane$1_ClassInfo_, allocate$HeadlessJOptionPane$1);
	return class$;
}

$Class* HeadlessJOptionPane$1::class$ = nullptr;