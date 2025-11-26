#include <sun/awt/X11/XDropTargetRegistry.h>

#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDnDConstants.h>
#include <sun/awt/X11/XDragAndDropProtocols.h>
#include <sun/awt/X11/XDragSourceProtocol$TargetWindowInfo.h>
#include <sun/awt/X11/XDragSourceProtocol.h>
#include <sun/awt/X11/XDropTargetEventProcessor.h>
#include <sun/awt/X11/XDropTargetProtocol.h>
#include <sun/awt/X11/XDropTargetRegistry$1.h>
#include <sun/awt/X11/XDropTargetRegistry$EmbeddedDropSiteEntry.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/awt/X11/XEmbeddedFramePeer.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler$IgnoreBadWindowHandler.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XErrorHandlerUtil.h>
#include <sun/awt/X11/XException.h>
#include <sun/awt/X11/XRootWindow.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowAttributes.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XlibUtil.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef DELAYED_REGISTRATION_PERIOD
#undef FINE
#undef NON_XEMBED_PROTOCOLS
#undef XDND_MIN_PROTOCOL_VERSION
#undef XEMBED_PROTOCOLS

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDnDConstants = ::sun::awt::X11::XDnDConstants;
using $XDragAndDropProtocols = ::sun::awt::X11::XDragAndDropProtocols;
using $XDragSourceProtocol = ::sun::awt::X11::XDragSourceProtocol;
using $XDragSourceProtocol$TargetWindowInfo = ::sun::awt::X11::XDragSourceProtocol$TargetWindowInfo;
using $XDropTargetEventProcessor = ::sun::awt::X11::XDropTargetEventProcessor;
using $XDropTargetProtocol = ::sun::awt::X11::XDropTargetProtocol;
using $XDropTargetRegistry$1 = ::sun::awt::X11::XDropTargetRegistry$1;
using $XDropTargetRegistry$EmbeddedDropSiteEntry = ::sun::awt::X11::XDropTargetRegistry$EmbeddedDropSiteEntry;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;
using $XEmbeddedFramePeer = ::sun::awt::X11::XEmbeddedFramePeer;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandler$IgnoreBadWindowHandler = ::sun::awt::X11::XErrorHandler$IgnoreBadWindowHandler;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;
using $XErrorHandlerUtil = ::sun::awt::X11::XErrorHandlerUtil;
using $XException = ::sun::awt::X11::XException;
using $XRootWindow = ::sun::awt::X11::XRootWindow;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowAttributes = ::sun::awt::X11::XWindowAttributes;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XlibUtil = ::sun::awt::X11::XlibUtil;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDropTargetRegistry_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XDropTargetRegistry, $assertionsDisabled)},
	{"logger", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDropTargetRegistry, logger)},
	{"DELAYED_REGISTRATION_PERIOD", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XDropTargetRegistry, DELAYED_REGISTRATION_PERIOD)},
	{"theInstance", "Lsun/awt/X11/XDropTargetRegistry;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDropTargetRegistry, theInstance)},
	{"delayedRegistrationMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Long;Ljava/lang/Runnable;>;", $PRIVATE | $FINAL, $field(XDropTargetRegistry, delayedRegistrationMap)},
	{"embeddedDropSiteRegistry", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Long;Lsun/awt/X11/XDropTargetRegistry$EmbeddedDropSiteEntry;>;", $PRIVATE | $FINAL, $field(XDropTargetRegistry, embeddedDropSiteRegistry)},
	{"XEMBED_PROTOCOLS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XDropTargetRegistry, XEMBED_PROTOCOLS)},
	{"NON_XEMBED_PROTOCOLS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XDropTargetRegistry, NON_XEMBED_PROTOCOLS)},
	{}
};

$MethodInfo _XDropTargetRegistry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XDropTargetRegistry::*)()>(&XDropTargetRegistry::init$))},
	{"addDelayedRegistrationEntry", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(XDropTargetRegistry::*)(int64_t)>(&XDropTargetRegistry::addDelayedRegistrationEntry))},
	{"getDnDProxyWindow", "()J", nullptr, $STATIC, $method(static_cast<int64_t(*)()>(&XDropTargetRegistry::getDnDProxyWindow))},
	{"getEmbeddedDropSite", "(JII)J", nullptr, $PUBLIC, $method(static_cast<int64_t(XDropTargetRegistry::*)(int64_t,int32_t,int32_t)>(&XDropTargetRegistry::getEmbeddedDropSite))},
	{"getRegistry", "()Lsun/awt/X11/XDropTargetRegistry;", nullptr, $STATIC, $method(static_cast<XDropTargetRegistry*(*)()>(&XDropTargetRegistry::getRegistry))},
	{"getToplevelWindow", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(XDropTargetRegistry::*)(int64_t)>(&XDropTargetRegistry::getToplevelWindow))},
	{"registerDropSite", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XDropTargetRegistry::*)(int64_t)>(&XDropTargetRegistry::registerDropSite))},
	{"registerEmbeddedDropSite", "(JJ)V", nullptr, $PRIVATE, $method(static_cast<void(XDropTargetRegistry::*)(int64_t,int64_t)>(&XDropTargetRegistry::registerEmbeddedDropSite))},
	{"registerEmbedderDropSite", "(J)Lsun/awt/X11/XDropTargetRegistry$EmbeddedDropSiteEntry;", nullptr, $PRIVATE, $method(static_cast<$XDropTargetRegistry$EmbeddedDropSiteEntry*(XDropTargetRegistry::*)(int64_t)>(&XDropTargetRegistry::registerEmbedderDropSite))},
	{"registerProtocols", "(JZLjava/util/List;)V", "(JZLjava/util/List<Lsun/awt/X11/XDropTargetProtocol;>;)V", $PRIVATE, $method(static_cast<void(XDropTargetRegistry::*)(int64_t,bool,$List*)>(&XDropTargetRegistry::registerProtocols))},
	{"registerXEmbedClient", "(JJ)V", nullptr, $PUBLIC, $method(static_cast<void(XDropTargetRegistry::*)(int64_t,int64_t)>(&XDropTargetRegistry::registerXEmbedClient))},
	{"removeDelayedRegistrationEntry", "(J)V", nullptr, $PRIVATE, $method(static_cast<void(XDropTargetRegistry::*)(int64_t)>(&XDropTargetRegistry::removeDelayedRegistrationEntry))},
	{"unregisterDropSite", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XDropTargetRegistry::*)(int64_t)>(&XDropTargetRegistry::unregisterDropSite))},
	{"unregisterEmbeddedDropSite", "(JJ)V", nullptr, $PRIVATE, $method(static_cast<void(XDropTargetRegistry::*)(int64_t,int64_t)>(&XDropTargetRegistry::unregisterEmbeddedDropSite))},
	{"unregisterEmbedderDropSite", "(JLsun/awt/X11/XDropTargetRegistry$EmbeddedDropSiteEntry;)V", nullptr, $PRIVATE, $method(static_cast<void(XDropTargetRegistry::*)(int64_t,$XDropTargetRegistry$EmbeddedDropSiteEntry*)>(&XDropTargetRegistry::unregisterEmbedderDropSite))},
	{"unregisterXEmbedClient", "(JJ)V", nullptr, $PUBLIC, $method(static_cast<void(XDropTargetRegistry::*)(int64_t,int64_t)>(&XDropTargetRegistry::unregisterXEmbedClient))},
	{"updateEmbedderDropSite", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XDropTargetRegistry::*)(int64_t)>(&XDropTargetRegistry::updateEmbedderDropSite))},
	{}
};

$InnerClassInfo _XDropTargetRegistry_InnerClassesInfo_[] = {
	{"sun.awt.X11.XDropTargetRegistry$EmbeddedDropSiteEntry", "sun.awt.X11.XDropTargetRegistry", "EmbeddedDropSiteEntry", $PRIVATE | $STATIC | $FINAL},
	{"sun.awt.X11.XDropTargetRegistry$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XDropTargetRegistry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XDropTargetRegistry",
	"java.lang.Object",
	nullptr,
	_XDropTargetRegistry_FieldInfo_,
	_XDropTargetRegistry_MethodInfo_,
	nullptr,
	nullptr,
	_XDropTargetRegistry_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XDropTargetRegistry$EmbeddedDropSiteEntry,sun.awt.X11.XDropTargetRegistry$1"
};

$Object* allocate$XDropTargetRegistry($Class* clazz) {
	return $of($alloc(XDropTargetRegistry));
}

bool XDropTargetRegistry::$assertionsDisabled = false;
$PlatformLogger* XDropTargetRegistry::logger = nullptr;
XDropTargetRegistry* XDropTargetRegistry::theInstance = nullptr;

void XDropTargetRegistry::init$() {
	$set(this, delayedRegistrationMap, $new($HashMap));
	$set(this, embeddedDropSiteRegistry, $new($HashMap));
}

XDropTargetRegistry* XDropTargetRegistry::getRegistry() {
	$init(XDropTargetRegistry);
	return XDropTargetRegistry::theInstance;
}

int64_t XDropTargetRegistry::getToplevelWindow(int64_t window) {
	$useLocalCurrentObjectStackCache();
	$var($XBaseWindow, candWindow, $XToolkit::windowToXWindow(window));
	if (candWindow != nullptr) {
		$var($XWindowPeer, toplevel, candWindow->getToplevelXWindow());
		if (toplevel != nullptr && !($instanceOf($XEmbeddedFramePeer, toplevel))) {
			return toplevel->getWindow();
		}
	}
	do {
		if ($XlibUtil::isTrueToplevelWindow(window)) {
			return window;
		}
		window = $XlibUtil::getParentWindow(window);
	} while (window != 0);
	return window;
}

int64_t XDropTargetRegistry::getDnDProxyWindow() {
	$init(XDropTargetRegistry);
	return $nc($($XWindow::getXAWTRootWindow()))->getWindow();
}

$XDropTargetRegistry$EmbeddedDropSiteEntry* XDropTargetRegistry::registerEmbedderDropSite(int64_t embedder) {
	$useLocalCurrentObjectStackCache();
	if (!XDropTargetRegistry::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$var($Iterator, dropTargetProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
	$var($List, embedderProtocols, $new($ArrayList));
	while ($nc(dropTargetProtocols)->hasNext()) {
		$var($XDropTargetProtocol, dropTargetProtocol, $cast($XDropTargetProtocol, dropTargetProtocols->next()));
		if ($nc(dropTargetProtocol)->isProtocolSupported(embedder)) {
			embedderProtocols->add(dropTargetProtocol);
		}
	}
	$assign(embedderProtocols, $Collections::unmodifiableList(embedderProtocols));
	$XlibWrapper::XGrabServer($XToolkit::getDisplay());
	{
		$var($Throwable, var$0, nullptr);
		$var($XDropTargetRegistry$EmbeddedDropSiteEntry, var$2, nullptr);
		bool return$1 = false;
		try {
			int64_t root = 0;
			int64_t event_mask = 0;
			$var($XWindowAttributes, wattr, $new($XWindowAttributes));
			{
				$var($Throwable, var$3, nullptr);
				try {
					$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
					int32_t status = $XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), embedder, wattr->pData);
					$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
					if ((status == 0) || (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success))) {
						$throwNew($XException, "XGetWindowAttributes failed"_s);
					}
					event_mask = wattr->get_your_event_mask();
					root = wattr->get_root();
				} catch ($Throwable& var$4) {
					$assign(var$3, var$4);
				} /*finally*/ {
					wattr->dispose();
				}
				if (var$3 != nullptr) {
					$throw(var$3);
				}
			}
			if (((int64_t)(event_mask & (uint64_t)$XConstants::PropertyChangeMask)) == 0) {
				$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
				$XlibWrapper::XSelectInput($XToolkit::getDisplay(), embedder, event_mask | $XConstants::PropertyChangeMask);
				$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
				if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
					$throwNew($XException, "XSelectInput failed"_s);
				}
			}
			$assign(var$2, $new($XDropTargetRegistry$EmbeddedDropSiteEntry, root, event_mask, embedderProtocols));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$5) {
			$assign(var$0, var$5);
		} $finally: {
			$XlibWrapper::XUngrabServer($XToolkit::getDisplay());
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

void XDropTargetRegistry::registerProtocols(int64_t embedder, bool protocols, $List* supportedProtocols) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, dropTargetProtocols, nullptr);
	if (!$nc(supportedProtocols)->isEmpty()) {
		$assign(dropTargetProtocols, supportedProtocols->iterator());
	} else {
		$assign(dropTargetProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
	}
	$XlibWrapper::XGrabServer($XToolkit::getDisplay());
	{
		$var($Throwable, var$0, nullptr);
		try {
			while ($nc(dropTargetProtocols)->hasNext()) {
				$var($XDropTargetProtocol, dropTargetProtocol, $cast($XDropTargetProtocol, dropTargetProtocols->next()));
				if ((protocols == XDropTargetRegistry::XEMBED_PROTOCOLS) == $nc(dropTargetProtocol)->isXEmbedSupported()) {
					dropTargetProtocol->registerEmbedderDropSite(embedder);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XlibWrapper::XUngrabServer($XToolkit::getDisplay());
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XDropTargetRegistry::updateEmbedderDropSite(int64_t embedder) {
	$useLocalCurrentObjectStackCache();
	$var($XBaseWindow, xbaseWindow, $XToolkit::windowToXWindow(embedder));
	if (xbaseWindow != nullptr) {
		return;
	}
	if (!XDropTargetRegistry::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$var($Iterator, dropTargetProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
	$var($List, embedderProtocols, $new($ArrayList));
	while ($nc(dropTargetProtocols)->hasNext()) {
		$var($XDropTargetProtocol, dropTargetProtocol, $cast($XDropTargetProtocol, dropTargetProtocols->next()));
		if ($nc(dropTargetProtocol)->isProtocolSupported(embedder)) {
			embedderProtocols->add(dropTargetProtocol);
		}
	}
	$assign(embedderProtocols, $Collections::unmodifiableList(embedderProtocols));
	$var($Long, lToplevel, $Long::valueOf(embedder));
	bool isXEmbedServer = false;
	$synchronized(this) {
		$var($XDropTargetRegistry$EmbeddedDropSiteEntry, entry, $cast($XDropTargetRegistry$EmbeddedDropSiteEntry, $nc(this->embeddedDropSiteRegistry)->get(lToplevel)));
		if (entry == nullptr) {
			return;
		}
		$nc(entry)->setSupportedProtocols(embedderProtocols);
		isXEmbedServer = !entry->hasNonXEmbedClientSites();
	}
	if (!$nc(embedderProtocols)->isEmpty()) {
		$assign(dropTargetProtocols, embedderProtocols->iterator());
	} else {
		$assign(dropTargetProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
	}
	$XlibWrapper::XGrabServer($XToolkit::getDisplay());
	{
		$var($Throwable, var$0, nullptr);
		try {
			while ($nc(dropTargetProtocols)->hasNext()) {
				$var($XDropTargetProtocol, dropTargetProtocol, $cast($XDropTargetProtocol, dropTargetProtocols->next()));
				if (!isXEmbedServer || !$nc(dropTargetProtocol)->isXEmbedSupported()) {
					dropTargetProtocol->registerEmbedderDropSite(embedder);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XlibWrapper::XUngrabServer($XToolkit::getDisplay());
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XDropTargetRegistry::unregisterEmbedderDropSite(int64_t embedder, $XDropTargetRegistry$EmbeddedDropSiteEntry* entry) {
	$useLocalCurrentObjectStackCache();
	if (!XDropTargetRegistry::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$var($Iterator, dropTargetProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
	$XlibWrapper::XGrabServer($XToolkit::getDisplay());
	{
		$var($Throwable, var$0, nullptr);
		try {
			while ($nc(dropTargetProtocols)->hasNext()) {
				$var($XDropTargetProtocol, dropTargetProtocol, $cast($XDropTargetProtocol, dropTargetProtocols->next()));
				$nc(dropTargetProtocol)->unregisterEmbedderDropSite(embedder);
			}
			int64_t event_mask = $nc(entry)->getEventMask();
			if (((int64_t)(event_mask & (uint64_t)$XConstants::PropertyChangeMask)) == 0) {
				$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
				$XlibWrapper::XSelectInput($XToolkit::getDisplay(), embedder, event_mask);
				$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
				if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
					$throwNew($XException, "XSelectInput failed"_s);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XlibWrapper::XUngrabServer($XToolkit::getDisplay());
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XDropTargetRegistry::registerEmbeddedDropSite(int64_t toplevel, int64_t window) {
	$useLocalCurrentObjectStackCache();
	$var($XBaseWindow, xBaseWindow, $XToolkit::windowToXWindow(window));
	bool isXEmbedClient = ($instanceOf($XEmbeddedFramePeer, xBaseWindow)) && $nc(($cast($XEmbeddedFramePeer, xBaseWindow)))->isXEmbedActive();
	$var($XEmbedCanvasPeer, peer, nullptr);
	{
		$var($XBaseWindow, xbaseWindow, $XToolkit::windowToXWindow(toplevel));
		if (xbaseWindow != nullptr) {
			if ($instanceOf($XEmbedCanvasPeer, xbaseWindow)) {
				$assign(peer, $cast($XEmbedCanvasPeer, xbaseWindow));
			} else {
				$throwNew($UnsupportedOperationException);
			}
		}
	}
	$var($Long, lToplevel, $Long::valueOf(toplevel));
	$var($XDropTargetRegistry$EmbeddedDropSiteEntry, entry, nullptr);
	$synchronized(this) {
		$assign(entry, $cast($XDropTargetRegistry$EmbeddedDropSiteEntry, $nc(this->embeddedDropSiteRegistry)->get(lToplevel)));
		if (entry == nullptr) {
			if (peer != nullptr) {
				peer->setXEmbedDropTarget();
				$assign(entry, $new($XDropTargetRegistry$EmbeddedDropSiteEntry, 0, 0, $($Collections::emptyList())));
			} else {
				$assign(entry, registerEmbedderDropSite(toplevel));
				registerProtocols(toplevel, XDropTargetRegistry::NON_XEMBED_PROTOCOLS, $($nc(entry)->getSupportedProtocols()));
			}
			$nc(this->embeddedDropSiteRegistry)->put(lToplevel, entry);
		}
	}
	if (!XDropTargetRegistry::$assertionsDisabled && !(entry != nullptr)) {
		$throwNew($AssertionError);
	}
	$synchronized(entry) {
		if (peer == nullptr) {
			if (!isXEmbedClient) {
				registerProtocols(toplevel, XDropTargetRegistry::XEMBED_PROTOCOLS, $($nc(entry)->getSupportedProtocols()));
			} else {
				$var($Iterator, dropTargetProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
				while ($nc(dropTargetProtocols)->hasNext()) {
					$var($XDropTargetProtocol, dropTargetProtocol, $cast($XDropTargetProtocol, dropTargetProtocols->next()));
					if ($nc(dropTargetProtocol)->isXEmbedSupported()) {
						dropTargetProtocol->registerEmbedderDropSite(window);
					}
				}
			}
		}
		$nc(entry)->addSite(window, isXEmbedClient);
	}
}

void XDropTargetRegistry::unregisterEmbeddedDropSite(int64_t toplevel, int64_t window) {
	$useLocalCurrentObjectStackCache();
	$var($Long, lToplevel, $Long::valueOf(toplevel));
	$var($XDropTargetRegistry$EmbeddedDropSiteEntry, entry, nullptr);
	$synchronized(this) {
		$assign(entry, $cast($XDropTargetRegistry$EmbeddedDropSiteEntry, $nc(this->embeddedDropSiteRegistry)->get(lToplevel)));
		if (entry == nullptr) {
			return;
		}
		$nc(entry)->removeSite(window);
		if (!entry->hasSites()) {
			$nc(this->embeddedDropSiteRegistry)->remove(lToplevel);
			$var($XBaseWindow, xbaseWindow, $XToolkit::windowToXWindow(toplevel));
			if (xbaseWindow != nullptr) {
				if ($instanceOf($XEmbedCanvasPeer, xbaseWindow)) {
					$var($XEmbedCanvasPeer, peer, $cast($XEmbedCanvasPeer, xbaseWindow));
					peer->removeXEmbedDropTarget();
				} else {
					$throwNew($UnsupportedOperationException);
				}
			} else {
				unregisterEmbedderDropSite(toplevel, entry);
			}
		}
	}
}

int64_t XDropTargetRegistry::getEmbeddedDropSite(int64_t embedder, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($Long, lToplevel, $Long::valueOf(embedder));
	$var($XDropTargetRegistry$EmbeddedDropSiteEntry, entry, $cast($XDropTargetRegistry$EmbeddedDropSiteEntry, $nc(this->embeddedDropSiteRegistry)->get(lToplevel)));
	if (entry == nullptr) {
		return 0;
	}
	return $nc(entry)->getSite(x, y);
}

void XDropTargetRegistry::registerDropSite(int64_t window) {
	$useLocalCurrentObjectStackCache();
	if (!XDropTargetRegistry::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if (window == 0) {
		$throwNew($IllegalArgumentException);
	}
	$XDropTargetEventProcessor::activate();
	int64_t toplevel = getToplevelWindow(window);
	if (toplevel == 0) {
		addDelayedRegistrationEntry(window);
		return;
	}
	if (toplevel == window) {
		$var($Iterator, dropTargetProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
		while ($nc(dropTargetProtocols)->hasNext()) {
			$var($XDropTargetProtocol, dropTargetProtocol, $cast($XDropTargetProtocol, dropTargetProtocols->next()));
			$nc(dropTargetProtocol)->registerDropTarget(toplevel);
		}
	} else {
		registerEmbeddedDropSite(toplevel, window);
	}
}

void XDropTargetRegistry::unregisterDropSite(int64_t window) {
	$useLocalCurrentObjectStackCache();
	if (!XDropTargetRegistry::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	if (window == 0) {
		$throwNew($IllegalArgumentException);
	}
	int64_t toplevel = getToplevelWindow(window);
	if (toplevel == window) {
		$var($Iterator, dropProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
		removeDelayedRegistrationEntry(window);
		while ($nc(dropProtocols)->hasNext()) {
			$var($XDropTargetProtocol, dropProtocol, $cast($XDropTargetProtocol, dropProtocols->next()));
			$nc(dropProtocol)->unregisterDropTarget(window);
		}
	} else {
		unregisterEmbeddedDropSite(toplevel, window);
	}
}

void XDropTargetRegistry::registerXEmbedClient(int64_t canvasWindow, int64_t clientWindow) {
	$useLocalCurrentObjectStackCache();
	$init($XDragAndDropProtocols);
	$var($XDragSourceProtocol, xdndDragProtocol, $XDragAndDropProtocols::getDragSourceProtocol($XDragAndDropProtocols::XDnD));
	$var($XDragSourceProtocol$TargetWindowInfo, info, $nc(xdndDragProtocol)->getTargetWindowInfo(clientWindow));
	if (info != nullptr && info->getProtocolVersion() >= $XDnDConstants::XDND_MIN_PROTOCOL_VERSION) {
		$init($PlatformLogger$Level);
		if ($nc(XDropTargetRegistry::logger)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XDropTargetRegistry::logger)->fine($$str({"        XEmbed drop site will be registered for "_s, $($Long::toHexString(clientWindow))}));
		}
		registerEmbeddedDropSite(canvasWindow, clientWindow);
		$var($Iterator, dropTargetProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
		while ($nc(dropTargetProtocols)->hasNext()) {
			$var($XDropTargetProtocol, dropTargetProtocol, $cast($XDropTargetProtocol, dropTargetProtocols->next()));
			$nc(dropTargetProtocol)->registerEmbeddedDropSite(clientWindow);
		}
		if ($nc(XDropTargetRegistry::logger)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XDropTargetRegistry::logger)->fine($$str({"        XEmbed drop site has been registered for "_s, $($Long::toHexString(clientWindow))}));
		}
	}
}

void XDropTargetRegistry::unregisterXEmbedClient(int64_t canvasWindow, int64_t clientWindow) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XDropTargetRegistry::logger)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XDropTargetRegistry::logger)->fine($$str({"        XEmbed drop site will be unregistered for "_s, $($Long::toHexString(clientWindow))}));
	}
	$var($Iterator, dropTargetProtocols, $XDragAndDropProtocols::getDropTargetProtocols());
	while ($nc(dropTargetProtocols)->hasNext()) {
		$var($XDropTargetProtocol, dropTargetProtocol, $cast($XDropTargetProtocol, dropTargetProtocols->next()));
		$nc(dropTargetProtocol)->unregisterEmbeddedDropSite(clientWindow);
	}
	unregisterEmbeddedDropSite(canvasWindow, clientWindow);
	if ($nc(XDropTargetRegistry::logger)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XDropTargetRegistry::logger)->fine($$str({"        XEmbed drop site has beed unregistered for "_s, $($Long::toHexString(clientWindow))}));
	}
}

void XDropTargetRegistry::addDelayedRegistrationEntry(int64_t window) {
	$useLocalCurrentObjectStackCache();
	$var($Long, lWindow, $Long::valueOf(window));
	$var($Runnable, runnable, $new($XDropTargetRegistry$1, this, window));
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			removeDelayedRegistrationEntry(window);
			$nc(this->delayedRegistrationMap)->put(lWindow, runnable);
			$XToolkit::schedule(runnable, XDropTargetRegistry::DELAYED_REGISTRATION_PERIOD);
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

void XDropTargetRegistry::removeDelayedRegistrationEntry(int64_t window) {
	$useLocalCurrentObjectStackCache();
	$var($Long, lWindow, $Long::valueOf(window));
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Runnable, runnable, $cast($Runnable, $nc(this->delayedRegistrationMap)->remove(lWindow)));
			if (runnable != nullptr) {
				$XToolkit::remove(runnable);
			}
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

void clinit$XDropTargetRegistry($Class* class$) {
	XDropTargetRegistry::$assertionsDisabled = !XDropTargetRegistry::class$->desiredAssertionStatus();
	$assignStatic(XDropTargetRegistry::logger, $PlatformLogger::getLogger("sun.awt.X11.xembed.xdnd.XDropTargetRegistry"_s));
	$assignStatic(XDropTargetRegistry::theInstance, $new(XDropTargetRegistry));
}

XDropTargetRegistry::XDropTargetRegistry() {
}

$Class* XDropTargetRegistry::load$($String* name, bool initialize) {
	$loadClass(XDropTargetRegistry, name, initialize, &_XDropTargetRegistry_ClassInfo_, clinit$XDropTargetRegistry, allocate$XDropTargetRegistry);
	return class$;
}

$Class* XDropTargetRegistry::class$ = nullptr;

		} // X11
	} // awt
} // sun