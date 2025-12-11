#include <HeadlessDefaultListCellRenderer_UIResource$3.h>

#include <HeadlessDefaultListCellRenderer_UIResource.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessDefaultListCellRenderer_UIResource$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessDefaultListCellRenderer_UIResource$3::*)()>(&HeadlessDefaultListCellRenderer_UIResource$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessDefaultListCellRenderer_UIResource$3_EnclosingMethodInfo_ = {
	"HeadlessDefaultListCellRenderer_UIResource",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessDefaultListCellRenderer_UIResource$3_InnerClassesInfo_[] = {
	{"HeadlessDefaultListCellRenderer_UIResource$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessDefaultListCellRenderer_UIResource$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessDefaultListCellRenderer_UIResource$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessDefaultListCellRenderer_UIResource$3_MethodInfo_,
	nullptr,
	&_HeadlessDefaultListCellRenderer_UIResource$3_EnclosingMethodInfo_,
	_HeadlessDefaultListCellRenderer_UIResource$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessDefaultListCellRenderer_UIResource"
};

$Object* allocate$HeadlessDefaultListCellRenderer_UIResource$3($Class* clazz) {
	return $of($alloc(HeadlessDefaultListCellRenderer_UIResource$3));
}

void HeadlessDefaultListCellRenderer_UIResource$3::init$() {
	$Component::init$();
}

HeadlessDefaultListCellRenderer_UIResource$3::HeadlessDefaultListCellRenderer_UIResource$3() {
}

$Class* HeadlessDefaultListCellRenderer_UIResource$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessDefaultListCellRenderer_UIResource$3, name, initialize, &_HeadlessDefaultListCellRenderer_UIResource$3_ClassInfo_, allocate$HeadlessDefaultListCellRenderer_UIResource$3);
	return class$;
}

$Class* HeadlessDefaultListCellRenderer_UIResource$3::class$ = nullptr;