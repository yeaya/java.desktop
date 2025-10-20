#include <NormalBoundsTest$3.h>

#include <NormalBoundsTest.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

#undef BUTTON1_MASK

using $NormalBoundsTest = ::NormalBoundsTest;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JInternalFrame = ::javax::swing::JInternalFrame;

$FieldInfo _NormalBoundsTest$3_FieldInfo_[] = {
	{"val$robot", "Ljava/awt/Robot;", nullptr, $FINAL | $SYNTHETIC, $field(NormalBoundsTest$3, val$robot)},
	{}
};

$MethodInfo _NormalBoundsTest$3_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Robot;)V", "()V", 0, $method(static_cast<void(NormalBoundsTest$3::*)($Robot*)>(&NormalBoundsTest$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NormalBoundsTest$3_EnclosingMethodInfo_ = {
	"NormalBoundsTest",
	"executeTest",
	"(Ljava/awt/Robot;)V"
};

$InnerClassInfo _NormalBoundsTest$3_InnerClassesInfo_[] = {
	{"NormalBoundsTest$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NormalBoundsTest$3_ClassInfo_ = {
	$ACC_SUPER,
	"NormalBoundsTest$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_NormalBoundsTest$3_FieldInfo_,
	_NormalBoundsTest$3_MethodInfo_,
	nullptr,
	&_NormalBoundsTest$3_EnclosingMethodInfo_,
	_NormalBoundsTest$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"NormalBoundsTest"
};

$Object* allocate$NormalBoundsTest$3($Class* clazz) {
	return $of($alloc(NormalBoundsTest$3));
}

void NormalBoundsTest$3::init$($Robot* val$robot) {
	$set(this, val$robot, val$robot);
}

void NormalBoundsTest$3::run() {
	$useLocalCurrentObjectStackCache();
	$init($NormalBoundsTest);
	$var($Point, loc, $nc($NormalBoundsTest::internalFrame)->getLocationOnScreen());
	$var($Robot, var$0, this->val$robot);
	$var($Point, var$1, $new($Point, $nc(loc)->x + 80, loc->y + 12));
	$NormalBoundsTest::drag(var$0, var$1, $$new($Point, $nc(loc)->x + 100, loc->y + 40), $InputEvent::BUTTON1_MASK);
}

NormalBoundsTest$3::NormalBoundsTest$3() {
}

$Class* NormalBoundsTest$3::load$($String* name, bool initialize) {
	$loadClass(NormalBoundsTest$3, name, initialize, &_NormalBoundsTest$3_ClassInfo_, allocate$NormalBoundsTest$3);
	return class$;
}

$Class* NormalBoundsTest$3::class$ = nullptr;