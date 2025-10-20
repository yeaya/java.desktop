#include <javax/swing/SwingPaintEventDispatcher.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/PaintEvent.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/SwingHeavyWeight.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/PaintEventDispatcher.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/event/IgnorePaintEvent.h>
#include <sun/security/action/GetBooleanAction.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef ERASE_BACKGROUND
#undef PAINT
#undef SHOW_FROM_DOUBLE_BUFFER

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $RepaintManager = ::javax::swing::RepaintManager;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SwingHeavyWeight = ::javax::swing::SwingHeavyWeight;
using $AppContext = ::sun::awt::AppContext;
using $PaintEventDispatcher = ::sun::awt::PaintEventDispatcher;
using $SunToolkit = ::sun::awt::SunToolkit;
using $IgnorePaintEvent = ::sun::awt::event::IgnorePaintEvent;
using $GetBooleanAction = ::sun::security::action::GetBooleanAction;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace javax {
	namespace swing {

$FieldInfo _SwingPaintEventDispatcher_FieldInfo_[] = {
	{"SHOW_FROM_DOUBLE_BUFFER", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingPaintEventDispatcher, SHOW_FROM_DOUBLE_BUFFER)},
	{"ERASE_BACKGROUND", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingPaintEventDispatcher, ERASE_BACKGROUND)},
	{}
};

$MethodInfo _SwingPaintEventDispatcher_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SwingPaintEventDispatcher::*)()>(&SwingPaintEventDispatcher::init$))},
	{"createPaintEvent", "(Ljava/awt/Component;IIII)Ljava/awt/event/PaintEvent;", nullptr, $PUBLIC},
	{"queueSurfaceDataReplacing", "(Ljava/awt/Component;Ljava/lang/Runnable;)Z", nullptr, $PUBLIC},
	{"shouldDoNativeBackgroundErase", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SwingPaintEventDispatcher_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SwingPaintEventDispatcher",
	"sun.awt.PaintEventDispatcher",
	nullptr,
	_SwingPaintEventDispatcher_FieldInfo_,
	_SwingPaintEventDispatcher_MethodInfo_
};

$Object* allocate$SwingPaintEventDispatcher($Class* clazz) {
	return $of($alloc(SwingPaintEventDispatcher));
}

bool SwingPaintEventDispatcher::SHOW_FROM_DOUBLE_BUFFER = false;
bool SwingPaintEventDispatcher::ERASE_BACKGROUND = false;

void SwingPaintEventDispatcher::init$() {
	$PaintEventDispatcher::init$();
}

$PaintEvent* SwingPaintEventDispatcher::createPaintEvent($Component* component, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($RootPaneContainer, component)) {
		$var($AppContext, appContext, $SunToolkit::targetToAppContext(component));
		$var($RepaintManager, rm, $RepaintManager::currentManager(appContext));
		if (!SwingPaintEventDispatcher::SHOW_FROM_DOUBLE_BUFFER || !$nc(rm)->show($cast($Container, component), x, y, w, h)) {
			rm->nativeAddDirtyRegion(appContext, $cast($Container, component), x, y, w, h);
		}
		return $new($IgnorePaintEvent, component, $PaintEvent::PAINT, $$new($Rectangle, x, y, w, h));
	} else if ($instanceOf($SwingHeavyWeight, component)) {
		$var($AppContext, appContext, $SunToolkit::targetToAppContext(component));
		$var($RepaintManager, rm, $RepaintManager::currentManager(appContext));
		$nc(rm)->nativeAddDirtyRegion(appContext, $cast($Container, component), x, y, w, h);
		return $new($IgnorePaintEvent, component, $PaintEvent::PAINT, $$new($Rectangle, x, y, w, h));
	}
	return $PaintEventDispatcher::createPaintEvent(component, x, y, w, h);
}

bool SwingPaintEventDispatcher::shouldDoNativeBackgroundErase($Component* c) {
	return SwingPaintEventDispatcher::ERASE_BACKGROUND || !($instanceOf($RootPaneContainer, c));
}

bool SwingPaintEventDispatcher::queueSurfaceDataReplacing($Component* c, $Runnable* r) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($RootPaneContainer, c)) {
		$var($AppContext, appContext, $SunToolkit::targetToAppContext(c));
		$nc($($RepaintManager::currentManager(appContext)))->nativeQueueSurfaceDataRunnable(appContext, c, r);
		return true;
	}
	return $PaintEventDispatcher::queueSurfaceDataReplacing(c, r);
}

void clinit$SwingPaintEventDispatcher($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		SwingPaintEventDispatcher::SHOW_FROM_DOUBLE_BUFFER = "true"_s->equals($($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.showFromDoubleBuffer"_s, "true"_s)))));
		SwingPaintEventDispatcher::ERASE_BACKGROUND = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetBooleanAction, "swing.nativeErase"_s)))))))->booleanValue();
	}
}

SwingPaintEventDispatcher::SwingPaintEventDispatcher() {
}

$Class* SwingPaintEventDispatcher::load$($String* name, bool initialize) {
	$loadClass(SwingPaintEventDispatcher, name, initialize, &_SwingPaintEventDispatcher_ClassInfo_, clinit$SwingPaintEventDispatcher, allocate$SwingPaintEventDispatcher);
	return class$;
}

$Class* SwingPaintEventDispatcher::class$ = nullptr;

	} // swing
} // javax