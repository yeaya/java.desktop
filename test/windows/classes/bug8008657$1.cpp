#include <bug8008657$1.h>

#include <bug8008657.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug8008657 = ::bug8008657;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug8008657$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8008657$1::*)()>(&bug8008657$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8008657$1_EnclosingMethodInfo_ = {
	"bug8008657",
	"cleanUp",
	"()V"
};

$InnerClassInfo _bug8008657$1_InnerClassesInfo_[] = {
	{"bug8008657$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8008657$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8008657$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8008657$1_MethodInfo_,
	nullptr,
	&_bug8008657$1_EnclosingMethodInfo_,
	_bug8008657$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8008657"
};

$Object* allocate$bug8008657$1($Class* clazz) {
	return $of($alloc(bug8008657$1));
}

void bug8008657$1::init$() {
}

void bug8008657$1::run() {
	$init($bug8008657);
	$nc($bug8008657::frame)->dispose();
}

bug8008657$1::bug8008657$1() {
}

$Class* bug8008657$1::load$($String* name, bool initialize) {
	$loadClass(bug8008657$1, name, initialize, &_bug8008657$1_ClassInfo_, allocate$bug8008657$1);
	return class$;
}

$Class* bug8008657$1::class$ = nullptr;