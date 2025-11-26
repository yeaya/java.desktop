#include <bug7049024$6.h>

#include <bug7049024.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug7049024 = ::bug7049024;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug7049024$6_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7049024$6::*)()>(&bug7049024$6::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7049024$6_EnclosingMethodInfo_ = {
	"bug7049024",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7049024$6_InnerClassesInfo_[] = {
	{"bug7049024$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7049024$6_ClassInfo_ = {
	$ACC_SUPER,
	"bug7049024$6",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7049024$6_MethodInfo_,
	nullptr,
	&_bug7049024$6_EnclosingMethodInfo_,
	_bug7049024$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7049024"
};

$Object* allocate$bug7049024$6($Class* clazz) {
	return $of($alloc(bug7049024$6));
}

void bug7049024$6::init$() {
}

void bug7049024$6::run() {
	$init($bug7049024);
	$nc($bug7049024::frame)->dispose();
}

bug7049024$6::bug7049024$6() {
}

$Class* bug7049024$6::load$($String* name, bool initialize) {
	$loadClass(bug7049024$6, name, initialize, &_bug7049024$6_ClassInfo_, allocate$bug7049024$6);
	return class$;
}

$Class* bug7049024$6::class$ = nullptr;