#include <sun/awt/X11/XDnDDragSourceProtocol.h>

#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/InvalidDnDOperationException.h>
#include <java/lang/AssertionError.h>
#include <java/util/Map.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/WindowPropertyGetter.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDnDConstants.h>
#include <sun/awt/X11/XDragAndDropProtocols.h>
#include <sun/awt/X11/XDragSourceContextPeer.h>
#include <sun/awt/X11/XDragSourceProtocol$TargetWindowInfo.h>
#include <sun/awt/X11/XDragSourceProtocol.h>
#include <sun/awt/X11/XDragSourceProtocolListener.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler$IgnoreBadWindowHandler.h>
#include <sun/awt/X11/XErrorHandler$VerifyChangePropertyHandler.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XErrorHandlerUtil.h>
#include <sun/awt/X11/XException.h>
#include <sun/awt/X11/XSelection.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACTION_COPY
#undef ACTION_LINK
#undef ACTION_MOVE
#undef ACTION_NONE
#undef FINEST
#undef XA_ATOM
#undef XA_WINDOW
#undef XDND_ACCEPT_DROP_FLAG
#undef XDND_DATA_TYPES_BIT
#undef XDND_MIN_PROTOCOL_VERSION
#undef XDND_PROTOCOL_SHIFT
#undef XDND_PROTOCOL_VERSION

using $Transferable = ::java::awt::datatransfer::Transferable;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $InvalidDnDOperationException = ::java::awt::dnd::InvalidDnDOperationException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Native = ::sun::awt::X11::Native;
using $WindowPropertyGetter = ::sun::awt::X11::WindowPropertyGetter;
using $XAtom = ::sun::awt::X11::XAtom;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDnDConstants = ::sun::awt::X11::XDnDConstants;
using $XDragAndDropProtocols = ::sun::awt::X11::XDragAndDropProtocols;
using $XDragSourceContextPeer = ::sun::awt::X11::XDragSourceContextPeer;
using $XDragSourceProtocol = ::sun::awt::X11::XDragSourceProtocol;
using $XDragSourceProtocol$TargetWindowInfo = ::sun::awt::X11::XDragSourceProtocol$TargetWindowInfo;
using $XDragSourceProtocolListener = ::sun::awt::X11::XDragSourceProtocolListener;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandler$IgnoreBadWindowHandler = ::sun::awt::X11::XErrorHandler$IgnoreBadWindowHandler;
using $XErrorHandler$VerifyChangePropertyHandler = ::sun::awt::X11::XErrorHandler$VerifyChangePropertyHandler;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;
using $XErrorHandlerUtil = ::sun::awt::X11::XErrorHandlerUtil;
using $XException = ::sun::awt::X11::XException;
using $XSelection = ::sun::awt::X11::XSelection;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDnDDragSourceProtocol_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XDnDDragSourceProtocol, $assertionsDisabled)},
	{"logger", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDnDDragSourceProtocol, logger)},
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDnDDragSourceProtocol, unsafe)},
	{}
};

$MethodInfo _XDnDDragSourceProtocol_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XDragSourceProtocolListener;)V", nullptr, $PROTECTED, $method(static_cast<void(XDnDDragSourceProtocol::*)($XDragSourceProtocolListener*)>(&XDnDDragSourceProtocol::init$))},
	{"createInstance", "(Lsun/awt/X11/XDragSourceProtocolListener;)Lsun/awt/X11/XDragSourceProtocol;", nullptr, $STATIC, $method(static_cast<$XDragSourceProtocol*(*)($XDragSourceProtocolListener*)>(&XDnDDragSourceProtocol::createInstance))},
	{"getProtocolName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTargetWindowInfo", "(J)Lsun/awt/X11/XDragSourceProtocol$TargetWindowInfo;", nullptr, $PUBLIC},
	{"initializeDragImpl", "(ILjava/awt/datatransfer/Transferable;Ljava/util/Map;[J)V", "(ILjava/awt/datatransfer/Transferable;Ljava/util/Map<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;[J)V", $PROTECTED, nullptr, "java.awt.dnd.InvalidDnDOperationException,java.lang.IllegalArgumentException,sun.awt.X11.XException"},
	{"processClientMessage", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PUBLIC},
	{"processProxyModeEvent", "(Lsun/awt/X11/XClientMessageEvent;J)Z", nullptr, $PUBLIC},
	{"processXdndFinished", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XDnDDragSourceProtocol::*)($XClientMessageEvent*)>(&XDnDDragSourceProtocol::processXdndFinished))},
	{"processXdndStatus", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XDnDDragSourceProtocol::*)($XClientMessageEvent*)>(&XDnDDragSourceProtocol::processXdndStatus))},
	{"run", "()V", nullptr, $PUBLIC},
	{"sendDropMessage", "(IIIIJ)V", nullptr, $PUBLIC},
	{"sendEnterMessage", "([JIIJ)V", nullptr, $PUBLIC},
	{"sendLeaveMessage", "(J)V", nullptr, $PUBLIC},
	{"sendMoveMessage", "(IIIIJ)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XDnDDragSourceProtocol_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XDnDDragSourceProtocol",
	"sun.awt.X11.XDragSourceProtocol",
	nullptr,
	_XDnDDragSourceProtocol_FieldInfo_,
	_XDnDDragSourceProtocol_MethodInfo_
};

$Object* allocate$XDnDDragSourceProtocol($Class* clazz) {
	return $of($alloc(XDnDDragSourceProtocol));
}

bool XDnDDragSourceProtocol::$assertionsDisabled = false;
$PlatformLogger* XDnDDragSourceProtocol::logger = nullptr;
$Unsafe* XDnDDragSourceProtocol::unsafe = nullptr;

void XDnDDragSourceProtocol::init$($XDragSourceProtocolListener* listener) {
	$XDragSourceProtocol::init$(listener);
}

$XDragSourceProtocol* XDnDDragSourceProtocol::createInstance($XDragSourceProtocolListener* listener) {
	$init(XDnDDragSourceProtocol);
	return $new(XDnDDragSourceProtocol, listener);
}

$String* XDnDDragSourceProtocol::getProtocolName() {
	$init($XDragAndDropProtocols);
	return $XDragAndDropProtocols::XDnD;
}

void XDnDDragSourceProtocol::initializeDragImpl(int32_t actions, $Transferable* contents, $Map* formatMap, $longs* formats) {
	$useLocalCurrentObjectStackCache();
	if (!XDnDDragSourceProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	int64_t window = $XDragSourceProtocol::getDragSourceWindow();
	int64_t data = $Native::allocateLongArray(3);
	int32_t action_count = 0;
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (((int32_t)(actions & (uint32_t)$DnDConstants::ACTION_COPY)) != 0) {
				$init($XDnDConstants);
				$Native::putLong(data, action_count, $nc($XDnDConstants::XA_XdndActionCopy)->getAtom());
				++action_count;
			}
			if (((int32_t)(actions & (uint32_t)$DnDConstants::ACTION_MOVE)) != 0) {
				$init($XDnDConstants);
				$Native::putLong(data, action_count, $nc($XDnDConstants::XA_XdndActionMove)->getAtom());
				++action_count;
			}
			if (((int32_t)(actions & (uint32_t)$DnDConstants::ACTION_LINK)) != 0) {
				$init($XDnDConstants);
				$Native::putLong(data, action_count, $nc($XDnDConstants::XA_XdndActionLink)->getAtom());
				++action_count;
			}
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
			$init($XDnDConstants);
			$nc($XDnDConstants::XA_XdndActionList)->setAtomData(window, $XAtom::XA_ATOM, data, action_count);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if (($XErrorHandlerUtil::saved_error) != nullptr && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
				cleanup();
				$throwNew($XException, "Cannot write XdndActionList property"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(XDnDDragSourceProtocol::unsafe)->freeMemory(data);
			data = 0;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	data = $Native::allocateLongArray($nc(formats)->length);
	{
		$var($Throwable, var$2, nullptr);
		try {
			$Native::put(data, formats);
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
			$init($XDnDConstants);
			$nc($XDnDConstants::XA_XdndTypeList)->setAtomData(window, $XAtom::XA_ATOM, data, $nc(formats)->length);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
				cleanup();
				$throwNew($XException, "Cannot write XdndActionList property"_s);
			}
		} catch ($Throwable& var$3) {
			$assign(var$2, var$3);
		} /*finally*/ {
			$nc(XDnDDragSourceProtocol::unsafe)->freeMemory(data);
			data = 0;
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
	$init($XDnDConstants);
	if (!$nc($XDnDConstants::XDnDSelection)->setOwner(contents, formatMap, formats, $XConstants::CurrentTime)) {
		cleanup();
		$throwNew($InvalidDnDOperationException, "Cannot acquire selection ownership"_s);
	}
}

bool XDnDDragSourceProtocol::processXdndStatus($XClientMessageEvent* xclient) {
	int32_t action = $DnDConstants::ACTION_NONE;
	int64_t var$0 = $nc(xclient)->get_data(0);
	if (var$0 != getTargetWindow()) {
		return true;
	}
	if (((int64_t)($nc(xclient)->get_data(1) & (uint64_t)(int64_t)$XDnDConstants::XDND_ACCEPT_DROP_FLAG)) != 0) {
		action = $XDnDConstants::getJavaActionForXDnDAction(xclient->get_data(4));
	}
	$nc($(getProtocolListener()))->handleDragReply(action);
	return true;
}

bool XDnDDragSourceProtocol::processXdndFinished($XClientMessageEvent* xclient) {
	$useLocalCurrentObjectStackCache();
	int64_t var$0 = $nc(xclient)->get_data(0);
	if (var$0 != getTargetWindow()) {
		return true;
	}
	if (getTargetProtocolVersion() >= 5) {
		bool success = ((int64_t)($nc(xclient)->get_data(1) & (uint64_t)(int64_t)$XDnDConstants::XDND_ACCEPT_DROP_FLAG)) != 0;
		int32_t action = $XDnDConstants::getJavaActionForXDnDAction(xclient->get_data(2));
		$nc($(getProtocolListener()))->handleDragFinished(success, action);
	} else {
		$nc($(getProtocolListener()))->handleDragFinished();
	}
	finalizeDrop();
	return true;
}

bool XDnDDragSourceProtocol::processClientMessage($XClientMessageEvent* xclient) {
	int64_t var$0 = $nc(xclient)->get_message_type();
	$init($XDnDConstants);
	if (var$0 == $nc($XDnDConstants::XA_XdndStatus)->getAtom()) {
		return processXdndStatus(xclient);
	} else {
		int64_t var$2 = xclient->get_message_type();
		if (var$2 == $nc($XDnDConstants::XA_XdndFinished)->getAtom()) {
			return processXdndFinished(xclient);
		} else {
			return false;
		}
	}
}

$XDragSourceProtocol$TargetWindowInfo* XDnDDragSourceProtocol::getTargetWindowInfo(int64_t window) {
	$useLocalCurrentObjectStackCache();
	if (!XDnDDragSourceProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$init($XDnDConstants);
	$var($WindowPropertyGetter, wpg1, $new($WindowPropertyGetter, window, $XDnDConstants::XA_XdndAware, (int64_t)0, (int64_t)1, false, $XConstants::AnyPropertyType));
	int32_t status = wpg1->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
	bool var$0 = status == $XConstants::Success && wpg1->getData() != 0;
	if (var$0 && wpg1->getActualType() == $XAtom::XA_ATOM) {
		int32_t targetVersion = (int32_t)$Native::getLong(wpg1->getData());
		wpg1->dispose();
		if (targetVersion >= $XDnDConstants::XDND_MIN_PROTOCOL_VERSION) {
			int64_t proxy = 0;
			int32_t protocolVersion = targetVersion < $XDnDConstants::XDND_PROTOCOL_VERSION ? targetVersion : $XDnDConstants::XDND_PROTOCOL_VERSION;
			$var($WindowPropertyGetter, wpg2, $new($WindowPropertyGetter, window, $XDnDConstants::XA_XdndProxy, (int64_t)0, (int64_t)1, false, $XAtom::XA_WINDOW));
			{
				$var($Throwable, var$1, nullptr);
				try {
					status = wpg2->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
					bool var$2 = status == $XConstants::Success && wpg2->getData() != 0;
					if (var$2 && wpg2->getActualType() == $XAtom::XA_WINDOW) {
						proxy = $Native::getLong(wpg2->getData());
					}
				} catch ($Throwable& var$3) {
					$assign(var$1, var$3);
				} /*finally*/ {
					wpg2->dispose();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
			if (proxy != 0) {
				$var($WindowPropertyGetter, wpg3, $new($WindowPropertyGetter, proxy, $XDnDConstants::XA_XdndProxy, (int64_t)0, (int64_t)1, false, $XAtom::XA_WINDOW));
				{
					$var($Throwable, var$4, nullptr);
					try {
						status = wpg3->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
						bool var$6 = status != $XConstants::Success || wpg3->getData() == 0;
						bool var$5 = var$6 || wpg3->getActualType() != $XAtom::XA_WINDOW;
						if (var$5 || $Native::getLong(wpg3->getData()) != proxy) {
							proxy = 0;
						} else {
							$var($WindowPropertyGetter, wpg4, $new($WindowPropertyGetter, proxy, $XDnDConstants::XA_XdndAware, (int64_t)0, (int64_t)1, false, $XConstants::AnyPropertyType));
							{
								$var($Throwable, var$7, nullptr);
								try {
									status = wpg4->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
									bool var$8 = status != $XConstants::Success || wpg4->getData() == 0;
									if (var$8 || wpg4->getActualType() != $XAtom::XA_ATOM) {
										proxy = 0;
									}
								} catch ($Throwable& var$9) {
									$assign(var$7, var$9);
								} /*finally*/ {
									wpg4->dispose();
								}
								if (var$7 != nullptr) {
									$throw(var$7);
								}
							}
						}
					} catch ($Throwable& var$10) {
						$assign(var$4, var$10);
					} /*finally*/ {
						wpg3->dispose();
					}
					if (var$4 != nullptr) {
						$throw(var$4);
					}
				}
			}
			return $new($XDragSourceProtocol$TargetWindowInfo, proxy, protocolVersion);
		}
	} else {
		wpg1->dispose();
	}
	return nullptr;
}

void XDnDDragSourceProtocol::sendEnterMessage($longs* formats, int32_t sourceAction, int32_t sourceActions, int64_t time) {
	$useLocalCurrentObjectStackCache();
	if (!XDnDDragSourceProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if (!XDnDDragSourceProtocol::$assertionsDisabled && !(getTargetWindow() != 0)) {
		$throwNew($AssertionError);
	}
	if (!XDnDDragSourceProtocol::$assertionsDisabled && !(formats != nullptr)) {
		$throwNew($AssertionError);
	}
	$var($XClientMessageEvent, msg, $new($XClientMessageEvent));
	{
		$var($Throwable, var$0, nullptr);
		try {
			msg->set_type($XConstants::ClientMessage);
			msg->set_window(getTargetWindow());
			msg->set_format(32);
			$init($XDnDConstants);
			msg->set_message_type($nc($XDnDConstants::XA_XdndEnter)->getAtom());
			msg->set_data(0, $XDragSourceProtocol::getDragSourceWindow());
			int64_t data1 = $sl(getTargetProtocolVersion(), $XDnDConstants::XDND_PROTOCOL_SHIFT);
			data1 |= $nc(formats)->length > 3 ? $XDnDConstants::XDND_DATA_TYPES_BIT : 0;
			msg->set_data(1, data1);
			msg->set_data(2, $nc(formats)->length > 0 ? $nc(formats)->get(0) : (int64_t)0);
			msg->set_data(3, $nc(formats)->length > 1 ? $nc(formats)->get(1) : (int64_t)0);
			msg->set_data(4, $nc(formats)->length > 2 ? $nc(formats)->get(2) : (int64_t)0);
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XSendEvent(var$1, getTargetProxyWindow(), false, $XConstants::NoEventMask, msg->pData);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			msg->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XDnDDragSourceProtocol::sendMoveMessage(int32_t xRoot, int32_t yRoot, int32_t sourceAction, int32_t sourceActions, int64_t time) {
	$useLocalCurrentObjectStackCache();
	if (!XDnDDragSourceProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if (!XDnDDragSourceProtocol::$assertionsDisabled && !(getTargetWindow() != 0)) {
		$throwNew($AssertionError);
	}
	$var($XClientMessageEvent, msg, $new($XClientMessageEvent));
	{
		$var($Throwable, var$0, nullptr);
		try {
			msg->set_type($XConstants::ClientMessage);
			msg->set_window(getTargetWindow());
			msg->set_format(32);
			$init($XDnDConstants);
			msg->set_message_type($nc($XDnDConstants::XA_XdndPosition)->getAtom());
			msg->set_data(0, $XDragSourceProtocol::getDragSourceWindow());
			msg->set_data(1, 0);
			msg->set_data(2, (xRoot << 16) | yRoot);
			msg->set_data(3, time);
			msg->set_data(4, $XDnDConstants::getXDnDActionForJavaAction(sourceAction));
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XSendEvent(var$1, getTargetProxyWindow(), false, $XConstants::NoEventMask, msg->pData);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			msg->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XDnDDragSourceProtocol::sendLeaveMessage(int64_t time) {
	$useLocalCurrentObjectStackCache();
	if (!XDnDDragSourceProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if (!XDnDDragSourceProtocol::$assertionsDisabled && !(getTargetWindow() != 0)) {
		$throwNew($AssertionError);
	}
	$var($XClientMessageEvent, msg, $new($XClientMessageEvent));
	{
		$var($Throwable, var$0, nullptr);
		try {
			msg->set_type($XConstants::ClientMessage);
			msg->set_window(getTargetWindow());
			msg->set_format(32);
			$init($XDnDConstants);
			msg->set_message_type($nc($XDnDConstants::XA_XdndLeave)->getAtom());
			msg->set_data(0, $XDragSourceProtocol::getDragSourceWindow());
			msg->set_data(1, 0);
			msg->set_data(2, 0);
			msg->set_data(3, 0);
			msg->set_data(4, 0);
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XSendEvent(var$1, getTargetProxyWindow(), false, $XConstants::NoEventMask, msg->pData);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			msg->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XDnDDragSourceProtocol::sendDropMessage(int32_t xRoot, int32_t yRoot, int32_t sourceAction, int32_t sourceActions, int64_t time) {
	$useLocalCurrentObjectStackCache();
	if (!XDnDDragSourceProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if (!XDnDDragSourceProtocol::$assertionsDisabled && !(getTargetWindow() != 0)) {
		$throwNew($AssertionError);
	}
	$var($XClientMessageEvent, msg, $new($XClientMessageEvent));
	{
		$var($Throwable, var$0, nullptr);
		try {
			msg->set_type($XConstants::ClientMessage);
			msg->set_window(getTargetWindow());
			msg->set_format(32);
			$init($XDnDConstants);
			msg->set_message_type($nc($XDnDConstants::XA_XdndDrop)->getAtom());
			msg->set_data(0, $XDragSourceProtocol::getDragSourceWindow());
			msg->set_data(1, 0);
			msg->set_data(2, time);
			msg->set_data(3, 0);
			msg->set_data(4, 0);
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XSendEvent(var$1, getTargetProxyWindow(), false, $XConstants::NoEventMask, msg->pData);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			msg->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool XDnDDragSourceProtocol::processProxyModeEvent($XClientMessageEvent* xclient, int64_t sourceWindow) {
	$useLocalCurrentObjectStackCache();
	int64_t var$1 = $nc(xclient)->get_message_type();
	$init($XDnDConstants);
	bool var$0 = var$1 == $nc($XDnDConstants::XA_XdndStatus)->getAtom();
	if (!var$0) {
		int64_t var$2 = $nc(xclient)->get_message_type();
		var$0 = var$2 == $nc($XDnDConstants::XA_XdndFinished)->getAtom();
	}
	if (var$0) {
		int64_t var$3 = xclient->get_message_type();
		if (var$3 == $nc($XDnDConstants::XA_XdndFinished)->getAtom()) {
			$XDragSourceContextPeer::setProxyModeSourceWindow(0);
		}
		if (xclient->get_window() == sourceWindow) {
			return false;
		}
		$init($PlatformLogger$Level);
		if ($nc(XDnDDragSourceProtocol::logger)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(XDnDDragSourceProtocol::logger)->finest($$str({"        sourceWindow="_s, $$str(sourceWindow), " get_window="_s, $$str(xclient->get_window()), " xclient="_s, xclient}));
		}
		xclient->set_data(0, xclient->get_window());
		xclient->set_window(sourceWindow);
		if (!XDnDDragSourceProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
			$throwNew($AssertionError);
		}
		$XlibWrapper::XSendEvent($XToolkit::getDisplay(), sourceWindow, false, $XConstants::NoEventMask, xclient->pData);
		return true;
	}
	return false;
}

void XDnDDragSourceProtocol::run() {
	cleanup();
}

void clinit$XDnDDragSourceProtocol($Class* class$) {
	XDnDDragSourceProtocol::$assertionsDisabled = !XDnDDragSourceProtocol::class$->desiredAssertionStatus();
	$assignStatic(XDnDDragSourceProtocol::logger, $PlatformLogger::getLogger("sun.awt.X11.xembed.xdnd.XDnDDragSourceProtocol"_s));
	$init($XlibWrapper);
	$assignStatic(XDnDDragSourceProtocol::unsafe, $XlibWrapper::unsafe);
}

XDnDDragSourceProtocol::XDnDDragSourceProtocol() {
}

$Class* XDnDDragSourceProtocol::load$($String* name, bool initialize) {
	$loadClass(XDnDDragSourceProtocol, name, initialize, &_XDnDDragSourceProtocol_ClassInfo_, clinit$XDnDDragSourceProtocol, allocate$XDnDDragSourceProtocol);
	return class$;
}

$Class* XDnDDragSourceProtocol::class$ = nullptr;

		} // X11
	} // awt
} // sun