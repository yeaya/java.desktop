#include <sun/awt/X11/XWindowPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/SystemColor.h>
#include <java/awt/Window$Type.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$WindowAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/AWTIcon32_java_icon16_png.h>
#include <sun/awt/AWTIcon32_java_icon24_png.h>
#include <sun/awt/AWTIcon32_java_icon32_png.h>
#include <sun/awt/AWTIcon32_java_icon48_png.h>
#include <sun/awt/AWTIcon64_java_icon16_png.h>
#include <sun/awt/AWTIcon64_java_icon24_png.h>
#include <sun/awt/AWTIcon64_java_icon32_png.h>
#include <sun/awt/AWTIcon64_java_icon48_png.h>
#include <sun/awt/DisplayChangedListener.h>
#include <sun/awt/IconInfo.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/UngrabEvent.h>
#include <sun/awt/X11/MWMConstants.h>
#include <sun/awt/X11/Native.h>
#include <sun/awt/X11/PropMwmHints.h>
#include <sun/awt/X11/ToplevelStateListener.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XAtomList.h>
#include <sun/awt/X11/XAwtState.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XButtonEvent.h>
#include <sun/awt/X11/XCanvasPeer.h>
#include <sun/awt/X11/XClientMessageEvent.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XConfigureEvent.h>
#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XCrossingEvent.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XDialogPeer.h>
#include <sun/awt/X11/XDropTargetRegistry.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XEventDispatcher.h>
#include <sun/awt/X11/XFocusChangeEvent.h>
#include <sun/awt/X11/XFocusProxyWindow.h>
#include <sun/awt/X11/XKeyboardFocusManagerPeer.h>
#include <sun/awt/X11/XLayerProtocol.h>
#include <sun/awt/X11/XLightweightFramePeer.h>
#include <sun/awt/X11/XMotionEvent.h>
#include <sun/awt/X11/XNETProtocol.h>
#include <sun/awt/X11/XPanelPeer.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XQueryTree.h>
#include <sun/awt/X11/XSizeHints.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XUnmapEvent.h>
#include <sun/awt/X11/XUtilConstants.h>
#include <sun/awt/X11/XVisibilityEvent.h>
#include <sun/awt/X11/XWM.h>
#include <sun/awt/X11/XWMHints.h>
#include <sun/awt/X11/XWarningWindow.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowAttributesData.h>
#include <sun/awt/X11/XWindowPeer$1.h>
#include <sun/awt/X11/XWindowPeer$2.h>
#include <sun/awt/X11/XWindowPeer$3.h>
#include <sun/awt/X11/XWindowPeer$4.h>
#include <sun/awt/X11/XlibUtil.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/awt/X11GraphicsDevice.h>
#include <sun/awt/X11GraphicsEnvironment.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef AWT_DECOR_ALL
#undef BIT_GRAVITY
#undef CDE_WM
#undef COMPONENT_MOVED
#undef COMPONENT_RESIZED
#undef EVENT_MASK
#undef FINE
#undef FINER
#undef FINEST
#undef LAYER_ALWAYS_ON_TOP
#undef LAYER_NORMAL
#undef MAXIMUM_BUFFER_LENGTH_NET_WM_ICON
#undef MAX_BUTTONS_SUPPORTED
#undef METACITY_WM
#undef MOTIF_WM
#undef MUTTER_WM
#undef NORMAL
#undef NO_WM
#undef OPENLOOK_WM
#undef OVERRIDE_REDIRECT
#undef PARENT_WINDOW
#undef POPUP
#undef PREFERRED_SIZE_FOR_ICON
#undef PROP_MWM_HINTS_ELEMENTS
#undef REPARENTED
#undef SAWFISH_WM
#undef TARGET
#undef UNITY_COMPIZ_WM
#undef WINDOW_DEICONIFIED
#undef WINDOW_GAINED_FOCUS
#undef WINDOW_ICONIFIED
#undef WINDOW_LOST_FOCUS
#undef WINDOW_STATE_CHANGED
#undef XA_MWM_HINTS
#undef XA_NET_WM_STATE
#undef XA_NET_WM_STATE_SKIP_TASKBAR
#undef XA_NET_WM_WINDOW_TYPE
#undef XA_NET_WM_WINDOW_TYPE_DIALOG
#undef XA_NET_WM_WINDOW_TYPE_NORMAL
#undef XA_NET_WM_WINDOW_TYPE_POPUP_MENU
#undef XA_NET_WM_WINDOW_TYPE_UTILITY
#undef XA_WM_TRANSIENT_FOR

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $WindowArray = $Array<::java::awt::Window>;
using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $EventQueue = ::java::awt::EventQueue;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $SystemColor = ::java::awt::SystemColor;
using $Window = ::java::awt::Window;
using $Window$Type = ::java::awt::Window$Type;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$WindowAccessor = ::sun::awt::AWTAccessor$WindowAccessor;
using $AWTIcon32_java_icon16_png = ::sun::awt::AWTIcon32_java_icon16_png;
using $AWTIcon32_java_icon24_png = ::sun::awt::AWTIcon32_java_icon24_png;
using $AWTIcon32_java_icon32_png = ::sun::awt::AWTIcon32_java_icon32_png;
using $AWTIcon32_java_icon48_png = ::sun::awt::AWTIcon32_java_icon48_png;
using $AWTIcon64_java_icon16_png = ::sun::awt::AWTIcon64_java_icon16_png;
using $AWTIcon64_java_icon24_png = ::sun::awt::AWTIcon64_java_icon24_png;
using $AWTIcon64_java_icon32_png = ::sun::awt::AWTIcon64_java_icon32_png;
using $AWTIcon64_java_icon48_png = ::sun::awt::AWTIcon64_java_icon48_png;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $IconInfo = ::sun::awt::IconInfo;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UngrabEvent = ::sun::awt::UngrabEvent;
using $MWMConstants = ::sun::awt::X11::MWMConstants;
using $Native = ::sun::awt::X11::Native;
using $PropMwmHints = ::sun::awt::X11::PropMwmHints;
using $ToplevelStateListener = ::sun::awt::X11::ToplevelStateListener;
using $XAtom = ::sun::awt::X11::XAtom;
using $XAtomList = ::sun::awt::X11::XAtomList;
using $XAwtState = ::sun::awt::X11::XAwtState;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XButtonEvent = ::sun::awt::X11::XButtonEvent;
using $XCanvasPeer = ::sun::awt::X11::XCanvasPeer;
using $XClientMessageEvent = ::sun::awt::X11::XClientMessageEvent;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XConfigureEvent = ::sun::awt::X11::XConfigureEvent;
using $XConstants = ::sun::awt::X11::XConstants;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XCrossingEvent = ::sun::awt::X11::XCrossingEvent;
using $XDecoratedPeer = ::sun::awt::X11::XDecoratedPeer;
using $XDialogPeer = ::sun::awt::X11::XDialogPeer;
using $XDropTargetRegistry = ::sun::awt::X11::XDropTargetRegistry;
using $XEvent = ::sun::awt::X11::XEvent;
using $XEventDispatcher = ::sun::awt::X11::XEventDispatcher;
using $XFocusChangeEvent = ::sun::awt::X11::XFocusChangeEvent;
using $XFocusProxyWindow = ::sun::awt::X11::XFocusProxyWindow;
using $XKeyboardFocusManagerPeer = ::sun::awt::X11::XKeyboardFocusManagerPeer;
using $XLayerProtocol = ::sun::awt::X11::XLayerProtocol;
using $XLightweightFramePeer = ::sun::awt::X11::XLightweightFramePeer;
using $XMotionEvent = ::sun::awt::X11::XMotionEvent;
using $XNETProtocol = ::sun::awt::X11::XNETProtocol;
using $XPanelPeer = ::sun::awt::X11::XPanelPeer;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XQueryTree = ::sun::awt::X11::XQueryTree;
using $XSizeHints = ::sun::awt::X11::XSizeHints;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XUnmapEvent = ::sun::awt::X11::XUnmapEvent;
using $XUtilConstants = ::sun::awt::X11::XUtilConstants;
using $XVisibilityEvent = ::sun::awt::X11::XVisibilityEvent;
using $XWM = ::sun::awt::X11::XWM;
using $XWMHints = ::sun::awt::X11::XWMHints;
using $XWarningWindow = ::sun::awt::X11::XWarningWindow;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowAttributesData = ::sun::awt::X11::XWindowAttributesData;
using $XWindowPeer$1 = ::sun::awt::X11::XWindowPeer$1;
using $XWindowPeer$2 = ::sun::awt::X11::XWindowPeer$2;
using $XWindowPeer$3 = ::sun::awt::X11::XWindowPeer$3;
using $XWindowPeer$4 = ::sun::awt::X11::XWindowPeer$4;
using $XlibUtil = ::sun::awt::X11::XlibUtil;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;
using $X11GraphicsEnvironment = ::sun::awt::X11GraphicsEnvironment;
using $Region = ::sun::java2d::pipe::Region;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XWindowPeer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XWindowPeer, $assertionsDisabled)},
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XWindowPeer, log)},
	{"focusLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XWindowPeer, focusLog)},
	{"insLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XWindowPeer, insLog)},
	{"grabLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XWindowPeer, grabLog)},
	{"iconLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XWindowPeer, iconLog)},
	{"windows", "Ljava/util/Set;", "Ljava/util/Set<Lsun/awt/X11/XWindowPeer;>;", $PRIVATE | $STATIC, $staticField(XWindowPeer, windows)},
	{"cachedFocusableWindow", "Z", nullptr, $PRIVATE, $field(XWindowPeer, cachedFocusableWindow)},
	{"warningWindow", "Lsun/awt/X11/XWarningWindow;", nullptr, 0, $field(XWindowPeer, warningWindow)},
	{"alwaysOnTop", "Z", nullptr, $PRIVATE, $field(XWindowPeer, alwaysOnTop)},
	{"locationByPlatform", "Z", nullptr, $PRIVATE, $field(XWindowPeer, locationByPlatform)},
	{"modalBlocker", "Ljava/awt/Dialog;", nullptr, 0, $field(XWindowPeer, modalBlocker)},
	{"delayedModalBlocking", "Z", nullptr, 0, $field(XWindowPeer, delayedModalBlocking)},
	{"targetMinimumSize", "Ljava/awt/Dimension;", nullptr, 0, $field(XWindowPeer, targetMinimumSize)},
	{"ownerPeer", "Lsun/awt/X11/XWindowPeer;", nullptr, $PRIVATE, $field(XWindowPeer, ownerPeer)},
	{"prevTransientFor", "Lsun/awt/X11/XWindowPeer;", nullptr, $PROTECTED, $field(XWindowPeer, prevTransientFor)},
	{"nextTransientFor", "Lsun/awt/X11/XWindowPeer;", nullptr, $PROTECTED, $field(XWindowPeer, nextTransientFor)},
	{"curRealTransientFor", "Lsun/awt/X11/XBaseWindow;", nullptr, $PRIVATE, $field(XWindowPeer, curRealTransientFor)},
	{"grab", "Z", nullptr, $PRIVATE, $field(XWindowPeer, grab)},
	{"isMapped", "Z", nullptr, $PRIVATE, $field(XWindowPeer, isMapped$)},
	{"mustControlStackPosition", "Z", nullptr, $PRIVATE, $field(XWindowPeer, mustControlStackPosition)},
	{"rootPropertyEventDispatcher", "Lsun/awt/X11/XEventDispatcher;", nullptr, $PRIVATE, $field(XWindowPeer, rootPropertyEventDispatcher)},
	{"isStartupNotificationRemoved", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XWindowPeer, isStartupNotificationRemoved)},
	{"isUnhiding", "Z", nullptr, $PRIVATE, $field(XWindowPeer, isUnhiding)},
	{"isBeforeFirstMapNotify", "Z", nullptr, $PRIVATE, $field(XWindowPeer, isBeforeFirstMapNotify)},
	{"windowType", "Ljava/awt/Window$Type;", nullptr, $PRIVATE, $field(XWindowPeer, windowType)},
	{"toplevelStateListeners", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/awt/X11/ToplevelStateListener;>;", $PROTECTED, $field(XWindowPeer, toplevelStateListeners)},
	{"PREFERRED_SIZE_FOR_ICON", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XWindowPeer, PREFERRED_SIZE_FOR_ICON)},
	{"MAXIMUM_BUFFER_LENGTH_NET_WM_ICON", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XWindowPeer, MAXIMUM_BUFFER_LENGTH_NET_WM_ICON)},
	{"defaultIconInfo", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/awt/IconInfo;>;", $PRIVATE | $STATIC, $staticField(XWindowPeer, defaultIconInfo)},
	{"dropTargetCount", "I", nullptr, $PRIVATE, $field(XWindowPeer, dropTargetCount)},
	{"XA_NET_WM_STATE", "Lsun/awt/X11/XAtom;", nullptr, 0, $field(XWindowPeer, XA_NET_WM_STATE)},
	{"net_wm_state", "Lsun/awt/X11/XAtomList;", nullptr, 0, $field(XWindowPeer, net_wm_state)},
	{"pressTarget", "Lsun/awt/X11/XBaseWindow;", nullptr, $PRIVATE, $field(XWindowPeer, pressTarget)},
	{}
};

$MethodInfo _XWindowPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"*beginLayout", "()V", nullptr, $PUBLIC},
	{"*beginValidate", "()V", nullptr, $PUBLIC},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC},
	{"*endLayout", "()V", nullptr, $PUBLIC},
	{"*endValidate", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0, $method(static_cast<void(XWindowPeer::*)($XCreateWindowParams*)>(&XWindowPeer::init$))},
	{"<init>", "(Ljava/awt/Window;)V", nullptr, 0, $method(static_cast<void(XWindowPeer::*)($Window*)>(&XWindowPeer::init$))},
	{"addDropTarget", "()V", nullptr, $PUBLIC},
	{"addRootPropertyEventDispatcher", "()V", nullptr, 0},
	{"addToTransientFors", "(Lsun/awt/X11/XDialogPeer;)V", nullptr, $PRIVATE, $method(static_cast<void(XWindowPeer::*)($XDialogPeer*)>(&XWindowPeer::addToTransientFors))},
	{"addToTransientFors", "(Lsun/awt/X11/XDialogPeer;Ljava/util/Vector;)V", "(Lsun/awt/X11/XDialogPeer;Ljava/util/Vector<Lsun/awt/X11/XWindowPeer;>;)V", $PRIVATE, $method(static_cast<void(XWindowPeer::*)($XDialogPeer*,$Vector*)>(&XWindowPeer::addToTransientFors))},
	{"addToplevelStateListener", "(Lsun/awt/X11/ToplevelStateListener;)V", nullptr, $PUBLIC},
	{"applyWindowType", "()V", nullptr, $PRIVATE, $method(static_cast<void(XWindowPeer::*)()>(&XWindowPeer::applyWindowType))},
	{"checkIfOnNewScreen", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"collectJavaToplevels", "()Ljava/util/Vector;", "()Ljava/util/Vector<Lsun/awt/X11/XWindowPeer;>;", $STATIC, $method(static_cast<$Vector*(*)()>(&XWindowPeer::collectJavaToplevels))},
	{"displayChanged", "()V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"dumpIcons", "(Ljava/util/List;)V", "(Ljava/util/List<Lsun/awt/IconInfo;>;)V", $STATIC, $method(static_cast<void(*)($List*)>(&XWindowPeer::dumpIcons))},
	{"executeDisplayChangedOnEDT", "(Ljava/awt/GraphicsConfiguration;)V", nullptr, $PRIVATE, $method(static_cast<void(XWindowPeer::*)($GraphicsConfiguration*)>(&XWindowPeer::executeDisplayChangedOnEDT))},
	{"focusAllowedFor", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(XWindowPeer::*)()>(&XWindowPeer::focusAllowedFor))},
	{"getDecoratedOwner", "(Ljava/awt/Window;)Ljava/awt/Window;", nullptr, $STATIC, $method(static_cast<$Window*(*)($Window*)>(&XWindowPeer::getDecoratedOwner))},
	{"getDefaultIconInfo", "()Ljava/util/List;", "()Ljava/util/List<Lsun/awt/IconInfo;>;", $PROTECTED | $STATIC | $SYNCHRONIZED, $method(static_cast<$List*(*)()>(&XWindowPeer::getDefaultIconInfo))},
	{"getFocusTargetWindow", "()J", nullptr, 0},
	{"getIconInfo", "()Ljava/util/List;", "()Ljava/util/List<Lsun/awt/IconInfo;>;", 0},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getJvmPID", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&XWindowPeer::getJvmPID))},
	{"getLocalHostname", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<$String*(*)()>(&XWindowPeer::getLocalHostname))},
	{"getMWMHints", "()Lsun/awt/X11/PropMwmHints;", nullptr, $PUBLIC},
	{"getMenuBarHeight", "()I", nullptr, 0},
	{"getNETWMState", "()Lsun/awt/X11/XAtomList;", nullptr, $PUBLIC},
	{"getNativeFocusedWindow", "()Ljava/awt/Window;", nullptr, $STATIC, $method(static_cast<$Window*(*)()>(&XWindowPeer::getNativeFocusedWindow))},
	{"getNativeFocusedWindowPeer", "()Lsun/awt/X11/XWindowPeer;", nullptr, $STATIC, $method(static_cast<XWindowPeer*(*)()>(&XWindowPeer::getNativeFocusedWindowPeer))},
	{"getNewLocation", "(Lsun/awt/X11/XConfigureEvent;II)Ljava/awt/Point;", nullptr, $PROTECTED},
	{"getOwnerPeer", "()Lsun/awt/X11/XWindowPeer;", nullptr, $PUBLIC},
	{"getTargetMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getToplevelWindow", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(XWindowPeer::*)(int64_t)>(&XWindowPeer::getToplevelWindow))},
	{"getWMName", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getWindowType", "()Ljava/awt/Window$Type;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Window$Type*(XWindowPeer::*)()>(&XWindowPeer::getWindowType))},
	{"handleButtonPressRelease", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleConfigureNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleDeiconify", "()V", nullptr, $PUBLIC},
	{"handleFocusEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleIconify", "()V", nullptr, $PUBLIC},
	{"handleMapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleMotionNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleRootPropertyNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, 0},
	{"handleStateChange", "(II)V", nullptr, $PUBLIC},
	{"handleUnmapNotifyEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleVisibilityEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleWindowFocusIn", "(J)V", nullptr, $PUBLIC},
	{"handleWindowFocusInSync", "(J)V", nullptr, $PUBLIC},
	{"handleWindowFocusIn_Dispatch", "()V", nullptr, $PUBLIC},
	{"handleWindowFocusOut", "(Ljava/awt/Window;J)V", nullptr, $PUBLIC},
	{"handleWindowFocusOutSync", "(Ljava/awt/Window;J)V", nullptr, $PUBLIC},
	{"handleXCrossingEvent", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"hasDecorations", "(I)Z", nullptr, 0},
	{"hasWarningWindow", "()Z", nullptr, 0},
	{"isAutoRequestFocus", "()Z", nullptr, 0},
	{"isDesktopWindow", "(J)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int64_t)>(&XWindowPeer::isDesktopWindow))},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"isFocusableWindow", "()Z", nullptr, 0},
	{"isFocusedWindowModalBlocker", "()Z", nullptr, 0},
	{"isGrabbed", "()Z", nullptr, $PUBLIC},
	{"isLocationByPlatform", "()Z", nullptr, 0},
	{"isModalBlocked", "()Z", nullptr, 0},
	{"isNativelyNonFocusableWindow", "()Z", nullptr, 0},
	{"isOLWMDecorBug", "()Z", nullptr, $FINAL, $method(static_cast<bool(XWindowPeer::*)()>(&XWindowPeer::isOLWMDecorBug))},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"isOverrideRedirect", "()Z", nullptr, 0},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"isResizable", "()Z", nullptr, 0},
	{"isSimpleWindow", "()Z", nullptr, $FINAL, $method(static_cast<bool(XWindowPeer::*)()>(&XWindowPeer::isSimpleWindow))},
	{"isWMStateNetHidden", "()Z", nullptr, $PROTECTED},
	{"isWithdrawn", "()Z", nullptr, 0},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"lowerOverrideRedirect", "()V", nullptr, $PRIVATE, $method(static_cast<void(XWindowPeer::*)()>(&XWindowPeer::lowerOverrideRedirect))},
	{"normalizeIconImages", "(Ljava/util/List;)Ljava/util/List;", "(Ljava/util/List<Lsun/awt/IconInfo;>;)Ljava/util/List<Lsun/awt/IconInfo;>;", $STATIC, $method(static_cast<$List*(*)($List*)>(&XWindowPeer::normalizeIconImages))},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paletteChanged", "()V", nullptr, $PUBLIC},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"promoteDefaultPosition", "()V", nullptr, $PRIVATE, $method(static_cast<void(XWindowPeer::*)()>(&XWindowPeer::promoteDefaultPosition))},
	{"queryXLocation", "()Ljava/awt/Point;", nullptr, $PRIVATE, $method(static_cast<$Point*(XWindowPeer::*)()>(&XWindowPeer::queryXLocation))},
	{"recursivelySetIcon", "(Ljava/util/List;)V", "(Ljava/util/List<Lsun/awt/IconInfo;>;)V", $PUBLIC},
	{"removeDropTarget", "()V", nullptr, $PUBLIC},
	{"removeFromTransientFors", "()V", nullptr, $PRIVATE, $method(static_cast<void(XWindowPeer::*)()>(&XWindowPeer::removeFromTransientFors))},
	{"removeRootPropertyEventDispatcher", "()V", nullptr, 0},
	{"removeStartupNotification", "()V", nullptr, $PRIVATE, $method(static_cast<void(XWindowPeer::*)()>(&XWindowPeer::removeStartupNotification))},
	{"removeToplevelStateListener", "(Lsun/awt/X11/ToplevelStateListener;)V", nullptr, $PUBLIC},
	{"removeTransientForHint", "(Lsun/awt/X11/XWindowPeer;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(XWindowPeer*)>(&XWindowPeer::removeTransientForHint))},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"repositionSecurityWarning", "()V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"requestInitialFocus", "()V", nullptr, $PROTECTED},
	{"requestWindowFocus", "(Lsun/awt/X11/XWindowPeer;)Z", nullptr, $PUBLIC},
	{"requestWindowFocus", "()Z", nullptr, $PUBLIC},
	{"requestWindowFocus", "(JZ)Z", nullptr, $PUBLIC},
	{"requestXFocus", "(J)V", nullptr, $FINAL, $method(static_cast<void(XWindowPeer::*)(int64_t)>(&XWindowPeer::requestXFocus))},
	{"requestXFocus", "()V", nullptr, $FINAL, $method(static_cast<void(XWindowPeer::*)()>(&XWindowPeer::requestXFocus))},
	{"requestXFocus", "(JZ)V", nullptr, $PROTECTED},
	{"restoreTransientFor", "(Lsun/awt/X11/XWindowPeer;)V", nullptr, $STATIC, $method(static_cast<void(*)(XWindowPeer*)>(&XWindowPeer::restoreTransientFor))},
	{"setActualFocusedWindow", "(Lsun/awt/X11/XWindowPeer;)V", nullptr, 0},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setFullScreenExclusiveModeState", "(Z)V", nullptr, $PUBLIC},
	{"setGrab", "(Z)V", nullptr, $PUBLIC},
	{"setIconHints", "(Ljava/util/List;)V", "(Ljava/util/List<Lsun/awt/IconInfo;>;)V", 0},
	{"setMWMHints", "(Lsun/awt/X11/PropMwmHints;)V", nullptr, $PUBLIC},
	{"setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"setModalBlocked", "(Ljava/awt/Dialog;ZLjava/util/Vector;)V", "(Ljava/awt/Dialog;ZLjava/util/Vector<Lsun/awt/X11/XWindowPeer;>;)V", $PUBLIC},
	{"setMouseAbove", "(Z)V", nullptr, $PROTECTED},
	{"setNETWMState", "(Lsun/awt/X11/XAtomList;)V", nullptr, $PUBLIC},
	{"setOpacity", "(F)V", nullptr, $PUBLIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"setReparented", "(Z)V", nullptr, 0},
	{"setSaveUnder", "(Z)V", nullptr, 0},
	{"setToplevelTransientFor", "(Lsun/awt/X11/XWindowPeer;Lsun/awt/X11/XWindowPeer;ZZ)V", nullptr, $STATIC, $method(static_cast<void(*)(XWindowPeer*,XWindowPeer*,bool,bool)>(&XWindowPeer::setToplevelTransientFor))},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"shouldFocusOnMapNotify", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(XWindowPeer::*)()>(&XWindowPeer::shouldFocusOnMapNotify))},
	{"stateChanged", "(JII)V", nullptr, $PROTECTED},
	{"suppressWmTakeFocus", "(Z)V", nullptr, $PROTECTED},
	{"toBack", "()V", nullptr, $PUBLIC},
	{"toFront", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateAlwaysOnTop", "()V", nullptr, $PRIVATE, $method(static_cast<void(XWindowPeer::*)()>(&XWindowPeer::updateAlwaysOnTop))},
	{"updateAlwaysOnTopState", "()V", nullptr, $PUBLIC},
	{"updateChildrenSizes", "()V", nullptr, 0},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"updateDropTarget", "()V", nullptr, $PROTECTED},
	{"updateFocusability", "()V", nullptr, 0},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"updateIconImages", "()V", nullptr, $PUBLIC},
	{"updateMinimumSize", "()V", nullptr, $PUBLIC},
	{"updateOpacity", "()V", nullptr, $PRIVATE, $method(static_cast<void(XWindowPeer::*)()>(&XWindowPeer::updateOpacity))},
	{"updateSecurityWarningVisibility", "()V", nullptr, $PUBLIC},
	{"updateShape", "()V", nullptr, $PRIVATE, $method(static_cast<void(XWindowPeer::*)()>(&XWindowPeer::updateShape))},
	{"updateTransientFor", "()V", nullptr, 0},
	{"updateWindow", "()V", nullptr, $PUBLIC},
	{"xSetVisible", "(Z)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_getJvmPID 46
#define _METHOD_INDEX_getLocalHostname 47

$InnerClassInfo _XWindowPeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XWindowPeer$4", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.awt.X11.XWindowPeer$3", nullptr, nullptr, 0},
	{"sun.awt.X11.XWindowPeer$2", nullptr, nullptr, 0},
	{"sun.awt.X11.XWindowPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XWindowPeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XWindowPeer",
	"sun.awt.X11.XPanelPeer",
	"java.awt.peer.WindowPeer,sun.awt.DisplayChangedListener",
	_XWindowPeer_FieldInfo_,
	_XWindowPeer_MethodInfo_,
	nullptr,
	nullptr,
	_XWindowPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XWindowPeer$4,sun.awt.X11.XWindowPeer$3,sun.awt.X11.XWindowPeer$2,sun.awt.X11.XWindowPeer$1"
};

$Object* allocate$XWindowPeer($Class* clazz) {
	return $of($alloc(XWindowPeer));
}

void XWindowPeer::paint($Graphics* g) {
	this->$XPanelPeer::paint(g);
}

void XWindowPeer::setBackground($Color* c) {
	this->$XPanelPeer::setBackground(c);
}

void XWindowPeer::setForeground($Color* c) {
	this->$XPanelPeer::setForeground(c);
}

void XWindowPeer::reparent($ContainerPeer* newNativeParent) {
	this->$XPanelPeer::reparent(newNativeParent);
}

bool XWindowPeer::isReparentSupported() {
	 return this->$XPanelPeer::isReparentSupported();
}

bool XWindowPeer::isObscured() {
	 return this->$XPanelPeer::isObscured();
}

bool XWindowPeer::canDetermineObscurity() {
	 return this->$XPanelPeer::canDetermineObscurity();
}

bool XWindowPeer::isFocusable() {
	 return this->$XPanelPeer::isFocusable();
}

bool XWindowPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XPanelPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void XWindowPeer::setEnabled(bool value) {
	this->$XPanelPeer::setEnabled(value);
}

$Graphics* XWindowPeer::getGraphics() {
	 return this->$XPanelPeer::getGraphics();
}

void XWindowPeer::coalescePaintEvent($PaintEvent* e) {
	this->$XPanelPeer::coalescePaintEvent(e);
}

void XWindowPeer::handleEvent($AWTEvent* e) {
	this->$XPanelPeer::handleEvent(e);
}

$Dimension* XWindowPeer::getMinimumSize() {
	 return this->$XPanelPeer::getMinimumSize();
}

$Dimension* XWindowPeer::getPreferredSize() {
	 return this->$XPanelPeer::getPreferredSize();
}

void XWindowPeer::layout() {
	this->$XPanelPeer::layout();
}

$FontMetrics* XWindowPeer::getFontMetrics($Font* font) {
	 return this->$XPanelPeer::getFontMetrics(font);
}

void XWindowPeer::setFont($Font* f) {
	this->$XPanelPeer::setFont(f);
}

void XWindowPeer::updateCursorImmediately() {
	this->$XPanelPeer::updateCursorImmediately();
}

$Image* XWindowPeer::createImage(int32_t width, int32_t height) {
	 return this->$XPanelPeer::createImage(width, height);
}

$VolatileImage* XWindowPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XPanelPeer::createVolatileImage(width, height);
}

void XWindowPeer::beginValidate() {
	this->$XPanelPeer::beginValidate();
}

void XWindowPeer::endValidate() {
	this->$XPanelPeer::endValidate();
}

bool XWindowPeer::handlesWheelScrolling() {
	 return this->$XPanelPeer::handlesWheelScrolling();
}

void XWindowPeer::beginLayout() {
	this->$XPanelPeer::beginLayout();
}

void XWindowPeer::endLayout() {
	this->$XPanelPeer::endLayout();
}

void XWindowPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XPanelPeer::createBuffers(numBuffers, caps);
}

void XWindowPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XPanelPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* XWindowPeer::getBackBuffer() {
	 return this->$XPanelPeer::getBackBuffer();
}

void XWindowPeer::destroyBuffers() {
	this->$XPanelPeer::destroyBuffers();
}

void XWindowPeer::setZOrder($ComponentPeer* above) {
	this->$XPanelPeer::setZOrder(above);
}

void XWindowPeer::applyShape($Region* shape) {
	this->$XPanelPeer::applyShape(shape);
}

bool XWindowPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XPanelPeer::updateGraphicsData(gc);
}

$Point* XWindowPeer::getLocationOnScreen() {
	 return this->$XPanelPeer::getLocationOnScreen();
}

$ColorModel* XWindowPeer::getColorModel() {
	 return this->$XPanelPeer::getColorModel();
}

$GraphicsConfiguration* XWindowPeer::getGraphicsConfiguration() {
	 return this->$XPanelPeer::getGraphicsConfiguration();
}

$String* XWindowPeer::toString() {
	 return this->$XPanelPeer::toString();
}

int32_t XWindowPeer::hashCode() {
	 return this->$XPanelPeer::hashCode();
}

bool XWindowPeer::equals(Object$* arg0) {
	 return this->$XPanelPeer::equals(arg0);
}

$Object* XWindowPeer::clone() {
	 return this->$XPanelPeer::clone();
}

void XWindowPeer::finalize() {
	this->$XPanelPeer::finalize();
}

bool XWindowPeer::$assertionsDisabled = false;
$PlatformLogger* XWindowPeer::log = nullptr;
$PlatformLogger* XWindowPeer::focusLog = nullptr;
$PlatformLogger* XWindowPeer::insLog = nullptr;
$PlatformLogger* XWindowPeer::grabLog = nullptr;
$PlatformLogger* XWindowPeer::iconLog = nullptr;
$Set* XWindowPeer::windows = nullptr;
$AtomicBoolean* XWindowPeer::isStartupNotificationRemoved = nullptr;
$ArrayList* XWindowPeer::defaultIconInfo = nullptr;

$Window$Type* XWindowPeer::getWindowType() {
	return this->windowType;
}

void XWindowPeer::init$($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$init($XBaseWindow);
	$XPanelPeer::init$($($nc(params)->putIfNull($of($XBaseWindow::PARENT_WINDOW), $($of($Long::valueOf((int64_t)0))))));
	this->delayedModalBlocking = false;
	$set(this, targetMinimumSize, nullptr);
	this->grab = false;
	this->isMapped$ = false;
	this->mustControlStackPosition = false;
	$set(this, rootPropertyEventDispatcher, nullptr);
	this->isUnhiding = false;
	this->isBeforeFirstMapNotify = false;
	$init($Window$Type);
	$set(this, windowType, $Window$Type::NORMAL);
	$set(this, toplevelStateListeners, $new($Vector));
	this->dropTargetCount = 0;
	$set(this, pressTarget, this);
}

void XWindowPeer::init$($Window* target) {
	$useLocalCurrentObjectStackCache();
	$init($XWindow);
	$init($XBaseWindow);
	$XPanelPeer::init$($$new($XCreateWindowParams, $$new($ObjectArray, {
		$of($XWindow::TARGET),
		$of(target),
		$of($XBaseWindow::PARENT_WINDOW),
		$($of($Long::valueOf((int64_t)0)))
	})));
	this->delayedModalBlocking = false;
	$set(this, targetMinimumSize, nullptr);
	this->grab = false;
	this->isMapped$ = false;
	this->mustControlStackPosition = false;
	$set(this, rootPropertyEventDispatcher, nullptr);
	this->isUnhiding = false;
	this->isBeforeFirstMapNotify = false;
	$init($Window$Type);
	$set(this, windowType, $Window$Type::NORMAL);
	$set(this, toplevelStateListeners, $new($Vector));
	this->dropTargetCount = 0;
	$set(this, pressTarget, this);
}

void XWindowPeer::preInit($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$init($XWindow);
	$set(this, target, $cast($Component, $nc(params)->get($XWindow::TARGET)));
	$set(this, windowType, $nc(($cast($Window, this->target)))->getType());
	bool var$0 = isOverrideRedirect();
	params->put($XWindow::REPARENTED, $($Boolean::valueOf(var$0 || isSimpleWindow())));
	$XPanelPeer::preInit(params);
	$init($XBaseWindow);
	params->putIfNull($of($XBaseWindow::BIT_GRAVITY), $($of($Integer::valueOf($XConstants::NorthWestGravity))));
	int64_t eventMask = 0;
	if (params->containsKey($XBaseWindow::EVENT_MASK)) {
		eventMask = $nc(($cast($Long, $(params->get($XBaseWindow::EVENT_MASK)))))->longValue();
	}
	eventMask |= $XConstants::VisibilityChangeMask;
	params->put($XBaseWindow::EVENT_MASK, $($Long::valueOf(eventMask)));
	$set(this, XA_NET_WM_STATE, $XAtom::get("_NET_WM_STATE"_s));
	params->put($XBaseWindow::OVERRIDE_REDIRECT, $($Boolean::valueOf(isOverrideRedirect())));
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$1, nullptr);
		try {
			$nc(XWindowPeer::windows)->add(this);
		} catch ($Throwable& var$2) {
			$assign(var$1, var$2);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
	this->cachedFocusableWindow = isFocusableWindow();
	if (!$nc(this->target)->isFontSet()) {
		$nc(this->target)->setFont($($XWindow::getDefaultFont()));
	}
	if (!$nc(this->target)->isBackgroundSet()) {
		$init($SystemColor);
		$nc(this->target)->setBackground($SystemColor::window);
	}
	if (!$nc(this->target)->isForegroundSet()) {
		$init($SystemColor);
		$nc(this->target)->setForeground($SystemColor::windowText);
	}
	bool var$3 = $nc(($cast($Window, this->target)))->isAlwaysOnTop();
	this->alwaysOnTop = var$3 && $nc(($cast($Window, this->target)))->isAlwaysOnTopSupported();
	$var($GraphicsConfiguration, gc, getGraphicsConfiguration());
	$nc(($cast($X11GraphicsDevice, $($nc(gc)->getDevice()))))->addDisplayChangedListener(this);
}

$String* XWindowPeer::getWMName() {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(this->target)->getName());
	if (name == nullptr || $($nc(name)->trim())->isEmpty()) {
		$assign(name, " "_s);
	}
	return name;
}

$String* XWindowPeer::getLocalHostname() {
	$init(XWindowPeer);
	$var($String, $ret, nullptr);
	$prepareNativeStatic(XWindowPeer, getLocalHostname, $String*);
	$assign($ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

int32_t XWindowPeer::getJvmPID() {
	$init(XWindowPeer);
	int32_t $ret = 0;
	$prepareNativeStatic(XWindowPeer, getJvmPID, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void XWindowPeer::postInit($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$XPanelPeer::postInit(params);
	initWMProtocols();
	int64_t var$0 = getWindow();
	$nc($($XAtom::get("WM_CLIENT_MACHINE"_s)))->setProperty(var$0, $(getLocalHostname()));
	int64_t var$1 = getWindow();
	$nc($($XAtom::get("_NET_WM_PID"_s)))->setCard32Property(var$1, (int64_t)getJvmPID());
	$var($Window, t_window, $cast($Window, this->target));
	$var($Window, owner, $nc(t_window)->getOwner());
	if (owner != nullptr) {
		$set(this, ownerPeer, $cast(XWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(owner)));
		$init($PlatformLogger$Level);
		if ($nc(XWindowPeer::focusLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XWindowPeer::focusLog)->finer($$str({"Owner is "_s, owner}));
			$nc(XWindowPeer::focusLog)->finer($$str({"Owner peer is "_s, this->ownerPeer}));
			$nc(XWindowPeer::focusLog)->finer($$str({"Owner X window "_s, $($Long::toHexString($nc(this->ownerPeer)->getWindow()))}));
			$nc(XWindowPeer::focusLog)->finer($$str({"Owner content X window "_s, $($Long::toHexString($nc(this->ownerPeer)->getContentWindow()))}));
		}
		int64_t ownerWindow = $nc(this->ownerPeer)->getWindow();
		if (ownerWindow != 0) {
			$XToolkit::awtLock();
			{
				$var($Throwable, var$2, nullptr);
				try {
					if ($nc(XWindowPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
						$var($String, var$3, $$str({"Setting transient on "_s, $($Long::toHexString(getWindow())), " for "_s}));
						$nc(XWindowPeer::focusLog)->fine($$concat(var$3, $($Long::toHexString(ownerWindow))));
					}
					setToplevelTransientFor(this, this->ownerPeer, false, true);
					$var($XWMHints, hints, getWMHints());
					$nc(hints)->set_flags(hints->get_flags() | (int32_t)$XUtilConstants::WindowGroupHint);
					hints->set_window_group(ownerWindow);
					int64_t var$4 = $XToolkit::getDisplay();
					$XlibWrapper::XSetWMHints(var$4, getWindow(), hints->pData);
				} catch ($Throwable& var$5) {
					$assign(var$2, var$5);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		}
	}
	if (owner != nullptr || isSimpleWindow()) {
		$var($XNETProtocol, protocol, $nc($($XWM::getWM()))->getNETProtocol());
		if (protocol != nullptr && protocol->active()) {
			$XToolkit::awtLock();
			{
				$var($Throwable, var$6, nullptr);
				try {
					$var($XAtomList, net_wm_state, getNETWMState());
					$nc(net_wm_state)->add(protocol->XA_NET_WM_STATE_SKIP_TASKBAR);
					setNETWMState(net_wm_state);
				} catch ($Throwable& var$7) {
					$assign(var$6, var$7);
				} /*finally*/ {
					$XToolkit::awtUnlock();
				}
				if (var$6 != nullptr) {
					$throw(var$6);
				}
			}
		}
	}
	if ($nc(($cast($Window, this->target)))->getWarningString() != nullptr) {
		if (!$nc($($AWTAccessor::getWindowAccessor()))->isTrayIconWindow($cast($Window, this->target))) {
			$set(this, warningWindow, $new($XWarningWindow, $cast($Window, this->target), getWindow(), this));
		}
	}
	setSaveUnder(true);
	updateIconImages();
	updateShape();
	updateOpacity();
}

void XWindowPeer::updateIconImages() {
	$useLocalCurrentObjectStackCache();
	$var($Window, target, $cast($Window, this->target));
	$var($List, iconImages, $nc(target)->getIconImages());
	$var(XWindowPeer, ownerPeer, getOwnerPeer());
	$set($nc(this->winAttr), icons, $new($ArrayList));
	if ($nc(iconImages)->size() != 0) {
		$nc(this->winAttr)->iconsInherited = false;
		{
			$var($Iterator, i, iconImages->iterator());
			for (; $nc(i)->hasNext();) {
				$var($Image, image, $cast($Image, i->next()));
				if (image == nullptr) {
					$init($PlatformLogger$Level);
					if ($nc(XWindowPeer::log)->isLoggable($PlatformLogger$Level::FINEST)) {
						$nc(XWindowPeer::log)->finest("XWindowPeer.updateIconImages: Skipping the image passed into Java because it\'s null."_s);
					}
					continue;
				}
				$var($IconInfo, iconInfo, nullptr);
				try {
					$assign(iconInfo, $new($IconInfo, image));
				} catch ($Exception& e) {
					$init($PlatformLogger$Level);
					if ($nc(XWindowPeer::log)->isLoggable($PlatformLogger$Level::FINEST)) {
						$nc(XWindowPeer::log)->finest("XWindowPeer.updateIconImages: Perhaps the image passed into Java is broken. Skipping this icon."_s);
					}
					continue;
				}
				if ($nc(iconInfo)->isValid()) {
					$nc($nc(this->winAttr)->icons)->add(iconInfo);
				}
			}
		}
	}
	$set($nc(this->winAttr), icons, normalizeIconImages($nc(this->winAttr)->icons));
	if ($nc($nc(this->winAttr)->icons)->size() == 0) {
		if (ownerPeer != nullptr) {
			$nc(this->winAttr)->iconsInherited = true;
			$set($nc(this->winAttr), icons, ownerPeer->getIconInfo());
		} else {
			$nc(this->winAttr)->iconsInherited = false;
			$set($nc(this->winAttr), icons, getDefaultIconInfo());
		}
	}
	recursivelySetIcon($nc(this->winAttr)->icons);
}

$List* XWindowPeer::normalizeIconImages($List* icons) {
	$init(XWindowPeer);
	$useLocalCurrentObjectStackCache();
	$var($List, result, $new($ArrayList));
	int32_t totalLength = 0;
	bool haveLargeIcon = false;
	{
		$var($Iterator, i$, $nc(icons)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($IconInfo, icon, $cast($IconInfo, i$->next()));
			{
				int32_t width = $nc(icon)->getWidth();
				int32_t height = icon->getHeight();
				int32_t length = icon->getRawLength();
				if (width > XWindowPeer::PREFERRED_SIZE_FOR_ICON || height > XWindowPeer::PREFERRED_SIZE_FOR_ICON) {
					if (haveLargeIcon) {
						continue;
					}
					int32_t scaledWidth = width;
					int32_t scaledHeight = height;
					while (scaledWidth > XWindowPeer::PREFERRED_SIZE_FOR_ICON || scaledHeight > XWindowPeer::PREFERRED_SIZE_FOR_ICON) {
						scaledWidth = scaledWidth / 2;
						scaledHeight = scaledHeight / 2;
					}
					icon->setScaledSize(scaledWidth, scaledHeight);
					length = icon->getRawLength();
				}
				if (totalLength + length <= XWindowPeer::MAXIMUM_BUFFER_LENGTH_NET_WM_ICON) {
					totalLength += length;
					result->add(icon);
					if (width > XWindowPeer::PREFERRED_SIZE_FOR_ICON || height > XWindowPeer::PREFERRED_SIZE_FOR_ICON) {
						haveLargeIcon = true;
					}
				}
			}
		}
	}
	$init($PlatformLogger$Level);
	if ($nc(XWindowPeer::iconLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XWindowPeer::iconLog)->finest($$str({">>> Length_ of buffer of icons data: "_s, $$str(totalLength), ", maximum length: "_s, $$str(XWindowPeer::MAXIMUM_BUFFER_LENGTH_NET_WM_ICON)}));
	}
	return result;
}

void XWindowPeer::dumpIcons($List* icons) {
	$init(XWindowPeer);
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XWindowPeer::iconLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XWindowPeer::iconLog)->finest(">>> Sizes of icon images:"_s);
		{
			$var($Iterator, i, $nc(icons)->iterator());
			for (; $nc(i)->hasNext();) {
				$nc(XWindowPeer::iconLog)->finest("    {0}"_s, $$new($ObjectArray, {$(i->next())}));
			}
		}
	}
}

void XWindowPeer::recursivelySetIcon($List* icons) {
	$useLocalCurrentObjectStackCache();
	dumpIcons($nc(this->winAttr)->icons);
	setIconHints(icons);
	$var($Window, target, $cast($Window, this->target));
	$var($WindowArray, children, $nc(target)->getOwnedWindows());
	int32_t cnt = $nc(children)->length;
	$var($AWTAccessor$ComponentAccessor, acc, $AWTAccessor::getComponentAccessor());
	for (int32_t i = 0; i < cnt; ++i) {
		$var($ComponentPeer, childPeer, $nc(acc)->getPeer(children->get(i)));
		if (childPeer != nullptr && $instanceOf(XWindowPeer, childPeer)) {
			if ($nc($nc(($cast(XWindowPeer, childPeer)))->winAttr)->iconsInherited) {
				$set($nc($nc(($cast(XWindowPeer, childPeer)))->winAttr), icons, icons);
				$nc(($cast(XWindowPeer, childPeer)))->recursivelySetIcon(icons);
			}
		}
	}
}

$List* XWindowPeer::getIconInfo() {
	return $nc(this->winAttr)->icons;
}

void XWindowPeer::setIconHints($List* icons) {
}

$List* XWindowPeer::getDefaultIconInfo() {
	$load(XWindowPeer);
	$synchronized(class$) {
		$init(XWindowPeer);
		$useLocalCurrentObjectStackCache();
		if (XWindowPeer::defaultIconInfo == nullptr) {
			$assignStatic(XWindowPeer::defaultIconInfo, $new($ArrayList));
			$init($XlibWrapper);
			if ($XlibWrapper::dataModel == 32) {
				$init($AWTIcon32_java_icon16_png);
				$nc(XWindowPeer::defaultIconInfo)->add($$new($IconInfo, $AWTIcon32_java_icon16_png::java_icon16_png));
				$init($AWTIcon32_java_icon24_png);
				$nc(XWindowPeer::defaultIconInfo)->add($$new($IconInfo, $AWTIcon32_java_icon24_png::java_icon24_png));
				$init($AWTIcon32_java_icon32_png);
				$nc(XWindowPeer::defaultIconInfo)->add($$new($IconInfo, $AWTIcon32_java_icon32_png::java_icon32_png));
				$init($AWTIcon32_java_icon48_png);
				$nc(XWindowPeer::defaultIconInfo)->add($$new($IconInfo, $AWTIcon32_java_icon48_png::java_icon48_png));
			} else {
				$init($AWTIcon64_java_icon16_png);
				$nc(XWindowPeer::defaultIconInfo)->add($$new($IconInfo, $AWTIcon64_java_icon16_png::java_icon16_png));
				$init($AWTIcon64_java_icon24_png);
				$nc(XWindowPeer::defaultIconInfo)->add($$new($IconInfo, $AWTIcon64_java_icon24_png::java_icon24_png));
				$init($AWTIcon64_java_icon32_png);
				$nc(XWindowPeer::defaultIconInfo)->add($$new($IconInfo, $AWTIcon64_java_icon32_png::java_icon32_png));
				$init($AWTIcon64_java_icon48_png);
				$nc(XWindowPeer::defaultIconInfo)->add($$new($IconInfo, $AWTIcon64_java_icon48_png::java_icon48_png));
			}
		}
		return XWindowPeer::defaultIconInfo;
	}
}

void XWindowPeer::updateShape() {
	$useLocalCurrentObjectStackCache();
	$var($Shape, shape, $nc(($cast($Window, this->target)))->getShape());
	if (shape != nullptr) {
		applyShape($($Region::getInstance(shape, ($AffineTransform*)nullptr)));
	}
}

void XWindowPeer::updateOpacity() {
	float opacity = $nc(($cast($Window, this->target)))->getOpacity();
	if (opacity < 1.0f) {
		setOpacity(opacity);
	}
}

void XWindowPeer::updateMinimumSize() {
	$set(this, targetMinimumSize, ($nc(this->target)->isMinimumSizeSet()) ? $nc(this->target)->getMinimumSize() : ($Dimension*)nullptr);
}

$Dimension* XWindowPeer::getTargetMinimumSize() {
	return (this->targetMinimumSize == nullptr) ? ($Dimension*)nullptr : $new($Dimension, this->targetMinimumSize);
}

XWindowPeer* XWindowPeer::getOwnerPeer() {
	return this->ownerPeer;
}

void XWindowPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Rectangle, oldBounds, getBounds());
			$XPanelPeer::setBounds(x, y, width, height, op);
			$var($Rectangle, bounds, getBounds());
			$var($XSizeHints, hints, getHints());
			setSizeHints(($nc(hints)->get_flags() | $XUtilConstants::PPosition) | $XUtilConstants::PSize, $nc(bounds)->x, bounds->y, bounds->width, bounds->height);
			$XWM::setMotifDecor(this, false, 0, 0);
			bool isResized = !$nc($($nc(bounds)->getSize()))->equals($($nc(oldBounds)->getSize()));
			bool isMoved = !$nc($(bounds->getLocation()))->equals($($nc(oldBounds)->getLocation()));
			if (isMoved || isResized) {
				repositionSecurityWarning();
			}
			if (isResized) {
				postEventToEventQueue($$new($ComponentEvent, $(getEventSource()), $ComponentEvent::COMPONENT_RESIZED));
			}
			if (isMoved) {
				postEventToEventQueue($$new($ComponentEvent, $(getEventSource()), $ComponentEvent::COMPONENT_MOVED));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XWindowPeer::updateFocusability() {
	$useLocalCurrentObjectStackCache();
	updateFocusableWindowState();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($XWMHints, hints, getWMHints());
			$nc(hints)->set_flags(hints->get_flags() | (int32_t)$XUtilConstants::InputHint);
			hints->set_input(false);
			int64_t var$1 = $XToolkit::getDisplay();
			$XlibWrapper::XSetWMHints(var$1, getWindow(), hints->pData);
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Insets* XWindowPeer::getInsets() {
	return $new($Insets, 0, 0, 0, 0);
}

void XWindowPeer::handleIconify() {
	postEvent($$new($WindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_ICONIFIED));
}

void XWindowPeer::handleDeiconify() {
	postEvent($$new($WindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_DEICONIFIED));
}

void XWindowPeer::handleStateChange(int32_t oldState, int32_t newState) {
	postEvent($$new($WindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_STATE_CHANGED, oldState, newState));
}

bool XWindowPeer::isAutoRequestFocus() {
	if ($XToolkit::isToolkitThread()) {
		return $nc($($AWTAccessor::getWindowAccessor()))->isAutoRequestFocus($cast($Window, this->target));
	} else {
		return $nc(($cast($Window, this->target)))->isAutoRequestFocus();
	}
}

XWindowPeer* XWindowPeer::getNativeFocusedWindowPeer() {
	$init(XWindowPeer);
	$var($XBaseWindow, baseWindow, $XToolkit::windowToXWindow(xGetInputFocus()));
	return ($instanceOf(XWindowPeer, baseWindow)) ? $cast(XWindowPeer, baseWindow) : ($instanceOf($XFocusProxyWindow, baseWindow)) ? $nc(($cast($XFocusProxyWindow, baseWindow)))->getOwner() : (XWindowPeer*)nullptr;
}

$Window* XWindowPeer::getNativeFocusedWindow() {
	$init(XWindowPeer);
	$var(XWindowPeer, peer, getNativeFocusedWindowPeer());
	return peer != nullptr ? $cast($Window, $nc(peer)->target) : ($Window*)nullptr;
}

bool XWindowPeer::isFocusableWindow() {
	bool var$0 = $XToolkit::isToolkitThread();
	if (var$0 || $SunToolkit::isAWTLockHeldByCurrentThread()) {
		return this->cachedFocusableWindow;
	} else {
		return $nc(($cast($Window, this->target)))->isFocusableWindow();
	}
}

bool XWindowPeer::isFocusedWindowModalBlocker() {
	return false;
}

int64_t XWindowPeer::getFocusTargetWindow() {
	return getContentWindow();
}

bool XWindowPeer::isNativelyNonFocusableWindow() {
	bool var$0 = $XToolkit::isToolkitThread();
	if (var$0 || $SunToolkit::isAWTLockHeldByCurrentThread()) {
		return isSimpleWindow() || !this->cachedFocusableWindow;
	} else {
		bool var$1 = isSimpleWindow();
		return var$1 || !($nc(($cast($Window, this->target)))->isFocusableWindow());
	}
}

void XWindowPeer::handleWindowFocusIn_Dispatch() {
	$useLocalCurrentObjectStackCache();
	if ($EventQueue::isDispatchThread()) {
		$nc($($XKeyboardFocusManagerPeer::getInstance()))->setCurrentFocusedWindow($cast($Window, this->target));
		$var($WindowEvent, we, $new($WindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_GAINED_FOCUS));
		$SunToolkit::setSystemGenerated(we);
		$nc(this->target)->dispatchEvent(we);
	}
}

void XWindowPeer::handleWindowFocusInSync(int64_t serial) {
	$useLocalCurrentObjectStackCache();
	$var($WindowEvent, we, $new($WindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_GAINED_FOCUS));
	$nc($($XKeyboardFocusManagerPeer::getInstance()))->setCurrentFocusedWindow($cast($Window, this->target));
	sendEvent(we);
}

void XWindowPeer::handleWindowFocusIn(int64_t serial) {
	$useLocalCurrentObjectStackCache();
	$var($WindowEvent, we, $new($WindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_GAINED_FOCUS));
	$nc($($XKeyboardFocusManagerPeer::getInstance()))->setCurrentFocusedWindow($cast($Window, this->target));
	postEvent($(wrapInSequenced(static_cast<$AWTEvent*>(we))));
}

void XWindowPeer::handleWindowFocusOut($Window* oppositeWindow, int64_t serial) {
	$useLocalCurrentObjectStackCache();
	$var($WindowEvent, we, $new($WindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_LOST_FOCUS, oppositeWindow));
	$nc($($XKeyboardFocusManagerPeer::getInstance()))->setCurrentFocusedWindow(nullptr);
	$nc($($XKeyboardFocusManagerPeer::getInstance()))->setCurrentFocusOwner(nullptr);
	postEvent($(wrapInSequenced(static_cast<$AWTEvent*>(we))));
}

void XWindowPeer::handleWindowFocusOutSync($Window* oppositeWindow, int64_t serial) {
	$useLocalCurrentObjectStackCache();
	$var($WindowEvent, we, $new($WindowEvent, $cast($Window, this->target), $WindowEvent::WINDOW_LOST_FOCUS, oppositeWindow));
	$nc($($XKeyboardFocusManagerPeer::getInstance()))->setCurrentFocusedWindow(nullptr);
	$nc($($XKeyboardFocusManagerPeer::getInstance()))->setCurrentFocusOwner(nullptr);
	sendEvent(we);
}

void XWindowPeer::checkIfOnNewScreen($Rectangle* newBounds) {
	$useLocalCurrentObjectStackCache();
	$init($XToolkit);
	if (!$nc($XToolkit::localEnv)->runningXinerama()) {
		return;
	}
	$init($PlatformLogger$Level);
	if ($nc(XWindowPeer::log)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(XWindowPeer::log)->finest("XWindowPeer: Check if we\'ve been moved to a new screen since we\'re running in Xinerama mode"_s);
	}
	int32_t area = $nc(newBounds)->width * newBounds->height;
	int32_t intAmt = 0;
	int32_t vertAmt = 0;
	int32_t horizAmt = 0;
	int32_t largestAmt = 0;
	int32_t curScreenNum = $nc(($cast($X11GraphicsDevice, $($nc($(getGraphicsConfiguration()))->getDevice()))))->getScreen();
	int32_t newScreenNum = 0;
	$var($GraphicsDeviceArray, gds, $nc($XToolkit::localEnv)->getScreenDevices());
	$var($GraphicsConfiguration, newGC, nullptr);
	$var($Rectangle, screenBounds, nullptr);
	$XToolkit::awtUnlock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			for (int32_t i = 0; i < $nc(gds)->length; ++i) {
				$assign(screenBounds, $nc($($nc(gds->get(i))->getDefaultConfiguration()))->getBounds());
				if (newBounds->intersects(screenBounds)) {
					int32_t var$1 = $Math::min(newBounds->x + newBounds->width, $nc(screenBounds)->x + screenBounds->width);
					horizAmt = var$1 - $Math::max(newBounds->x, $nc(screenBounds)->x);
					int32_t var$2 = $Math::min(newBounds->y + newBounds->height, $nc(screenBounds)->y + screenBounds->height);
					vertAmt = var$2 - $Math::max(newBounds->y, $nc(screenBounds)->y);
					intAmt = horizAmt * vertAmt;
					if (intAmt == area) {
						newScreenNum = i;
						$assign(newGC, $nc(gds->get(i))->getDefaultConfiguration());
						break;
					}
					if (intAmt > largestAmt) {
						largestAmt = intAmt;
						newScreenNum = i;
						$assign(newGC, $nc(gds->get(i))->getDefaultConfiguration());
					}
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$XToolkit::awtLock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (newScreenNum != curScreenNum) {
		if ($nc(XWindowPeer::log)->isLoggable($PlatformLogger$Level::FINEST)) {
			$nc(XWindowPeer::log)->finest("XWindowPeer: Moved to a new screen"_s);
		}
		executeDisplayChangedOnEDT(newGC);
	}
}

void XWindowPeer::executeDisplayChangedOnEDT($GraphicsConfiguration* gc) {
	$var($Runnable, dc, $new($XWindowPeer$1, this, gc));
	$SunToolkit::executeOnEventHandlerThread(this->target, dc);
}

void XWindowPeer::displayChanged() {
	executeDisplayChangedOnEDT($(getGraphicsConfiguration()));
}

void XWindowPeer::paletteChanged() {
}

$Point* XWindowPeer::queryXLocation() {
	int64_t var$0 = getContentWindow();
	int64_t var$2 = $XToolkit::getDisplay();
	int64_t var$1 = $XlibWrapper::RootWindow(var$2, getScreenNumber());
	$var($Point, var$3, $new($Point, 0, 0));
	return $XlibUtil::translateCoordinates(var$0, var$1, var$3, getScale());
}

$Point* XWindowPeer::getNewLocation($XConfigureEvent* xe, int32_t leftInset, int32_t topInset) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, targetBounds, $nc($($AWTAccessor::getComponentAccessor()))->getBounds(this->target));
	int32_t runningWM = $XWM::getWMID();
	$var($Point, newLocation, $nc(targetBounds)->getLocation());
	bool var$0 = $nc(xe)->get_send_event() || runningWM == $XWM::NO_WM;
	if (var$0 || $XWM::isNonReparentingWM()) {
		int32_t var$1 = scaleDown($nc(xe)->get_x()) - leftInset;
		$assign(newLocation, $new($Point, var$1, scaleDown($nc(xe)->get_y()) - topInset));
	} else {
		switch (runningWM) {
		case $XWM::CDE_WM:
			{}
		case $XWM::MOTIF_WM:
			{}
		case $XWM::METACITY_WM:
			{}
		case $XWM::MUTTER_WM:
			{}
		case $XWM::SAWFISH_WM:
			{}
		case $XWM::UNITY_COMPIZ_WM:
			{
				{
					$var($Point, xlocation, queryXLocation());
					$init($PlatformLogger$Level);
					if ($nc(XWindowPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
						$nc(XWindowPeer::log)->fine("New X location: {0}"_s, $$new($ObjectArray, {$of(xlocation)}));
					}
					if (xlocation != nullptr) {
						$assign(newLocation, xlocation);
					}
					break;
				}
			}
		default:
			{
				break;
			}
		}
	}
	return newLocation;
}

void XWindowPeer::handleConfigureNotifyEvent($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	if (!XWindowPeer::$assertionsDisabled && !($SunToolkit::isAWTLockHeldByCurrentThread())) {
		$throwNew($AssertionError);
	}
	$var($XConfigureEvent, xe, $nc(xev)->get_xconfigure());
	$init($PlatformLogger$Level);
	if ($nc(XWindowPeer::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWindowPeer::insLog)->fine($($nc(xe)->toString()));
	}
	int32_t var$0 = scaleDown($nc(xe)->get_x());
	int32_t var$1 = scaleDown($nc(xe)->get_y());
	int32_t var$2 = scaleDown($nc(xe)->get_width());
	checkIfOnNewScreen($(toGlobal($$new($Rectangle, var$0, var$1, var$2, scaleDown($nc(xe)->get_height())))));
	$var($Rectangle, oldBounds, getBounds());
	this->x = scaleDown($nc(xe)->get_x());
	this->y = scaleDown($nc(xe)->get_y());
	this->width = scaleDown($nc(xe)->get_width());
	this->height = scaleDown($nc(xe)->get_height());
	if (!$nc($($nc($(getBounds()))->getSize()))->equals($($nc(oldBounds)->getSize()))) {
		$nc($($AWTAccessor::getComponentAccessor()))->setSize(this->target, this->width, this->height);
		postEvent($$new($ComponentEvent, this->target, $ComponentEvent::COMPONENT_RESIZED));
	}
	if (!$nc($($nc($(getBounds()))->getLocation()))->equals($($nc(oldBounds)->getLocation()))) {
		$nc($($AWTAccessor::getComponentAccessor()))->setLocation(this->target, this->x, this->y);
		postEvent($$new($ComponentEvent, this->target, $ComponentEvent::COMPONENT_MOVED));
	}
	repositionSecurityWarning();
}

void XWindowPeer::requestXFocus(int64_t time) {
	requestXFocus(time, true);
}

void XWindowPeer::requestXFocus() {
	requestXFocus(0, false);
}

void XWindowPeer::requestXFocus(int64_t time, bool timeProvided) {
	$init($PlatformLogger$Level);
	if ($nc(XWindowPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWindowPeer::focusLog)->fine("Requesting window focus"_s);
	}
	requestWindowFocus(time, timeProvided);
}

bool XWindowPeer::focusAllowedFor() {
	if (isNativelyNonFocusableWindow()) {
		return false;
	}
	if (isModalBlocked()) {
		return false;
	}
	return true;
}

void XWindowPeer::handleFocusEvent($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XFocusChangeEvent, xfe, $nc(xev)->get_xfocus());
	$var($FocusEvent, fe, nullptr);
	$init($PlatformLogger$Level);
	if ($nc(XWindowPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWindowPeer::focusLog)->fine("{0}"_s, $$new($ObjectArray, {$of(xfe)}));
	}
	if (isEventDisabled(xev)) {
		return;
	}
	if (xev->get_type() == $XConstants::FocusIn) {
		if (focusAllowedFor()) {
			bool var$0 = $nc(xfe)->get_mode() == $XConstants::NotifyNormal;
			if (var$0 || $nc(xfe)->get_mode() == $XConstants::NotifyWhileGrabbed) {
				handleWindowFocusIn(xfe->get_serial());
			}
		}
	} else {
		bool var$2 = $nc(xfe)->get_mode() == $XConstants::NotifyNormal;
		if (var$2 || $nc(xfe)->get_mode() == $XConstants::NotifyWhileGrabbed) {
			if (!isNativelyNonFocusableWindow()) {
				$var(XWindowPeer, oppositeXWindow, getNativeFocusedWindowPeer());
				$var($Object, oppositeTarget, (oppositeXWindow != nullptr) ? $nc(oppositeXWindow)->getTarget() : ($Object*)nullptr);
				$var($Window, oppositeWindow, nullptr);
				if ($instanceOf($Window, oppositeTarget)) {
					$assign(oppositeWindow, $cast($Window, oppositeTarget));
				}
				if (oppositeXWindow != nullptr && oppositeXWindow->isNativelyNonFocusableWindow()) {
					return;
				}
				if (this == oppositeXWindow) {
					$assign(oppositeWindow, nullptr);
				} else if ($instanceOf($XDecoratedPeer, oppositeXWindow)) {
					if ($nc(($cast($XDecoratedPeer, oppositeXWindow)))->actualFocusedWindow != nullptr) {
						$assign(oppositeXWindow, $nc(($cast($XDecoratedPeer, oppositeXWindow)))->actualFocusedWindow);
						$assign(oppositeTarget, $nc(oppositeXWindow)->getTarget());
						bool var$3 = $instanceOf($Window, oppositeTarget) && oppositeXWindow->isVisible();
						if (var$3 && oppositeXWindow->isNativelyNonFocusableWindow()) {
							$assign(oppositeWindow, $cast($Window, oppositeTarget));
						}
					}
				}
				handleWindowFocusOut(oppositeWindow, xfe->get_serial());
			}
		}
	}
}

void XWindowPeer::setSaveUnder(bool state) {
}

void XWindowPeer::toFront() {
	if (isOverrideRedirect() && this->mustControlStackPosition) {
		this->mustControlStackPosition = false;
		removeRootPropertyEventDispatcher();
	}
	if (isVisible()) {
		$XPanelPeer::toFront();
		bool var$2 = isFocusableWindow();
		bool var$1 = var$2 && isAutoRequestFocus();
		bool var$0 = var$1 && !isModalBlocked();
		if (var$0 && !isWithdrawn()) {
			requestInitialFocus();
		}
	} else {
		setVisible(true);
	}
}

void XWindowPeer::toBack() {
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (!isOverrideRedirect()) {
				int64_t var$1 = $XToolkit::getDisplay();
				$XlibWrapper::XLowerWindow(var$1, getWindow());
			} else {
				lowerOverrideRedirect();
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XWindowPeer::lowerOverrideRedirect() {
	$useLocalCurrentObjectStackCache();
	$var($HashSet, toplevels, $new($HashSet));
	int64_t topl = 0;
	int64_t mytopl = 0;
	{
		$var($Iterator, i$, $nc(XWindowPeer::windows)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var(XWindowPeer, xp, $cast(XWindowPeer, i$->next()));
			{
				topl = getToplevelWindow($nc(xp)->getWindow());
				if ($nc($of(xp))->equals(this)) {
					mytopl = topl;
				}
				if (topl > 0) {
					toplevels->add($($Long::valueOf(topl)));
				}
			}
		}
	}
	int64_t laux = 0;
	int64_t wDesktop = -1;
	int64_t wBottom = -1;
	int32_t iMy = -1;
	int32_t iDesktop = -1;
	int32_t iBottom = -1;
	int32_t i = 0;
	$var($XQueryTree, xqt, $new($XQueryTree, $XToolkit::getDefaultRootWindow()));
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			if (xqt->execute() > 0) {
				int32_t nchildren = xqt->get_nchildren();
				int64_t children = xqt->get_children();
				for (i = 0; i < nchildren; ++i) {
					laux = $Native::getWindow(children, i);
					if (laux == mytopl) {
						iMy = i;
					} else if (isDesktopWindow(laux)) {
						iDesktop = i;
						wDesktop = laux;
					} else if (iBottom < 0 && toplevels->contains($($Long::valueOf(laux))) && laux != mytopl) {
						iBottom = i;
						wBottom = laux;
					}
				}
			}
			if ((iMy < iBottom || iBottom < 0) && iDesktop < iMy) {
				return$1 = true;
				goto $finally;
			}
			int64_t to_restack = $Native::allocateLongArray(2);
			$Native::putLong(to_restack, 0, wBottom);
			$Native::putLong(to_restack, 1, mytopl);
			$XlibWrapper::XRestackWindows($XToolkit::getDisplay(), to_restack, 2);
			$nc($XlibWrapper::unsafe)->freeMemory(to_restack);
			if (!this->mustControlStackPosition) {
				this->mustControlStackPosition = true;
				addRootPropertyEventDispatcher();
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			xqt->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

int64_t XWindowPeer::getToplevelWindow(int64_t w) {
	$useLocalCurrentObjectStackCache();
	int64_t wi = w;
	int64_t ret = 0;
	int64_t root = 0;
	do {
		ret = wi;
		$var($XQueryTree, qt, $new($XQueryTree, wi));
		{
			$var($Throwable, var$0, nullptr);
			int64_t var$2 = 0;
			bool return$1 = false;
			try {
				if (qt->execute() == 0) {
					var$2 = 0;
					return$1 = true;
					goto $finally;
				}
				root = qt->get_root();
				wi = qt->get_parent();
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				qt->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} while (wi != root);
	return ret;
}

bool XWindowPeer::isDesktopWindow(int64_t wi) {
	$init(XWindowPeer);
	return $nc($($XWM::getWM()))->isDesktopWindow(wi);
}

void XWindowPeer::updateAlwaysOnTop() {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XWindowPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWindowPeer::log)->fine("Promoting always-on-top state {0}"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(this->alwaysOnTop)))}));
	}
	$nc($($XWM::getWM()))->setLayer(this, this->alwaysOnTop ? $XLayerProtocol::LAYER_ALWAYS_ON_TOP : $XLayerProtocol::LAYER_NORMAL);
}

void XWindowPeer::updateAlwaysOnTopState() {
	this->alwaysOnTop = $nc(($cast($Window, this->target)))->isAlwaysOnTop();
	if (this->ownerPeer != nullptr) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				restoreTransientFor(this);
				applyWindowType();
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	updateAlwaysOnTop();
}

bool XWindowPeer::isLocationByPlatform() {
	return this->locationByPlatform;
}

void XWindowPeer::promoteDefaultPosition() {
	$useLocalCurrentObjectStackCache();
	this->locationByPlatform = $nc(($cast($Window, this->target)))->isLocationByPlatform();
	if (this->locationByPlatform) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($Rectangle, bounds, getBounds());
				$var($XSizeHints, hints, getHints());
				setSizeHints((int64_t)($nc(hints)->get_flags() & (uint64_t)~($XUtilConstants::USPosition | $XUtilConstants::PPosition)), $nc(bounds)->x, bounds->y, bounds->width, bounds->height);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void XWindowPeer::setVisible(bool vis) {
	$useLocalCurrentObjectStackCache();
	if (!isVisible() && vis) {
		this->isBeforeFirstMapNotify = true;
		$nc(this->winAttr)->initialFocus = isAutoRequestFocus();
		if (!$nc(this->winAttr)->initialFocus) {
			suppressWmTakeFocus(true);
		}
	}
	updateFocusability();
	promoteDefaultPosition();
	if (!vis && this->warningWindow != nullptr) {
		$nc(this->warningWindow)->setSecurityWarningVisible(false, false);
	}
	bool refreshChildsTransientFor = isVisible() != vis;
	$XPanelPeer::setVisible(vis);
	if (refreshChildsTransientFor) {
		{
			$var($WindowArray, arr$, $nc(($cast($Window, this->target)))->getOwnedWindows());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Window, child, arr$->get(i$));
				{
					$XToolkit::awtLock();
					{
						$var($Throwable, var$0, nullptr);
						try {
							bool var$1 = !$nc(child)->isLightweight();
							if (var$1 && child->isVisible()) {
								$var($ComponentPeer, childPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(child));
								if ($instanceOf(XWindowPeer, childPeer)) {
									$var(XWindowPeer, windowPeer, $cast(XWindowPeer, childPeer));
									restoreTransientFor(windowPeer);
									$nc(windowPeer)->applyWindowType();
								}
							}
						} catch ($Throwable& var$2) {
							$assign(var$0, var$2);
						} /*finally*/ {
							$XToolkit::awtUnlock();
						}
						if (var$0 != nullptr) {
							$throw(var$0);
						}
					}
				}
			}
		}
	}
	if (!vis && !isWithdrawn()) {
		$XToolkit::awtLock();
		{
			$var($Throwable, var$3, nullptr);
			try {
				$var($XUnmapEvent, unmap, $new($XUnmapEvent));
				unmap->set_window(this->window);
				unmap->set_event($XToolkit::getDefaultRootWindow());
				unmap->set_type($XConstants::UnmapNotify);
				unmap->set_from_configure(false);
				int64_t var$4 = $XToolkit::getDisplay();
				$XlibWrapper::XSendEvent(var$4, $XToolkit::getDefaultRootWindow(), false, $XConstants::SubstructureNotifyMask | $XConstants::SubstructureRedirectMask, unmap->pData);
				unmap->dispose();
			} catch ($Throwable& var$5) {
				$assign(var$3, var$5);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$3 != nullptr) {
				$throw(var$3);
			}
		}
	}
	if (isOverrideRedirect() && vis) {
		updateChildrenSizes();
	}
	repositionSecurityWarning();
}

void XWindowPeer::suppressWmTakeFocus(bool doSuppress) {
}

bool XWindowPeer::isSimpleWindow() {
	return !($instanceOf($Frame, this->target) || $instanceOf($Dialog, this->target));
}

bool XWindowPeer::hasWarningWindow() {
	return $nc(($cast($Window, this->target)))->getWarningString() != nullptr;
}

int32_t XWindowPeer::getMenuBarHeight() {
	return 0;
}

void XWindowPeer::updateChildrenSizes() {
}

void XWindowPeer::repositionSecurityWarning() {
	if (this->warningWindow != nullptr) {
		$var($AWTAccessor$ComponentAccessor, compAccessor, $AWTAccessor::getComponentAccessor());
		int32_t x = $nc(compAccessor)->getX(this->target);
		int32_t y = compAccessor->getY(this->target);
		int32_t width = compAccessor->getWidth(this->target);
		int32_t height = compAccessor->getHeight(this->target);
		$nc(this->warningWindow)->reposition(x, y, width, height);
	}
}

void XWindowPeer::setMouseAbove(bool above) {
	$XPanelPeer::setMouseAbove(above);
	updateSecurityWarningVisibility();
}

void XWindowPeer::setFullScreenExclusiveModeState(bool state) {
	$XPanelPeer::setFullScreenExclusiveModeState(state);
	updateSecurityWarningVisibility();
}

void XWindowPeer::updateSecurityWarningVisibility() {
	if (this->warningWindow == nullptr) {
		return;
	}
	if (!isVisible()) {
		return;
	}
	bool show = false;
	if (!isFullScreenExclusiveMode()) {
		int32_t state = getWMState();
		bool var$0 = isVisible();
		if (var$0 && (state == $XUtilConstants::NormalState || isSimpleWindow())) {
			if ($equals($nc($($XKeyboardFocusManagerPeer::getInstance()))->getCurrentFocusedWindow(), getTarget())) {
				show = true;
			}
			bool var$1 = isMouseAbove();
			if (var$1 || $nc(this->warningWindow)->isMouseAbove()) {
				show = true;
			}
		}
	}
	$nc(this->warningWindow)->setSecurityWarningVisible(show, true);
}

bool XWindowPeer::isOverrideRedirect() {
	bool var$0 = $XWM::getWMID() == $XWM::OPENLOOK_WM;
	$init($Window$Type);
	return var$0 || $Window$Type::POPUP->equals($(getWindowType()));
}

bool XWindowPeer::isOLWMDecorBug() {
	return $XWM::getWMID() == $XWM::OPENLOOK_WM && $nc(this->winAttr)->nativeDecor == false;
}

void XWindowPeer::dispose() {
	$useLocalCurrentObjectStackCache();
	if (isGrabbed()) {
		$init($PlatformLogger$Level);
		if ($nc(XWindowPeer::grabLog)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(XWindowPeer::grabLog)->fine("Generating UngrabEvent on {0} because of the window disposal"_s, $$new($ObjectArray, {$of(this)}));
		}
		postEventToEventQueue($$new($UngrabEvent, $(getEventSource())));
	}
	$SunToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(XWindowPeer::windows)->remove(this);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SunToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (this->warningWindow != nullptr) {
		$nc(this->warningWindow)->destroy();
	}
	removeRootPropertyEventDispatcher();
	this->mustControlStackPosition = false;
	$XPanelPeer::dispose();
	if (isSimpleWindow()) {
		if ($equals(this->target, $nc($($XKeyboardFocusManagerPeer::getInstance()))->getCurrentFocusedWindow())) {
			$var($Window, owner, getDecoratedOwner($cast($Window, this->target)));
			$nc(($cast(XWindowPeer, $($nc($($AWTAccessor::getComponentAccessor()))->getPeer(owner)))))->requestWindowFocus();
		}
	}
}

bool XWindowPeer::isResizable() {
	return $nc(this->winAttr)->isResizable;
}

void XWindowPeer::handleVisibilityEvent($XEvent* xev) {
	$XPanelPeer::handleVisibilityEvent(xev);
	$var($XVisibilityEvent, ve, $nc(xev)->get_xvisibility());
	$nc(this->winAttr)->visibilityState = $nc(ve)->get_state();
	repositionSecurityWarning();
}

void XWindowPeer::handleRootPropertyNotify($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XPropertyEvent, ev, $nc(xev)->get_xproperty());
	bool var$0 = this->mustControlStackPosition;
	if (var$0) {
		int64_t var$1 = $nc(ev)->get_atom();
		var$0 = var$1 == $nc($($XAtom::get("_NET_CLIENT_LIST_STACKING"_s)))->getAtom();
	}
	if (var$0) {
		if (isOverrideRedirect()) {
			toBack();
		}
	}
}

void XWindowPeer::removeStartupNotification() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($nc(XWindowPeer::isStartupNotificationRemoved)->getAndSet(true)) {
		return;
	}
	$var($String, desktopStartupId, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($XWindowPeer$2, this)))));
	if (desktopStartupId == nullptr) {
		return;
	}
	$var($StringBuilder, messageBuilder, $new($StringBuilder, "remove: ID="_s));
	messageBuilder->append(u'\"');
	for (int32_t i = 0; i < $nc(desktopStartupId)->length(); ++i) {
		bool var$0 = desktopStartupId->charAt(i) == u'\"';
		if (var$0 || desktopStartupId->charAt(i) == u'\\') {
			messageBuilder->append(u'\\');
		}
		messageBuilder->append(desktopStartupId->charAt(i));
	}
	messageBuilder->append(u'\"');
	messageBuilder->append(u'\0');
	$var($bytes, message, nullptr);
	try {
		$assign(message, $nc($(messageBuilder->toString()))->getBytes("UTF-8"_s));
	} catch ($UnsupportedEncodingException& cannotHappen) {
		return;
	}
	$var($XClientMessageEvent, req, nullptr);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$1, nullptr);
		try {
			$var($XAtom, netStartupInfoBeginAtom, $XAtom::get("_NET_STARTUP_INFO_BEGIN"_s));
			$var($XAtom, netStartupInfoAtom, $XAtom::get("_NET_STARTUP_INFO"_s));
			$assign(req, $new($XClientMessageEvent));
			req->set_type($XConstants::ClientMessage);
			req->set_window(getWindow());
			req->set_message_type($nc(netStartupInfoBeginAtom)->getAtom());
			req->set_format(8);
			for (int32_t pos = 0; pos < $nc(message)->length; pos += 20) {
				int32_t msglen = $Math::min(message->length - pos, 20);
				int32_t i = 0;
				for (; i < msglen; ++i) {
					$init($XlibWrapper);
					$nc($XlibWrapper::unsafe)->putByte(req->get_data() + i, message->get(pos + i));
				}
				for (; i < 20; ++i) {
					$init($XlibWrapper);
					$nc($XlibWrapper::unsafe)->putByte(req->get_data() + i, (int8_t)0);
				}
				int64_t var$2 = $XToolkit::getDisplay();
				int64_t var$3 = $XToolkit::getDisplay();
				$XlibWrapper::XSendEvent(var$2, $XlibWrapper::RootWindow(var$3, getScreenNumber()), false, $XConstants::PropertyChangeMask, req->pData);
				req->set_message_type($nc(netStartupInfoAtom)->getAtom());
			}
		} catch ($Throwable& var$4) {
			$assign(var$1, var$4);
		} /*finally*/ {
			$XToolkit::awtUnlock();
			if (req != nullptr) {
				req->dispose();
			}
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
}

void XWindowPeer::handleMapNotifyEvent($XEvent* xev) {
	removeStartupNotification();
	this->isUnhiding |= isWMStateNetHidden();
	$XPanelPeer::handleMapNotifyEvent(xev);
	if (!$nc(this->winAttr)->initialFocus) {
		suppressWmTakeFocus(false);
		$XToolkit::awtLock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				int64_t var$1 = $XToolkit::getDisplay();
				$XlibWrapper::XRaiseWindow(var$1, getWindow());
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	if (shouldFocusOnMapNotify()) {
		$nc(XWindowPeer::focusLog)->fine("Automatically request focus on window"_s);
		requestInitialFocus();
	}
	this->isUnhiding = false;
	this->isBeforeFirstMapNotify = false;
	updateAlwaysOnTop();
	$synchronized(getStateLock()) {
		if (!this->isMapped$) {
			this->isMapped$ = true;
		}
	}
}

void XWindowPeer::handleUnmapNotifyEvent($XEvent* xev) {
	$XPanelPeer::handleUnmapNotifyEvent(xev);
	this->isUnhiding |= isWMStateNetHidden();
	$synchronized(getStateLock()) {
		if (this->isMapped$) {
			this->isMapped$ = false;
		}
	}
}

bool XWindowPeer::shouldFocusOnMapNotify() {
	bool res = false;
	if (this->isBeforeFirstMapNotify) {
		res = ($nc(this->winAttr)->initialFocus || isFocusedWindowModalBlocker());
	} else {
		res = this->isUnhiding;
	}
	bool var$0 = res && isFocusableWindow();
	res = var$0 && !isModalBlocked();
	return res;
}

bool XWindowPeer::isWMStateNetHidden() {
	$useLocalCurrentObjectStackCache();
	$var($XNETProtocol, protocol, $nc($($XWM::getWM()))->getNETProtocol());
	return (protocol != nullptr && protocol->isWMStateNetHidden(this));
}

void XWindowPeer::requestInitialFocus() {
	requestXFocus();
}

void XWindowPeer::addToplevelStateListener($ToplevelStateListener* l) {
	$nc(this->toplevelStateListeners)->add(l);
}

void XWindowPeer::removeToplevelStateListener($ToplevelStateListener* l) {
	$nc(this->toplevelStateListeners)->remove($of(l));
}

void XWindowPeer::stateChanged(int64_t time, int32_t oldState, int32_t newState) {
	$useLocalCurrentObjectStackCache();
	updateTransientFor();
	{
		$var($Iterator, i$, $nc(this->toplevelStateListeners)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ToplevelStateListener, topLevelListenerTmp, $cast($ToplevelStateListener, i$->next()));
			{
				$nc(topLevelListenerTmp)->stateChangedICCCM(oldState, newState);
			}
		}
	}
	updateSecurityWarningVisibility();
}

bool XWindowPeer::isWithdrawn() {
	return getWMState() == $XUtilConstants::WithdrawnState;
}

bool XWindowPeer::hasDecorations(int32_t decor) {
	if (!$nc(this->winAttr)->nativeDecor) {
		return false;
	} else {
		int32_t myDecor = $nc(this->winAttr)->decorations;
		bool hasBits = (((int32_t)(myDecor & (uint32_t)decor)) == decor);
		$init($XWindowAttributesData);
		if (((int32_t)(myDecor & (uint32_t)$XWindowAttributesData::AWT_DECOR_ALL)) != 0) {
			return !hasBits;
		} else {
			return hasBits;
		}
	}
}

void XWindowPeer::setReparented(bool newValue) {
	$useLocalCurrentObjectStackCache();
	$XPanelPeer::setReparented(newValue);
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (isReparented() && this->delayedModalBlocking) {
				addToTransientFors($cast($XDialogPeer, $($nc($($AWTAccessor::getComponentAccessor()))->getPeer(this->modalBlocker))));
				this->delayedModalBlocking = false;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Vector* XWindowPeer::collectJavaToplevels() {
	$init(XWindowPeer);
	$useLocalCurrentObjectStackCache();
	$var($Vector, javaToplevels, $new($Vector));
	$var($Vector, v, $new($Vector));
	$var($X11GraphicsEnvironment, ge, $cast($X11GraphicsEnvironment, $GraphicsEnvironment::getLocalGraphicsEnvironment()));
	$var($GraphicsDeviceArray, gds, $nc(ge)->getScreenDevices());
	if (!ge->runningXinerama() && ($nc(gds)->length > 1)) {
		{
			$var($GraphicsDeviceArray, arr$, gds);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($GraphicsDevice, gd, arr$->get(i$));
				{
					int32_t screen = $nc(($cast($X11GraphicsDevice, gd)))->getScreen();
					int64_t rootWindow = $XlibWrapper::RootWindow($XToolkit::getDisplay(), screen);
					v->add($($Long::valueOf(rootWindow)));
				}
			}
		}
	} else {
		v->add($($Long::valueOf($XToolkit::getDefaultRootWindow())));
	}
	int32_t windowsCount = $nc(XWindowPeer::windows)->size();
	while (true) {
		bool var$0 = (v->size() > 0);
		if (!(var$0 && (javaToplevels->size() < windowsCount))) {
			break;
		}
		{
			int64_t win = $nc(($cast($Long, $(v->remove(0)))))->longValue();
			$var($XQueryTree, qt, $new($XQueryTree, win));
			{
				$var($Throwable, var$1, nullptr);
				try {
					if (qt->execute() != 0) {
						int32_t nchildren = qt->get_nchildren();
						int64_t children = qt->get_children();
						for (int32_t i = 0; i < nchildren; ++i) {
							int64_t child = $Native::getWindow(children, i);
							$var($XBaseWindow, childWindow, $XToolkit::windowToXWindow(child));
							if ((childWindow != nullptr) && !($instanceOf(XWindowPeer, childWindow))) {
								continue;
							} else {
								v->add($($Long::valueOf(child)));
							}
							if ($instanceOf(XWindowPeer, childWindow)) {
								$var(XWindowPeer, np, $cast(XWindowPeer, childWindow));
								javaToplevels->add(np);
								int32_t k = 0;
								$var(XWindowPeer, toCheck, $cast(XWindowPeer, javaToplevels->get(k)));
								while (toCheck != np) {
									$var(XWindowPeer, toCheckOwnerPeer, $nc(toCheck)->getOwnerPeer());
									if (toCheckOwnerPeer == np) {
										javaToplevels->remove(k);
										javaToplevels->add(toCheck);
									} else {
										++k;
									}
									$assign(toCheck, $cast(XWindowPeer, javaToplevels->get(k)));
								}
							}
						}
					}
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					qt->dispose();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		}
	}
	return javaToplevels;
}

void XWindowPeer::setModalBlocked($Dialog* d, bool blocked) {
	setModalBlocked(d, blocked, nullptr);
}

void XWindowPeer::setModalBlocked($Dialog* d, bool blocked, $Vector* javaToplevels) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$synchronized(getStateLock()) {
				$var($XDialogPeer, blockerPeer, $cast($XDialogPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(d)));
				if (blocked) {
					$init($PlatformLogger$Level);
					if ($nc(XWindowPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
						$nc(XWindowPeer::log)->fine("{0} is blocked by {1}"_s, $$new($ObjectArray, {
							$of(this),
							$of(blockerPeer)
						}));
					}
					$set(this, modalBlocker, d);
					bool var$1 = isReparented();
					if (var$1 || $XWM::isNonReparentingWM()) {
						addToTransientFors(blockerPeer, javaToplevels);
					} else {
						this->delayedModalBlocking = true;
					}
				} else {
					if (d != this->modalBlocker) {
						$throwNew($IllegalStateException, "Trying to unblock window blocked by another dialog"_s);
					}
					$set(this, modalBlocker, nullptr);
					bool var$2 = isReparented();
					if (var$2 || $XWM::isNonReparentingWM()) {
						removeFromTransientFors();
					} else {
						this->delayedModalBlocking = false;
					}
				}
				updateTransientFor();
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XWindowPeer::setToplevelTransientFor(XWindowPeer* window, XWindowPeer* transientForWindow, bool updateChain, bool allStates) {
	$init(XWindowPeer);
	$useLocalCurrentObjectStackCache();
	if ((window == nullptr) || (transientForWindow == nullptr)) {
		return;
	}
	if (updateChain) {
		$set($nc(window), prevTransientFor, transientForWindow);
		$set($nc(transientForWindow), nextTransientFor, window);
	}
	bool var$0 = !allStates;
	if (var$0) {
		int32_t var$1 = $nc(window)->getWMState();
		var$0 = (var$1 != $nc(transientForWindow)->getWMState());
	}
	if (var$0) {
		return;
	}
	int64_t var$2 = $nc(window)->getScreenNumber();
	if (var$2 != $nc(transientForWindow)->getScreenNumber()) {
		return;
	}
	int64_t bpw = $nc(window)->getWindow();
	while (true) {
		bool var$3 = !$XlibUtil::isToplevelWindow(bpw);
		if (!(var$3 && !$XlibUtil::isXAWTToplevelWindow(bpw))) {
			break;
		}
		{
			bpw = $XlibUtil::getParentWindow(bpw);
		}
	}
	int64_t tpw = $nc(transientForWindow)->getWindow();
	$var($XBaseWindow, parent, transientForWindow);
	while (true) {
		bool var$4 = tpw != 0;
		if (var$4) {
			bool var$6 = !$XlibUtil::isToplevelWindow(tpw);
			bool var$5 = (var$6 && !$XlibUtil::isXAWTToplevelWindow(tpw));
			var$4 = (var$5 || !$nc(parent)->isVisible());
		}
		if (!(var$4)) {
			break;
		}
		{
			tpw = $XlibUtil::getParentWindow(tpw);
			$assign(parent, $XToolkit::windowToXWindow(tpw));
		}
	}
	if ($instanceOf($XLightweightFramePeer, parent)) {
		$var($XLightweightFramePeer, peer, $cast($XLightweightFramePeer, parent));
		int64_t ownerWindowPtr = $nc(peer)->getOverriddenWindowHandle();
		if (ownerWindowPtr != 0) {
			tpw = ownerWindowPtr;
		}
	}
	$XlibWrapper::XSetTransientFor($XToolkit::getDisplay(), bpw, tpw);
	$set(window, curRealTransientFor, parent);
}

void XWindowPeer::updateTransientFor() {
	$useLocalCurrentObjectStackCache();
	int32_t state = getWMState();
	$var(XWindowPeer, p, this->prevTransientFor);
	while (true) {
		bool var$0 = (p != nullptr);
		if (var$0) {
			bool var$1 = (p->getWMState() != state);
			if (!var$1) {
				int64_t var$2 = $nc(p)->getScreenNumber();
				var$1 = (var$2 != getScreenNumber());
			}
			var$0 = (var$1);
		}
		if (!(var$0)) {
			break;
		}
		{
			$assign(p, p->prevTransientFor);
		}
	}
	if (p != nullptr) {
		setToplevelTransientFor(this, p, false, false);
	} else {
		restoreTransientFor(this);
	}
	$var(XWindowPeer, n, this->nextTransientFor);
	while (true) {
		bool var$3 = (n != nullptr);
		if (var$3) {
			bool var$4 = (n->getWMState() != state);
			if (!var$4) {
				int64_t var$5 = $nc(n)->getScreenNumber();
				var$4 = (var$5 != getScreenNumber());
			}
			var$3 = (var$4);
		}
		if (!(var$3)) {
			break;
		}
		{
			$assign(n, n->nextTransientFor);
		}
	}
	if (n != nullptr) {
		setToplevelTransientFor(n, this, false, false);
	}
}

void XWindowPeer::removeTransientForHint(XWindowPeer* window) {
	$init(XWindowPeer);
	$var($XAtom, XA_WM_TRANSIENT_FOR, $XAtom::get($XAtom::XA_WM_TRANSIENT_FOR));
	int64_t bpw = $nc(window)->getWindow();
	while (true) {
		bool var$0 = !$XlibUtil::isToplevelWindow(bpw);
		if (!(var$0 && !$XlibUtil::isXAWTToplevelWindow(bpw))) {
			break;
		}
		{
			bpw = $XlibUtil::getParentWindow(bpw);
		}
	}
	int64_t var$1 = $XToolkit::getDisplay();
	int64_t var$2 = bpw;
	$XlibWrapper::XDeleteProperty(var$1, var$2, $nc(XA_WM_TRANSIENT_FOR)->getAtom());
	$set(window, curRealTransientFor, nullptr);
}

void XWindowPeer::addToTransientFors($XDialogPeer* blockerPeer) {
	addToTransientFors(blockerPeer, nullptr);
}

void XWindowPeer::addToTransientFors($XDialogPeer* blockerPeer, $Vector* javaToplevels$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, javaToplevels, javaToplevels$renamed);
	$var(XWindowPeer, blockerChain, blockerPeer);
	while ($nc(blockerChain)->prevTransientFor != nullptr) {
		$assign(blockerChain, blockerChain->prevTransientFor);
	}
	$var(XWindowPeer, thisChain, this);
	while ($nc(thisChain)->prevTransientFor != nullptr) {
		$assign(thisChain, thisChain->prevTransientFor);
	}
	if ($equals(blockerChain, blockerPeer)) {
		setToplevelTransientFor(blockerPeer, this, true, false);
	} else {
		if (javaToplevels == nullptr) {
			$assign(javaToplevels, collectJavaToplevels());
		}
		$var(XWindowPeer, mergedChain, nullptr);
		{
			$var($Iterator, i$, $nc(javaToplevels)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var(XWindowPeer, w, $cast(XWindowPeer, i$->next()));
				{
					$var(XWindowPeer, prevMergedChain, mergedChain);
					if (w == thisChain) {
						if (thisChain == this) {
							if (prevMergedChain != nullptr) {
								setToplevelTransientFor(this, prevMergedChain, true, false);
							}
							setToplevelTransientFor(blockerChain, this, true, false);
							break;
						} else {
							$assign(mergedChain, thisChain);
							$assign(thisChain, thisChain->nextTransientFor);
						}
					} else if (w == blockerChain) {
						$assign(mergedChain, blockerChain);
						$assign(blockerChain, $nc(blockerChain)->nextTransientFor);
					} else {
						continue;
					}
					if (prevMergedChain == nullptr) {
						$set($nc(mergedChain), prevTransientFor, nullptr);
					} else {
						setToplevelTransientFor(mergedChain, prevMergedChain, true, false);
						$nc(mergedChain)->updateTransientFor();
					}
					if ($equals(blockerChain, blockerPeer)) {
						setToplevelTransientFor(thisChain, mergedChain, true, false);
						setToplevelTransientFor(blockerChain, this, true, false);
						break;
					}
				}
			}
		}
	}
	$XToolkit::XSync();
}

void XWindowPeer::restoreTransientFor(XWindowPeer* window) {
	$init(XWindowPeer);
	$var(XWindowPeer, ownerPeer, $nc(window)->getOwnerPeer());
	if (ownerPeer != nullptr) {
		setToplevelTransientFor(window, ownerPeer, false, true);
	} else {
		removeTransientForHint(window);
	}
}

void XWindowPeer::removeFromTransientFors() {
	$useLocalCurrentObjectStackCache();
	$var(XWindowPeer, thisChain, this);
	$var(XWindowPeer, otherChain, this->nextTransientFor);
	$var($Set, thisChainBlockers, $new($HashSet));
	thisChainBlockers->add(this);
	$var(XWindowPeer, chainToSplit, this->prevTransientFor);
	while (chainToSplit != nullptr) {
		$var(XWindowPeer, blocker, $cast(XWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(chainToSplit->modalBlocker)));
		if (thisChainBlockers->contains(blocker)) {
			setToplevelTransientFor(thisChain, chainToSplit, true, false);
			$assign(thisChain, chainToSplit);
			thisChainBlockers->add(chainToSplit);
		} else {
			setToplevelTransientFor(otherChain, chainToSplit, true, false);
			$assign(otherChain, chainToSplit);
		}
		$assign(chainToSplit, chainToSplit->prevTransientFor);
	}
	restoreTransientFor(thisChain);
	$set($nc(thisChain), prevTransientFor, nullptr);
	restoreTransientFor(otherChain);
	$set($nc(otherChain), prevTransientFor, nullptr);
	$set(this, nextTransientFor, nullptr);
	$XToolkit::XSync();
}

bool XWindowPeer::isModalBlocked() {
	return this->modalBlocker != nullptr;
}

$Window* XWindowPeer::getDecoratedOwner($Window* window$renamed) {
	$init(XWindowPeer);
	$useLocalCurrentObjectStackCache();
	$var($Window, window, window$renamed);
	while ((nullptr != window) && !($instanceOf($Frame, window) || $instanceOf($Dialog, window))) {
		$assign(window, $cast($Window, $nc($($AWTAccessor::getComponentAccessor()))->getParent(window)));
	}
	return window;
}

bool XWindowPeer::requestWindowFocus(XWindowPeer* actualFocusedWindow) {
	setActualFocusedWindow(actualFocusedWindow);
	return requestWindowFocus();
}

bool XWindowPeer::requestWindowFocus() {
	return requestWindowFocus(0, false);
}

bool XWindowPeer::requestWindowFocus(int64_t time, bool timeProvided) {
	$useLocalCurrentObjectStackCache();
	$nc(XWindowPeer::focusLog)->fine("Request for window focus"_s);
	$var($Window, ownerWindow, XWindowPeer::getDecoratedOwner($cast($Window, this->target)));
	$var($Window, focusedWindow, $nc($($XKeyboardFocusManagerPeer::getInstance()))->getCurrentFocusedWindow());
	$var($Window, activeWindow, XWindowPeer::getDecoratedOwner(focusedWindow));
	if (isWMStateNetHidden()) {
		$nc(XWindowPeer::focusLog)->fine("The window is unmapped, so rejecting the request"_s);
		return false;
	}
	if (activeWindow == ownerWindow) {
		$nc(XWindowPeer::focusLog)->fine("Parent window is active - generating focus for this window"_s);
		handleWindowFocusInSync(-1);
		return true;
	}
	$nc(XWindowPeer::focusLog)->fine("Parent window is not active"_s);
	$var($XDecoratedPeer, wpeer, $cast($XDecoratedPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(ownerWindow)));
	if (wpeer != nullptr && wpeer->requestWindowFocus(this, time, timeProvided)) {
		$nc(XWindowPeer::focusLog)->fine("Parent window accepted focus request - generating focus for this window"_s);
		return true;
	}
	$nc(XWindowPeer::focusLog)->fine("Denied - parent window is not active and didn\'t accept focus request"_s);
	return false;
}

void XWindowPeer::setActualFocusedWindow(XWindowPeer* actualFocusedWindow) {
}

void XWindowPeer::applyWindowType() {
	$useLocalCurrentObjectStackCache();
	$var($XNETProtocol, protocol, $nc($($XWM::getWM()))->getNETProtocol());
	if (protocol == nullptr) {
		return;
	}
	$var($XAtom, typeAtom, nullptr);
	$init($XWindowPeer$4);
	switch ($nc($XWindowPeer$4::$SwitchMap$java$awt$Window$Type)->get($nc(($(getWindowType())))->ordinal())) {
	case 1:
		{
			$assign(typeAtom, this->curRealTransientFor == nullptr ? $nc(protocol)->XA_NET_WM_WINDOW_TYPE_NORMAL : protocol->XA_NET_WM_WINDOW_TYPE_DIALOG);
			break;
		}
	case 2:
		{
			$assign(typeAtom, $nc(protocol)->XA_NET_WM_WINDOW_TYPE_UTILITY);
			break;
		}
	case 3:
		{
			$assign(typeAtom, $nc(protocol)->XA_NET_WM_WINDOW_TYPE_POPUP_MENU);
			break;
		}
	}
	if (typeAtom != nullptr) {
		$var($XAtomList, wtype, $new($XAtomList));
		wtype->add(typeAtom);
		$nc($nc(protocol)->XA_NET_WM_WINDOW_TYPE)->setAtomListProperty(getWindow(), wtype);
	} else {
		$nc($nc(protocol)->XA_NET_WM_WINDOW_TYPE)->DeleteProperty(getWindow());
	}
}

void XWindowPeer::xSetVisible(bool visible) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XWindowPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XWindowPeer::log)->fine($$str({"Setting visible on "_s, this, " to "_s, $$str(visible)}));
	}
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->visible = visible;
			if (visible) {
				applyWindowType();
				int64_t var$1 = $XToolkit::getDisplay();
				$XlibWrapper::XMapRaised(var$1, getWindow());
			} else {
				int64_t var$2 = $XToolkit::getDisplay();
				$XlibWrapper::XUnmapWindow(var$2, getWindow());
			}
			$XlibWrapper::XFlush($XToolkit::getDisplay());
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XWindowPeer::addDropTarget() {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->dropTargetCount == 0) {
				int64_t window = getWindow();
				if (window != 0) {
					$nc($($XDropTargetRegistry::getRegistry()))->registerDropSite(window);
				}
			}
			++this->dropTargetCount;
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XWindowPeer::removeDropTarget() {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			--this->dropTargetCount;
			if (this->dropTargetCount == 0) {
				int64_t window = getWindow();
				if (window != 0) {
					$nc($($XDropTargetRegistry::getRegistry()))->unregisterDropSite(window);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XWindowPeer::addRootPropertyEventDispatcher() {
	if (this->rootPropertyEventDispatcher == nullptr) {
		$set(this, rootPropertyEventDispatcher, $new($XWindowPeer$3, this));
		int64_t var$0 = $XToolkit::getDisplay();
		$XlibWrapper::XSelectInput(var$0, $XToolkit::getDefaultRootWindow(), $XConstants::PropertyChangeMask);
		$XToolkit::addEventDispatcher($XToolkit::getDefaultRootWindow(), this->rootPropertyEventDispatcher);
	}
}

void XWindowPeer::removeRootPropertyEventDispatcher() {
	if (this->rootPropertyEventDispatcher != nullptr) {
		$XToolkit::removeEventDispatcher($XToolkit::getDefaultRootWindow(), this->rootPropertyEventDispatcher);
		$set(this, rootPropertyEventDispatcher, nullptr);
	}
}

void XWindowPeer::updateFocusableWindowState() {
	this->cachedFocusableWindow = isFocusableWindow();
}

$XAtomList* XWindowPeer::getNETWMState() {
	if (this->net_wm_state == nullptr) {
		$set(this, net_wm_state, $nc(this->XA_NET_WM_STATE)->getAtomListPropertyList(static_cast<$XBaseWindow*>(this)));
	}
	return this->net_wm_state;
}

void XWindowPeer::setNETWMState($XAtomList* state) {
	$set(this, net_wm_state, state);
	if (state != nullptr) {
		$nc(this->XA_NET_WM_STATE)->setAtomListProperty(static_cast<$XBaseWindow*>(this), state);
	}
}

$PropMwmHints* XWindowPeer::getMWMHints() {
	if (this->mwm_hints == nullptr) {
		$set(this, mwm_hints, $new($PropMwmHints));
		$init($XWM);
		if (!$nc($XWM::XA_MWM_HINTS)->getAtomData(getWindow(), $nc(this->mwm_hints)->pData, $MWMConstants::PROP_MWM_HINTS_ELEMENTS)) {
			$nc(this->mwm_hints)->zero();
		}
	}
	return this->mwm_hints;
}

void XWindowPeer::setMWMHints($PropMwmHints* hints) {
	$set(this, mwm_hints, hints);
	if (hints != nullptr) {
		$init($XWM);
		$nc($XWM::XA_MWM_HINTS)->setAtomData(getWindow(), $nc(this->mwm_hints)->pData, $MWMConstants::PROP_MWM_HINTS_ELEMENTS);
	}
}

void XWindowPeer::updateDropTarget() {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (this->dropTargetCount > 0) {
				int64_t window = getWindow();
				if (window != 0) {
					$nc($($XDropTargetRegistry::getRegistry()))->unregisterDropSite(window);
					$nc($($XDropTargetRegistry::getRegistry()))->registerDropSite(window);
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void XWindowPeer::setGrab(bool grab) {
	this->grab = grab;
	if (grab) {
		$set(this, pressTarget, this);
		grabInput();
	} else {
		ungrabInput();
	}
}

bool XWindowPeer::isGrabbed() {
	return this->grab && $equals($XAwtState::getGrabWindow(), this);
}

void XWindowPeer::handleXCrossingEvent($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XCrossingEvent, xce, $nc(xev)->get_xcrossing());
	$init($PlatformLogger$Level);
	if ($nc(XWindowPeer::grabLog)->isLoggable($PlatformLogger$Level::FINE)) {
		int32_t var$0 = scaleDown($nc(xce)->get_x_root());
		$nc(XWindowPeer::grabLog)->fine("{0}, when grabbed {1}, contains {2}"_s, $$new($ObjectArray, {
			$of(xce),
			$($of($Boolean::valueOf(isGrabbed()))),
			$($of($Boolean::valueOf(containsGlobal(var$0, scaleDown($nc(xce)->get_y_root())))))
		}));
	}
	if (isGrabbed()) {
		$var($XBaseWindow, target, $XToolkit::windowToXWindow($nc(xce)->get_window()));
		if ($nc(XWindowPeer::grabLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XWindowPeer::grabLog)->finer("  -  Grab event target {0}"_s, $$new($ObjectArray, {$of(target)}));
		}
		if (target != nullptr && !$equals(target, this)) {
			target->dispatchEvent(xev);
			return;
		}
	}
	$XPanelPeer::handleXCrossingEvent(xev);
}

void XWindowPeer::handleMotionNotify($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XMotionEvent, xme, $nc(xev)->get_xmotion());
	$init($PlatformLogger$Level);
	if ($nc(XWindowPeer::grabLog)->isLoggable($PlatformLogger$Level::FINER)) {
		int32_t var$0 = scaleDown($nc(xme)->get_x_root());
		$nc(XWindowPeer::grabLog)->finer("{0}, when grabbed {1}, contains {2}"_s, $$new($ObjectArray, {
			$of(xme),
			$($of($Boolean::valueOf(isGrabbed()))),
			$($of($Boolean::valueOf(containsGlobal(var$0, scaleDown($nc(xme)->get_y_root())))))
		}));
	}
	if (isGrabbed()) {
		bool dragging = false;
		int32_t buttonsNumber = $XToolkit::getNumberOfButtonsForMask();
		for (int32_t i = 0; i < buttonsNumber; ++i) {
			if ((i != 4) && (i != 5)) {
				bool var$1 = dragging;
				if (!var$1) {
					int32_t var$2 = $nc(xme)->get_state();
					var$1 = (((int32_t)(var$2 & (uint32_t)$XlibUtil::getButtonMask(i + 1))) != 0);
				}
				dragging = var$1;
			}
		}
		$var($XBaseWindow, target, $XToolkit::windowToXWindow($nc(xme)->get_window()));
		if (dragging && this->pressTarget != target) {
			$assign(target, $nc(this->pressTarget)->isVisible() ? this->pressTarget : static_cast<$XBaseWindow*>(this));
			$nc(xme)->set_window($nc(target)->getWindow());
			int32_t var$3 = scaleDown(xme->get_x_root());
			$var($Point, localCoord, $nc(target)->toLocal(var$3, scaleDown(xme->get_y_root())));
			xme->set_x(scaleUp($nc(localCoord)->x));
			xme->set_y(scaleUp($nc(localCoord)->y));
		}
		if ($nc(XWindowPeer::grabLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XWindowPeer::grabLog)->finer("  -  Grab event target {0}"_s, $$new($ObjectArray, {$of(target)}));
		}
		if (target != nullptr) {
			if (target != getContentXWindow() && !$equals(target, this)) {
				target->dispatchEvent(xev);
				return;
			}
		}
		int32_t var$4 = scaleDown($nc(xme)->get_x_root());
		if (!containsGlobal(var$4, scaleDown($nc(xme)->get_y_root())) && !dragging) {
			return;
		}
	}
	$XPanelPeer::handleMotionNotify(xev);
}

void XWindowPeer::handleButtonPressRelease($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$var($XButtonEvent, xbe, $nc(xev)->get_xbutton());
	if ($nc(xbe)->get_button() > $SunToolkit::MAX_BUTTONS_SUPPORTED) {
		return;
	}
	$init($PlatformLogger$Level);
	if ($nc(XWindowPeer::grabLog)->isLoggable($PlatformLogger$Level::FINE)) {
		int32_t var$0 = scaleDown($nc(xbe)->get_x_root());
		$nc(XWindowPeer::grabLog)->fine("{0}, when grabbed {1}, contains {2} ({3}, {4}, {5}x{6})"_s, $$new($ObjectArray, {
			$of(xbe),
			$($of($Boolean::valueOf(isGrabbed()))),
			$($of($Boolean::valueOf(containsGlobal(var$0, scaleDown($nc(xbe)->get_y_root()))))),
			$($of($Integer::valueOf(getAbsoluteX()))),
			$($of($Integer::valueOf(getAbsoluteY()))),
			$($of($Integer::valueOf(getWidth()))),
			$($of($Integer::valueOf(getHeight())))
		}));
	}
	if (isGrabbed()) {
		$var($XBaseWindow, target, $XToolkit::windowToXWindow($nc(xbe)->get_window()));
		{
			$var($Throwable, var$1, nullptr);
			bool return$2 = false;
			try {
				if ($nc(XWindowPeer::grabLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(XWindowPeer::grabLog)->finer("  -  Grab event target {0} (press target {1})"_s, $$new($ObjectArray, {
						$of(target),
						$of(this->pressTarget)
					}));
				}
				bool var$3 = $nc(xbe)->get_type() == $XConstants::ButtonPress;
				$init($XConstants);
				if (var$3 && xbe->get_button() == $nc($XConstants::buttons)->get(0)) {
					$set(this, pressTarget, target);
				} else {
					bool var$5 = xbe->get_type() == $XConstants::ButtonRelease;
					if (var$5 && xbe->get_button() == $nc($XConstants::buttons)->get(0) && this->pressTarget != target) {
						$assign(target, $nc(this->pressTarget)->isVisible() ? this->pressTarget : static_cast<$XBaseWindow*>(this));
						xbe->set_window($nc(target)->getWindow());
						int32_t var$6 = scaleDown(xbe->get_x_root());
						$var($Point, localCoord, $nc(target)->toLocal(var$6, scaleDown(xbe->get_y_root())));
						xbe->set_x(scaleUp($nc(localCoord)->x));
						xbe->set_y(scaleUp($nc(localCoord)->y));
						$set(this, pressTarget, this);
					}
				}
				if (target != nullptr && target != getContentXWindow() && !$equals(target, this)) {
					target->dispatchEvent(xev);
					return$2 = true;
					goto $finally;
				}
			} catch ($Throwable& var$7) {
				$assign(var$1, var$7);
			} $finally: {
				if (target != nullptr) {
					bool var$8 = ($equals(target, this) || target == getContentXWindow());
					if (var$8) {
						int32_t var$9 = scaleDown($nc(xbe)->get_x_root());
						var$8 = !containsGlobal(var$9, scaleDown($nc(xbe)->get_y_root()));
					}
					if (var$8) {
						if ($nc(xbe)->get_type() == $XConstants::ButtonPress) {
							if ($nc(XWindowPeer::grabLog)->isLoggable($PlatformLogger$Level::FINE)) {
								$nc(XWindowPeer::grabLog)->fine("Generating UngrabEvent on {0} because not inside of shell"_s, $$new($ObjectArray, {$of(this)}));
							}
							$init($XConstants);
							bool var$10 = (xbe->get_button() != $nc($XConstants::buttons)->get(3));
							if (var$10 && (xbe->get_button() != $nc($XConstants::buttons)->get(4))) {
								postEventToEventQueue($$new($UngrabEvent, $(getEventSource())));
							}
							return;
						}
					}
					$var(XWindowPeer, toplevel, target->getToplevelXWindow());
					if (toplevel != nullptr) {
						$var($Window, w, $cast($Window, toplevel->target));
						while (w != nullptr && toplevel != this && !($instanceOf($XDialogPeer, toplevel))) {
							$assign(w, $cast($Window, $nc($($AWTAccessor::getComponentAccessor()))->getParent(w)));
							if (w != nullptr) {
								$assign(toplevel, $cast(XWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(w)));
							}
						}
						if (w == nullptr || (!$equals(w, this->target) && $instanceOf($Dialog, w))) {
							if ($nc(XWindowPeer::grabLog)->isLoggable($PlatformLogger$Level::FINE)) {
								$nc(XWindowPeer::grabLog)->fine("Generating UngrabEvent on {0} because hierarchy ended"_s, $$new($ObjectArray, {$of(this)}));
							}
							if ($nc(xbe)->get_type() != $XConstants::ButtonPress) {
								postEventToEventQueue($$new($UngrabEvent, $(getEventSource())));
							} else {
								$init($XConstants);
								bool var$12 = (xbe->get_button() != $nc($XConstants::buttons)->get(3));
								if (var$12 && (xbe->get_button() != $nc($XConstants::buttons)->get(4))) {
									postEventToEventQueue($$new($UngrabEvent, $(getEventSource())));
								}
							}
						}
					} else {
						if ($nc(XWindowPeer::grabLog)->isLoggable($PlatformLogger$Level::FINE)) {
							$nc(XWindowPeer::grabLog)->fine("Generating UngrabEvent on {0} because toplevel is null"_s, $$new($ObjectArray, {$of(this)}));
						}
						if ($nc(xbe)->get_type() != $XConstants::ButtonPress) {
							postEventToEventQueue($$new($UngrabEvent, $(getEventSource())));
						} else {
							$init($XConstants);
							bool var$14 = (xbe->get_button() != $nc($XConstants::buttons)->get(3));
							if (var$14 && (xbe->get_button() != $nc($XConstants::buttons)->get(4))) {
								postEventToEventQueue($$new($UngrabEvent, $(getEventSource())));
							}
						}
						return;
					}
				} else {
					if ($nc(XWindowPeer::grabLog)->isLoggable($PlatformLogger$Level::FINE)) {
						$nc(XWindowPeer::grabLog)->fine("Generating UngrabEvent on because target is null {0}"_s, $$new($ObjectArray, {$of(this)}));
					}
					if ($nc(xbe)->get_type() != $XConstants::ButtonPress) {
						postEventToEventQueue($$new($UngrabEvent, $(getEventSource())));
					} else {
						$init($XConstants);
						bool var$16 = (xbe->get_button() != $nc($XConstants::buttons)->get(3));
						if (var$16 && (xbe->get_button() != $nc($XConstants::buttons)->get(4))) {
							postEventToEventQueue($$new($UngrabEvent, $(getEventSource())));
						}
					}
					return;
				}
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
			if (return$2) {
				return;
			}
		}
	}
	$XPanelPeer::handleButtonPressRelease(xev);
}

void XWindowPeer::print($Graphics* g) {
	$var($Shape, shape, $nc(($cast($Window, this->target)))->getShape());
	if (shape != nullptr) {
		$nc(g)->setClip(shape);
	}
	$XPanelPeer::print(g);
}

void XWindowPeer::setOpacity(float opacity) {
	int64_t maxOpacity = 0x00000000FFFFFFFF;
	int64_t iOpacity = $cast(int64_t, (opacity * maxOpacity));
	if (iOpacity < 0) {
		iOpacity = 0;
	}
	if (iOpacity > maxOpacity) {
		iOpacity = maxOpacity;
	}
	$var($XAtom, netWmWindowOpacityAtom, $XAtom::get("_NET_WM_WINDOW_OPACITY"_s));
	if (iOpacity == maxOpacity) {
		$nc(netWmWindowOpacityAtom)->DeleteProperty(getWindow());
	} else {
		$nc(netWmWindowOpacityAtom)->setCard32Property(getWindow(), iOpacity);
	}
}

void XWindowPeer::setOpaque(bool isOpaque) {
}

void XWindowPeer::updateWindow() {
}

void clinit$XWindowPeer($Class* class$) {
	XWindowPeer::$assertionsDisabled = !XWindowPeer::class$->desiredAssertionStatus();
	$assignStatic(XWindowPeer::log, $PlatformLogger::getLogger("sun.awt.X11.XWindowPeer"_s));
	$assignStatic(XWindowPeer::focusLog, $PlatformLogger::getLogger("sun.awt.X11.focus.XWindowPeer"_s));
	$assignStatic(XWindowPeer::insLog, $PlatformLogger::getLogger("sun.awt.X11.insets.XWindowPeer"_s));
	$assignStatic(XWindowPeer::grabLog, $PlatformLogger::getLogger("sun.awt.X11.grab.XWindowPeer"_s));
	$assignStatic(XWindowPeer::iconLog, $PlatformLogger::getLogger("sun.awt.X11.icon.XWindowPeer"_s));
	$assignStatic(XWindowPeer::windows, $new($HashSet));
	$assignStatic(XWindowPeer::isStartupNotificationRemoved, $new($AtomicBoolean));
}

XWindowPeer::XWindowPeer() {
}

$Class* XWindowPeer::load$($String* name, bool initialize) {
	$loadClass(XWindowPeer, name, initialize, &_XWindowPeer_ClassInfo_, clinit$XWindowPeer, allocate$XWindowPeer);
	return class$;
}

$Class* XWindowPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun