#include <bug4529206$2.h>

#include <bug4529206.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug4529206 = ::bug4529206;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug4529206$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4529206$2::*)()>(&bug4529206$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4529206$2_EnclosingMethodInfo_ = {
	"bug4529206",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4529206$2_InnerClassesInfo_[] = {
	{"bug4529206$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4529206$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4529206$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4529206$2_MethodInfo_,
	nullptr,
	&_bug4529206$2_EnclosingMethodInfo_,
	_bug4529206$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4529206"
};

$Object* allocate$bug4529206$2($Class* clazz) {
	return $of($alloc(bug4529206$2));
}

void bug4529206$2::init$() {
}

void bug4529206$2::run() {
	$init($bug4529206);
	$assignStatic($bug4529206::frame, $new($bug4529206));
}

bug4529206$2::bug4529206$2() {
}

$Class* bug4529206$2::load$($String* name, bool initialize) {
	$loadClass(bug4529206$2, name, initialize, &_bug4529206$2_ClassInfo_, allocate$bug4529206$2);
	return class$;
}

$Class* bug4529206$2::class$ = nullptr;