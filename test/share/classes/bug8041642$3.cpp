#include <bug8041642$3.h>

#include <bug8041642.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug8041642 = ::bug8041642;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug8041642$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8041642$3::*)()>(&bug8041642$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8041642$3_EnclosingMethodInfo_ = {
	"bug8041642",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8041642$3_InnerClassesInfo_[] = {
	{"bug8041642$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8041642$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug8041642$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8041642$3_MethodInfo_,
	nullptr,
	&_bug8041642$3_EnclosingMethodInfo_,
	_bug8041642$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8041642"
};

$Object* allocate$bug8041642$3($Class* clazz) {
	return $of($alloc(bug8041642$3));
}

void bug8041642$3::init$() {
}

void bug8041642$3::run() {
	$init($bug8041642);
	$nc($bug8041642::frame)->dispose();
}

bug8041642$3::bug8041642$3() {
}

$Class* bug8041642$3::load$($String* name, bool initialize) {
	$loadClass(bug8041642$3, name, initialize, &_bug8041642$3_ClassInfo_, allocate$bug8041642$3);
	return class$;
}

$Class* bug8041642$3::class$ = nullptr;