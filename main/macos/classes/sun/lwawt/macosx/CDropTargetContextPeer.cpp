#include <sun/lwawt/macosx/CDropTargetContextPeer.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/event/ComponentEvent.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/awt/dnd/SunDropTargetContextPeer.h>
#include <sun/awt/dnd/SunDropTargetEvent.h>
#include <jcpp.h>

#undef DISPATCH_SYNC

using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SunDropTargetContextPeer = ::sun::awt::dnd::SunDropTargetContextPeer;
using $SunDropTargetEvent = ::sun::awt::dnd::SunDropTargetEvent;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CDropTargetContextPeer_FieldInfo_[] = {
	{"fNativeDropTransfer", "J", nullptr, $PRIVATE, $field(CDropTargetContextPeer, fNativeDropTransfer)},
	{"fNativeDataAvailable", "J", nullptr, $PRIVATE, $field(CDropTargetContextPeer, fNativeDataAvailable)},
	{"fNativeData", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(CDropTargetContextPeer, fNativeData)},
	{"insideTarget", "Ljava/awt/dnd/DropTarget;", nullptr, $PRIVATE, $field(CDropTargetContextPeer, insideTarget)},
	{"awtLockAccess", "Ljava/lang/Object;", nullptr, 0, $field(CDropTargetContextPeer, awtLockAccess)},
	{}
};

$MethodInfo _CDropTargetContextPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CDropTargetContextPeer::*)()>(&CDropTargetContextPeer::init$))},
	{"addTransfer", "(JJJ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CDropTargetContextPeer::*)(int64_t,int64_t,int64_t)>(&CDropTargetContextPeer::addTransfer))},
	{"doDropDone", "(ZIZ)V", nullptr, $PROTECTED},
	{"dropDone", "(JJZZI)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(CDropTargetContextPeer::*)(int64_t,int64_t,bool,bool,int32_t)>(&CDropTargetContextPeer::dropDone))},
	{"getDropTargetContextPeer", "()Lsun/lwawt/macosx/CDropTargetContextPeer;", nullptr, $STATIC, $method(static_cast<CDropTargetContextPeer*(*)()>(&CDropTargetContextPeer::getDropTargetContextPeer))},
	{"getNativeData", "(J)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"isEventInsideTarget", "(Lsun/awt/dnd/SunDropTargetEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(CDropTargetContextPeer::*)($SunDropTargetEvent*)>(&CDropTargetContextPeer::isEventInsideTarget))},
	{"newData", "(J[B)V", nullptr, $PRIVATE, $method(static_cast<void(CDropTargetContextPeer::*)(int64_t,$bytes*)>(&CDropTargetContextPeer::newData))},
	{"postDropTargetEvent", "(Ljava/awt/Component;IIII[JJIZ)I", nullptr, $PROTECTED},
	{"processDropMessage", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, $PROTECTED},
	{"processEnterMessage", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, $PROTECTED},
	{"processExitMessage", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, $PROTECTED},
	{"processMotionMessage", "(Lsun/awt/dnd/SunDropTargetEvent;Z)V", nullptr, $PROTECTED},
	{"startTransfer", "(JJ)J", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int64_t(CDropTargetContextPeer::*)(int64_t,int64_t)>(&CDropTargetContextPeer::startTransfer))},
	{"transferFailed", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(CDropTargetContextPeer::*)(int64_t)>(&CDropTargetContextPeer::transferFailed))},
	{}
};

#define _METHOD_INDEX_addTransfer 1
#define _METHOD_INDEX_dropDone 3
#define _METHOD_INDEX_startTransfer 13

$ClassInfo _CDropTargetContextPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CDropTargetContextPeer",
	"sun.awt.dnd.SunDropTargetContextPeer",
	nullptr,
	_CDropTargetContextPeer_FieldInfo_,
	_CDropTargetContextPeer_MethodInfo_
};

$Object* allocate$CDropTargetContextPeer($Class* clazz) {
	return $of($alloc(CDropTargetContextPeer));
}

CDropTargetContextPeer* CDropTargetContextPeer::getDropTargetContextPeer() {
	$init(CDropTargetContextPeer);
	return $new(CDropTargetContextPeer);
}

void CDropTargetContextPeer::init$() {
	$SunDropTargetContextPeer::init$();
	this->fNativeDropTransfer = 0;
	this->fNativeDataAvailable = 0;
	$set(this, fNativeData, nullptr);
	$set(this, insideTarget, nullptr);
	$set(this, awtLockAccess, $new($Object));
}

$Object* CDropTargetContextPeer::getNativeData(int64_t format) {
	int64_t nativeDropTarget = this->getNativeDragContext();
	$synchronized(this->awtLockAccess) {
		this->fNativeDataAvailable = 0;
		if (this->fNativeDropTransfer == 0) {
			this->fNativeDropTransfer = startTransfer(nativeDropTarget, format);
		} else {
			addTransfer(nativeDropTarget, this->fNativeDropTransfer, format);
		}
		while (format != this->fNativeDataAvailable) {
			try {
				$nc($of(this->awtLockAccess))->wait();
			} catch ($Throwable& e) {
				e->printStackTrace();
			}
		}
	}
	return $of(this->fNativeData);
}

void CDropTargetContextPeer::processMotionMessage($SunDropTargetEvent* event, bool operationChanged) {
	bool eventInsideTarget = isEventInsideTarget(event);
	if ($nc($($nc(event)->getComponent()))->getDropTarget() == this->insideTarget) {
		if (!eventInsideTarget) {
			processExitMessage(event);
			return;
		}
	} else if (eventInsideTarget) {
		processEnterMessage(event);
	} else {
		return;
	}
	$SunDropTargetContextPeer::processMotionMessage(event, operationChanged);
}

void CDropTargetContextPeer::processEnterMessage($SunDropTargetEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $nc(event)->getComponent());
	$var($DropTarget, dt, $nc($(event->getComponent()))->getDropTarget());
	bool var$1 = isEventInsideTarget(event) && dt != this->insideTarget;
	bool var$0 = var$1 && $nc(c)->isShowing() && dt != nullptr;
	if (var$0 && dt->isActive()) {
		$set(this, insideTarget, dt);
		$SunDropTargetContextPeer::processEnterMessage(event);
	}
}

void CDropTargetContextPeer::processExitMessage($SunDropTargetEvent* event) {
	if ($nc($($nc(event)->getComponent()))->getDropTarget() == this->insideTarget) {
		$set(this, insideTarget, nullptr);
		$SunDropTargetContextPeer::processExitMessage(event);
	}
}

void CDropTargetContextPeer::processDropMessage($SunDropTargetEvent* event) {
	if (isEventInsideTarget(event)) {
		$SunDropTargetContextPeer::processDropMessage(event);
		$set(this, insideTarget, nullptr);
	}
}

bool CDropTargetContextPeer::isEventInsideTarget($SunDropTargetEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($Component, eventSource, $nc(event)->getComponent());
	$var($Point, screenPoint, event->getPoint());
	$SwingUtilities::convertPointToScreen(screenPoint, eventSource);
	$var($Point, locationOnScreen, $nc(eventSource)->getLocationOnScreen());
	int32_t var$0 = $nc(locationOnScreen)->x;
	int32_t var$1 = locationOnScreen->y;
	int32_t var$2 = eventSource->getWidth();
	$var($Rectangle, screenBounds, $new($Rectangle, var$0, var$1, var$2, eventSource->getHeight()));
	return screenBounds->contains(screenPoint);
}

int32_t CDropTargetContextPeer::postDropTargetEvent($Component* component, int32_t x, int32_t y, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt, int32_t eventID, bool dispatchType) {
	return $SunDropTargetContextPeer::postDropTargetEvent(component, x, y, dropAction, actions, formats, nativeCtxt, eventID, $SunDropTargetContextPeer::DISPATCH_SYNC);
}

void CDropTargetContextPeer::doDropDone(bool success, int32_t dropAction, bool isLocal) {
	int64_t nativeDropTarget = this->getNativeDragContext();
	dropDone(nativeDropTarget, this->fNativeDropTransfer, isLocal, success, dropAction);
}

void CDropTargetContextPeer::newData(int64_t format, $bytes* data) {
	this->fNativeDataAvailable = format;
	$set(this, fNativeData, data);
	$nc($of(this->awtLockAccess))->notifyAll();
}

void CDropTargetContextPeer::transferFailed(int64_t format) {
	this->fNativeDataAvailable = format;
	$set(this, fNativeData, nullptr);
	$nc($of(this->awtLockAccess))->notifyAll();
}

int64_t CDropTargetContextPeer::startTransfer(int64_t nativeDropTarget, int64_t format) {
	int64_t $ret = 0;
	$prepareNative(CDropTargetContextPeer, startTransfer, int64_t, int64_t nativeDropTarget, int64_t format);
	$ret = $invokeNative(nativeDropTarget, format);
	$finishNative();
	return $ret;
}

void CDropTargetContextPeer::addTransfer(int64_t nativeDropTarget, int64_t nativeDropTransfer, int64_t format) {
	$prepareNative(CDropTargetContextPeer, addTransfer, void, int64_t nativeDropTarget, int64_t nativeDropTransfer, int64_t format);
	$invokeNative(nativeDropTarget, nativeDropTransfer, format);
	$finishNative();
}

void CDropTargetContextPeer::dropDone(int64_t nativeDropTarget, int64_t nativeDropTransfer, bool isLocal, bool success, int32_t dropAction) {
	$prepareNative(CDropTargetContextPeer, dropDone, void, int64_t nativeDropTarget, int64_t nativeDropTransfer, bool isLocal, bool success, int32_t dropAction);
	$invokeNative(nativeDropTarget, nativeDropTransfer, isLocal, success, dropAction);
	$finishNative();
}

CDropTargetContextPeer::CDropTargetContextPeer() {
}

$Class* CDropTargetContextPeer::load$($String* name, bool initialize) {
	$loadClass(CDropTargetContextPeer, name, initialize, &_CDropTargetContextPeer_ClassInfo_, allocate$CDropTargetContextPeer);
	return class$;
}

$Class* CDropTargetContextPeer::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun