#include <bug4697612$2.h>

#include <bug4697612.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextArea.h>
#include <jcpp.h>

using $bug4697612 = ::bug4697612;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JTextArea = ::javax::swing::JTextArea;

$FieldInfo _bug4697612$2_FieldInfo_[] = {
	{"this$0", "Lbug4697612;", nullptr, $FINAL | $SYNTHETIC, $field(bug4697612$2, this$0)},
	{}
};

$MethodInfo _bug4697612$2_MethodInfo_[] = {
	{"<init>", "(Lbug4697612;)V", nullptr, 0, $method(static_cast<void(bug4697612$2::*)($bug4697612*)>(&bug4697612$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4697612$2_EnclosingMethodInfo_ = {
	"bug4697612",
	"<init>",
	"()V"
};

$InnerClassInfo _bug4697612$2_InnerClassesInfo_[] = {
	{"bug4697612$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4697612$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4697612$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4697612$2_FieldInfo_,
	_bug4697612$2_MethodInfo_,
	nullptr,
	&_bug4697612$2_EnclosingMethodInfo_,
	_bug4697612$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4697612"
};

$Object* allocate$bug4697612$2($Class* clazz) {
	return $of($alloc(bug4697612$2));
}

void bug4697612$2::init$($bug4697612* this$0) {
	$set(this, this$0, this$0);
}

void bug4697612$2::run() {
	$init($bug4697612);
	$nc($bug4697612::text)->requestFocus();
}

bug4697612$2::bug4697612$2() {
}

$Class* bug4697612$2::load$($String* name, bool initialize) {
	$loadClass(bug4697612$2, name, initialize, &_bug4697612$2_ClassInfo_, allocate$bug4697612$2);
	return class$;
}

$Class* bug4697612$2::class$ = nullptr;