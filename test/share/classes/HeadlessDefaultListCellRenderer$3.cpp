#include <HeadlessDefaultListCellRenderer$3.h>

#include <HeadlessDefaultListCellRenderer.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessDefaultListCellRenderer$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessDefaultListCellRenderer$3::*)()>(&HeadlessDefaultListCellRenderer$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessDefaultListCellRenderer$3_EnclosingMethodInfo_ = {
	"HeadlessDefaultListCellRenderer",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessDefaultListCellRenderer$3_InnerClassesInfo_[] = {
	{"HeadlessDefaultListCellRenderer$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessDefaultListCellRenderer$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessDefaultListCellRenderer$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessDefaultListCellRenderer$3_MethodInfo_,
	nullptr,
	&_HeadlessDefaultListCellRenderer$3_EnclosingMethodInfo_,
	_HeadlessDefaultListCellRenderer$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessDefaultListCellRenderer"
};

$Object* allocate$HeadlessDefaultListCellRenderer$3($Class* clazz) {
	return $of($alloc(HeadlessDefaultListCellRenderer$3));
}

void HeadlessDefaultListCellRenderer$3::init$() {
	$Component::init$();
}

HeadlessDefaultListCellRenderer$3::HeadlessDefaultListCellRenderer$3() {
}

$Class* HeadlessDefaultListCellRenderer$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessDefaultListCellRenderer$3, name, initialize, &_HeadlessDefaultListCellRenderer$3_ClassInfo_, allocate$HeadlessDefaultListCellRenderer$3);
	return class$;
}

$Class* HeadlessDefaultListCellRenderer$3::class$ = nullptr;