#include <sun/awt/dnd/SunDragSourceContextPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/datatransfer/FlavorMap.h>
#include <java/awt/datatransfer/FlavorTable.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/dnd/DragSourceContext.h>
#include <java/awt/dnd/DragSourceDragEvent.h>
#include <java/awt/dnd/DragSourceDropEvent.h>
#include <java/awt/dnd/DragSourceEvent.h>
#include <java/awt/dnd/InvalidDnDOperationException.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <java/util/SortedMap.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/dnd/SunDragSourceContextPeer$1.h>
#include <sun/awt/dnd/SunDragSourceContextPeer$EventDispatcher.h>
#include <sun/awt/dnd/SunDropTargetContextPeer.h>
#include <sun/awt/dnd/SunDropTargetEvent.h>
#include <jcpp.h>

#undef ACTION_COPY
#undef ACTION_LINK
#undef ACTION_MOVE
#undef ACTION_NONE
#undef CTRL_DOWN_MASK
#undef DISPATCH_CHANGED
#undef DISPATCH_ENTER
#undef DISPATCH_EXIT
#undef DISPATCH_FINISH
#undef DISPATCH_MOTION
#undef DISPATCH_MOUSE_MOVED
#undef SHIFT_DOWN_MASK

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $EventQueue = ::java::awt::EventQueue;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $FlavorMap = ::java::awt::datatransfer::FlavorMap;
using $FlavorTable = ::java::awt::datatransfer::FlavorTable;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $DragSource = ::java::awt::dnd::DragSource;
using $DragSourceContext = ::java::awt::dnd::DragSourceContext;
using $DragSourceDragEvent = ::java::awt::dnd::DragSourceDragEvent;
using $DragSourceDropEvent = ::java::awt::dnd::DragSourceDropEvent;
using $DragSourceEvent = ::java::awt::dnd::DragSourceEvent;
using $InvalidDnDOperationException = ::java::awt::dnd::InvalidDnDOperationException;
using $DragSourceContextPeer = ::java::awt::dnd::peer::DragSourceContextPeer;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Map = ::java::util::Map;
using $SortedMap = ::java::util::SortedMap;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $SunDragSourceContextPeer$1 = ::sun::awt::dnd::SunDragSourceContextPeer$1;
using $SunDragSourceContextPeer$EventDispatcher = ::sun::awt::dnd::SunDragSourceContextPeer$EventDispatcher;
using $SunDropTargetContextPeer = ::sun::awt::dnd::SunDropTargetContextPeer;
using $SunDropTargetEvent = ::sun::awt::dnd::SunDropTargetEvent;

namespace sun {
	namespace awt {
		namespace dnd {

$FieldInfo _SunDragSourceContextPeer_FieldInfo_[] = {
	{"trigger", "Ljava/awt/dnd/DragGestureEvent;", nullptr, $PRIVATE, $field(SunDragSourceContextPeer, trigger)},
	{"component", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(SunDragSourceContextPeer, component)},
	{"cursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE, $field(SunDragSourceContextPeer, cursor)},
	{"dragImage", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(SunDragSourceContextPeer, dragImage)},
	{"dragImageOffset", "Ljava/awt/Point;", nullptr, $PRIVATE, $field(SunDragSourceContextPeer, dragImageOffset)},
	{"nativeCtxt", "J", nullptr, $PRIVATE, $field(SunDragSourceContextPeer, nativeCtxt)},
	{"dragSourceContext", "Ljava/awt/dnd/DragSourceContext;", nullptr, $PRIVATE, $field(SunDragSourceContextPeer, dragSourceContext)},
	{"sourceActions", "I", nullptr, $PRIVATE, $field(SunDragSourceContextPeer, sourceActions)},
	{"dragDropInProgress", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(SunDragSourceContextPeer, dragDropInProgress)},
	{"discardingMouseEvents", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(SunDragSourceContextPeer, discardingMouseEvents)},
	{"DISPATCH_ENTER", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SunDragSourceContextPeer, DISPATCH_ENTER)},
	{"DISPATCH_MOTION", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SunDragSourceContextPeer, DISPATCH_MOTION)},
	{"DISPATCH_CHANGED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SunDragSourceContextPeer, DISPATCH_CHANGED)},
	{"DISPATCH_EXIT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SunDragSourceContextPeer, DISPATCH_EXIT)},
	{"DISPATCH_FINISH", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SunDragSourceContextPeer, DISPATCH_FINISH)},
	{"DISPATCH_MOUSE_MOVED", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(SunDragSourceContextPeer, DISPATCH_MOUSE_MOVED)},
	{}
};

$MethodInfo _SunDragSourceContextPeer_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DragGestureEvent;)V", nullptr, $PUBLIC, $method(static_cast<void(SunDragSourceContextPeer::*)($DragGestureEvent*)>(&SunDragSourceContextPeer::init$))},
	{"checkDragDropInProgress", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&SunDragSourceContextPeer::checkDragDropInProgress)), "java.awt.dnd.InvalidDnDOperationException"},
	{"checkEvent", "(Ljava/awt/AWTEvent;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AWTEvent*)>(&SunDragSourceContextPeer::checkEvent))},
	{"cleanup", "()V", nullptr, $PRIVATE, $method(static_cast<void(SunDragSourceContextPeer::*)()>(&SunDragSourceContextPeer::cleanup))},
	{"convertModifiersToDropAction", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&SunDragSourceContextPeer::convertModifiersToDropAction))},
	{"dragDropFinished", "(ZIII)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(SunDragSourceContextPeer::*)(bool,int32_t,int32_t,int32_t)>(&SunDragSourceContextPeer::dragDropFinished))},
	{"dragEnter", "(IIII)V", nullptr, $PROTECTED},
	{"dragExit", "(II)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(SunDragSourceContextPeer::*)(int32_t,int32_t)>(&SunDragSourceContextPeer::dragExit))},
	{"dragMotion", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(SunDragSourceContextPeer::*)(int32_t,int32_t,int32_t,int32_t)>(&SunDragSourceContextPeer::dragMotion))},
	{"dragMouseMoved", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(SunDragSourceContextPeer::*)(int32_t,int32_t,int32_t,int32_t)>(&SunDragSourceContextPeer::dragMouseMoved))},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC},
	{"getDragImage", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getDragImageOffset", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getDragSourceContext", "()Ljava/awt/dnd/DragSourceContext;", nullptr, $PROTECTED},
	{"getExceptionMessage", "(Z)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(bool)>(&SunDragSourceContextPeer::getExceptionMessage))},
	{"getNativeContext", "()J", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"getTrigger", "()Ljava/awt/dnd/DragGestureEvent;", nullptr, $PROTECTED},
	{"isDragDropInProgress", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&SunDragSourceContextPeer::isDragDropInProgress))},
	{"operationChanged", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(SunDragSourceContextPeer::*)(int32_t,int32_t,int32_t,int32_t)>(&SunDragSourceContextPeer::operationChanged))},
	{"postDragSourceDragEvent", "(IIIII)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(SunDragSourceContextPeer::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&SunDragSourceContextPeer::postDragSourceDragEvent))},
	{"quitSecondaryEventLoop", "()V", nullptr, $PUBLIC},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"setDragDropInProgress", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&SunDragSourceContextPeer::setDragDropInProgress)), "java.awt.dnd.InvalidDnDOperationException"},
	{"setNativeContext", "(J)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"setNativeCursor", "(JLjava/awt/Cursor;I)V", nullptr, $PROTECTED | $ABSTRACT},
	{"setTrigger", "(Ljava/awt/dnd/DragGestureEvent;)V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"startDrag", "(Ljava/awt/dnd/DragSourceContext;Ljava/awt/Cursor;Ljava/awt/Image;Ljava/awt/Point;)V", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"startDrag", "(Ljava/awt/datatransfer/Transferable;[JLjava/util/Map;)V", "(Ljava/awt/datatransfer/Transferable;[JLjava/util/Map<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;)V", $PROTECTED | $ABSTRACT},
	{"startSecondaryEventLoop", "()V", nullptr, $PUBLIC},
	{"transferablesFlavorsChanged", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SunDragSourceContextPeer_InnerClassesInfo_[] = {
	{"sun.awt.dnd.SunDragSourceContextPeer$EventDispatcher", "sun.awt.dnd.SunDragSourceContextPeer", "EventDispatcher", $PRIVATE},
	{"sun.awt.dnd.SunDragSourceContextPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunDragSourceContextPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.dnd.SunDragSourceContextPeer",
	"java.lang.Object",
	"java.awt.dnd.peer.DragSourceContextPeer",
	_SunDragSourceContextPeer_FieldInfo_,
	_SunDragSourceContextPeer_MethodInfo_,
	nullptr,
	nullptr,
	_SunDragSourceContextPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.dnd.SunDragSourceContextPeer$EventDispatcher,sun.awt.dnd.SunDragSourceContextPeer$1"
};

$Object* allocate$SunDragSourceContextPeer($Class* clazz) {
	return $of($alloc(SunDragSourceContextPeer));
}

$volatile(bool) SunDragSourceContextPeer::dragDropInProgress = false;
$volatile(bool) SunDragSourceContextPeer::discardingMouseEvents = false;

void SunDragSourceContextPeer::init$($DragGestureEvent* dge) {
	$set(this, trigger, dge);
	if (this->trigger != nullptr) {
		$set(this, component, $nc(this->trigger)->getComponent());
	} else {
		$set(this, component, nullptr);
	}
}

void SunDragSourceContextPeer::startSecondaryEventLoop() {
}

void SunDragSourceContextPeer::quitSecondaryEventLoop() {
}

void SunDragSourceContextPeer::startDrag($DragSourceContext* dsc, $Cursor* c, $Image* di, $Point* p) {
	$useLocalCurrentObjectStackCache();
	if ($nc($(getTrigger()))->getTriggerEvent() == nullptr) {
		$throwNew($InvalidDnDOperationException, "DragGestureEvent has a null trigger"_s);
	}
	$set(this, dragSourceContext, dsc);
	$set(this, cursor, c);
	this->sourceActions = $nc($(getDragSourceContext()))->getSourceActions();
	$set(this, dragImage, di);
	$set(this, dragImageOffset, p);
	$var($Transferable, transferable, $nc($(getDragSourceContext()))->getTransferable());
	$var($SortedMap, formatMap, $nc($($DataTransferer::getInstance()))->getFormatsForTransferable(transferable, $($DataTransferer::adaptFlavorMap($($nc($($nc($(getTrigger()))->getDragSource()))->getFlavorMap())))));
	$var($longs, formats, $DataTransferer::keysToLongArray(formatMap));
	startDrag(transferable, formats, formatMap);
	SunDragSourceContextPeer::discardingMouseEvents = true;
	$EventQueue::invokeLater($$new($SunDragSourceContextPeer$1, this));
}

void SunDragSourceContextPeer::setCursor($Cursor* c) {
	$synchronized(this) {
		if (this->cursor == nullptr || !$nc($of(this->cursor))->equals(c)) {
			$set(this, cursor, c);
			int64_t var$0 = getNativeContext();
			$var($Cursor, var$1, c);
			setNativeCursor(var$0, var$1, c != nullptr ? $nc(c)->getType() : 0);
		}
	}
}

$Cursor* SunDragSourceContextPeer::getCursor() {
	return this->cursor;
}

$Image* SunDragSourceContextPeer::getDragImage() {
	return this->dragImage;
}

$Point* SunDragSourceContextPeer::getDragImageOffset() {
	if (this->dragImageOffset == nullptr) {
		return $new($Point, 0, 0);
	}
	return $new($Point, this->dragImageOffset);
}

void SunDragSourceContextPeer::setTrigger($DragGestureEvent* dge) {
	$synchronized(this) {
		$set(this, trigger, dge);
		if (this->trigger != nullptr) {
			$set(this, component, $nc(this->trigger)->getComponent());
		} else {
			$set(this, component, nullptr);
		}
	}
}

$DragGestureEvent* SunDragSourceContextPeer::getTrigger() {
	return this->trigger;
}

$Component* SunDragSourceContextPeer::getComponent() {
	return this->component;
}

void SunDragSourceContextPeer::setNativeContext(int64_t ctxt) {
	$synchronized(this) {
		this->nativeCtxt = ctxt;
	}
}

int64_t SunDragSourceContextPeer::getNativeContext() {
	$synchronized(this) {
		return this->nativeCtxt;
	}
}

$DragSourceContext* SunDragSourceContextPeer::getDragSourceContext() {
	return this->dragSourceContext;
}

void SunDragSourceContextPeer::transferablesFlavorsChanged() {
}

void SunDragSourceContextPeer::postDragSourceDragEvent(int32_t targetAction, int32_t modifiers, int32_t x, int32_t y, int32_t dispatchType) {
	$useLocalCurrentObjectStackCache();
	int32_t dropAction = SunDragSourceContextPeer::convertModifiersToDropAction(modifiers, this->sourceActions);
	$var($DragSourceDragEvent, event, $new($DragSourceDragEvent, $(getDragSourceContext()), dropAction, (int32_t)(targetAction & (uint32_t)this->sourceActions), modifiers, x, y));
	$var($SunDragSourceContextPeer$EventDispatcher, dispatcher, $new($SunDragSourceContextPeer$EventDispatcher, this, dispatchType, event));
	$SunToolkit::invokeLaterOnAppContext($($SunToolkit::targetToAppContext($(getComponent()))), dispatcher);
	startSecondaryEventLoop();
}

void SunDragSourceContextPeer::dragEnter(int32_t targetActions, int32_t modifiers, int32_t x, int32_t y) {
	postDragSourceDragEvent(targetActions, modifiers, x, y, SunDragSourceContextPeer::DISPATCH_ENTER);
}

void SunDragSourceContextPeer::dragMotion(int32_t targetActions, int32_t modifiers, int32_t x, int32_t y) {
	postDragSourceDragEvent(targetActions, modifiers, x, y, SunDragSourceContextPeer::DISPATCH_MOTION);
}

void SunDragSourceContextPeer::operationChanged(int32_t targetActions, int32_t modifiers, int32_t x, int32_t y) {
	postDragSourceDragEvent(targetActions, modifiers, x, y, SunDragSourceContextPeer::DISPATCH_CHANGED);
}

void SunDragSourceContextPeer::dragExit(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($DragSourceEvent, event, $new($DragSourceEvent, $(getDragSourceContext()), x, y));
	$var($SunDragSourceContextPeer$EventDispatcher, dispatcher, $new($SunDragSourceContextPeer$EventDispatcher, this, SunDragSourceContextPeer::DISPATCH_EXIT, event));
	$SunToolkit::invokeLaterOnAppContext($($SunToolkit::targetToAppContext($(getComponent()))), dispatcher);
	startSecondaryEventLoop();
}

void SunDragSourceContextPeer::dragMouseMoved(int32_t targetActions, int32_t modifiers, int32_t x, int32_t y) {
	postDragSourceDragEvent(targetActions, modifiers, x, y, SunDragSourceContextPeer::DISPATCH_MOUSE_MOVED);
}

void SunDragSourceContextPeer::dragDropFinished(bool success, int32_t operations, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($DragSourceEvent, event, $new($DragSourceDropEvent, $(getDragSourceContext()), (int32_t)(operations & (uint32_t)this->sourceActions), success, x, y));
	$var($SunDragSourceContextPeer$EventDispatcher, dispatcher, $new($SunDragSourceContextPeer$EventDispatcher, this, SunDragSourceContextPeer::DISPATCH_FINISH, event));
	$SunToolkit::invokeLaterOnAppContext($($SunToolkit::targetToAppContext($(getComponent()))), dispatcher);
	startSecondaryEventLoop();
	setNativeContext(0);
	$set(this, dragImage, nullptr);
	$set(this, dragImageOffset, nullptr);
}

void SunDragSourceContextPeer::setDragDropInProgress(bool b) {
	$init(SunDragSourceContextPeer);
	$synchronized(SunDragSourceContextPeer::class$) {
		if (SunDragSourceContextPeer::dragDropInProgress == b) {
			$throwNew($InvalidDnDOperationException, $(getExceptionMessage(b)));
		}
		SunDragSourceContextPeer::dragDropInProgress = b;
	}
}

bool SunDragSourceContextPeer::checkEvent($AWTEvent* event) {
	$init(SunDragSourceContextPeer);
	if (SunDragSourceContextPeer::discardingMouseEvents && $instanceOf($MouseEvent, event)) {
		$var($MouseEvent, mouseEvent, $cast($MouseEvent, event));
		if (!($instanceOf($SunDropTargetEvent, mouseEvent))) {
			return false;
		}
	}
	return true;
}

void SunDragSourceContextPeer::checkDragDropInProgress() {
	$init(SunDragSourceContextPeer);
	if (SunDragSourceContextPeer::dragDropInProgress) {
		$throwNew($InvalidDnDOperationException, $(getExceptionMessage(true)));
	}
}

bool SunDragSourceContextPeer::isDragDropInProgress() {
	$init(SunDragSourceContextPeer);
	return SunDragSourceContextPeer::dragDropInProgress;
}

$String* SunDragSourceContextPeer::getExceptionMessage(bool b) {
	$init(SunDragSourceContextPeer);
	return b ? "Drag and drop in progress"_s : "No drag in progress"_s;
}

int32_t SunDragSourceContextPeer::convertModifiersToDropAction(int32_t modifiers, int32_t supportedActions) {
	$init(SunDragSourceContextPeer);
	int32_t dropAction = $DnDConstants::ACTION_NONE;
	do {
		int32_t var$0 = (int32_t)(modifiers & (uint32_t)($InputEvent::SHIFT_DOWN_MASK | $InputEvent::CTRL_DOWN_MASK));
		if (var$0 == ($InputEvent::SHIFT_DOWN_MASK | $InputEvent::CTRL_DOWN_MASK)) {
			goto case$0;
		}
		if (var$0 == $InputEvent::CTRL_DOWN_MASK) {
			goto case$1;
		}
		if (var$0 == $InputEvent::SHIFT_DOWN_MASK) {
			goto case$2;
		}
		goto case$3;
case$0:
		// InputEvent.SHIFT_DOWN_MASK | InputEvent.CTRL_DOWN_MASK
		{
			dropAction = $DnDConstants::ACTION_LINK;
			break;
		}
case$1:
		// InputEvent.CTRL_DOWN_MASK
		{
			dropAction = $DnDConstants::ACTION_COPY;
			break;
		}
case$2:
		// InputEvent.SHIFT_DOWN_MASK
		{
			dropAction = $DnDConstants::ACTION_MOVE;
			break;
		}
case$3:
		// default
		{
			if (((int32_t)(supportedActions & (uint32_t)$DnDConstants::ACTION_MOVE)) != 0) {
				dropAction = $DnDConstants::ACTION_MOVE;
			} else if (((int32_t)(supportedActions & (uint32_t)$DnDConstants::ACTION_COPY)) != 0) {
				dropAction = $DnDConstants::ACTION_COPY;
			} else if (((int32_t)(supportedActions & (uint32_t)$DnDConstants::ACTION_LINK)) != 0) {
				dropAction = $DnDConstants::ACTION_LINK;
			}
		}
	} while (false);
	return (int32_t)(dropAction & (uint32_t)supportedActions);
}

void SunDragSourceContextPeer::cleanup() {
	$set(this, trigger, nullptr);
	$set(this, component, nullptr);
	$set(this, cursor, nullptr);
	$set(this, dragSourceContext, nullptr);
	$SunDropTargetContextPeer::setCurrentJVMLocalSourceTransferable(nullptr);
	SunDragSourceContextPeer::setDragDropInProgress(false);
}

void clinit$SunDragSourceContextPeer($Class* class$) {
	SunDragSourceContextPeer::dragDropInProgress = false;
	SunDragSourceContextPeer::discardingMouseEvents = false;
}

SunDragSourceContextPeer::SunDragSourceContextPeer() {
}

$Class* SunDragSourceContextPeer::load$($String* name, bool initialize) {
	$loadClass(SunDragSourceContextPeer, name, initialize, &_SunDragSourceContextPeer_ClassInfo_, clinit$SunDragSourceContextPeer, allocate$SunDragSourceContextPeer);
	return class$;
}

$Class* SunDragSourceContextPeer::class$ = nullptr;

		} // dnd
	} // awt
} // sun