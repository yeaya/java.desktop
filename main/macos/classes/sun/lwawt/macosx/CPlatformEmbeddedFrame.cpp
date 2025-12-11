#include <sun/lwawt/macosx/CPlatformEmbeddedFrame.h>

#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Insets.h>
#include <java/awt/MenuBar.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/metal/MTLLayer.h>
#include <sun/java2d/opengl/CGLLayer.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CEmbeddedFrame.h>
#include <sun/lwawt/macosx/CFLayer.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef MOUSE_EVENT

using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Insets = ::java::awt::Insets;
using $MenuBar = ::java::awt::MenuBar;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $MTLLayer = ::sun::java2d::metal::MTLLayer;
using $CGLLayer = ::sun::java2d::opengl::CGLLayer;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $PlatformWindow = ::sun::lwawt::PlatformWindow;
using $CEmbeddedFrame = ::sun::lwawt::macosx::CEmbeddedFrame;
using $CFLayer = ::sun::lwawt::macosx::CFLayer;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPlatformEmbeddedFrame_FieldInfo_[] = {
	{"focusLogger", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CPlatformEmbeddedFrame, focusLogger)},
	{"windowLayer", "Lsun/lwawt/macosx/CFLayer;", nullptr, $PRIVATE, $field(CPlatformEmbeddedFrame, windowLayer)},
	{"peer", "Lsun/lwawt/LWWindowPeer;", nullptr, $PRIVATE, $field(CPlatformEmbeddedFrame, peer)},
	{"target", "Lsun/lwawt/macosx/CEmbeddedFrame;", nullptr, $PRIVATE, $field(CPlatformEmbeddedFrame, target)},
	{"screenX", "I", nullptr, $PRIVATE | $VOLATILE, $field(CPlatformEmbeddedFrame, screenX)},
	{"screenY", "I", nullptr, $PRIVATE | $VOLATILE, $field(CPlatformEmbeddedFrame, screenY)},
	{}
};

$MethodInfo _CPlatformEmbeddedFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformEmbeddedFrame::*)()>(&CPlatformEmbeddedFrame::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"enterFullScreenMode", "()V", nullptr, $PUBLIC},
	{"exitFullScreenMode", "()V", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getGraphicsDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getLayerPtr", "()J", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getPeer", "()Lsun/lwawt/LWWindowPeer;", nullptr, $PUBLIC},
	{"getScreenSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"initialize", "(Ljava/awt/Window;Lsun/lwawt/LWWindowPeer;Lsun/lwawt/PlatformWindow;)V", nullptr, $PUBLIC},
	{"isActive", "()Z", nullptr, $PUBLIC},
	{"isFullScreenMode", "()Z", nullptr, $PUBLIC},
	{"isUnderMouse", "()Z", nullptr, $PUBLIC},
	{"rejectFocusRequest", "(Ljava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"replaceSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"requestWindowFocus", "()Z", nullptr, $PUBLIC},
	{"setAlwaysOnTop", "(Z)V", nullptr, $PUBLIC},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC},
	{"setModalBlocked", "(Z)V", nullptr, $PUBLIC},
	{"setOpacity", "(F)V", nullptr, $PUBLIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setSizeConstraints", "(IIII)V", nullptr, $PUBLIC},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setWindowState", "(I)V", nullptr, $PUBLIC},
	{"toBack", "()V", nullptr, $PUBLIC},
	{"toFront", "()V", nullptr, $PUBLIC},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"updateIconImages", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CPlatformEmbeddedFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CPlatformEmbeddedFrame",
	"java.lang.Object",
	"sun.lwawt.PlatformWindow",
	_CPlatformEmbeddedFrame_FieldInfo_,
	_CPlatformEmbeddedFrame_MethodInfo_
};

$Object* allocate$CPlatformEmbeddedFrame($Class* clazz) {
	return $of($alloc(CPlatformEmbeddedFrame));
}

$PlatformLogger* CPlatformEmbeddedFrame::focusLogger = nullptr;

void CPlatformEmbeddedFrame::init$() {
	this->screenX = 0;
	this->screenY = 0;
}

void CPlatformEmbeddedFrame::initialize($Window* target, $LWWindowPeer* peer, $PlatformWindow* owner) {
	$set(this, peer, peer);
	if ($CGraphicsDevice::usingMetalPipeline()) {
		$set(this, windowLayer, $new($MTLLayer, peer));
	} else {
		$set(this, windowLayer, $new($CGLLayer, peer));
	}
	$set(this, target, $cast($CEmbeddedFrame, target));
}

$LWWindowPeer* CPlatformEmbeddedFrame::getPeer() {
	return this->peer;
}

int64_t CPlatformEmbeddedFrame::getLayerPtr() {
	return $nc(this->windowLayer)->getPointer();
}

void CPlatformEmbeddedFrame::dispose() {
	$nc(this->windowLayer)->dispose();
}

void CPlatformEmbeddedFrame::setBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
	this->screenX = x;
	this->screenY = y;
	$nc(this->peer)->notifyReshape(x, y, w, h);
}

$GraphicsDevice* CPlatformEmbeddedFrame::getGraphicsDevice() {
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	return $nc(ge)->getDefaultScreenDevice();
}

$Point* CPlatformEmbeddedFrame::getLocationOnScreen() {
	return $new($Point, this->screenX, this->screenY);
}

$FontMetrics* CPlatformEmbeddedFrame::getFontMetrics($Font* f) {
	$throwNew($RuntimeException, "Not implemented"_s);
	$shouldNotReachHere();
}

$SurfaceData* CPlatformEmbeddedFrame::getScreenSurface() {
	return $nc(this->windowLayer)->getSurfaceData();
}

$SurfaceData* CPlatformEmbeddedFrame::replaceSurfaceData() {
	return $nc(this->windowLayer)->replaceSurfaceData();
}

void CPlatformEmbeddedFrame::setVisible(bool visible) {
}

void CPlatformEmbeddedFrame::setTitle($String* title) {
}

$Insets* CPlatformEmbeddedFrame::getInsets() {
	return $new($Insets, 0, 0, 0, 0);
}

void CPlatformEmbeddedFrame::toFront() {
}

void CPlatformEmbeddedFrame::toBack() {
}

void CPlatformEmbeddedFrame::setMenuBar($MenuBar* mb) {
}

void CPlatformEmbeddedFrame::setAlwaysOnTop(bool value) {
}

void CPlatformEmbeddedFrame::updateFocusableWindowState() {
}

bool CPlatformEmbeddedFrame::rejectFocusRequest($FocusEvent$Cause* cause) {
	$init($FocusEvent$Cause);
	if (cause != $FocusEvent$Cause::MOUSE_EVENT && !$nc(this->target)->isParentWindowActive()) {
		$nc(CPlatformEmbeddedFrame::focusLogger)->fine("the embedder is inactive, so the request is rejected"_s);
		return true;
	}
	return false;
}

bool CPlatformEmbeddedFrame::requestWindowFocus() {
	$CEmbeddedFrame::updateGlobalFocusedWindow(this->target);
	$nc(this->target)->synthesizeWindowActivation(true);
	return true;
}

bool CPlatformEmbeddedFrame::isActive() {
	return true;
}

void CPlatformEmbeddedFrame::setResizable(bool resizable) {
}

void CPlatformEmbeddedFrame::setSizeConstraints(int32_t minW, int32_t minH, int32_t maxW, int32_t maxH) {
}

void CPlatformEmbeddedFrame::updateIconImages() {
}

void CPlatformEmbeddedFrame::setOpacity(float opacity) {
}

void CPlatformEmbeddedFrame::setOpaque(bool isOpaque) {
}

void CPlatformEmbeddedFrame::enterFullScreenMode() {
}

void CPlatformEmbeddedFrame::exitFullScreenMode() {
}

bool CPlatformEmbeddedFrame::isFullScreenMode() {
	return false;
}

void CPlatformEmbeddedFrame::setWindowState(int32_t windowState) {
}

void CPlatformEmbeddedFrame::setModalBlocked(bool blocked) {
}

bool CPlatformEmbeddedFrame::isUnderMouse() {
	$throwNew($RuntimeException, "Not implemented"_s);
	$shouldNotReachHere();
}

void clinit$CPlatformEmbeddedFrame($Class* class$) {
	$assignStatic(CPlatformEmbeddedFrame::focusLogger, $PlatformLogger::getLogger("sun.lwawt.macosx.focus.CPlatformEmbeddedFrame"_s));
}

CPlatformEmbeddedFrame::CPlatformEmbeddedFrame() {
}

$Class* CPlatformEmbeddedFrame::load$($String* name, bool initialize) {
	$loadClass(CPlatformEmbeddedFrame, name, initialize, &_CPlatformEmbeddedFrame_ClassInfo_, clinit$CPlatformEmbeddedFrame, allocate$CPlatformEmbeddedFrame);
	return class$;
}

$Class* CPlatformEmbeddedFrame::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun