#include <sun/awt/X11/XDropTargetProtocol.h>

#include <java/util/HashMap.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/MotifDnDConstants.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDropTargetProtocol$EmbedderRegistryEntry.h>
#include <sun/awt/X11/XDropTargetProtocolListener.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef DROP_MESSAGE
#undef EMBEDDER_ALREADY_REGISTERED
#undef ENTER_MESSAGE
#undef FINEST
#undef LEAVE_MESSAGE
#undef MOTION_MESSAGE
#undef UNKNOWN_MESSAGE
#undef XA_MOTIF_DRAG_AND_DROP_MESSAGE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $HashMap = ::java::util::HashMap;
using $SunToolkit = ::sun::awt::SunToolkit;
using $MotifDnDConstants = ::sun::awt::X11::MotifDnDConstants;
using $XAtom = ::sun::awt::X11::XAtom;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDropTargetProtocol$EmbedderRegistryEntry = ::sun::awt::X11::XDropTargetProtocol$EmbedderRegistryEntry;
using $XDropTargetProtocolListener = ::sun::awt::X11::XDropTargetProtocolListener;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDropTargetProtocol_FieldInfo_[] = {
	{"logger", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDropTargetProtocol, logger)},
	{"listener", "Lsun/awt/X11/XDropTargetProtocolListener;", nullptr, $PRIVATE | $FINAL, $field(XDropTargetProtocol, listener)},
	{"EMBEDDER_ALREADY_REGISTERED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XDropTargetProtocol, EMBEDDER_ALREADY_REGISTERED)},
	{"UNKNOWN_MESSAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XDropTargetProtocol, UNKNOWN_MESSAGE)},
	{"ENTER_MESSAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XDropTargetProtocol, ENTER_MESSAGE)},
	{"MOTION_MESSAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XDropTargetProtocol, MOTION_MESSAGE)},
	{"LEAVE_MESSAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XDropTargetProtocol, LEAVE_MESSAGE)},
	{"DROP_MESSAGE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XDropTargetProtocol, DROP_MESSAGE)},
	{"motionPassedAlong", "Z", nullptr, $PRIVATE, $field(XDropTargetProtocol, motionPassedAlong)},
	{"embedderRegistry", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Long;Lsun/awt/X11/XDropTargetProtocol$EmbedderRegistryEntry;>;", $PRIVATE | $FINAL, $field(XDropTargetProtocol, embedderRegistry)},
	{}
};

$MethodInfo _XDropTargetProtocol_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XDropTargetProtocolListener;)V", nullptr, $PROTECTED, $method(static_cast<void(XDropTargetProtocol::*)($XDropTargetProtocolListener*)>(&XDropTargetProtocol::init$))},
	{"adjustEventForForwarding", "(Lsun/awt/X11/XClientMessageEvent;Lsun/awt/X11/XDropTargetProtocol$EmbedderRegistryEntry;)V", nullptr, $PUBLIC},
	{"cleanup", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"forwardClientMessageToToplevel", "(JLsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PROTECTED | $FINAL, $method(static_cast<bool(XDropTargetProtocol::*)(int64_t,$XClientMessageEvent*)>(&XDropTargetProtocol::forwardClientMessageToToplevel))},
	{"forwardEventToEmbedded", "(JJI)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getData", "(JJ)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,java.io.IOException"},
	{"getEmbedderRegistryEntry", "(J)Lsun/awt/X11/XDropTargetProtocol$EmbedderRegistryEntry;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$XDropTargetProtocol$EmbedderRegistryEntry*(XDropTargetProtocol::*)(int64_t)>(&XDropTargetProtocol::getEmbedderRegistryEntry))},
	{"getMessageType", "(Lsun/awt/X11/XClientMessageEvent;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getProtocolListener", "()Lsun/awt/X11/XDropTargetProtocolListener;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$XDropTargetProtocolListener*(XDropTargetProtocol::*)()>(&XDropTargetProtocol::getProtocolListener))},
	{"getProtocolName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSourceWindow", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"isDragOverComponent", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isProtocolSupported", "(J)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isXEmbedSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"postProcessClientMessage", "(Lsun/awt/X11/XClientMessageEvent;ZI)V", nullptr, $PRIVATE, $method(static_cast<void(XDropTargetProtocol::*)($XClientMessageEvent*,bool,int32_t)>(&XDropTargetProtocol::postProcessClientMessage))},
	{"processClientMessage", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(XDropTargetProtocol::*)($XClientMessageEvent*)>(&XDropTargetProtocol::processClientMessage))},
	{"processClientMessageImpl", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PROTECTED | $ABSTRACT},
	{"putEmbedderRegistryEntry", "(JZIJ)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(XDropTargetProtocol::*)(int64_t,bool,int32_t,int64_t)>(&XDropTargetProtocol::putEmbedderRegistryEntry))},
	{"registerDropTarget", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"registerEmbeddedDropSite", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"registerEmbedderDropSite", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeEmbedderRegistryEntry", "(J)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(XDropTargetProtocol::*)(int64_t)>(&XDropTargetProtocol::removeEmbedderRegistryEntry))},
	{"sendDropDone", "(JZI)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"sendEnterMessageToToplevel", "(JLsun/awt/X11/XClientMessageEvent;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"sendLeaveMessageToToplevel", "(JLsun/awt/X11/XClientMessageEvent;)V", nullptr, $PROTECTED | $ABSTRACT},
	{"sendResponse", "(JII)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"unregisterDropTarget", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"unregisterEmbeddedDropSite", "(J)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(XDropTargetProtocol::*)(int64_t)>(&XDropTargetProtocol::unregisterEmbeddedDropSite))},
	{"unregisterEmbedderDropSite", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _XDropTargetProtocol_InnerClassesInfo_[] = {
	{"sun.awt.X11.XDropTargetProtocol$EmbedderRegistryEntry", "sun.awt.X11.XDropTargetProtocol", "EmbedderRegistryEntry", $PROTECTED | $STATIC | $FINAL},
	{}
};

$ClassInfo _XDropTargetProtocol_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.awt.X11.XDropTargetProtocol",
	"java.lang.Object",
	nullptr,
	_XDropTargetProtocol_FieldInfo_,
	_XDropTargetProtocol_MethodInfo_,
	nullptr,
	nullptr,
	_XDropTargetProtocol_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XDropTargetProtocol$EmbedderRegistryEntry"
};

$Object* allocate$XDropTargetProtocol($Class* clazz) {
	return $of($alloc(XDropTargetProtocol));
}

$PlatformLogger* XDropTargetProtocol::logger = nullptr;

void XDropTargetProtocol::init$($XDropTargetProtocolListener* listener) {
	this->motionPassedAlong = false;
	$set(this, embedderRegistry, $new($HashMap));
	if (listener == nullptr) {
		$throwNew($NullPointerException, "Null XDropTargetProtocolListener"_s);
	}
	$set(this, listener, listener);
}

$XDropTargetProtocolListener* XDropTargetProtocol::getProtocolListener() {
	return this->listener;
}

void XDropTargetProtocol::unregisterEmbeddedDropSite(int64_t embedded) {
	removeEmbedderRegistryEntry(embedded);
}

bool XDropTargetProtocol::processClientMessage($XClientMessageEvent* xclient) {
	int32_t type = getMessageType(xclient);
	bool processed = processClientMessageImpl(xclient);
	postProcessClientMessage(xclient, processed, type);
	return processed;
}

bool XDropTargetProtocol::forwardClientMessageToToplevel(int64_t toplevel, $XClientMessageEvent* xclient) {
	$useLocalCurrentObjectStackCache();
	$var($XDropTargetProtocol$EmbedderRegistryEntry, entry, getEmbedderRegistryEntry(toplevel));
	$init($PlatformLogger$Level);
	if ($nc(XDropTargetProtocol::logger)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XDropTargetProtocol::logger)->finest("        entry={0}"_s, $$new($ObjectArray, {$of(entry)}));
	}
	if (entry == nullptr) {
		return false;
	}
	if ($nc(XDropTargetProtocol::logger)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XDropTargetProtocol::logger)->finest("        entry.isOverriden()={0}"_s, $$new($ObjectArray, {$($of($Boolean::valueOf($nc(entry)->isOverriden())))}));
	}
	if (!$nc(entry)->isOverriden()) {
		return false;
	}
	adjustEventForForwarding(xclient, entry);
	int64_t proxy = $nc(entry)->getProxy();
	if ($nc(XDropTargetProtocol::logger)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XDropTargetProtocol::logger)->finest("        proxy={0} toplevel={1}"_s, $$new($ObjectArray, {
			$($of($Long::valueOf(proxy))),
			$($of($Long::valueOf(toplevel)))
		}));
	}
	if (proxy == 0) {
		proxy = toplevel;
	}
	$nc(xclient)->set_window(toplevel);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XlibWrapper::XSendEvent($XToolkit::getDisplay(), proxy, false, $XConstants::NoEventMask, xclient->pData);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return true;
}

void XDropTargetProtocol::postProcessClientMessage($XClientMessageEvent* xclient, bool processed, int32_t type) {
	int64_t toplevel = $nc(xclient)->get_window();
	if (getEmbedderRegistryEntry(toplevel) != nullptr) {
		if (!processed) {
			forwardClientMessageToToplevel(toplevel, xclient);
		} else {
			int64_t var$0 = xclient->get_message_type();
			$init($MotifDnDConstants);
			bool motifProtocol = var$0 == $nc($MotifDnDConstants::XA_MOTIF_DRAG_AND_DROP_MESSAGE)->getAtom();
			switch (type) {
			case XDropTargetProtocol::MOTION_MESSAGE:
				{
					if (!isDragOverComponent()) {
						if (!this->motionPassedAlong && !motifProtocol) {
							sendEnterMessageToToplevel(toplevel, xclient);
						}
						forwardClientMessageToToplevel(toplevel, xclient);
						this->motionPassedAlong = true;
					} else {
						if (this->motionPassedAlong && !motifProtocol) {
							sendLeaveMessageToToplevel(toplevel, xclient);
						}
						this->motionPassedAlong = false;
					}
					break;
				}
			case XDropTargetProtocol::DROP_MESSAGE:
				{
					if (!isDragOverComponent()) {
						forwardClientMessageToToplevel(toplevel, xclient);
					}
					this->motionPassedAlong = false;
					break;
				}
			case XDropTargetProtocol::ENTER_MESSAGE:
				{}
			case XDropTargetProtocol::LEAVE_MESSAGE:
				{
					if (motifProtocol) {
						forwardClientMessageToToplevel(toplevel, xclient);
					}
					this->motionPassedAlong = false;
					break;
				}
			}
		}
	}
}

void XDropTargetProtocol::adjustEventForForwarding($XClientMessageEvent* xclient, $XDropTargetProtocol$EmbedderRegistryEntry* entry) {
}

void XDropTargetProtocol::putEmbedderRegistryEntry(int64_t embedder, bool overriden, int32_t version, int64_t proxy) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this) {
		$var($Object, var$0, $of($Long::valueOf(embedder)));
		$nc(this->embedderRegistry)->put(var$0, $$new($XDropTargetProtocol$EmbedderRegistryEntry, overriden, version, proxy));
	}
}

$XDropTargetProtocol$EmbedderRegistryEntry* XDropTargetProtocol::getEmbedderRegistryEntry(int64_t embedder) {
	$synchronized(this) {
		return $cast($XDropTargetProtocol$EmbedderRegistryEntry, $nc(this->embedderRegistry)->get($($Long::valueOf(embedder))));
	}
}

void XDropTargetProtocol::removeEmbedderRegistryEntry(int64_t embedder) {
	$synchronized(this) {
		$nc(this->embedderRegistry)->remove($($Long::valueOf(embedder)));
	}
}

void clinit$XDropTargetProtocol($Class* class$) {
	$assignStatic(XDropTargetProtocol::logger, $PlatformLogger::getLogger("sun.awt.X11.xembed.xdnd.XDropTargetProtocol"_s));
}

XDropTargetProtocol::XDropTargetProtocol() {
}

$Class* XDropTargetProtocol::load$($String* name, bool initialize) {
	$loadClass(XDropTargetProtocol, name, initialize, &_XDropTargetProtocol_ClassInfo_, clinit$XDropTargetProtocol, allocate$XDropTargetProtocol);
	return class$;
}

$Class* XDropTargetProtocol::class$ = nullptr;

		} // X11
	} // awt
} // sun