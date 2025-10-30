#include <HeadlessJComboBox$3.h>

#include <HeadlessJComboBox.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJComboBox = ::HeadlessJComboBox;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJComboBox$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJComboBox$3::*)()>(&HeadlessJComboBox$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJComboBox$3_EnclosingMethodInfo_ = {
	"HeadlessJComboBox",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJComboBox$3_InnerClassesInfo_[] = {
	{"HeadlessJComboBox$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJComboBox$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJComboBox$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJComboBox$3_MethodInfo_,
	nullptr,
	&_HeadlessJComboBox$3_EnclosingMethodInfo_,
	_HeadlessJComboBox$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJComboBox"
};

$Object* allocate$HeadlessJComboBox$3($Class* clazz) {
	return $of($alloc(HeadlessJComboBox$3));
}

void HeadlessJComboBox$3::init$() {
	$Component::init$();
}

HeadlessJComboBox$3::HeadlessJComboBox$3() {
}

$Class* HeadlessJComboBox$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJComboBox$3, name, initialize, &_HeadlessJComboBox$3_ClassInfo_, allocate$HeadlessJComboBox$3);
	return class$;
}

$Class* HeadlessJComboBox$3::class$ = nullptr;