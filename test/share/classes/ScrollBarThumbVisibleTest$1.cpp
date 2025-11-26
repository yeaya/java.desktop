#include <ScrollBarThumbVisibleTest$1.h>

#include <ScrollBarThumbVisibleTest.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $ScrollBarThumbVisibleTest = ::ScrollBarThumbVisibleTest;
using $Frame = ::java::awt::Frame;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _ScrollBarThumbVisibleTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ScrollBarThumbVisibleTest$1::*)()>(&ScrollBarThumbVisibleTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ScrollBarThumbVisibleTest$1_EnclosingMethodInfo_ = {
	"ScrollBarThumbVisibleTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ScrollBarThumbVisibleTest$1_InnerClassesInfo_[] = {
	{"ScrollBarThumbVisibleTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScrollBarThumbVisibleTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"ScrollBarThumbVisibleTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_ScrollBarThumbVisibleTest$1_MethodInfo_,
	nullptr,
	&_ScrollBarThumbVisibleTest$1_EnclosingMethodInfo_,
	_ScrollBarThumbVisibleTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ScrollBarThumbVisibleTest"
};

$Object* allocate$ScrollBarThumbVisibleTest$1($Class* clazz) {
	return $of($alloc(ScrollBarThumbVisibleTest$1));
}

void ScrollBarThumbVisibleTest$1::init$() {
}

void ScrollBarThumbVisibleTest$1::run() {
	$init($ScrollBarThumbVisibleTest);
	$assignStatic($ScrollBarThumbVisibleTest::frame, $new($JFrame));
	$nc($ScrollBarThumbVisibleTest::frame)->setUndecorated(true);
	$nc($ScrollBarThumbVisibleTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$ScrollBarThumbVisibleTest::setup($ScrollBarThumbVisibleTest::frame);
}

ScrollBarThumbVisibleTest$1::ScrollBarThumbVisibleTest$1() {
}

$Class* ScrollBarThumbVisibleTest$1::load$($String* name, bool initialize) {
	$loadClass(ScrollBarThumbVisibleTest$1, name, initialize, &_ScrollBarThumbVisibleTest$1_ClassInfo_, allocate$ScrollBarThumbVisibleTest$1);
	return class$;
}

$Class* ScrollBarThumbVisibleTest$1::class$ = nullptr;