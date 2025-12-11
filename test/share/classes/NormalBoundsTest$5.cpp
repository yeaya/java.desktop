#include <NormalBoundsTest$5.h>

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

$MethodInfo _NormalBoundsTest$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NormalBoundsTest$5::*)()>(&NormalBoundsTest$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NormalBoundsTest$5_EnclosingMethodInfo_ = {
	"NormalBoundsTest",
	"executeTest",
	"(Ljava/awt/Robot;)V"
};

$InnerClassInfo _NormalBoundsTest$5_InnerClassesInfo_[] = {
	{"NormalBoundsTest$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NormalBoundsTest$5_ClassInfo_ = {
	$ACC_SUPER,
	"NormalBoundsTest$5",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_NormalBoundsTest$5_MethodInfo_,
	nullptr,
	&_NormalBoundsTest$5_EnclosingMethodInfo_,
	_NormalBoundsTest$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NormalBoundsTest"
};

$Object* allocate$NormalBoundsTest$5($Class* clazz) {
	return $of($alloc(NormalBoundsTest$5));
}

void NormalBoundsTest$5::init$() {
}

void NormalBoundsTest$5::run() {
	try {
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::internalFrame)->setMaximum(true);
	} catch ($PropertyVetoException& ex) {
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::mainFrame)->dispose();
		$throwNew($RuntimeException, "Maximize InternalFrame Failed"_s);
	}
}

NormalBoundsTest$5::NormalBoundsTest$5() {
}

$Class* NormalBoundsTest$5::load$($String* name, bool initialize) {
	$loadClass(NormalBoundsTest$5, name, initialize, &_NormalBoundsTest$5_ClassInfo_, allocate$NormalBoundsTest$5);
	return class$;
}

$Class* NormalBoundsTest$5::class$ = nullptr;