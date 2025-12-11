#include <sun/lwawt/macosx/CPlatformLWWindow.h>

#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Insets.h>
#include <java/awt/MenuBar.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/lang/Math.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/awt/CGraphicsEnvironment.h>
#include <sun/awt/LightweightFrame.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWLightweightFramePeer.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CPlatformLWView.h>
#include <sun/lwawt/macosx/CPlatformView.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Insets = ::java::awt::Insets;
using $MenuBar = ::java::awt::MenuBar;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $CGraphicsEnvironment = ::sun::awt::CGraphicsEnvironment;
using $LightweightFrame = ::sun::awt::LightweightFrame;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $LWLightweightFramePeer = ::sun::lwawt::LWLightweightFramePeer;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $PlatformWindow = ::sun::lwawt::PlatformWindow;
using $CPlatformLWView = ::sun::lwawt::macosx::CPlatformLWView;
using $CPlatformView = ::sun::lwawt::macosx::CPlatformView;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CPlatformLWWindow_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformLWWindow::*)()>(&CPlatformLWWindow::init$))},
	{"createContentView", "()Lsun/lwawt/macosx/CPlatformView;", nullptr, 0},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"enterFullScreenMode", "()V", nullptr, $PUBLIC},
	{"exitFullScreenMode", "()V", nullptr, $PUBLIC},
	{"getContentView", "()Lsun/lwawt/macosx/CPlatformView;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getGraphicsDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getLayerPtr", "()J", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getPeer", "()Lsun/lwawt/LWWindowPeer;", nullptr, $PUBLIC},
	{"getScreenSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"initialize", "(Ljava/awt/Window;Lsun/lwawt/LWWindowPeer;Lsun/lwawt/PlatformWindow;)V", nullptr, $PUBLIC},
	{"isActive", "()Z", nullptr, $PUBLIC},
	{"rejectFocusRequest", "(Ljava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"replaceSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"requestWindowFocus", "()Z", nullptr, $PUBLIC},
	{"setAlwaysOnTop", "(Z)V", nullptr, $PUBLIC},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC},
	{"setOpacity", "(F)V", nullptr, $PUBLIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setSizeConstraints", "(IIII)V", nullptr, $PUBLIC},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setWindowState", "(I)V", nullptr, $PUBLIC},
	{"toBack", "()V", nullptr, $PUBLIC},
	{"toFront", "()V", nullptr, $PUBLIC},
	{"toggleFullScreen", "()V", nullptr, $PUBLIC},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"updateIconImages", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CPlatformLWWindow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.lwawt.macosx.CPlatformLWWindow",
	"sun.lwawt.macosx.CPlatformWindow",
	nullptr,
	nullptr,
	_CPlatformLWWindow_MethodInfo_
};

$Object* allocate$CPlatformLWWindow($Class* clazz) {
	return $of($alloc(CPlatformLWWindow));
}

void CPlatformLWWindow::init$() {
	$CPlatformWindow::init$();
}

void CPlatformLWWindow::initialize($Window* target, $LWWindowPeer* peer, $PlatformWindow* owner) {
	initializeBase(target, peer, owner);
}

$CPlatformView* CPlatformLWWindow::createContentView() {
	return $new($CPlatformLWView);
}

void CPlatformLWWindow::toggleFullScreen() {
}

void CPlatformLWWindow::setMenuBar($MenuBar* mb) {
}

void CPlatformLWWindow::dispose() {
}

$FontMetrics* CPlatformLWWindow::getFontMetrics($Font* f) {
	return nullptr;
}

$Insets* CPlatformLWWindow::getInsets() {
	return $new($Insets, 0, 0, 0, 0);
}

$Point* CPlatformLWWindow::getLocationOnScreen() {
	return nullptr;
}

$SurfaceData* CPlatformLWWindow::getScreenSurface() {
	return nullptr;
}

$SurfaceData* CPlatformLWWindow::replaceSurfaceData() {
	return nullptr;
}

void CPlatformLWWindow::setBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
	if (getPeer() != nullptr) {
		$nc($(getPeer()))->notifyReshape(x, y, w, h);
	}
}

void CPlatformLWWindow::setVisible(bool visible) {
}

void CPlatformLWWindow::setTitle($String* title) {
}

void CPlatformLWWindow::updateIconImages() {
}

$SurfaceData* CPlatformLWWindow::getSurfaceData() {
	return nullptr;
}

void CPlatformLWWindow::toBack() {
}

void CPlatformLWWindow::toFront() {
}

void CPlatformLWWindow::setResizable(bool resizable) {
}

void CPlatformLWWindow::setSizeConstraints(int32_t minW, int32_t minH, int32_t maxW, int32_t maxH) {
}

bool CPlatformLWWindow::rejectFocusRequest($FocusEvent$Cause* cause) {
	return false;
}

bool CPlatformLWWindow::requestWindowFocus() {
	return true;
}

bool CPlatformLWWindow::isActive() {
	return true;
}

void CPlatformLWWindow::updateFocusableWindowState() {
}

void CPlatformLWWindow::setAlwaysOnTop(bool isAlwaysOnTop) {
}

void CPlatformLWWindow::setOpacity(float opacity) {
}

void CPlatformLWWindow::setOpaque(bool isOpaque) {
}

void CPlatformLWWindow::enterFullScreenMode() {
}

void CPlatformLWWindow::exitFullScreenMode() {
}

void CPlatformLWWindow::setWindowState(int32_t windowState) {
}

$LWWindowPeer* CPlatformLWWindow::getPeer() {
	return $CPlatformWindow::getPeer();
}

$CPlatformView* CPlatformLWWindow::getContentView() {
	return $CPlatformWindow::getContentView();
}

int64_t CPlatformLWWindow::getLayerPtr() {
	return 0;
}

$GraphicsDevice* CPlatformLWWindow::getGraphicsDevice() {
	$useLocalCurrentObjectStackCache();
	$var($CGraphicsEnvironment, ge, $cast($CGraphicsEnvironment, $GraphicsEnvironment::getLocalGraphicsEnvironment()));
	$var($LWLightweightFramePeer, peer, $cast($LWLightweightFramePeer, getPeer()));
	int32_t scale = (int32_t)$Math::round($nc(($cast($LightweightFrame, $($nc(peer)->getTarget()))))->getScaleFactorX());
	$var($Rectangle, bounds, $nc(($cast($LightweightFrame, $($nc(peer)->getTarget()))))->getHostBounds());
	{
		$var($GraphicsDeviceArray, arr$, $nc(ge)->getScreenDevices());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($GraphicsDevice, d, arr$->get(i$));
			{
				bool var$0 = $nc($($nc($($nc(d)->getDefaultConfiguration()))->getBounds()))->intersects(bounds);
				if (var$0 && $nc(($cast($CGraphicsDevice, d)))->getScaleFactor() == scale) {
					return d;
				}
			}
		}
	}
	return ge->getDefaultScreenDevice();
}

CPlatformLWWindow::CPlatformLWWindow() {
}

$Class* CPlatformLWWindow::load$($String* name, bool initialize) {
	$loadClass(CPlatformLWWindow, name, initialize, &_CPlatformLWWindow_ClassInfo_, allocate$CPlatformLWWindow);
	return class$;
}

$Class* CPlatformLWWindow::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun