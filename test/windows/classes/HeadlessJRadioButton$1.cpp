#include <HeadlessJRadioButton$1.h>

#include <HeadlessJRadioButton.h>
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

using $HeadlessJRadioButton = ::HeadlessJRadioButton;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJRadioButton$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJRadioButton$1::*)()>(&HeadlessJRadioButton$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJRadioButton$1_EnclosingMethodInfo_ = {
	"HeadlessJRadioButton",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJRadioButton$1_InnerClassesInfo_[] = {
	{"HeadlessJRadioButton$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJRadioButton$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJRadioButton$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJRadioButton$1_MethodInfo_,
	nullptr,
	&_HeadlessJRadioButton$1_EnclosingMethodInfo_,
	_HeadlessJRadioButton$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJRadioButton"
};

$Object* allocate$HeadlessJRadioButton$1($Class* clazz) {
	return $of($alloc(HeadlessJRadioButton$1));
}

void HeadlessJRadioButton$1::init$() {
	$Component::init$();
}

HeadlessJRadioButton$1::HeadlessJRadioButton$1() {
}

$Class* HeadlessJRadioButton$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJRadioButton$1, name, initialize, &_HeadlessJRadioButton$1_ClassInfo_, allocate$HeadlessJRadioButton$1);
	return class$;
}

$Class* HeadlessJRadioButton$1::class$ = nullptr;