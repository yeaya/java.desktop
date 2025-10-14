#include <NormalBoundsTest$1.h>

#include <NormalBoundsTest.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyVetoException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _NormalBoundsTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NormalBoundsTest$1::*)()>(&NormalBoundsTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NormalBoundsTest$1_EnclosingMethodInfo_ = {
	"NormalBoundsTest",
	"executeTest",
	"(Ljava/awt/Robot;)V"
};

$InnerClassInfo _NormalBoundsTest$1_InnerClassesInfo_[] = {
	{"NormalBoundsTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NormalBoundsTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"NormalBoundsTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_NormalBoundsTest$1_MethodInfo_,
	nullptr,
	&_NormalBoundsTest$1_EnclosingMethodInfo_,
	_NormalBoundsTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NormalBoundsTest"
};

$Object* allocate$NormalBoundsTest$1($Class* clazz) {
	return $of($alloc(NormalBoundsTest$1));
}

void NormalBoundsTest$1::init$() {
}

void NormalBoundsTest$1::run() {
	try {
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::internalFrame)->setIcon(true);
	} catch ($PropertyVetoException&) {
		$var($PropertyVetoException, ex, $catch());
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::mainFrame)->dispose();
		$throwNew($RuntimeException, "Iconize InternalFrame Failed"_s);
	}
}

NormalBoundsTest$1::NormalBoundsTest$1() {
}

$Class* NormalBoundsTest$1::load$($String* name, bool initialize) {
	$loadClass(NormalBoundsTest$1, name, initialize, &_NormalBoundsTest$1_ClassInfo_, allocate$NormalBoundsTest$1);
	return class$;
}

$Class* NormalBoundsTest$1::class$ = nullptr;