#include <bug4962534$7.h>

#include <bug4962534.h>
#include <java/awt/Component.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug4962534 = ::bug4962534;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _bug4962534$7_FieldInfo_[] = {
	{"this$0", "Lbug4962534;", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$7, this$0)},
	{"val$result", "[I", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$7, val$result)},
	{}
};

$MethodInfo _bug4962534$7_MethodInfo_[] = {
	{"<init>", "(Lbug4962534;[I)V", "()V", 0, $method(static_cast<void(bug4962534$7::*)($bug4962534*,$ints*)>(&bug4962534$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4962534$7_EnclosingMethodInfo_ = {
	"bug4962534",
	"getJFrameWidthEDT",
	"()I"
};

$InnerClassInfo _bug4962534$7_InnerClassesInfo_[] = {
	{"bug4962534$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4962534$7_ClassInfo_ = {
	$ACC_SUPER,
	"bug4962534$7",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4962534$7_FieldInfo_,
	_bug4962534$7_MethodInfo_,
	nullptr,
	&_bug4962534$7_EnclosingMethodInfo_,
	_bug4962534$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4962534"
};

$Object* allocate$bug4962534$7($Class* clazz) {
	return $of($alloc(bug4962534$7));
}

void bug4962534$7::init$($bug4962534* this$0, $ints* val$result) {
	$set(this, this$0, this$0);
	$set(this, val$result, val$result);
}

void bug4962534$7::run() {
	$init($bug4962534);
	$nc(this->val$result)->set(0, $nc($bug4962534::frame)->getWidth());
}

bug4962534$7::bug4962534$7() {
}

$Class* bug4962534$7::load$($String* name, bool initialize) {
	$loadClass(bug4962534$7, name, initialize, &_bug4962534$7_ClassInfo_, allocate$bug4962534$7);
	return class$;
}

$Class* bug4962534$7::class$ = nullptr;