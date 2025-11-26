#include <HeadlessJFileChooser$2.h>

#include <HeadlessJFileChooser.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJFileChooser = ::HeadlessJFileChooser;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJFileChooser$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJFileChooser$2::*)()>(&HeadlessJFileChooser$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJFileChooser$2_EnclosingMethodInfo_ = {
	"HeadlessJFileChooser",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJFileChooser$2_InnerClassesInfo_[] = {
	{"HeadlessJFileChooser$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJFileChooser$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJFileChooser$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJFileChooser$2_MethodInfo_,
	nullptr,
	&_HeadlessJFileChooser$2_EnclosingMethodInfo_,
	_HeadlessJFileChooser$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJFileChooser"
};

$Object* allocate$HeadlessJFileChooser$2($Class* clazz) {
	return $of($alloc(HeadlessJFileChooser$2));
}

void HeadlessJFileChooser$2::init$() {
	$Component::init$();
}

HeadlessJFileChooser$2::HeadlessJFileChooser$2() {
}

$Class* HeadlessJFileChooser$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJFileChooser$2, name, initialize, &_HeadlessJFileChooser$2_ClassInfo_, allocate$HeadlessJFileChooser$2);
	return class$;
}

$Class* HeadlessJFileChooser$2::class$ = nullptr;