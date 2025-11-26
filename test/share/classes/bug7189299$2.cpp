#include <bug7189299$2.h>

#include <bug7189299.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug7189299 = ::bug7189299;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug7189299$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7189299$2::*)()>(&bug7189299$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7189299$2_EnclosingMethodInfo_ = {
	"bug7189299",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7189299$2_InnerClassesInfo_[] = {
	{"bug7189299$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7189299$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug7189299$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7189299$2_MethodInfo_,
	nullptr,
	&_bug7189299$2_EnclosingMethodInfo_,
	_bug7189299$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7189299"
};

$Object* allocate$bug7189299$2($Class* clazz) {
	return $of($alloc(bug7189299$2));
}

void bug7189299$2::init$() {
}

void bug7189299$2::run() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$bug7189299::verifySingleDefaultButtonModelListener();
			$bug7189299::doTest();
			$bug7189299::verifySingleDefaultButtonModelListener();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init($bug7189299);
			$nc($bug7189299::frame)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bug7189299$2::bug7189299$2() {
}

$Class* bug7189299$2::load$($String* name, bool initialize) {
	$loadClass(bug7189299$2, name, initialize, &_bug7189299$2_ClassInfo_, allocate$bug7189299$2);
	return class$;
}

$Class* bug7189299$2::class$ = nullptr;