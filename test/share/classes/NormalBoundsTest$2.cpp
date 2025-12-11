#include <NormalBoundsTest$2.h>

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

$MethodInfo _NormalBoundsTest$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NormalBoundsTest$2::*)()>(&NormalBoundsTest$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NormalBoundsTest$2_EnclosingMethodInfo_ = {
	"NormalBoundsTest",
	"executeTest",
	"(Ljava/awt/Robot;)V"
};

$InnerClassInfo _NormalBoundsTest$2_InnerClassesInfo_[] = {
	{"NormalBoundsTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NormalBoundsTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"NormalBoundsTest$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_NormalBoundsTest$2_MethodInfo_,
	nullptr,
	&_NormalBoundsTest$2_EnclosingMethodInfo_,
	_NormalBoundsTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NormalBoundsTest"
};

$Object* allocate$NormalBoundsTest$2($Class* clazz) {
	return $of($alloc(NormalBoundsTest$2));
}

void NormalBoundsTest$2::init$() {
}

void NormalBoundsTest$2::run() {
	try {
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::internalFrame)->setIcon(false);
	} catch ($PropertyVetoException& ex) {
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::mainFrame)->dispose();
		$throwNew($RuntimeException, "Deiconize InternalFrame Failed"_s);
	}
}

NormalBoundsTest$2::NormalBoundsTest$2() {
}

$Class* NormalBoundsTest$2::load$($String* name, bool initialize) {
	$loadClass(NormalBoundsTest$2, name, initialize, &_NormalBoundsTest$2_ClassInfo_, allocate$NormalBoundsTest$2);
	return class$;
}

$Class* NormalBoundsTest$2::class$ = nullptr;