#include <bug6583251$2.h>

#include <bug6583251.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug6583251 = ::bug6583251;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug6583251$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6583251$2::*)()>(&bug6583251$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6583251$2_EnclosingMethodInfo_ = {
	"bug6583251",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6583251$2_InnerClassesInfo_[] = {
	{"bug6583251$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6583251$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6583251$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6583251$2_MethodInfo_,
	nullptr,
	&_bug6583251$2_EnclosingMethodInfo_,
	_bug6583251$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6583251"
};

$Object* allocate$bug6583251$2($Class* clazz) {
	return $of($alloc(bug6583251$2));
}

void bug6583251$2::init$() {
}

void bug6583251$2::run() {
	$init($bug6583251);
	$nc($bug6583251::frame)->dispose();
}

bug6583251$2::bug6583251$2() {
}

$Class* bug6583251$2::load$($String* name, bool initialize) {
	$loadClass(bug6583251$2, name, initialize, &_bug6583251$2_ClassInfo_, allocate$bug6583251$2);
	return class$;
}

$Class* bug6583251$2::class$ = nullptr;