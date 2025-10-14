#include <HeadlessJTextArea$2.h>

#include <HeadlessJTextArea.h>
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

using $HeadlessJTextArea = ::HeadlessJTextArea;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJTextArea$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTextArea$2::*)()>(&HeadlessJTextArea$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJTextArea$2_EnclosingMethodInfo_ = {
	"HeadlessJTextArea",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTextArea$2_InnerClassesInfo_[] = {
	{"HeadlessJTextArea$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTextArea$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTextArea$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJTextArea$2_MethodInfo_,
	nullptr,
	&_HeadlessJTextArea$2_EnclosingMethodInfo_,
	_HeadlessJTextArea$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTextArea"
};

$Object* allocate$HeadlessJTextArea$2($Class* clazz) {
	return $of($alloc(HeadlessJTextArea$2));
}

void HeadlessJTextArea$2::init$() {
	$Component::init$();
}

HeadlessJTextArea$2::HeadlessJTextArea$2() {
}

$Class* HeadlessJTextArea$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTextArea$2, name, initialize, &_HeadlessJTextArea$2_ClassInfo_, allocate$HeadlessJTextArea$2);
	return class$;
}

$Class* HeadlessJTextArea$2::class$ = nullptr;