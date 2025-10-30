#include <bug4530474$2.h>

#include <bug4530474.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

#undef TEST_COLOR

using $bug4530474 = ::bug4530474;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JEditorPane = ::javax::swing::JEditorPane;

$FieldInfo _bug4530474$2_FieldInfo_[] = {
	{"val$robot", "Ljava/awt/Robot;", nullptr, $FINAL | $SYNTHETIC, $field(bug4530474$2, val$robot)},
	{}
};

$MethodInfo _bug4530474$2_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Robot;)V", "()V", 0, $method(static_cast<void(bug4530474$2::*)($Robot*)>(&bug4530474$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4530474$2_EnclosingMethodInfo_ = {
	"bug4530474",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4530474$2_InnerClassesInfo_[] = {
	{"bug4530474$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4530474$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug4530474$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4530474$2_FieldInfo_,
	_bug4530474$2_MethodInfo_,
	nullptr,
	&_bug4530474$2_EnclosingMethodInfo_,
	_bug4530474$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4530474"
};

$Object* allocate$bug4530474$2($Class* clazz) {
	return $of($alloc(bug4530474$2));
}

void bug4530474$2::init$($Robot* val$robot) {
	$set(this, val$robot, val$robot);
}

void bug4530474$2::run() {
	$useLocalCurrentObjectStackCache();
	bool passed = false;
	$init($bug4530474);
	$var($Point, p, $nc($bug4530474::jep)->getLocationOnScreen());
	$var($Dimension, d, $nc($bug4530474::jep)->getSize());
	int32_t x0 = $nc(p)->x;
	int32_t y = p->y + $nc(d)->height / 3;
	$var($StringBuilder, builder, $new($StringBuilder, "Test color: "_s));
	builder->append($($nc($bug4530474::TEST_COLOR)->toString()));
	builder->append(" resut colors: "_s);
	for (int32_t x = x0; x < x0 + d->width; ++x) {
		$var($Color, color, $nc(this->val$robot)->getPixelColor(x, y));
		builder->append($of(color));
		if ($nc($bug4530474::TEST_COLOR)->equals(color)) {
			passed = true;
			break;
		}
	}
	if (!passed) {
		$throwNew($RuntimeException, $$str({"Test Fail. "_s, $(builder->toString())}));
	}
}

bug4530474$2::bug4530474$2() {
}

$Class* bug4530474$2::load$($String* name, bool initialize) {
	$loadClass(bug4530474$2, name, initialize, &_bug4530474$2_ClassInfo_, allocate$bug4530474$2);
	return class$;
}

$Class* bug4530474$2::class$ = nullptr;