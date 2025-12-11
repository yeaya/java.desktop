#include <sun/awt/X11/XDnDDropTargetProtocol.h>

#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/AssertionError.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/WindowPropertyGetter.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDnDConstants.h>
#include <sun/awt/X11/XDragAndDropProtocols.h>
#include <sun/awt/X11/XDragSourceContextPeer.h>
#include <sun/awt/X11/XDropTargetEventProcessor.h>
#include <sun/awt/X11/XDropTargetProtocol$EmbedderRegistryEntry.h>
#include <sun/awt/X11/XDropTargetProtocol.h>
#include <sun/awt/X11/XDropTargetProtocolListener.h>
#include <sun/awt/X11/XDropTargetRegistry.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler$IgnoreBadWindowHandler.h>
#include <sun/awt/X11/XErrorHandler$VerifyChangePropertyHandler.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XErrorHandlerUtil.h>
#include <sun/awt/X11/XException.h>
#include <sun/awt/X11/XRootWindow.h>
#include <sun/awt/X11/XSelection.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowAttributes.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACTION_COPY
#undef ACTION_MOVE
#undef ACTION_NONE
#undef DROP_MESSAGE
#undef ENTER_MESSAGE
#undef FINEST
#undef LEAVE_MESSAGE
#undef MOTION_MESSAGE
#undef MOUSE_DRAGGED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_RELEASED
#undef UNKNOWN_MESSAGE
#undef WARNING
#undef XA_ATOM
#undef XA_WINDOW
#undef XDND_ACCEPT_DROP_FLAG
#undef XDND_DATA_TYPES_BIT
#undef XDND_MIN_PROTOCOL_VERSION
#undef XDND_PROTOCOL_MASK
#undef XDND_PROTOCOL_SHIFT
#undef XDND_PROTOCOL_VERSION

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Native = ::sun::awt::X11::Native;
using $WindowPropertyGetter = ::sun::awt::X11::WindowPropertyGetter;
using $XAtom = ::sun::awt::X11::XAtom;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDnDConstants = ::sun::awt::X11::XDnDConstants;
using $XDragAndDropProtocols = ::sun::awt::X11::XDragAndDropProtocols;
using $XDragSourceContextPeer = ::sun::awt::X11::XDragSourceContextPeer;
using $XDropTargetEventProcessor = ::sun::awt::X11::XDropTargetEventProcessor;
using $XDropTargetProtocol = ::sun::awt::X11::XDropTargetProtocol;
using $XDropTargetProtocol$EmbedderRegistryEntry = ::sun::awt::X11::XDropTargetProtocol$EmbedderRegistryEntry;
using $XDropTargetProtocolListener = ::sun::awt::X11::XDropTargetProtocolListener;
using $XDropTargetRegistry = ::sun::awt::X11::XDropTargetRegistry;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandler$IgnoreBadWindowHandler = ::sun::awt::X11::XErrorHandler$IgnoreBadWindowHandler;
using $XErrorHandler$VerifyChangePropertyHandler = ::sun::awt::X11::XErrorHandler$VerifyChangePropertyHandler;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;
using $XErrorHandlerUtil = ::sun::awt::X11::XErrorHandlerUtil;
using $XException = ::sun::awt::X11::XException;
using $XRootWindow = ::sun::awt::X11::XRootWindow;
using $XSelection = ::sun::awt::X11::XSelection;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowAttributes = ::sun::awt::X11::XWindowAttributes;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDnDDropTargetProtocol_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XDnDDropTargetProtocol, $assertionsDisabled)},
	{"logger", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDnDDropTargetProtocol, logger)},
	{"unsafe", "Ljdk/internal/misc/Unsafe;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDnDDropTargetProtocol, unsafe)},
	{"sourceWindow", "J", nullptr, $PRIVATE, $field(XDnDDropTargetProtocol, sourceWindow)},
	{"sourceWindowMask", "J", nullptr, $PRIVATE, $field(XDnDDropTargetProtocol, sourceWindowMask)},
	{"sourceProtocolVersion", "I", nullptr, $PRIVATE, $field(XDnDDropTargetProtocol, sourceProtocolVersion)},
	{"sourceActions", "I", nullptr, $PRIVATE, $field(XDnDDropTargetProtocol, sourceActions)},
	{"sourceFormats", "[J", nullptr, $PRIVATE, $field(XDnDDropTargetProtocol, sourceFormats)},
	{"trackSourceActions", "Z", nullptr, $PRIVATE, $field(XDnDDropTargetProtocol, trackSourceActions)},
	{"userAction", "I", nullptr, $PRIVATE, $field(XDnDDropTargetProtocol, userAction)},
	{"sourceX", "I", nullptr, $PRIVATE, $field(XDnDDropTargetProtocol, sourceX)},
	{"sourceY", "I", nullptr, $PRIVATE, $field(XDnDDropTargetProtocol, sourceY)},
	{"targetXWindow", "Lsun/awt/X11/XWindow;", nullptr, $PRIVATE, $field(XDnDDropTargetProtocol, targetXWindow)},
	{"prevCtxt", "J", nullptr, $PRIVATE, $field(XDnDDropTargetProtocol, prevCtxt)},
	{"overXEmbedClient", "Z", nullptr, $PRIVATE, $field(XDnDDropTargetProtocol, overXEmbedClient)},
	{}
};

$MethodInfo _XDnDDropTargetProtocol_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XDropTargetProtocolListener;)V", nullptr, $PROTECTED, $method(static_cast<void(XDnDDropTargetProtocol::*)($XDropTargetProtocolListener*)>(&XDnDDropTargetProtocol::init$))},
	{"adjustEventForForwarding", "(Lsun/awt/X11/XClientMessageEvent;Lsun/awt/X11/XDropTargetProtocol$EmbedderRegistryEntry;)V", nullptr, $PUBLIC},
	{"cleanup", "()V", nullptr, $PUBLIC},
	{"createInstance", "(Lsun/awt/X11/XDropTargetProtocolListener;)Lsun/awt/X11/XDropTargetProtocol;", nullptr, $STATIC, $method(static_cast<$XDropTargetProtocol*(*)($XDropTargetProtocolListener*)>(&XDnDDropTargetProtocol::createInstance))},
	{"forwardEventToEmbedded", "(JJI)Z", nullptr, $PUBLIC},
	{"getData", "(JJ)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,java.io.IOException"},
	{"getMessageType", "(Lsun/awt/X11/XClientMessageEvent;)I", nullptr, $PUBLIC},
	{"getProtocolName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSourceWindow", "()J", nullptr, $PUBLIC | $FINAL},
	{"isDragOverComponent", "()Z", nullptr, $PUBLIC},
	{"isProtocolSupported", "(J)Z", nullptr, $PUBLIC},
	{"isXEmbedSupported", "()Z", nullptr, $PUBLIC},
	{"notifyProtocolListener", "(Lsun/awt/X11/XWindow;IIILsun/awt/X11/XClientMessageEvent;I)V", nullptr, $PRIVATE, $method(static_cast<void(XDnDDropTargetProtocol::*)($XWindow*,int32_t,int32_t,int32_t,$XClientMessageEvent*,int32_t)>(&XDnDDropTargetProtocol::notifyProtocolListener))},
	{"processClientMessageImpl", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PROTECTED},
	{"processXdndDrop", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XDnDDropTargetProtocol::*)($XClientMessageEvent*)>(&XDnDDropTargetProtocol::processXdndDrop))},
	{"processXdndEnter", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XDnDDropTargetProtocol::*)($XClientMessageEvent*)>(&XDnDDropTargetProtocol::processXdndEnter))},
	{"processXdndLeave", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XDnDDropTargetProtocol::*)($XClientMessageEvent*)>(&XDnDDropTargetProtocol::processXdndLeave))},
	{"processXdndPosition", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XDnDDropTargetProtocol::*)($XClientMessageEvent*)>(&XDnDDropTargetProtocol::processXdndPosition))},
	{"registerDropTarget", "(J)V", nullptr, $PUBLIC},
	{"registerEmbeddedDropSite", "(J)V", nullptr, $PUBLIC},
	{"registerEmbedderDropSite", "(J)V", nullptr, $PUBLIC},
	{"sendDropDone", "(JZI)Z", nullptr, $PUBLIC},
	{"sendEnterMessageToToplevel", "(JLsun/awt/X11/XClientMessageEvent;)V", nullptr, $PROTECTED},
	{"sendEnterMessageToToplevelImpl", "(JJJJJJ)V", nullptr, $PRIVATE, $method(static_cast<void(XDnDDropTargetProtocol::*)(int64_t,int64_t,int64_t,int64_t,int64_t,int64_t)>(&XDnDDropTargetProtocol::sendEnterMessageToToplevelImpl))},
	{"sendLeaveMessageToToplevel", "(JLsun/awt/X11/XClientMessageEvent;)V", nullptr, $PROTECTED},
	{"sendLeaveMessageToToplevelImpl", "(JJ)V", nullptr, $PROTECTED},
	{"sendResponse", "(JII)Z", nullptr, $PUBLIC},
	{"unregisterDropTarget", "(J)V", nullptr, $PUBLIC},
	{"unregisterEmbedderDropSite", "(J)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XDnDDropTargetProtocol_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XDnDDropTargetProtocol",
	"sun.awt.X11.XDropTargetProtocol",
	nullptr,
	_XDnDDropTargetProtocol_FieldInfo_,
	_XDnDDropTargetProtocol_MethodInfo_
};

$Object* allocate$XDnDDropTargetProtocol($Class* clazz) {
	return $of($alloc(XDnDDropTargetProtocol));
}

bool XDnDDropTargetProtocol::$assertionsDisabled = false;
$PlatformLogger* XDnDDropTargetProtocol::logger = nullptr;
$Unsafe* XDnDDropTargetProtocol::unsafe = nullptr;

void XDnDDropTargetProtocol::init$($XDropTargetProtocolListener* listener) {
	$XDropTargetProtocol::init$(listener);
	this->sourceWindow = 0;
	this->sourceWindowMask = 0;
	this->sourceProtocolVersion = 0;
	this->sourceActions = $DnDConstants::ACTION_NONE;
	$set(this, sourceFormats, nullptr);
	this->trackSourceActions = false;
	this->userAction = $DnDConstants::ACTION_NONE;
	this->sourceX = 0;
	this->sourceY = 0;
	$set(this, targetXWindow, nullptr);
	this->prevCtxt = 0;
	this->overXEmbedClient = false;
}

$XDropTargetProtocol* XDnDDropTargetProtocol::createInstance($XDropTargetProtocolListener* listener) {
	$init(XDnDDropTargetProtocol);
	return $new(XDnDDropTargetProtocol, listener);
}

$String* XDnDDropTargetProtocol::getProtocolName() {
	$init($XDragAndDropProtocols);
	return $XDragAndDropProtocols::XDnD;
}

void XDnDDropTargetProtocol::registerDropTarget(int64_t window) {
	$useLocalCurrentObjectStackCache();
	if (!XDnDDropTargetProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	int64_t data = $Native::allocateLongArray(1);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$Native::putLong(data, 0, $XDnDConstants::XDND_PROTOCOL_VERSION);
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
			$init($XDnDConstants);
			$nc($XDnDConstants::XA_XdndAware)->setAtomData(window, $XAtom::XA_ATOM, data, 1);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
				$throwNew($XException, "Cannot write XdndAware property"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(XDnDDropTargetProtocol::unsafe)->freeMemory(data);
			data = 0;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XDnDDropTargetProtocol::unregisterDropTarget(int64_t window) {
	if (!XDnDDropTargetProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$init($XDnDConstants);
	$nc($XDnDConstants::XA_XdndAware)->DeleteProperty(window);
}

void XDnDDropTargetProtocol::registerEmbedderDropSite(int64_t embedder) {
	$useLocalCurrentObjectStackCache();
	if (!XDnDDropTargetProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	bool overriden = false;
	int32_t version = 0;
	int64_t proxy = 0;
	int64_t newProxy = $XDropTargetRegistry::getDnDProxyWindow();
	int32_t status = 0;
	$init($XDnDConstants);
	$var($WindowPropertyGetter, wpg1, $new($WindowPropertyGetter, embedder, $XDnDConstants::XA_XdndAware, (int64_t)0, (int64_t)1, false, $XConstants::AnyPropertyType));
	{
		$var($Throwable, var$0, nullptr);
		try {
			status = wpg1->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
			bool var$1 = status == $XConstants::Success && wpg1->getData() != 0;
			if (var$1 && wpg1->getActualType() == $XAtom::XA_ATOM) {
				overriden = true;
				version = (int32_t)$Native::getLong(wpg1->getData());
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			wpg1->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (overriden && version >= 4) {
		$var($WindowPropertyGetter, wpg2, $new($WindowPropertyGetter, embedder, $XDnDConstants::XA_XdndProxy, (int64_t)0, (int64_t)1, false, $XAtom::XA_WINDOW));
		{
			$var($Throwable, var$3, nullptr);
			try {
				status = wpg2->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
				bool var$4 = status == $XConstants::Success && wpg2->getData() != 0;
				if (var$4 && wpg2->getActualType() == $XAtom::XA_WINDOW) {
					proxy = $Native::getLong(wpg2->getData());
				}
			} catch ($Throwable& var$5) {
				$assign(var$3, var$5);
			} /*finally*/ {
				wpg2->dispose();
			}
			if (var$3 != nullptr) {
				$throw(var$3);
			}
		}
		if (proxy != 0) {
			$var($WindowPropertyGetter, wpg3, $new($WindowPropertyGetter, proxy, $XDnDConstants::XA_XdndProxy, (int64_t)0, (int64_t)1, false, $XAtom::XA_WINDOW));
			{
				$var($Throwable, var$6, nullptr);
				try {
					status = wpg3->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
					bool var$8 = status != $XConstants::Success || wpg3->getData() == 0;
					bool var$7 = var$8 || wpg3->getActualType() != $XAtom::XA_WINDOW;
					if (var$7 || $Native::getLong(wpg3->getData()) != proxy) {
						proxy = 0;
					} else {
						$var($WindowPropertyGetter, wpg4, $new($WindowPropertyGetter, proxy, $XDnDConstants::XA_XdndAware, (int64_t)0, (int64_t)1, false, $XConstants::AnyPropertyType));
						{
							$var($Throwable, var$9, nullptr);
							try {
								status = wpg4->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
								bool var$10 = status != $XConstants::Success || wpg4->getData() == 0;
								if (var$10 || wpg4->getActualType() != $XAtom::XA_ATOM) {
									proxy = 0;
								}
							} catch ($Throwable& var$11) {
								$assign(var$9, var$11);
							} /*finally*/ {
								wpg4->dispose();
							}
							if (var$9 != nullptr) {
								$throw(var$9);
							}
						}
					}
				} catch ($Throwable& var$12) {
					$assign(var$6, var$12);
				} /*finally*/ {
					wpg3->dispose();
				}
				if (var$6 != nullptr) {
					$throw(var$6);
				}
			}
		}
	}
	if (proxy == newProxy) {
		return;
	}
	int64_t data = $Native::allocateLongArray(1);
	{
		$var($Throwable, var$13, nullptr);
		try {
			$Native::putLong(data, 0, $XDnDConstants::XDND_PROTOCOL_VERSION);
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
			$nc($XDnDConstants::XA_XdndAware)->setAtomData(newProxy, $XAtom::XA_ATOM, data, 1);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
				$throwNew($XException, "Cannot write XdndAware property"_s);
			}
			$Native::putLong(data, 0, newProxy);
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
			$nc($XDnDConstants::XA_XdndProxy)->setAtomData(newProxy, $XAtom::XA_WINDOW, data, 1);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
				$throwNew($XException, "Cannot write XdndProxy property"_s);
			}
			$Native::putLong(data, 0, $XDnDConstants::XDND_PROTOCOL_VERSION);
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
			$nc($XDnDConstants::XA_XdndAware)->setAtomData(embedder, $XAtom::XA_ATOM, data, 1);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
				$throwNew($XException, "Cannot write XdndAware property"_s);
			}
			$Native::putLong(data, 0, newProxy);
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
			$nc($XDnDConstants::XA_XdndProxy)->setAtomData(embedder, $XAtom::XA_WINDOW, data, 1);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
				$throwNew($XException, "Cannot write XdndProxy property"_s);
			}
		} catch ($Throwable& var$14) {
			$assign(var$13, var$14);
		} /*finally*/ {
			$nc(XDnDDropTargetProtocol::unsafe)->freeMemory(data);
			data = 0;
		}
		if (var$13 != nullptr) {
			$throw(var$13);
		}
	}
	putEmbedderRegistryEntry(embedder, overriden, version, proxy);
}

void XDnDDropTargetProtocol::unregisterEmbedderDropSite(int64_t embedder) {
	$useLocalCurrentObjectStackCache();
	if (!XDnDDropTargetProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$var($XDropTargetProtocol$EmbedderRegistryEntry, entry, getEmbedderRegistryEntry(embedder));
	if (entry == nullptr) {
		return;
	}
	if ($nc(entry)->isOverriden()) {
		int64_t data = $Native::allocateLongArray(1);
		{
			$var($Throwable, var$0, nullptr);
			try {
				$Native::putLong(data, 0, entry->getVersion());
				$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
				$init($XDnDConstants);
				$nc($XDnDConstants::XA_XdndAware)->setAtomData(embedder, $XAtom::XA_ATOM, data, 1);
				$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
				if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
					$throwNew($XException, "Cannot write XdndAware property"_s);
				}
				$Native::putLong(data, 0, (int32_t)entry->getProxy());
				$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
				$nc($XDnDConstants::XA_XdndProxy)->setAtomData(embedder, $XAtom::XA_WINDOW, data, 1);
				$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
				if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
					$throwNew($XException, "Cannot write XdndProxy property"_s);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc(XDnDDropTargetProtocol::unsafe)->freeMemory(data);
				data = 0;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		$init($XDnDConstants);
		$nc($XDnDConstants::XA_XdndAware)->DeleteProperty(embedder);
		$nc($XDnDConstants::XA_XdndProxy)->DeleteProperty(embedder);
	}
}

void XDnDDropTargetProtocol::registerEmbeddedDropSite(int64_t embedded) {
	$useLocalCurrentObjectStackCache();
	if (!XDnDDropTargetProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	bool overriden = false;
	int32_t version = 0;
	int64_t proxy = 0;
	int64_t newProxy = $XDropTargetRegistry::getDnDProxyWindow();
	int32_t status = 0;
	$init($XDnDConstants);
	$var($WindowPropertyGetter, wpg1, $new($WindowPropertyGetter, embedded, $XDnDConstants::XA_XdndAware, (int64_t)0, (int64_t)1, false, $XConstants::AnyPropertyType));
	{
		$var($Throwable, var$0, nullptr);
		try {
			status = wpg1->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
			bool var$1 = status == $XConstants::Success && wpg1->getData() != 0;
			if (var$1 && wpg1->getActualType() == $XAtom::XA_ATOM) {
				overriden = true;
				version = (int32_t)$Native::getLong(wpg1->getData());
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			wpg1->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (overriden && version >= 4) {
		$var($WindowPropertyGetter, wpg2, $new($WindowPropertyGetter, embedded, $XDnDConstants::XA_XdndProxy, (int64_t)0, (int64_t)1, false, $XAtom::XA_WINDOW));
		{
			$var($Throwable, var$3, nullptr);
			try {
				status = wpg2->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
				bool var$4 = status == $XConstants::Success && wpg2->getData() != 0;
				if (var$4 && wpg2->getActualType() == $XAtom::XA_WINDOW) {
					proxy = $Native::getLong(wpg2->getData());
				}
			} catch ($Throwable& var$5) {
				$assign(var$3, var$5);
			} /*finally*/ {
				wpg2->dispose();
			}
			if (var$3 != nullptr) {
				$throw(var$3);
			}
		}
		if (proxy != 0) {
			$var($WindowPropertyGetter, wpg3, $new($WindowPropertyGetter, proxy, $XDnDConstants::XA_XdndProxy, (int64_t)0, (int64_t)1, false, $XAtom::XA_WINDOW));
			{
				$var($Throwable, var$6, nullptr);
				try {
					status = wpg3->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
					bool var$8 = status != $XConstants::Success || wpg3->getData() == 0;
					bool var$7 = var$8 || wpg3->getActualType() != $XAtom::XA_WINDOW;
					if (var$7 || $Native::getLong(wpg3->getData()) != proxy) {
						proxy = 0;
					} else {
						$var($WindowPropertyGetter, wpg4, $new($WindowPropertyGetter, proxy, $XDnDConstants::XA_XdndAware, (int64_t)0, (int64_t)1, false, $XConstants::AnyPropertyType));
						{
							$var($Throwable, var$9, nullptr);
							try {
								status = wpg4->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
								bool var$10 = status != $XConstants::Success || wpg4->getData() == 0;
								if (var$10 || wpg4->getActualType() != $XAtom::XA_ATOM) {
									proxy = 0;
								}
							} catch ($Throwable& var$11) {
								$assign(var$9, var$11);
							} /*finally*/ {
								wpg4->dispose();
							}
							if (var$9 != nullptr) {
								$throw(var$9);
							}
						}
					}
				} catch ($Throwable& var$12) {
					$assign(var$6, var$12);
				} /*finally*/ {
					wpg3->dispose();
				}
				if (var$6 != nullptr) {
					$throw(var$6);
				}
			}
		}
	}
	putEmbedderRegistryEntry(embedded, overriden, version, proxy);
}

bool XDnDDropTargetProtocol::isProtocolSupported(int64_t window) {
	$useLocalCurrentObjectStackCache();
	if (!XDnDDropTargetProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$init($XDnDConstants);
	$var($WindowPropertyGetter, wpg1, $new($WindowPropertyGetter, window, $XDnDConstants::XA_XdndAware, (int64_t)0, (int64_t)1, false, $XConstants::AnyPropertyType));
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			int32_t status = wpg1->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
			bool var$3 = status == $XConstants::Success && wpg1->getData() != 0;
			if (var$3 && wpg1->getActualType() == $XAtom::XA_ATOM) {
				var$2 = true;
				return$1 = true;
				goto $finally;
			} else {
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$4) {
			$assign(var$0, var$4);
		} $finally: {
			wpg1->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool XDnDDropTargetProtocol::processXdndEnter($XClientMessageEvent* xclient) {
	$useLocalCurrentObjectStackCache();
	int64_t source_win = 0;
	int64_t source_win_mask = 0;
	int32_t protocol_version = 0;
	int32_t actions = $DnDConstants::ACTION_NONE;
	bool track = true;
	$var($longs, formats, nullptr);
	if (getSourceWindow() != 0) {
		return false;
	}
	bool var$0 = !($instanceOf($XWindow, $($XToolkit::windowToXWindow($nc(xclient)->get_window()))));
	if (var$0 && getEmbedderRegistryEntry($nc(xclient)->get_window()) == nullptr) {
		return false;
	}
	int64_t var$1 = $nc(xclient)->get_message_type();
	$init($XDnDConstants);
	if (var$1 != $nc($XDnDConstants::XA_XdndEnter)->getAtom()) {
		return false;
	}
	protocol_version = (int32_t)($sr((int64_t)($nc(xclient)->get_data(1) & (uint64_t)(int64_t)$XDnDConstants::XDND_PROTOCOL_MASK), $XDnDConstants::XDND_PROTOCOL_SHIFT));
	if (protocol_version < $XDnDConstants::XDND_MIN_PROTOCOL_VERSION) {
		return false;
	}
	if (protocol_version > $XDnDConstants::XDND_PROTOCOL_VERSION) {
		return false;
	}
	source_win = xclient->get_data(0);
	if (protocol_version < 2) {
		actions = $DnDConstants::ACTION_COPY;
	} else {
		$var($WindowPropertyGetter, wpg, $new($WindowPropertyGetter, source_win, $XDnDConstants::XA_XdndActionList, (int64_t)0, (int64_t)0x0000FFFF, false, $XAtom::XA_ATOM));
		{
			$var($Throwable, var$2, nullptr);
			try {
				wpg->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
				bool var$3 = wpg->getActualType() == $XAtom::XA_ATOM;
				if (var$3 && wpg->getActualFormat() == 32) {
					int64_t data = wpg->getData();
					for (int32_t i = 0; i < wpg->getNumberOfItems(); ++i) {
						actions |= $XDnDConstants::getJavaActionForXDnDAction($Native::getLong(data, i));
					}
				} else {
					actions = $DnDConstants::ACTION_COPY;
					track = true;
				}
			} catch ($Throwable& var$4) {
				$assign(var$2, var$4);
			} /*finally*/ {
				wpg->dispose();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
	if (((int64_t)(xclient->get_data(1) & (uint64_t)(int64_t)$XDnDConstants::XDND_DATA_TYPES_BIT)) != 0) {
		$var($WindowPropertyGetter, wpg, $new($WindowPropertyGetter, source_win, $XDnDConstants::XA_XdndTypeList, (int64_t)0, (int64_t)0x0000FFFF, false, $XAtom::XA_ATOM));
		{
			$var($Throwable, var$5, nullptr);
			try {
				wpg->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
				bool var$6 = wpg->getActualType() == $XAtom::XA_ATOM;
				if (var$6 && wpg->getActualFormat() == 32) {
					int64_t var$7 = wpg->getData();
					$assign(formats, $Native::toLongs(var$7, wpg->getNumberOfItems()));
				} else {
					$assign(formats, $new($longs, 0));
				}
			} catch ($Throwable& var$8) {
				$assign(var$5, var$8);
			} /*finally*/ {
				wpg->dispose();
			}
			if (var$5 != nullptr) {
				$throw(var$5);
			}
		}
	} else {
		int32_t countFormats = 0;
		$var($longs, formats3, $new($longs, 3));
		for (int32_t i = 0; i < 3; ++i) {
			int64_t j = 0;
			if ((j = xclient->get_data(2 + i)) != $XConstants::None) {
				formats3->set(countFormats++, j);
			}
		}
		$assign(formats, $new($longs, countFormats));
		$System::arraycopy(formats3, 0, formats, 0, countFormats);
	}
	if (!XDnDDropTargetProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$var($XWindowAttributes, wattr, $new($XWindowAttributes));
	{
		$var($Throwable, var$9, nullptr);
		try {
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
			int32_t status = $XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), source_win, wattr->pData);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if ((status == 0) || (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success))) {
				$throwNew($XException, "XGetWindowAttributes failed"_s);
			}
			source_win_mask = wattr->get_your_event_mask();
		} catch ($Throwable& var$10) {
			$assign(var$9, var$10);
		} /*finally*/ {
			wattr->dispose();
		}
		if (var$9 != nullptr) {
			$throw(var$9);
		}
	}
	$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
	$XlibWrapper::XSelectInput($XToolkit::getDisplay(), source_win, source_win_mask | $XConstants::StructureNotifyMask);
	$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
	if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
		$throwNew($XException, "XSelectInput failed"_s);
	}
	this->sourceWindow = source_win;
	this->sourceWindowMask = source_win_mask;
	this->sourceProtocolVersion = protocol_version;
	this->sourceActions = actions;
	$set(this, sourceFormats, formats);
	this->trackSourceActions = track;
	return true;
}

bool XDnDDropTargetProtocol::processXdndPosition($XClientMessageEvent* xclient) {
	$useLocalCurrentObjectStackCache();
	int64_t time_stamp = (int32_t)$XConstants::CurrentTime;
	int64_t xdnd_action = 0;
	int32_t java_action = $DnDConstants::ACTION_NONE;
	int32_t x = 0;
	int32_t y = 0;
	if (this->sourceWindow != $nc(xclient)->get_data(0)) {
		return false;
	}
	$var($XWindow, xwindow, nullptr);
	{
		$var($XBaseWindow, xbasewindow, $XToolkit::windowToXWindow($nc(xclient)->get_window()));
		if ($instanceOf($XWindow, xbasewindow)) {
			$assign(xwindow, $cast($XWindow, xbasewindow));
		}
	}
	x = (int32_t)($nc(xclient)->get_data(2) >> 16);
	y = (int32_t)((int64_t)(xclient->get_data(2) & (uint64_t)(int64_t)0x0000FFFF));
	if (xwindow != nullptr) {
		x = xwindow->scaleDown(x);
		y = xwindow->scaleDown(y);
	} else {
		$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
		{
			$var($GraphicsDeviceArray, arr$, $nc(ge)->getScreenDevices());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($GraphicsDevice, gd, arr$->get(i$));
				{
					$var($X11GraphicsConfig, gc, $cast($X11GraphicsConfig, $nc(gd)->getDefaultConfiguration()));
					$var($Rectangle, rt, $nc(gc)->getBounds());
					$nc(rt)->x = gc->scaleUp(rt->x);
					rt->y = gc->scaleUp(rt->y);
					rt->width = gc->scaleUp(rt->width);
					rt->height = gc->scaleUp(rt->height);
					if (rt->contains(x, y)) {
						x = gc->scaleDown(x);
						y = gc->scaleDown(y);
						break;
					}
				}
			}
		}
		int64_t receiver = $nc($($XDropTargetRegistry::getRegistry()))->getEmbeddedDropSite(xclient->get_window(), x, y);
		if (receiver != 0) {
			$var($XBaseWindow, xbasewindow, $XToolkit::windowToXWindow(receiver));
			if ($instanceOf($XWindow, xbasewindow)) {
				$assign(xwindow, $cast($XWindow, xbasewindow));
			}
		}
	}
	if (xwindow != nullptr) {
		$var($Point, p, xwindow->toLocal(x, y));
		x = $nc(p)->x;
		y = p->y;
	}
	if (this->sourceProtocolVersion > 0) {
		time_stamp = (int64_t)(xclient->get_data(3) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	}
	if (this->sourceProtocolVersion > 1) {
		xdnd_action = xclient->get_data(4);
	} else {
		$init($XDnDConstants);
		xdnd_action = $nc($XDnDConstants::XA_XdndActionCopy)->getAtom();
	}
	java_action = $XDnDConstants::getJavaActionForXDnDAction(xdnd_action);
	if (this->trackSourceActions) {
		this->sourceActions |= java_action;
	}
	if (xwindow == nullptr) {
		if (this->targetXWindow != nullptr) {
			notifyProtocolListener(this->targetXWindow, x, y, $DnDConstants::ACTION_NONE, xclient, $MouseEvent::MOUSE_EXITED);
		}
	} else {
		int32_t java_event_id = 0;
		if (this->targetXWindow == nullptr) {
			java_event_id = $MouseEvent::MOUSE_ENTERED;
		} else {
			java_event_id = $MouseEvent::MOUSE_DRAGGED;
		}
		notifyProtocolListener(xwindow, x, y, java_action, xclient, java_event_id);
	}
	this->userAction = java_action;
	this->sourceX = x;
	this->sourceY = y;
	$set(this, targetXWindow, xwindow);
	return true;
}

bool XDnDDropTargetProtocol::processXdndLeave($XClientMessageEvent* xclient) {
	if (this->sourceWindow != $nc(xclient)->get_data(0)) {
		return false;
	}
	cleanup();
	return true;
}

bool XDnDDropTargetProtocol::processXdndDrop($XClientMessageEvent* xclient) {
	if (this->sourceWindow != $nc(xclient)->get_data(0)) {
		return false;
	}
	if (this->targetXWindow != nullptr) {
		notifyProtocolListener(this->targetXWindow, this->sourceX, this->sourceY, this->userAction, xclient, $MouseEvent::MOUSE_RELEASED);
	}
	return true;
}

int32_t XDnDDropTargetProtocol::getMessageType($XClientMessageEvent* xclient) {
	int64_t messageType = $nc(xclient)->get_message_type();
	$init($XDnDConstants);
	if (messageType == $nc($XDnDConstants::XA_XdndEnter)->getAtom()) {
		return $XDropTargetProtocol::ENTER_MESSAGE;
	} else {
		if (messageType == $nc($XDnDConstants::XA_XdndPosition)->getAtom()) {
			return $XDropTargetProtocol::MOTION_MESSAGE;
		} else {
			if (messageType == $nc($XDnDConstants::XA_XdndLeave)->getAtom()) {
				return $XDropTargetProtocol::LEAVE_MESSAGE;
			} else {
				if (messageType == $nc($XDnDConstants::XA_XdndDrop)->getAtom()) {
					return $XDropTargetProtocol::DROP_MESSAGE;
				} else {
					return $XDropTargetProtocol::UNKNOWN_MESSAGE;
				}
			}
		}
	}
}

bool XDnDDropTargetProtocol::processClientMessageImpl($XClientMessageEvent* xclient) {
	int64_t messageType = $nc(xclient)->get_message_type();
	$init($XDnDConstants);
	if (messageType == $nc($XDnDConstants::XA_XdndEnter)->getAtom()) {
		return processXdndEnter(xclient);
	} else {
		if (messageType == $nc($XDnDConstants::XA_XdndPosition)->getAtom()) {
			return processXdndPosition(xclient);
		} else {
			if (messageType == $nc($XDnDConstants::XA_XdndLeave)->getAtom()) {
				return processXdndLeave(xclient);
			} else {
				if (messageType == $nc($XDnDConstants::XA_XdndDrop)->getAtom()) {
					return processXdndDrop(xclient);
				} else {
					return false;
				}
			}
		}
	}
}

void XDnDDropTargetProtocol::sendEnterMessageToToplevel(int64_t toplevel, $XClientMessageEvent* xclient) {
	int64_t data1 = $sl(this->sourceProtocolVersion, $XDnDConstants::XDND_PROTOCOL_SHIFT);
	if (this->sourceFormats != nullptr && $nc(this->sourceFormats)->length > 3) {
		data1 |= $XDnDConstants::XDND_DATA_TYPES_BIT;
	}
	int64_t data2 = $nc(this->sourceFormats)->length > 0 ? $nc(this->sourceFormats)->get(0) : (int64_t)0;
	int64_t data3 = $nc(this->sourceFormats)->length > 1 ? $nc(this->sourceFormats)->get(1) : (int64_t)0;
	int64_t data4 = $nc(this->sourceFormats)->length > 2 ? $nc(this->sourceFormats)->get(2) : (int64_t)0;
	sendEnterMessageToToplevelImpl(toplevel, $nc(xclient)->get_data(0), data1, data2, data3, data4);
}

void XDnDDropTargetProtocol::sendEnterMessageToToplevelImpl(int64_t toplevel, int64_t sourceWindow, int64_t data1, int64_t data2, int64_t data3, int64_t data4) {
	$useLocalCurrentObjectStackCache();
	$var($XClientMessageEvent, enter, $new($XClientMessageEvent));
	{
		$var($Throwable, var$0, nullptr);
		try {
			enter->set_type($XConstants::ClientMessage);
			enter->set_window(toplevel);
			enter->set_format(32);
			$init($XDnDConstants);
			enter->set_message_type($nc($XDnDConstants::XA_XdndEnter)->getAtom());
			enter->set_data(0, sourceWindow);
			enter->set_data(1, data1);
			enter->set_data(2, data2);
			enter->set_data(3, data3);
			enter->set_data(4, data4);
			forwardClientMessageToToplevel(toplevel, enter);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			enter->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XDnDDropTargetProtocol::sendLeaveMessageToToplevel(int64_t toplevel, $XClientMessageEvent* xclient) {
	sendLeaveMessageToToplevelImpl(toplevel, $nc(xclient)->get_data(0));
}

void XDnDDropTargetProtocol::sendLeaveMessageToToplevelImpl(int64_t toplevel, int64_t sourceWindow) {
	$useLocalCurrentObjectStackCache();
	$var($XClientMessageEvent, leave, $new($XClientMessageEvent));
	{
		$var($Throwable, var$0, nullptr);
		try {
			leave->set_type($XConstants::ClientMessage);
			leave->set_window(toplevel);
			leave->set_format(32);
			$init($XDnDConstants);
			leave->set_message_type($nc($XDnDConstants::XA_XdndLeave)->getAtom());
			leave->set_data(0, sourceWindow);
			leave->set_data(1, 0);
			forwardClientMessageToToplevel(toplevel, leave);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			leave->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool XDnDDropTargetProtocol::sendResponse(int64_t ctxt, int32_t eventID, int32_t action) {
	$useLocalCurrentObjectStackCache();
	$var($XClientMessageEvent, xclient, $new($XClientMessageEvent, ctxt));
	int64_t var$0 = xclient->get_message_type();
	$init($XDnDConstants);
	if (var$0 != $nc($XDnDConstants::XA_XdndPosition)->getAtom()) {
		return false;
	}
	if (eventID == $MouseEvent::MOUSE_EXITED) {
		action = $DnDConstants::ACTION_NONE;
	}
	$var($XClientMessageEvent, msg, $new($XClientMessageEvent));
	{
		$var($Throwable, var$1, nullptr);
		try {
			msg->set_type($XConstants::ClientMessage);
			msg->set_window(xclient->get_data(0));
			msg->set_format(32);
			msg->set_message_type($nc($XDnDConstants::XA_XdndStatus)->getAtom());
			msg->set_data(0, xclient->get_window());
			int64_t flags = 0;
			if (action != $DnDConstants::ACTION_NONE) {
				flags |= $XDnDConstants::XDND_ACCEPT_DROP_FLAG;
			}
			msg->set_data(1, flags);
			msg->set_data(2, 0);
			msg->set_data(3, 0);
			msg->set_data(4, $XDnDConstants::getXDnDActionForJavaAction(action));
			$XToolkit::awtLock();
			{
				$var($Throwable, var$2, nullptr);
				try {
					int64_t var$3 = $XToolkit::getDisplay();
					$XlibWrapper::XSendEvent(var$3, xclient->get_data(0), false, $XConstants::NoEventMask, msg->pData);
				} catch ($Throwable& var$4) {
					$assign(var$2, var$4);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		} catch ($Throwable& var$5) {
			$assign(var$1, var$5);
		} /*finally*/ {
			msg->dispose();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
	return true;
}

$Object* XDnDDropTargetProtocol::getData(int64_t ctxt, int64_t format) {
	$var($XClientMessageEvent, xclient, $new($XClientMessageEvent, ctxt));
	int64_t message_type = xclient->get_message_type();
	int64_t time_stamp = $XConstants::CurrentTime;
	$init($XDnDConstants);
	if (message_type == $nc($XDnDConstants::XA_XdndPosition)->getAtom()) {
		time_stamp = (int64_t)(xclient->get_data(3) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
	} else {
		if (message_type == $nc($XDnDConstants::XA_XdndDrop)->getAtom()) {
			time_stamp = (int64_t)(xclient->get_data(2) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
		} else {
			$throwNew($IllegalArgumentException);
		}
	}
	return $of($nc($XDnDConstants::XDnDSelection)->getData(format, time_stamp));
}

bool XDnDDropTargetProtocol::sendDropDone(int64_t ctxt, bool success, int32_t dropAction) {
	$useLocalCurrentObjectStackCache();
	$var($XClientMessageEvent, xclient, $new($XClientMessageEvent, ctxt));
	int64_t var$0 = xclient->get_message_type();
	$init($XDnDConstants);
	if (var$0 != $nc($XDnDConstants::XA_XdndDrop)->getAtom()) {
		return false;
	}
	if (dropAction == $DnDConstants::ACTION_MOVE && success) {
		int64_t time_stamp = (int64_t)(xclient->get_data(2) & (uint64_t)(int64_t)0x00000000FFFFFFFF);
		int64_t xdndSelectionAtom = $nc($($nc($XDnDConstants::XDnDSelection)->getSelectionAtom()))->getAtom();
		$XToolkit::awtLock();
		{
			$var($Throwable, var$1, nullptr);
			try {
				int64_t var$2 = $XToolkit::getDisplay();
				int64_t var$3 = xdndSelectionAtom;
				int64_t var$4 = $nc($($XAtom::get("DELETE"_s)))->getAtom();
				int64_t var$5 = $nc($($XAtom::get("XAWT_SELECTION"_s)))->getAtom();
				$XlibWrapper::XConvertSelection(var$2, var$3, var$4, var$5, $nc($($XWindow::getXAWTRootWindow()))->getWindow(), time_stamp);
			} catch ($Throwable& var$6) {
				$assign(var$1, var$6);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	}
	$var($XClientMessageEvent, msg, $new($XClientMessageEvent));
	{
		$var($Throwable, var$7, nullptr);
		try {
			msg->set_type($XConstants::ClientMessage);
			msg->set_window(xclient->get_data(0));
			msg->set_format(32);
			msg->set_message_type($nc($XDnDConstants::XA_XdndFinished)->getAtom());
			msg->set_data(0, xclient->get_window());
			msg->set_data(1, 0);
			msg->set_data(2, 0);
			if (this->sourceProtocolVersion >= 5) {
				if (success) {
					msg->set_data(1, $XDnDConstants::XDND_ACCEPT_DROP_FLAG);
				}
				msg->set_data(2, $XDnDConstants::getXDnDActionForJavaAction(dropAction));
			}
			msg->set_data(3, 0);
			msg->set_data(4, 0);
			$XToolkit::awtLock();
			{
				$var($Throwable, var$8, nullptr);
				try {
					int64_t var$9 = $XToolkit::getDisplay();
					$XlibWrapper::XSendEvent(var$9, xclient->get_data(0), false, $XConstants::NoEventMask, msg->pData);
				} catch ($Throwable& var$10) {
					$assign(var$8, var$10);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$8 != nullptr) {
					$throw(var$8);
				}
			}
		} catch ($Throwable& var$11) {
			$assign(var$7, var$11);
		} /*finally*/ {
			msg->dispose();
		}
		if (var$7 != nullptr) {
			$throw(var$7);
		}
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$12, nullptr);
		try {
			$XlibWrapper::XFlush($XToolkit::getDisplay());
		} catch ($Throwable& var$13) {
			$assign(var$12, var$13);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$12 != nullptr) {
			$throw(var$12);
		}
	}
	$set(this, targetXWindow, nullptr);
	cleanup();
	return true;
}

int64_t XDnDDropTargetProtocol::getSourceWindow() {
	return this->sourceWindow;
}

void XDnDDropTargetProtocol::cleanup() {
	$useLocalCurrentObjectStackCache();
	$XDropTargetEventProcessor::reset();
	if (this->targetXWindow != nullptr) {
		notifyProtocolListener(this->targetXWindow, 0, 0, $DnDConstants::ACTION_NONE, nullptr, $MouseEvent::MOUSE_EXITED);
	}
	if (this->sourceWindow != 0) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
				$XlibWrapper::XSelectInput($XToolkit::getDisplay(), this->sourceWindow, this->sourceWindowMask);
				$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	this->sourceWindow = 0;
	this->sourceWindowMask = 0;
	this->sourceProtocolVersion = 0;
	this->sourceActions = $DnDConstants::ACTION_NONE;
	$set(this, sourceFormats, nullptr);
	this->trackSourceActions = false;
	this->userAction = $DnDConstants::ACTION_NONE;
	this->sourceX = 0;
	this->sourceY = 0;
	$set(this, targetXWindow, nullptr);
}

bool XDnDDropTargetProtocol::isDragOverComponent() {
	return this->targetXWindow != nullptr;
}

void XDnDDropTargetProtocol::adjustEventForForwarding($XClientMessageEvent* xclient, $XDropTargetProtocol$EmbedderRegistryEntry* entry) {
	$useLocalCurrentObjectStackCache();
	int32_t version = $nc(entry)->getVersion();
	int64_t var$0 = $nc(xclient)->get_message_type();
	$init($XDnDConstants);
	if (var$0 == $nc($XDnDConstants::XA_XdndEnter)->getAtom()) {
		int32_t min_version = this->sourceProtocolVersion < version ? this->sourceProtocolVersion : version;
		int64_t data1 = $sl(min_version, $XDnDConstants::XDND_PROTOCOL_SHIFT);
		if (this->sourceFormats != nullptr && $nc(this->sourceFormats)->length > 3) {
			data1 |= $XDnDConstants::XDND_DATA_TYPES_BIT;
		}
		$init($PlatformLogger$Level);
		if ($nc(XDnDDropTargetProtocol::logger)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(XDnDDropTargetProtocol::logger)->finest($$str({"          entryVersion="_s, $$str(version), " sourceProtocolVersion="_s, $$str(this->sourceProtocolVersion), " sourceFormats.length="_s, $$str((this->sourceFormats != nullptr ? $nc(this->sourceFormats)->length : 0))}));
		}
		xclient->set_data(1, data1);
	}
}

void XDnDDropTargetProtocol::notifyProtocolListener($XWindow* xwindow, int32_t x, int32_t y, int32_t dropAction, $XClientMessageEvent* xclient, int32_t eventID) {
	$useLocalCurrentObjectStackCache();
	int64_t nativeCtxt = 0;
	if (xclient != nullptr) {
		int32_t size = $$new($XClientMessageEvent, nativeCtxt)->getSize();
		nativeCtxt = $nc(XDnDDropTargetProtocol::unsafe)->allocateMemory(size + 4 * $Native::getLongSize());
		$nc(XDnDDropTargetProtocol::unsafe)->copyMemory(xclient->pData, nativeCtxt, size);
		int64_t data1 = $sl(this->sourceProtocolVersion, $XDnDConstants::XDND_PROTOCOL_SHIFT);
		if (this->sourceFormats != nullptr && $nc(this->sourceFormats)->length > 3) {
			data1 |= $XDnDConstants::XDND_DATA_TYPES_BIT;
		}
		$Native::putLong(nativeCtxt + size, data1);
		$Native::putLong(nativeCtxt + size + $Native::getLongSize(), $nc(this->sourceFormats)->length > 0 ? $nc(this->sourceFormats)->get(0) : (int64_t)0);
		$Native::putLong(nativeCtxt + size + 2 * $Native::getLongSize(), $nc(this->sourceFormats)->length > 1 ? $nc(this->sourceFormats)->get(1) : (int64_t)0);
		$Native::putLong(nativeCtxt + size + 3 * $Native::getLongSize(), $nc(this->sourceFormats)->length > 2 ? $nc(this->sourceFormats)->get(2) : (int64_t)0);
	}
	$nc($(getProtocolListener()))->handleDropTargetNotification(xwindow, x, y, dropAction, this->sourceActions, this->sourceFormats, nativeCtxt, eventID);
}

bool XDnDDropTargetProtocol::forwardEventToEmbedded(int64_t embedded, int64_t ctxt, int32_t eventID) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XDnDDropTargetProtocol::logger)->isLoggable($PlatformLogger$Level::FINEST)) {
		$var($String, var$0, $$str({"        ctxt="_s, $$str(ctxt), " type="_s, $$str((ctxt != 0 ? getMessageType($$new($XClientMessageEvent, ctxt)) : 0)), " prevCtxt="_s, $$str(this->prevCtxt), " prevType="_s}));
		$nc(XDnDDropTargetProtocol::logger)->finest($$concat(var$0, $$str((this->prevCtxt != 0 ? getMessageType($$new($XClientMessageEvent, this->prevCtxt)) : 0))));
	}
	bool var$1 = (ctxt == 0 || getMessageType($$new($XClientMessageEvent, ctxt)) == $XDropTargetProtocol::UNKNOWN_MESSAGE);
	if (var$1 && (this->prevCtxt == 0 || getMessageType($$new($XClientMessageEvent, this->prevCtxt)) == $XDropTargetProtocol::UNKNOWN_MESSAGE)) {
		return false;
	}
	int32_t size = $XClientMessageEvent::getSize();
	if (ctxt != 0) {
		$var($XClientMessageEvent, xclient, $new($XClientMessageEvent, ctxt));
		if (!this->overXEmbedClient) {
			int64_t data1 = $Native::getLong(ctxt + size);
			int64_t data2 = $Native::getLong(ctxt + size + $Native::getLongSize());
			int64_t data3 = $Native::getLong(ctxt + size + 2 * $Native::getLongSize());
			int64_t data4 = $Native::getLong(ctxt + size + 3 * $Native::getLongSize());
			if ($nc(XDnDDropTargetProtocol::logger)->isLoggable($PlatformLogger$Level::FINEST)) {
				$nc(XDnDDropTargetProtocol::logger)->finest($$str({"         1  embedded="_s, $$str(embedded), " source="_s, $$str(xclient->get_data(0)), " data1="_s, $$str(data1), " data2="_s, $$str(data2), " data3="_s, $$str(data3), " data4="_s, $$str(data4)}));
			}
			if (((int64_t)(data1 & (uint64_t)(int64_t)$XDnDConstants::XDND_DATA_TYPES_BIT)) != 0) {
				$init($XDnDConstants);
				$var($WindowPropertyGetter, wpg, $new($WindowPropertyGetter, xclient->get_data(0), $XDnDConstants::XA_XdndTypeList, (int64_t)0, (int64_t)0x0000FFFF, false, $XAtom::XA_ATOM));
				{
					$var($Throwable, var$2, nullptr);
					try {
						wpg->execute($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
						bool var$3 = wpg->getActualType() == $XAtom::XA_ATOM;
						if (var$3 && wpg->getActualFormat() == 32) {
							$XToolkit::awtLock();
							{
								$var($Throwable, var$4, nullptr);
								try {
									$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$VerifyChangePropertyHandler::getInstance()));
									int64_t var$5 = xclient->get_window();
									int64_t var$6 = wpg->getData();
									$nc($XDnDConstants::XA_XdndTypeList)->setAtomData(var$5, $XAtom::XA_ATOM, var$6, wpg->getNumberOfItems());
									$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
									if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
										if ($nc(XDnDDropTargetProtocol::logger)->isLoggable($PlatformLogger$Level::WARNING)) {
											$nc(XDnDDropTargetProtocol::logger)->warning("Cannot set XdndTypeList on the proxy window"_s);
										}
									}
								} catch ($Throwable& var$7) {
									$assign(var$4, var$7);
								} /*finally*/ {
									$XToolkit::awtUnlock();
								}
								if (var$4 != nullptr) {
									$throw(var$4);
								}
							}
						} else {
							if ($nc(XDnDDropTargetProtocol::logger)->isLoggable($PlatformLogger$Level::WARNING)) {
								$nc(XDnDDropTargetProtocol::logger)->warning("Cannot read XdndTypeList from the source window"_s);
							}
						}
					} catch ($Throwable& var$8) {
						$assign(var$2, var$8);
					} /*finally*/ {
						wpg->dispose();
					}
					if (var$2 != nullptr) {
						$throw(var$2);
					}
				}
			}
			$XDragSourceContextPeer::setProxyModeSourceWindow(xclient->get_data(0));
			sendEnterMessageToToplevelImpl(embedded, xclient->get_window(), data1, data2, data3, data4);
			this->overXEmbedClient = true;
		}
		if ($nc(XDnDDropTargetProtocol::logger)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(XDnDDropTargetProtocol::logger)->finest($$str({"         2  embedded="_s, $$str(embedded), " xclient="_s, xclient}));
		}
		{
			$var($XClientMessageEvent, copy, $new($XClientMessageEvent));
			$nc(XDnDDropTargetProtocol::unsafe)->copyMemory(xclient->pData, copy->pData, $XClientMessageEvent::getSize());
			copy->set_data(0, xclient->get_window());
			forwardClientMessageToToplevel(embedded, copy);
		}
	}
	if (eventID == $MouseEvent::MOUSE_EXITED) {
		if (this->overXEmbedClient) {
			if (ctxt != 0 || this->prevCtxt != 0) {
				$var($XClientMessageEvent, xclient, ctxt != 0 ? $new($XClientMessageEvent, ctxt) : $new($XClientMessageEvent, this->prevCtxt));
				sendLeaveMessageToToplevelImpl(embedded, $nc(xclient)->get_window());
			}
			this->overXEmbedClient = false;
			$XDragSourceContextPeer::setProxyModeSourceWindow(0);
		}
	}
	if (eventID == $MouseEvent::MOUSE_RELEASED) {
		this->overXEmbedClient = false;
		cleanup();
	}
	if (this->prevCtxt != 0) {
		$nc(XDnDDropTargetProtocol::unsafe)->freeMemory(this->prevCtxt);
		this->prevCtxt = 0;
	}
	if (ctxt != 0 && this->overXEmbedClient) {
		this->prevCtxt = $nc(XDnDDropTargetProtocol::unsafe)->allocateMemory(size + 4 * $Native::getLongSize());
		$nc(XDnDDropTargetProtocol::unsafe)->copyMemory(ctxt, this->prevCtxt, size + 4 * $Native::getLongSize());
	}
	return true;
}

bool XDnDDropTargetProtocol::isXEmbedSupported() {
	return true;
}

void clinit$XDnDDropTargetProtocol($Class* class$) {
	XDnDDropTargetProtocol::$assertionsDisabled = !XDnDDropTargetProtocol::class$->desiredAssertionStatus();
	$assignStatic(XDnDDropTargetProtocol::logger, $PlatformLogger::getLogger("sun.awt.X11.xembed.xdnd.XDnDDropTargetProtocol"_s));
	$init($XlibWrapper);
	$assignStatic(XDnDDropTargetProtocol::unsafe, $XlibWrapper::unsafe);
}

XDnDDropTargetProtocol::XDnDDropTargetProtocol() {
}

$Class* XDnDDropTargetProtocol::load$($String* name, bool initialize) {
	$loadClass(XDnDDropTargetProtocol, name, initialize, &_XDnDDropTargetProtocol_ClassInfo_, clinit$XDnDDropTargetProtocol, allocate$XDnDDropTargetProtocol);
	return class$;
}

$Class* XDnDDropTargetProtocol::class$ = nullptr;

		} // X11
	} // awt
} // sun