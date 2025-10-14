#include <HeadlessDefaultListCellRenderer_UIResource$2.h>

#include <HeadlessDefaultListCellRenderer_UIResource.h>
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

using $HeadlessDefaultListCellRenderer_UIResource = ::HeadlessDefaultListCellRenderer_UIResource;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessDefaultListCellRenderer_UIResource$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessDefaultListCellRenderer_UIResource$2::*)()>(&HeadlessDefaultListCellRenderer_UIResource$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessDefaultListCellRenderer_UIResource$2_EnclosingMethodInfo_ = {
	"HeadlessDefaultListCellRenderer_UIResource",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessDefaultListCellRenderer_UIResource$2_InnerClassesInfo_[] = {
	{"HeadlessDefaultListCellRenderer_UIResource$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessDefaultListCellRenderer_UIResource$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessDefaultListCellRenderer_UIResource$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessDefaultListCellRenderer_UIResource$2_MethodInfo_,
	nullptr,
	&_HeadlessDefaultListCellRenderer_UIResource$2_EnclosingMethodInfo_,
	_HeadlessDefaultListCellRenderer_UIResource$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessDefaultListCellRenderer_UIResource"
};

$Object* allocate$HeadlessDefaultListCellRenderer_UIResource$2($Class* clazz) {
	return $of($alloc(HeadlessDefaultListCellRenderer_UIResource$2));
}

void HeadlessDefaultListCellRenderer_UIResource$2::init$() {
	$Component::init$();
}

HeadlessDefaultListCellRenderer_UIResource$2::HeadlessDefaultListCellRenderer_UIResource$2() {
}

$Class* HeadlessDefaultListCellRenderer_UIResource$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessDefaultListCellRenderer_UIResource$2, name, initialize, &_HeadlessDefaultListCellRenderer_UIResource$2_ClassInfo_, allocate$HeadlessDefaultListCellRenderer_UIResource$2);
	return class$;
}

$Class* HeadlessDefaultListCellRenderer_UIResource$2::class$ = nullptr;