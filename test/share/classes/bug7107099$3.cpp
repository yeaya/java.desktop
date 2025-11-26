#include <bug7107099$3.h>

#include <bug7107099.h>
#include <java/awt/Window.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <jcpp.h>

using $bug7107099 = ::bug7107099;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JFrame = ::javax::swing::JFrame;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;

$MethodInfo _bug7107099$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7107099$3::*)()>(&bug7107099$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7107099$3_EnclosingMethodInfo_ = {
	"bug7107099",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7107099$3_InnerClassesInfo_[] = {
	{"bug7107099$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7107099$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug7107099$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7107099$3_MethodInfo_,
	nullptr,
	&_bug7107099$3_EnclosingMethodInfo_,
	_bug7107099$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7107099"
};

$Object* allocate$bug7107099$3($Class* clazz) {
	return $of($alloc(bug7107099$3));
}

void bug7107099$3::init$() {
}

void bug7107099$3::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug7107099);
	$var($BoundedRangeModel, model, $nc($($nc($bug7107099::scrollPane)->getVerticalScrollBar()))->getModel());
	bool var$2 = $bug7107099::value != $nc(model)->getValue();
	bool var$1 = var$2 || $bug7107099::min != $nc(model)->getMinimum();
	bool var$0 = var$1 || $bug7107099::max != $nc(model)->getMaximum();
	if (var$0 || $bug7107099::extent != $nc(model)->getExtent()) {
		$throwNew($RuntimeException, "Test bug7107099 failed"_s);
	}
	$nc($System::out)->println("Test bug7107099 passed"_s);
	$nc($bug7107099::frame)->dispose();
}

bug7107099$3::bug7107099$3() {
}

$Class* bug7107099$3::load$($String* name, bool initialize) {
	$loadClass(bug7107099$3, name, initialize, &_bug7107099$3_ClassInfo_, allocate$bug7107099$3);
	return class$;
}

$Class* bug7107099$3::class$ = nullptr;