#include <com/apple/eawt/event/GestureHandler$PerComponentNotifier.h>

#include <com/apple/eawt/event/GestureHandler.h>
#include <com/apple/eawt/event/GesturePhaseEvent.h>
#include <com/apple/eawt/event/GesturePhaseListener.h>
#include <com/apple/eawt/event/MagnificationEvent.h>
#include <com/apple/eawt/event/MagnificationListener.h>
#include <com/apple/eawt/event/RotationEvent.h>
#include <com/apple/eawt/event/RotationListener.h>
#include <com/apple/eawt/event/SwipeEvent.h>
#include <com/apple/eawt/event/SwipeListener.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $GestureHandler = ::com::apple::eawt::event::GestureHandler;
using $GesturePhaseEvent = ::com::apple::eawt::event::GesturePhaseEvent;
using $GesturePhaseListener = ::com::apple::eawt::event::GesturePhaseListener;
using $MagnificationEvent = ::com::apple::eawt::event::MagnificationEvent;
using $MagnificationListener = ::com::apple::eawt::event::MagnificationListener;
using $RotationEvent = ::com::apple::eawt::event::RotationEvent;
using $RotationListener = ::com::apple::eawt::event::RotationListener;
using $SwipeEvent = ::com::apple::eawt::event::SwipeEvent;
using $SwipeListener = ::com::apple::eawt::event::SwipeListener;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$FieldInfo _GestureHandler$PerComponentNotifier_FieldInfo_[] = {
	{"component", "Ljava/awt/Component;", nullptr, $FINAL, $field(GestureHandler$PerComponentNotifier, component)},
	{"handler", "Lcom/apple/eawt/event/GestureHandler;", nullptr, $FINAL, $field(GestureHandler$PerComponentNotifier, handler)},
	{}
};

$MethodInfo _GestureHandler$PerComponentNotifier_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;Lcom/apple/eawt/event/GestureHandler;)V", nullptr, $PUBLIC, $method(static_cast<void(GestureHandler$PerComponentNotifier::*)($Component*,$GestureHandler*)>(&GestureHandler$PerComponentNotifier::init$))},
	{"recursivelyHandleMagnify", "(Lcom/apple/eawt/event/MagnificationEvent;)V", nullptr, 0},
	{"recursivelyHandlePhaseChange", "(DLcom/apple/eawt/event/GesturePhaseEvent;)V", nullptr, 0},
	{"recursivelyHandleRotate", "(Lcom/apple/eawt/event/RotationEvent;)V", nullptr, 0},
	{"recursivelyHandleSwipe", "(DDLcom/apple/eawt/event/SwipeEvent;)V", nullptr, 0},
	{}
};

$InnerClassInfo _GestureHandler$PerComponentNotifier_InnerClassesInfo_[] = {
	{"com.apple.eawt.event.GestureHandler$PerComponentNotifier", "com.apple.eawt.event.GestureHandler", "PerComponentNotifier", $STATIC},
	{}
};

$ClassInfo _GestureHandler$PerComponentNotifier_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt.event.GestureHandler$PerComponentNotifier",
	"java.lang.Object",
	nullptr,
	_GestureHandler$PerComponentNotifier_FieldInfo_,
	_GestureHandler$PerComponentNotifier_MethodInfo_,
	nullptr,
	nullptr,
	_GestureHandler$PerComponentNotifier_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt.event.GestureHandler"
};

$Object* allocate$GestureHandler$PerComponentNotifier($Class* clazz) {
	return $of($alloc(GestureHandler$PerComponentNotifier));
}

void GestureHandler$PerComponentNotifier::init$($Component* component, $GestureHandler* handler) {
	$set(this, component, component);
	$set(this, handler, handler);
}

void GestureHandler$PerComponentNotifier::recursivelyHandlePhaseChange(double phase, $GesturePhaseEvent* e) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($nc(this->handler)->phasers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GesturePhaseListener, listener, $cast($GesturePhaseListener, i$->next()));
			{
				if (phase < 0) {
					$nc(listener)->gestureBegan(e);
				} else {
					$nc(listener)->gestureEnded(e);
				}
				if ($nc(e)->isConsumed()) {
					return;
				}
			}
		}
	}
	$var(GestureHandler$PerComponentNotifier, next, $GestureHandler::getNextNotifierForComponent($($nc(this->component)->getParent())));
	if (next != nullptr) {
		next->recursivelyHandlePhaseChange(phase, e);
	}
}

void GestureHandler$PerComponentNotifier::recursivelyHandleRotate($RotationEvent* e) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($nc(this->handler)->rotaters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($RotationListener, listener, $cast($RotationListener, i$->next()));
			{
				$nc(listener)->rotate(e);
				if ($nc(e)->isConsumed()) {
					return;
				}
			}
		}
	}
	$var(GestureHandler$PerComponentNotifier, next, $GestureHandler::getNextNotifierForComponent($($nc(this->component)->getParent())));
	if (next != nullptr) {
		next->recursivelyHandleRotate(e);
	}
}

void GestureHandler$PerComponentNotifier::recursivelyHandleMagnify($MagnificationEvent* e) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($nc(this->handler)->magnifiers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MagnificationListener, listener, $cast($MagnificationListener, i$->next()));
			{
				$nc(listener)->magnify(e);
				if ($nc(e)->isConsumed()) {
					return;
				}
			}
		}
	}
	$var(GestureHandler$PerComponentNotifier, next, $GestureHandler::getNextNotifierForComponent($($nc(this->component)->getParent())));
	if (next != nullptr) {
		next->recursivelyHandleMagnify(e);
	}
}

void GestureHandler$PerComponentNotifier::recursivelyHandleSwipe(double x, double y, $SwipeEvent* e) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($nc(this->handler)->swipers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SwipeListener, listener, $cast($SwipeListener, i$->next()));
			{
				if (x < 0) {
					$nc(listener)->swipedLeft(e);
				}
				if (x > 0) {
					$nc(listener)->swipedRight(e);
				}
				if (y < 0) {
					$nc(listener)->swipedDown(e);
				}
				if (y > 0) {
					$nc(listener)->swipedUp(e);
				}
				if ($nc(e)->isConsumed()) {
					return;
				}
			}
		}
	}
	$var(GestureHandler$PerComponentNotifier, next, $GestureHandler::getNextNotifierForComponent($($nc(this->component)->getParent())));
	if (next != nullptr) {
		next->recursivelyHandleSwipe(x, y, e);
	}
}

GestureHandler$PerComponentNotifier::GestureHandler$PerComponentNotifier() {
}

$Class* GestureHandler$PerComponentNotifier::load$($String* name, bool initialize) {
	$loadClass(GestureHandler$PerComponentNotifier, name, initialize, &_GestureHandler$PerComponentNotifier_ClassInfo_, allocate$GestureHandler$PerComponentNotifier);
	return class$;
}

$Class* GestureHandler$PerComponentNotifier::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com