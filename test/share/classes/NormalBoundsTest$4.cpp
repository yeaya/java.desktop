#include <NormalBoundsTest$4.h>

#include <NormalBoundsTest.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $NormalBoundsTest = ::NormalBoundsTest;
using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;

$MethodInfo _NormalBoundsTest$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NormalBoundsTest$4::*)()>(&NormalBoundsTest$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NormalBoundsTest$4_EnclosingMethodInfo_ = {
	"NormalBoundsTest",
	"executeTest",
	"(Ljava/awt/Robot;)V"
};

$InnerClassInfo _NormalBoundsTest$4_InnerClassesInfo_[] = {
	{"NormalBoundsTest$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NormalBoundsTest$4_ClassInfo_ = {
	$ACC_SUPER,
	"NormalBoundsTest$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_NormalBoundsTest$4_MethodInfo_,
	nullptr,
	&_NormalBoundsTest$4_EnclosingMethodInfo_,
	_NormalBoundsTest$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NormalBoundsTest"
};

$Object* allocate$NormalBoundsTest$4($Class* clazz) {
	return $of($alloc(NormalBoundsTest$4));
}

void NormalBoundsTest$4::init$() {
}

void NormalBoundsTest$4::run() {
	$init($NormalBoundsTest);
	$assignStatic($NormalBoundsTest::bounds, $nc($NormalBoundsTest::internalFrame)->getBounds());
	if (!$nc($($nc($NormalBoundsTest::internalFrame)->getNormalBounds()))->equals($NormalBoundsTest::bounds)) {
		$nc($NormalBoundsTest::mainFrame)->dispose();
		$throwNew($RuntimeException, "Invalid NormalBounds"_s);
	}
}

NormalBoundsTest$4::NormalBoundsTest$4() {
}

$Class* NormalBoundsTest$4::load$($String* name, bool initialize) {
	$loadClass(NormalBoundsTest$4, name, initialize, &_NormalBoundsTest$4_ClassInfo_, allocate$NormalBoundsTest$4);
	return class$;
}

$Class* NormalBoundsTest$4::class$ = nullptr;