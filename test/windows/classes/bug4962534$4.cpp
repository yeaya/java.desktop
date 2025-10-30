#include <bug4962534$4.h>

#include <bug4962534.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
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

$FieldInfo _bug4962534$4_FieldInfo_[] = {
	{"this$0", "Lbug4962534;", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$4, this$0)},
	{}
};

$MethodInfo _bug4962534$4_MethodInfo_[] = {
	{"<init>", "(Lbug4962534;)V", nullptr, 0, $method(static_cast<void(bug4962534$4::*)($bug4962534*)>(&bug4962534$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4962534$4_EnclosingMethodInfo_ = {
	"bug4962534",
	"setFramePosEDT",
	"()V"
};

$InnerClassInfo _bug4962534$4_InnerClassesInfo_[] = {
	{"bug4962534$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4962534$4_ClassInfo_ = {
	$ACC_SUPER,
	"bug4962534$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4962534$4_FieldInfo_,
	_bug4962534$4_MethodInfo_,
	nullptr,
	&_bug4962534$4_EnclosingMethodInfo_,
	_bug4962534$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4962534"
};

$Object* allocate$bug4962534$4($Class* clazz) {
	return $of($alloc(bug4962534$4));
}

void bug4962534$4::init$($bug4962534* this$0) {
	$set(this, this$0, this$0);
}

void bug4962534$4::run() {
	$init($bug4962534);
	$set(this->this$0, framePosition, $nc($bug4962534::frame)->getLocationOnScreen());
}

bug4962534$4::bug4962534$4() {
}

$Class* bug4962534$4::load$($String* name, bool initialize) {
	$loadClass(bug4962534$4, name, initialize, &_bug4962534$4_ClassInfo_, allocate$bug4962534$4);
	return class$;
}

$Class* bug4962534$4::class$ = nullptr;