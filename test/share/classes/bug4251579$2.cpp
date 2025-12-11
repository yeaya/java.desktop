#include <bug4251579$2.h>

#include <bug4251579.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $bug4251579 = ::bug4251579;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JLabel = ::javax::swing::JLabel;

$FieldInfo _bug4251579$2_FieldInfo_[] = {
	{"val$robot", "Ljava/awt/Robot;", nullptr, $FINAL | $SYNTHETIC, $field(bug4251579$2, val$robot)},
	{}
};

$MethodInfo _bug4251579$2_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Robot;)V", "()V", 0, $method(static_cast<void(bug4251579$2::*)($Robot*)>(&bug4251579$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4251579$2_EnclosingMethodInfo_ = {
	"bug4251579",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4251579$2_InnerClassesInfo_[] = {
	{"bug4251579$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4251579$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4251579$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4251579$2_FieldInfo_,
	_bug4251579$2_MethodInfo_,
	nullptr,
	&_bug4251579$2_EnclosingMethodInfo_,
	_bug4251579$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4251579"
};

$Object* allocate$bug4251579$2($Class* clazz) {
	return $of($alloc(bug4251579$2));
}

void bug4251579$2::init$($Robot* val$robot) {
	$set(this, val$robot, val$robot);
}

void bug4251579$2::run() {
	$useLocalCurrentObjectStackCache();
	bool passed = false;
	$init($bug4251579);
	$var($Point, p, $nc($bug4251579::htmlComponent)->getLocationOnScreen());
	$var($Dimension, d, $nc($bug4251579::htmlComponent)->getSize());
	int32_t x0 = $nc(p)->x;
	int32_t y = p->y + $nc(d)->height / 2;
	for (int32_t x = x0; x < x0 + d->width; ++x) {
		$init($Color);
		if ($nc($($nc(this->val$robot)->getPixelColor(x, y)))->equals($Color::blue)) {
			passed = true;
			break;
		}
	}
	if (!passed) {
		$throwNew($RuntimeException, "Test failed."_s);
	}
}

bug4251579$2::bug4251579$2() {
}

$Class* bug4251579$2::load$($String* name, bool initialize) {
	$loadClass(bug4251579$2, name, initialize, &_bug4251579$2_ClassInfo_, allocate$bug4251579$2);
	return class$;
}

$Class* bug4251579$2::class$ = nullptr;