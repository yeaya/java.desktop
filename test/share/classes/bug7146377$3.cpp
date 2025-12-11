#include <bug7146377$3.h>

#include <bug7146377.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug7146377 = ::bug7146377;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug7146377$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7146377$3::*)()>(&bug7146377$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7146377$3_EnclosingMethodInfo_ = {
	"bug7146377",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7146377$3_InnerClassesInfo_[] = {
	{"bug7146377$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7146377$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug7146377$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7146377$3_MethodInfo_,
	nullptr,
	&_bug7146377$3_EnclosingMethodInfo_,
	_bug7146377$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7146377"
};

$Object* allocate$bug7146377$3($Class* clazz) {
	return $of($alloc(bug7146377$3));
}

void bug7146377$3::init$() {
}

void bug7146377$3::run() {
	$init($bug7146377);
	$nc($bug7146377::frame)->dispose();
}

bug7146377$3::bug7146377$3() {
}

$Class* bug7146377$3::load$($String* name, bool initialize) {
	$loadClass(bug7146377$3, name, initialize, &_bug7146377$3_ClassInfo_, allocate$bug7146377$3);
	return class$;
}

$Class* bug7146377$3::class$ = nullptr;