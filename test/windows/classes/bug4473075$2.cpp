#include <bug4473075$2.h>

#include <bug4473075.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug4473075 = ::bug4473075;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug4473075$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4473075$2::*)()>(&bug4473075$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4473075$2_EnclosingMethodInfo_ = {
	"bug4473075",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4473075$2_InnerClassesInfo_[] = {
	{"bug4473075$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4473075$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4473075$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4473075$2_MethodInfo_,
	nullptr,
	&_bug4473075$2_EnclosingMethodInfo_,
	_bug4473075$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4473075"
};

$Object* allocate$bug4473075$2($Class* clazz) {
	return $of($alloc(bug4473075$2));
}

void bug4473075$2::init$() {
}

void bug4473075$2::run() {
	$init($bug4473075);
	$nc($bug4473075::frame)->dispose();
}

bug4473075$2::bug4473075$2() {
}

$Class* bug4473075$2::load$($String* name, bool initialize) {
	$loadClass(bug4473075$2, name, initialize, &_bug4473075$2_ClassInfo_, allocate$bug4473075$2);
	return class$;
}

$Class* bug4473075$2::class$ = nullptr;