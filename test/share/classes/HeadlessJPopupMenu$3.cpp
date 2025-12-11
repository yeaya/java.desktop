#include <HeadlessJPopupMenu$3.h>

#include <HeadlessJPopupMenu.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _HeadlessJPopupMenu$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HeadlessJPopupMenu$3::*)()>(&HeadlessJPopupMenu$3::init$))},
	{}
};

$EnclosingMethodInfo _HeadlessJPopupMenu$3_EnclosingMethodInfo_ = {
	"HeadlessJPopupMenu",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJPopupMenu$3_InnerClassesInfo_[] = {
	{"HeadlessJPopupMenu$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJPopupMenu$3_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJPopupMenu$3",
	"java.awt.Component",
	nullptr,
	nullptr,
	_HeadlessJPopupMenu$3_MethodInfo_,
	nullptr,
	&_HeadlessJPopupMenu$3_EnclosingMethodInfo_,
	_HeadlessJPopupMenu$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJPopupMenu"
};

$Object* allocate$HeadlessJPopupMenu$3($Class* clazz) {
	return $of($alloc(HeadlessJPopupMenu$3));
}

void HeadlessJPopupMenu$3::init$() {
	$Component::init$();
}

HeadlessJPopupMenu$3::HeadlessJPopupMenu$3() {
}

$Class* HeadlessJPopupMenu$3::load$($String* name, bool initialize) {
	$loadClass(HeadlessJPopupMenu$3, name, initialize, &_HeadlessJPopupMenu$3_ClassInfo_, allocate$HeadlessJPopupMenu$3);
	return class$;
}

$Class* HeadlessJPopupMenu$3::class$ = nullptr;