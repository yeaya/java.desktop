#include <sun/awt/dnd/SunDropTargetContextPeer$EventDispatcher.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/dnd/InvalidDnDOperationException.h>
#include <java/util/Arrays.h>
#include <java/util/HashSet.h>
#include <sun/awt/datatransfer/DataTransferer.h>
#include <sun/awt/datatransfer/ToolkitThreadBlockedHandler.h>
#include <sun/awt/dnd/SunDropTargetContextPeer.h>
#include <sun/awt/dnd/SunDropTargetEvent.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef MOUSE_DRAGGED
#undef MOUSE_DROPPED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED

using $AWTEvent = ::java::awt::AWTEvent;
using $InvalidDnDOperationException = ::java::awt::dnd::InvalidDnDOperationException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $HashSet = ::java::util::HashSet;
using $DataTransferer = ::sun::awt::datatransfer::DataTransferer;
using $ToolkitThreadBlockedHandler = ::sun::awt::datatransfer::ToolkitThreadBlockedHandler;
using $SunDropTargetContextPeer = ::sun::awt::dnd::SunDropTargetContextPeer;
using $SunDropTargetEvent = ::sun::awt::dnd::SunDropTargetEvent;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace dnd {

$FieldInfo _SunDropTargetContextPeer$EventDispatcher_FieldInfo_[] = {
	{"peer", "Lsun/awt/dnd/SunDropTargetContextPeer;", nullptr, $PRIVATE | $FINAL, $field(SunDropTargetContextPeer$EventDispatcher, peer)},
	{"dropAction", "I", nullptr, $PRIVATE | $FINAL, $field(SunDropTargetContextPeer$EventDispatcher, dropAction)},
	{"actions", "I", nullptr, $PRIVATE | $FINAL, $field(SunDropTargetContextPeer$EventDispatcher, actions)},
	{"formats", "[J", nullptr, $PRIVATE | $FINAL, $field(SunDropTargetContextPeer$EventDispatcher, formats)},
	{"nativeCtxt", "J", nullptr, $PRIVATE, $field(SunDropTargetContextPeer$EventDispatcher, nativeCtxt)},
	{"dispatchType", "Z", nullptr, $PRIVATE | $FINAL, $field(SunDropTargetContextPeer$EventDispatcher, dispatchType)},
	{"dispatcherDone", "Z", nullptr, $PRIVATE, $field(SunDropTargetContextPeer$EventDispatcher, dispatcherDone)},
	{"returnValue", "I", nullptr, $PRIVATE, $field(SunDropTargetContextPeer$EventDispatcher, returnValue)},
	{"eventSet", "Ljava/util/HashSet;", "Ljava/util/HashSet<Lsun/awt/dnd/SunDropTargetEvent;>;", $PRIVATE | $FINAL, $field(SunDropTargetContextPeer$EventDispatcher, eventSet)},
	{"handler", "Lsun/awt/datatransfer/ToolkitThreadBlockedHandler;", nullptr, $STATIC | $FINAL, $staticField(SunDropTargetContextPeer$EventDispatcher, handler)},
	{}
};

$MethodInfo _SunDropTargetContextPeer$EventDispatcher_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/dnd/SunDropTargetContextPeer;II[JJZ)V", nullptr, 0, $method(static_cast<void(SunDropTargetContextPeer$EventDispatcher::*)($SunDropTargetContextPeer*,int32_t,int32_t,$longs*,int64_t,bool)>(&SunDropTargetContextPeer$EventDispatcher::init$))},
	{"dispatchDropEvent", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(SunDropTargetContextPeer$EventDispatcher::*)($SunDropTargetEvent*)>(&SunDropTargetContextPeer$EventDispatcher::dispatchDropEvent))},
	{"dispatchEnterEvent", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(SunDropTargetContextPeer$EventDispatcher::*)($SunDropTargetEvent*)>(&SunDropTargetContextPeer$EventDispatcher::dispatchEnterEvent))},
	{"dispatchEvent", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, 0},
	{"dispatchExitEvent", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(SunDropTargetContextPeer$EventDispatcher::*)($SunDropTargetEvent*)>(&SunDropTargetContextPeer$EventDispatcher::dispatchExitEvent))},
	{"dispatchMotionEvent", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(SunDropTargetContextPeer$EventDispatcher::*)($SunDropTargetEvent*)>(&SunDropTargetContextPeer$EventDispatcher::dispatchMotionEvent))},
	{"getReturnValue", "()I", nullptr, 0},
	{"isDone", "()Z", nullptr, 0},
	{"registerEvent", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, 0},
	{"setReturnValue", "(I)V", nullptr, 0},
	{"unregisterAllEvents", "()V", nullptr, $PUBLIC},
	{"unregisterEvent", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, 0},
	{}
};

$InnerClassInfo _SunDropTargetContextPeer$EventDispatcher_InnerClassesInfo_[] = {
	{"sun.awt.dnd.SunDropTargetContextPeer$EventDispatcher", "sun.awt.dnd.SunDropTargetContextPeer", "EventDispatcher", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _SunDropTargetContextPeer$EventDispatcher_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.dnd.SunDropTargetContextPeer$EventDispatcher",
	"java.lang.Object",
	nullptr,
	_SunDropTargetContextPeer$EventDispatcher_FieldInfo_,
	_SunDropTargetContextPeer$EventDispatcher_MethodInfo_,
	nullptr,
	nullptr,
	_SunDropTargetContextPeer$EventDispatcher_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.dnd.SunDropTargetContextPeer"
};

$Object* allocate$SunDropTargetContextPeer$EventDispatcher($Class* clazz) {
	return $of($alloc(SunDropTargetContextPeer$EventDispatcher));
}

$ToolkitThreadBlockedHandler* SunDropTargetContextPeer$EventDispatcher::handler = nullptr;

void SunDropTargetContextPeer$EventDispatcher::init$($SunDropTargetContextPeer* peer, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt, bool dispatchType) {
	this->dispatcherDone = false;
	this->returnValue = 0;
	$set(this, eventSet, $new($HashSet, 3));
	$set(this, peer, peer);
	this->nativeCtxt = nativeCtxt;
	this->dropAction = dropAction;
	this->actions = actions;
	$set(this, formats, (nullptr == formats) ? ($longs*)nullptr : $Arrays::copyOf(formats, $nc(formats)->length));
	this->dispatchType = dispatchType;
}

void SunDropTargetContextPeer$EventDispatcher::dispatchEvent($SunDropTargetEvent* e) {
	int32_t id = $nc(e)->getID();
	switch (id) {
	case $SunDropTargetEvent::MOUSE_ENTERED:
		{
			dispatchEnterEvent(e);
			break;
		}
	case $SunDropTargetEvent::MOUSE_DRAGGED:
		{
			dispatchMotionEvent(e);
			break;
		}
	case $SunDropTargetEvent::MOUSE_EXITED:
		{
			dispatchExitEvent(e);
			break;
		}
	case $SunDropTargetEvent::MOUSE_DROPPED:
		{
			dispatchDropEvent(e);
			break;
		}
	default:
		{
			$throwNew($InvalidDnDOperationException);
		}
	}
}

void SunDropTargetContextPeer$EventDispatcher::dispatchEnterEvent($SunDropTargetEvent* e) {
	$synchronized(this->peer) {
		$nc(this->peer)->previousDA = this->dropAction;
		$nc(this->peer)->nativeDragContext = this->nativeCtxt;
		$set($nc(this->peer), currentT, this->formats);
		$nc(this->peer)->currentSA = this->actions;
		$nc(this->peer)->currentDA = this->dropAction;
		$nc(this->peer)->dropStatus = 2;
		$nc(this->peer)->dropComplete$ = false;
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(this->peer)->processEnterMessage(e);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(this->peer)->dropStatus = 0;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		setReturnValue($nc(this->peer)->currentDA);
	}
}

void SunDropTargetContextPeer$EventDispatcher::dispatchMotionEvent($SunDropTargetEvent* e) {
	$synchronized(this->peer) {
		bool operationChanged = $nc(this->peer)->previousDA != this->dropAction;
		$nc(this->peer)->previousDA = this->dropAction;
		$nc(this->peer)->nativeDragContext = this->nativeCtxt;
		$set($nc(this->peer), currentT, this->formats);
		$nc(this->peer)->currentSA = this->actions;
		$nc(this->peer)->currentDA = this->dropAction;
		$nc(this->peer)->dropStatus = 2;
		$nc(this->peer)->dropComplete$ = false;
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(this->peer)->processMotionMessage(e, operationChanged);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(this->peer)->dropStatus = 0;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
		setReturnValue($nc(this->peer)->currentDA);
	}
}

void SunDropTargetContextPeer$EventDispatcher::dispatchExitEvent($SunDropTargetEvent* e) {
	$synchronized(this->peer) {
		$nc(this->peer)->nativeDragContext = this->nativeCtxt;
		$nc(this->peer)->processExitMessage(e);
	}
}

void SunDropTargetContextPeer$EventDispatcher::dispatchDropEvent($SunDropTargetEvent* e) {
	$synchronized(this->peer) {
		$nc(this->peer)->nativeDragContext = this->nativeCtxt;
		$set($nc(this->peer), currentT, this->formats);
		$nc(this->peer)->currentSA = this->actions;
		$nc(this->peer)->currentDA = this->dropAction;
		$nc(this->peer)->processDropMessage(e);
	}
}

void SunDropTargetContextPeer$EventDispatcher::setReturnValue(int32_t ret) {
	this->returnValue = ret;
}

int32_t SunDropTargetContextPeer$EventDispatcher::getReturnValue() {
	return this->returnValue;
}

bool SunDropTargetContextPeer$EventDispatcher::isDone() {
	return $nc(this->eventSet)->isEmpty();
}

void SunDropTargetContextPeer$EventDispatcher::registerEvent($SunDropTargetEvent* e) {
	$nc(SunDropTargetContextPeer$EventDispatcher::handler)->lock();
	bool var$0 = !$nc(this->eventSet)->add(e);
	$init($SunDropTargetContextPeer);
	$init($PlatformLogger$Level);
	if (var$0 && $nc($SunDropTargetContextPeer::dndLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc($SunDropTargetContextPeer::dndLog)->fine($$str({"Event is already registered: "_s, e}));
	}
	$nc(SunDropTargetContextPeer$EventDispatcher::handler)->unlock();
}

void SunDropTargetContextPeer$EventDispatcher::unregisterEvent($SunDropTargetEvent* e) {
	$useLocalCurrentObjectStackCache();
	$nc(SunDropTargetContextPeer$EventDispatcher::handler)->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (!$nc(this->eventSet)->remove(e)) {
				return$1 = true;
				goto $finally;
			}
			if ($nc(this->eventSet)->isEmpty()) {
				if (!this->dispatcherDone && this->dispatchType == true) {
					$nc(SunDropTargetContextPeer$EventDispatcher::handler)->exit();
				}
				this->dispatcherDone = true;
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$nc(SunDropTargetContextPeer$EventDispatcher::handler)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
	{
		$var($Throwable, var$3, nullptr);
		try {
			$nc(this->peer)->eventProcessed(e, this->returnValue, this->dispatcherDone);
		} catch ($Throwable& var$4) {
			$assign(var$3, var$4);
		} /*finally*/ {
			if (this->dispatcherDone) {
				this->nativeCtxt = 0;
				$nc(this->peer)->nativeDragContext = 0;
			}
		}
		if (var$3 != nullptr) {
			$throw(var$3);
		}
	}
}

void SunDropTargetContextPeer$EventDispatcher::unregisterAllEvents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, events, nullptr);
	$nc(SunDropTargetContextPeer$EventDispatcher::handler)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(events, $nc(this->eventSet)->toArray());
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(SunDropTargetContextPeer$EventDispatcher::handler)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (events != nullptr) {
		for (int32_t i = 0; i < events->length; ++i) {
			unregisterEvent($cast($SunDropTargetEvent, events->get(i)));
		}
	}
}

void clinit$SunDropTargetContextPeer$EventDispatcher($Class* class$) {
	$assignStatic(SunDropTargetContextPeer$EventDispatcher::handler, $nc($($DataTransferer::getInstance()))->getToolkitThreadBlockedHandler());
}

SunDropTargetContextPeer$EventDispatcher::SunDropTargetContextPeer$EventDispatcher() {
}

$Class* SunDropTargetContextPeer$EventDispatcher::load$($String* name, bool initialize) {
	$loadClass(SunDropTargetContextPeer$EventDispatcher, name, initialize, &_SunDropTargetContextPeer$EventDispatcher_ClassInfo_, clinit$SunDropTargetContextPeer$EventDispatcher, allocate$SunDropTargetContextPeer$EventDispatcher);
	return class$;
}

$Class* SunDropTargetContextPeer$EventDispatcher::class$ = nullptr;

		} // dnd
	} // awt
} // sun