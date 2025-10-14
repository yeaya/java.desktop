#include <HeadlessJPopupMenu_Separator$3.h>

#include <HeadlessJPopupMenu_Separator.h>
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

using $HeadlessJPopupMenu_Separator = ::HeadlessJPopupMenu_Separator;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJPopupMenu_Separator$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJPopupMenu_Separator$3::*)()>(&HeadlessJPopupMenu_Separator$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJPopupMenu_Separator$3_EnclosingMethodInfo_ = {
	"HeadlessJPopupMenu_Separator",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJPopupMenu_Separator$3_InnerClassesInfo_[] = {
	{"HeadlessJPopupMenu_Separator$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJPopupMenu_Separator$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJPopupMenu_Separator$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJPopupMenu_Separator$3_MethodInfo_,
	nullptr,
	&_HeadlessJPopupMenu_Separator$3_EnclosingMethodInfo_,
	_HeadlessJPopupMenu_Separator$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJPopupMenu_Separator"
};

$Object* allocate$HeadlessJPopupMenu_Separator$3($Class* clazz) {
	return $of($alloc(HeadlessJPopupMenu_Separator$3));
}

void HeadlessJPopupMenu_Separator$3::init$() {
	$Component::init$();
}

HeadlessJPopupMenu_Separator$3::HeadlessJPopupMenu_Separator$3() {
}

$Class* HeadlessJPopupMenu_Separator$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJPopupMenu_Separator$3, name, initialize, &_HeadlessJPopupMenu_Separator$3_ClassInfo_, allocate$HeadlessJPopupMenu_Separator$3);
	return class$;
}

$Class* HeadlessJPopupMenu_Separator$3::class$ = nullptr;