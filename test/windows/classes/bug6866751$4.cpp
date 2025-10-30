#include <bug6866751$4.h>

#include <bug6866751.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug6866751 = ::bug6866751;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug6866751$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6866751$4::*)()>(&bug6866751$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6866751$4_EnclosingMethodInfo_ = {
	"bug6866751",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6866751$4_InnerClassesInfo_[] = {
	{"bug6866751$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6866751$4_ClassInfo_ = {
	$ACC_SUPER,
	"bug6866751$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6866751$4_MethodInfo_,
	nullptr,
	&_bug6866751$4_EnclosingMethodInfo_,
	_bug6866751$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6866751"
};

$Object* allocate$bug6866751$4($Class* clazz) {
	return $of($alloc(bug6866751$4));
}

void bug6866751$4::init$() {
}

void bug6866751$4::run() {
	$init($bug6866751);
	if ($bug6866751::frame != nullptr) {
		$nc($bug6866751::frame)->dispose();
	}
}

bug6866751$4::bug6866751$4() {
}

$Class* bug6866751$4::load$($String* name, bool initialize) {
	$loadClass(bug6866751$4, name, initialize, &_bug6866751$4_ClassInfo_, allocate$bug6866751$4);
	return class$;
}

$Class* bug6866751$4::class$ = nullptr;