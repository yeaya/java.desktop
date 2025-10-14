#include <HeadlessJLabel$1.h>

#include <HeadlessJLabel.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $HeadlessJLabel = ::HeadlessJLabel;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJLabel$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJLabel$1::*)()>(&HeadlessJLabel$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJLabel$1_EnclosingMethodInfo_ = {
	"HeadlessJLabel",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJLabel$1_InnerClassesInfo_[] = {
	{"HeadlessJLabel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJLabel$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJLabel$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJLabel$1_MethodInfo_,
	nullptr,
	&_HeadlessJLabel$1_EnclosingMethodInfo_,
	_HeadlessJLabel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJLabel"
};

$Object* allocate$HeadlessJLabel$1($Class* clazz) {
	return $of($alloc(HeadlessJLabel$1));
}

void HeadlessJLabel$1::init$() {
	$Component::init$();
}

HeadlessJLabel$1::HeadlessJLabel$1() {
}

$Class* HeadlessJLabel$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJLabel$1, name, initialize, &_HeadlessJLabel$1_ClassInfo_, allocate$HeadlessJLabel$1);
	return class$;
}

$Class* HeadlessJLabel$1::class$ = nullptr;