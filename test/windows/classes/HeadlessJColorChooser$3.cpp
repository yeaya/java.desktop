#include <HeadlessJColorChooser$3.h>

#include <HeadlessJColorChooser.h>
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

using $HeadlessJColorChooser = ::HeadlessJColorChooser;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJColorChooser$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJColorChooser$3::*)()>(&HeadlessJColorChooser$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJColorChooser$3_EnclosingMethodInfo_ = {
	"HeadlessJColorChooser",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJColorChooser$3_InnerClassesInfo_[] = {
	{"HeadlessJColorChooser$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJColorChooser$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJColorChooser$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJColorChooser$3_MethodInfo_,
	nullptr,
	&_HeadlessJColorChooser$3_EnclosingMethodInfo_,
	_HeadlessJColorChooser$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJColorChooser"
};

$Object* allocate$HeadlessJColorChooser$3($Class* clazz) {
	return $of($alloc(HeadlessJColorChooser$3));
}

void HeadlessJColorChooser$3::init$() {
	$Component::init$();
}

HeadlessJColorChooser$3::HeadlessJColorChooser$3() {
}

$Class* HeadlessJColorChooser$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJColorChooser$3, name, initialize, &_HeadlessJColorChooser$3_ClassInfo_, allocate$HeadlessJColorChooser$3);
	return class$;
}

$Class* HeadlessJColorChooser$3::class$ = nullptr;