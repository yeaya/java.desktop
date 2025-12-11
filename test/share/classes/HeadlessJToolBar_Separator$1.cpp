#include <HeadlessJToolBar_Separator$1.h>

#include <HeadlessJToolBar_Separator.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJToolBar_Separator$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJToolBar_Separator$1::*)()>(&HeadlessJToolBar_Separator$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJToolBar_Separator$1_EnclosingMethodInfo_ = {
	"HeadlessJToolBar_Separator",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJToolBar_Separator$1_InnerClassesInfo_[] = {
	{"HeadlessJToolBar_Separator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJToolBar_Separator$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJToolBar_Separator$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJToolBar_Separator$1_MethodInfo_,
	nullptr,
	&_HeadlessJToolBar_Separator$1_EnclosingMethodInfo_,
	_HeadlessJToolBar_Separator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJToolBar_Separator"
};

$Object* allocate$HeadlessJToolBar_Separator$1($Class* clazz) {
	return $of($alloc(HeadlessJToolBar_Separator$1));
}

void HeadlessJToolBar_Separator$1::init$() {
	$Component::init$();
}

HeadlessJToolBar_Separator$1::HeadlessJToolBar_Separator$1() {
}

$Class* HeadlessJToolBar_Separator$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJToolBar_Separator$1, name, initialize, &_HeadlessJToolBar_Separator$1_ClassInfo_, allocate$HeadlessJToolBar_Separator$1);
	return class$;
}

$Class* HeadlessJToolBar_Separator$1::class$ = nullptr;