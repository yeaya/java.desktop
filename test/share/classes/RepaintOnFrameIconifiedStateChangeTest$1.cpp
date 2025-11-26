#include <RepaintOnFrameIconifiedStateChangeTest$1.h>

#include <RepaintOnFrameIconifiedStateChangeTest.h>
#include <jcpp.h>

using $RepaintOnFrameIconifiedStateChangeTest = ::RepaintOnFrameIconifiedStateChangeTest;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _RepaintOnFrameIconifiedStateChangeTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RepaintOnFrameIconifiedStateChangeTest$1::*)()>(&RepaintOnFrameIconifiedStateChangeTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RepaintOnFrameIconifiedStateChangeTest$1_EnclosingMethodInfo_ = {
	"RepaintOnFrameIconifiedStateChangeTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _RepaintOnFrameIconifiedStateChangeTest$1_InnerClassesInfo_[] = {
	{"RepaintOnFrameIconifiedStateChangeTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintOnFrameIconifiedStateChangeTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"RepaintOnFrameIconifiedStateChangeTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_RepaintOnFrameIconifiedStateChangeTest$1_MethodInfo_,
	nullptr,
	&_RepaintOnFrameIconifiedStateChangeTest$1_EnclosingMethodInfo_,
	_RepaintOnFrameIconifiedStateChangeTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RepaintOnFrameIconifiedStateChangeTest"
};

$Object* allocate$RepaintOnFrameIconifiedStateChangeTest$1($Class* clazz) {
	return $of($alloc(RepaintOnFrameIconifiedStateChangeTest$1));
}

void RepaintOnFrameIconifiedStateChangeTest$1::init$() {
}

void RepaintOnFrameIconifiedStateChangeTest$1::run() {
	$nc($System::out)->println("Creating GUI..."_s);
	$RepaintOnFrameIconifiedStateChangeTest::createGUI();
}

RepaintOnFrameIconifiedStateChangeTest$1::RepaintOnFrameIconifiedStateChangeTest$1() {
}

$Class* RepaintOnFrameIconifiedStateChangeTest$1::load$($String* name, bool initialize) {
	$loadClass(RepaintOnFrameIconifiedStateChangeTest$1, name, initialize, &_RepaintOnFrameIconifiedStateChangeTest$1_ClassInfo_, allocate$RepaintOnFrameIconifiedStateChangeTest$1);
	return class$;
}

$Class* RepaintOnFrameIconifiedStateChangeTest$1::class$ = nullptr;