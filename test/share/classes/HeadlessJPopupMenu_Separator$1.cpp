#include <HeadlessJPopupMenu_Separator$1.h>

#include <HeadlessJPopupMenu_Separator.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $HeadlessJPopupMenu_Separator = ::HeadlessJPopupMenu_Separator;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJPopupMenu_Separator$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJPopupMenu_Separator$1::*)()>(&HeadlessJPopupMenu_Separator$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJPopupMenu_Separator$1_EnclosingMethodInfo_ = {
	"HeadlessJPopupMenu_Separator",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJPopupMenu_Separator$1_InnerClassesInfo_[] = {
	{"HeadlessJPopupMenu_Separator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJPopupMenu_Separator$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJPopupMenu_Separator$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJPopupMenu_Separator$1_MethodInfo_,
	nullptr,
	&_HeadlessJPopupMenu_Separator$1_EnclosingMethodInfo_,
	_HeadlessJPopupMenu_Separator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJPopupMenu_Separator"
};

$Object* allocate$HeadlessJPopupMenu_Separator$1($Class* clazz) {
	return $of($alloc(HeadlessJPopupMenu_Separator$1));
}

void HeadlessJPopupMenu_Separator$1::init$() {
	$Component::init$();
}

HeadlessJPopupMenu_Separator$1::HeadlessJPopupMenu_Separator$1() {
}

$Class* HeadlessJPopupMenu_Separator$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJPopupMenu_Separator$1, name, initialize, &_HeadlessJPopupMenu_Separator$1_ClassInfo_, allocate$HeadlessJPopupMenu_Separator$1);
	return class$;
}

$Class* HeadlessJPopupMenu_Separator$1::class$ = nullptr;