#include <HeadlessDefaultListCellRenderer$1.h>

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

$MethodInfo _HeadlessDefaultListCellRenderer$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessDefaultListCellRenderer$1::*)()>(&HeadlessDefaultListCellRenderer$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessDefaultListCellRenderer$1_EnclosingMethodInfo_ = {
	"HeadlessDefaultListCellRenderer",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessDefaultListCellRenderer$1_InnerClassesInfo_[] = {
	{"HeadlessDefaultListCellRenderer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessDefaultListCellRenderer$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessDefaultListCellRenderer$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessDefaultListCellRenderer$1_MethodInfo_,
	nullptr,
	&_HeadlessDefaultListCellRenderer$1_EnclosingMethodInfo_,
	_HeadlessDefaultListCellRenderer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessDefaultListCellRenderer"
};

$Object* allocate$HeadlessDefaultListCellRenderer$1($Class* clazz) {
	return $of($alloc(HeadlessDefaultListCellRenderer$1));
}

void HeadlessDefaultListCellRenderer$1::init$() {
	$Component::init$();
}

HeadlessDefaultListCellRenderer$1::HeadlessDefaultListCellRenderer$1() {
}

$Class* HeadlessDefaultListCellRenderer$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessDefaultListCellRenderer$1, name, initialize, &_HeadlessDefaultListCellRenderer$1_ClassInfo_, allocate$HeadlessDefaultListCellRenderer$1);
	return class$;
}

$Class* HeadlessDefaultListCellRenderer$1::class$ = nullptr;