#include <sun/lwawt/LWLightweightFramePeer.h>

#include <java/awt/Component.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <sun/awt/LightweightFrame.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWKeyboardFocusManagerPeer.h>
#include <sun/lwawt/LWWindowPeer$PeerType.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformComponent.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/swing/JLightweightFrame.h>
#include <sun/swing/SwingAccessor$JLightweightFrameAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

#undef LW_FRAME

using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LightweightFrame = ::sun::awt::LightweightFrame;
using $LWKeyboardFocusManagerPeer = ::sun::lwawt::LWKeyboardFocusManagerPeer;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $LWWindowPeer$PeerType = ::sun::lwawt::LWWindowPeer$PeerType;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;
using $PlatformWindow = ::sun::lwawt::PlatformWindow;
using $JLightweightFrame = ::sun::swing::JLightweightFrame;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$JLightweightFrameAccessor = ::sun::swing::SwingAccessor$JLightweightFrameAccessor;

namespace sun {
	namespace lwawt {

$FieldInfo _LWLightweightFramePeer_FieldInfo_[] = {
	{"overriddenWindowHandle", "J", nullptr, $PRIVATE | $VOLATILE, $field(LWLightweightFramePeer, overriddenWindowHandle)},
	{}
};

$MethodInfo _LWLightweightFramePeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/LightweightFrame;Lsun/lwawt/PlatformComponent;Lsun/lwawt/PlatformWindow;)V", nullptr, $PUBLIC, $method(static_cast<void(LWLightweightFramePeer::*)($LightweightFrame*,$PlatformComponent*,$PlatformWindow*)>(&LWLightweightFramePeer::init$))},
	{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getLwTarget", "()Lsun/awt/LightweightFrame;", nullptr, $PRIVATE, $method(static_cast<$LightweightFrame*(LWLightweightFramePeer::*)()>(&LWLightweightFramePeer::getLwTarget))},
	{"getOverriddenWindowHandle", "()J", nullptr, $PUBLIC},
	{"grab", "()V", nullptr, $PUBLIC},
	{"overrideWindowHandle", "(J)V", nullptr, $PUBLIC},
	{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"requestWindowFocus", "(Ljava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setVisibleImpl", "(Z)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"ungrab", "()V", nullptr, $PUBLIC},
	{"updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LWLightweightFramePeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.LWLightweightFramePeer",
	"sun.lwawt.LWWindowPeer",
	"sun.awt.OverrideNativeWindowHandle",
	_LWLightweightFramePeer_FieldInfo_,
	_LWLightweightFramePeer_MethodInfo_
};

$Object* allocate$LWLightweightFramePeer($Class* clazz) {
	return $of($alloc(LWLightweightFramePeer));
}

$String* LWLightweightFramePeer::toString() {
	 return this->$LWWindowPeer::toString();
}

int32_t LWLightweightFramePeer::hashCode() {
	 return this->$LWWindowPeer::hashCode();
}

bool LWLightweightFramePeer::equals(Object$* arg0) {
	 return this->$LWWindowPeer::equals(arg0);
}

$Object* LWLightweightFramePeer::clone() {
	 return this->$LWWindowPeer::clone();
}

void LWLightweightFramePeer::finalize() {
	this->$LWWindowPeer::finalize();
}

void LWLightweightFramePeer::init$($LightweightFrame* target, $PlatformComponent* platformComponent, $PlatformWindow* platformWindow) {
	$init($LWWindowPeer$PeerType);
	$LWWindowPeer::init$(target, platformComponent, platformWindow, $LWWindowPeer$PeerType::LW_FRAME);
	this->overriddenWindowHandle = 0;
}

$LightweightFrame* LWLightweightFramePeer::getLwTarget() {
	return $cast($LightweightFrame, getTarget());
}

$Graphics* LWLightweightFramePeer::getGraphics() {
	return $nc($(getLwTarget()))->getGraphics();
}

void LWLightweightFramePeer::setVisibleImpl(bool visible) {
}

bool LWLightweightFramePeer::requestWindowFocus($FocusEvent$Cause* cause) {
	$useLocalCurrentObjectStackCache();
	if (!focusAllowedFor()) {
		return false;
	}
	if ($nc($(getPlatformWindow()))->rejectFocusRequest(cause)) {
		return false;
	}
	$var($Window, opposite, $nc($($LWKeyboardFocusManagerPeer::getInstance()))->getCurrentFocusedWindow());
	changeFocusedWindow(true, opposite);
	return true;
}

$Point* LWLightweightFramePeer::getLocationOnScreen() {
	$var($Rectangle, bounds, getBounds());
	return $new($Point, $nc(bounds)->x, bounds->y);
}

$Insets* LWLightweightFramePeer::getInsets() {
	return $new($Insets, 0, 0, 0, 0);
}

void LWLightweightFramePeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	setBounds(x, y, w, h, op, true, true);
}

void LWLightweightFramePeer::addDropTarget($DropTarget* dt) {
	$nc($(getLwTarget()))->addDropTarget(dt);
}

void LWLightweightFramePeer::removeDropTarget($DropTarget* dt) {
	$nc($(getLwTarget()))->removeDropTarget(dt);
}

void LWLightweightFramePeer::grab() {
	$nc($(getLwTarget()))->grabFocus();
}

void LWLightweightFramePeer::ungrab() {
	$nc($(getLwTarget()))->ungrabFocus();
}

void LWLightweightFramePeer::updateCursorImmediately() {
	$useLocalCurrentObjectStackCache();
	$nc($($SwingAccessor::getJLightweightFrameAccessor()))->updateCursor($cast($JLightweightFrame, $(getLwTarget())));
}

void LWLightweightFramePeer::overrideWindowHandle(int64_t handle) {
	this->overriddenWindowHandle = handle;
}

int64_t LWLightweightFramePeer::getOverriddenWindowHandle() {
	return this->overriddenWindowHandle;
}

LWLightweightFramePeer::LWLightweightFramePeer() {
}

$Class* LWLightweightFramePeer::load$($String* name, bool initialize) {
	$loadClass(LWLightweightFramePeer, name, initialize, &_LWLightweightFramePeer_ClassInfo_, allocate$LWLightweightFramePeer);
	return class$;
}

$Class* LWLightweightFramePeer::class$ = nullptr;

	} // lwawt
} // sun