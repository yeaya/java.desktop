#include <bug4743225$2.h>

#include <bug4743225.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug4743225 = ::bug4743225;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug4743225$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4743225$2::*)()>(&bug4743225$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4743225$2_EnclosingMethodInfo_ = {
	"bug4743225",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4743225$2_InnerClassesInfo_[] = {
	{"bug4743225$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4743225$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4743225$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug4743225$2_MethodInfo_,
	nullptr,
	&_bug4743225$2_EnclosingMethodInfo_,
	_bug4743225$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4743225"
};

$Object* allocate$bug4743225$2($Class* clazz) {
	return $of($alloc(bug4743225$2));
}

void bug4743225$2::init$() {
}

void bug4743225$2::run() {
	$$new($bug4743225)->setVisible(true);
}

bug4743225$2::bug4743225$2() {
}

$Class* bug4743225$2::load$($String* name, bool initialize) {
	$loadClass(bug4743225$2, name, initialize, &_bug4743225$2_ClassInfo_, allocate$bug4743225$2);
	return class$;
}

$Class* bug4743225$2::class$ = nullptr;