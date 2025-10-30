#include <bug4962534$2.h>

#include <bug4962534.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <jcpp.h>

using $bug4962534 = ::bug4962534;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;

$FieldInfo _bug4962534$2_FieldInfo_[] = {
	{"this$0", "Lbug4962534;", nullptr, $FINAL | $SYNTHETIC, $field(bug4962534$2, this$0)},
	{}
};

$MethodInfo _bug4962534$2_MethodInfo_[] = {
	{"<init>", "(Lbug4962534;)V", nullptr, 0, $method(static_cast<void(bug4962534$2::*)($bug4962534*)>(&bug4962534$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4962534$2_EnclosingMethodInfo_ = {
	"bug4962534",
	"setJLayeredPaneEDT",
	"()V"
};

$InnerClassInfo _bug4962534$2_InnerClassesInfo_[] = {
	{"bug4962534$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4962534$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4962534$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4962534$2_FieldInfo_,
	_bug4962534$2_MethodInfo_,
	nullptr,
	&_bug4962534$2_EnclosingMethodInfo_,
	_bug4962534$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4962534"
};

$Object* allocate$bug4962534$2($Class* clazz) {
	return $of($alloc(bug4962534$2));
}

void bug4962534$2::init$($bug4962534* this$0) {
	$set(this, this$0, this$0);
}

void bug4962534$2::run() {
	$init($bug4962534);
	$set(this->this$0, lPane, $nc($bug4962534::frame)->getLayeredPane());
	$nc($System::out)->println($$str({"JFrame\'s LayeredPane "_s, this->this$0->lPane}));
}

bug4962534$2::bug4962534$2() {
}

$Class* bug4962534$2::load$($String* name, bool initialize) {
	$loadClass(bug4962534$2, name, initialize, &_bug4962534$2_ClassInfo_, allocate$bug4962534$2);
	return class$;
}

$Class* bug4962534$2::class$ = nullptr;