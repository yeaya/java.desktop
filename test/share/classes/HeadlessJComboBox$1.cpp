#include <HeadlessJComboBox$1.h>

#include <HeadlessJComboBox.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJComboBox$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJComboBox$1::*)()>(&HeadlessJComboBox$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJComboBox$1_EnclosingMethodInfo_ = {
	"HeadlessJComboBox",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJComboBox$1_InnerClassesInfo_[] = {
	{"HeadlessJComboBox$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJComboBox$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJComboBox$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJComboBox$1_MethodInfo_,
	nullptr,
	&_HeadlessJComboBox$1_EnclosingMethodInfo_,
	_HeadlessJComboBox$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJComboBox"
};

$Object* allocate$HeadlessJComboBox$1($Class* clazz) {
	return $of($alloc(HeadlessJComboBox$1));
}

void HeadlessJComboBox$1::init$() {
	$Component::init$();
}

HeadlessJComboBox$1::HeadlessJComboBox$1() {
}

$Class* HeadlessJComboBox$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJComboBox$1, name, initialize, &_HeadlessJComboBox$1_ClassInfo_, allocate$HeadlessJComboBox$1);
	return class$;
}

$Class* HeadlessJComboBox$1::class$ = nullptr;