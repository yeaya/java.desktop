#include <sun/awt/X11/XDragSourceProtocol.h>

#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/InvalidDnDOperationException.h>
#include <java/lang/AssertionError.h>
#include <java/util/Map.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XDragSourceProtocol$TargetWindowInfo.h>
#include <sun/awt/X11/XDragSourceProtocolListener.h>
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
#include <sun/awt/X11/XlibWrapper.h>
#include <jcpp.h>

using $Transferable = ::java::awt::datatransfer::Transferable;
using $InvalidDnDOperationException = ::java::awt::dnd::InvalidDnDOperationException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Map = ::java::util::Map;
using $XConstants = ::sun::awt::X11::XConstants;
using $XDragSourceProtocol$TargetWindowInfo = ::sun::awt::X11::XDragSourceProtocol$TargetWindowInfo;
using $XDragSourceProtocolListener = ::sun::awt::X11::XDragSourceProtocolListener;
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
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDragSourceProtocol_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XDragSourceProtocol, $assertionsDisabled)},
	{"listener", "Lsun/awt/X11/XDragSourceProtocolListener;", nullptr, $PRIVATE | $FINAL, $field(XDragSourceProtocol, listener)},
	{"initialized", "Z", nullptr, $PRIVATE, $field(XDragSourceProtocol, initialized)},
	{"targetWindow", "J", nullptr, $PRIVATE, $field(XDragSourceProtocol, targetWindow)},
	{"targetProxyWindow", "J", nullptr, $PRIVATE, $field(XDragSourceProtocol, targetProxyWindow)},
	{"targetProtocolVersion", "I", nullptr, $PRIVATE, $field(XDragSourceProtocol, targetProtocolVersion)},
	{"targetWindowMask", "J", nullptr, $PRIVATE, $field(XDragSourceProtocol, targetWindowMask)},
	{}
};

$MethodInfo _XDragSourceProtocol_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XDragSourceProtocolListener;)V", nullptr, $PROTECTED, $method(static_cast<void(XDragSourceProtocol::*)($XDragSourceProtocolListener*)>(&XDragSourceProtocol::init$))},
	{"attachTargetWindow", "(JJ)Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(XDragSourceProtocol::*)(int64_t,int64_t)>(&XDragSourceProtocol::attachTargetWindow))},
	{"cleanup", "()V", nullptr, $PUBLIC},
	{"cleanupTargetInfo", "()V", nullptr, $PUBLIC},
	{"finalizeDrop", "()V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(XDragSourceProtocol::*)()>(&XDragSourceProtocol::finalizeDrop))},
	{"getDragSourceWindow", "()J", nullptr, $STATIC, $method(static_cast<int64_t(*)()>(&XDragSourceProtocol::getDragSourceWindow))},
	{"getProtocolListener", "()Lsun/awt/X11/XDragSourceProtocolListener;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$XDragSourceProtocolListener*(XDragSourceProtocol::*)()>(&XDragSourceProtocol::getProtocolListener))},
	{"getProtocolName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTargetProtocolVersion", "()I", nullptr, $PROTECTED | $FINAL, $method(static_cast<int32_t(XDragSourceProtocol::*)()>(&XDragSourceProtocol::getTargetProtocolVersion))},
	{"getTargetProxyWindow", "()J", nullptr, $PROTECTED | $FINAL, $method(static_cast<int64_t(XDragSourceProtocol::*)()>(&XDragSourceProtocol::getTargetProxyWindow))},
	{"getTargetWindow", "()J", nullptr, $PROTECTED | $FINAL, $method(static_cast<int64_t(XDragSourceProtocol::*)()>(&XDragSourceProtocol::getTargetWindow))},
	{"getTargetWindowInfo", "(J)Lsun/awt/X11/XDragSourceProtocol$TargetWindowInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"initializeDrag", "(ILjava/awt/datatransfer/Transferable;Ljava/util/Map;[J)V", "(ILjava/awt/datatransfer/Transferable;Ljava/util/Map<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;[J)V", $PUBLIC | $FINAL, $method(static_cast<void(XDragSourceProtocol::*)(int32_t,$Transferable*,$Map*,$longs*)>(&XDragSourceProtocol::initializeDrag)), "java.awt.dnd.InvalidDnDOperationException,java.lang.IllegalArgumentException,sun.awt.X11.XException"},
	{"initializeDragImpl", "(ILjava/awt/datatransfer/Transferable;Ljava/util/Map;[J)V", "(ILjava/awt/datatransfer/Transferable;Ljava/util/Map<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;[J)V", $PROTECTED | $ABSTRACT, nullptr, "java.awt.dnd.InvalidDnDOperationException,java.lang.IllegalArgumentException,sun.awt.X11.XException"},
	{"initiateDrop", "(IIIIJ)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(XDragSourceProtocol::*)(int32_t,int32_t,int32_t,int32_t,int64_t)>(&XDragSourceProtocol::initiateDrop))},
	{"processClientMessage", "(Lsun/awt/X11/XClientMessageEvent;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "sun.awt.X11.XException"},
	{"processProxyModeEvent", "(Lsun/awt/X11/XClientMessageEvent;J)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"sendDropMessage", "(IIIIJ)V", nullptr, $PROTECTED | $ABSTRACT},
	{"sendEnterMessage", "([JIIJ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"sendLeaveMessage", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"sendMoveMessage", "(IIIIJ)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _XDragSourceProtocol_InnerClassesInfo_[] = {
	{"sun.awt.X11.XDragSourceProtocol$TargetWindowInfo", "sun.awt.X11.XDragSourceProtocol", "TargetWindowInfo", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XDragSourceProtocol_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.awt.X11.XDragSourceProtocol",
	"java.lang.Object",
	nullptr,
	_XDragSourceProtocol_FieldInfo_,
	_XDragSourceProtocol_MethodInfo_,
	nullptr,
	nullptr,
	_XDragSourceProtocol_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XDragSourceProtocol$TargetWindowInfo"
};

$Object* allocate$XDragSourceProtocol($Class* clazz) {
	return $of($alloc(XDragSourceProtocol));
}

bool XDragSourceProtocol::$assertionsDisabled = false;

int64_t XDragSourceProtocol::getDragSourceWindow() {
	$init(XDragSourceProtocol);
	return $nc($($XWindow::getXAWTRootWindow()))->getWindow();
}

void XDragSourceProtocol::init$($XDragSourceProtocolListener* listener) {
	this->initialized = false;
	this->targetWindow = 0;
	this->targetProxyWindow = 0;
	this->targetProtocolVersion = 0;
	this->targetWindowMask = 0;
	if (listener == nullptr) {
		$throwNew($NullPointerException, "Null XDragSourceProtocolListener"_s);
	}
	$set(this, listener, listener);
}

$XDragSourceProtocolListener* XDragSourceProtocol::getProtocolListener() {
	return this->listener;
}

void XDragSourceProtocol::initializeDrag(int32_t actions, $Transferable* contents, $Map* formatMap, $longs* formats) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			{
				$var($Throwable, var$1, nullptr);
				try {
					if (this->initialized) {
						$throwNew($InvalidDnDOperationException, "Already initialized"_s);
					}
					initializeDragImpl(actions, contents, formatMap, formats);
					this->initialized = true;
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					if (!this->initialized) {
						cleanup();
					}
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XDragSourceProtocol::cleanup() {
	this->initialized = false;
	cleanupTargetInfo();
}

void XDragSourceProtocol::cleanupTargetInfo() {
	this->targetWindow = 0;
	this->targetProxyWindow = 0;
	this->targetProtocolVersion = 0;
}

bool XDragSourceProtocol::attachTargetWindow(int64_t window, int64_t time) {
	if (!XDragSourceProtocol::$assertionsDisabled && !$XToolkit::isAWTLockHeldByCurrentThread()) {
		$throwNew($AssertionError);
	}
	$var($XDragSourceProtocol$TargetWindowInfo, info, getTargetWindowInfo(window));
	if (info == nullptr) {
		return false;
	} else {
		this->targetWindow = window;
		this->targetProxyWindow = $nc(info)->getProxyWindow();
		this->targetProtocolVersion = info->getProtocolVersion();
		return true;
	}
}

void XDragSourceProtocol::initiateDrop(int32_t xRoot, int32_t yRoot, int32_t sourceAction, int32_t sourceActions, int64_t time) {
	$useLocalCurrentObjectStackCache();
	$var($XWindowAttributes, wattr, $new($XWindowAttributes));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
			int32_t status = $XlibWrapper::XGetWindowAttributes($XToolkit::getDisplay(), this->targetWindow, wattr->pData);
			$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
			if ((status == 0) || (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success))) {
				$throwNew($XException, "XGetWindowAttributes failed"_s);
			}
			this->targetWindowMask = wattr->get_your_event_mask();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			wattr->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
	$XlibWrapper::XSelectInput($XToolkit::getDisplay(), this->targetWindow, this->targetWindowMask | $XConstants::StructureNotifyMask);
	$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
	if (($XErrorHandlerUtil::saved_error != nullptr) && ($nc($XErrorHandlerUtil::saved_error)->get_error_code() != $XConstants::Success)) {
		$throwNew($XException, "XSelectInput failed"_s);
	}
	sendDropMessage(xRoot, yRoot, sourceAction, sourceActions, time);
}

void XDragSourceProtocol::finalizeDrop() {
	$XErrorHandlerUtil::WITH_XERROR_HANDLER($($XErrorHandler$IgnoreBadWindowHandler::getInstance()));
	$XlibWrapper::XSelectInput($XToolkit::getDisplay(), this->targetWindow, this->targetWindowMask);
	$XErrorHandlerUtil::RESTORE_XERROR_HANDLER();
}

int64_t XDragSourceProtocol::getTargetWindow() {
	return this->targetWindow;
}

int64_t XDragSourceProtocol::getTargetProxyWindow() {
	if (this->targetProxyWindow != 0) {
		return this->targetProxyWindow;
	} else {
		return this->targetWindow;
	}
}

int32_t XDragSourceProtocol::getTargetProtocolVersion() {
	return this->targetProtocolVersion;
}

void clinit$XDragSourceProtocol($Class* class$) {
	XDragSourceProtocol::$assertionsDisabled = !XDragSourceProtocol::class$->desiredAssertionStatus();
}

XDragSourceProtocol::XDragSourceProtocol() {
}

$Class* XDragSourceProtocol::load$($String* name, bool initialize) {
	$loadClass(XDragSourceProtocol, name, initialize, &_XDragSourceProtocol_ClassInfo_, clinit$XDragSourceProtocol, allocate$XDragSourceProtocol);
	return class$;
}

$Class* XDragSourceProtocol::class$ = nullptr;

		} // X11
	} // awt
} // sun