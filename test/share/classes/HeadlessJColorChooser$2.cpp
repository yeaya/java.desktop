#include <HeadlessJColorChooser$2.h>

#include <HeadlessJColorChooser.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJColorChooser$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJColorChooser$2::*)()>(&HeadlessJColorChooser$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJColorChooser$2_EnclosingMethodInfo_ = {
	"HeadlessJColorChooser",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJColorChooser$2_InnerClassesInfo_[] = {
	{"HeadlessJColorChooser$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJColorChooser$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJColorChooser$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJColorChooser$2_MethodInfo_,
	nullptr,
	&_HeadlessJColorChooser$2_EnclosingMethodInfo_,
	_HeadlessJColorChooser$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJColorChooser"
};

$Object* allocate$HeadlessJColorChooser$2($Class* clazz) {
	return $of($alloc(HeadlessJColorChooser$2));
}

void HeadlessJColorChooser$2::init$() {
	$Component::init$();
}

HeadlessJColorChooser$2::HeadlessJColorChooser$2() {
}

$Class* HeadlessJColorChooser$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJColorChooser$2, name, initialize, &_HeadlessJColorChooser$2_ClassInfo_, allocate$HeadlessJColorChooser$2);
	return class$;
}

$Class* HeadlessJColorChooser$2::class$ = nullptr;