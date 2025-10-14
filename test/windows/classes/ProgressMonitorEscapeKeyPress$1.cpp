#include <ProgressMonitorEscapeKeyPress$1.h>

#include <ProgressMonitorEscapeKeyPress.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ProgressMonitor.h>
#include <jcpp.h>

using $ProgressMonitorEscapeKeyPress = ::ProgressMonitorEscapeKeyPress;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ProgressMonitor = ::javax::swing::ProgressMonitor;

$MethodInfo _ProgressMonitorEscapeKeyPress$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ProgressMonitorEscapeKeyPress$1::*)()>(&ProgressMonitorEscapeKeyPress$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProgressMonitorEscapeKeyPress$1_EnclosingMethodInfo_ = {
	"ProgressMonitorEscapeKeyPress",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ProgressMonitorEscapeKeyPress$1_InnerClassesInfo_[] = {
	{"ProgressMonitorEscapeKeyPress$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProgressMonitorEscapeKeyPress$1_ClassInfo_ = {
	$ACC_SUPER,
	"ProgressMonitorEscapeKeyPress$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_ProgressMonitorEscapeKeyPress$1_MethodInfo_,
	nullptr,
	&_ProgressMonitorEscapeKeyPress$1_EnclosingMethodInfo_,
	_ProgressMonitorEscapeKeyPress$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ProgressMonitorEscapeKeyPress"
};

$Object* allocate$ProgressMonitorEscapeKeyPress$1($Class* clazz) {
	return $of($alloc(ProgressMonitorEscapeKeyPress$1));
}

void ProgressMonitorEscapeKeyPress$1::init$() {
}

void ProgressMonitorEscapeKeyPress$1::run() {
	$init($ProgressMonitorEscapeKeyPress);
	if (!$nc($ProgressMonitorEscapeKeyPress::monitor)->isCanceled()) {
		$nc($ProgressMonitorEscapeKeyPress::monitor)->setProgress($ProgressMonitorEscapeKeyPress::counter);
		$init($System);
		$nc($System::out)->println("Progress bar is in progress"_s);
	}
}

ProgressMonitorEscapeKeyPress$1::ProgressMonitorEscapeKeyPress$1() {
}

$Class* ProgressMonitorEscapeKeyPress$1::load$($String* name, bool initialize) {
	$loadClass(ProgressMonitorEscapeKeyPress$1, name, initialize, &_ProgressMonitorEscapeKeyPress$1_ClassInfo_, allocate$ProgressMonitorEscapeKeyPress$1);
	return class$;
}

$Class* ProgressMonitorEscapeKeyPress$1::class$ = nullptr;