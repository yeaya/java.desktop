#include <bug6542335$2.h>

#include <bug6542335$MyScrollBarUI.h>
#include <bug6542335.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <jcpp.h>

#undef BUTTON1_MASK

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $bug6542335 = ::bug6542335;
using $bug6542335$MyScrollBarUI = ::bug6542335$MyScrollBarUI;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;

$FieldInfo _bug6542335$2_FieldInfo_[] = {
	{"val$robot", "Ljava/awt/Robot;", nullptr, $FINAL | $SYNTHETIC, $field(bug6542335$2, val$robot)},
	{"val$thumbBounds", "[Ljava/awt/Rectangle;", nullptr, $FINAL | $SYNTHETIC, $field(bug6542335$2, val$thumbBounds)},
	{}
};

$MethodInfo _bug6542335$2_MethodInfo_[] = {
	{"<init>", "([Ljava/awt/Rectangle;Ljava/awt/Robot;)V", "()V", 0, $method(static_cast<void(bug6542335$2::*)($RectangleArray*,$Robot*)>(&bug6542335$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6542335$2_EnclosingMethodInfo_ = {
	"bug6542335",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6542335$2_InnerClassesInfo_[] = {
	{"bug6542335$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6542335$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6542335$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6542335$2_FieldInfo_,
	_bug6542335$2_MethodInfo_,
	nullptr,
	&_bug6542335$2_EnclosingMethodInfo_,
	_bug6542335$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6542335"
};

$Object* allocate$bug6542335$2($Class* clazz) {
	return $of($alloc(bug6542335$2));
}

void bug6542335$2::init$($RectangleArray* val$thumbBounds, $Robot* val$robot) {
	$set(this, val$thumbBounds, val$thumbBounds);
	$set(this, val$robot, val$robot);
}

void bug6542335$2::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug6542335);
	$nc(this->val$thumbBounds)->set(0, $$new($Rectangle, $($nc($bug6542335::ui)->getThumbBounds())));
	$var($Point, l, $nc($bug6542335::sb)->getLocationOnScreen());
	int32_t var$0 = $nc(l)->x + $cast(int32_t, (0.75 * $nc($bug6542335::sb)->getWidth()));
	$nc(this->val$robot)->mouseMove(var$0, l->y + $nc($bug6542335::sb)->getHeight() / 2);
	$nc(this->val$robot)->mousePress($InputEvent::BUTTON1_MASK);
	$nc(this->val$robot)->mouseRelease($InputEvent::BUTTON1_MASK);
}

bug6542335$2::bug6542335$2() {
}

$Class* bug6542335$2::load$($String* name, bool initialize) {
	$loadClass(bug6542335$2, name, initialize, &_bug6542335$2_ClassInfo_, allocate$bug6542335$2);
	return class$;
}

$Class* bug6542335$2::class$ = nullptr;