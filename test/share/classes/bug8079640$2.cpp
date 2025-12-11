#include <bug8079640$2.h>

#include <bug8079640.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug8079640 = ::bug8079640;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug8079640$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8079640$2::*)()>(&bug8079640$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8079640$2_EnclosingMethodInfo_ = {
	"bug8079640",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8079640$2_InnerClassesInfo_[] = {
	{"bug8079640$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8079640$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug8079640$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8079640$2_MethodInfo_,
	nullptr,
	&_bug8079640$2_EnclosingMethodInfo_,
	_bug8079640$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8079640"
};

$Object* allocate$bug8079640$2($Class* clazz) {
	return $of($alloc(bug8079640$2));
}

void bug8079640$2::init$() {
}

void bug8079640$2::run() {
	$init($bug8079640);
	$nc($bug8079640::frame)->dispose();
}

bug8079640$2::bug8079640$2() {
}

$Class* bug8079640$2::load$($String* name, bool initialize) {
	$loadClass(bug8079640$2, name, initialize, &_bug8079640$2_ClassInfo_, allocate$bug8079640$2);
	return class$;
}

$Class* bug8079640$2::class$ = nullptr;