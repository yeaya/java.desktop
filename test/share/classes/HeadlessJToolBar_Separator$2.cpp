#include <HeadlessJToolBar_Separator$2.h>

#include <HeadlessJToolBar_Separator.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJToolBar_Separator$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJToolBar_Separator$2::*)()>(&HeadlessJToolBar_Separator$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJToolBar_Separator$2_EnclosingMethodInfo_ = {
	"HeadlessJToolBar_Separator",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJToolBar_Separator$2_InnerClassesInfo_[] = {
	{"HeadlessJToolBar_Separator$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJToolBar_Separator$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJToolBar_Separator$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJToolBar_Separator$2_MethodInfo_,
	nullptr,
	&_HeadlessJToolBar_Separator$2_EnclosingMethodInfo_,
	_HeadlessJToolBar_Separator$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJToolBar_Separator"
};

$Object* allocate$HeadlessJToolBar_Separator$2($Class* clazz) {
	return $of($alloc(HeadlessJToolBar_Separator$2));
}

void HeadlessJToolBar_Separator$2::init$() {
	$Component::init$();
}

HeadlessJToolBar_Separator$2::HeadlessJToolBar_Separator$2() {
}

$Class* HeadlessJToolBar_Separator$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJToolBar_Separator$2, name, initialize, &_HeadlessJToolBar_Separator$2_ClassInfo_, allocate$HeadlessJToolBar_Separator$2);
	return class$;
}

$Class* HeadlessJToolBar_Separator$2::class$ = nullptr;