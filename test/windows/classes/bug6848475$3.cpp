#include <bug6848475$3.h>

#include <bug6848475.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <javax/swing/JSlider.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK

using $bug6848475 = ::bug6848475;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JSlider = ::javax::swing::JSlider;

$MethodInfo _bug6848475$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6848475$3::*)()>(&bug6848475$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6848475$3_EnclosingMethodInfo_ = {
	"bug6848475",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6848475$3_InnerClassesInfo_[] = {
	{"bug6848475$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6848475$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug6848475$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6848475$3_MethodInfo_,
	nullptr,
	&_bug6848475$3_EnclosingMethodInfo_,
	_bug6848475$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6848475"
};

$Object* allocate$bug6848475$3($Class* clazz) {
	return $of($alloc(bug6848475$3));
}

void bug6848475$3::init$() {
}

void bug6848475$3::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6848475);
	$bug6848475::thumbRectX = $nc($($bug6848475::getThumbRectField()))->x;
	$var($Point, p, $nc($bug6848475::slider)->getLocationOnScreen());
	$nc($bug6848475::robot)->mouseMove($nc(p)->x, p->y);
	$nc($bug6848475::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	$nc($bug6848475::robot)->mouseMove($nc(p)->x + 20, p->y);
	$nc($bug6848475::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
}

bug6848475$3::bug6848475$3() {
}

$Class* bug6848475$3::load$($String* name, bool initialize) {
	$loadClass(bug6848475$3, name, initialize, &_bug6848475$3_ClassInfo_, allocate$bug6848475$3);
	return class$;
}

$Class* bug6848475$3::class$ = nullptr;