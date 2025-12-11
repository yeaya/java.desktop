#include <bug6691503$4.h>

#include <bug6691503.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug6691503 = ::bug6691503;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _bug6691503$4_FieldInfo_[] = {
	{"this$0", "Lbug6691503;", nullptr, $FINAL | $SYNTHETIC, $field(bug6691503$4, this$0)},
	{}
};

$MethodInfo _bug6691503$4_MethodInfo_[] = {
	{"<init>", "(Lbug6691503;)V", nullptr, 0, $method(static_cast<void(bug6691503$4::*)($bug6691503*)>(&bug6691503$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6691503$4_EnclosingMethodInfo_ = {
	"bug6691503",
	"stopEDT",
	"()V"
};

$InnerClassInfo _bug6691503$4_InnerClassesInfo_[] = {
	{"bug6691503$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6691503$4_ClassInfo_ = {
	$ACC_SUPER,
	"bug6691503$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6691503$4_FieldInfo_,
	_bug6691503$4_MethodInfo_,
	nullptr,
	&_bug6691503$4_EnclosingMethodInfo_,
	_bug6691503$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6691503"
};

$Object* allocate$bug6691503$4($Class* clazz) {
	return $of($alloc(bug6691503$4));
}

void bug6691503$4::init$($bug6691503* this$0) {
	$set(this, this$0, this$0);
}

void bug6691503$4::run() {
	$nc(this->this$0->frame)->dispose();
}

bug6691503$4::bug6691503$4() {
}

$Class* bug6691503$4::load$($String* name, bool initialize) {
	$loadClass(bug6691503$4, name, initialize, &_bug6691503$4_ClassInfo_, allocate$bug6691503$4);
	return class$;
}

$Class* bug6691503$4::class$ = nullptr;