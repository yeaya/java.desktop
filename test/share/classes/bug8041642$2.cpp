#include <bug8041642$2.h>

#include <bug8041642.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <javax/swing/JProgressBar.h>
#include <jcpp.h>

using $bug8041642 = ::bug8041642;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JProgressBar = ::javax::swing::JProgressBar;

$MethodInfo _bug8041642$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8041642$2::*)()>(&bug8041642$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8041642$2_EnclosingMethodInfo_ = {
	"bug8041642",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8041642$2_InnerClassesInfo_[] = {
	{"bug8041642$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8041642$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug8041642$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8041642$2_MethodInfo_,
	nullptr,
	&_bug8041642$2_EnclosingMethodInfo_,
	_bug8041642$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8041642"
};

$Object* allocate$bug8041642$2($Class* clazz) {
	return $of($alloc(bug8041642$2));
}

void bug8041642$2::init$() {
}

void bug8041642$2::run() {
	$init($bug8041642);
	$assignStatic($bug8041642::point, $nc($bug8041642::bar)->getLocationOnScreen());
}

bug8041642$2::bug8041642$2() {
}

$Class* bug8041642$2::load$($String* name, bool initialize) {
	$loadClass(bug8041642$2, name, initialize, &_bug8041642$2_ClassInfo_, allocate$bug8041642$2);
	return class$;
}

$Class* bug8041642$2::class$ = nullptr;