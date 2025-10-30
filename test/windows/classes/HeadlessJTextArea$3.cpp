#include <HeadlessJTextArea$3.h>

#include <HeadlessJTextArea.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJTextArea = ::HeadlessJTextArea;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJTextArea$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTextArea$3::*)()>(&HeadlessJTextArea$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJTextArea$3_EnclosingMethodInfo_ = {
	"HeadlessJTextArea",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTextArea$3_InnerClassesInfo_[] = {
	{"HeadlessJTextArea$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTextArea$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTextArea$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJTextArea$3_MethodInfo_,
	nullptr,
	&_HeadlessJTextArea$3_EnclosingMethodInfo_,
	_HeadlessJTextArea$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTextArea"
};

$Object* allocate$HeadlessJTextArea$3($Class* clazz) {
	return $of($alloc(HeadlessJTextArea$3));
}

void HeadlessJTextArea$3::init$() {
	$Component::init$();
}

HeadlessJTextArea$3::HeadlessJTextArea$3() {
}

$Class* HeadlessJTextArea$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTextArea$3, name, initialize, &_HeadlessJTextArea$3_ClassInfo_, allocate$HeadlessJTextArea$3);
	return class$;
}

$Class* HeadlessJTextArea$3::class$ = nullptr;