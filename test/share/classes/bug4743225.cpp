#include <bug4743225.h>

#include <bug4743225$1.h>
#include <bug4743225$2.h>
#include <bug4743225$3.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/PopupMenuListener.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef EXIT_ON_CLOSE

using $bug4743225$1 = ::bug4743225$1;
using $bug4743225$2 = ::bug4743225$2;
using $bug4743225$3 = ::bug4743225$3;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $PopupMenuListener = ::javax::swing::event::PopupMenuListener;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

$FieldInfo _bug4743225_FieldInfo_[] = {
	{"cb", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $STATIC, $staticField(bug4743225, cb)},
	{"flag", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug4743225, flag)},
	{}
};

$MethodInfo _bug4743225_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4743225::*)()>(&bug4743225::init$))},
	{"getPopup", "()Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BasicComboPopup*(*)()>(&bug4743225::getPopup))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&bug4743225::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug4743225_InnerClassesInfo_[] = {
	{"bug4743225$3", nullptr, nullptr, 0},
	{"bug4743225$2", nullptr, nullptr, 0},
	{"bug4743225$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4743225_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4743225",
	"javax.swing.JFrame",
	nullptr,
	_bug4743225_FieldInfo_,
	_bug4743225_MethodInfo_,
	nullptr,
	nullptr,
	_bug4743225_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4743225$3,bug4743225$2,bug4743225$1"
};

$Object* allocate$bug4743225($Class* clazz) {
	return $of($alloc(bug4743225));
}

$JComboBox* bug4743225::cb = nullptr;
$volatile(bool) bug4743225::flag = false;

void bug4743225::init$() {
	$useLocalCurrentObjectStackCache();
	$JFrame::init$();
	setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	setLayout($$new($FlowLayout));
	$assignStatic(bug4743225::cb, $new($JComboBox, $$new($ObjectArray, {
		$of("one"_s),
		$of("two"_s),
		$of("three"_s)
	})));
	$nc(bug4743225::cb)->addPopupMenuListener($$new($bug4743225$1, this));
	add(static_cast<$Component*>(bug4743225::cb));
	pack();
	setLocationRelativeTo(nullptr);
}

$BasicComboPopup* bug4743225::getPopup() {
	$init(bug4743225);
	$useLocalCurrentObjectStackCache();
	$var($AccessibleContext, c, $nc(bug4743225::cb)->getAccessibleContext());
	for (int32_t i = 0; i < $nc(c)->getAccessibleChildrenCount(); ++i) {
		if ($instanceOf($BasicComboPopup, $(c->getAccessibleChild(i)))) {
			return $cast($BasicComboPopup, c->getAccessibleChild(i));
		}
	}
	$throwNew($AssertionError, $of("No BasicComboPopup found"_s));
}

void bug4743225::main($StringArray* args) {
	$init(bug4743225);
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(100);
	$SwingUtilities::invokeAndWait($$new($bug4743225$2));
	robot->waitForIdle();
	$var($Point, point, $nc(bug4743225::cb)->getLocationOnScreen());
	robot->mouseMove($nc(point)->x + 10, point->y + 10);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug4743225$3));
	if (!bug4743225::flag) {
		$throwNew($RuntimeException, "The ComboBox popup wasn\'t correctly updated"_s);
	}
}

bug4743225::bug4743225() {
}

$Class* bug4743225::load$($String* name, bool initialize) {
	$loadClass(bug4743225, name, initialize, &_bug4743225_ClassInfo_, allocate$bug4743225);
	return class$;
}

$Class* bug4743225::class$ = nullptr;