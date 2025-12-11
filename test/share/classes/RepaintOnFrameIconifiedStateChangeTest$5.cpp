#include <RepaintOnFrameIconifiedStateChangeTest$5.h>

#include <RepaintOnFrameIconifiedStateChangeTest.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $RepaintOnFrameIconifiedStateChangeTest = ::RepaintOnFrameIconifiedStateChangeTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _RepaintOnFrameIconifiedStateChangeTest$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RepaintOnFrameIconifiedStateChangeTest$5::*)()>(&RepaintOnFrameIconifiedStateChangeTest$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RepaintOnFrameIconifiedStateChangeTest$5_EnclosingMethodInfo_ = {
	"RepaintOnFrameIconifiedStateChangeTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _RepaintOnFrameIconifiedStateChangeTest$5_InnerClassesInfo_[] = {
	{"RepaintOnFrameIconifiedStateChangeTest$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintOnFrameIconifiedStateChangeTest$5_ClassInfo_ = {
	$ACC_SUPER,
	"RepaintOnFrameIconifiedStateChangeTest$5",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_RepaintOnFrameIconifiedStateChangeTest$5_MethodInfo_,
	nullptr,
	&_RepaintOnFrameIconifiedStateChangeTest$5_EnclosingMethodInfo_,
	_RepaintOnFrameIconifiedStateChangeTest$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RepaintOnFrameIconifiedStateChangeTest"
};

$Object* allocate$RepaintOnFrameIconifiedStateChangeTest$5($Class* clazz) {
	return $of($alloc(RepaintOnFrameIconifiedStateChangeTest$5));
}

void RepaintOnFrameIconifiedStateChangeTest$5::init$() {
}

void RepaintOnFrameIconifiedStateChangeTest$5::run() {
	$init($RepaintOnFrameIconifiedStateChangeTest);
	if ($RepaintOnFrameIconifiedStateChangeTest::frame != nullptr) {
		$nc($RepaintOnFrameIconifiedStateChangeTest::frame)->dispose();
		$assignStatic($RepaintOnFrameIconifiedStateChangeTest::frame, nullptr);
	}
}

RepaintOnFrameIconifiedStateChangeTest$5::RepaintOnFrameIconifiedStateChangeTest$5() {
}

$Class* RepaintOnFrameIconifiedStateChangeTest$5::load$($String* name, bool initialize) {
	$loadClass(RepaintOnFrameIconifiedStateChangeTest$5, name, initialize, &_RepaintOnFrameIconifiedStateChangeTest$5_ClassInfo_, allocate$RepaintOnFrameIconifiedStateChangeTest$5);
	return class$;
}

$Class* RepaintOnFrameIconifiedStateChangeTest$5::class$ = nullptr;