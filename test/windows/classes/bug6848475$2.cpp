#include <bug6848475$2.h>

#include <bug6848475.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JSlider.h>
#include <jcpp.h>

using $bug6848475 = ::bug6848475;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JSlider = ::javax::swing::JSlider;

$MethodInfo _bug6848475$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6848475$2::*)()>(&bug6848475$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6848475$2_EnclosingMethodInfo_ = {
	"bug6848475",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6848475$2_InnerClassesInfo_[] = {
	{"bug6848475$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6848475$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6848475$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6848475$2_MethodInfo_,
	nullptr,
	&_bug6848475$2_EnclosingMethodInfo_,
	_bug6848475$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6848475"
};

$Object* allocate$bug6848475$2($Class* clazz) {
	return $of($alloc(bug6848475$2));
}

void bug6848475$2::init$() {
}

void bug6848475$2::run() {
	$init($bug6848475);
	$var($Point, p, $nc($bug6848475::slider)->getLocationOnScreen());
	$nc($bug6848475::robot)->mouseMove($nc(p)->x, p->y);
}

bug6848475$2::bug6848475$2() {
}

$Class* bug6848475$2::load$($String* name, bool initialize) {
	$loadClass(bug6848475$2, name, initialize, &_bug6848475$2_ClassInfo_, allocate$bug6848475$2);
	return class$;
}

$Class* bug6848475$2::class$ = nullptr;