#include <sun/lwawt/macosx/CEmbeddedFrame.h>

#include <java/awt/AWTKeyStroke.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Point.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/peer/ComponentPeer.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/EmbeddedFrame.h>
#include <sun/lwawt/LWCanvasPeer.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWContainerPeer.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformEventNotifier.h>
#include <sun/lwawt/macosx/CClipboard.h>
#include <sun/lwawt/macosx/CCursorManager.h>
#include <sun/lwawt/macosx/CPlatformResponder.h>
#include <sun/lwawt/macosx/CocoaConstants.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <sun/lwawt/macosx/NSEvent.h>
#include <jcpp.h>

#undef SCROLL_PHASE_UNSUPPORTED

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Point = ::java::awt::Point;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;
using $LWCanvasPeer = ::sun::lwawt::LWCanvasPeer;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $LWContainerPeer = ::sun::lwawt::LWContainerPeer;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $PlatformEventNotifier = ::sun::lwawt::PlatformEventNotifier;
using $CClipboard = ::sun::lwawt::macosx::CClipboard;
using $CCursorManager = ::sun::lwawt::macosx::CCursorManager;
using $CPlatformResponder = ::sun::lwawt::macosx::CPlatformResponder;
using $CocoaConstants = ::sun::lwawt::macosx::CocoaConstants;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;
using $NSEvent = ::sun::lwawt::macosx::NSEvent;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CEmbeddedFrame_FieldInfo_[] = {
	{"responder", "Lsun/lwawt/macosx/CPlatformResponder;", nullptr, $PRIVATE, $field(CEmbeddedFrame, responder)},
	{"classLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CEmbeddedFrame, classLock)},
	{"globalFocusedWindow", "Lsun/lwawt/macosx/CEmbeddedFrame;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(CEmbeddedFrame, globalFocusedWindow)},
	{"browserWindowFocusedApplet", "Lsun/lwawt/macosx/CEmbeddedFrame;", nullptr, $PRIVATE, $field(CEmbeddedFrame, browserWindowFocusedApplet)},
	{"parentWindowActive", "Z", nullptr, $PRIVATE, $field(CEmbeddedFrame, parentWindowActive)},
	{}
};

$MethodInfo _CEmbeddedFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CEmbeddedFrame::*)()>(&CEmbeddedFrame::init$))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"getLayerPtr", "()J", nullptr, $PROTECTED},
	{"handleFocusEvent", "(Z)V", nullptr, $PUBLIC},
	{"handleInputEvent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"handleKeyEvent", "(IILjava/lang/String;Ljava/lang/String;ZSZ)V", nullptr, $PUBLIC},
	{"handleMouseEvent", "(IIDDII)V", nullptr, $PUBLIC},
	{"handleScrollEvent", "(DDIDDD)V", nullptr, $PUBLIC},
	{"handleWindowFocusEvent", "(Z)V", nullptr, $PUBLIC},
	{"isParentWindowActive", "()Z", nullptr, $PUBLIC},
	{"isParentWindowChanged", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(CEmbeddedFrame::*)()>(&CEmbeddedFrame::isParentWindowChanged))},
	{"registerAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, $PUBLIC},
	{"synthesizeWindowActivation", "(Z)V", nullptr, $PUBLIC},
	{"unregisterAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, $PUBLIC},
	{"updateGlobalFocusedWindow", "(Lsun/lwawt/macosx/CEmbeddedFrame;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(CEmbeddedFrame*)>(&CEmbeddedFrame::updateGlobalFocusedWindow))},
	{}
};

$ClassInfo _CEmbeddedFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CEmbeddedFrame",
	"sun.awt.EmbeddedFrame",
	nullptr,
	_CEmbeddedFrame_FieldInfo_,
	_CEmbeddedFrame_MethodInfo_
};

$Object* allocate$CEmbeddedFrame($Class* clazz) {
	return $of($alloc(CEmbeddedFrame));
}

$Object* CEmbeddedFrame::classLock = nullptr;
$volatile(CEmbeddedFrame*) CEmbeddedFrame::globalFocusedWindow = nullptr;

void CEmbeddedFrame::init$() {
	$EmbeddedFrame::init$();
	this->parentWindowActive = true;
	show();
}

void CEmbeddedFrame::addNotify() {
	$useLocalCurrentObjectStackCache();
	if (!isDisplayable()) {
		$var($LWCToolkit, toolkit, $cast($LWCToolkit, $Toolkit::getDefaultToolkit()));
		$var($LWWindowPeer, peer, $nc(toolkit)->createEmbeddedFrame(this));
		setPeer(static_cast<$ComponentPeer*>(static_cast<$LWComponentPeer*>(static_cast<$LWCanvasPeer*>(static_cast<$LWContainerPeer*>(peer)))));
		$set(this, responder, $new($CPlatformResponder, peer, true));
	}
	$EmbeddedFrame::addNotify();
}

void CEmbeddedFrame::registerAccelerator($AWTKeyStroke* stroke) {
}

void CEmbeddedFrame::unregisterAccelerator($AWTKeyStroke* stroke) {
}

int64_t CEmbeddedFrame::getLayerPtr() {
	$useLocalCurrentObjectStackCache();
	return $nc(($cast($LWWindowPeer, $($nc($($AWTAccessor::getComponentAccessor()))->getPeer(this)))))->getLayerPtr();
}

void CEmbeddedFrame::handleMouseEvent(int32_t eventType, int32_t modifierFlags, double pluginX, double pluginY, int32_t buttonNumber, int32_t clickCount) {
	int32_t x = $cast(int32_t, pluginX);
	int32_t y = $cast(int32_t, pluginY);
	$var($Point, locationOnScreen, getLocationOnScreen());
	int32_t absX = $nc(locationOnScreen)->x + x;
	int32_t absY = locationOnScreen->y + y;
	if (eventType == $CocoaConstants::NPCocoaEventMouseEntered) {
		$CCursorManager::nativeSetAllowsCursorSetInBackground(true);
	} else if (eventType == $CocoaConstants::NPCocoaEventMouseExited) {
		$CCursorManager::nativeSetAllowsCursorSetInBackground(false);
	}
	$nc(this->responder)->handleMouseEvent(eventType, modifierFlags, buttonNumber, clickCount, x, y, absX, absY);
}

void CEmbeddedFrame::handleScrollEvent(double pluginX, double pluginY, int32_t modifierFlags, double deltaX, double deltaY, double deltaZ) {
	int32_t x = $cast(int32_t, pluginX);
	int32_t y = $cast(int32_t, pluginY);
	$var($Point, locationOnScreen, getLocationOnScreen());
	int32_t absX = $nc(locationOnScreen)->x + x;
	int32_t absY = locationOnScreen->y + y;
	$nc(this->responder)->handleScrollEvent(x, y, absX, absY, modifierFlags, deltaX, deltaY, $NSEvent::SCROLL_PHASE_UNSUPPORTED);
}

void CEmbeddedFrame::handleKeyEvent(int32_t eventType, int32_t modifierFlags, $String* characters, $String* charsIgnoringMods, bool isRepeat, int16_t keyCode, bool needsKeyTyped) {
	$nc(this->responder)->handleKeyEvent(eventType, modifierFlags, characters, charsIgnoringMods, keyCode, needsKeyTyped, isRepeat);
}

void CEmbeddedFrame::handleInputEvent($String* text) {
	$nc(this->responder)->handleInputEvent(text);
}

void CEmbeddedFrame::handleFocusEvent(bool focused) {
	$useLocalCurrentObjectStackCache();
	$synchronized(CEmbeddedFrame::classLock) {
		$assignStatic(CEmbeddedFrame::globalFocusedWindow, (focused) ? this : ((CEmbeddedFrame::globalFocusedWindow == this) ? (CEmbeddedFrame*)nullptr : $cast(CEmbeddedFrame, CEmbeddedFrame::globalFocusedWindow)));
	}
	if (CEmbeddedFrame::globalFocusedWindow == this) {
		$var($CClipboard, clipboard, $cast($CClipboard, $nc($($Toolkit::getDefaultToolkit()))->getSystemClipboard()));
		$nc(clipboard)->checkPasteboardAndNotify();
	}
	if (this->parentWindowActive) {
		$nc(this->responder)->handleWindowFocusEvent(focused, nullptr);
	}
}

void CEmbeddedFrame::handleWindowFocusEvent(bool parentWindowActive) {
	this->parentWindowActive = parentWindowActive;
	$synchronized(CEmbeddedFrame::classLock) {
		if (!parentWindowActive) {
			$set(this, browserWindowFocusedApplet, CEmbeddedFrame::globalFocusedWindow);
		}
		if (parentWindowActive && CEmbeddedFrame::globalFocusedWindow != this && isParentWindowChanged()) {
			$assignStatic(CEmbeddedFrame::globalFocusedWindow, (this->browserWindowFocusedApplet != nullptr) ? this->browserWindowFocusedApplet : this);
		}
	}
	if (CEmbeddedFrame::globalFocusedWindow == this) {
		$nc(this->responder)->handleWindowFocusEvent(parentWindowActive, nullptr);
	}
}

bool CEmbeddedFrame::isParentWindowActive() {
	return this->parentWindowActive;
}

bool CEmbeddedFrame::isParentWindowChanged() {
	return CEmbeddedFrame::globalFocusedWindow != nullptr ? !$nc(CEmbeddedFrame::globalFocusedWindow)->isParentWindowActive() : true;
}

void CEmbeddedFrame::synthesizeWindowActivation(bool doActivate) {
	if (isParentWindowActive() != doActivate) {
		handleWindowFocusEvent(doActivate);
	}
}

void CEmbeddedFrame::updateGlobalFocusedWindow(CEmbeddedFrame* newGlobalFocusedWindow) {
	$init(CEmbeddedFrame);
	$synchronized(CEmbeddedFrame::classLock) {
		if ($nc(newGlobalFocusedWindow)->isParentWindowActive()) {
			$assignStatic(CEmbeddedFrame::globalFocusedWindow, newGlobalFocusedWindow);
		}
	}
}

void clinit$CEmbeddedFrame($Class* class$) {
	$assignStatic(CEmbeddedFrame::classLock, $new($Object));
}

CEmbeddedFrame::CEmbeddedFrame() {
}

$Class* CEmbeddedFrame::load$($String* name, bool initialize) {
	$loadClass(CEmbeddedFrame, name, initialize, &_CEmbeddedFrame_ClassInfo_, clinit$CEmbeddedFrame, allocate$CEmbeddedFrame);
	return class$;
}

$Class* CEmbeddedFrame::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun