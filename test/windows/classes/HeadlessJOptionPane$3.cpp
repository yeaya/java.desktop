#include <HeadlessJOptionPane$3.h>

#include <HeadlessJOptionPane.h>
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

using $HeadlessJOptionPane = ::HeadlessJOptionPane;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJOptionPane$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJOptionPane$3::*)()>(&HeadlessJOptionPane$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJOptionPane$3_EnclosingMethodInfo_ = {
	"HeadlessJOptionPane",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJOptionPane$3_InnerClassesInfo_[] = {
	{"HeadlessJOptionPane$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJOptionPane$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJOptionPane$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJOptionPane$3_MethodInfo_,
	nullptr,
	&_HeadlessJOptionPane$3_EnclosingMethodInfo_,
	_HeadlessJOptionPane$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJOptionPane"
};

$Object* allocate$HeadlessJOptionPane$3($Class* clazz) {
	return $of($alloc(HeadlessJOptionPane$3));
}

void HeadlessJOptionPane$3::init$() {
	$Component::init$();
}

HeadlessJOptionPane$3::HeadlessJOptionPane$3() {
}

$Class* HeadlessJOptionPane$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJOptionPane$3, name, initialize, &_HeadlessJOptionPane$3_ClassInfo_, allocate$HeadlessJOptionPane$3);
	return class$;
}

$Class* HeadlessJOptionPane$3::class$ = nullptr;