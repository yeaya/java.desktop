#include <sun/awt/windows/WWindowPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window$Type.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$FrameAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/TimedWindowEvent.h>
#include <sun/awt/Win32GraphicsConfig.h>
#include <sun/awt/Win32GraphicsDevice.h>
#include <sun/awt/Win32GraphicsEnvironment.h>
#include <sun/awt/windows/TranslucentWindowPainter.h>
#include <sun/awt/windows/WCanvasPeer.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WFileDialogPeer.h>
#include <sun/awt/windows/WPanelPeer.h>
#include <sun/awt/windows/WPrintDialogPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/awt/windows/WWindowPeer$ActiveWindowListener.h>
#include <sun/awt/windows/WWindowPeer$GuiDisposedListener.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACTIVE_WINDOWS_KEY
#undef FINE
#undef FINER
#undef GUI_DISPOSED
#undef ICONIFIED
#undef MOUSE_EVENT
#undef NORMAL
#undef WINDOW_CLOSING
#undef WINDOW_DEICONIFIED
#undef WINDOW_ICONIFIED
#undef WINDOW_STATE_CHANGED

using $ComponentArray = $Array<::java::awt::Component>;
using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $SystemColor = ::java::awt::SystemColor;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $Window$Type = ::java::awt::Window$Type;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $WindowListener = ::java::awt::event::WindowListener;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $WindowPeer = ::java::awt::peer::WindowPeer;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $StringBuffer = ::java::lang::StringBuffer;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$FrameAccessor = ::sun::awt::AWTAccessor$FrameAccessor;
using $AppContext = ::sun::awt::AppContext;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $SunToolkit = ::sun::awt::SunToolkit;
using $TimedWindowEvent = ::sun::awt::TimedWindowEvent;
using $Win32GraphicsConfig = ::sun::awt::Win32GraphicsConfig;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;
using $Win32GraphicsEnvironment = ::sun::awt::Win32GraphicsEnvironment;
using $TranslucentWindowPainter = ::sun::awt::windows::TranslucentWindowPainter;
using $WCanvasPeer = ::sun::awt::windows::WCanvasPeer;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WFileDialogPeer = ::sun::awt::windows::WFileDialogPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WPanelPeer = ::sun::awt::windows::WPanelPeer;
using $WPrintDialogPeer = ::sun::awt::windows::WPrintDialogPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $WWindowPeer$ActiveWindowListener = ::sun::awt::windows::WWindowPeer$ActiveWindowListener;
using $WWindowPeer$GuiDisposedListener = ::sun::awt::windows::WWindowPeer$GuiDisposedListener;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $Region = ::sun::java2d::pipe::Region;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace windows {

class WWindowPeer$$Lambda$updateGC : public $Runnable {
	$class(WWindowPeer$$Lambda$updateGC, $NO_CLASS_INIT, $Runnable)
public:
	void init$(WWindowPeer* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->updateGC();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WWindowPeer$$Lambda$updateGC>());
	}
	WWindowPeer* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WWindowPeer$$Lambda$updateGC::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WWindowPeer$$Lambda$updateGC, inst$)},
	{}
};
$MethodInfo WWindowPeer$$Lambda$updateGC::methodInfos[3] = {
	{"<init>", "(Lsun/awt/windows/WWindowPeer;)V", nullptr, $PUBLIC, $method(static_cast<void(WWindowPeer$$Lambda$updateGC::*)(WWindowPeer*)>(&WWindowPeer$$Lambda$updateGC::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo WWindowPeer$$Lambda$updateGC::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.windows.WWindowPeer$$Lambda$updateGC",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* WWindowPeer$$Lambda$updateGC::load$($String* name, bool initialize) {
	$loadClass(WWindowPeer$$Lambda$updateGC, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WWindowPeer$$Lambda$updateGC::class$ = nullptr;

$FieldInfo _WWindowPeer_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WWindowPeer, log)},
	{"screenLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WWindowPeer, screenLog)},
	{"modalBlocker", "Lsun/awt/windows/WWindowPeer;", nullptr, $PRIVATE, $field(WWindowPeer, modalBlocker)},
	{"isOpaque", "Z", nullptr, $PRIVATE, $field(WWindowPeer, isOpaque)},
	{"painter", "Lsun/awt/windows/TranslucentWindowPainter;", nullptr, $PRIVATE, $field(WWindowPeer, painter)},
	{"ACTIVE_WINDOWS_KEY", "Ljava/lang/StringBuffer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WWindowPeer, ACTIVE_WINDOWS_KEY)},
	{"activeWindowListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $STATIC, $staticField(WWindowPeer, activeWindowListener)},
	{"guiDisposedListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WWindowPeer, guiDisposedListener)},
	{"windowListener", "Ljava/awt/event/WindowListener;", nullptr, $PRIVATE, $field(WWindowPeer, windowListener)},
	{"windowType", "Ljava/awt/Window$Type;", nullptr, $PRIVATE | $VOLATILE, $field(WWindowPeer, windowType)},
	{"opacity", "F", nullptr, $PRIVATE, $field(WWindowPeer, opacity)},
	{}
};

$MethodInfo _WWindowPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"*beginLayout", "()V", nullptr, $PUBLIC},
	{"*beginValidate", "()V", nullptr, $PUBLIC | $NATIVE},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*endLayout", "()V", nullptr, $PUBLIC},
	{"*endValidate", "()V", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $NATIVE},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Window;)V", nullptr, 0, $method(static_cast<void(WWindowPeer::*)($Window*)>(&WWindowPeer::init$))},
	{"_setResizable", "(Z)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WWindowPeer::*)(bool)>(&WWindowPeer::_setResizable))},
	{"_setTitle", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WWindowPeer::*)($String*)>(&WWindowPeer::_setTitle))},
	{"_toFront", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WWindowPeer::*)()>(&WWindowPeer::_toFront))},
	{"addWindowListener", "(Ljava/awt/event/WindowListener;)V", nullptr, $SYNCHRONIZED},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, 0},
	{"createAwtWindow", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $NATIVE},
	{"displayChanged", "()V", nullptr, $PUBLIC},
	{"disposeImpl", "()V", nullptr, $PROTECTED},
	{"draggedToNewScreen", "()V", nullptr, 0},
	{"focusAllowedFor", "()Z", nullptr, $PUBLIC},
	{"getActiveWindowHandles", "(Ljava/awt/Component;)[J", nullptr, $PUBLIC | $STATIC, $method(static_cast<$longs*(*)($Component*)>(&WWindowPeer::getActiveWindowHandles))},
	{"getAppropriateGraphicsConfiguration", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getNativeParent", "()Lsun/awt/windows/WComponentPeer;", nullptr, $FINAL},
	{"getNativeWindowSize", "()Ljava/awt/Dimension;", nullptr, $NATIVE},
	{"getScaledWindowSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getScreenImOn", "()I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(WWindowPeer::*)()>(&WWindowPeer::getScreenImOn))},
	{"getSysIconHeight", "()I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&WWindowPeer::getSysIconHeight))},
	{"getSysIconWidth", "()I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&WWindowPeer::getSysIconWidth))},
	{"getSysMinHeight", "()I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&WWindowPeer::getSysMinHeight))},
	{"getSysMinWidth", "()I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&WWindowPeer::getSysMinWidth))},
	{"getSysSmIconHeight", "()I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&WWindowPeer::getSysSmIconHeight))},
	{"getSysSmIconWidth", "()I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&WWindowPeer::getSysSmIconWidth))},
	{"getTranslucentGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Graphics*(WWindowPeer::*)()>(&WWindowPeer::getTranslucentGraphics))},
	{"grab", "()V", nullptr, $PUBLIC},
	{"hasWarningWindow", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(WWindowPeer::*)()>(&WWindowPeer::hasWarningWindow))},
	{"hide", "()V", nullptr, 0},
	{"initActiveWindowsTracking", "(Ljava/awt/Window;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Window*)>(&WWindowPeer::initActiveWindowsTracking))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WWindowPeer::initIDs))},
	{"initialize", "()V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"isModalBlocked", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"isTargetUndecorated", "()Z", nullptr, 0},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"modalDisable", "(Ljava/awt/Dialog;J)V", nullptr, $NATIVE},
	{"modalEnable", "(Ljava/awt/Dialog;)V", nullptr, $NATIVE},
	{"nativeGrab", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WWindowPeer::*)()>(&WWindowPeer::nativeGrab))},
	{"nativeUngrab", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WWindowPeer::*)()>(&WWindowPeer::nativeUngrab))},
	{"notifyWindowStateChanged", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(WWindowPeer::*)(int32_t,int32_t)>(&WWindowPeer::notifyWindowStateChanged))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"paletteChanged", "()V", nullptr, $PUBLIC},
	{"preCreate", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, 0},
	{"preprocessPostEvent", "(Ljava/awt/AWTEvent;)V", nullptr, 0},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"realShow", "()V", nullptr, $PROTECTED},
	{"removeWindowListener", "(Ljava/awt/event/WindowListener;)V", nullptr, $SYNCHRONIZED},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"replaceSurfaceDataRecursively", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(WWindowPeer::*)($Component*)>(&WWindowPeer::replaceSurfaceDataRecursively))},
	{"repositionSecurityWarning", "()V", nullptr, $PUBLIC | $NATIVE},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"requestWindowFocus", "(Ljava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"requestWindowFocus", "(Z)Z", nullptr, $PRIVATE | $NATIVE, $method(static_cast<bool(WWindowPeer::*)(bool)>(&WWindowPeer::requestWindowFocus))},
	{"reshapeFrame", "(IIII)V", nullptr, $SYNCHRONIZED | $NATIVE},
	{"setAlwaysOnTop", "(Z)V", nullptr, $PUBLIC},
	{"setAlwaysOnTopNative", "(Z)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WWindowPeer::*)(bool)>(&WWindowPeer::setAlwaysOnTopNative))},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFocusableWindow", "(Z)V", nullptr, $NATIVE},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setFullScreenExclusiveModeState", "(Z)V", nullptr, $PUBLIC | $FINAL | $NATIVE, $method(static_cast<void(WWindowPeer::*)(bool)>(&WWindowPeer::setFullScreenExclusiveModeState))},
	{"setIconImagesData", "([III[III)V", nullptr, $NATIVE},
	{"setMinSize", "(II)V", nullptr, $NATIVE},
	{"setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"setOpacity", "(I)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WWindowPeer::*)(int32_t)>(&WWindowPeer::setOpacity))},
	{"setOpacity", "(F)V", nullptr, $PUBLIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"setOpaqueImpl", "(Z)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WWindowPeer::*)(bool)>(&WWindowPeer::setOpaqueImpl))},
	{"setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"shouldClearRectBeforePaint", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"show", "()V", nullptr, $PUBLIC},
	{"syncBounds", "()V", nullptr, $FINAL},
	{"toBack", "()V", nullptr, $PUBLIC | $NATIVE},
	{"toFront", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"ungrab", "()V", nullptr, $PUBLIC},
	{"updateAlwaysOnTopState", "()V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"updateGC", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"updateIconImages", "()V", nullptr, $PUBLIC},
	{"updateInsets", "(Ljava/awt/Insets;)V", nullptr, $NATIVE},
	{"updateMinimumSize", "()V", nullptr, $PUBLIC},
	{"updateWindow", "()V", nullptr, $PUBLIC},
	{"updateWindow", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(WWindowPeer::*)(bool)>(&WWindowPeer::updateWindow))},
	{"updateWindowImpl", "([III)V", nullptr, $NATIVE},
	{}
};

#define _METHOD_INDEX__setResizable 28
#define _METHOD_INDEX__setTitle 29
#define _METHOD_INDEX__toFront 30
#define _METHOD_INDEX_createAwtWindow 33
#define _METHOD_INDEX_getNativeWindowSize 42
#define _METHOD_INDEX_getScreenImOn 44
#define _METHOD_INDEX_getSysIconHeight 45
#define _METHOD_INDEX_getSysIconWidth 46
#define _METHOD_INDEX_getSysMinHeight 47
#define _METHOD_INDEX_getSysMinWidth 48
#define _METHOD_INDEX_getSysSmIconHeight 49
#define _METHOD_INDEX_getSysSmIconWidth 50
#define _METHOD_INDEX_initIDs 56
#define _METHOD_INDEX_modalDisable 64
#define _METHOD_INDEX_modalEnable 65
#define _METHOD_INDEX_nativeGrab 66
#define _METHOD_INDEX_nativeUngrab 67
#define _METHOD_INDEX_repositionSecurityWarning 78
#define _METHOD_INDEX_requestWindowFocus 81
#define _METHOD_INDEX_reshapeFrame 82
#define _METHOD_INDEX_setAlwaysOnTopNative 84
#define _METHOD_INDEX_setFocusableWindow 88
#define _METHOD_INDEX_setFullScreenExclusiveModeState 91
#define _METHOD_INDEX_setIconImagesData 92
#define _METHOD_INDEX_setMinSize 93
#define _METHOD_INDEX_setOpacity 95
#define _METHOD_INDEX_setOpaqueImpl 98
#define _METHOD_INDEX_toBack 106
#define _METHOD_INDEX_updateInsets 116
#define _METHOD_INDEX_updateWindowImpl 120

$InnerClassInfo _WWindowPeer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WWindowPeer$ActiveWindowListener", "sun.awt.windows.WWindowPeer", "ActiveWindowListener", $PRIVATE | $STATIC},
	{"sun.awt.windows.WWindowPeer$GuiDisposedListener", "sun.awt.windows.WWindowPeer", "GuiDisposedListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WWindowPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.windows.WWindowPeer",
	"sun.awt.windows.WPanelPeer",
	"java.awt.peer.WindowPeer,sun.awt.DisplayChangedListener",
	_WWindowPeer_FieldInfo_,
	_WWindowPeer_MethodInfo_,
	nullptr,
	nullptr,
	_WWindowPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WWindowPeer$ActiveWindowListener,sun.awt.windows.WWindowPeer$GuiDisposedListener"
};

$Object* allocate$WWindowPeer($Class* clazz) {
	return $of($alloc(WWindowPeer));
}

bool WWindowPeer::isObscured() {
	 return this->$WPanelPeer::isObscured();
}

bool WWindowPeer::canDetermineObscurity() {
	 return this->$WPanelPeer::canDetermineObscurity();
}

$Point* WWindowPeer::getLocationOnScreen() {
	 return this->$WPanelPeer::getLocationOnScreen();
}

void WWindowPeer::setVisible(bool b) {
	this->$WPanelPeer::setVisible(b);
}

void WWindowPeer::setEnabled(bool b) {
	this->$WPanelPeer::setEnabled(b);
}

void WWindowPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WPanelPeer::setBounds(x, y, width, height, op);
}

void WWindowPeer::coalescePaintEvent($PaintEvent* e) {
	this->$WPanelPeer::coalescePaintEvent(e);
}

void WWindowPeer::handleEvent($AWTEvent* e) {
	this->$WPanelPeer::handleEvent(e);
}

$Dimension* WWindowPeer::getMinimumSize() {
	 return this->$WPanelPeer::getMinimumSize();
}

$Dimension* WWindowPeer::getPreferredSize() {
	 return this->$WPanelPeer::getPreferredSize();
}

void WWindowPeer::layout() {
	this->$WPanelPeer::layout();
}

bool WWindowPeer::isFocusable() {
	 return this->$WPanelPeer::isFocusable();
}

$GraphicsConfiguration* WWindowPeer::getGraphicsConfiguration() {
	 return this->$WPanelPeer::getGraphicsConfiguration();
}

bool WWindowPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WPanelPeer::updateGraphicsData(gc);
}

$ColorModel* WWindowPeer::getColorModel() {
	 return this->$WPanelPeer::getColorModel();
}

$Graphics* WWindowPeer::getGraphics() {
	 return this->$WPanelPeer::getGraphics();
}

$FontMetrics* WWindowPeer::getFontMetrics($Font* font) {
	 return this->$WPanelPeer::getFontMetrics(font);
}

void WWindowPeer::setForeground($Color* c) {
	this->$WPanelPeer::setForeground(c);
}

void WWindowPeer::setFont($Font* f) {
	this->$WPanelPeer::setFont(f);
}

void WWindowPeer::updateCursorImmediately() {
	this->$WPanelPeer::updateCursorImmediately();
}

bool WWindowPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WPanelPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WWindowPeer::createImage(int32_t width, int32_t height) {
	 return this->$WPanelPeer::createImage(width, height);
}

$VolatileImage* WWindowPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WPanelPeer::createVolatileImage(width, height);
}

$String* WWindowPeer::toString() {
	 return this->$WPanelPeer::toString();
}

void WWindowPeer::beginLayout() {
	this->$WPanelPeer::beginLayout();
}

void WWindowPeer::endLayout() {
	this->$WPanelPeer::endLayout();
}

void WWindowPeer::beginValidate() {
	this->$WPanelPeer::beginValidate();
}

void WWindowPeer::endValidate() {
	this->$WPanelPeer::endValidate();
}

bool WWindowPeer::handlesWheelScrolling() {
	 return this->$WPanelPeer::handlesWheelScrolling();
}

void WWindowPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WPanelPeer::createBuffers(numBuffers, caps);
}

void WWindowPeer::destroyBuffers() {
	this->$WPanelPeer::destroyBuffers();
}

void WWindowPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WPanelPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WWindowPeer::getBackBuffer() {
	 return this->$WPanelPeer::getBackBuffer();
}

void WWindowPeer::reparent($ContainerPeer* newNativeParent) {
	this->$WPanelPeer::reparent(newNativeParent);
}

bool WWindowPeer::isReparentSupported() {
	 return this->$WPanelPeer::isReparentSupported();
}

void WWindowPeer::applyShape($Region* shape) {
	this->$WPanelPeer::applyShape(shape);
}

void WWindowPeer::setZOrder($ComponentPeer* above) {
	this->$WPanelPeer::setZOrder(above);
}

void WWindowPeer::dispose() {
	this->$WPanelPeer::dispose();
}

int32_t WWindowPeer::hashCode() {
	 return this->$WPanelPeer::hashCode();
}

bool WWindowPeer::equals(Object$* arg0) {
	 return this->$WPanelPeer::equals(arg0);
}

$Object* WWindowPeer::clone() {
	 return this->$WPanelPeer::clone();
}

void WWindowPeer::finalize() {
	this->$WPanelPeer::finalize();
}

$PlatformLogger* WWindowPeer::log = nullptr;
$PlatformLogger* WWindowPeer::screenLog = nullptr;
$StringBuffer* WWindowPeer::ACTIVE_WINDOWS_KEY = nullptr;
$PropertyChangeListener* WWindowPeer::activeWindowListener = nullptr;
$PropertyChangeListener* WWindowPeer::guiDisposedListener = nullptr;

void WWindowPeer::initIDs() {
	$init(WWindowPeer);
	$prepareNativeStatic(WWindowPeer, initIDs, void);
	$invokeNativeStatic(WWindowPeer, initIDs);
	$finishNativeStatic();
}

void WWindowPeer::disposeImpl() {
	$var($AppContext, appContext, $SunToolkit::targetToAppContext(this->target));
	$synchronized(appContext) {
		$var($List, l, $cast($List, $nc(appContext)->get(WWindowPeer::ACTIVE_WINDOWS_KEY)));
		if (l != nullptr) {
			l->remove($of(this));
		}
	}
	$var($GraphicsConfiguration, gc, getGraphicsConfiguration());
	$nc(($cast($Win32GraphicsDevice, $($nc(gc)->getDevice()))))->removeDisplayChangedListener(this);
	$synchronized(getStateLock()) {
		$var($TranslucentWindowPainter, currentPainter, this->painter);
		if (currentPainter != nullptr) {
			currentPainter->flush();
		}
	}
	$WPanelPeer::disposeImpl();
}

void WWindowPeer::toFront() {
	updateFocusableWindowState();
	_toFront();
}

void WWindowPeer::_toFront() {
	$prepareNative(WWindowPeer, _toFront, void);
	$invokeNative(WWindowPeer, _toFront);
	$finishNative();
}

void WWindowPeer::toBack() {
	$prepareNative(WWindowPeer, toBack, void);
	$invokeNative(WWindowPeer, toBack);
	$finishNative();
}

void WWindowPeer::setAlwaysOnTopNative(bool value) {
	$prepareNative(WWindowPeer, setAlwaysOnTopNative, void, bool value);
	$invokeNative(WWindowPeer, setAlwaysOnTopNative, value);
	$finishNative();
}

void WWindowPeer::setAlwaysOnTop(bool value) {
	if ((value && $nc(($cast($Window, this->target)))->isVisible()) || !value) {
		setAlwaysOnTopNative(value);
	}
}

void WWindowPeer::updateAlwaysOnTopState() {
	setAlwaysOnTop($nc(($cast($Window, this->target)))->isAlwaysOnTop());
}

void WWindowPeer::updateFocusableWindowState() {
	setFocusableWindow($nc(($cast($Window, this->target)))->isFocusableWindow());
}

void WWindowPeer::setFocusableWindow(bool value) {
	$prepareNative(WWindowPeer, setFocusableWindow, void, bool value);
	$invokeNative(WWindowPeer, setFocusableWindow, value);
	$finishNative();
}

void WWindowPeer::setTitle($String* title$renamed) {
	$var($String, title, title$renamed);
	if (title == nullptr) {
		$assign(title, ""_s);
	}
	_setTitle(title);
}

void WWindowPeer::_setTitle($String* title) {
	$prepareNative(WWindowPeer, _setTitle, void, $String* title);
	$invokeNative(WWindowPeer, _setTitle, title);
	$finishNative();
}

void WWindowPeer::setResizable(bool resizable) {
	_setResizable(resizable);
}

void WWindowPeer::_setResizable(bool resizable) {
	$prepareNative(WWindowPeer, _setResizable, void, bool resizable);
	$invokeNative(WWindowPeer, _setResizable, resizable);
	$finishNative();
}

void WWindowPeer::init$($Window* target) {
	$WPanelPeer::init$(target);
	$set(this, modalBlocker, nullptr);
	$init($Window$Type);
	$set(this, windowType, $Window$Type::NORMAL);
	this->opacity = 1.0f;
}

void WWindowPeer::initialize() {
	$WPanelPeer::initialize();
	updateInsets(this->insets_);
	if (!$nc(($cast($Window, this->target)))->isFontSet()) {
		$init($WComponentPeer);
		$nc(($cast($Window, this->target)))->setFont($WComponentPeer::defaultFont);
		setFont($WComponentPeer::defaultFont);
	}
	if (!$nc(($cast($Window, this->target)))->isForegroundSet()) {
		$init($SystemColor);
		$nc(($cast($Window, this->target)))->setForeground($SystemColor::windowText);
	}
	if (!$nc(($cast($Window, this->target)))->isBackgroundSet()) {
		$init($SystemColor);
		$nc(($cast($Window, this->target)))->setBackground($SystemColor::window);
	}
	$var($GraphicsConfiguration, gc, getGraphicsConfiguration());
	$var($Win32GraphicsDevice, gd, $cast($Win32GraphicsDevice, $nc(gc)->getDevice()));
	$nc(gd)->addDisplayChangedListener(this);
	initActiveWindowsTracking($cast($Window, this->target));
	updateIconImages();
	$var($Shape, shape, $nc(($cast($Window, this->target)))->getShape());
	if (shape != nullptr) {
		applyShape($($Region::getInstance(shape, ($AffineTransform*)nullptr)));
	}
	float opacity = $nc(($cast($Window, this->target)))->getOpacity();
	if (opacity < 1.0f) {
		setOpacity(opacity);
	}
	$synchronized(getStateLock()) {
		this->isOpaque = true;
		setOpaque($nc(($cast($Window, this->target)))->isOpaque());
	}
}

void WWindowPeer::createAwtWindow($WComponentPeer* parent) {
	$prepareNative(WWindowPeer, createAwtWindow, void, $WComponentPeer* parent);
	$invokeNative(WWindowPeer, createAwtWindow, parent);
	$finishNative();
}

void WWindowPeer::preCreate($WComponentPeer* parent) {
	$set(this, windowType, $nc(($cast($Window, this->target)))->getType());
}

void WWindowPeer::create($WComponentPeer* parent) {
	preCreate(parent);
	createAwtWindow(parent);
}

$WComponentPeer* WWindowPeer::getNativeParent() {
	$var($Container, owner, $nc(($cast($Window, this->target)))->getOwner());
	return $cast($WComponentPeer, $WToolkit::targetToPeer(owner));
}

void WWindowPeer::realShow() {
	$WPanelPeer::show();
}

void WWindowPeer::show() {
	updateFocusableWindowState();
	bool alwaysOnTop = $nc(($cast($Window, this->target)))->isAlwaysOnTop();
	updateGC();
	realShow();
	updateMinimumSize();
	if ($nc(($cast($Window, this->target)))->isAlwaysOnTopSupported() && alwaysOnTop) {
		setAlwaysOnTop(alwaysOnTop);
	}
	$synchronized(getStateLock()) {
		if (!this->isOpaque) {
			updateWindow(true);
		}
	}
	$var($WComponentPeer, owner, getNativeParent());
	if (owner != nullptr && owner->isLightweightFramePeer()) {
		$var($Rectangle, b, getBounds());
		handleExpose(0, 0, $nc(b)->width, b->height);
	}
}

void WWindowPeer::syncBounds() {
}

void WWindowPeer::updateInsets($Insets* i) {
	$prepareNative(WWindowPeer, updateInsets, void, $Insets* i);
	$invokeNative(WWindowPeer, updateInsets, i);
	$finishNative();
}

int32_t WWindowPeer::getSysMinWidth() {
	$init(WWindowPeer);
	int32_t $ret = 0;
	$prepareNativeStatic(WWindowPeer, getSysMinWidth, int32_t);
	$ret = $invokeNativeStatic(WWindowPeer, getSysMinWidth);
	$finishNativeStatic();
	return $ret;
}

int32_t WWindowPeer::getSysMinHeight() {
	$init(WWindowPeer);
	int32_t $ret = 0;
	$prepareNativeStatic(WWindowPeer, getSysMinHeight, int32_t);
	$ret = $invokeNativeStatic(WWindowPeer, getSysMinHeight);
	$finishNativeStatic();
	return $ret;
}

int32_t WWindowPeer::getSysIconWidth() {
	$init(WWindowPeer);
	int32_t $ret = 0;
	$prepareNativeStatic(WWindowPeer, getSysIconWidth, int32_t);
	$ret = $invokeNativeStatic(WWindowPeer, getSysIconWidth);
	$finishNativeStatic();
	return $ret;
}

int32_t WWindowPeer::getSysIconHeight() {
	$init(WWindowPeer);
	int32_t $ret = 0;
	$prepareNativeStatic(WWindowPeer, getSysIconHeight, int32_t);
	$ret = $invokeNativeStatic(WWindowPeer, getSysIconHeight);
	$finishNativeStatic();
	return $ret;
}

int32_t WWindowPeer::getSysSmIconWidth() {
	$init(WWindowPeer);
	int32_t $ret = 0;
	$prepareNativeStatic(WWindowPeer, getSysSmIconWidth, int32_t);
	$ret = $invokeNativeStatic(WWindowPeer, getSysSmIconWidth);
	$finishNativeStatic();
	return $ret;
}

int32_t WWindowPeer::getSysSmIconHeight() {
	$init(WWindowPeer);
	int32_t $ret = 0;
	$prepareNativeStatic(WWindowPeer, getSysSmIconHeight, int32_t);
	$ret = $invokeNativeStatic(WWindowPeer, getSysSmIconHeight);
	$finishNativeStatic();
	return $ret;
}

void WWindowPeer::setIconImagesData($ints* iconRaster, int32_t w, int32_t h, $ints* smallIconRaster, int32_t smw, int32_t smh) {
	$prepareNative(WWindowPeer, setIconImagesData, void, $ints* iconRaster, int32_t w, int32_t h, $ints* smallIconRaster, int32_t smw, int32_t smh);
	$invokeNative(WWindowPeer, setIconImagesData, iconRaster, w, h, smallIconRaster, smw, smh);
	$finishNative();
}

void WWindowPeer::reshapeFrame(int32_t x, int32_t y, int32_t width, int32_t height) {
	$prepareNative(WWindowPeer, reshapeFrame, void, int32_t x, int32_t y, int32_t width, int32_t height);
	$invokeNative(WWindowPeer, reshapeFrame, x, y, width, height);
	$finishNative();
}

$Dimension* WWindowPeer::getNativeWindowSize() {
	$var($Dimension, $ret, nullptr);
	$prepareNative(WWindowPeer, getNativeWindowSize, $Dimension*);
	$assign($ret, $invokeNative(WWindowPeer, getNativeWindowSize));
	$finishNative();
	return $ret;
}

$Dimension* WWindowPeer::getScaledWindowSize() {
	return getNativeWindowSize();
}

bool WWindowPeer::requestWindowFocus($FocusEvent$Cause* cause) {
	if (!focusAllowedFor()) {
		return false;
	}
	$init($FocusEvent$Cause);
	return requestWindowFocus(cause == $FocusEvent$Cause::MOUSE_EVENT);
}

bool WWindowPeer::requestWindowFocus(bool isMouseEventCause) {
	bool $ret = false;
	$prepareNative(WWindowPeer, requestWindowFocus, bool, bool isMouseEventCause);
	$ret = $invokeNative(WWindowPeer, requestWindowFocus, isMouseEventCause);
	$finishNative();
	return $ret;
}

bool WWindowPeer::focusAllowedFor() {
	$var($Window, window, $cast($Window, this->target));
	bool var$1 = !$nc(window)->isVisible();
	bool var$0 = var$1 || !$nc(window)->isEnabled();
	if (var$0 || !$nc(window)->isFocusableWindow()) {
		return false;
	}
	if (isModalBlocked()) {
		return false;
	}
	return true;
}

void WWindowPeer::hide() {
	$var($WindowListener, listener, this->windowListener);
	if (listener != nullptr) {
		listener->windowClosing($$new($WindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_CLOSING));
	}
	$WPanelPeer::hide();
}

void WWindowPeer::preprocessPostEvent($AWTEvent* event) {
	if ($instanceOf($WindowEvent, event)) {
		$var($WindowListener, listener, this->windowListener);
		if (listener != nullptr) {
			switch ($nc(event)->getID()) {
			case $WindowEvent::WINDOW_CLOSING:
				{
					listener->windowClosing($cast($WindowEvent, event));
					break;
				}
			case $WindowEvent::WINDOW_ICONIFIED:
				{
					listener->windowIconified($cast($WindowEvent, event));
					break;
				}
			}
		}
	}
}

void WWindowPeer::notifyWindowStateChanged(int32_t oldState, int32_t newState) {
	int32_t changed = oldState ^ newState;
	if (changed == 0) {
		return;
	}
	$init($PlatformLogger$Level);
	if ($nc(WWindowPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(WWindowPeer::log)->fine("Reporting state change %x -> %x"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(oldState))),
			$($of($Integer::valueOf(newState)))
		}));
	}
	if ($instanceOf($Frame, this->target)) {
		$nc($($AWTAccessor::getFrameAccessor()))->setExtendedState($cast($Frame, this->target), newState);
	}
	if (((int32_t)(changed & (uint32_t)$Frame::ICONIFIED)) > 0) {
		if (((int32_t)(newState & (uint32_t)$Frame::ICONIFIED)) > 0) {
			postEvent($$new($TimedWindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_ICONIFIED, nullptr, 0, 0, $System::currentTimeMillis()));
		} else {
			postEvent($$new($TimedWindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_DEICONIFIED, nullptr, 0, 0, $System::currentTimeMillis()));
		}
	}
	postEvent($$new($TimedWindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_STATE_CHANGED, nullptr, oldState, newState, $System::currentTimeMillis()));
}

void WWindowPeer::addWindowListener($WindowListener* l) {
	$synchronized(this) {
		$set(this, windowListener, $AWTEventMulticaster::add(this->windowListener, l));
	}
}

void WWindowPeer::removeWindowListener($WindowListener* l) {
	$synchronized(this) {
		$set(this, windowListener, $AWTEventMulticaster::remove(this->windowListener, l));
	}
}

void WWindowPeer::updateMinimumSize() {
	$var($Dimension, minimumSize, nullptr);
	if ($nc(($cast($Component, this->target)))->isMinimumSizeSet()) {
		$assign(minimumSize, $nc(($cast($Component, this->target)))->getMinimumSize());
	}
	if (minimumSize != nullptr) {
		$var($GraphicsConfiguration, var$0, getGraphicsConfiguration());
		int32_t var$1 = getSysMinWidth();
		$var($Dimension, sysMin, $SunGraphicsEnvironment::toUserSpace(var$0, var$1, getSysMinHeight()));
		int32_t var$2 = $Math::max(minimumSize->width, $nc(sysMin)->width);
		setMinSize(var$2, $Math::max(minimumSize->height, $nc(sysMin)->height));
	} else {
		setMinSize(0, 0);
	}
}

void WWindowPeer::updateIconImages() {
	$var($List, imageList, $nc(($cast($Window, this->target)))->getIconImages());
	if (imageList == nullptr || $nc(imageList)->size() == 0) {
		setIconImagesData(nullptr, 0, 0, nullptr, 0, 0);
	} else {
		int32_t w = getSysIconWidth();
		int32_t h = getSysIconHeight();
		int32_t smw = getSysSmIconWidth();
		int32_t smh = getSysSmIconHeight();
		$var($AffineTransform, tx, $nc($(getGraphicsConfiguration()))->getDefaultTransform());
		w = $Region::clipScale(w, $nc(tx)->getScaleX());
		h = $Region::clipScale(h, $nc(tx)->getScaleY());
		smw = $Region::clipScale(smw, $nc(tx)->getScaleX());
		smh = $Region::clipScale(smh, $nc(tx)->getScaleY());
		$var($DataBufferInt, iconData, $SunToolkit::getScaledIconData(imageList, w, h));
		$var($DataBufferInt, iconSmData, $SunToolkit::getScaledIconData(imageList, smw, smh));
		if (iconData != nullptr && iconSmData != nullptr) {
			$var($ints, var$0, iconData->getData());
			int32_t var$1 = w;
			int32_t var$2 = h;
			setIconImagesData(var$0, var$1, var$2, $(iconSmData->getData()), smw, smh);
		} else {
			setIconImagesData(nullptr, 0, 0, nullptr, 0, 0);
		}
	}
}

void WWindowPeer::setMinSize(int32_t width, int32_t height) {
	$prepareNative(WWindowPeer, setMinSize, void, int32_t width, int32_t height);
	$invokeNative(WWindowPeer, setMinSize, width, height);
	$finishNative();
}

bool WWindowPeer::isModalBlocked() {
	return this->modalBlocker != nullptr;
}

void WWindowPeer::setModalBlocked($Dialog* dialog, bool blocked) {
	$synchronized($nc(($cast($Component, $(getTarget()))))->getTreeLock()) {
		$var(WWindowPeer, blockerPeer, $cast(WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(dialog)));
		if (blocked) {
			$set(this, modalBlocker, blockerPeer);
			if ($instanceOf($WFileDialogPeer, blockerPeer)) {
				$nc(($cast($WFileDialogPeer, blockerPeer)))->blockWindow(this);
			} else if ($instanceOf($WPrintDialogPeer, blockerPeer)) {
				$nc(($cast($WPrintDialogPeer, blockerPeer)))->blockWindow(this);
			} else {
				modalDisable(dialog, $nc(blockerPeer)->getHWnd());
			}
		} else {
			$set(this, modalBlocker, nullptr);
			if ($instanceOf($WFileDialogPeer, blockerPeer)) {
				$nc(($cast($WFileDialogPeer, blockerPeer)))->unblockWindow(this);
			} else if ($instanceOf($WPrintDialogPeer, blockerPeer)) {
				$nc(($cast($WPrintDialogPeer, blockerPeer)))->unblockWindow(this);
			} else {
				modalEnable(dialog);
			}
		}
	}
}

void WWindowPeer::modalDisable($Dialog* blocker, int64_t blockerHWnd) {
	$prepareNative(WWindowPeer, modalDisable, void, $Dialog* blocker, int64_t blockerHWnd);
	$invokeNative(WWindowPeer, modalDisable, blocker, blockerHWnd);
	$finishNative();
}

void WWindowPeer::modalEnable($Dialog* blocker) {
	$prepareNative(WWindowPeer, modalEnable, void, $Dialog* blocker);
	$invokeNative(WWindowPeer, modalEnable, blocker);
	$finishNative();
}

$longs* WWindowPeer::getActiveWindowHandles($Component* target) {
	$init(WWindowPeer);
	$var($AppContext, appContext, $SunToolkit::targetToAppContext(target));
	if (appContext == nullptr) {
		return nullptr;
	}
	$synchronized(appContext) {
		$var($List, l, $cast($List, $nc(appContext)->get(WWindowPeer::ACTIVE_WINDOWS_KEY)));
		if (l == nullptr) {
			return nullptr;
		}
		$var($longs, result, $new($longs, $nc(l)->size()));
		for (int32_t j = 0; j < l->size(); ++j) {
			result->set(j, $nc(($cast(WWindowPeer, $(l->get(j)))))->getHWnd());
		}
		return result;
	}
}

void WWindowPeer::draggedToNewScreen() {
	displayChanged();
}

void WWindowPeer::updateGC() {
	int32_t scrn = getScreenImOn();
	$init($PlatformLogger$Level);
	if ($nc(WWindowPeer::screenLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(WWindowPeer::log)->finer($$str({"Screen number: "_s, $$str(scrn)}));
	}
	$var($Win32GraphicsDevice, oldDev, $cast($Win32GraphicsDevice, $nc(this->winGraphicsConfig)->getDevice()));
	$var($Win32GraphicsDevice, newDev, nullptr);
	$var($GraphicsDeviceArray, devs, $nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getScreenDevices());
	if (scrn >= $nc(devs)->length) {
		$assign(newDev, $cast($Win32GraphicsDevice, $nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getDefaultScreenDevice()));
	} else {
		$assign(newDev, $cast($Win32GraphicsDevice, devs->get(scrn)));
	}
	$set(this, winGraphicsConfig, $cast($Win32GraphicsConfig, $nc(newDev)->getDefaultConfiguration()));
	if ($nc(WWindowPeer::screenLog)->isLoggable($PlatformLogger$Level::FINE)) {
		if (this->winGraphicsConfig == nullptr) {
			$nc(WWindowPeer::screenLog)->fine("Assertion (winGraphicsConfig != null) failed"_s);
		}
	}
	if (oldDev != newDev) {
		$nc(oldDev)->removeDisplayChangedListener(this);
		newDev->addDisplayChangedListener(this);
	}
	$nc($($AWTAccessor::getComponentAccessor()))->setGraphicsConfiguration($cast($Component, this->target), this->winGraphicsConfig);
}

void WWindowPeer::displayChanged() {
	$SunToolkit::executeOnEventHandlerThread(this->target, static_cast<$Runnable*>($$new(WWindowPeer$$Lambda$updateGC, this)));
}

void WWindowPeer::paletteChanged() {
}

int32_t WWindowPeer::getScreenImOn() {
	int32_t $ret = 0;
	$prepareNative(WWindowPeer, getScreenImOn, int32_t);
	$ret = $invokeNative(WWindowPeer, getScreenImOn);
	$finishNative();
	return $ret;
}

void WWindowPeer::setFullScreenExclusiveModeState(bool state) {
	$prepareNative(WWindowPeer, setFullScreenExclusiveModeState, void, bool state);
	$invokeNative(WWindowPeer, setFullScreenExclusiveModeState, state);
	$finishNative();
}

void WWindowPeer::grab() {
	nativeGrab();
}

void WWindowPeer::ungrab() {
	nativeUngrab();
}

void WWindowPeer::nativeGrab() {
	$prepareNative(WWindowPeer, nativeGrab, void);
	$invokeNative(WWindowPeer, nativeGrab);
	$finishNative();
}

void WWindowPeer::nativeUngrab() {
	$prepareNative(WWindowPeer, nativeUngrab, void);
	$invokeNative(WWindowPeer, nativeUngrab);
	$finishNative();
}

bool WWindowPeer::hasWarningWindow() {
	return $nc(($cast($Window, this->target)))->getWarningString() != nullptr;
}

bool WWindowPeer::isTargetUndecorated() {
	return true;
}

void WWindowPeer::repositionSecurityWarning() {
	$prepareNative(WWindowPeer, repositionSecurityWarning, void);
	$invokeNative(WWindowPeer, repositionSecurityWarning);
	$finishNative();
}

void WWindowPeer::print($Graphics* g) {
	$var($Shape, shape, $nc(($cast($Window, this->target)))->getShape());
	if (shape != nullptr) {
		$nc(g)->setClip(shape);
	}
	$WPanelPeer::print(g);
}

void WWindowPeer::replaceSurfaceDataRecursively($Component* c) {
	if ($instanceOf($Container, c)) {
		{
			$var($ComponentArray, arr$, $nc(($cast($Container, c)))->getComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, child, arr$->get(i$));
				{
					replaceSurfaceDataRecursively(child);
				}
			}
		}
	}
	$var($Object, cp, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(c));
	if ($instanceOf($WComponentPeer, cp)) {
		$nc(($cast($WComponentPeer, cp)))->replaceSurfaceDataLater();
	}
}

$Graphics* WWindowPeer::getTranslucentGraphics() {
	$synchronized(getStateLock()) {
		return this->isOpaque ? ($Graphics*)nullptr : $nc(this->painter)->getGraphics(false);
	}
}

void WWindowPeer::setBackground($Color* c) {
	$WPanelPeer::setBackground(c);
	$synchronized(getStateLock()) {
		if (!this->isOpaque && $nc(($cast($Window, this->target)))->isVisible()) {
			updateWindow(true);
		}
	}
}

void WWindowPeer::setOpacity(int32_t iOpacity) {
	$prepareNative(WWindowPeer, setOpacity, void, int32_t iOpacity);
	$invokeNative(WWindowPeer, setOpacity, iOpacity);
	$finishNative();
}

void WWindowPeer::setOpacity(float opacity) {
	if (!$nc(($cast($SunToolkit, $($nc(($cast($Window, this->target)))->getToolkit()))))->isWindowOpacitySupported()) {
		return;
	}
	if (opacity < 0.0f || opacity > 1.0f) {
		$throwNew($IllegalArgumentException, "The value of opacity should be in the range [0.0f .. 1.0f]."_s);
	}
	if (((this->opacity == 1.0f && opacity < 1.0f) || (this->opacity < 1.0f && opacity == 1.0f)) && !$Win32GraphicsEnvironment::isVistaOS()) {
		replaceSurfaceDataRecursively($cast($Component, $(getTarget())));
	}
	this->opacity = opacity;
	int32_t maxOpacity = 255;
	int32_t iOpacity = $cast(int32_t, (opacity * maxOpacity));
	if (iOpacity < 0) {
		iOpacity = 0;
	}
	if (iOpacity > maxOpacity) {
		iOpacity = maxOpacity;
	}
	setOpacity(iOpacity);
	$synchronized(getStateLock()) {
		if (!this->isOpaque && $nc(($cast($Window, this->target)))->isVisible()) {
			updateWindow(true);
		}
	}
}

void WWindowPeer::setOpaqueImpl(bool isOpaque) {
	$prepareNative(WWindowPeer, setOpaqueImpl, void, bool isOpaque);
	$invokeNative(WWindowPeer, setOpaqueImpl, isOpaque);
	$finishNative();
}

void WWindowPeer::setOpaque(bool isOpaque) {
	$synchronized(getStateLock()) {
		if (this->isOpaque == isOpaque) {
			return;
		}
	}
	$var($Window, target, $cast($Window, getTarget()));
	if (!isOpaque) {
		$var($SunToolkit, sunToolkit, $cast($SunToolkit, $nc(target)->getToolkit()));
		bool var$0 = !$nc(sunToolkit)->isWindowTranslucencySupported();
		if (var$0 || !$nc(sunToolkit)->isTranslucencyCapable($(target->getGraphicsConfiguration()))) {
			return;
		}
	}
	bool isVistaOS = $Win32GraphicsEnvironment::isVistaOS();
	if (this->isOpaque != isOpaque && !isVistaOS) {
		replaceSurfaceDataRecursively(target);
	}
	$synchronized(getStateLock()) {
		this->isOpaque = isOpaque;
		setOpaqueImpl(isOpaque);
		if (isOpaque) {
			$var($TranslucentWindowPainter, currentPainter, this->painter);
			if (currentPainter != nullptr) {
				currentPainter->flush();
				$set(this, painter, nullptr);
			}
		} else {
			$set(this, painter, $TranslucentWindowPainter::createInstance(this));
		}
	}
	if (isVistaOS) {
		$var($Shape, shape, $nc(target)->getShape());
		if (shape != nullptr) {
			target->setShape(shape);
		}
	}
	if ($nc(target)->isVisible()) {
		updateWindow(true);
	}
}

void WWindowPeer::updateWindowImpl($ints* data, int32_t width, int32_t height) {
	$prepareNative(WWindowPeer, updateWindowImpl, void, $ints* data, int32_t width, int32_t height);
	$invokeNative(WWindowPeer, updateWindowImpl, data, width, height);
	$finishNative();
}

void WWindowPeer::updateWindow() {
	updateWindow(false);
}

void WWindowPeer::updateWindow(bool repaint) {
	$var($Window, w, $cast($Window, this->target));
	$synchronized(getStateLock()) {
		bool var$1 = this->isOpaque || !$nc(w)->isVisible();
		bool var$0 = var$1 || ($nc(w)->getWidth() <= 0);
		if (var$0 || ($nc(w)->getHeight() <= 0)) {
			return;
		}
		$var($TranslucentWindowPainter, currentPainter, this->painter);
		if (currentPainter != nullptr) {
			currentPainter->updateWindow(repaint);
		} else {
			$init($PlatformLogger$Level);
			if ($nc(WWindowPeer::log)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(WWindowPeer::log)->finer("Translucent window painter is null in updateWindow"_s);
			}
		}
	}
}

void WWindowPeer::initActiveWindowsTracking($Window* w) {
	$init(WWindowPeer);
	$var($AppContext, appContext, $AppContext::getAppContext());
	$synchronized(appContext) {
		$var($List, l, $cast($List, $nc(appContext)->get(WWindowPeer::ACTIVE_WINDOWS_KEY)));
		if (l == nullptr) {
			$assign(l, $new($LinkedList));
			appContext->put(WWindowPeer::ACTIVE_WINDOWS_KEY, l);
			appContext->addPropertyChangeListener($AppContext::GUI_DISPOSED, WWindowPeer::guiDisposedListener);
			$var($KeyboardFocusManager, kfm, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
			$nc(kfm)->addPropertyChangeListener("activeWindow"_s, WWindowPeer::activeWindowListener);
		}
	}
}

$Insets* WWindowPeer::getInsets() {
	return $WPanelPeer::getInsets();
}

void WWindowPeer::paint($Graphics* g) {
	$WPanelPeer::paint(g);
}

$GraphicsConfiguration* WWindowPeer::getAppropriateGraphicsConfiguration($GraphicsConfiguration* gc) {
	return $WPanelPeer::getAppropriateGraphicsConfiguration(gc);
}

bool WWindowPeer::shouldClearRectBeforePaint() {
	return $WPanelPeer::shouldClearRectBeforePaint();
}

void clinit$WWindowPeer($Class* class$) {
	$assignStatic(WWindowPeer::log, $PlatformLogger::getLogger("sun.awt.windows.WWindowPeer"_s));
	$assignStatic(WWindowPeer::screenLog, $PlatformLogger::getLogger("sun.awt.windows.screen.WWindowPeer"_s));
	$assignStatic(WWindowPeer::ACTIVE_WINDOWS_KEY, $new($StringBuffer, "active_windows_list"_s));
	$assignStatic(WWindowPeer::activeWindowListener, $new($WWindowPeer$ActiveWindowListener));
	$assignStatic(WWindowPeer::guiDisposedListener, $new($WWindowPeer$GuiDisposedListener));
	{
		WWindowPeer::initIDs();
	}
}

WWindowPeer::WWindowPeer() {
}

$Class* WWindowPeer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WWindowPeer$$Lambda$updateGC::classInfo$.name)) {
			return WWindowPeer$$Lambda$updateGC::load$(name, initialize);
		}
	}
	$loadClass(WWindowPeer, name, initialize, &_WWindowPeer_ClassInfo_, clinit$WWindowPeer, allocate$WWindowPeer);
	return class$;
}

$Class* WWindowPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun