#include <HeadlessJTable$4.h>

#include <HeadlessJTable.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJTable = ::HeadlessJTable;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJTable$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJTable$4::*)()>(&HeadlessJTable$4::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJTable$4_EnclosingMethodInfo_ = {
	"HeadlessJTable",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJTable$4_InnerClassesInfo_[] = {
	{"HeadlessJTable$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJTable$4_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJTable$4",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJTable$4_MethodInfo_,
	nullptr,
	&_HeadlessJTable$4_EnclosingMethodInfo_,
	_HeadlessJTable$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJTable"
};

$Object* allocate$HeadlessJTable$4($Class* clazz) {
	return $of($alloc(HeadlessJTable$4));
}

void HeadlessJTable$4::init$() {
	$Component::init$();
}

HeadlessJTable$4::HeadlessJTable$4() {
}

$Class* HeadlessJTable$4::load$($String* name, bool initialize) {
	$loadClass(HeadlessJTable$4, name, initialize, &_HeadlessJTable$4_ClassInfo_, allocate$HeadlessJTable$4);
	return class$;
}

$Class* HeadlessJTable$4::class$ = nullptr;