#include <RepaintOnFrameIconifiedStateChangeTest$2.h>

#include <RepaintOnFrameIconifiedStateChangeTest.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef ICONIFIED

using $RepaintOnFrameIconifiedStateChangeTest = ::RepaintOnFrameIconifiedStateChangeTest;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _RepaintOnFrameIconifiedStateChangeTest$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RepaintOnFrameIconifiedStateChangeTest$2::*)()>(&RepaintOnFrameIconifiedStateChangeTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RepaintOnFrameIconifiedStateChangeTest$2_EnclosingMethodInfo_ = {
	"RepaintOnFrameIconifiedStateChangeTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _RepaintOnFrameIconifiedStateChangeTest$2_InnerClassesInfo_[] = {
	{"RepaintOnFrameIconifiedStateChangeTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintOnFrameIconifiedStateChangeTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"RepaintOnFrameIconifiedStateChangeTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_RepaintOnFrameIconifiedStateChangeTest$2_MethodInfo_,
	nullptr,
	&_RepaintOnFrameIconifiedStateChangeTest$2_EnclosingMethodInfo_,
	_RepaintOnFrameIconifiedStateChangeTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RepaintOnFrameIconifiedStateChangeTest"
};

$Object* allocate$RepaintOnFrameIconifiedStateChangeTest$2($Class* clazz) {
	return $of($alloc(RepaintOnFrameIconifiedStateChangeTest$2));
}

void RepaintOnFrameIconifiedStateChangeTest$2::init$() {
}

void RepaintOnFrameIconifiedStateChangeTest$2::run() {
	$nc($System::out)->println("Minimizing the frame..."_s);
	$init($RepaintOnFrameIconifiedStateChangeTest);
	$nc($RepaintOnFrameIconifiedStateChangeTest::frame)->setExtendedState($JFrame::ICONIFIED);
}

RepaintOnFrameIconifiedStateChangeTest$2::RepaintOnFrameIconifiedStateChangeTest$2() {
}

$Class* RepaintOnFrameIconifiedStateChangeTest$2::load$($String* name, bool initialize) {
	$loadClass(RepaintOnFrameIconifiedStateChangeTest$2, name, initialize, &_RepaintOnFrameIconifiedStateChangeTest$2_ClassInfo_, allocate$RepaintOnFrameIconifiedStateChangeTest$2);
	return class$;
}

$Class* RepaintOnFrameIconifiedStateChangeTest$2::class$ = nullptr;