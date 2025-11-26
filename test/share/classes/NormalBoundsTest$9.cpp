#include <NormalBoundsTest$9.h>

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

$MethodInfo _NormalBoundsTest$9_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NormalBoundsTest$9::*)()>(&NormalBoundsTest$9::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NormalBoundsTest$9_EnclosingMethodInfo_ = {
	"NormalBoundsTest",
	"executeTest",
	"(Ljava/awt/Robot;)V"
};

$InnerClassInfo _NormalBoundsTest$9_InnerClassesInfo_[] = {
	{"NormalBoundsTest$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NormalBoundsTest$9_ClassInfo_ = {
	$ACC_SUPER,
	"NormalBoundsTest$9",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_NormalBoundsTest$9_MethodInfo_,
	nullptr,
	&_NormalBoundsTest$9_EnclosingMethodInfo_,
	_NormalBoundsTest$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NormalBoundsTest"
};

$Object* allocate$NormalBoundsTest$9($Class* clazz) {
	return $of($alloc(NormalBoundsTest$9));
}

void NormalBoundsTest$9::init$() {
}

void NormalBoundsTest$9::run() {
	$init($NormalBoundsTest);
	if (!$nc($($nc($NormalBoundsTest::internalFrame)->getBounds()))->equals($NormalBoundsTest::bounds)) {
		$nc($NormalBoundsTest::mainFrame)->dispose();
		$throwNew($RuntimeException, "Regression Test Failed"_s);
	}
}

NormalBoundsTest$9::NormalBoundsTest$9() {
}

$Class* NormalBoundsTest$9::load$($String* name, bool initialize) {
	$loadClass(NormalBoundsTest$9, name, initialize, &_NormalBoundsTest$9_ClassInfo_, allocate$NormalBoundsTest$9);
	return class$;
}

$Class* NormalBoundsTest$9::class$ = nullptr;