#include <HeadlessJTextArea$1.h>

#include <HeadlessJTextArea.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJTextArea$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTextArea$1::*)()>(&HeadlessJTextArea$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJTextArea$1_EnclosingMethodInfo_ = {
	"HeadlessJTextArea",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTextArea$1_InnerClassesInfo_[] = {
	{"HeadlessJTextArea$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTextArea$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTextArea$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJTextArea$1_MethodInfo_,
	nullptr,
	&_HeadlessJTextArea$1_EnclosingMethodInfo_,
	_HeadlessJTextArea$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTextArea"
};

$Object* allocate$HeadlessJTextArea$1($Class* clazz) {
	return $of($alloc(HeadlessJTextArea$1));
}

void HeadlessJTextArea$1::init$() {
	$Component::init$();
}

HeadlessJTextArea$1::HeadlessJTextArea$1() {
}

$Class* HeadlessJTextArea$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTextArea$1, name, initialize, &_HeadlessJTextArea$1_ClassInfo_, allocate$HeadlessJTextArea$1);
	return class$;
}

$Class* HeadlessJTextArea$1::class$ = nullptr;