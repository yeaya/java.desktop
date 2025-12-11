#include <HeadlessJComboBox$2.h>

#include <HeadlessJComboBox.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJComboBox$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJComboBox$2::*)()>(&HeadlessJComboBox$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJComboBox$2_EnclosingMethodInfo_ = {
	"HeadlessJComboBox",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJComboBox$2_InnerClassesInfo_[] = {
	{"HeadlessJComboBox$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJComboBox$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJComboBox$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJComboBox$2_MethodInfo_,
	nullptr,
	&_HeadlessJComboBox$2_EnclosingMethodInfo_,
	_HeadlessJComboBox$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJComboBox"
};

$Object* allocate$HeadlessJComboBox$2($Class* clazz) {
	return $of($alloc(HeadlessJComboBox$2));
}

void HeadlessJComboBox$2::init$() {
	$Component::init$();
}

HeadlessJComboBox$2::HeadlessJComboBox$2() {
}

$Class* HeadlessJComboBox$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJComboBox$2, name, initialize, &_HeadlessJComboBox$2_ClassInfo_, allocate$HeadlessJComboBox$2);
	return class$;
}

$Class* HeadlessJComboBox$2::class$ = nullptr;