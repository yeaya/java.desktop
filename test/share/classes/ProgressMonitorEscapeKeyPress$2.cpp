#include <ProgressMonitorEscapeKeyPress$2.h>

#include <ProgressMonitorEscapeKeyPress.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $ProgressMonitorEscapeKeyPress = ::ProgressMonitorEscapeKeyPress;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _ProgressMonitorEscapeKeyPress$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ProgressMonitorEscapeKeyPress$2::*)()>(&ProgressMonitorEscapeKeyPress$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProgressMonitorEscapeKeyPress$2_EnclosingMethodInfo_ = {
	"ProgressMonitorEscapeKeyPress",
	"createTestUI",
	"()V"
};

$InnerClassInfo _ProgressMonitorEscapeKeyPress$2_InnerClassesInfo_[] = {
	{"ProgressMonitorEscapeKeyPress$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProgressMonitorEscapeKeyPress$2_ClassInfo_ = {
	$ACC_SUPER,
	"ProgressMonitorEscapeKeyPress$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_ProgressMonitorEscapeKeyPress$2_MethodInfo_,
	nullptr,
	&_ProgressMonitorEscapeKeyPress$2_EnclosingMethodInfo_,
	_ProgressMonitorEscapeKeyPress$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ProgressMonitorEscapeKeyPress"
};

$Object* allocate$ProgressMonitorEscapeKeyPress$2($Class* clazz) {
	return $of($alloc(ProgressMonitorEscapeKeyPress$2));
}

void ProgressMonitorEscapeKeyPress$2::init$() {
}

void ProgressMonitorEscapeKeyPress$2::run() {
	$init($ProgressMonitorEscapeKeyPress);
	$assignStatic($ProgressMonitorEscapeKeyPress::frame, $new($JFrame, "Test"_s));
	$nc($ProgressMonitorEscapeKeyPress::frame)->setSize(300, 300);
	$nc($ProgressMonitorEscapeKeyPress::frame)->setLocationByPlatform(true);
	$nc($ProgressMonitorEscapeKeyPress::frame)->setVisible(true);
}

ProgressMonitorEscapeKeyPress$2::ProgressMonitorEscapeKeyPress$2() {
}

$Class* ProgressMonitorEscapeKeyPress$2::load$($String* name, bool initialize) {
	$loadClass(ProgressMonitorEscapeKeyPress$2, name, initialize, &_ProgressMonitorEscapeKeyPress$2_ClassInfo_, allocate$ProgressMonitorEscapeKeyPress$2);
	return class$;
}

$Class* ProgressMonitorEscapeKeyPress$2::class$ = nullptr;