#include <bug6348946$2.h>

#include <bug6348946.h>
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

using $bug6348946 = ::bug6348946;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug6348946$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6348946$2::*)()>(&bug6348946$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6348946$2_EnclosingMethodInfo_ = {
	"bug6348946",
	"stopEDT",
	"()V"
};

$InnerClassInfo _bug6348946$2_InnerClassesInfo_[] = {
	{"bug6348946$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6348946$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6348946$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6348946$2_MethodInfo_,
	nullptr,
	&_bug6348946$2_EnclosingMethodInfo_,
	_bug6348946$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6348946"
};

$Object* allocate$bug6348946$2($Class* clazz) {
	return $of($alloc(bug6348946$2));
}

void bug6348946$2::init$() {
}

void bug6348946$2::run() {
	$init($bug6348946);
	$nc($bug6348946::frame)->dispose();
}

bug6348946$2::bug6348946$2() {
}

$Class* bug6348946$2::load$($String* name, bool initialize) {
	$loadClass(bug6348946$2, name, initialize, &_bug6348946$2_ClassInfo_, allocate$bug6348946$2);
	return class$;
}

$Class* bug6348946$2::class$ = nullptr;