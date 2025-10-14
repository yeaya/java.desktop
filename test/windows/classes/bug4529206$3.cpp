#include <bug4529206$3.h>

#include <bug4529206.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $bug4529206 = ::bug4529206;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _bug4529206$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4529206$3::*)()>(&bug4529206$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4529206$3_EnclosingMethodInfo_ = {
	"bug4529206",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4529206$3_InnerClassesInfo_[] = {
	{"bug4529206$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4529206$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug4529206$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4529206$3_MethodInfo_,
	nullptr,
	&_bug4529206$3_EnclosingMethodInfo_,
	_bug4529206$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4529206"
};

$Object* allocate$bug4529206$3($Class* clazz) {
	return $of($alloc(bug4529206$3));
}

void bug4529206$3::init$() {
}

void bug4529206$3::run() {
	$init($bug4529206);
	if ($nc($bug4529206::frame)->isFocused()) {
		$throw($$new($RuntimeException, "setFloating does not work correctly"_s));
	}
}

bug4529206$3::bug4529206$3() {
}

$Class* bug4529206$3::load$($String* name, bool initialize) {
	$loadClass(bug4529206$3, name, initialize, &_bug4529206$3_ClassInfo_, allocate$bug4529206$3);
	return class$;
}

$Class* bug4529206$3::class$ = nullptr;