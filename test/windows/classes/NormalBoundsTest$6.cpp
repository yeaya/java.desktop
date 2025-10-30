#include <NormalBoundsTest$6.h>

#include <NormalBoundsTest.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $NormalBoundsTest = ::NormalBoundsTest;
using $Window = ::java::awt::Window;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;

$MethodInfo _NormalBoundsTest$6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NormalBoundsTest$6::*)()>(&NormalBoundsTest$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NormalBoundsTest$6_EnclosingMethodInfo_ = {
	"NormalBoundsTest",
	"executeTest",
	"(Ljava/awt/Robot;)V"
};

$InnerClassInfo _NormalBoundsTest$6_InnerClassesInfo_[] = {
	{"NormalBoundsTest$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NormalBoundsTest$6_ClassInfo_ = {
	$ACC_SUPER,
	"NormalBoundsTest$6",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_NormalBoundsTest$6_MethodInfo_,
	nullptr,
	&_NormalBoundsTest$6_EnclosingMethodInfo_,
	_NormalBoundsTest$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NormalBoundsTest"
};

$Object* allocate$NormalBoundsTest$6($Class* clazz) {
	return $of($alloc(NormalBoundsTest$6));
}

void NormalBoundsTest$6::init$() {
}

void NormalBoundsTest$6::run() {
	try {
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::internalFrame)->setIcon(true);
	} catch ($PropertyVetoException& ex) {
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::mainFrame)->dispose();
		$throwNew($RuntimeException, "Iconize InternalFrame Failed"_s);
	}
}

NormalBoundsTest$6::NormalBoundsTest$6() {
}

$Class* NormalBoundsTest$6::load$($String* name, bool initialize) {
	$loadClass(NormalBoundsTest$6, name, initialize, &_NormalBoundsTest$6_ClassInfo_, allocate$NormalBoundsTest$6);
	return class$;
}

$Class* NormalBoundsTest$6::class$ = nullptr;