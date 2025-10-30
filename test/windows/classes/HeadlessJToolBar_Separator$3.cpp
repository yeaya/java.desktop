#include <HeadlessJToolBar_Separator$3.h>

#include <HeadlessJToolBar_Separator.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJToolBar_Separator = ::HeadlessJToolBar_Separator;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJToolBar_Separator$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJToolBar_Separator$3::*)()>(&HeadlessJToolBar_Separator$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJToolBar_Separator$3_EnclosingMethodInfo_ = {
	"HeadlessJToolBar_Separator",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJToolBar_Separator$3_InnerClassesInfo_[] = {
	{"HeadlessJToolBar_Separator$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJToolBar_Separator$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJToolBar_Separator$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJToolBar_Separator$3_MethodInfo_,
	nullptr,
	&_HeadlessJToolBar_Separator$3_EnclosingMethodInfo_,
	_HeadlessJToolBar_Separator$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJToolBar_Separator"
};

$Object* allocate$HeadlessJToolBar_Separator$3($Class* clazz) {
	return $of($alloc(HeadlessJToolBar_Separator$3));
}

void HeadlessJToolBar_Separator$3::init$() {
	$Component::init$();
}

HeadlessJToolBar_Separator$3::HeadlessJToolBar_Separator$3() {
}

$Class* HeadlessJToolBar_Separator$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJToolBar_Separator$3, name, initialize, &_HeadlessJToolBar_Separator$3_ClassInfo_, allocate$HeadlessJToolBar_Separator$3);
	return class$;
}

$Class* HeadlessJToolBar_Separator$3::class$ = nullptr;