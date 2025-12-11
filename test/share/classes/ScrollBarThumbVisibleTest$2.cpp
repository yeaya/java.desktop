#include <ScrollBarThumbVisibleTest$2.h>

#include <ScrollBarThumbVisibleTest.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <javax/swing/JScrollBar.h>
#include <jcpp.h>

using $ScrollBarThumbVisibleTest = ::ScrollBarThumbVisibleTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollBar = ::javax::swing::JScrollBar;

$MethodInfo _ScrollBarThumbVisibleTest$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ScrollBarThumbVisibleTest$2::*)()>(&ScrollBarThumbVisibleTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ScrollBarThumbVisibleTest$2_EnclosingMethodInfo_ = {
	"ScrollBarThumbVisibleTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ScrollBarThumbVisibleTest$2_InnerClassesInfo_[] = {
	{"ScrollBarThumbVisibleTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScrollBarThumbVisibleTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"ScrollBarThumbVisibleTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_ScrollBarThumbVisibleTest$2_MethodInfo_,
	nullptr,
	&_ScrollBarThumbVisibleTest$2_EnclosingMethodInfo_,
	_ScrollBarThumbVisibleTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ScrollBarThumbVisibleTest"
};

$Object* allocate$ScrollBarThumbVisibleTest$2($Class* clazz) {
	return $of($alloc(ScrollBarThumbVisibleTest$2));
}

void ScrollBarThumbVisibleTest$2::init$() {
}

void ScrollBarThumbVisibleTest$2::run() {
	$init($ScrollBarThumbVisibleTest);
	$assignStatic($ScrollBarThumbVisibleTest::point, $nc($ScrollBarThumbVisibleTest::bar)->getLocationOnScreen());
}

ScrollBarThumbVisibleTest$2::ScrollBarThumbVisibleTest$2() {
}

$Class* ScrollBarThumbVisibleTest$2::load$($String* name, bool initialize) {
	$loadClass(ScrollBarThumbVisibleTest$2, name, initialize, &_ScrollBarThumbVisibleTest$2_ClassInfo_, allocate$ScrollBarThumbVisibleTest$2);
	return class$;
}

$Class* ScrollBarThumbVisibleTest$2::class$ = nullptr;