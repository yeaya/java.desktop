#include <bug4962534$6.h>

#include <bug4962534.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug4962534 = ::bug4962534;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _bug4962534$6_FieldInfo_[] = {
	{"this$0", "Lbug4962534;", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$6, this$0)},
	{}
};

$MethodInfo _bug4962534$6_MethodInfo_[] = {
	{"<init>", "(Lbug4962534;)V", nullptr, 0, $method(static_cast<void(bug4962534$6::*)($bug4962534*)>(&bug4962534$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4962534$6_EnclosingMethodInfo_ = {
	"bug4962534",
	"setNewFrameLocationEDT",
	"()V"
};

$InnerClassInfo _bug4962534$6_InnerClassesInfo_[] = {
	{"bug4962534$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4962534$6_ClassInfo_ = {
	$ACC_SUPER,
	"bug4962534$6",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4962534$6_FieldInfo_,
	_bug4962534$6_MethodInfo_,
	nullptr,
	&_bug4962534$6_EnclosingMethodInfo_,
	_bug4962534$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4962534"
};

$Object* allocate$bug4962534$6($Class* clazz) {
	return $of($alloc(bug4962534$6));
}

void bug4962534$6::init$($bug4962534* this$0) {
	$set(this, this$0, this$0);
}

void bug4962534$6::run() {
	$init($bug4962534);
	int32_t var$1 = $nc($($nc($bug4962534::frame)->getLocationOnScreen()))->x;
	int32_t var$0 = var$1 + $nc($bug4962534::frame)->getWidth() / 2;
	int32_t var$2 = $nc($($nc($bug4962534::frame)->getLocationOnScreen()))->y;
	$set(this->this$0, newFrameLocation, $new($Point, var$0, var$2 + $nc(this->this$0->titleComponent)->getHeight() / 2));
}

bug4962534$6::bug4962534$6() {
}

$Class* bug4962534$6::load$($String* name, bool initialize) {
	$loadClass(bug4962534$6, name, initialize, &_bug4962534$6_ClassInfo_, allocate$bug4962534$6);
	return class$;
}

$Class* bug4962534$6::class$ = nullptr;