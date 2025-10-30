#include <ScrollBarThumbVisibleTest$3.h>

#include <ScrollBarThumbVisibleTest.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $ScrollBarThumbVisibleTest = ::ScrollBarThumbVisibleTest;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _ScrollBarThumbVisibleTest$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ScrollBarThumbVisibleTest$3::*)()>(&ScrollBarThumbVisibleTest$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ScrollBarThumbVisibleTest$3_EnclosingMethodInfo_ = {
	"ScrollBarThumbVisibleTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ScrollBarThumbVisibleTest$3_InnerClassesInfo_[] = {
	{"ScrollBarThumbVisibleTest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScrollBarThumbVisibleTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"ScrollBarThumbVisibleTest$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_ScrollBarThumbVisibleTest$3_MethodInfo_,
	nullptr,
	&_ScrollBarThumbVisibleTest$3_EnclosingMethodInfo_,
	_ScrollBarThumbVisibleTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ScrollBarThumbVisibleTest"
};

$Object* allocate$ScrollBarThumbVisibleTest$3($Class* clazz) {
	return $of($alloc(ScrollBarThumbVisibleTest$3));
}

void ScrollBarThumbVisibleTest$3::init$() {
}

void ScrollBarThumbVisibleTest$3::run() {
	$init($ScrollBarThumbVisibleTest);
	if ($ScrollBarThumbVisibleTest::frame != nullptr) {
		$nc($ScrollBarThumbVisibleTest::frame)->dispose();
	}
}

ScrollBarThumbVisibleTest$3::ScrollBarThumbVisibleTest$3() {
}

$Class* ScrollBarThumbVisibleTest$3::load$($String* name, bool initialize) {
	$loadClass(ScrollBarThumbVisibleTest$3, name, initialize, &_ScrollBarThumbVisibleTest$3_ClassInfo_, allocate$ScrollBarThumbVisibleTest$3);
	return class$;
}

$Class* ScrollBarThumbVisibleTest$3::class$ = nullptr;