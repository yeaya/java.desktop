#include <NormalBoundsTest$7.h>

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

$MethodInfo _NormalBoundsTest$7_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NormalBoundsTest$7::*)()>(&NormalBoundsTest$7::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NormalBoundsTest$7_EnclosingMethodInfo_ = {
	"NormalBoundsTest",
	"executeTest",
	"(Ljava/awt/Robot;)V"
};

$InnerClassInfo _NormalBoundsTest$7_InnerClassesInfo_[] = {
	{"NormalBoundsTest$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NormalBoundsTest$7_ClassInfo_ = {
	$ACC_SUPER,
	"NormalBoundsTest$7",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_NormalBoundsTest$7_MethodInfo_,
	nullptr,
	&_NormalBoundsTest$7_EnclosingMethodInfo_,
	_NormalBoundsTest$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NormalBoundsTest"
};

$Object* allocate$NormalBoundsTest$7($Class* clazz) {
	return $of($alloc(NormalBoundsTest$7));
}

void NormalBoundsTest$7::init$() {
}

void NormalBoundsTest$7::run() {
	try {
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::internalFrame)->setIcon(false);
	} catch ($PropertyVetoException&) {
		$var($PropertyVetoException, ex, $catch());
		$init($NormalBoundsTest);
		$nc($NormalBoundsTest::mainFrame)->dispose();
		$throwNew($RuntimeException, "DeIcoize InternalFrame  Failed"_s);
	}
}

NormalBoundsTest$7::NormalBoundsTest$7() {
}

$Class* NormalBoundsTest$7::load$($String* name, bool initialize) {
	$loadClass(NormalBoundsTest$7, name, initialize, &_NormalBoundsTest$7_ClassInfo_, allocate$NormalBoundsTest$7);
	return class$;
}

$Class* NormalBoundsTest$7::class$ = nullptr;