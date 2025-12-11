#include <sun/lwawt/PlatformWindow.h>

#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Insets.h>
#include <java/awt/MenuBar.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {

$MethodInfo _PlatformWindow_MethodInfo_[] = {
	{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"enterFullScreenMode", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"exitFullScreenMode", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGraphicsDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC | $ABSTRACT},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLayerPtr", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPeer", "()Lsun/lwawt/LWWindowPeer;", nullptr, $PUBLIC | $ABSTRACT},
	{"getScreenSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $ABSTRACT},
	{"initialize", "(Ljava/awt/Window;Lsun/lwawt/LWWindowPeer;Lsun/lwawt/PlatformWindow;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"isActive", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isFullScreenMode", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isUnderMouse", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"rejectFocusRequest", "(Ljava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"replaceSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC | $ABSTRACT},
	{"requestWindowFocus", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setAlwaysOnTop", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMaximizedBounds", "(IIII)V", nullptr, $PUBLIC},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setModalBlocked", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setOpacity", "(F)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setResizable", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSizeConstraints", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setVisible", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setWindowState", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"toBack", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"toFront", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"updateIconImages", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PlatformWindow_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.lwawt.PlatformWindow",
	nullptr,
	nullptr,
	nullptr,
	_PlatformWindow_MethodInfo_
};

$Object* allocate$PlatformWindow($Class* clazz) {
	return $of($alloc(PlatformWindow));
}

void PlatformWindow::setMaximizedBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
}

$Class* PlatformWindow::load$($String* name, bool initialize) {
	$loadClass(PlatformWindow, name, initialize, &_PlatformWindow_ClassInfo_, allocate$PlatformWindow);
	return class$;
}

$Class* PlatformWindow::class$ = nullptr;

	} // lwawt
} // sun