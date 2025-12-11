#include <sun/lwawt/macosx/CWarningWindow.h>

#include <java/awt/AlphaComposite.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Composite.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/MenuBar.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/geom/Point2D.h>
#include <java/awt/image/ImageObserver.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/awt/AWTAccessor$WindowAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AWTIcon32_security_icon_bw16_png.h>
#include <sun/awt/AWTIcon32_security_icon_bw24_png.h>
#include <sun/awt/AWTIcon32_security_icon_bw32_png.h>
#include <sun/awt/AWTIcon32_security_icon_bw48_png.h>
#include <sun/awt/AWTIcon32_security_icon_interim16_png.h>
#include <sun/awt/AWTIcon32_security_icon_interim24_png.h>
#include <sun/awt/AWTIcon32_security_icon_interim32_png.h>
#include <sun/awt/AWTIcon32_security_icon_interim48_png.h>
#include <sun/awt/AWTIcon32_security_icon_yellow16_png.h>
#include <sun/awt/AWTIcon32_security_icon_yellow24_png.h>
#include <sun/awt/AWTIcon32_security_icon_yellow32_png.h>
#include <sun/awt/AWTIcon32_security_icon_yellow48_png.h>
#include <sun/awt/IconInfo.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformEventNotifier.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CPlatformResponder.h>
#include <sun/lwawt/macosx/CPlatformView.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <sun/lwawt/macosx/CWarningWindow$1.h>
#include <sun/lwawt/macosx/CWarningWindow$CancelableRunnable.h>
#include <sun/lwawt/macosx/CWarningWindow$HidingTask.h>
#include <sun/lwawt/macosx/CWarningWindow$Lock.h>
#include <sun/lwawt/macosx/CWarningWindow$ShowingTask.h>
#include <sun/lwawt/macosx/CWrapper$NSWindow.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

#undef HIDING_DELAY
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef SHOWING_DELAY
#undef UTILITY

using $IconInfoArray2 = $Array<::sun::awt::IconInfo, 2>;
using $AlphaComposite = ::java::awt::AlphaComposite;
using $Color = ::java::awt::Color;
using $Composite = ::java::awt::Composite;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Insets = ::java::awt::Insets;
using $MenuBar = ::java::awt::MenuBar;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $SystemColor = ::java::awt::SystemColor;
using $Window = ::java::awt::Window;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $Point2D = ::java::awt::geom::Point2D;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$WindowAccessor = ::sun::awt::AWTAccessor$WindowAccessor;
using $AWTIcon32_security_icon_bw16_png = ::sun::awt::AWTIcon32_security_icon_bw16_png;
using $AWTIcon32_security_icon_bw24_png = ::sun::awt::AWTIcon32_security_icon_bw24_png;
using $AWTIcon32_security_icon_bw32_png = ::sun::awt::AWTIcon32_security_icon_bw32_png;
using $AWTIcon32_security_icon_bw48_png = ::sun::awt::AWTIcon32_security_icon_bw48_png;
using $AWTIcon32_security_icon_interim16_png = ::sun::awt::AWTIcon32_security_icon_interim16_png;
using $AWTIcon32_security_icon_interim24_png = ::sun::awt::AWTIcon32_security_icon_interim24_png;
using $AWTIcon32_security_icon_interim32_png = ::sun::awt::AWTIcon32_security_icon_interim32_png;
using $AWTIcon32_security_icon_interim48_png = ::sun::awt::AWTIcon32_security_icon_interim48_png;
using $AWTIcon32_security_icon_yellow16_png = ::sun::awt::AWTIcon32_security_icon_yellow16_png;
using $AWTIcon32_security_icon_yellow24_png = ::sun::awt::AWTIcon32_security_icon_yellow24_png;
using $AWTIcon32_security_icon_yellow32_png = ::sun::awt::AWTIcon32_security_icon_yellow32_png;
using $AWTIcon32_security_icon_yellow48_png = ::sun::awt::AWTIcon32_security_icon_yellow48_png;
using $IconInfo = ::sun::awt::IconInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $PlatformEventNotifier = ::sun::lwawt::PlatformEventNotifier;
using $PlatformWindow = ::sun::lwawt::PlatformWindow;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CPlatformResponder = ::sun::lwawt::macosx::CPlatformResponder;
using $CPlatformView = ::sun::lwawt::macosx::CPlatformView;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;
using $CWarningWindow$1 = ::sun::lwawt::macosx::CWarningWindow$1;
using $CWarningWindow$CancelableRunnable = ::sun::lwawt::macosx::CWarningWindow$CancelableRunnable;
using $CWarningWindow$HidingTask = ::sun::lwawt::macosx::CWarningWindow$HidingTask;
using $CWarningWindow$Lock = ::sun::lwawt::macosx::CWarningWindow$Lock;
using $CWarningWindow$ShowingTask = ::sun::lwawt::macosx::CWarningWindow$ShowingTask;
using $CWrapper$NSWindow = ::sun::lwawt::macosx::CWrapper$NSWindow;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CWarningWindow$$Lambda$lambda$setVisible$0 : public $CFRetainedResource$CFNativeAction {
	$class(CWarningWindow$$Lambda$lambda$setVisible$0, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(bool visible) {
		this->visible = visible;
	}
	virtual void run(int64_t ptr) override {
		CWarningWindow::lambda$setVisible$0(visible, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CWarningWindow$$Lambda$lambda$setVisible$0>());
	}
	bool visible = false;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CWarningWindow$$Lambda$lambda$setVisible$0::fieldInfos[2] = {
	{"visible", "Z", nullptr, $PUBLIC, $field(CWarningWindow$$Lambda$lambda$setVisible$0, visible)},
	{}
};
$MethodInfo CWarningWindow$$Lambda$lambda$setVisible$0::methodInfos[3] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(CWarningWindow$$Lambda$lambda$setVisible$0::*)(bool)>(&CWarningWindow$$Lambda$lambda$setVisible$0::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CWarningWindow$$Lambda$lambda$setVisible$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CWarningWindow$$Lambda$lambda$setVisible$0",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CWarningWindow$$Lambda$lambda$setVisible$0::load$($String* name, bool initialize) {
	$loadClass(CWarningWindow$$Lambda$lambda$setVisible$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CWarningWindow$$Lambda$lambda$setVisible$0::class$ = nullptr;

class CWarningWindow$$Lambda$lambda$setVisible$2$1 : public $CFRetainedResource$CFNativeAction {
	$class(CWarningWindow$$Lambda$lambda$setVisible$2$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(CWarningWindow* inst) {
		$set(this, inst$, inst);
	}
	virtual void run(int64_t ownerPtr) override {
		$nc(inst$)->lambda$setVisible$2(ownerPtr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CWarningWindow$$Lambda$lambda$setVisible$2$1>());
	}
	CWarningWindow* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CWarningWindow$$Lambda$lambda$setVisible$2$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CWarningWindow$$Lambda$lambda$setVisible$2$1, inst$)},
	{}
};
$MethodInfo CWarningWindow$$Lambda$lambda$setVisible$2$1::methodInfos[3] = {
	{"<init>", "(Lsun/lwawt/macosx/CWarningWindow;)V", nullptr, $PUBLIC, $method(static_cast<void(CWarningWindow$$Lambda$lambda$setVisible$2$1::*)(CWarningWindow*)>(&CWarningWindow$$Lambda$lambda$setVisible$2$1::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CWarningWindow$$Lambda$lambda$setVisible$2$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CWarningWindow$$Lambda$lambda$setVisible$2$1",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CWarningWindow$$Lambda$lambda$setVisible$2$1::load$($String* name, bool initialize) {
	$loadClass(CWarningWindow$$Lambda$lambda$setVisible$2$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CWarningWindow$$Lambda$lambda$setVisible$2$1::class$ = nullptr;

class CWarningWindow$$Lambda$lambda$setVisible$1$2 : public $CFRetainedResource$CFNativeAction {
	$class(CWarningWindow$$Lambda$lambda$setVisible$1$2, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$(int64_t ownerPtr) {
		this->ownerPtr = ownerPtr;
	}
	virtual void run(int64_t ptr) override {
		CWarningWindow::lambda$setVisible$1(ownerPtr, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CWarningWindow$$Lambda$lambda$setVisible$1$2>());
	}
	int64_t ownerPtr = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CWarningWindow$$Lambda$lambda$setVisible$1$2::fieldInfos[2] = {
	{"ownerPtr", "J", nullptr, $PUBLIC, $field(CWarningWindow$$Lambda$lambda$setVisible$1$2, ownerPtr)},
	{}
};
$MethodInfo CWarningWindow$$Lambda$lambda$setVisible$1$2::methodInfos[3] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(CWarningWindow$$Lambda$lambda$setVisible$1$2::*)(int64_t)>(&CWarningWindow$$Lambda$lambda$setVisible$1$2::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CWarningWindow$$Lambda$lambda$setVisible$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CWarningWindow$$Lambda$lambda$setVisible$1$2",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CWarningWindow$$Lambda$lambda$setVisible$1$2::load$($String* name, bool initialize) {
	$loadClass(CWarningWindow$$Lambda$lambda$setVisible$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CWarningWindow$$Lambda$lambda$setVisible$1$2::class$ = nullptr;

$FieldInfo _CWarningWindow_FieldInfo_[] = {
	{"lock", "Lsun/lwawt/macosx/CWarningWindow$Lock;", nullptr, $PRIVATE | $FINAL, $field(CWarningWindow, lock)},
	{"SHOWING_DELAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CWarningWindow, SHOWING_DELAY)},
	{"HIDING_DELAY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CWarningWindow, HIDING_DELAY)},
	{"bounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(CWarningWindow, bounds)},
	{"ownerPeer", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Lsun/lwawt/LWWindowPeer;>;", $PRIVATE | $FINAL, $field(CWarningWindow, ownerPeer)},
	{"ownerWindow", "Ljava/awt/Window;", nullptr, $PRIVATE | $FINAL, $field(CWarningWindow, ownerWindow)},
	{"currentIcon", "I", nullptr, $PRIVATE | $VOLATILE, $field(CWarningWindow, currentIcon)},
	{"currentSize", "I", nullptr, $PRIVATE, $field(CWarningWindow, currentSize)},
	{"icons", "[[Lsun/awt/IconInfo;", nullptr, $PRIVATE | $STATIC, $staticField(CWarningWindow, icons)},
	{"taskLock", "Lsun/lwawt/macosx/CWarningWindow$Lock;", nullptr, $PRIVATE | $FINAL, $field(CWarningWindow, taskLock)},
	{"showHideTask", "Lsun/lwawt/macosx/CWarningWindow$CancelableRunnable;", nullptr, $PRIVATE, $field(CWarningWindow, showHideTask)},
	{}
};

$MethodInfo _CWarningWindow_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*enterFullScreenMode", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*exitFullScreenMode", "()V", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphicsDevice", "()Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC},
	{"*getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"*getLayerPtr", "()J", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"*getPeer", "()Lsun/lwawt/LWWindowPeer;", nullptr, $PUBLIC},
	{"*getScreenSurface", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Window;Lsun/lwawt/LWWindowPeer;)V", nullptr, $PUBLIC, $method(static_cast<void(CWarningWindow::*)($Window*,$LWWindowPeer*)>(&CWarningWindow::init$))},
	{"cancelTasks", "()V", nullptr, $PRIVATE, $method(static_cast<void(CWarningWindow::*)()>(&CWarningWindow::cancelTasks))},
	{"createContentView", "()Lsun/lwawt/macosx/CPlatformView;", nullptr, 0},
	{"createPlatformResponder", "()Lsun/lwawt/macosx/CPlatformResponder;", nullptr, $PROTECTED},
	{"deliverMoveResizeEvent", "(IIIIZ)V", nullptr, $PROTECTED},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $method(static_cast<$Rectangle*(CWarningWindow::*)()>(&CWarningWindow::getBounds))},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PRIVATE, $method(static_cast<$Graphics*(CWarningWindow::*)()>(&CWarningWindow::getGraphics))},
	{"getHeight", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(CWarningWindow::*)()>(&CWarningWindow::getHeight))},
	{"getInitialStyleBits", "()I", nullptr, $PROTECTED},
	{"getSecurityIconInfo", "(II)Lsun/awt/IconInfo;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$IconInfo*(*)(int32_t,int32_t)>(&CWarningWindow::getSecurityIconInfo))},
	{"getSecurityIconInfo", "()Lsun/awt/IconInfo;", nullptr, $PRIVATE, $method(static_cast<$IconInfo*(CWarningWindow::*)()>(&CWarningWindow::getSecurityIconInfo))},
	{"getWidth", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(CWarningWindow::*)()>(&CWarningWindow::getWidth))},
	{"*initialize", "(Ljava/awt/Window;Lsun/lwawt/LWWindowPeer;Lsun/lwawt/PlatformWindow;)V", nullptr, $PUBLIC},
	{"*isActive", "()Z", nullptr, $PUBLIC},
	{"*isFullScreenMode", "()Z", nullptr, $PUBLIC},
	{"*isUnderMouse", "()Z", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"lambda$setVisible$0", "(ZJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(bool,int64_t)>(&CWarningWindow::lambda$setVisible$0))},
	{"lambda$setVisible$1", "(JJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t,int64_t)>(&CWarningWindow::lambda$setVisible$1))},
	{"lambda$setVisible$2", "(J)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(CWarningWindow::*)(int64_t)>(&CWarningWindow::lambda$setVisible$2))},
	{"notifyActivation", "(ZLsun/lwawt/LWWindowPeer;)V", nullptr, $PUBLIC},
	{"notifyExpose", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"notifyIconify", "(Z)V", nullptr, $PUBLIC},
	{"notifyKeyEvent", "(IJIICI)V", nullptr, $PUBLIC},
	{"notifyMouseEvent", "(IJIIIIIIIZ[B)V", nullptr, $PUBLIC},
	{"notifyMouseWheelEvent", "(JIIIIIIIID[B)V", nullptr, $PUBLIC},
	{"notifyNCMouseDown", "()V", nullptr, $PUBLIC},
	{"notifyReshape", "(IIII)V", nullptr, $PUBLIC},
	{"notifyUpdateCursor", "()V", nullptr, $PUBLIC},
	{"notifyZoom", "(Z)V", nullptr, $PUBLIC},
	{"*rejectFocusRequest", "(Ljava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"repaint", "()V", nullptr, $PRIVATE, $method(static_cast<void(CWarningWindow::*)()>(&CWarningWindow::repaint))},
	{"replaceSurface", "()V", nullptr, $PRIVATE, $method(static_cast<void(CWarningWindow::*)()>(&CWarningWindow::replaceSurface))},
	{"*replaceSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"reposition", "(IIII)V", nullptr, $PUBLIC},
	{"*requestWindowFocus", "()Z", nullptr, $PUBLIC},
	{"*setAlwaysOnTop", "(Z)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIII)V", nullptr, $PUBLIC},
	{"*setMaximizedBounds", "(IIII)V", nullptr, $PUBLIC},
	{"*setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC},
	{"*setModalBlocked", "(Z)V", nullptr, $PUBLIC},
	{"*setOpacity", "(F)V", nullptr, $PUBLIC},
	{"*setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"*setResizable", "(Z)V", nullptr, $PUBLIC},
	{"*setSizeConstraints", "(IIII)V", nullptr, $PUBLIC},
	{"*setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(ZZ)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setWindowState", "(I)V", nullptr, $PUBLIC},
	{"*toBack", "()V", nullptr, $PUBLIC},
	{"*toFront", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"*updateIconImages", "()V", nullptr, $PUBLIC},
	{"updateIconSize", "()V", nullptr, $PRIVATE, $method(static_cast<void(CWarningWindow::*)()>(&CWarningWindow::updateIconSize))},
	{}
};

$InnerClassInfo _CWarningWindow_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CWarningWindow$ShowingTask", "sun.lwawt.macosx.CWarningWindow", "ShowingTask", $PRIVATE},
	{"sun.lwawt.macosx.CWarningWindow$HidingTask", "sun.lwawt.macosx.CWarningWindow", "HidingTask", $PRIVATE},
	{"sun.lwawt.macosx.CWarningWindow$CancelableRunnable", "sun.lwawt.macosx.CWarningWindow", "CancelableRunnable", $PRIVATE | $STATIC | $ABSTRACT},
	{"sun.lwawt.macosx.CWarningWindow$Lock", "sun.lwawt.macosx.CWarningWindow", "Lock", $PRIVATE | $STATIC},
	{"sun.lwawt.macosx.CWarningWindow$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CWarningWindow_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CWarningWindow",
	"sun.lwawt.macosx.CPlatformWindow",
	"sun.lwawt.SecurityWarningWindow,sun.lwawt.PlatformEventNotifier",
	_CWarningWindow_FieldInfo_,
	_CWarningWindow_MethodInfo_,
	nullptr,
	nullptr,
	_CWarningWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CWarningWindow$ShowingTask,sun.lwawt.macosx.CWarningWindow$HidingTask,sun.lwawt.macosx.CWarningWindow$CancelableRunnable,sun.lwawt.macosx.CWarningWindow$Lock,sun.lwawt.macosx.CWarningWindow$1,sun.lwawt.macosx.CWarningWindow$1$2,sun.lwawt.macosx.CWarningWindow$1$1"
};

$Object* allocate$CWarningWindow($Class* clazz) {
	return $of($alloc(CWarningWindow));
}

void CWarningWindow::initialize($Window* _target, $LWWindowPeer* _peer, $PlatformWindow* _owner) {
	this->$CPlatformWindow::initialize(_target, _peer, _owner);
}

void CWarningWindow::setMenuBar($MenuBar* mb) {
	this->$CPlatformWindow::setMenuBar(mb);
}

$FontMetrics* CWarningWindow::getFontMetrics($Font* f) {
	 return this->$CPlatformWindow::getFontMetrics(f);
}

$Insets* CWarningWindow::getInsets() {
	 return this->$CPlatformWindow::getInsets();
}

$Point* CWarningWindow::getLocationOnScreen() {
	 return this->$CPlatformWindow::getLocationOnScreen();
}

$GraphicsDevice* CWarningWindow::getGraphicsDevice() {
	 return this->$CPlatformWindow::getGraphicsDevice();
}

$SurfaceData* CWarningWindow::getScreenSurface() {
	 return this->$CPlatformWindow::getScreenSurface();
}

$SurfaceData* CWarningWindow::replaceSurfaceData() {
	 return this->$CPlatformWindow::replaceSurfaceData();
}

void CWarningWindow::setBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
	this->$CPlatformWindow::setBounds(x, y, w, h);
}

void CWarningWindow::setMaximizedBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
	this->$CPlatformWindow::setMaximizedBounds(x, y, w, h);
}

void CWarningWindow::setTitle($String* title) {
	this->$CPlatformWindow::setTitle(title);
}

void CWarningWindow::updateIconImages() {
	this->$CPlatformWindow::updateIconImages();
}

void CWarningWindow::toBack() {
	this->$CPlatformWindow::toBack();
}

void CWarningWindow::toFront() {
	this->$CPlatformWindow::toFront();
}

void CWarningWindow::setResizable(bool resizable) {
	this->$CPlatformWindow::setResizable(resizable);
}

void CWarningWindow::setSizeConstraints(int32_t minW, int32_t minH, int32_t maxW, int32_t maxH) {
	this->$CPlatformWindow::setSizeConstraints(minW, minH, maxW, maxH);
}

bool CWarningWindow::rejectFocusRequest($FocusEvent$Cause* cause) {
	 return this->$CPlatformWindow::rejectFocusRequest(cause);
}

bool CWarningWindow::requestWindowFocus() {
	 return this->$CPlatformWindow::requestWindowFocus();
}

bool CWarningWindow::isActive() {
	 return this->$CPlatformWindow::isActive();
}

void CWarningWindow::updateFocusableWindowState() {
	this->$CPlatformWindow::updateFocusableWindowState();
}

void CWarningWindow::setAlwaysOnTop(bool isAlwaysOnTop) {
	this->$CPlatformWindow::setAlwaysOnTop(isAlwaysOnTop);
}

void CWarningWindow::setOpacity(float opacity) {
	this->$CPlatformWindow::setOpacity(opacity);
}

void CWarningWindow::setOpaque(bool isOpaque) {
	this->$CPlatformWindow::setOpaque(isOpaque);
}

void CWarningWindow::enterFullScreenMode() {
	this->$CPlatformWindow::enterFullScreenMode();
}

void CWarningWindow::exitFullScreenMode() {
	this->$CPlatformWindow::exitFullScreenMode();
}

bool CWarningWindow::isFullScreenMode() {
	 return this->$CPlatformWindow::isFullScreenMode();
}

void CWarningWindow::setWindowState(int32_t windowState) {
	this->$CPlatformWindow::setWindowState(windowState);
}

void CWarningWindow::setModalBlocked(bool blocked) {
	this->$CPlatformWindow::setModalBlocked(blocked);
}

$LWWindowPeer* CWarningWindow::getPeer() {
	 return this->$CPlatformWindow::getPeer();
}

bool CWarningWindow::isUnderMouse() {
	 return this->$CPlatformWindow::isUnderMouse();
}

int64_t CWarningWindow::getLayerPtr() {
	 return this->$CPlatformWindow::getLayerPtr();
}

void CWarningWindow::finalize() {
	this->$CPlatformWindow::finalize();
}

int32_t CWarningWindow::hashCode() {
	 return this->$CPlatformWindow::hashCode();
}

bool CWarningWindow::equals(Object$* arg0) {
	 return this->$CPlatformWindow::equals(arg0);
}

$Object* CWarningWindow::clone() {
	 return this->$CPlatformWindow::clone();
}

$String* CWarningWindow::toString() {
	 return this->$CPlatformWindow::toString();
}

$IconInfoArray2* CWarningWindow::icons = nullptr;

$IconInfo* CWarningWindow::getSecurityIconInfo(int32_t size, int32_t num) {
	$init(CWarningWindow);
	$useLocalCurrentObjectStackCache();
	$synchronized(CWarningWindow::class$) {
		if (CWarningWindow::icons == nullptr) {
			$assignStatic(CWarningWindow::icons, $new($IconInfoArray2, 4, 3));
			$init($AWTIcon32_security_icon_bw16_png);
			$nc($nc(CWarningWindow::icons)->get(0))->set(0, $$new($IconInfo, $AWTIcon32_security_icon_bw16_png::security_icon_bw16_png));
			$init($AWTIcon32_security_icon_interim16_png);
			$nc($nc(CWarningWindow::icons)->get(0))->set(1, $$new($IconInfo, $AWTIcon32_security_icon_interim16_png::security_icon_interim16_png));
			$init($AWTIcon32_security_icon_yellow16_png);
			$nc($nc(CWarningWindow::icons)->get(0))->set(2, $$new($IconInfo, $AWTIcon32_security_icon_yellow16_png::security_icon_yellow16_png));
			$init($AWTIcon32_security_icon_bw24_png);
			$nc($nc(CWarningWindow::icons)->get(1))->set(0, $$new($IconInfo, $AWTIcon32_security_icon_bw24_png::security_icon_bw24_png));
			$init($AWTIcon32_security_icon_interim24_png);
			$nc($nc(CWarningWindow::icons)->get(1))->set(1, $$new($IconInfo, $AWTIcon32_security_icon_interim24_png::security_icon_interim24_png));
			$init($AWTIcon32_security_icon_yellow24_png);
			$nc($nc(CWarningWindow::icons)->get(1))->set(2, $$new($IconInfo, $AWTIcon32_security_icon_yellow24_png::security_icon_yellow24_png));
			$init($AWTIcon32_security_icon_bw32_png);
			$nc($nc(CWarningWindow::icons)->get(2))->set(0, $$new($IconInfo, $AWTIcon32_security_icon_bw32_png::security_icon_bw32_png));
			$init($AWTIcon32_security_icon_interim32_png);
			$nc($nc(CWarningWindow::icons)->get(2))->set(1, $$new($IconInfo, $AWTIcon32_security_icon_interim32_png::security_icon_interim32_png));
			$init($AWTIcon32_security_icon_yellow32_png);
			$nc($nc(CWarningWindow::icons)->get(2))->set(2, $$new($IconInfo, $AWTIcon32_security_icon_yellow32_png::security_icon_yellow32_png));
			$init($AWTIcon32_security_icon_bw48_png);
			$nc($nc(CWarningWindow::icons)->get(3))->set(0, $$new($IconInfo, $AWTIcon32_security_icon_bw48_png::security_icon_bw48_png));
			$init($AWTIcon32_security_icon_interim48_png);
			$nc($nc(CWarningWindow::icons)->get(3))->set(1, $$new($IconInfo, $AWTIcon32_security_icon_interim48_png::security_icon_interim48_png));
			$init($AWTIcon32_security_icon_yellow48_png);
			$nc($nc(CWarningWindow::icons)->get(3))->set(2, $$new($IconInfo, $AWTIcon32_security_icon_yellow48_png::security_icon_yellow48_png));
		}
	}
	int32_t sizeIndex = $mod(size, $nc(CWarningWindow::icons)->length);
	return $nc($nc(CWarningWindow::icons)->get(sizeIndex))->get($mod(num, $nc($nc(CWarningWindow::icons)->get(sizeIndex))->length));
}

void CWarningWindow::init$($Window* _ownerWindow, $LWWindowPeer* _ownerPeer) {
	$useLocalCurrentObjectStackCache();
	$CPlatformWindow::init$();
	$set(this, lock, $new($CWarningWindow$Lock));
	$set(this, bounds, $new($Rectangle));
	this->currentIcon = 0;
	this->currentSize = -1;
	$set(this, taskLock, $new($CWarningWindow$Lock));
	$set(this, ownerPeer, $new($WeakReference, _ownerPeer));
	$set(this, ownerWindow, _ownerWindow);
	initialize(nullptr, nullptr, $($nc(_ownerPeer)->getPlatformWindow()));
	setOpaque(false);
	$var($String, warningString, $nc(this->ownerWindow)->getWarningString());
	if (warningString != nullptr) {
		$nc(this->contentView)->setToolTip($($nc(this->ownerWindow)->getWarningString()));
	}
	updateIconSize();
}

void CWarningWindow::reposition(int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Point2D, point, $nc($($AWTAccessor::getWindowAccessor()))->calculateSecurityWarningPosition(this->ownerWindow, (double)x, (double)y, (double)w, (double)h));
	int32_t var$0 = $cast(int32_t, $nc(point)->getX());
	int32_t var$1 = $cast(int32_t, point->getY());
	int32_t var$2 = getWidth();
	setBounds(var$0, var$1, var$2, getHeight());
}

void CWarningWindow::setVisible(bool visible, bool doSchedule) {
	$synchronized(this->taskLock) {
		cancelTasks();
		if (visible) {
			if (isVisible()) {
				this->currentIcon = 0;
			} else {
				this->currentIcon = 2;
			}
			$set(this, showHideTask, $new($CWarningWindow$ShowingTask, this));
			$LWCToolkit::performOnMainThreadAfterDelay(this->showHideTask, 50);
		} else {
			if (!isVisible()) {
				return;
			}
			$set(this, showHideTask, $new($CWarningWindow$HidingTask, this));
			if (doSchedule) {
				$LWCToolkit::performOnMainThreadAfterDelay(this->showHideTask, CWarningWindow::HIDING_DELAY);
			} else {
				$LWCToolkit::performOnMainThreadAfterDelay(this->showHideTask, 50);
			}
		}
	}
}

void CWarningWindow::notifyIconify(bool iconify) {
}

void CWarningWindow::notifyZoom(bool isZoomed) {
}

void CWarningWindow::notifyExpose($Rectangle* r) {
	repaint();
}

void CWarningWindow::notifyReshape(int32_t x, int32_t y, int32_t w, int32_t h) {
}

void CWarningWindow::notifyUpdateCursor() {
}

void CWarningWindow::notifyActivation(bool activation, $LWWindowPeer* opposite) {
}

void CWarningWindow::notifyNCMouseDown() {
}

void CWarningWindow::notifyMouseEvent(int32_t id, int64_t when, int32_t button, int32_t x, int32_t y, int32_t absX, int32_t absY, int32_t modifiers, int32_t clickCount, bool popupTrigger, $bytes* bdata) {
	$var($LWWindowPeer, peer, $cast($LWWindowPeer, $nc(this->ownerPeer)->get()));
	if (id == $MouseEvent::MOUSE_EXITED) {
		if (peer != nullptr) {
			peer->updateSecurityWarningVisibility();
		}
	} else if (id == $MouseEvent::MOUSE_ENTERED) {
		if (peer != nullptr) {
			peer->updateSecurityWarningVisibility();
		}
	}
}

$Rectangle* CWarningWindow::getBounds() {
	$synchronized(this->lock) {
		return $nc(this->bounds)->getBounds();
	}
}

bool CWarningWindow::isVisible() {
	$synchronized(this->lock) {
		return this->visible;
	}
}

void CWarningWindow::setVisible(bool visible) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CWarningWindow$$Lambda$lambda$setVisible$0, visible)));
		this->visible = visible;
		if (visible) {
			if (this->owner != nullptr && $nc(this->owner)->isVisible()) {
				$nc(this->owner)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CWarningWindow$$Lambda$lambda$setVisible$2$1, this)));
				applyWindowLevel(this->ownerWindow);
			}
		}
	}
}

void CWarningWindow::notifyMouseWheelEvent(int64_t when, int32_t x, int32_t y, int32_t absX, int32_t absY, int32_t modifiers, int32_t scrollType, int32_t scrollAmount, int32_t wheelRotation, double preciseWheelRotation, $bytes* bdata) {
}

void CWarningWindow::notifyKeyEvent(int32_t id, int64_t when, int32_t modifiers, int32_t keyCode, char16_t keyChar, int32_t keyLocation) {
}

int32_t CWarningWindow::getInitialStyleBits() {
	int32_t styleBits = 0;
	$CPlatformWindow::SET(styleBits, $CPlatformWindow::UTILITY, true);
	return styleBits;
}

void CWarningWindow::deliverMoveResizeEvent(int32_t x, int32_t y, int32_t width, int32_t height, bool byUser) {
	bool isResize = false;
	$synchronized(this->lock) {
		isResize = ($nc(this->bounds)->width != width || $nc(this->bounds)->height != height);
		$set(this, bounds, $new($Rectangle, x, y, width, height));
	}
	if (isResize) {
		replaceSurface();
	}
	$CPlatformWindow::deliverMoveResizeEvent(x, y, width, height, byUser);
}

$CPlatformResponder* CWarningWindow::createPlatformResponder() {
	return $new($CPlatformResponder, this, false);
}

$CPlatformView* CWarningWindow::createContentView() {
	return $new($CWarningWindow$1, this);
}

void CWarningWindow::dispose() {
	cancelTasks();
	$var($SurfaceData, surfaceData, $nc(this->contentView)->getSurfaceData());
	if (surfaceData != nullptr) {
		surfaceData->invalidate();
	}
	$CPlatformWindow::dispose();
}

void CWarningWindow::cancelTasks() {
	$synchronized(this->taskLock) {
		if (this->showHideTask != nullptr) {
			$nc(this->showHideTask)->cancel();
			$set(this, showHideTask, nullptr);
		}
	}
}

void CWarningWindow::updateIconSize() {
	$useLocalCurrentObjectStackCache();
	int32_t newSize = -1;
	if (this->ownerWindow != nullptr) {
		$var($Insets, insets, $nc(this->ownerWindow)->getInsets());
		int32_t max = $Math::max($nc(insets)->top, $Math::max(insets->bottom, $Math::max(insets->left, insets->right)));
		if (max < 24) {
			newSize = 0;
		} else if (max < 32) {
			newSize = 1;
		} else if (max < 48) {
			newSize = 2;
		} else {
			newSize = 3;
		}
	}
	if (newSize == -1) {
		newSize = 0;
	}
	$synchronized(this->lock) {
		if (newSize != this->currentSize) {
			this->currentSize = newSize;
			$var($IconInfo, ico, getSecurityIconInfo(this->currentSize, 0));
			$var($Window, var$0, this->ownerWindow);
			int32_t var$1 = $nc(ico)->getWidth();
			$nc($($AWTAccessor::getWindowAccessor()))->setSecurityWarningSize(var$0, var$1, ico->getHeight());
		}
	}
}

$Graphics* CWarningWindow::getGraphics() {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, sd, $nc(this->contentView)->getSurfaceData());
	if (this->ownerWindow == nullptr || sd == nullptr) {
		return nullptr;
	}
	$init($SystemColor);
	return $new($SunGraphics2D, sd, $SystemColor::windowText, $SystemColor::window, $($nc(this->ownerWindow)->getFont()));
}

void CWarningWindow::repaint() {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, getGraphics());
	if (g != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				$init($AlphaComposite);
				$nc(($cast($Graphics2D, g)))->setComposite($AlphaComposite::Src);
				g->drawImage($($nc($(getSecurityIconInfo()))->getImage()), 0, 0, nullptr);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				g->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void CWarningWindow::replaceSurface() {
	$var($SurfaceData, oldData, $nc(this->contentView)->getSurfaceData());
	replaceSurfaceData();
	if (oldData != nullptr && oldData != $nc(this->contentView)->getSurfaceData()) {
		oldData->flush();
	}
}

int32_t CWarningWindow::getWidth() {
	return $nc($(getSecurityIconInfo()))->getWidth();
}

int32_t CWarningWindow::getHeight() {
	return $nc($(getSecurityIconInfo()))->getHeight();
}

$IconInfo* CWarningWindow::getSecurityIconInfo() {
	return getSecurityIconInfo(this->currentSize, this->currentIcon);
}

void CWarningWindow::lambda$setVisible$2(int64_t ownerPtr) {
	execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CWarningWindow$$Lambda$lambda$setVisible$1$2, ownerPtr)));
}

void CWarningWindow::lambda$setVisible$1(int64_t ownerPtr, int64_t ptr) {
	$init(CWarningWindow);
	$CWrapper$NSWindow::orderWindow(ptr, $CWrapper$NSWindow::NSWindowAbove, ownerPtr);
}

void CWarningWindow::lambda$setVisible$0(bool visible, int64_t ptr) {
	$init(CWarningWindow);
	if (visible) {
		$CWrapper$NSWindow::orderFront(ptr);
	} else {
		$CWrapper$NSWindow::orderOut(ptr);
	}
}

CWarningWindow::CWarningWindow() {
}

$Class* CWarningWindow::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CWarningWindow$$Lambda$lambda$setVisible$0::classInfo$.name)) {
			return CWarningWindow$$Lambda$lambda$setVisible$0::load$(name, initialize);
		}
		if (name->equals(CWarningWindow$$Lambda$lambda$setVisible$2$1::classInfo$.name)) {
			return CWarningWindow$$Lambda$lambda$setVisible$2$1::load$(name, initialize);
		}
		if (name->equals(CWarningWindow$$Lambda$lambda$setVisible$1$2::classInfo$.name)) {
			return CWarningWindow$$Lambda$lambda$setVisible$1$2::load$(name, initialize);
		}
	}
	$loadClass(CWarningWindow, name, initialize, &_CWarningWindow_ClassInfo_, allocate$CWarningWindow);
	return class$;
}

$Class* CWarningWindow::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun