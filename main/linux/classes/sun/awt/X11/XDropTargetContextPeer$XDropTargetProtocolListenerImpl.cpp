#include <sun/awt/X11/XDropTargetContextPeer$XDropTargetProtocolListenerImpl.h>

#include <java/awt/Component.h>
#include <java/lang/AssertionError.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XDropTargetContextPeer.h>
#include <sun/awt/X11/XDropTargetProtocolListener.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/dnd/SunDropTargetContextPeer.h>
#include <jcpp.h>

#undef DISPATCH_SYNC

using $Component = ::java::awt::Component;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XDropTargetContextPeer = ::sun::awt::X11::XDropTargetContextPeer;
using $XDropTargetProtocolListener = ::sun::awt::X11::XDropTargetProtocolListener;
using $XWindow = ::sun::awt::X11::XWindow;
using $SunDropTargetContextPeer = ::sun::awt::dnd::SunDropTargetContextPeer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XDropTargetContextPeer$XDropTargetProtocolListenerImpl_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XDropTargetContextPeer$XDropTargetProtocolListenerImpl, $assertionsDisabled)},
	{"theInstance", "Lsun/awt/X11/XDropTargetProtocolListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XDropTargetContextPeer$XDropTargetProtocolListenerImpl, theInstance)},
	{}
};

$MethodInfo _XDropTargetContextPeer$XDropTargetProtocolListenerImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XDropTargetContextPeer$XDropTargetProtocolListenerImpl::*)()>(&XDropTargetContextPeer$XDropTargetProtocolListenerImpl::init$))},
	{"getInstance", "()Lsun/awt/X11/XDropTargetProtocolListener;", nullptr, $STATIC, $method(static_cast<$XDropTargetProtocolListener*(*)()>(&XDropTargetContextPeer$XDropTargetProtocolListenerImpl::getInstance))},
	{"handleDropTargetNotification", "(Lsun/awt/X11/XWindow;IIII[JJI)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XDropTargetContextPeer$XDropTargetProtocolListenerImpl_InnerClassesInfo_[] = {
	{"sun.awt.X11.XDropTargetContextPeer$XDropTargetProtocolListenerImpl", "sun.awt.X11.XDropTargetContextPeer", "XDropTargetProtocolListenerImpl", $STATIC | $FINAL},
	{}
};

$ClassInfo _XDropTargetContextPeer$XDropTargetProtocolListenerImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XDropTargetContextPeer$XDropTargetProtocolListenerImpl",
	"java.lang.Object",
	"sun.awt.X11.XDropTargetProtocolListener",
	_XDropTargetContextPeer$XDropTargetProtocolListenerImpl_FieldInfo_,
	_XDropTargetContextPeer$XDropTargetProtocolListenerImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XDropTargetContextPeer$XDropTargetProtocolListenerImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XDropTargetContextPeer"
};

$Object* allocate$XDropTargetContextPeer$XDropTargetProtocolListenerImpl($Class* clazz) {
	return $of($alloc(XDropTargetContextPeer$XDropTargetProtocolListenerImpl));
}

bool XDropTargetContextPeer$XDropTargetProtocolListenerImpl::$assertionsDisabled = false;
$XDropTargetProtocolListener* XDropTargetContextPeer$XDropTargetProtocolListenerImpl::theInstance = nullptr;

void XDropTargetContextPeer$XDropTargetProtocolListenerImpl::init$() {
}

$XDropTargetProtocolListener* XDropTargetContextPeer$XDropTargetProtocolListenerImpl::getInstance() {
	$init(XDropTargetContextPeer$XDropTargetProtocolListenerImpl);
	return XDropTargetContextPeer$XDropTargetProtocolListenerImpl::theInstance;
}

void XDropTargetContextPeer$XDropTargetProtocolListenerImpl::handleDropTargetNotification($XWindow* xwindow, int32_t x, int32_t y, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt, int32_t eventID) {
	$useLocalCurrentObjectStackCache();
	$var($Object, target, $nc(xwindow)->getTarget());
	if (!XDropTargetContextPeer$XDropTargetProtocolListenerImpl::$assertionsDisabled && !$instanceOf($Component, target)) {
		$throwNew($AssertionError);
	}
	$var($Component, component, $cast($Component, target));
	$var($AppContext, appContext, $SunToolkit::targetToAppContext(target));
	if (!XDropTargetContextPeer$XDropTargetProtocolListenerImpl::$assertionsDisabled && !(appContext != nullptr)) {
		$throwNew($AssertionError);
	}
	$var($XDropTargetContextPeer, peer, $XDropTargetContextPeer::getPeer(appContext));
	$XDropTargetContextPeer::access$000(peer, component, x, y, dropAction, actions, formats, nativeCtxt, eventID, !$SunDropTargetContextPeer::DISPATCH_SYNC);
}

void clinit$XDropTargetContextPeer$XDropTargetProtocolListenerImpl($Class* class$) {
	$load($XDropTargetContextPeer);
	XDropTargetContextPeer$XDropTargetProtocolListenerImpl::$assertionsDisabled = !$XDropTargetContextPeer::class$->desiredAssertionStatus();
	$assignStatic(XDropTargetContextPeer$XDropTargetProtocolListenerImpl::theInstance, $new(XDropTargetContextPeer$XDropTargetProtocolListenerImpl));
}

XDropTargetContextPeer$XDropTargetProtocolListenerImpl::XDropTargetContextPeer$XDropTargetProtocolListenerImpl() {
}

$Class* XDropTargetContextPeer$XDropTargetProtocolListenerImpl::load$($String* name, bool initialize) {
	$loadClass(XDropTargetContextPeer$XDropTargetProtocolListenerImpl, name, initialize, &_XDropTargetContextPeer$XDropTargetProtocolListenerImpl_ClassInfo_, clinit$XDropTargetContextPeer$XDropTargetProtocolListenerImpl, allocate$XDropTargetContextPeer$XDropTargetProtocolListenerImpl);
	return class$;
}

$Class* XDropTargetContextPeer$XDropTargetProtocolListenerImpl::class$ = nullptr;

		} // X11
	} // awt
} // sun