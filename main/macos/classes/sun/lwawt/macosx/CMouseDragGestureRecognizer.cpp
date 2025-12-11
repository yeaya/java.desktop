#include <sun/lwawt/macosx/CMouseDragGestureRecognizer.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Toolkit.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/dnd/MouseDragGestureRecognizer.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Math.h>
#include <java/util/ArrayList.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>
#include <jcpp.h>

#undef ACTION_NONE

using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Toolkit = ::java::awt::Toolkit;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragSource = ::java::awt::dnd::DragSource;
using $MouseDragGestureRecognizer = ::java::awt::dnd::MouseDragGestureRecognizer;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $SunDragSourceContextPeer = ::sun::awt::dnd::SunDragSourceContextPeer;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CMouseDragGestureRecognizer_FieldInfo_[] = {
	{"fMotionThreshold", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CMouseDragGestureRecognizer, fMotionThreshold)},
	{"kDefaultMotionThreshold", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CMouseDragGestureRecognizer, kDefaultMotionThreshold)},
	{"ButtonMask", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(CMouseDragGestureRecognizer, ButtonMask)},
	{}
};

$MethodInfo _CMouseDragGestureRecognizer_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)V", nullptr, $PROTECTED, $method(static_cast<void(CMouseDragGestureRecognizer::*)($DragSource*,$Component*,int32_t,$DragGestureListener*)>(&CMouseDragGestureRecognizer::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSource;Ljava/awt/Component;I)V", nullptr, $PROTECTED, $method(static_cast<void(CMouseDragGestureRecognizer::*)($DragSource*,$Component*,int32_t)>(&CMouseDragGestureRecognizer::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSource;Ljava/awt/Component;)V", nullptr, $PROTECTED, $method(static_cast<void(CMouseDragGestureRecognizer::*)($DragSource*,$Component*)>(&CMouseDragGestureRecognizer::init$))},
	{"<init>", "(Ljava/awt/dnd/DragSource;)V", nullptr, $PROTECTED, $method(static_cast<void(CMouseDragGestureRecognizer::*)($DragSource*)>(&CMouseDragGestureRecognizer::init$))},
	{"getMotionThreshold", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&CMouseDragGestureRecognizer::getMotionThreshold))},
	{"mapDragOperationFromModifiers", "(Ljava/awt/event/MouseEvent;)I", nullptr, $PROTECTED},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CMouseDragGestureRecognizer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CMouseDragGestureRecognizer",
	"java.awt.dnd.MouseDragGestureRecognizer",
	nullptr,
	_CMouseDragGestureRecognizer_FieldInfo_,
	_CMouseDragGestureRecognizer_MethodInfo_
};

$Object* allocate$CMouseDragGestureRecognizer($Class* clazz) {
	return $of($alloc(CMouseDragGestureRecognizer));
}

int32_t CMouseDragGestureRecognizer::fMotionThreshold = 0;

int32_t CMouseDragGestureRecognizer::getMotionThreshold() {
	$init(CMouseDragGestureRecognizer);
	$useLocalCurrentObjectStackCache();
	try {
		return $nc(($cast($Integer, $($nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("DnD.gestureMotionThreshold"_s)))))->intValue();
	} catch ($Exception& e) {
		return CMouseDragGestureRecognizer::kDefaultMotionThreshold;
	}
	$shouldNotReachHere();
}

void CMouseDragGestureRecognizer::init$($DragSource* ds, $Component* c, int32_t act, $DragGestureListener* dgl) {
	$MouseDragGestureRecognizer::init$(ds, c, act, dgl);
}

void CMouseDragGestureRecognizer::init$($DragSource* ds, $Component* c, int32_t act) {
	CMouseDragGestureRecognizer::init$(ds, c, act, nullptr);
}

void CMouseDragGestureRecognizer::init$($DragSource* ds, $Component* c) {
	CMouseDragGestureRecognizer::init$(ds, c, $DnDConstants::ACTION_NONE);
}

void CMouseDragGestureRecognizer::init$($DragSource* ds) {
	CMouseDragGestureRecognizer::init$(ds, nullptr);
}

int32_t CMouseDragGestureRecognizer::mapDragOperationFromModifiers($MouseEvent* e) {
	int32_t mods = $nc(e)->getModifiersEx();
	int32_t btns = (int32_t)(mods & (uint32_t)CMouseDragGestureRecognizer::ButtonMask);
	return $SunDragSourceContextPeer::convertModifiersToDropAction(mods, getSourceActions());
}

void CMouseDragGestureRecognizer::mouseClicked($MouseEvent* e) {
}

void CMouseDragGestureRecognizer::mousePressed($MouseEvent* e) {
	$nc(this->events)->clear();
	if (mapDragOperationFromModifiers(e) != $DnDConstants::ACTION_NONE) {
		appendEvent(e);
	}
}

void CMouseDragGestureRecognizer::mouseReleased($MouseEvent* e) {
	$nc(this->events)->clear();
}

void CMouseDragGestureRecognizer::mouseEntered($MouseEvent* e) {
	$nc(this->events)->clear();
}

void CMouseDragGestureRecognizer::mouseExited($MouseEvent* e) {
	if (!$nc(this->events)->isEmpty()) {
		int32_t dragAction = mapDragOperationFromModifiers(e);
		if (dragAction == $DnDConstants::ACTION_NONE) {
			$nc(this->events)->clear();
		}
	}
}

void CMouseDragGestureRecognizer::mouseDragged($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->events)->isEmpty()) {
		int32_t dop = mapDragOperationFromModifiers(e);
		if (dop == $DnDConstants::ACTION_NONE) {
			return;
		}
		$var($MouseEvent, trigger, $cast($MouseEvent, $nc(this->events)->get(0)));
		$var($Point, origin, $nc(trigger)->getPoint());
		$var($Point, current, $nc(e)->getPoint());
		int32_t dx = $Math::abs($nc(origin)->x - $nc(current)->x);
		int32_t dy = $Math::abs($nc(origin)->y - $nc(current)->y);
		if (dx >= CMouseDragGestureRecognizer::fMotionThreshold || dy >= CMouseDragGestureRecognizer::fMotionThreshold) {
			fireDragGestureRecognized(dop, $($nc(($cast($MouseEvent, $(getTriggerEvent()))))->getPoint()));
		} else {
			appendEvent(e);
		}
	}
}

void CMouseDragGestureRecognizer::mouseMoved($MouseEvent* e) {
}

void clinit$CMouseDragGestureRecognizer($Class* class$) {
	CMouseDragGestureRecognizer::fMotionThreshold = CMouseDragGestureRecognizer::getMotionThreshold();
}

CMouseDragGestureRecognizer::CMouseDragGestureRecognizer() {
}

$Class* CMouseDragGestureRecognizer::load$($String* name, bool initialize) {
	$loadClass(CMouseDragGestureRecognizer, name, initialize, &_CMouseDragGestureRecognizer_ClassInfo_, clinit$CMouseDragGestureRecognizer, allocate$CMouseDragGestureRecognizer);
	return class$;
}

$Class* CMouseDragGestureRecognizer::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun