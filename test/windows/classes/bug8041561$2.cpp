#include <bug8041561$2.h>

#include <bug8041561.h>
#include <java/awt/AWTException.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRadioButton.h>
#include <jcpp.h>

#undef BLUE

using $bug8041561 = ::bug8041561;
using $AWTException = ::java::awt::AWTException;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JRadioButton = ::javax::swing::JRadioButton;

$MethodInfo _bug8041561$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8041561$2::*)()>(&bug8041561$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8041561$2_EnclosingMethodInfo_ = {
	"bug8041561",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8041561$2_InnerClassesInfo_[] = {
	{"bug8041561$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8041561$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug8041561$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug8041561$2_MethodInfo_,
	nullptr,
	&_bug8041561$2_EnclosingMethodInfo_,
	_bug8041561$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8041561"
};

$Object* allocate$bug8041561$2($Class* clazz) {
	return $of($alloc(bug8041561$2));
}

void bug8041561$2::init$() {
}

void bug8041561$2::run() {
	try {
		$init($bug8041561);
		$var($Point, point, $nc($bug8041561::radioButton)->getLocationOnScreen());
		int32_t var$0 = $cast(int32_t, $nc(point)->getX());
		int32_t x = var$0 + $nc($bug8041561::radioButton)->getWidth() / 2;
		int32_t var$1 = $cast(int32_t, point->getY());
		int32_t y = var$1 + $nc($bug8041561::radioButton)->getHeight() / 2;
		$var($Robot, robot, $new($Robot));
		$var($Color, color, robot->getPixelColor(x, y));
		$init($Color);
		if (!$nc($Color::BLUE)->equals(color)) {
			$throwNew($RuntimeException, "JRadioButton is opaque"_s);
		}
	} catch ($AWTException&) {
		$var($AWTException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

bug8041561$2::bug8041561$2() {
}

$Class* bug8041561$2::load$($String* name, bool initialize) {
	$loadClass(bug8041561$2, name, initialize, &_bug8041561$2_ClassInfo_, allocate$bug8041561$2);
	return class$;
}

$Class* bug8041561$2::class$ = nullptr;