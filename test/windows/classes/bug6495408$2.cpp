#include <bug6495408$2.h>

#include <bug6495408.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6495408 = ::bug6495408;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6495408$2_FieldInfo_[] = {
	{"val$robot", "Ljava/awt/Robot;", nullptr, $FINAL | $SYNTHETIC, $field(bug6495408$2, val$robot)},
	{"val$p", "Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug6495408$2, val$p)},
	{"val$d", "Ljava/awt/Rectangle;", nullptr, $FINAL | $SYNTHETIC, $field(bug6495408$2, val$d)},
	{}
};

$MethodInfo _bug6495408$2_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Rectangle;Ljava/awt/Point;Ljava/awt/Robot;)V", "()V", 0, $method(static_cast<void(bug6495408$2::*)($Rectangle*,$Point*,$Robot*)>(&bug6495408$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6495408$2_EnclosingMethodInfo_ = {
	"bug6495408",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6495408$2_InnerClassesInfo_[] = {
	{"bug6495408$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6495408$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6495408$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug6495408$2_FieldInfo_,
	_bug6495408$2_MethodInfo_,
	nullptr,
	&_bug6495408$2_EnclosingMethodInfo_,
	_bug6495408$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6495408"
};

$Object* allocate$bug6495408$2($Class* clazz) {
	return $of($alloc(bug6495408$2));
}

void bug6495408$2::init$($Rectangle* val$d, $Point* val$p, $Robot* val$robot) {
	$set(this, val$d, val$d);
	$set(this, val$p, val$p);
	$set(this, val$robot, val$robot);
}

void bug6495408$2::run() {
	$init($bug6495408);
	int32_t tab = $nc($bug6495408::tabbedPane)->getTabCount() - 1;
	$var($Rectangle, bounds, $nc($bug6495408::tabbedPane)->getBoundsAt(tab));
	if (bounds != nullptr) {
		$nc(this->val$d)->setBounds(bounds);
		$nc(this->val$p)->setLocation($nc(this->val$d)->x + $nc(this->val$d)->width / 2, $nc(this->val$d)->y + $nc(this->val$d)->height / 2);
		$SwingUtilities::convertPointToScreen(this->val$p, $bug6495408::tabbedPane);
		$nc(this->val$robot)->mouseMove($nc(this->val$p)->x, $nc(this->val$p)->y + $nc(this->val$d)->height);
		$nc($bug6495408::tabbedPane)->addTab("Hello"_s, nullptr);
	}
}

bug6495408$2::bug6495408$2() {
}

$Class* bug6495408$2::load$($String* name, bool initialize) {
	$loadClass(bug6495408$2, name, initialize, &_bug6495408$2_ClassInfo_, allocate$bug6495408$2);
	return class$;
}

$Class* bug6495408$2::class$ = nullptr;