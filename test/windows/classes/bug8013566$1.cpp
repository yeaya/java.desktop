#include <bug8013566$1.h>

#include <bug8013566.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug8013566 = ::bug8013566;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug8013566$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8013566$1::*)()>(&bug8013566$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8013566$1_EnclosingMethodInfo_ = {
	"bug8013566",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8013566$1_InnerClassesInfo_[] = {
	{"bug8013566$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8013566$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8013566$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8013566$1_MethodInfo_,
	nullptr,
	&_bug8013566$1_EnclosingMethodInfo_,
	_bug8013566$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8013566"
};

$Object* allocate$bug8013566$1($Class* clazz) {
	return $of($alloc(bug8013566$1));
}

void bug8013566$1::init$() {
}

void bug8013566$1::run() {
	$var($JFrame, frame, $new($JFrame));
	{
		$var($Throwable, var$0, nullptr);
		try {
			frame->setUndecorated(true);
			frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
			$bug8013566::test(frame);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			frame->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bug8013566$1::bug8013566$1() {
}

$Class* bug8013566$1::load$($String* name, bool initialize) {
	$loadClass(bug8013566$1, name, initialize, &_bug8013566$1_ClassInfo_, allocate$bug8013566$1);
	return class$;
}

$Class* bug8013566$1::class$ = nullptr;