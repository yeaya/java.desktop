#include <bug8041642$1.h>

#include <bug8041642.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8041642 = ::bug8041642;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug8041642$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8041642$1::*)()>(&bug8041642$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8041642$1_EnclosingMethodInfo_ = {
	"bug8041642",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8041642$1_InnerClassesInfo_[] = {
	{"bug8041642$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8041642$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8041642$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8041642$1_MethodInfo_,
	nullptr,
	&_bug8041642$1_EnclosingMethodInfo_,
	_bug8041642$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8041642"
};

$Object* allocate$bug8041642$1($Class* clazz) {
	return $of($alloc(bug8041642$1));
}

void bug8041642$1::init$() {
}

void bug8041642$1::run() {
	$init($bug8041642);
	$assignStatic($bug8041642::frame, $new($JFrame));
	$nc($bug8041642::frame)->setUndecorated(true);
	$nc($bug8041642::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$bug8041642::setup($bug8041642::frame);
}

bug8041642$1::bug8041642$1() {
}

$Class* bug8041642$1::load$($String* name, bool initialize) {
	$loadClass(bug8041642$1, name, initialize, &_bug8041642$1_ClassInfo_, allocate$bug8041642$1);
	return class$;
}

$Class* bug8041642$1::class$ = nullptr;