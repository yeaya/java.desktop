#include <HeadlessJTable$3.h>

#include <HeadlessJTable.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJTable = ::HeadlessJTable;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJTable$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTable$3::*)()>(&HeadlessJTable$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJTable$3_EnclosingMethodInfo_ = {
	"HeadlessJTable",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTable$3_InnerClassesInfo_[] = {
	{"HeadlessJTable$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTable$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTable$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJTable$3_MethodInfo_,
	nullptr,
	&_HeadlessJTable$3_EnclosingMethodInfo_,
	_HeadlessJTable$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTable"
};

$Object* allocate$HeadlessJTable$3($Class* clazz) {
	return $of($alloc(HeadlessJTable$3));
}

void HeadlessJTable$3::init$() {
	$Component::init$();
}

HeadlessJTable$3::HeadlessJTable$3() {
}

$Class* HeadlessJTable$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTable$3, name, initialize, &_HeadlessJTable$3_ClassInfo_, allocate$HeadlessJTable$3);
	return class$;
}

$Class* HeadlessJTable$3::class$ = nullptr;