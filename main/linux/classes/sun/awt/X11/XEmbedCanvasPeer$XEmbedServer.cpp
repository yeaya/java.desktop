#include <sun/awt/X11/XEmbedCanvasPeer$XEmbedServer.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/XAnyEvent.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XConfigureEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDnDConstants.h>
#include <sun/awt/X11/XDropTargetRegistry.h>
#include <sun/awt/X11/XEmbedCanvasPeer.h>
#include <sun/awt/X11/XEmbedHelper.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XlibUtil.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINER
#undef XA_WM_NORMAL_HINTS
#undef XEMBED_MAPPED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $Native = ::sun::awt::X11::Native;
using $XAnyEvent = ::sun::awt::X11::XAnyEvent;
using $XAtom = ::sun::awt::X11::XAtom;
using $XConfigureEvent = ::sun::awt::X11::XConfigureEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDnDConstants = ::sun::awt::X11::XDnDConstants;
using $XDropTargetRegistry = ::sun::awt::X11::XDropTargetRegistry;
using $XEmbedCanvasPeer = ::sun::awt::X11::XEmbedCanvasPeer;
using $XEmbedHelper = ::sun::awt::X11::XEmbedHelper;
using $XEvent = ::sun::awt::X11::XEvent;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XlibUtil = ::sun::awt::X11::XlibUtil;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbedCanvasPeer$XEmbedServer_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XEmbedCanvasPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XEmbedCanvasPeer$XEmbedServer, this$0)},
	{"handle", "J", nullptr, 0, $field(XEmbedCanvasPeer$XEmbedServer, handle)},
	{"version", "J", nullptr, 0, $field(XEmbedCanvasPeer$XEmbedServer, version)},
	{"flags", "J", nullptr, 0, $field(XEmbedCanvasPeer$XEmbedServer, flags)},
	{}
};

$MethodInfo _XEmbedCanvasPeer$XEmbedServer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/X11/XEmbedCanvasPeer;)V", nullptr, 0, $method(static_cast<void(XEmbedCanvasPeer$XEmbedServer::*)($XEmbedCanvasPeer*)>(&XEmbedCanvasPeer$XEmbedServer::init$))},
	{"dispatchEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleConfigureNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, 0},
	{"handlePropertyNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"processXEmbedInfo", "()Z", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XEmbedCanvasPeer$XEmbedServer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XEmbedCanvasPeer$XEmbedServer", "sun.awt.X11.XEmbedCanvasPeer", "XEmbedServer", 0},
	{}
};

$ClassInfo _XEmbedCanvasPeer$XEmbedServer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XEmbedCanvasPeer$XEmbedServer",
	"sun.awt.X11.XEmbedHelper",
	"sun.awt.X11.XEventDispatcher",
	_XEmbedCanvasPeer$XEmbedServer_FieldInfo_,
	_XEmbedCanvasPeer$XEmbedServer_MethodInfo_,
	nullptr,
	nullptr,
	_XEmbedCanvasPeer$XEmbedServer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XEmbedCanvasPeer"
};

$Object* allocate$XEmbedCanvasPeer$XEmbedServer($Class* clazz) {
	return $of($alloc(XEmbedCanvasPeer$XEmbedServer));
}

int32_t XEmbedCanvasPeer$XEmbedServer::hashCode() {
	 return this->$XEmbedHelper::hashCode();
}

bool XEmbedCanvasPeer$XEmbedServer::equals(Object$* arg0) {
	 return this->$XEmbedHelper::equals(arg0);
}

$Object* XEmbedCanvasPeer$XEmbedServer::clone() {
	 return this->$XEmbedHelper::clone();
}

$String* XEmbedCanvasPeer$XEmbedServer::toString() {
	 return this->$XEmbedHelper::toString();
}

void XEmbedCanvasPeer$XEmbedServer::finalize() {
	this->$XEmbedHelper::finalize();
}

void XEmbedCanvasPeer$XEmbedServer::init$($XEmbedCanvasPeer* this$0) {
	$set(this, this$0, this$0);
	$XEmbedHelper::init$();
}

bool XEmbedCanvasPeer$XEmbedServer::processXEmbedInfo() {
	$useLocalCurrentObjectStackCache();
	int64_t xembed_info_data = $Native::allocateLongArray(2);
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			$init($XEmbedHelper);
			if (!$nc($XEmbedHelper::XEmbedInfo)->getAtomData(this->handle, xembed_info_data, 2)) {
				$init($XEmbedCanvasPeer);
				$nc($XEmbedCanvasPeer::xembedLog)->finer("Unable to get XEMBED_INFO atom data"_s);
				var$2 = false;
				return$1 = true;
				goto $finally;
			}
			this->version = $Native::getCard32(xembed_info_data, 0);
			this->flags = $Native::getCard32(xembed_info_data, 1);
			bool new_mapped = ((int64_t)(this->flags & (uint64_t)(int64_t)$XEmbedHelper::XEMBED_MAPPED)) != 0;
			bool currently_mapped = $XlibUtil::getWindowMapState(this->handle) != $XConstants::IsUnmapped;
			if (new_mapped != currently_mapped) {
				$init($XEmbedCanvasPeer);
				$init($PlatformLogger$Level);
				if ($nc($XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc($XEmbedCanvasPeer::xembedLog)->finer($$str({"Mapping state of the client has changed, old state: "_s, $$str(currently_mapped), ", new state: "_s, $$str(new_mapped)}));
				}
				if (new_mapped) {
					$XToolkit::awtLock();
					{
						$var($Throwable, var$3, nullptr);
						try {
							$XlibWrapper::XMapWindow($XToolkit::getDisplay(), this->handle);
						} catch ($Throwable& var$4) {
							$assign(var$3, var$4);
						} /*finally*/ {
							$XToolkit::awtUnlock();
						}
						if (var$3 != nullptr) {
							$throw(var$3);
						}
					}
				} else {
					$XToolkit::awtLock();
					{
						$var($Throwable, var$5, nullptr);
						try {
							$XlibWrapper::XUnmapWindow($XToolkit::getDisplay(), this->handle);
						} catch ($Throwable& var$6) {
							$assign(var$5, var$6);
						} /*finally*/ {
							$XToolkit::awtUnlock();
						}
						if (var$5 != nullptr) {
							$throw(var$5);
						}
					}
				}
			} else {
				$init($XEmbedCanvasPeer);
				$init($PlatformLogger$Level);
				if ($nc($XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc($XEmbedCanvasPeer::xembedLog)->finer($$str({"Mapping state didn\'t change, mapped: "_s, $$str(currently_mapped)}));
				}
			}
			var$2 = true;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$7) {
			$assign(var$0, var$7);
		} $finally: {
			$init($XlibWrapper);
			$nc($XlibWrapper::unsafe)->freeMemory(xembed_info_data);
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

void XEmbedCanvasPeer$XEmbedServer::handlePropertyNotify($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->isXEmbedActive()) {
		$var($XPropertyEvent, ev, $nc(xev)->get_xproperty());
		$init($XEmbedCanvasPeer);
		$init($PlatformLogger$Level);
		if ($nc($XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc($XEmbedCanvasPeer::xembedLog)->finer($$str({"Property change on client: "_s, ev}));
		}
		if ($nc(ev)->get_atom() == $XAtom::XA_WM_NORMAL_HINTS) {
			this->this$0->childResized();
		} else {
			int64_t var$1 = ev->get_atom();
			$init($XEmbedHelper);
			if (var$1 == $nc($XEmbedHelper::XEmbedInfo)->getAtom()) {
				processXEmbedInfo();
			} else {
				int64_t var$3 = ev->get_atom();
				$init($XDnDConstants);
				if (var$3 == $nc($XDnDConstants::XA_XdndAware)->getAtom()) {
					$nc($($XDropTargetRegistry::getRegistry()))->unregisterXEmbedClient(this->this$0->getWindow(), $nc(this->this$0->xembed)->handle);
					if (ev->get_state() == $XConstants::PropertyNewValue) {
						$nc($($XDropTargetRegistry::getRegistry()))->registerXEmbedClient(this->this$0->getWindow(), $nc(this->this$0->xembed)->handle);
					}
				}
			}
		}
	} else {
		$init($XEmbedCanvasPeer);
		$nc($XEmbedCanvasPeer::xembedLog)->finer("XEmbed is not active"_s);
	}
}

void XEmbedCanvasPeer$XEmbedServer::handleConfigureNotify($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->isXEmbedActive()) {
		$var($XConfigureEvent, ev, $nc(xev)->get_xconfigure());
		$init($XEmbedCanvasPeer);
		$init($PlatformLogger$Level);
		if ($nc($XEmbedCanvasPeer::xembedLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc($XEmbedCanvasPeer::xembedLog)->finer($$str({"Bounds change on client: "_s, ev}));
		}
		if ($nc($(xev->get_xany()))->get_window() == this->handle) {
			this->this$0->childResized();
		}
	}
}

void XEmbedCanvasPeer$XEmbedServer::dispatchEvent($XEvent* xev) {
	int32_t type = $nc(xev)->get_type();
	switch (type) {
	case $XConstants::PropertyNotify:
		{
			handlePropertyNotify(xev);
			break;
		}
	case $XConstants::ConfigureNotify:
		{
			handleConfigureNotify(xev);
			break;
		}
	case $XConstants::ClientMessage:
		{
			this->this$0->handleClientMessage(xev);
			break;
		}
	}
}

XEmbedCanvasPeer$XEmbedServer::XEmbedCanvasPeer$XEmbedServer() {
}

$Class* XEmbedCanvasPeer$XEmbedServer::load$($String* name, bool initialize) {
	$loadClass(XEmbedCanvasPeer$XEmbedServer, name, initialize, &_XEmbedCanvasPeer$XEmbedServer_ClassInfo_, allocate$XEmbedCanvasPeer$XEmbedServer);
	return class$;
}

$Class* XEmbedCanvasPeer$XEmbedServer::class$ = nullptr;

		} // X11
	} // awt
} // sun