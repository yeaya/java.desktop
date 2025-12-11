#include <javax/swing/Autoscroller.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/Timer.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

#undef NOBUTTON

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $Timer = ::javax::swing::Timer;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;

namespace javax {
	namespace swing {

$FieldInfo _Autoscroller_FieldInfo_[] = {
	{"sharedInstance", "Ljavax/swing/Autoscroller;", nullptr, $PRIVATE | $STATIC, $staticField(Autoscroller, sharedInstance)},
	{"event", "Ljava/awt/event/MouseEvent;", nullptr, $PRIVATE | $STATIC, $staticField(Autoscroller, event)},
	{"timer", "Ljavax/swing/Timer;", nullptr, $PRIVATE | $STATIC, $staticField(Autoscroller, timer)},
	{"component", "Ljavax/swing/JComponent;", nullptr, $PRIVATE | $STATIC, $staticField(Autoscroller, component)},
	{}
};

$MethodInfo _Autoscroller_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Autoscroller::*)()>(&Autoscroller::init$))},
	{"_isRunning", "(Ljavax/swing/JComponent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Autoscroller::*)($JComponent*)>(&Autoscroller::_isRunning))},
	{"_processMouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(Autoscroller::*)($MouseEvent*)>(&Autoscroller::_processMouseDragged))},
	{"_stop", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(Autoscroller::*)($JComponent*)>(&Autoscroller::_stop))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"isRunning", "(Ljavax/swing/JComponent;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JComponent*)>(&Autoscroller::isRunning))},
	{"processMouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MouseEvent*)>(&Autoscroller::processMouseDragged))},
	{"start", "(Ljavax/swing/JComponent;Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(Autoscroller::*)($JComponent*,$MouseEvent*)>(&Autoscroller::start))},
	{"stop", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*)>(&Autoscroller::stop))},
	{}
};

$ClassInfo _Autoscroller_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.Autoscroller",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_Autoscroller_FieldInfo_,
	_Autoscroller_MethodInfo_
};

$Object* allocate$Autoscroller($Class* clazz) {
	return $of($alloc(Autoscroller));
}

Autoscroller* Autoscroller::sharedInstance = nullptr;
$MouseEvent* Autoscroller::event = nullptr;
$Timer* Autoscroller::timer = nullptr;
$JComponent* Autoscroller::component = nullptr;

void Autoscroller::stop($JComponent* c) {
	$init(Autoscroller);
	$nc(Autoscroller::sharedInstance)->_stop(c);
}

bool Autoscroller::isRunning($JComponent* c) {
	$init(Autoscroller);
	return $nc(Autoscroller::sharedInstance)->_isRunning(c);
}

void Autoscroller::processMouseDragged($MouseEvent* e) {
	$init(Autoscroller);
	$nc(Autoscroller::sharedInstance)->_processMouseDragged(e);
}

void Autoscroller::init$() {
}

void Autoscroller::start($JComponent* c, $MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Point, screenLocation, $nc(c)->getLocationOnScreen());
	if (Autoscroller::component != c) {
		_stop(Autoscroller::component);
	}
	$assignStatic(Autoscroller::component, c);
	$var($Component, var$0, static_cast<$Component*>(Autoscroller::component));
	int32_t var$1 = $nc(e)->getID();
	int64_t var$2 = e->getWhen();
	int32_t var$3 = e->getModifiers();
	int32_t var$4 = e->getX() + $nc(screenLocation)->x;
	int32_t var$5 = e->getY() + screenLocation->y;
	int32_t var$6 = e->getXOnScreen();
	int32_t var$7 = e->getYOnScreen();
	int32_t var$8 = e->getClickCount();
	$assignStatic(Autoscroller::event, $new($MouseEvent, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, e->isPopupTrigger(), $MouseEvent::NOBUTTON));
	$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
	$nc(meAccessor)->setCausedByTouchEvent(Autoscroller::event, meAccessor->isCausedByTouchEvent(e));
	if (Autoscroller::timer == nullptr) {
		$assignStatic(Autoscroller::timer, $new($Timer, 100, this));
	}
	if (!$nc(Autoscroller::timer)->isRunning()) {
		$nc(Autoscroller::timer)->start();
	}
}

void Autoscroller::_stop($JComponent* c) {
	if (Autoscroller::component == c) {
		if (Autoscroller::timer != nullptr) {
			$nc(Autoscroller::timer)->stop();
		}
		$assignStatic(Autoscroller::timer, nullptr);
		$assignStatic(Autoscroller::event, nullptr);
		$assignStatic(Autoscroller::component, nullptr);
	}
}

bool Autoscroller::_isRunning($JComponent* c) {
	return (c == Autoscroller::component && Autoscroller::timer != nullptr && $nc(Autoscroller::timer)->isRunning());
}

void Autoscroller::_processMouseDragged($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, component, $cast($JComponent, $nc(e)->getComponent()));
	bool stop = true;
	if ($nc(component)->isShowing()) {
		$var($Rectangle, visibleRect, component->getVisibleRect());
		int32_t var$0 = e->getX();
		stop = $nc(visibleRect)->contains(var$0, e->getY());
	}
	if (stop) {
		_stop(component);
	} else {
		start(component, e);
	}
}

void Autoscroller::actionPerformed($ActionEvent* x) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, component, Autoscroller::component);
	if (component == nullptr || !$nc(component)->isShowing() || (Autoscroller::event == nullptr)) {
		_stop(component);
		return;
	}
	$var($Point, screenLocation, $nc(component)->getLocationOnScreen());
	$var($Component, var$0, static_cast<$Component*>(component));
	int32_t var$1 = $nc(Autoscroller::event)->getID();
	int64_t var$2 = $nc(Autoscroller::event)->getWhen();
	int32_t var$3 = $nc(Autoscroller::event)->getModifiers();
	int32_t var$4 = $nc(Autoscroller::event)->getX() - $nc(screenLocation)->x;
	int32_t var$5 = $nc(Autoscroller::event)->getY() - screenLocation->y;
	int32_t var$6 = $nc(Autoscroller::event)->getXOnScreen();
	int32_t var$7 = $nc(Autoscroller::event)->getYOnScreen();
	int32_t var$8 = $nc(Autoscroller::event)->getClickCount();
	$var($MouseEvent, e, $new($MouseEvent, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, $nc(Autoscroller::event)->isPopupTrigger(), $MouseEvent::NOBUTTON));
	$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
	$nc(meAccessor)->setCausedByTouchEvent(e, meAccessor->isCausedByTouchEvent(Autoscroller::event));
	component->superProcessMouseMotionEvent(e);
}

void clinit$Autoscroller($Class* class$) {
	$assignStatic(Autoscroller::sharedInstance, $new(Autoscroller));
}

Autoscroller::Autoscroller() {
}

$Class* Autoscroller::load$($String* name, bool initialize) {
	$loadClass(Autoscroller, name, initialize, &_Autoscroller_ClassInfo_, clinit$Autoscroller, allocate$Autoscroller);
	return class$;
}

$Class* Autoscroller::class$ = nullptr;

	} // swing
} // javax