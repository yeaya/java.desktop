#include <NormalBoundsTest$8.h>

#include <NormalBoundsTest.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $NormalBoundsTest = ::NormalBoundsTest;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;

$MethodInfo _NormalBoundsTest$8_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NormalBoundsTest$8::*)()>(&NormalBoundsTest$8::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NormalBoundsTest$8_EnclosingMethodInfo_ = {
	"NormalBoundsTest",
	"executeTest",
	"(Ljava/awt/Robot;)V"
};

$InnerClassInfo _NormalBoundsTest$8_InnerClassesInfo_[] = {
	{"NormalBoundsTest$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NormalBoundsTest$8_ClassInfo_ = {
	$ACC_SUPER,
	"NormalBoundsTest$8",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_NormalBoundsTest$8_MethodInfo_,
	nullptr,
	&_NormalBoundsTest$8_EnclosingMethodInfo_,
	_NormalBoundsTest$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NormalBoundsTest"
};

$Object* allocate$NormalBoundsTest$8($Class* clazz) {
	return $of($alloc(NormalBoundsTest$8));
}

void NormalBoundsTest$8::init$() {
}

void NormalBoundsTest$8::run() {
	try {
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::internalFrame)->setMaximum(false);
	} catch ($PropertyVetoException& ex) {
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::mainFrame)->dispose();
		$throwNew($RuntimeException, "Restore InternalFrame  Failed"_s);
	}
}

NormalBoundsTest$8::NormalBoundsTest$8() {
}

$Class* NormalBoundsTest$8::load$($String* name, bool initialize) {
	$loadClass(NormalBoundsTest$8, name, initialize, &_NormalBoundsTest$8_ClassInfo_, allocate$NormalBoundsTest$8);
	return class$;
}

$Class* NormalBoundsTest$8::class$ = nullptr;