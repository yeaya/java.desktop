#include <HeadlessJLabel$2.h>

#include <HeadlessJLabel.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJLabel = ::HeadlessJLabel;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJLabel$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJLabel$2::*)()>(&HeadlessJLabel$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJLabel$2_EnclosingMethodInfo_ = {
	"HeadlessJLabel",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJLabel$2_InnerClassesInfo_[] = {
	{"HeadlessJLabel$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJLabel$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJLabel$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJLabel$2_MethodInfo_,
	nullptr,
	&_HeadlessJLabel$2_EnclosingMethodInfo_,
	_HeadlessJLabel$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJLabel"
};

$Object* allocate$HeadlessJLabel$2($Class* clazz) {
	return $of($alloc(HeadlessJLabel$2));
}

void HeadlessJLabel$2::init$() {
	$Component::init$();
}

HeadlessJLabel$2::HeadlessJLabel$2() {
}

$Class* HeadlessJLabel$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJLabel$2, name, initialize, &_HeadlessJLabel$2_ClassInfo_, allocate$HeadlessJLabel$2);
	return class$;
}

$Class* HeadlessJLabel$2::class$ = nullptr;