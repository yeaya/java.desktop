#include <bug8041982$1.h>

#include <bug8041982.h>
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

using $bug8041982 = ::bug8041982;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _bug8041982$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8041982$1::*)()>(&bug8041982$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8041982$1_EnclosingMethodInfo_ = {
	"bug8041982",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8041982$1_InnerClassesInfo_[] = {
	{"bug8041982$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8041982$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8041982$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8041982$1_MethodInfo_,
	nullptr,
	&_bug8041982$1_EnclosingMethodInfo_,
	_bug8041982$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8041982"
};

$Object* allocate$bug8041982$1($Class* clazz) {
	return $of($alloc(bug8041982$1));
}

void bug8041982$1::init$() {
}

void bug8041982$1::run() {
	$$new($bug8041982)->setVisible(true);
}

bug8041982$1::bug8041982$1() {
}

$Class* bug8041982$1::load$($String* name, bool initialize) {
	$loadClass(bug8041982$1, name, initialize, &_bug8041982$1_ClassInfo_, allocate$bug8041982$1);
	return class$;
}

$Class* bug8041982$1::class$ = nullptr;