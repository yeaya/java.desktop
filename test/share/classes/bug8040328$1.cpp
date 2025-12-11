#include <bug8040328$1.h>

#include <bug8040328.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8040328 = ::bug8040328;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug8040328$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8040328$1::*)()>(&bug8040328$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8040328$1_EnclosingMethodInfo_ = {
	"bug8040328",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8040328$1_InnerClassesInfo_[] = {
	{"bug8040328$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8040328$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8040328$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8040328$1_MethodInfo_,
	nullptr,
	&_bug8040328$1_EnclosingMethodInfo_,
	_bug8040328$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8040328"
};

$Object* allocate$bug8040328$1($Class* clazz) {
	return $of($alloc(bug8040328$1));
}

void bug8040328$1::init$() {
}

void bug8040328$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JFrame, frame, $new($JFrame));
	{
		$var($Throwable, var$0, nullptr);
		try {
			frame->setUndecorated(true);
			frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
			frame->setVisible(true);
			$bug8040328::test(frame);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			frame->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bug8040328$1::bug8040328$1() {
}

$Class* bug8040328$1::load$($String* name, bool initialize) {
	$loadClass(bug8040328$1, name, initialize, &_bug8040328$1_ClassInfo_, allocate$bug8040328$1);
	return class$;
}

$Class* bug8040328$1::class$ = nullptr;