#include <HeadlessJPopupMenu$1.h>

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

$MethodInfo _HeadlessJPopupMenu$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJPopupMenu$1::*)()>(&HeadlessJPopupMenu$1::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJPopupMenu$1_EnclosingMethodInfo_ = {
	"HeadlessJPopupMenu",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJPopupMenu$1_InnerClassesInfo_[] = {
	{"HeadlessJPopupMenu$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJPopupMenu$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJPopupMenu$1",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJPopupMenu$1_MethodInfo_,
	nullptr,
	&_HeadlessJPopupMenu$1_EnclosingMethodInfo_,
	_HeadlessJPopupMenu$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJPopupMenu"
};

$Object* allocate$HeadlessJPopupMenu$1($Class* clazz) {
	return $of($alloc(HeadlessJPopupMenu$1));
}

void HeadlessJPopupMenu$1::init$() {
	$Component::init$();
}

HeadlessJPopupMenu$1::HeadlessJPopupMenu$1() {
}

$Class* HeadlessJPopupMenu$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJPopupMenu$1, name, initialize, &_HeadlessJPopupMenu$1_ClassInfo_, allocate$HeadlessJPopupMenu$1);
	return class$;
}

$Class* HeadlessJPopupMenu$1::class$ = nullptr;