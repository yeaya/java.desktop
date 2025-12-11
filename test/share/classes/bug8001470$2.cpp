#include <bug8001470$2.h>

#include <bug8001470.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug8001470 = ::bug8001470;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug8001470$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8001470$2::*)()>(&bug8001470$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8001470$2_EnclosingMethodInfo_ = {
	"bug8001470",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8001470$2_InnerClassesInfo_[] = {
	{"bug8001470$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8001470$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug8001470$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8001470$2_MethodInfo_,
	nullptr,
	&_bug8001470$2_EnclosingMethodInfo_,
	_bug8001470$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8001470"
};

$Object* allocate$bug8001470$2($Class* clazz) {
	return $of($alloc(bug8001470$2));
}

void bug8001470$2::init$() {
}

void bug8001470$2::run() {
	$init($bug8001470);
	$nc($bug8001470::frame)->dispose();
}

bug8001470$2::bug8001470$2() {
}

$Class* bug8001470$2::load$($String* name, bool initialize) {
	$loadClass(bug8001470$2, name, initialize, &_bug8001470$2_ClassInfo_, allocate$bug8001470$2);
	return class$;
}

$Class* bug8001470$2::class$ = nullptr;