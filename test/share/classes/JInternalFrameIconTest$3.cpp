#include <JInternalFrameIconTest$3.h>

#include <JInternalFrameIconTest.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $JInternalFrameIconTest = ::JInternalFrameIconTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _JInternalFrameIconTest$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JInternalFrameIconTest$3::*)()>(&JInternalFrameIconTest$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JInternalFrameIconTest$3_EnclosingMethodInfo_ = {
	"JInternalFrameIconTest",
	"cleanUp",
	"()V"
};

$InnerClassInfo _JInternalFrameIconTest$3_InnerClassesInfo_[] = {
	{"JInternalFrameIconTest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JInternalFrameIconTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"JInternalFrameIconTest$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_JInternalFrameIconTest$3_MethodInfo_,
	nullptr,
	&_JInternalFrameIconTest$3_EnclosingMethodInfo_,
	_JInternalFrameIconTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JInternalFrameIconTest"
};

$Object* allocate$JInternalFrameIconTest$3($Class* clazz) {
	return $of($alloc(JInternalFrameIconTest$3));
}

void JInternalFrameIconTest$3::init$() {
}

void JInternalFrameIconTest$3::run() {
	$init($JInternalFrameIconTest);
	$nc($JInternalFrameIconTest::frame)->dispose();
}

JInternalFrameIconTest$3::JInternalFrameIconTest$3() {
}

$Class* JInternalFrameIconTest$3::load$($String* name, bool initialize) {
	$loadClass(JInternalFrameIconTest$3, name, initialize, &_JInternalFrameIconTest$3_ClassInfo_, allocate$JInternalFrameIconTest$3);
	return class$;
}

$Class* JInternalFrameIconTest$3::class$ = nullptr;