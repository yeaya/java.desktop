#include <HeadlessJFileChooser$1.h>

#include <HeadlessJFileChooser.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJFileChooser$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJFileChooser$1::*)()>(&HeadlessJFileChooser$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJFileChooser$1_EnclosingMethodInfo_ = {
	"HeadlessJFileChooser",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJFileChooser$1_InnerClassesInfo_[] = {
	{"HeadlessJFileChooser$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJFileChooser$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJFileChooser$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJFileChooser$1_MethodInfo_,
	nullptr,
	&_HeadlessJFileChooser$1_EnclosingMethodInfo_,
	_HeadlessJFileChooser$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJFileChooser"
};

$Object* allocate$HeadlessJFileChooser$1($Class* clazz) {
	return $of($alloc(HeadlessJFileChooser$1));
}

void HeadlessJFileChooser$1::init$() {
	$Component::init$();
}

HeadlessJFileChooser$1::HeadlessJFileChooser$1() {
}

$Class* HeadlessJFileChooser$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJFileChooser$1, name, initialize, &_HeadlessJFileChooser$1_ClassInfo_, allocate$HeadlessJFileChooser$1);
	return class$;
}

$Class* HeadlessJFileChooser$1::class$ = nullptr;