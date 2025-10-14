#include <RepaintOnFrameIconifiedStateChangeTest$4.h>

#include <RepaintOnFrameIconifiedStateChangeTest.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef NORMAL

using $RepaintOnFrameIconifiedStateChangeTest = ::RepaintOnFrameIconifiedStateChangeTest;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _RepaintOnFrameIconifiedStateChangeTest$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RepaintOnFrameIconifiedStateChangeTest$4::*)()>(&RepaintOnFrameIconifiedStateChangeTest$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RepaintOnFrameIconifiedStateChangeTest$4_EnclosingMethodInfo_ = {
	"RepaintOnFrameIconifiedStateChangeTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _RepaintOnFrameIconifiedStateChangeTest$4_InnerClassesInfo_[] = {
	{"RepaintOnFrameIconifiedStateChangeTest$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintOnFrameIconifiedStateChangeTest$4_ClassInfo_ = {
	$ACC_SUPER,
	"RepaintOnFrameIconifiedStateChangeTest$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_RepaintOnFrameIconifiedStateChangeTest$4_MethodInfo_,
	nullptr,
	&_RepaintOnFrameIconifiedStateChangeTest$4_EnclosingMethodInfo_,
	_RepaintOnFrameIconifiedStateChangeTest$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RepaintOnFrameIconifiedStateChangeTest"
};

$Object* allocate$RepaintOnFrameIconifiedStateChangeTest$4($Class* clazz) {
	return $of($alloc(RepaintOnFrameIconifiedStateChangeTest$4));
}

void RepaintOnFrameIconifiedStateChangeTest$4::init$() {
}

void RepaintOnFrameIconifiedStateChangeTest$4::run() {
	$init($System);
	$nc($System::out)->println("Restoring the frame..."_s);
	$init($RepaintOnFrameIconifiedStateChangeTest);
	for (int32_t i = 0; i < $nc($RepaintOnFrameIconifiedStateChangeTest::compRedrawn)->length; ++i) {
		$nc($RepaintOnFrameIconifiedStateChangeTest::compRedrawn)->set(i, false);
	}
	$RepaintOnFrameIconifiedStateChangeTest::compRedrawnFlagCanBeSet = true;
	$nc($RepaintOnFrameIconifiedStateChangeTest::frame)->setExtendedState($JFrame::NORMAL);
	$nc($RepaintOnFrameIconifiedStateChangeTest::frame)->toFront();
}

RepaintOnFrameIconifiedStateChangeTest$4::RepaintOnFrameIconifiedStateChangeTest$4() {
}

$Class* RepaintOnFrameIconifiedStateChangeTest$4::load$($String* name, bool initialize) {
	$loadClass(RepaintOnFrameIconifiedStateChangeTest$4, name, initialize, &_RepaintOnFrameIconifiedStateChangeTest$4_ClassInfo_, allocate$RepaintOnFrameIconifiedStateChangeTest$4);
	return class$;
}

$Class* RepaintOnFrameIconifiedStateChangeTest$4::class$ = nullptr;