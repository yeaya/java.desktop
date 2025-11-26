#include <bug6989617$5.h>

#include <bug6989617$MyPanel.h>
#include <bug6989617.h>
#include <java/awt/Rectangle.h>
#include <jcpp.h>

using $bug6989617 = ::bug6989617;
using $bug6989617$MyPanel = ::bug6989617$MyPanel;
using $Rectangle = ::java::awt::Rectangle;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;

$MethodInfo _bug6989617$5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6989617$5::*)()>(&bug6989617$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6989617$5_EnclosingMethodInfo_ = {
	"bug6989617",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6989617$5_InnerClassesInfo_[] = {
	{"bug6989617$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6989617$5_ClassInfo_ = {
	$ACC_SUPER,
	"bug6989617$5",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6989617$5_MethodInfo_,
	nullptr,
	&_bug6989617$5_EnclosingMethodInfo_,
	_bug6989617$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6989617"
};

$Object* allocate$bug6989617$5($Class* clazz) {
	return $of($alloc(bug6989617$5));
}

void bug6989617$5::init$() {
}

void bug6989617$5::run() {
	$init($bug6989617);
	if ($nc($bug6989617::panel)->getPaintRectangle() != nullptr) {
		$throwNew($RuntimeException, "paint rectangle is not null"_s);
	}
	$nc($System::out)->println("Test passed..."_s);
}

bug6989617$5::bug6989617$5() {
}

$Class* bug6989617$5::load$($String* name, bool initialize) {
	$loadClass(bug6989617$5, name, initialize, &_bug6989617$5_ClassInfo_, allocate$bug6989617$5);
	return class$;
}

$Class* bug6989617$5::class$ = nullptr;