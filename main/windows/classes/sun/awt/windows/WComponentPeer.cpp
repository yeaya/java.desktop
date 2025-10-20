#include <sun/awt/windows/WComponentPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTException.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/GlobalCursorManager.h>
#include <sun/awt/PaintEventDispatcher.h>
#include <sun/awt/RepaintArea.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/Win32GraphicsConfig.h>
#include <sun/awt/Win32GraphicsEnvironment.h>
#include <sun/awt/event/IgnorePaintEvent.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/awt/windows/WComponentPeer$1.h>
#include <sun/awt/windows/WComponentPeer$2.h>
#include <sun/awt/windows/WComponentPeer$3.h>
#include <sun/awt/windows/WEmbeddedFrame.h>
#include <sun/awt/windows/WEmbeddedFramePeer.h>
#include <sun/awt/windows/WFontMetrics.h>
#include <sun/awt/windows/WGlobalCursorManager.h>
#include <sun/awt/windows/WKeyboardFocusManagerPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/ScreenUpdateManager.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BANDING_DIVISOR
#undef DIALOG
#undef FINE
#undef FINER
#undef FINEST
#undef FOCUS_GAINED
#undef FOCUS_LOST
#undef MOUSE_EVENT
#undef MOUSE_PRESSED
#undef NO_EMBEDDED_CHECK
#undef PAINT
#undef PLAIN
#undef SET_BOUNDS
#undef SNFH_FAILURE
#undef SNFH_SUCCESS_HANDLED
#undef SNFH_SUCCESS_PROCEED
#undef TYPE_INT_ARGB
#undef UPDATE

using $AWTEvent = ::java::awt::AWTEvent;
using $AWTException = ::java::awt::AWTException;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $SystemColor = ::java::awt::SystemColor;
using $Window = ::java::awt::Window;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $DropTargetPeer = ::java::awt::dnd::peer::DropTargetPeer;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $EventObject = ::java::util::EventObject;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AppContext = ::sun::awt::AppContext;
using $GlobalCursorManager = ::sun::awt::GlobalCursorManager;
using $KeyboardFocusManagerPeerImpl = ::sun::awt::KeyboardFocusManagerPeerImpl;
using $PaintEventDispatcher = ::sun::awt::PaintEventDispatcher;
using $RepaintArea = ::sun::awt::RepaintArea;
using $SunToolkit = ::sun::awt::SunToolkit;
using $Win32GraphicsConfig = ::sun::awt::Win32GraphicsConfig;
using $Win32GraphicsEnvironment = ::sun::awt::Win32GraphicsEnvironment;
using $IgnorePaintEvent = ::sun::awt::event::IgnorePaintEvent;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $WComponentPeer$1 = ::sun::awt::windows::WComponentPeer$1;
using $WComponentPeer$2 = ::sun::awt::windows::WComponentPeer$2;
using $WComponentPeer$3 = ::sun::awt::windows::WComponentPeer$3;
using $WEmbeddedFrame = ::sun::awt::windows::WEmbeddedFrame;
using $WEmbeddedFramePeer = ::sun::awt::windows::WEmbeddedFramePeer;
using $WFontMetrics = ::sun::awt::windows::WFontMetrics;
using $WGlobalCursorManager = ::sun::awt::windows::WGlobalCursorManager;
using $WKeyboardFocusManagerPeer = ::sun::awt::windows::WKeyboardFocusManagerPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $ScreenUpdateManager = ::sun::java2d::ScreenUpdateManager;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $Region = ::sun::java2d::pipe::Region;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WComponentPeer_FieldInfo_[] = {
	{"hwnd", "J", nullptr, $PROTECTED | $VOLATILE, $field(WComponentPeer, hwnd)},
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WComponentPeer, log)},
	{"shapeLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WComponentPeer, shapeLog)},
	{"focusLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WComponentPeer, focusLog)},
	{"surfaceData", "Lsun/java2d/SurfaceData;", nullptr, 0, $field(WComponentPeer, surfaceData)},
	{"paintArea", "Lsun/awt/RepaintArea;", nullptr, $PRIVATE, $field(WComponentPeer, paintArea)},
	{"winGraphicsConfig", "Lsun/awt/Win32GraphicsConfig;", nullptr, $PROTECTED, $field(WComponentPeer, winGraphicsConfig)},
	{"isLayouting", "Z", nullptr, 0, $field(WComponentPeer, isLayouting)},
	{"paintPending", "Z", nullptr, 0, $field(WComponentPeer, paintPending)},
	{"oldWidth", "I", nullptr, 0, $field(WComponentPeer, oldWidth)},
	{"oldHeight", "I", nullptr, 0, $field(WComponentPeer, oldHeight)},
	{"numBackBuffers", "I", nullptr, $PRIVATE, $field(WComponentPeer, numBackBuffers)},
	{"backBuffer", "Ljava/awt/image/VolatileImage;", nullptr, $PRIVATE, $field(WComponentPeer, backBuffer)},
	{"backBufferCaps", "Ljava/awt/BufferCapabilities;", nullptr, $PRIVATE, $field(WComponentPeer, backBufferCaps)},
	{"foreground", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(WComponentPeer, foreground)},
	{"background", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(WComponentPeer, background)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(WComponentPeer, font)},
	{"nDropTargets", "I", nullptr, 0, $field(WComponentPeer, nDropTargets)},
	{"nativeDropTargetContext", "J", nullptr, 0, $field(WComponentPeer, nativeDropTargetContext)},
	{"serialNum", "I", nullptr, $PUBLIC, $field(WComponentPeer, serialNum)},
	{"BANDING_DIVISOR", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WComponentPeer, BANDING_DIVISOR)},
	{"defaultFont", "Ljava/awt/Font;", nullptr, $STATIC | $FINAL, $staticField(WComponentPeer, defaultFont)},
	{"updateX1", "I", nullptr, $PRIVATE, $field(WComponentPeer, updateX1)},
	{"updateY1", "I", nullptr, $PRIVATE, $field(WComponentPeer, updateY1)},
	{"updateX2", "I", nullptr, $PRIVATE, $field(WComponentPeer, updateX2)},
	{"updateY2", "I", nullptr, $PRIVATE, $field(WComponentPeer, updateY2)},
	{"isAccelCapable", "Z", nullptr, $PRIVATE | $VOLATILE, $field(WComponentPeer, isAccelCapable$)},
	{}
};

$MethodInfo _WComponentPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(WComponentPeer::*)($Component*)>(&WComponentPeer::init$))},
	{"_dispose", "()V", nullptr, $PRIVATE | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(WComponentPeer::*)()>(&WComponentPeer::_dispose))},
	{"_setBackground", "(I)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WComponentPeer::*)(int32_t)>(&WComponentPeer::_setBackground))},
	{"_setFont", "(Ljava/awt/Font;)V", nullptr, $SYNCHRONIZED | $NATIVE},
	{"_setForeground", "(I)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WComponentPeer::*)(int32_t)>(&WComponentPeer::_setForeground))},
	{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addNativeDropTarget", "()J", nullptr, $NATIVE},
	{"applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"beginLayout", "()V", nullptr, $PUBLIC},
	{"beginValidate", "()V", nullptr, $PUBLIC | $NATIVE},
	{"canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"checkCreation", "()V", nullptr, $PROTECTED},
	{"coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $ABSTRACT},
	{"createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createPrintedPixels", "(IIIII)[I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$ints*(WComponentPeer::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&WComponentPeer::createPrintedPixels))},
	{"createScreenSurface", "(Z)V", nullptr, $PUBLIC},
	{"createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"destroyBuffers", "()V", nullptr, $PUBLIC},
	{"disable", "()V", nullptr, $SYNCHRONIZED | $NATIVE},
	{"disableAcceleration", "()V", nullptr, $PUBLIC},
	{"disposeImpl", "()V", nullptr, $PROTECTED},
	{"disposeLater", "()V", nullptr, $PUBLIC},
	{"dynamicallyLayoutContainer", "()V", nullptr, 0},
	{"enable", "()V", nullptr, $SYNCHRONIZED | $NATIVE},
	{"endLayout", "()V", nullptr, $PUBLIC},
	{"endValidate", "()V", nullptr, $PUBLIC | $NATIVE},
	{"flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getBackBufferCaps", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC},
	{"getBackBuffersNum", "()I", nullptr, $PUBLIC},
	{"getBackgroundNoSync", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getColorModel", "(I)Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getData", "()J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getDeviceColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getHWnd", "()J", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $NATIVE},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getNativeParent", "()Lsun/awt/windows/WComponentPeer;", nullptr, 0},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSurfaceData", "()Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"getTarget", "()Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"handleExpose", "(IIII)V", nullptr, 0},
	{"handleJavaFocusEvent", "(Ljava/awt/event/FocusEvent;)V", nullptr, 0},
	{"handleJavaKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC},
	{"handleJavaMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"handlePaint", "(IIII)V", nullptr, $PUBLIC},
	{"handleRepaint", "(IIII)V", nullptr, 0},
	{"handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"hide", "()V", nullptr, $SYNCHRONIZED | $NATIVE},
	{"initialize", "()V", nullptr, 0},
	{"isAccelCapable", "()Z", nullptr, $PUBLIC},
	{"isContainingTopLevelAccelCapable", "(Ljava/awt/Component;)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<bool(*)($Component*)>(&WComponentPeer::isContainingTopLevelAccelCapable))},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"isLightweightFramePeer", "()Z", nullptr, $PUBLIC},
	{"isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"isPaintPending", "()Z", nullptr, $PUBLIC},
	{"isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"layout", "()V", nullptr, $PUBLIC},
	{"nativeHandleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $NATIVE},
	{"nativeHandlesWheelScrolling", "()Z", nullptr, $NATIVE},
	{"pSetParent", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $NATIVE},
	{"pShow", "()V", nullptr, $PRIVATE | $SYNCHRONIZED | $NATIVE, $method(static_cast<void(WComponentPeer::*)()>(&WComponentPeer::pShow))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintDamagedAreaImmediately", "()V", nullptr, 0},
	{"postEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"postPaintIfNecessary", "(IIII)V", nullptr, $PRIVATE, $method(static_cast<void(WComponentPeer::*)(int32_t,int32_t,int32_t,int32_t)>(&WComponentPeer::postPaintIfNecessary))},
	{"preprocessPostEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"rejectFocusRequestHelper", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(WComponentPeer::*)($String*)>(&WComponentPeer::rejectFocusRequestHelper))},
	{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeNativeDropTarget", "()V", nullptr, $NATIVE},
	{"repaint", "(JIIII)V", nullptr, $PUBLIC},
	{"reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"replaceSurfaceData", "()V", nullptr, $PUBLIC},
	{"replaceSurfaceData", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"replaceSurfaceDataLater", "()V", nullptr, $PUBLIC},
	{"requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"reshape", "(IIII)V", nullptr, $PUBLIC | $SYNCHRONIZED | $NATIVE},
	{"reshapeNoCheck", "(IIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WComponentPeer::*)(int32_t,int32_t,int32_t,int32_t)>(&WComponentPeer::reshapeNoCheck))},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setBoundsOperation", "(I)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFocus", "(Z)V", nullptr, $NATIVE},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setRectangularShape", "(IIIILsun/java2d/pipe/Region;)V", nullptr, $NATIVE},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"setZOrder", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WComponentPeer::*)(int64_t)>(&WComponentPeer::setZOrder))},
	{"shouldClearRectBeforePaint", "()Z", nullptr, $PUBLIC},
	{"show", "()V", nullptr, $PUBLIC},
	{"start", "()V", nullptr, $SYNCHRONIZED | $NATIVE},
	{"syncBounds", "()V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"updateWindow", "()V", nullptr, $SYNCHRONIZED | $NATIVE},
	{}
};

#define _METHOD_INDEX__dispose 6
#define _METHOD_INDEX__setBackground 7
#define _METHOD_INDEX__setFont 8
#define _METHOD_INDEX__setForeground 9
#define _METHOD_INDEX_addNativeDropTarget 11
#define _METHOD_INDEX_beginValidate 14
#define _METHOD_INDEX_createPrintedPixels 21
#define _METHOD_INDEX_disable 25
#define _METHOD_INDEX_enable 30
#define _METHOD_INDEX_endValidate 32
#define _METHOD_INDEX_getLocationOnScreen 47
#define _METHOD_INDEX_hide 61
#define _METHOD_INDEX_isObscured 67
#define _METHOD_INDEX_nativeHandleEvent 71
#define _METHOD_INDEX_nativeHandlesWheelScrolling 72
#define _METHOD_INDEX_pSetParent 73
#define _METHOD_INDEX_pShow 74
#define _METHOD_INDEX_removeNativeDropTarget 83
#define _METHOD_INDEX_reshape 90
#define _METHOD_INDEX_reshapeNoCheck 91
#define _METHOD_INDEX_setFocus 96
#define _METHOD_INDEX_setRectangularShape 99
#define _METHOD_INDEX_setZOrder 102
#define _METHOD_INDEX_start 105
#define _METHOD_INDEX_updateWindow 110

$InnerClassInfo _WComponentPeer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WComponentPeer$3", nullptr, nullptr, 0},
	{"sun.awt.windows.WComponentPeer$2", nullptr, nullptr, 0},
	{"sun.awt.windows.WComponentPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WComponentPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.windows.WComponentPeer",
	"sun.awt.windows.WObjectPeer",
	"java.awt.peer.ComponentPeer,java.awt.dnd.peer.DropTargetPeer",
	_WComponentPeer_FieldInfo_,
	_WComponentPeer_MethodInfo_,
	nullptr,
	nullptr,
	_WComponentPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WComponentPeer$3,sun.awt.windows.WComponentPeer$2,sun.awt.windows.WComponentPeer$1"
};

$Object* allocate$WComponentPeer($Class* clazz) {
	return $of($alloc(WComponentPeer));
}

void WComponentPeer::dispose() {
	this->$WObjectPeer::dispose();
}

int32_t WComponentPeer::hashCode() {
	 return this->$WObjectPeer::hashCode();
}

bool WComponentPeer::equals(Object$* arg0) {
	 return this->$WObjectPeer::equals(arg0);
}

$Object* WComponentPeer::clone() {
	 return this->$WObjectPeer::clone();
}

void WComponentPeer::finalize() {
	this->$WObjectPeer::finalize();
}

$PlatformLogger* WComponentPeer::log = nullptr;
$PlatformLogger* WComponentPeer::shapeLog = nullptr;
$PlatformLogger* WComponentPeer::focusLog = nullptr;
double WComponentPeer::BANDING_DIVISOR = 0.0;
$Font* WComponentPeer::defaultFont = nullptr;

bool WComponentPeer::isObscured() {
	bool $ret = false;
	$prepareNative(WComponentPeer, isObscured, bool);
	$ret = $invokeNative(WComponentPeer, isObscured);
	$finishNative();
	return $ret;
}

bool WComponentPeer::canDetermineObscurity() {
	return true;
}

void WComponentPeer::pShow() {
	$prepareNative(WComponentPeer, pShow, void);
	$invokeNative(WComponentPeer, pShow);
	$finishNative();
}

void WComponentPeer::hide() {
	$prepareNative(WComponentPeer, hide, void);
	$invokeNative(WComponentPeer, hide);
	$finishNative();
}

void WComponentPeer::enable() {
	$prepareNative(WComponentPeer, enable, void);
	$invokeNative(WComponentPeer, enable);
	$finishNative();
}

void WComponentPeer::disable() {
	$prepareNative(WComponentPeer, disable, void);
	$invokeNative(WComponentPeer, disable);
	$finishNative();
}

int64_t WComponentPeer::getHWnd() {
	return this->hwnd;
}

$Point* WComponentPeer::getLocationOnScreen() {
	$var($Point, $ret, nullptr);
	$prepareNative(WComponentPeer, getLocationOnScreen, $Point*);
	$assign($ret, $invokeNative(WComponentPeer, getLocationOnScreen));
	$finishNative();
	return $ret;
}

void WComponentPeer::setVisible(bool b) {
	if (b) {
		show();
	} else {
		hide();
	}
}

void WComponentPeer::show() {
	$var($Dimension, s, $nc(($cast($Component, this->target)))->getSize());
	this->oldHeight = $nc(s)->height;
	this->oldWidth = s->width;
	pShow();
}

void WComponentPeer::setEnabled(bool b) {
	if (b) {
		enable();
	} else {
		disable();
	}
}

void WComponentPeer::reshapeNoCheck(int32_t x, int32_t y, int32_t width, int32_t height) {
	$prepareNative(WComponentPeer, reshapeNoCheck, void, int32_t x, int32_t y, int32_t width, int32_t height);
	$invokeNative(WComponentPeer, reshapeNoCheck, x, y, width, height);
	$finishNative();
}

void WComponentPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->paintPending = (width != this->oldWidth) || (height != this->oldHeight);
	if (((int32_t)(op & (uint32_t)$ComponentPeer::NO_EMBEDDED_CHECK)) != 0) {
		reshapeNoCheck(x, y, width, height);
	} else {
		reshape(x, y, width, height);
	}
	if ((width != this->oldWidth) || (height != this->oldHeight)) {
		try {
			replaceSurfaceData();
		} catch ($InvalidPipeException&) {
			$catch();
		}
		this->oldWidth = width;
		this->oldHeight = height;
	}
	++this->serialNum;
}

void WComponentPeer::dynamicallyLayoutContainer() {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(WComponentPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$var($Container, parent, $WToolkit::getNativeContainer($cast($Component, this->target)));
		if (parent != nullptr) {
			$nc(WComponentPeer::log)->fine("Assertion (parent == null) failed"_s);
		}
	}
	$var($Container, cont, $cast($Container, this->target));
	$WToolkit::executeOnEventHandlerThread(cont, $$new($WComponentPeer$1, this, cont));
}

void WComponentPeer::paintDamagedAreaImmediately() {
	updateWindow();
	$SunToolkit::flushPendingEvents();
	$nc(this->paintArea)->paint(this->target, shouldClearRectBeforePaint());
}

void WComponentPeer::updateWindow() {
	$prepareNative(WComponentPeer, updateWindow, void);
	$invokeNative(WComponentPeer, updateWindow);
	$finishNative();
}

void WComponentPeer::paint($Graphics* g) {
	$nc(($cast($Component, this->target)))->paint(g);
}

void WComponentPeer::repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height) {
}

$ints* WComponentPeer::createPrintedPixels(int32_t srcX, int32_t srcY, int32_t srcW, int32_t srcH, int32_t alpha) {
	$var($ints, $ret, nullptr);
	$prepareNative(WComponentPeer, createPrintedPixels, $ints*, int32_t srcX, int32_t srcY, int32_t srcW, int32_t srcH, int32_t alpha);
	$assign($ret, $invokeNative(WComponentPeer, createPrintedPixels, srcX, srcY, srcW, srcH, alpha));
	$finishNative();
	return $ret;
}

void WComponentPeer::print($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Component, comp, $cast($Component, this->target));
	int32_t totalW = $nc(comp)->getWidth();
	int32_t totalH = comp->getHeight();
	int32_t hInc = $cast(int32_t, ($div(totalH, WComponentPeer::BANDING_DIVISOR)));
	if (hInc == 0) {
		hInc = totalH;
	}
	for (int32_t startY = 0; startY < totalH; startY += hInc) {
		int32_t endY = startY + hInc - 1;
		if (endY >= totalH) {
			endY = totalH - 1;
		}
		int32_t h = endY - startY + 1;
		$var($Color, bgColor, comp->getBackground());
		$var($ints, pix, createPrintedPixels(0, startY, totalW, h, bgColor == nullptr ? 255 : $nc(bgColor)->getAlpha()));
		if (pix != nullptr) {
			$var($BufferedImage, bim, $new($BufferedImage, totalW, h, $BufferedImage::TYPE_INT_ARGB));
			bim->setRGB(0, 0, totalW, h, pix, 0, totalW);
			$nc(g)->drawImage(bim, 0, startY, nullptr);
			bim->flush();
		}
	}
	comp->print(g);
}

void WComponentPeer::coalescePaintEvent($PaintEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, r, $nc(e)->getUpdateRect());
	if (!($instanceOf($IgnorePaintEvent, e))) {
		$nc(this->paintArea)->add(r, e->getID());
	}
	$init($PlatformLogger$Level);
	if ($nc(WComponentPeer::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		switch (e->getID()) {
		case $PaintEvent::UPDATE:
			{
				$nc(WComponentPeer::log)->finest($$str({"coalescePaintEvent: UPDATE: add: x = "_s, $$str($nc(r)->x), ", y = "_s, $$str(r->y), ", width = "_s, $$str(r->width), ", height = "_s, $$str(r->height)}));
				return;
			}
		case $PaintEvent::PAINT:
			{
				$nc(WComponentPeer::log)->finest($$str({"coalescePaintEvent: PAINT: add: x = "_s, $$str($nc(r)->x), ", y = "_s, $$str(r->y), ", width = "_s, $$str(r->width), ", height = "_s, $$str(r->height)}));
				return;
			}
		}
	}
}

void WComponentPeer::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	$prepareNative(WComponentPeer, reshape, void, int32_t x, int32_t y, int32_t width, int32_t height);
	$invokeNative(WComponentPeer, reshape, x, y, width, height);
	$finishNative();
}

bool WComponentPeer::handleJavaKeyEvent($KeyEvent* e) {
	return false;
}

void WComponentPeer::handleJavaMouseEvent($MouseEvent* e) {
	switch ($nc(e)->getID()) {
	case $MouseEvent::MOUSE_PRESSED:
		{
			bool var$1 = $equals(this->target, e->getSource());
			bool var$0 = var$1 && !$nc(($cast($Component, this->target)))->isFocusOwner();
			if (var$0 && $WKeyboardFocusManagerPeer::shouldFocusOnClick($cast($Component, this->target))) {
				$init($FocusEvent$Cause);
				$WKeyboardFocusManagerPeer::requestFocusFor($cast($Component, this->target), $FocusEvent$Cause::MOUSE_EVENT);
			}
			break;
		}
	}
}

void WComponentPeer::nativeHandleEvent($AWTEvent* e) {
	$prepareNative(WComponentPeer, nativeHandleEvent, void, $AWTEvent* e);
	$invokeNative(WComponentPeer, nativeHandleEvent, e);
	$finishNative();
}

void WComponentPeer::handleEvent($AWTEvent* e) {
	int32_t id = $nc(e)->getID();
	bool var$0 = ($instanceOf($InputEvent, e)) && !$nc(($cast($InputEvent, e)))->isConsumed();
	if (var$0 && $nc(($cast($Component, this->target)))->isEnabled()) {
		if ($instanceOf($MouseEvent, e) && !($instanceOf($MouseWheelEvent, e))) {
			handleJavaMouseEvent($cast($MouseEvent, e));
		} else if ($instanceOf($KeyEvent, e)) {
			if (handleJavaKeyEvent($cast($KeyEvent, e))) {
				return;
			}
		}
	}
	switch (id) {
	case $PaintEvent::PAINT:
		{
			this->paintPending = false;
		}
	case $PaintEvent::UPDATE:
		{
			if (!this->isLayouting && !this->paintPending) {
				$nc(this->paintArea)->paint(this->target, shouldClearRectBeforePaint());
			}
			return;
		}
	case $FocusEvent::FOCUS_LOST:
		{}
	case $FocusEvent::FOCUS_GAINED:
		{
			handleJavaFocusEvent($cast($FocusEvent, e));
		}
	default:
		{
			break;
		}
	}
	nativeHandleEvent(e);
}

void WComponentPeer::handleJavaFocusEvent($FocusEvent* fe) {
	$init($PlatformLogger$Level);
	if ($nc(WComponentPeer::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(WComponentPeer::focusLog)->finer($($nc(fe)->toString()));
	}
	setFocus($nc(fe)->getID() == $FocusEvent::FOCUS_GAINED);
}

void WComponentPeer::setFocus(bool doSetFocus) {
	$prepareNative(WComponentPeer, setFocus, void, bool doSetFocus);
	$invokeNative(WComponentPeer, setFocus, doSetFocus);
	$finishNative();
}

$Dimension* WComponentPeer::getMinimumSize() {
	return $nc(($cast($Component, this->target)))->getSize();
}

$Dimension* WComponentPeer::getPreferredSize() {
	return getMinimumSize();
}

void WComponentPeer::layout() {
}

$Rectangle* WComponentPeer::getBounds() {
	return $nc(($cast($Component, this->target)))->getBounds();
}

bool WComponentPeer::isFocusable() {
	return false;
}

$GraphicsConfiguration* WComponentPeer::getGraphicsConfiguration() {
	if (this->winGraphicsConfig != nullptr) {
		return this->winGraphicsConfig;
	} else {
		return $nc(($cast($Component, this->target)))->getGraphicsConfiguration();
	}
}

$SurfaceData* WComponentPeer::getSurfaceData() {
	return this->surfaceData;
}

void WComponentPeer::replaceSurfaceData() {
	replaceSurfaceData(this->numBackBuffers, this->backBufferCaps);
}

void WComponentPeer::createScreenSurface(bool isResize) {
	$useLocalCurrentObjectStackCache();
	$var($Win32GraphicsConfig, gc, $cast($Win32GraphicsConfig, getGraphicsConfiguration()));
	$var($ScreenUpdateManager, mgr, $ScreenUpdateManager::getInstance());
	$set(this, surfaceData, $nc(mgr)->createScreenSurface(gc, this, this->numBackBuffers, isResize));
}

void WComponentPeer::replaceSurfaceData(int32_t newNumBackBuffers, $BufferCapabilities* caps) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, oldData, nullptr);
	$var($VolatileImage, oldBB, nullptr);
	$synchronized($nc(($cast($Component, this->target)))->getTreeLock()) {
		$synchronized(this) {
			if (this->pData == 0) {
				return;
			}
			this->numBackBuffers = newNumBackBuffers;
			$var($ScreenUpdateManager, mgr, $ScreenUpdateManager::getInstance());
			$assign(oldData, this->surfaceData);
			$nc(mgr)->dropScreenSurface(oldData);
			createScreenSurface(true);
			if (oldData != nullptr) {
				oldData->invalidate();
			}
			$assign(oldBB, this->backBuffer);
			if (this->numBackBuffers > 0) {
				$set(this, backBufferCaps, caps);
				$var($Win32GraphicsConfig, gc, $cast($Win32GraphicsConfig, getGraphicsConfiguration()));
				$set(this, backBuffer, $nc(gc)->createBackBuffer(this));
			} else if (this->backBuffer != nullptr) {
				$set(this, backBufferCaps, nullptr);
				$set(this, backBuffer, nullptr);
			}
		}
	}
	if (oldData != nullptr) {
		oldData->flush();
		$assign(oldData, nullptr);
	}
	if (oldBB != nullptr) {
		oldBB->flush();
		$assign(oldData, nullptr);
	}
}

void WComponentPeer::replaceSurfaceDataLater() {
	$useLocalCurrentObjectStackCache();
	$var($Runnable, r, $new($WComponentPeer$2, this));
	$var($Component, c, $cast($Component, this->target));
	if (!$nc($($PaintEventDispatcher::getPaintEventDispatcher()))->queueSurfaceDataReplacing(c, r)) {
		postEvent($$new($InvocationEvent, c, r));
	}
}

bool WComponentPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	$useLocalCurrentObjectStackCache();
	$var($AffineTransform, old, $nc($(getGraphicsConfiguration()))->getDefaultTransform());
	$set(this, winGraphicsConfig, $cast($Win32GraphicsConfig, gc));
	if (gc != nullptr && !$nc(old)->equals($(gc->getDefaultTransform()))) {
		syncBounds();
	}
	try {
		replaceSurfaceData();
	} catch ($InvalidPipeException&) {
		$catch();
	}
	return false;
}

void WComponentPeer::syncBounds() {
	$var($Rectangle, r, $nc(($cast($Component, this->target)))->getBounds());
	setBounds($nc(r)->x, r->y, r->width, r->height, $ComponentPeer::SET_BOUNDS);
}

$ColorModel* WComponentPeer::getColorModel() {
	$var($GraphicsConfiguration, gc, getGraphicsConfiguration());
	if (gc != nullptr) {
		return gc->getColorModel();
	} else {
		return nullptr;
	}
}

$ColorModel* WComponentPeer::getDeviceColorModel() {
	$var($Win32GraphicsConfig, gc, $cast($Win32GraphicsConfig, getGraphicsConfiguration()));
	if (gc != nullptr) {
		return gc->getDeviceColorModel();
	} else {
		return nullptr;
	}
}

$ColorModel* WComponentPeer::getColorModel(int32_t transparency) {
	$var($GraphicsConfiguration, gc, getGraphicsConfiguration());
	if (gc != nullptr) {
		return gc->getColorModel(transparency);
	} else {
		return nullptr;
	}
}

$Graphics* WComponentPeer::getGraphics() {
	$useLocalCurrentObjectStackCache();
	if (isDisposed()) {
		return nullptr;
	}
	$var($Component, target, $cast($Component, getTarget()));
	$var($Window, window, $SunToolkit::getContainingWindow(target));
	if (window != nullptr) {
		$var($WWindowPeer, wpeer, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(window)));
		if (wpeer != nullptr) {
			$var($Graphics, g, wpeer->getTranslucentGraphics());
			if (g != nullptr) {
				int32_t x = 0;
				int32_t y = 0;
				{
					$var($Component, c, target);
					for (; !$equals(c, window); $assign(c, $nc(c)->getParent())) {
						x += c->getX();
						y += c->getY();
					}
				}
				g->translate(x, y);
				int32_t var$0 = $nc(target)->getWidth();
				g->clipRect(0, 0, var$0, target->getHeight());
				return g;
			}
		}
	}
	$var($SurfaceData, surfaceData, this->surfaceData);
	if (surfaceData != nullptr) {
		$var($Color, bgColor, this->background);
		if (bgColor == nullptr) {
			$init($SystemColor);
			$assign(bgColor, $SystemColor::window);
		}
		$var($Color, fgColor, this->foreground);
		if (fgColor == nullptr) {
			$init($SystemColor);
			$assign(fgColor, $SystemColor::windowText);
		}
		$var($Font, font, this->font);
		if (font == nullptr) {
			$assign(font, WComponentPeer::defaultFont);
		}
		$var($ScreenUpdateManager, mgr, $ScreenUpdateManager::getInstance());
		return $nc(mgr)->createGraphics(surfaceData, this, fgColor, bgColor, font);
	}
	return nullptr;
}

$FontMetrics* WComponentPeer::getFontMetrics($Font* font) {
	return $WFontMetrics::getFontMetrics(font);
}

void WComponentPeer::_dispose() {
	$prepareNative(WComponentPeer, _dispose, void);
	$invokeNative(WComponentPeer, _dispose);
	$finishNative();
}

void WComponentPeer::disposeImpl() {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, oldData, this->surfaceData);
	$set(this, surfaceData, nullptr);
	$nc($($ScreenUpdateManager::getInstance()))->dropScreenSurface(oldData);
	$nc(oldData)->invalidate();
	$WToolkit::targetDisposedPeer(this->target, this);
	_dispose();
}

void WComponentPeer::disposeLater() {
	$useLocalCurrentObjectStackCache();
	postEvent($$new($InvocationEvent, this->target, $$new($WComponentPeer$3, this)));
}

void WComponentPeer::setForeground($Color* c) {
	$synchronized(this) {
		$set(this, foreground, c);
		_setForeground($nc(c)->getRGB());
	}
}

void WComponentPeer::setBackground($Color* c) {
	$synchronized(this) {
		$set(this, background, c);
		_setBackground($nc(c)->getRGB());
	}
}

$Color* WComponentPeer::getBackgroundNoSync() {
	return this->background;
}

void WComponentPeer::_setForeground(int32_t rgb) {
	$prepareNative(WComponentPeer, _setForeground, void, int32_t rgb);
	$invokeNative(WComponentPeer, _setForeground, rgb);
	$finishNative();
}

void WComponentPeer::_setBackground(int32_t rgb) {
	$prepareNative(WComponentPeer, _setBackground, void, int32_t rgb);
	$invokeNative(WComponentPeer, _setBackground, rgb);
	$finishNative();
}

void WComponentPeer::setFont($Font* f) {
	$synchronized(this) {
		$set(this, font, f);
		_setFont(f);
	}
}

void WComponentPeer::_setFont($Font* f) {
	$prepareNative(WComponentPeer, _setFont, void, $Font* f);
	$invokeNative(WComponentPeer, _setFont, f);
	$finishNative();
}

void WComponentPeer::updateCursorImmediately() {
	$nc($($WGlobalCursorManager::getCursorManager()))->updateCursorImmediately();
}

bool WComponentPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	$useLocalCurrentObjectStackCache();
	if ($WKeyboardFocusManagerPeer::processSynchronousLightweightTransfer($cast($Component, this->target), lightweightChild, temporary, focusedWindowChangeAllowed, time)) {
		return true;
	}
	int32_t result = $WKeyboardFocusManagerPeer::shouldNativelyFocusHeavyweight($cast($Component, this->target), lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
	{
		$var($Window, parentWindow, nullptr)
		$var($WWindowPeer, wpeer, nullptr)
		bool res = false;
		switch (result) {
		case $WKeyboardFocusManagerPeer::SNFH_FAILURE:
			{
				return false;
			}
		case $WKeyboardFocusManagerPeer::SNFH_SUCCESS_PROCEED:
			{
				$init($PlatformLogger$Level);
				if ($nc(WComponentPeer::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(WComponentPeer::focusLog)->finer($$str({"Proceeding with request to "_s, lightweightChild, " in "_s, this->target}));
				}
				$assign(parentWindow, $SunToolkit::getContainingWindow($cast($Component, this->target)));
				if (parentWindow == nullptr) {
					return rejectFocusRequestHelper("WARNING: Parent window is null"_s);
				}
				$assign(wpeer, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(parentWindow)));
				if (wpeer == nullptr) {
					return rejectFocusRequestHelper("WARNING: Parent window\'s peer is null"_s);
				}
				res = $nc(wpeer)->requestWindowFocus(cause);
				$init($PlatformLogger$Level);
				if ($nc(WComponentPeer::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(WComponentPeer::focusLog)->finer($$str({"Requested window focus: "_s, $$str(res)}));
				}
				if (!(res && $nc(parentWindow)->isFocused())) {
					return rejectFocusRequestHelper("Waiting for asynchronous processing of the request"_s);
				}
				return $WKeyboardFocusManagerPeer::deliverFocus(lightweightChild, $cast($Component, this->target), temporary, focusedWindowChangeAllowed, time, cause);
			}
		case $WKeyboardFocusManagerPeer::SNFH_SUCCESS_HANDLED:
			{
				return true;
			}
		}
	}
	return false;
}

bool WComponentPeer::rejectFocusRequestHelper($String* logMsg) {
	$init($PlatformLogger$Level);
	if ($nc(WComponentPeer::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(WComponentPeer::focusLog)->finer(logMsg);
	}
	$WKeyboardFocusManagerPeer::removeLastFocusRequest($cast($Component, this->target));
	return false;
}

$Image* WComponentPeer::createImage(int32_t width, int32_t height) {
	$var($Win32GraphicsConfig, gc, $cast($Win32GraphicsConfig, getGraphicsConfiguration()));
	return $nc(gc)->createAcceleratedImage($cast($Component, this->target), width, height);
}

$VolatileImage* WComponentPeer::createVolatileImage(int32_t width, int32_t height) {
	return $new($SunVolatileImage, $cast($Component, this->target), width, height);
}

$String* WComponentPeer::toString() {
	return $str({$($of(this)->getClass()->getName()), "["_s, this->target, "]"_s});
}

void WComponentPeer::init$($Component* target) {
	$WObjectPeer::init$();
	this->isLayouting = false;
	this->paintPending = false;
	this->oldWidth = -1;
	this->oldHeight = -1;
	this->numBackBuffers = 0;
	$set(this, backBuffer, nullptr);
	$set(this, backBufferCaps, nullptr);
	this->serialNum = 0;
	this->isAccelCapable$ = true;
	$set(this, target, target);
	$set(this, paintArea, $new($RepaintArea));
	create($(getNativeParent()));
	checkCreation();
	createScreenSurface(false);
	initialize();
	start();
}

WComponentPeer* WComponentPeer::getNativeParent() {
	$var($Container, parent, $SunToolkit::getNativeContainer($cast($Component, this->target)));
	return $cast(WComponentPeer, $WToolkit::targetToPeer(parent));
}

void WComponentPeer::checkCreation() {
	if ((this->hwnd == 0) || (this->pData == 0)) {
		if (this->createError != nullptr) {
			$throw(this->createError);
		} else {
			$throwNew($InternalError, "couldn\'t create component peer"_s);
		}
	}
}

void WComponentPeer::start() {
	$prepareNative(WComponentPeer, start, void);
	$invokeNative(WComponentPeer, start);
	$finishNative();
}

void WComponentPeer::initialize() {
	$useLocalCurrentObjectStackCache();
	if ($nc(($cast($Component, this->target)))->isVisible()) {
		show();
	}
	$var($Color, fg, $nc(($cast($Component, this->target)))->getForeground());
	if (fg != nullptr) {
		setForeground(fg);
	}
	$var($Font, f, $nc(($cast($Component, this->target)))->getFont());
	if (f != nullptr) {
		setFont(f);
	}
	if (!$nc(($cast($Component, this->target)))->isEnabled()) {
		disable();
	}
	$var($Rectangle, r, $nc(($cast($Component, this->target)))->getBounds());
	setBounds($nc(r)->x, r->y, r->width, r->height, $ComponentPeer::SET_BOUNDS);
}

void WComponentPeer::handleRepaint(int32_t x, int32_t y, int32_t w, int32_t h) {
}

void WComponentPeer::handleExpose(int32_t x, int32_t y, int32_t w, int32_t h) {
	postPaintIfNecessary(x, y, w, h);
}

void WComponentPeer::handlePaint(int32_t x, int32_t y, int32_t w, int32_t h) {
	postPaintIfNecessary(x, y, w, h);
}

void WComponentPeer::postPaintIfNecessary(int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($AWTAccessor::getComponentAccessor()))->getIgnoreRepaint($cast($Component, this->target))) {
		$var($PaintEvent, event, $nc($($PaintEventDispatcher::getPaintEventDispatcher()))->createPaintEvent($cast($Component, this->target), x, y, w, h));
		if (event != nullptr) {
			postEvent(event);
		}
	}
}

void WComponentPeer::postEvent($AWTEvent* event) {
	preprocessPostEvent(event);
	$WToolkit::postEvent($($WToolkit::targetToAppContext(this->target)), event);
}

void WComponentPeer::preprocessPostEvent($AWTEvent* event) {
}

void WComponentPeer::beginLayout() {
	this->isLayouting = true;
}

void WComponentPeer::endLayout() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$nc(this->paintArea)->isEmpty() && !this->paintPending;
	if (var$0 && !$nc(($cast($Component, this->target)))->getIgnoreRepaint()) {
		postEvent($$new($PaintEvent, $cast($Component, this->target), $PaintEvent::PAINT, $$new($Rectangle)));
	}
	this->isLayouting = false;
}

void WComponentPeer::beginValidate() {
	$prepareNative(WComponentPeer, beginValidate, void);
	$invokeNative(WComponentPeer, beginValidate);
	$finishNative();
}

void WComponentPeer::endValidate() {
	$prepareNative(WComponentPeer, endValidate, void);
	$invokeNative(WComponentPeer, endValidate);
	$finishNative();
}

void WComponentPeer::addDropTarget($DropTarget* dt) {
	$synchronized(this) {
		if (this->nDropTargets == 0) {
			this->nativeDropTargetContext = addNativeDropTarget();
		}
		++this->nDropTargets;
	}
}

void WComponentPeer::removeDropTarget($DropTarget* dt) {
	$synchronized(this) {
		--this->nDropTargets;
		if (this->nDropTargets == 0) {
			removeNativeDropTarget();
			this->nativeDropTargetContext = 0;
		}
	}
}

int64_t WComponentPeer::addNativeDropTarget() {
	int64_t $ret = 0;
	$prepareNative(WComponentPeer, addNativeDropTarget, int64_t);
	$ret = $invokeNative(WComponentPeer, addNativeDropTarget);
	$finishNative();
	return $ret;
}

void WComponentPeer::removeNativeDropTarget() {
	$prepareNative(WComponentPeer, removeNativeDropTarget, void);
	$invokeNative(WComponentPeer, removeNativeDropTarget);
	$finishNative();
}

bool WComponentPeer::nativeHandlesWheelScrolling() {
	bool $ret = false;
	$prepareNative(WComponentPeer, nativeHandlesWheelScrolling, bool);
	$ret = $invokeNative(WComponentPeer, nativeHandlesWheelScrolling);
	$finishNative();
	return $ret;
}

bool WComponentPeer::handlesWheelScrolling() {
	return nativeHandlesWheelScrolling();
}

bool WComponentPeer::isPaintPending() {
	return this->paintPending && this->isLayouting;
}

void WComponentPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	$useLocalCurrentObjectStackCache();
	$var($Win32GraphicsConfig, gc, $cast($Win32GraphicsConfig, getGraphicsConfiguration()));
	$nc(gc)->assertOperationSupported($cast($Component, this->target), numBuffers, caps);
	try {
		replaceSurfaceData(numBuffers - 1, caps);
	} catch ($InvalidPipeException&) {
		$var($InvalidPipeException, e, $catch());
		$throwNew($AWTException, $(e->getMessage()));
	}
}

void WComponentPeer::destroyBuffers() {
	replaceSurfaceData(0, nullptr);
}

void WComponentPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	$useLocalCurrentObjectStackCache();
	$var($VolatileImage, backBuffer, this->backBuffer);
	if (backBuffer == nullptr) {
		$throwNew($IllegalStateException, "Buffers have not been created"_s);
	}
	$var($Win32GraphicsConfig, gc, $cast($Win32GraphicsConfig, getGraphicsConfiguration()));
	$nc(gc)->flip(this, $cast($Component, this->target), backBuffer, x1, y1, x2, y2, flipAction);
}

$Image* WComponentPeer::getBackBuffer() {
	$synchronized(this) {
		$var($Image, backBuffer, this->backBuffer);
		if (backBuffer == nullptr) {
			$throwNew($IllegalStateException, "Buffers have not been created"_s);
		}
		return backBuffer;
	}
}

$BufferCapabilities* WComponentPeer::getBackBufferCaps() {
	return this->backBufferCaps;
}

int32_t WComponentPeer::getBackBuffersNum() {
	return this->numBackBuffers;
}

bool WComponentPeer::shouldClearRectBeforePaint() {
	return true;
}

void WComponentPeer::pSetParent($ComponentPeer* newNativeParent) {
	$prepareNative(WComponentPeer, pSetParent, void, $ComponentPeer* newNativeParent);
	$invokeNative(WComponentPeer, pSetParent, newNativeParent);
	$finishNative();
}

void WComponentPeer::reparent($ContainerPeer* newNativeParent) {
	pSetParent(newNativeParent);
}

bool WComponentPeer::isReparentSupported() {
	return true;
}

void WComponentPeer::setBoundsOperation(int32_t operation) {
}

bool WComponentPeer::isAccelCapable() {
	if (!this->isAccelCapable$ || !isContainingTopLevelAccelCapable($cast($Component, this->target))) {
		return false;
	}
	bool isTranslucent = $SunToolkit::isContainingTopLevelTranslucent($cast($Component, this->target));
	return !isTranslucent || $Win32GraphicsEnvironment::isVistaOS();
}

void WComponentPeer::disableAcceleration() {
	this->isAccelCapable$ = false;
}

void WComponentPeer::setRectangularShape(int32_t lox, int32_t loy, int32_t hix, int32_t hiy, $Region* region) {
	$prepareNative(WComponentPeer, setRectangularShape, void, int32_t lox, int32_t loy, int32_t hix, int32_t hiy, $Region* region);
	$invokeNative(WComponentPeer, setRectangularShape, lox, loy, hix, hiy, region);
	$finishNative();
}

bool WComponentPeer::isContainingTopLevelAccelCapable($Component* c$renamed) {
	$init(WComponentPeer);
	$useLocalCurrentObjectStackCache();
	$var($Component, c, c$renamed);
	while (c != nullptr && !($instanceOf($WEmbeddedFrame, c))) {
		$assign(c, c->getParent());
	}
	if (c == nullptr) {
		return true;
	}
	$var($WEmbeddedFramePeer, peer, $cast($WEmbeddedFramePeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(c)));
	return $nc(peer)->isAccelCapable();
}

void WComponentPeer::applyShape($Region* shape$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Region, shape, shape$renamed);
	$init($PlatformLogger$Level);
	if ($nc(WComponentPeer::shapeLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(WComponentPeer::shapeLog)->finer($$str({"*** INFO: Setting shape: PEER: "_s, this, "; TARGET: "_s, this->target, "; SHAPE: "_s, shape}));
	}
	if (shape != nullptr) {
		$var($AffineTransform, tx, $nc(this->winGraphicsConfig)->getDefaultTransform());
		double scaleX = $nc(tx)->getScaleX();
		double scaleY = tx->getScaleY();
		if (scaleX != 1 || scaleY != 1) {
			$assign(shape, shape->getScaledRegion(scaleX, scaleY));
		}
		int32_t var$0 = shape->getLoX();
		int32_t var$1 = shape->getLoY();
		int32_t var$2 = shape->getHiX();
		int32_t var$3 = shape->getHiY();
		setRectangularShape(var$0, var$1, var$2, var$3, (shape->isRectangular() ? ($Region*)nullptr : shape));
	} else {
		setRectangularShape(0, 0, 0, 0, nullptr);
	}
}

void WComponentPeer::setZOrder($ComponentPeer* above) {
	int64_t aboveHWND = (above != nullptr) ? $nc(($cast(WComponentPeer, above)))->getHWnd() : (int64_t)0;
	setZOrder(aboveHWND);
}

void WComponentPeer::setZOrder(int64_t above) {
	$prepareNative(WComponentPeer, setZOrder, void, int64_t above);
	$invokeNative(WComponentPeer, setZOrder, above);
	$finishNative();
}

bool WComponentPeer::isLightweightFramePeer() {
	return false;
}

$Object* WComponentPeer::getTarget() {
	return $of($WObjectPeer::getTarget());
}

int64_t WComponentPeer::getData() {
	return $WObjectPeer::getData();
}

void clinit$WComponentPeer($Class* class$) {
	WComponentPeer::BANDING_DIVISOR = 4.0;
	$assignStatic(WComponentPeer::log, $PlatformLogger::getLogger("sun.awt.windows.WComponentPeer"_s));
	$assignStatic(WComponentPeer::shapeLog, $PlatformLogger::getLogger("sun.awt.windows.shape.WComponentPeer"_s));
	$assignStatic(WComponentPeer::focusLog, $PlatformLogger::getLogger("sun.awt.windows.focus.WComponentPeer"_s));
	$init($Font);
	$assignStatic(WComponentPeer::defaultFont, $new($Font, $Font::DIALOG, $Font::PLAIN, 12));
}

WComponentPeer::WComponentPeer() {
}

$Class* WComponentPeer::load$($String* name, bool initialize) {
	$loadClass(WComponentPeer, name, initialize, &_WComponentPeer_ClassInfo_, clinit$WComponentPeer, allocate$WComponentPeer);
	return class$;
}

$Class* WComponentPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun