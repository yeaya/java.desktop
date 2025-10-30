#include <ScrollableTabbedPaneTest$1.h>

#include <ScrollableTabbedPaneTest.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $ScrollableTabbedPaneTest = ::ScrollableTabbedPaneTest;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _ScrollableTabbedPaneTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ScrollableTabbedPaneTest$1::*)()>(&ScrollableTabbedPaneTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ScrollableTabbedPaneTest$1_EnclosingMethodInfo_ = {
	"ScrollableTabbedPaneTest",
	"cleanUp",
	"()V"
};

$InnerClassInfo _ScrollableTabbedPaneTest$1_InnerClassesInfo_[] = {
	{"ScrollableTabbedPaneTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ScrollableTabbedPaneTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"ScrollableTabbedPaneTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_ScrollableTabbedPaneTest$1_MethodInfo_,
	nullptr,
	&_ScrollableTabbedPaneTest$1_EnclosingMethodInfo_,
	_ScrollableTabbedPaneTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ScrollableTabbedPaneTest"
};

$Object* allocate$ScrollableTabbedPaneTest$1($Class* clazz) {
	return $of($alloc(ScrollableTabbedPaneTest$1));
}

void ScrollableTabbedPaneTest$1::init$() {
}

void ScrollableTabbedPaneTest$1::run() {
	$init($ScrollableTabbedPaneTest);
	$nc($ScrollableTabbedPaneTest::frame)->dispose();
}

ScrollableTabbedPaneTest$1::ScrollableTabbedPaneTest$1() {
}

$Class* ScrollableTabbedPaneTest$1::load$($String* name, bool initialize) {
	$loadClass(ScrollableTabbedPaneTest$1, name, initialize, &_ScrollableTabbedPaneTest$1_ClassInfo_, allocate$ScrollableTabbedPaneTest$1);
	return class$;
}

$Class* ScrollableTabbedPaneTest$1::class$ = nullptr;