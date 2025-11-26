#include <ComponentTest$1.h>

#include <ComponentTest.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $ComponentTest = ::ComponentTest;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _ComponentTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ComponentTest$1::*)()>(&ComponentTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ComponentTest$1_EnclosingMethodInfo_ = {
	"ComponentTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ComponentTest$1_InnerClassesInfo_[] = {
	{"ComponentTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ComponentTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"ComponentTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_ComponentTest$1_MethodInfo_,
	nullptr,
	&_ComponentTest$1_EnclosingMethodInfo_,
	_ComponentTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ComponentTest"
};

$Object* allocate$ComponentTest$1($Class* clazz) {
	return $of($alloc(ComponentTest$1));
}

void ComponentTest$1::init$() {
}

void ComponentTest$1::run() {
	$init($ComponentTest);
	$assignStatic($ComponentTest::frame, $new($ComponentTest));
	$nc($ComponentTest::frame)->setVisible(true);
}

ComponentTest$1::ComponentTest$1() {
}

$Class* ComponentTest$1::load$($String* name, bool initialize) {
	$loadClass(ComponentTest$1, name, initialize, &_ComponentTest$1_ClassInfo_, allocate$ComponentTest$1);
	return class$;
}

$Class* ComponentTest$1::class$ = nullptr;