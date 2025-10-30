#include <bug6866751$1.h>

#include <bug6866751.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug6866751 = ::bug6866751;
using $Frame = ::java::awt::Frame;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug6866751$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6866751$1::*)()>(&bug6866751$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6866751$1_EnclosingMethodInfo_ = {
	"bug6866751",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6866751$1_InnerClassesInfo_[] = {
	{"bug6866751$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6866751$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6866751$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6866751$1_MethodInfo_,
	nullptr,
	&_bug6866751$1_EnclosingMethodInfo_,
	_bug6866751$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6866751"
};

$Object* allocate$bug6866751$1($Class* clazz) {
	return $of($alloc(bug6866751$1));
}

void bug6866751$1::init$() {
}

void bug6866751$1::run() {
	$init($bug6866751);
	$assignStatic($bug6866751::frame, $new($JFrame));
	$nc($bug6866751::frame)->setUndecorated(true);
	$nc($bug6866751::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$bug6866751::setup($bug6866751::frame);
}

bug6866751$1::bug6866751$1() {
}

$Class* bug6866751$1::load$($String* name, bool initialize) {
	$loadClass(bug6866751$1, name, initialize, &_bug6866751$1_ClassInfo_, allocate$bug6866751$1);
	return class$;
}

$Class* bug6866751$1::class$ = nullptr;