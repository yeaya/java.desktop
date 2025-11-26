#include <bug8057791$3.h>

#include <bug8057791.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug8057791 = ::bug8057791;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug8057791$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8057791$3::*)()>(&bug8057791$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8057791$3_EnclosingMethodInfo_ = {
	"bug8057791",
	"cleanUp",
	"()V"
};

$InnerClassInfo _bug8057791$3_InnerClassesInfo_[] = {
	{"bug8057791$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8057791$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug8057791$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8057791$3_MethodInfo_,
	nullptr,
	&_bug8057791$3_EnclosingMethodInfo_,
	_bug8057791$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8057791"
};

$Object* allocate$bug8057791$3($Class* clazz) {
	return $of($alloc(bug8057791$3));
}

void bug8057791$3::init$() {
}

void bug8057791$3::run() {
	$init($bug8057791);
	$nc($bug8057791::frame)->dispose();
}

bug8057791$3::bug8057791$3() {
}

$Class* bug8057791$3::load$($String* name, bool initialize) {
	$loadClass(bug8057791$3, name, initialize, &_bug8057791$3_ClassInfo_, allocate$bug8057791$3);
	return class$;
}

$Class* bug8057791$3::class$ = nullptr;