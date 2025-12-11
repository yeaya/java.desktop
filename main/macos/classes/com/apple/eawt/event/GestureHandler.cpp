#include <com/apple/eawt/event/GestureHandler.h>

#include <com/apple/eawt/event/GestureHandler$1.h>
#include <com/apple/eawt/event/GestureHandler$PerComponentNotifier.h>
#include <com/apple/eawt/event/GestureListener.h>
#include <com/apple/eawt/event/GesturePhaseListener.h>
#include <com/apple/eawt/event/MagnificationListener.h>
#include <com/apple/eawt/event/RotationListener.h>
#include <com/apple/eawt/event/SwipeListener.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/Runnable.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <javax/swing/JComponent.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef CLIENT_PROPERTY
#undef MAGNIFY
#undef PHASE
#undef ROTATE
#undef SWIPE

using $GestureHandler$1 = ::com::apple::eawt::event::GestureHandler$1;
using $GestureHandler$PerComponentNotifier = ::com::apple::eawt::event::GestureHandler$PerComponentNotifier;
using $GestureListener = ::com::apple::eawt::event::GestureListener;
using $GesturePhaseListener = ::com::apple::eawt::event::GesturePhaseListener;
using $MagnificationListener = ::com::apple::eawt::event::MagnificationListener;
using $RotationListener = ::com::apple::eawt::event::RotationListener;
using $SwipeListener = ::com::apple::eawt::event::SwipeListener;
using $Component = ::java::awt::Component;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $JComponent = ::javax::swing::JComponent;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

$FieldInfo _GestureHandler_FieldInfo_[] = {
	{"CLIENT_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GestureHandler, CLIENT_PROPERTY)},
	{"PHASE", "I", nullptr, $STATIC | $FINAL, $constField(GestureHandler, PHASE)},
	{"ROTATE", "I", nullptr, $STATIC | $FINAL, $constField(GestureHandler, ROTATE)},
	{"MAGNIFY", "I", nullptr, $STATIC | $FINAL, $constField(GestureHandler, MAGNIFY)},
	{"SWIPE", "I", nullptr, $STATIC | $FINAL, $constField(GestureHandler, SWIPE)},
	{"phasers", "Ljava/util/List;", "Ljava/util/List<Lcom/apple/eawt/event/GesturePhaseListener;>;", $FINAL, $field(GestureHandler, phasers)},
	{"rotaters", "Ljava/util/List;", "Ljava/util/List<Lcom/apple/eawt/event/RotationListener;>;", $FINAL, $field(GestureHandler, rotaters)},
	{"magnifiers", "Ljava/util/List;", "Ljava/util/List<Lcom/apple/eawt/event/MagnificationListener;>;", $FINAL, $field(GestureHandler, magnifiers)},
	{"swipers", "Ljava/util/List;", "Ljava/util/List<Lcom/apple/eawt/event/SwipeListener;>;", $FINAL, $field(GestureHandler, swipers)},
	{}
};

$MethodInfo _GestureHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GestureHandler::*)()>(&GestureHandler::init$))},
	{"addGestureListenerTo", "(Ljavax/swing/JComponent;Lcom/apple/eawt/event/GestureListener;)V", nullptr, $STATIC, $method(static_cast<void(*)($JComponent*,$GestureListener*)>(&GestureHandler::addGestureListenerTo))},
	{"addListener", "(Lcom/apple/eawt/event/GestureListener;)V", nullptr, 0, $method(static_cast<void(GestureHandler::*)($GestureListener*)>(&GestureHandler::addListener))},
	{"getHandlerForComponent", "(Ljava/awt/Component;)Lcom/apple/eawt/event/GestureHandler;", nullptr, $STATIC, $method(static_cast<GestureHandler*(*)($Component*)>(&GestureHandler::getHandlerForComponent))},
	{"getNextNotifierForComponent", "(Ljava/awt/Component;)Lcom/apple/eawt/event/GestureHandler$PerComponentNotifier;", nullptr, $STATIC, $method(static_cast<$GestureHandler$PerComponentNotifier*(*)($Component*)>(&GestureHandler::getNextNotifierForComponent))},
	{"handleGestureFromNative", "(Ljava/awt/Window;IDDDD)V", nullptr, $STATIC, $method(static_cast<void(*)($Window*,int32_t,double,double,double,double)>(&GestureHandler::handleGestureFromNative))},
	{"removeGestureListenerFrom", "(Ljavax/swing/JComponent;Lcom/apple/eawt/event/GestureListener;)V", nullptr, $STATIC, $method(static_cast<void(*)($JComponent*,$GestureListener*)>(&GestureHandler::removeGestureListenerFrom))},
	{"removeListener", "(Lcom/apple/eawt/event/GestureListener;)V", nullptr, 0, $method(static_cast<void(GestureHandler::*)($GestureListener*)>(&GestureHandler::removeListener))},
	{}
};

$InnerClassInfo _GestureHandler_InnerClassesInfo_[] = {
	{"com.apple.eawt.event.GestureHandler$PerComponentNotifier", "com.apple.eawt.event.GestureHandler", "PerComponentNotifier", $STATIC},
	{"com.apple.eawt.event.GestureHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GestureHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.apple.eawt.event.GestureHandler",
	"java.lang.Object",
	nullptr,
	_GestureHandler_FieldInfo_,
	_GestureHandler_MethodInfo_,
	nullptr,
	nullptr,
	_GestureHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.eawt.event.GestureHandler$PerComponentNotifier,com.apple.eawt.event.GestureHandler$1"
};

$Object* allocate$GestureHandler($Class* clazz) {
	return $of($alloc(GestureHandler));
}

$String* GestureHandler::CLIENT_PROPERTY = nullptr;

void GestureHandler::addGestureListenerTo($JComponent* component, $GestureListener* listener) {
	$init(GestureHandler);
	$useLocalCurrentObjectStackCache();
	$var($Object, value, $nc(component)->getClientProperty(GestureHandler::CLIENT_PROPERTY));
	if ($instanceOf(GestureHandler, value)) {
		$nc(($cast(GestureHandler, value)))->addListener(listener);
		return;
	}
	if (value != nullptr) {
		return;
	}
	$var(GestureHandler, newHandler, $new(GestureHandler));
	newHandler->addListener(listener);
	component->putClientProperty(GestureHandler::CLIENT_PROPERTY, newHandler);
}

void GestureHandler::removeGestureListenerFrom($JComponent* component, $GestureListener* listener) {
	$init(GestureHandler);
	$var($Object, value, $nc(component)->getClientProperty(GestureHandler::CLIENT_PROPERTY));
	if (!($instanceOf(GestureHandler, value))) {
		return;
	}
	$nc(($cast(GestureHandler, value)))->removeListener(listener);
}

void GestureHandler::handleGestureFromNative($Window* window, int32_t type, double x, double y, double a, double b) {
	$init(GestureHandler);
	if (window == nullptr) {
		return;
	}
	$SunToolkit::executeOnEventHandlerThread(window, $$new($GestureHandler$1, window, x, y, type, a, b));
}

void GestureHandler::init$() {
	$set(this, phasers, $new($LinkedList));
	$set(this, rotaters, $new($LinkedList));
	$set(this, magnifiers, $new($LinkedList));
	$set(this, swipers, $new($LinkedList));
}

void GestureHandler::addListener($GestureListener* listener) {
	if ($instanceOf($GesturePhaseListener, listener)) {
		$nc(this->phasers)->add($cast($GesturePhaseListener, listener));
	}
	if ($instanceOf($RotationListener, listener)) {
		$nc(this->rotaters)->add($cast($RotationListener, listener));
	}
	if ($instanceOf($MagnificationListener, listener)) {
		$nc(this->magnifiers)->add($cast($MagnificationListener, listener));
	}
	if ($instanceOf($SwipeListener, listener)) {
		$nc(this->swipers)->add($cast($SwipeListener, listener));
	}
}

void GestureHandler::removeListener($GestureListener* listener) {
	$nc(this->phasers)->remove($of(listener));
	$nc(this->rotaters)->remove($of(listener));
	$nc(this->magnifiers)->remove($of(listener));
	$nc(this->swipers)->remove($of(listener));
}

GestureHandler* GestureHandler::getHandlerForComponent($Component* c) {
	$init(GestureHandler);
	if (!($instanceOf($JComponent, c))) {
		return nullptr;
	}
	$var($Object, value, $nc(($cast($JComponent, c)))->getClientProperty(GestureHandler::CLIENT_PROPERTY));
	if (!($instanceOf(GestureHandler, value))) {
		return nullptr;
	}
	return $cast(GestureHandler, value);
}

$GestureHandler$PerComponentNotifier* GestureHandler::getNextNotifierForComponent($Component* c) {
	$init(GestureHandler);
	$useLocalCurrentObjectStackCache();
	if (c == nullptr) {
		return nullptr;
	}
	$var(GestureHandler, handler, getHandlerForComponent(c));
	if (handler != nullptr) {
		return $new($GestureHandler$PerComponentNotifier, c, handler);
	}
	return getNextNotifierForComponent($($nc(c)->getParent()));
}

GestureHandler::GestureHandler() {
}

void clinit$GestureHandler($Class* class$) {
	$assignStatic(GestureHandler::CLIENT_PROPERTY, "com.apple.eawt.event.internalGestureHandler"_s);
}

$Class* GestureHandler::load$($String* name, bool initialize) {
	$loadClass(GestureHandler, name, initialize, &_GestureHandler_ClassInfo_, clinit$GestureHandler, allocate$GestureHandler);
	return class$;
}

$Class* GestureHandler::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com