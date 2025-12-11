#include <com/apple/eawt/event/GestureHandler$1.h>

#include <com/apple/eawt/event/GestureHandler$PerComponentNotifier.h>
#include <com/apple/eawt/event/GestureHandler.h>
#include <com/apple/eawt/event/GesturePhaseEvent.h>
#include <com/apple/eawt/event/MagnificationEvent.h>
#include <com/apple/eawt/event/RotationEvent.h>
#include <com/apple/eawt/event/SwipeEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $GestureHandler = ::com::apple::eawt::event::GestureHandler;
using $GestureHandler$PerComponentNotifier = ::com::apple::eawt::event::GestureHandler$PerComponentNotifier;
using $GesturePhaseEvent = ::com::apple::eawt::event::GesturePhaseEvent;
using $MagnificationEvent = ::com::apple::eawt::event::MagnificationEvent;
using $RotationEvent = ::com::apple::eawt::event::RotationEvent;
using $SwipeEvent = ::com::apple::eawt::event::SwipeEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$FieldInfo _GestureHandler$1_FieldInfo_[] = {
	{"val$b", "D", nullptr, $FINAL | $SYNTHETIC, $field(GestureHandler$1, val$b)},
	{"val$a", "D", nullptr, $FINAL | $SYNTHETIC, $field(GestureHandler$1, val$a)},
	{"val$type", "I", nullptr, $FINAL | $SYNTHETIC, $field(GestureHandler$1, val$type)},
	{"val$y", "D", nullptr, $FINAL | $SYNTHETIC, $field(GestureHandler$1, val$y)},
	{"val$x", "D", nullptr, $FINAL | $SYNTHETIC, $field(GestureHandler$1, val$x)},
	{"val$window", "Ljava/awt/Window;", nullptr, $FINAL | $SYNTHETIC, $field(GestureHandler$1, val$window)},
	{}
};

$MethodInfo _GestureHandler$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Window;DDIDD)V", "()V", 0, $method(static_cast<void(GestureHandler$1::*)($Window*,double,double,int32_t,double,double)>(&GestureHandler$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _GestureHandler$1_EnclosingMethodInfo_ = {
	"com.apple.eawt.event.GestureHandler",
	"handleGestureFromNative",
	"(Ljava/awt/Window;IDDDD)V"
};

$InnerClassInfo _GestureHandler$1_InnerClassesInfo_[] = {
	{"com.apple.eawt.event.GestureHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GestureHandler$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eawt.event.GestureHandler$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_GestureHandler$1_FieldInfo_,
	_GestureHandler$1_MethodInfo_,
	nullptr,
	&_GestureHandler$1_EnclosingMethodInfo_,
	_GestureHandler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eawt.event.GestureHandler"
};

$Object* allocate$GestureHandler$1($Class* clazz) {
	return $of($alloc(GestureHandler$1));
}

void GestureHandler$1::init$($Window* val$window, double val$x, double val$y, int32_t val$type, double val$a, double val$b) {
	$set(this, val$window, val$window);
	this->val$x = val$x;
	this->val$y = val$y;
	this->val$type = val$type;
	this->val$a = val$a;
	this->val$b = val$b;
}

void GestureHandler$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($Component, component, $SwingUtilities::getDeepestComponentAt(this->val$window, $cast(int32_t, this->val$x), $cast(int32_t, this->val$y)));
	$var($GestureHandler$PerComponentNotifier, firstNotifier, nullptr);
	if ($instanceOf($RootPaneContainer, component)) {
		$assign(firstNotifier, $GestureHandler::getNextNotifierForComponent($($nc(($cast($RootPaneContainer, component)))->getRootPane())));
	} else {
		$assign(firstNotifier, $GestureHandler::getNextNotifierForComponent(component));
	}
	if (firstNotifier == nullptr) {
		return;
	}
	switch (this->val$type) {
	case 1:
		{
			$nc(firstNotifier)->recursivelyHandlePhaseChange(this->val$a, $$new($GesturePhaseEvent));
			return;
		}
	case 2:
		{
			$nc(firstNotifier)->recursivelyHandleRotate($$new($RotationEvent, this->val$a));
			return;
		}
	case 3:
		{
			$nc(firstNotifier)->recursivelyHandleMagnify($$new($MagnificationEvent, this->val$a));
			return;
		}
	case 4:
		{
			$nc(firstNotifier)->recursivelyHandleSwipe(this->val$a, this->val$b, $$new($SwipeEvent));
			return;
		}
	}
}

GestureHandler$1::GestureHandler$1() {
}

$Class* GestureHandler$1::load$($String* name, bool initialize) {
	$loadClass(GestureHandler$1, name, initialize, &_GestureHandler$1_ClassInfo_, allocate$GestureHandler$1);
	return class$;
}

$Class* GestureHandler$1::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com