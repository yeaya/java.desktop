#include <HeadlessJComponent$1.h>

#include <HeadlessJComponent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $HeadlessJComponent = ::HeadlessJComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

$MethodInfo _HeadlessJComponent$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJComponent$1::*)()>(&HeadlessJComponent$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJComponent$1_EnclosingMethodInfo_ = {
	"HeadlessJComponent",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJComponent$1_InnerClassesInfo_[] = {
	{"HeadlessJComponent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJComponent$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJComponent$1",
	"javax.swing.JComponent",
	nullptr,
	nullptr,
	_HeadlessJComponent$1_MethodInfo_,
	nullptr,
	&_HeadlessJComponent$1_EnclosingMethodInfo_,
	_HeadlessJComponent$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJComponent"
};

$Object* allocate$HeadlessJComponent$1($Class* clazz) {
	return $of($alloc(HeadlessJComponent$1));
}

void HeadlessJComponent$1::init$() {
	$JComponent::init$();
}

HeadlessJComponent$1::HeadlessJComponent$1() {
}

$Class* HeadlessJComponent$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJComponent$1, name, initialize, &_HeadlessJComponent$1_ClassInfo_, allocate$HeadlessJComponent$1);
	return class$;
}

$Class* HeadlessJComponent$1::class$ = nullptr;