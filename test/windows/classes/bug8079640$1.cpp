#include <bug8079640$1.h>

#include <bug8079640.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8079640 = ::bug8079640;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug8079640$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8079640$1::*)()>(&bug8079640$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8079640$1_EnclosingMethodInfo_ = {
	"bug8079640",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8079640$1_InnerClassesInfo_[] = {
	{"bug8079640$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8079640$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8079640$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8079640$1_MethodInfo_,
	nullptr,
	&_bug8079640$1_EnclosingMethodInfo_,
	_bug8079640$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8079640"
};

$Object* allocate$bug8079640$1($Class* clazz) {
	return $of($alloc(bug8079640$1));
}

void bug8079640$1::init$() {
}

void bug8079640$1::run() {
	$init($bug8079640);
	$assignStatic($bug8079640::frame, $new($JFrame, "A Frame"_s));
	$nc($bug8079640::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($bug8079640::frame)->setUndecorated(true);
	$bug8079640::setup($bug8079640::frame);
	$nc($bug8079640::frame)->setVisible(true);
}

bug8079640$1::bug8079640$1() {
}

$Class* bug8079640$1::load$($String* name, bool initialize) {
	$loadClass(bug8079640$1, name, initialize, &_bug8079640$1_ClassInfo_, allocate$bug8079640$1);
	return class$;
}

$Class* bug8079640$1::class$ = nullptr;