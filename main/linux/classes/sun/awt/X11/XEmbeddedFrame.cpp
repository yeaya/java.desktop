#include <sun/awt/X11/XEmbeddedFrame.h>

#include <java/awt/AWTKeyStroke.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/EmbeddedFrame.h>
#include <sun/awt/X11/XCanvasPeer.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XEmbeddedFramePeer.h>
#include <sun/awt/X11/XFramePeer.h>
#include <sun/awt/X11/XPanelPeer.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FORWARD

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;
using $XCanvasPeer = ::sun::awt::X11::XCanvasPeer;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XDecoratedPeer = ::sun::awt::X11::XDecoratedPeer;
using $XEmbeddedFramePeer = ::sun::awt::X11::XEmbeddedFramePeer;
using $XFramePeer = ::sun::awt::X11::XFramePeer;
using $XPanelPeer = ::sun::awt::X11::XPanelPeer;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XEmbeddedFrame_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XEmbeddedFrame, log)},
	{"handle", "J", nullptr, 0, $field(XEmbeddedFrame, handle)},
	{}
};

$MethodInfo _XEmbeddedFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XEmbeddedFrame::*)()>(&XEmbeddedFrame::init$))},
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(XEmbeddedFrame::*)(int64_t)>(&XEmbeddedFrame::init$))},
	{"<init>", "(JZZ)V", nullptr, $PUBLIC, $method(static_cast<void(XEmbeddedFrame::*)(int64_t,bool,bool)>(&XEmbeddedFrame::init$))},
	{"<init>", "(JZ)V", nullptr, $PUBLIC, $method(static_cast<void(XEmbeddedFrame::*)(int64_t,bool)>(&XEmbeddedFrame::init$))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"registerAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, $PUBLIC},
	{"synthesizeWindowActivation", "(Z)V", nullptr, $PUBLIC},
	{"traverseIn", "(Z)Z", nullptr, $PUBLIC},
	{"traverseOut", "(Z)Z", nullptr, $PROTECTED},
	{"unregisterAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XEmbeddedFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XEmbeddedFrame",
	"sun.awt.EmbeddedFrame",
	nullptr,
	_XEmbeddedFrame_FieldInfo_,
	_XEmbeddedFrame_MethodInfo_
};

$Object* allocate$XEmbeddedFrame($Class* clazz) {
	return $of($alloc(XEmbeddedFrame));
}

$PlatformLogger* XEmbeddedFrame::log = nullptr;

void XEmbeddedFrame::init$() {
	$EmbeddedFrame::init$();
}

void XEmbeddedFrame::init$(int64_t handle) {
	XEmbeddedFrame::init$(handle, false);
}

void XEmbeddedFrame::init$(int64_t handle, bool supportsXEmbed, bool isTrayIconWindow) {
	$EmbeddedFrame::init$(handle, supportsXEmbed);
	if (isTrayIconWindow) {
		$XTrayIconPeer::suppressWarningString(this);
	}
	this->handle = handle;
	if (handle != 0) {
		addNotify();
		if (!isTrayIconWindow) {
			show();
		}
	}
}

void XEmbeddedFrame::addNotify() {
	$useLocalCurrentObjectStackCache();
	if (!isDisplayable()) {
		$var($XToolkit, toolkit, $cast($XToolkit, $Toolkit::getDefaultToolkit()));
		setPeer($(static_cast<$ComponentPeer*>(static_cast<$XComponentPeer*>(static_cast<$XCanvasPeer*>(static_cast<$XPanelPeer*>(static_cast<$XWindowPeer*>(static_cast<$XDecoratedPeer*>(static_cast<$XFramePeer*>($nc(toolkit)->createEmbeddedFrame(this))))))))));
	}
	$EmbeddedFrame::addNotify();
}

void XEmbeddedFrame::init$(int64_t handle, bool supportsXEmbed) {
	XEmbeddedFrame::init$(handle, supportsXEmbed, false);
}

bool XEmbeddedFrame::traverseIn(bool direction) {
	$useLocalCurrentObjectStackCache();
	$var($XEmbeddedFramePeer, peer, $cast($XEmbeddedFramePeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this)));
	if (peer != nullptr) {
		bool var$0 = peer->supportsXEmbed();
		if (var$0 && peer->isXEmbedActive()) {
			$nc(XEmbeddedFrame::log)->fine("The method shouldn\'t be called when XEmbed is active!"_s);
		} else {
			return $EmbeddedFrame::traverseIn(direction);
		}
	}
	return false;
}

bool XEmbeddedFrame::traverseOut(bool direction) {
	$useLocalCurrentObjectStackCache();
	$var($XEmbeddedFramePeer, xefp, $cast($XEmbeddedFramePeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this)));
	if (direction == $EmbeddedFrame::FORWARD) {
		$nc(xefp)->traverseOutForward();
	} else {
		$nc(xefp)->traverseOutBackward();
	}
	return true;
}

void XEmbeddedFrame::synthesizeWindowActivation(bool doActivate) {
	$useLocalCurrentObjectStackCache();
	$var($XEmbeddedFramePeer, peer, $cast($XEmbeddedFramePeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this)));
	if (peer != nullptr) {
		bool var$0 = peer->supportsXEmbed();
		if (var$0 && peer->isXEmbedActive()) {
			$nc(XEmbeddedFrame::log)->fine("The method shouldn\'t be called when XEmbed is active!"_s);
		} else {
			peer->synthesizeFocusInOut(doActivate);
		}
	}
}

void XEmbeddedFrame::registerAccelerator($AWTKeyStroke* stroke) {
	$useLocalCurrentObjectStackCache();
	$var($XEmbeddedFramePeer, xefp, $cast($XEmbeddedFramePeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this)));
	if (xefp != nullptr) {
		xefp->registerAccelerator(stroke);
	}
}

void XEmbeddedFrame::unregisterAccelerator($AWTKeyStroke* stroke) {
	$useLocalCurrentObjectStackCache();
	$var($XEmbeddedFramePeer, xefp, $cast($XEmbeddedFramePeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this)));
	if (xefp != nullptr) {
		xefp->unregisterAccelerator(stroke);
	}
}

void clinit$XEmbeddedFrame($Class* class$) {
	$assignStatic(XEmbeddedFrame::log, $PlatformLogger::getLogger($(XEmbeddedFrame::class$->getName())));
}

XEmbeddedFrame::XEmbeddedFrame() {
}

$Class* XEmbeddedFrame::load$($String* name, bool initialize) {
	$loadClass(XEmbeddedFrame, name, initialize, &_XEmbeddedFrame_ClassInfo_, clinit$XEmbeddedFrame, allocate$XEmbeddedFrame);
	return class$;
}

$Class* XEmbeddedFrame::class$ = nullptr;

		} // X11
	} // awt
} // sun