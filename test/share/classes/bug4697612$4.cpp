#include <bug4697612$4.h>

#include <bug4697612.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug4697612 = ::bug4697612;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _bug4697612$4_FieldInfo_[] = {
	{"this$0", "Lbug4697612;", nullptr, $FINAL | $SYNTHETIC, $field(bug4697612$4, this$0)},
	{}
};

$MethodInfo _bug4697612$4_MethodInfo_[] = {
	{"<init>", "(Lbug4697612;)V", nullptr, 0, $method(static_cast<void(bug4697612$4::*)($bug4697612*)>(&bug4697612$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4697612$4_EnclosingMethodInfo_ = {
	"bug4697612",
	"<init>",
	"()V"
};

$InnerClassInfo _bug4697612$4_InnerClassesInfo_[] = {
	{"bug4697612$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4697612$4_ClassInfo_ = {
	$ACC_SUPER,
	"bug4697612$4",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4697612$4_FieldInfo_,
	_bug4697612$4_MethodInfo_,
	nullptr,
	&_bug4697612$4_EnclosingMethodInfo_,
	_bug4697612$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4697612"
};

$Object* allocate$bug4697612$4($Class* clazz) {
	return $of($alloc(bug4697612$4));
}

void bug4697612$4::init$($bug4697612* this$0) {
	$set(this, this$0, this$0);
}

void bug4697612$4::run() {
	$init($bug4697612);
	$nc($bug4697612::frame)->setSize(300, $bug4697612::frameHeight);
}

bug4697612$4::bug4697612$4() {
}

$Class* bug4697612$4::load$($String* name, bool initialize) {
	$loadClass(bug4697612$4, name, initialize, &_bug4697612$4_ClassInfo_, allocate$bug4697612$4);
	return class$;
}

$Class* bug4697612$4::class$ = nullptr;