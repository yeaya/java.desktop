#include <HeadlessJLabel$3.h>

#include <HeadlessJLabel.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJLabel$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJLabel$3::*)()>(&HeadlessJLabel$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJLabel$3_EnclosingMethodInfo_ = {
	"HeadlessJLabel",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJLabel$3_InnerClassesInfo_[] = {
	{"HeadlessJLabel$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJLabel$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJLabel$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJLabel$3_MethodInfo_,
	nullptr,
	&_HeadlessJLabel$3_EnclosingMethodInfo_,
	_HeadlessJLabel$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJLabel"
};

$Object* allocate$HeadlessJLabel$3($Class* clazz) {
	return $of($alloc(HeadlessJLabel$3));
}

void HeadlessJLabel$3::init$() {
	$Component::init$();
}

HeadlessJLabel$3::HeadlessJLabel$3() {
}

$Class* HeadlessJLabel$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJLabel$3, name, initialize, &_HeadlessJLabel$3_ClassInfo_, allocate$HeadlessJLabel$3);
	return class$;
}

$Class* HeadlessJLabel$3::class$ = nullptr;