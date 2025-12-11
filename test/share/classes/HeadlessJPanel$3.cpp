#include <HeadlessJPanel$3.h>

#include <HeadlessJPanel.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJPanel$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJPanel$3::*)()>(&HeadlessJPanel$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJPanel$3_EnclosingMethodInfo_ = {
	"HeadlessJPanel",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJPanel$3_InnerClassesInfo_[] = {
	{"HeadlessJPanel$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJPanel$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJPanel$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJPanel$3_MethodInfo_,
	nullptr,
	&_HeadlessJPanel$3_EnclosingMethodInfo_,
	_HeadlessJPanel$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJPanel"
};

$Object* allocate$HeadlessJPanel$3($Class* clazz) {
	return $of($alloc(HeadlessJPanel$3));
}

void HeadlessJPanel$3::init$() {
	$Component::init$();
}

HeadlessJPanel$3::HeadlessJPanel$3() {
}

$Class* HeadlessJPanel$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJPanel$3, name, initialize, &_HeadlessJPanel$3_ClassInfo_, allocate$HeadlessJPanel$3);
	return class$;
}

$Class* HeadlessJPanel$3::class$ = nullptr;