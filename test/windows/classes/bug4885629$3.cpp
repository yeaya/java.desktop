#include <bug4885629$3.h>

#include <bug4885629.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/lang/Error.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SplitPaneUI.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <javax/swing/plaf/basic/BasicSplitPaneUI.h>
#include <jcpp.h>

#undef BGCOLOR

using $bug4885629 = ::bug4885629;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SplitPaneUI = ::javax::swing::plaf::SplitPaneUI;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneUI = ::javax::swing::plaf::basic::BasicSplitPaneUI;

$FieldInfo _bug4885629$3_FieldInfo_[] = {
	{"val$robot", "Ljava/awt/Robot;", nullptr, $FINAL | $SYNTHETIC, $field(bug4885629$3, val$robot)},
	{}
};

$MethodInfo _bug4885629$3_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Robot;)V", "()V", 0, $method(static_cast<void(bug4885629$3::*)($Robot*)>(&bug4885629$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug4885629$3_EnclosingMethodInfo_ = {
	"bug4885629",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug4885629$3_InnerClassesInfo_[] = {
	{"bug4885629$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4885629$3_ClassInfo_ = {
	$ACC_SUPER,
	"bug4885629$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug4885629$3_FieldInfo_,
	_bug4885629$3_MethodInfo_,
	nullptr,
	&_bug4885629$3_EnclosingMethodInfo_,
	_bug4885629$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4885629"
};

$Object* allocate$bug4885629$3($Class* clazz) {
	return $of($alloc(bug4885629$3));
}

void bug4885629$3::init$($Robot* val$robot) {
	$set(this, val$robot, val$robot);
}

void bug4885629$3::run() {
	$useLocalCurrentObjectStackCache();
	$init($bug4885629);
	$var($Rectangle, rect, $nc($($nc(($cast($BasicSplitPaneUI, $($cast($SplitPaneUI, $nc($bug4885629::sp)->getUI())))))->getDivider()))->getBounds());
	$var($Point, p, $nc(rect)->getLocation());
	$SwingUtilities::convertPointToScreen(p, $bug4885629::sp);
	for (int32_t i = 0; i < rect->width; ++i) {
		if (!$nc($bug4885629::BGCOLOR)->equals($($nc(this->val$robot)->getPixelColor($nc(p)->x + i, p->y + rect->height - 1)))) {
			$throwNew($Error, "The divider\'s area has incorrect color."_s);
		}
	}
}

bug4885629$3::bug4885629$3() {
}

$Class* bug4885629$3::load$($String* name, bool initialize) {
	$loadClass(bug4885629$3, name, initialize, &_bug4885629$3_ClassInfo_, allocate$bug4885629$3);
	return class$;
}

$Class* bug4885629$3::class$ = nullptr;