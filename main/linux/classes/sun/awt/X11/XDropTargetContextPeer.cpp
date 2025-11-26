#include <sun/awt/X11/XDropTargetContextPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/util/EventObject.h>
#include <java/util/Iterator.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/X11/XDragAndDropProtocols.h>
#include <sun/awt/X11/XDropTargetContextPeer$XDropTargetProtocolListenerImpl.h>
#include <sun/awt/X11/XDropTargetProtocol.h>
#include <sun/awt/X11/XDropTargetProtocolListener.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/dnd/SunDropTargetContextPeer.h>
#include <sun/awt/dnd/SunDropTargetEvent.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef DTCP_KEY
#undef FINER

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $InputEvent = ::java::awt::event::InputEvent;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Iterator = ::java::util::Iterator;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AppContext = ::sun::awt::AppContext;
using $XDragAndDropProtocols = ::sun::awt::X11::XDragAndDropProtocols;
using $XDropTargetContextPeer$XDropTargetProtocolListenerImpl = ::sun::awt::X11::XDropTargetContextPeer$XDropTargetProtocolListenerImpl;
using $XDropTargetProtocol = ::sun::awt::X11::XDropTargetProtocol;
using $XDropTargetProtocolListener = ::sun::awt::X11::XDropTargetProtocolListener;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $SunDropTargetContextPeer = ::sun::awt::dnd::SunDropTargetContextPeer;
using $SunDropTargetEvent = ::sun::awt::dnd::SunDropTargetEvent;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDropTargetContextPeer_FieldInfo_[] = {
	{"logger", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDropTargetContextPeer, logger)},
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDropTargetContextPeer, unsafe)},
	{"DTCP_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDropTargetContextPeer, DTCP_KEY)},
	{}
};

$MethodInfo _XDropTargetContextPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XDropTargetContextPeer::*)()>(&XDropTargetContextPeer::init$))},
	{"access$000", "(Lsun/awt/X11/XDropTargetContextPeer;Ljava/awt/Component;IIII[JJIZ)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(XDropTargetContextPeer*,$Component*,int32_t,int32_t,int32_t,int32_t,$longs*,int64_t,int32_t,bool)>(&XDropTargetContextPeer::access$000))},
	{"cleanup", "()V", nullptr, $PRIVATE, $method(static_cast<void(XDropTargetContextPeer::*)()>(&XDropTargetContextPeer::cleanup))},
	{"doDropDone", "(ZIZ)V", nullptr, $PROTECTED},
	{"eventProcessed", "(Lsun/awt/dnd/SunDropTargetEvent;IZ)V", nullptr, $PROTECTED},
	{"forwardEventToEmbedded", "(JJI)V", nullptr, $PUBLIC, $method(static_cast<void(XDropTargetContextPeer::*)(int64_t,int64_t,int32_t)>(&XDropTargetContextPeer::forwardEventToEmbedded))},
	{"getNativeData", "(J)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"getPeer", "(Lsun/awt/AppContext;)Lsun/awt/X11/XDropTargetContextPeer;", nullptr, $STATIC, $method(static_cast<XDropTargetContextPeer*(*)($AppContext*)>(&XDropTargetContextPeer::getPeer))},
	{"getXDropTargetProtocolListener", "()Lsun/awt/X11/XDropTargetProtocolListener;", nullptr, $STATIC, $method(static_cast<$XDropTargetProtocolListener*(*)()>(&XDropTargetContextPeer::getXDropTargetProtocolListener))},
	{"processDropMessage", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, $PROTECTED},
	{"processEnterMessage", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, $PROTECTED},
	{"processExitMessage", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, $PROTECTED},
	{"processMotionMessage", "(Lsun/awt/dnd/SunDropTargetEvent;Z)V", nullptr, $PROTECTED},
	{"processSunDropTargetEvent", "(Lsun/awt/dnd/SunDropTargetEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XDropTargetContextPeer::*)($SunDropTargetEvent*)>(&XDropTargetContextPeer::processSunDropTargetEvent))},
	{}
};

$InnerClassInfo _XDropTargetContextPeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XDropTargetContextPeer$XDropTargetProtocolListenerImpl", "sun.awt.X11.XDropTargetContextPeer", "XDropTargetProtocolListenerImpl", $STATIC | $FINAL},
	{}
};

$ClassInfo _XDropTargetContextPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XDropTargetContextPeer",
	"sun.awt.dnd.SunDropTargetContextPeer",
	nullptr,
	_XDropTargetContextPeer_FieldInfo_,
	_XDropTargetContextPeer_MethodInfo_,
	nullptr,
	nullptr,
	_XDropTargetContextPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XDropTargetContextPeer$XDropTargetProtocolListenerImpl"
};

$Object* allocate$XDropTargetContextPeer($Class* clazz) {
	return $of($alloc(XDropTargetContextPeer));
}

$PlatformLogger* XDropTargetContextPeer::logger = nullptr;
$Unsafe* XDropTargetContextPeer::unsafe = nullptr;
$Object* XDropTargetContextPeer::DTCP_KEY = nullptr;

int32_t XDropTargetContextPeer::access$000(XDropTargetContextPeer* x0, $Component* x1, int32_t x2, int32_t x3, int32_t x4, int32_t x5, $longs* x6, int64_t x7, int32_t x8, bool x9) {
	$init(XDropTargetContextPeer);
	return $nc(x0)->postDropTargetEvent(x1, x2, x3, x4, x5, x6, x7, x8, x9);
}

void XDropTargetContextPeer::init$() {
	$SunDropTargetContextPeer::init$();
}

XDropTargetContextPeer* XDropTargetContextPeer::getPeer($AppContext* appContext) {
	$init(XDropTargetContextPeer);
	$init($SunDropTargetContextPeer);
	$synchronized($SunDropTargetContextPeer::_globalLock) {
		$var(XDropTargetContextPeer, peer, $cast(XDropTargetContextPeer, $nc(appContext)->get(XDropTargetContextPeer::DTCP_KEY)));
		if (peer == nullptr) {
			$assign(peer, $new(XDropTargetContextPeer));
			appContext->put(XDropTargetContextPeer::DTCP_KEY, peer);
		}
		return peer;
	}
}

$XDropTargetProtocolListener* XDropTargetContextPeer::getXDropTargetProtocolListener() {
	$init(XDropTargetContextPeer);
	return $XDropTargetContextPeer$XDropTargetProtocolListenerImpl::getInstance();
}

void XDropTargetContextPeer::eventProcessed($SunDropTargetEvent* e, int32_t returnValue, bool dispatcherDone) {
	$useLocalCurrentObjectStackCache();
	int64_t ctxt = getNativeDragContext();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (ctxt != 0 && !$nc(e)->isConsumed()) {
				$var($Iterator, dropTargetProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
				while ($nc(dropTargetProtocols)->hasNext()) {
					$var($XDropTargetProtocol, dropTargetProtocol, $cast($XDropTargetProtocol, dropTargetProtocols->next()));
					if ($nc(dropTargetProtocol)->sendResponse(ctxt, e->getID(), returnValue)) {
						break;
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (dispatcherDone && ctxt != 0) {
				$nc(XDropTargetContextPeer::unsafe)->freeMemory(ctxt);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XDropTargetContextPeer::doDropDone(bool success, int32_t dropAction, bool isLocal) {
	$useLocalCurrentObjectStackCache();
	int64_t ctxt = getNativeDragContext();
	if (ctxt != 0) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($Iterator, dropTargetProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
				while ($nc(dropTargetProtocols)->hasNext()) {
					$var($XDropTargetProtocol, dropTargetProtocol, $cast($XDropTargetProtocol, dropTargetProtocols->next()));
					if ($nc(dropTargetProtocol)->sendDropDone(ctxt, success, dropAction)) {
						break;
					}
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(XDropTargetContextPeer::unsafe)->freeMemory(ctxt);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$Object* XDropTargetContextPeer::getNativeData(int64_t format) {
	$useLocalCurrentObjectStackCache();
	int64_t ctxt = getNativeDragContext();
	if (ctxt != 0) {
		$var($Iterator, dropTargetProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
		while ($nc(dropTargetProtocols)->hasNext()) {
			$var($XDropTargetProtocol, dropTargetProtocol, $cast($XDropTargetProtocol, dropTargetProtocols->next()));
			try {
				return $of($nc(dropTargetProtocol)->getData(ctxt, format));
			} catch ($IllegalArgumentException& iae) {
			}
		}
	}
	return $of(nullptr);
}

void XDropTargetContextPeer::cleanup() {
}

void XDropTargetContextPeer::processEnterMessage($SunDropTargetEvent* event) {
	if (!processSunDropTargetEvent(event)) {
		$SunDropTargetContextPeer::processEnterMessage(event);
	}
}

void XDropTargetContextPeer::processExitMessage($SunDropTargetEvent* event) {
	if (!processSunDropTargetEvent(event)) {
		$SunDropTargetContextPeer::processExitMessage(event);
	}
}

void XDropTargetContextPeer::processMotionMessage($SunDropTargetEvent* event, bool operationChanged) {
	if (!processSunDropTargetEvent(event)) {
		$SunDropTargetContextPeer::processMotionMessage(event, operationChanged);
	}
}

void XDropTargetContextPeer::processDropMessage($SunDropTargetEvent* event) {
	if (!processSunDropTargetEvent(event)) {
		$SunDropTargetContextPeer::processDropMessage(event);
	}
}

bool XDropTargetContextPeer::processSunDropTargetEvent($SunDropTargetEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($Object, source, $nc(event)->getSource());
	if ($instanceOf($Component, source)) {
		$var($Object, peer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer($cast($Component, source)));
		if ($instanceOf($XEmbedCanvasPeer, peer)) {
			$var($XEmbedCanvasPeer, xEmbedCanvasPeer, $cast($XEmbedCanvasPeer, peer));
			int64_t ctxt = getNativeDragContext();
			$init($PlatformLogger$Level);
			if ($nc(XDropTargetContextPeer::logger)->isLoggable($PlatformLogger$Level::FINER)) {
				$var($String, var$0, $$str({"        processing "_s, event, " ctxt="_s, $$str(ctxt), " consumed="_s}));
				$nc(XDropTargetContextPeer::logger)->finer($$concat(var$0, $$str(event->isConsumed())));
			}
			if (!event->isConsumed()) {
				if ($nc(xEmbedCanvasPeer)->processXEmbedDnDEvent(ctxt, event->getID())) {
					event->consume();
					return true;
				}
			}
		}
	}
	return false;
}

void XDropTargetContextPeer::forwardEventToEmbedded(int64_t embedded, int64_t ctxt, int32_t eventID) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, dropTargetProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
	while ($nc(dropTargetProtocols)->hasNext()) {
		$var($XDropTargetProtocol, dropTargetProtocol, $cast($XDropTargetProtocol, dropTargetProtocols->next()));
		if ($nc(dropTargetProtocol)->forwardEventToEmbedded(embedded, ctxt, eventID)) {
			break;
		}
	}
}

void clinit$XDropTargetContextPeer($Class* class$) {
	$assignStatic(XDropTargetContextPeer::logger, $PlatformLogger::getLogger("sun.awt.X11.xembed.xdnd.XDropTargetContextPeer"_s));
	$init($XlibWrapper);
	$assignStatic(XDropTargetContextPeer::unsafe, $XlibWrapper::unsafe);
	$assignStatic(XDropTargetContextPeer::DTCP_KEY, "DropTargetContextPeer"_s);
}

XDropTargetContextPeer::XDropTargetContextPeer() {
}

$Class* XDropTargetContextPeer::load$($String* name, bool initialize) {
	$loadClass(XDropTargetContextPeer, name, initialize, &_XDropTargetContextPeer_ClassInfo_, clinit$XDropTargetContextPeer, allocate$XDropTargetContextPeer);
	return class$;
}

$Class* XDropTargetContextPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun