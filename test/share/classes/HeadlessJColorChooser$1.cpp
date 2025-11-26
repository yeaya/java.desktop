#include <HeadlessJColorChooser$1.h>

#include <HeadlessJColorChooser.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJColorChooser = ::HeadlessJColorChooser;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJColorChooser$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJColorChooser$1::*)()>(&HeadlessJColorChooser$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJColorChooser$1_EnclosingMethodInfo_ = {
	"HeadlessJColorChooser",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJColorChooser$1_InnerClassesInfo_[] = {
	{"HeadlessJColorChooser$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJColorChooser$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJColorChooser$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJColorChooser$1_MethodInfo_,
	nullptr,
	&_HeadlessJColorChooser$1_EnclosingMethodInfo_,
	_HeadlessJColorChooser$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJColorChooser"
};

$Object* allocate$HeadlessJColorChooser$1($Class* clazz) {
	return $of($alloc(HeadlessJColorChooser$1));
}

void HeadlessJColorChooser$1::init$() {
	$Component::init$();
}

HeadlessJColorChooser$1::HeadlessJColorChooser$1() {
}

$Class* HeadlessJColorChooser$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJColorChooser$1, name, initialize, &_HeadlessJColorChooser$1_ClassInfo_, allocate$HeadlessJColorChooser$1);
	return class$;
}

$Class* HeadlessJColorChooser$1::class$ = nullptr;