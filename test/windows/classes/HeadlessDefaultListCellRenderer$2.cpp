#include <HeadlessDefaultListCellRenderer$2.h>

#include <HeadlessDefaultListCellRenderer.h>
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

using $HeadlessDefaultListCellRenderer = ::HeadlessDefaultListCellRenderer;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessDefaultListCellRenderer$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessDefaultListCellRenderer$2::*)()>(&HeadlessDefaultListCellRenderer$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessDefaultListCellRenderer$2_EnclosingMethodInfo_ = {
	"HeadlessDefaultListCellRenderer",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessDefaultListCellRenderer$2_InnerClassesInfo_[] = {
	{"HeadlessDefaultListCellRenderer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessDefaultListCellRenderer$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessDefaultListCellRenderer$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessDefaultListCellRenderer$2_MethodInfo_,
	nullptr,
	&_HeadlessDefaultListCellRenderer$2_EnclosingMethodInfo_,
	_HeadlessDefaultListCellRenderer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessDefaultListCellRenderer"
};

$Object* allocate$HeadlessDefaultListCellRenderer$2($Class* clazz) {
	return $of($alloc(HeadlessDefaultListCellRenderer$2));
}

void HeadlessDefaultListCellRenderer$2::init$() {
	$Component::init$();
}

HeadlessDefaultListCellRenderer$2::HeadlessDefaultListCellRenderer$2() {
}

$Class* HeadlessDefaultListCellRenderer$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessDefaultListCellRenderer$2, name, initialize, &_HeadlessDefaultListCellRenderer$2_ClassInfo_, allocate$HeadlessDefaultListCellRenderer$2);
	return class$;
}

$Class* HeadlessDefaultListCellRenderer$2::class$ = nullptr;