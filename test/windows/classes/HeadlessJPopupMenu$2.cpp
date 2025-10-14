#include <HeadlessJPopupMenu$2.h>

#include <HeadlessJPopupMenu.h>
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

using $HeadlessJPopupMenu = ::HeadlessJPopupMenu;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJPopupMenu$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJPopupMenu$2::*)()>(&HeadlessJPopupMenu$2::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJPopupMenu$2_EnclosingMethodInfo_ = {
	"HeadlessJPopupMenu",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJPopupMenu$2_InnerClassesInfo_[] = {
	{"HeadlessJPopupMenu$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJPopupMenu$2_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJPopupMenu$2",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJPopupMenu$2_MethodInfo_,
	nullptr,
	&_HeadlessJPopupMenu$2_EnclosingMethodInfo_,
	_HeadlessJPopupMenu$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJPopupMenu"
};

$Object* allocate$HeadlessJPopupMenu$2($Class* clazz) {
	return $of($alloc(HeadlessJPopupMenu$2));
}

void HeadlessJPopupMenu$2::init$() {
	$Component::init$();
}

HeadlessJPopupMenu$2::HeadlessJPopupMenu$2() {
}

$Class* HeadlessJPopupMenu$2::load$($String* name, bool initialize) {
	$loadClass(HeadlessJPopupMenu$2, name, initialize, &_HeadlessJPopupMenu$2_ClassInfo_, allocate$HeadlessJPopupMenu$2);
	return class$;
}

$Class* HeadlessJPopupMenu$2::class$ = nullptr;