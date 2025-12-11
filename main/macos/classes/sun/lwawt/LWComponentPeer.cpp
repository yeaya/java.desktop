#include <sun/lwawt/LWComponentPeer.h>

#include <com/sun/java/swing/SwingUtilities3.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/event/AWTEventListener.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/awt/peer/KeyboardFocusManagerPeer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/RepaintManager.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$KeyEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/CGraphicsDevice.h>
#include <sun/awt/KeyboardFocusManagerPeerImpl.h>
#include <sun/awt/PaintEventDispatcher.h>
#include <sun/awt/RepaintArea.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/event/IgnorePaintEvent.h>
#include <sun/awt/image/SunVolatileImage.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/metal/MTLRenderQueue.h>
#include <sun/java2d/opengl/OGLRenderQueue.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/java2d/pipe/RenderQueue.h>
#include <sun/lwawt/LWCanvasPeer.h>
#include <sun/lwawt/LWComponentPeer$1.h>
#include <sun/lwawt/LWComponentPeer$2.h>
#include <sun/lwawt/LWComponentPeer$3.h>
#include <sun/lwawt/LWComponentPeer$DelegateContainer.h>
#include <sun/lwawt/LWContainerPeer.h>
#include <sun/lwawt/LWCursorManager.h>
#include <sun/lwawt/LWGraphicsConfig.h>
#include <sun/lwawt/LWKeyboardFocusManagerPeer.h>
#include <sun/lwawt/LWRepaintArea.h>
#include <sun/lwawt/LWToolkit.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <sun/lwawt/PlatformComponent.h>
#include <sun/lwawt/PlatformDropTarget.h>
#include <sun/lwawt/PlatformWindow.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef COMPONENT_MOVED
#undef COMPONENT_RESIZED
#undef FINE
#undef FINEST
#undef FOCUS_GAINED
#undef FOCUS_LOST
#undef MOUSE_DRAGGED
#undef MOUSE_EVENT
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef PAINT
#undef SET_BOUNDS
#undef SET_LOCATION
#undef SET_SIZE
#undef SNFH_FAILURE
#undef SNFH_SUCCESS_HANDLED
#undef SNFH_SUCCESS_PROCEED
#undef UPDATE
#undef WHOLE_REGION
#undef WIDE_CHAR

using $SwingUtilities3 = ::com::sun::java::swing::SwingUtilities3;
using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $KeyboardFocusManagerPeer = ::java::awt::peer::KeyboardFocusManagerPeer;
using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $JComponent = ::javax::swing::JComponent;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$KeyEventAccessor = ::sun::awt::AWTAccessor$KeyEventAccessor;
using $CGraphicsDevice = ::sun::awt::CGraphicsDevice;
using $KeyboardFocusManagerPeerImpl = ::sun::awt::KeyboardFocusManagerPeerImpl;
using $PaintEventDispatcher = ::sun::awt::PaintEventDispatcher;
using $RepaintArea = ::sun::awt::RepaintArea;
using $SunToolkit = ::sun::awt::SunToolkit;
using $IgnorePaintEvent = ::sun::awt::event::IgnorePaintEvent;
using $SunVolatileImage = ::sun::awt::image::SunVolatileImage;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $MTLRenderQueue = ::sun::java2d::metal::MTLRenderQueue;
using $OGLRenderQueue = ::sun::java2d::opengl::OGLRenderQueue;
using $Region = ::sun::java2d::pipe::Region;
using $RenderQueue = ::sun::java2d::pipe::RenderQueue;
using $LWCanvasPeer = ::sun::lwawt::LWCanvasPeer;
using $LWComponentPeer$1 = ::sun::lwawt::LWComponentPeer$1;
using $LWComponentPeer$2 = ::sun::lwawt::LWComponentPeer$2;
using $LWComponentPeer$3 = ::sun::lwawt::LWComponentPeer$3;
using $LWComponentPeer$DelegateContainer = ::sun::lwawt::LWComponentPeer$DelegateContainer;
using $LWContainerPeer = ::sun::lwawt::LWContainerPeer;
using $LWCursorManager = ::sun::lwawt::LWCursorManager;
using $LWGraphicsConfig = ::sun::lwawt::LWGraphicsConfig;
using $LWKeyboardFocusManagerPeer = ::sun::lwawt::LWKeyboardFocusManagerPeer;
using $LWRepaintArea = ::sun::lwawt::LWRepaintArea;
using $LWToolkit = ::sun::lwawt::LWToolkit;
using $LWWindowPeer = ::sun::lwawt::LWWindowPeer;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;
using $PlatformDropTarget = ::sun::lwawt::PlatformDropTarget;
using $PlatformWindow = ::sun::lwawt::PlatformWindow;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace lwawt {

$FieldInfo _LWComponentPeer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LWComponentPeer, $assertionsDisabled)},
	{"focusLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LWComponentPeer, focusLog)},
	{"stateLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(LWComponentPeer, stateLock)},
	{"peerTreeLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LWComponentPeer, peerTreeLock)},
	{"target", "Ljava/awt/Component;", "TT;", $PRIVATE | $FINAL, $field(LWComponentPeer, target)},
	{"containerPeer", "Lsun/lwawt/LWContainerPeer;", "Lsun/lwawt/LWContainerPeer<**>;", $PRIVATE | $FINAL, $field(LWComponentPeer, containerPeer)},
	{"windowPeer", "Lsun/lwawt/LWWindowPeer;", nullptr, $PRIVATE | $FINAL, $field(LWComponentPeer, windowPeer)},
	{"disposed", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(LWComponentPeer, disposed)},
	{"bounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $FINAL, $field(LWComponentPeer, bounds)},
	{"region", "Lsun/java2d/pipe/Region;", nullptr, $PRIVATE, $field(LWComponentPeer, region)},
	{"visible", "Z", nullptr, $PRIVATE, $field(LWComponentPeer, visible)},
	{"enabled", "Z", nullptr, $PRIVATE, $field(LWComponentPeer, enabled)},
	{"background", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(LWComponentPeer, background)},
	{"foreground", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(LWComponentPeer, foreground)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(LWComponentPeer, font)},
	{"targetPaintArea", "Lsun/awt/RepaintArea;", nullptr, $PRIVATE | $FINAL, $field(LWComponentPeer, targetPaintArea)},
	{"isLayouting", "Z", nullptr, $PRIVATE | $VOLATILE, $field(LWComponentPeer, isLayouting$)},
	{"delegate", "Ljavax/swing/JComponent;", "TD;", $PRIVATE | $FINAL, $field(LWComponentPeer, delegate)},
	{"delegateContainer", "Ljava/awt/Container;", nullptr, $PRIVATE, $field(LWComponentPeer, delegateContainer)},
	{"delegateDropTarget", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(LWComponentPeer, delegateDropTarget)},
	{"dropTargetLock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(LWComponentPeer, dropTargetLock)},
	{"fNumDropTargets", "I", nullptr, $PRIVATE, $field(LWComponentPeer, fNumDropTargets)},
	{"fDropTarget", "Lsun/lwawt/PlatformDropTarget;", nullptr, $PRIVATE, $field(LWComponentPeer, fDropTarget)},
	{"platformComponent", "Lsun/lwawt/PlatformComponent;", nullptr, $PRIVATE | $FINAL, $field(LWComponentPeer, platformComponent)},
	{"WIDE_CHAR", "C", nullptr, $STATIC | $FINAL, $constField(LWComponentPeer, WIDE_CHAR)},
	{"backBuffer", "Ljava/awt/Image;", nullptr, $PRIVATE, $field(LWComponentPeer, backBuffer)},
	{}
};

$MethodInfo _LWComponentPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Component;Lsun/lwawt/PlatformComponent;)V", "(TT;Lsun/lwawt/PlatformComponent;)V", 0, $method(static_cast<void(LWComponentPeer::*)($Component*,$PlatformComponent*)>(&LWComponentPeer::init$))},
	{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"applyConstrain", "(Ljava/awt/Graphics;)V", nullptr, $PRIVATE, $method(static_cast<void(LWComponentPeer::*)($Graphics*)>(&LWComponentPeer::applyConstrain))},
	{"applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC | $FINAL},
	{"applyShapeImpl", "(Lsun/java2d/pipe/Region;)V", nullptr, 0},
	{"canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"computeVisibleRect", "(Lsun/lwawt/LWComponentPeer;Lsun/java2d/pipe/Region;)Lsun/java2d/pipe/Region;", "(Lsun/lwawt/LWComponentPeer<**>;Lsun/java2d/pipe/Region;)Lsun/java2d/pipe/Region;", $STATIC | $FINAL, $method(static_cast<$Region*(*)(LWComponentPeer*,$Region*)>(&LWComponentPeer::computeVisibleRect))},
	{"createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.awt.AWTException"},
	{"createDelegate", "()Ljavax/swing/JComponent;", "()TD;", 0},
	{"createDelegateEvent", "(Ljava/awt/AWTEvent;)Ljava/awt/AWTEvent;", nullptr, $PRIVATE, $method(static_cast<$AWTEvent*(LWComponentPeer::*)($AWTEvent*)>(&LWComponentPeer::createDelegateEvent))},
	{"createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC | $FINAL},
	{"destroyBuffers", "()V", nullptr, $PUBLIC | $FINAL},
	{"dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"disposeImpl", "()V", nullptr, $PROTECTED},
	{"findPeerAt", "(II)Lsun/lwawt/LWComponentPeer;", "(II)Lsun/lwawt/LWComponentPeer<**>;", 0},
	{"flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC | $FINAL},
	{"flushOnscreenGraphics", "()V", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<void(*)()>(&LWComponentPeer::flushOnscreenGraphics))},
	{"getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Color*(LWComponentPeer::*)()>(&LWComponentPeer::getBackground))},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Rectangle*(LWComponentPeer::*)()>(&LWComponentPeer::getBounds))},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getContainerPeer", "()Lsun/lwawt/LWContainerPeer;", "()Lsun/lwawt/LWContainerPeer<**>;", $PROTECTED | $FINAL, $method(static_cast<$LWContainerPeer*(LWComponentPeer::*)()>(&LWComponentPeer::getContainerPeer))},
	{"getCursor", "(Ljava/awt/Point;)Ljava/awt/Cursor;", nullptr, 0},
	{"getDelegate", "()Ljavax/swing/JComponent;", "()TD;", $FINAL, $method(static_cast<$JComponent*(LWComponentPeer::*)()>(&LWComponentPeer::getDelegate))},
	{"getDelegateFocusOwner", "()Ljava/awt/Component;", nullptr, 0},
	{"getDelegateLock", "()Ljava/lang/Object;", nullptr, $FINAL, $method(static_cast<$Object*(LWComponentPeer::*)()>(&LWComponentPeer::getDelegateLock))},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Font*(LWComponentPeer::*)()>(&LWComponentPeer::getFont))},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Color*(LWComponentPeer::*)()>(&LWComponentPeer::getForeground))},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getLWGC", "()Lsun/lwawt/LWGraphicsConfig;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$LWGraphicsConfig*(LWComponentPeer::*)()>(&LWComponentPeer::getLWGC))},
	{"getLWToolkit", "()Lsun/lwawt/LWToolkit;", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getOnscreenGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Graphics*(LWComponentPeer::*)()>(&LWComponentPeer::getOnscreenGraphics))},
	{"getPeerTreeLock", "()Ljava/lang/Object;", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<$Object*(*)()>(&LWComponentPeer::getPeerTreeLock))},
	{"getPlatformWindow", "()Lsun/lwawt/PlatformWindow;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getRegion", "()Lsun/java2d/pipe/Region;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Region*(LWComponentPeer::*)()>(&LWComponentPeer::getRegion))},
	{"getSize", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Rectangle*(LWComponentPeer::*)()>(&LWComponentPeer::getSize))},
	{"getStateLock", "()Ljava/lang/Object;", nullptr, $FINAL, $method(static_cast<$Object*(LWComponentPeer::*)()>(&LWComponentPeer::getStateLock))},
	{"getTarget", "()Ljava/awt/Component;", "()TT;", $PUBLIC | $FINAL, $method(static_cast<$Component*(LWComponentPeer::*)()>(&LWComponentPeer::getTarget))},
	{"getToolkitAWTEventListener", "()Ljava/awt/event/AWTEventListener;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$AWTEventListener*(LWComponentPeer::*)()>(&LWComponentPeer::getToolkitAWTEventListener))},
	{"getVisibleRegion", "()Lsun/java2d/pipe/Region;", nullptr, 0},
	{"getWindowPeer", "()Lsun/lwawt/LWWindowPeer;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$LWWindowPeer*(LWComponentPeer::*)()>(&LWComponentPeer::getWindowPeer))},
	{"getWindowPeerOrSelf", "()Lsun/lwawt/LWWindowPeer;", nullptr, $PROTECTED},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"handleJavaFocusEvent", "(Ljava/awt/event/FocusEvent;)V", nullptr, 0},
	{"handleJavaMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED},
	{"handleJavaPaintEvent", "()V", nullptr, $PRIVATE, $method(static_cast<void(LWComponentPeer::*)()>(&LWComponentPeer::handleJavaPaintEvent))},
	{"handleMove", "(IIZ)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(LWComponentPeer::*)(int32_t,int32_t,bool)>(&LWComponentPeer::handleMove))},
	{"handleResize", "(IIZ)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(LWComponentPeer::*)(int32_t,int32_t,bool)>(&LWComponentPeer::handleResize))},
	{"handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"initialize", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(LWComponentPeer::*)()>(&LWComponentPeer::initialize))},
	{"initializeImpl", "()V", nullptr, 0},
	{"isDisposed", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(LWComponentPeer::*)()>(&LWComponentPeer::isDisposed))},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(LWComponentPeer::*)()>(&LWComponentPeer::isEnabled))},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"isLayouting", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(LWComponentPeer::*)()>(&LWComponentPeer::isLayouting))},
	{"isObscured", "()Z", nullptr, $PUBLIC},
	{"isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"isShaped", "()Z", nullptr, $PUBLIC},
	{"isShowing", "()Z", nullptr, $PROTECTED | $FINAL, $method(static_cast<bool(LWComponentPeer::*)()>(&LWComponentPeer::isShowing))},
	{"isTranslucent", "()Z", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(LWComponentPeer::*)()>(&LWComponentPeer::isVisible))},
	{"layout", "()V", nullptr, $PUBLIC},
	{"localToWindow", "(II)Ljava/awt/Point;", nullptr, $PUBLIC},
	{"localToWindow", "(Ljava/awt/Point;)Ljava/awt/Point;", nullptr, $PUBLIC},
	{"localToWindow", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintPeer", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(LWComponentPeer::*)($Graphics*)>(&LWComponentPeer::paintPeer))},
	{"postEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"postPaintEvent", "(IIII)V", nullptr, $PROTECTED},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"repaintOldNewBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(LWComponentPeer::*)($Rectangle*)>(&LWComponentPeer::repaintOldNewBounds))},
	{"repaintParent", "(Ljava/awt/Rectangle;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(LWComponentPeer::*)($Rectangle*)>(&LWComponentPeer::repaintParent))},
	{"repaintPeer", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(LWComponentPeer::*)()>(&LWComponentPeer::repaintPeer))},
	{"repaintPeer", "(Ljava/awt/Rectangle;)V", nullptr, 0},
	{"reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"resetColorsAndFont", "(Ljava/awt/Container;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Container*)>(&LWComponentPeer::resetColorsAndFont))},
	{"sendEventToDelegate", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setBounds", "(IIIIIZZ)V", nullptr, $PROTECTED},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setLayouting", "(Z)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(LWComponentPeer::*)(bool)>(&LWComponentPeer::setLayouting))},
	{"setToolkitAWTEventListener", "(Ljava/awt/event/AWTEventListener;)V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(LWComponentPeer::*)($AWTEventListener*)>(&LWComponentPeer::setToolkitAWTEventListener))},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setVisibleImpl", "(Z)V", nullptr, $PROTECTED},
	{"setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"shouldClearRectBeforePaint", "()Z", nullptr, $PROTECTED | $FINAL, $method(static_cast<bool(LWComponentPeer::*)()>(&LWComponentPeer::shouldClearRectBeforePaint))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"validateSize", "(Ljava/awt/Dimension;)Ljava/awt/Dimension;", nullptr, $PRIVATE, $method(static_cast<$Dimension*(LWComponentPeer::*)($Dimension*)>(&LWComponentPeer::validateSize))},
	{"windowToLocal", "(IILsun/lwawt/LWWindowPeer;)Ljava/awt/Point;", nullptr, $PUBLIC},
	{"windowToLocal", "(Ljava/awt/Point;Lsun/lwawt/LWWindowPeer;)Ljava/awt/Point;", nullptr, $PUBLIC},
	{"windowToLocal", "(Ljava/awt/Rectangle;Lsun/lwawt/LWWindowPeer;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWComponentPeer_InnerClassesInfo_[] = {
	{"sun.lwawt.LWComponentPeer$DelegateContainer", "sun.lwawt.LWComponentPeer", "DelegateContainer", $PRIVATE | $FINAL},
	{"sun.lwawt.LWComponentPeer$3", nullptr, nullptr, 0},
	{"sun.lwawt.LWComponentPeer$2", nullptr, nullptr, 0},
	{"sun.lwawt.LWComponentPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWComponentPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.lwawt.LWComponentPeer",
	"java.lang.Object",
	"java.awt.peer.ComponentPeer,java.awt.dnd.peer.DropTargetPeer",
	_LWComponentPeer_FieldInfo_,
	_LWComponentPeer_MethodInfo_,
	"<T:Ljava/awt/Component;D:Ljavax/swing/JComponent;>Ljava/lang/Object;Ljava/awt/peer/ComponentPeer;Ljava/awt/dnd/peer/DropTargetPeer;",
	nullptr,
	_LWComponentPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.LWComponentPeer$DelegateContainer,sun.lwawt.LWComponentPeer$3,sun.lwawt.LWComponentPeer$2,sun.lwawt.LWComponentPeer$1"
};

$Object* allocate$LWComponentPeer($Class* clazz) {
	return $of($alloc(LWComponentPeer));
}

int32_t LWComponentPeer::hashCode() {
	 return this->$ComponentPeer::hashCode();
}

bool LWComponentPeer::equals(Object$* arg0) {
	 return this->$ComponentPeer::equals(arg0);
}

$Object* LWComponentPeer::clone() {
	 return this->$ComponentPeer::clone();
}

$String* LWComponentPeer::toString() {
	 return this->$ComponentPeer::toString();
}

void LWComponentPeer::finalize() {
	this->$ComponentPeer::finalize();
}

bool LWComponentPeer::$assertionsDisabled = false;
$PlatformLogger* LWComponentPeer::focusLog = nullptr;
$Object* LWComponentPeer::peerTreeLock = nullptr;

void LWComponentPeer::init$($Component* target, $PlatformComponent* platformComponent) {
	$useLocalCurrentObjectStackCache();
	$set(this, stateLock, $new($Object));
	$set(this, disposed, $new($AtomicBoolean, false));
	$set(this, bounds, $new($Rectangle));
	this->visible = false;
	this->enabled = true;
	$set(this, dropTargetLock, $new($Object));
	this->fNumDropTargets = 0;
	$set(this, fDropTarget, nullptr);
	$set(this, targetPaintArea, $new($LWRepaintArea));
	$set(this, target, target);
	$set(this, platformComponent, platformComponent);
	$var($Container, container, $SunToolkit::getNativeContainer(target));
	$set(this, containerPeer, $cast($LWContainerPeer, $LWToolkit::targetToPeer(container)));
	$set(this, windowPeer, this->containerPeer != nullptr ? $nc(this->containerPeer)->getWindowPeerOrSelf() : ($LWWindowPeer*)nullptr);
	if (this->containerPeer != nullptr) {
		$nc(this->containerPeer)->addChildPeer(this);
	}
	$var($AWTEventListener, toolkitListener, nullptr);
	$synchronized($Toolkit::getDefaultToolkit()) {
		{
			$var($Throwable, var$0, nullptr);
			bool return$1 = false;
			try {
				$assign(toolkitListener, getToolkitAWTEventListener());
				setToolkitAWTEventListener(nullptr);
				$synchronized(getDelegateLock()) {
					$set(this, delegate, createDelegate());
					if (this->delegate != nullptr) {
						$nc(this->delegate)->setVisible(false);
						$set(this, delegateContainer, $new($LWComponentPeer$DelegateContainer, this));
						$nc(this->delegateContainer)->add(static_cast<$Component*>(this->delegate));
						$nc(this->delegateContainer)->addNotify();
						$nc(this->delegate)->addNotify();
						resetColorsAndFont(this->delegate);
						$nc(this->delegate)->setOpaque(true);
					} else {
						return$1 = true;
						goto $finally;
					}
				}
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} $finally: {
				setToolkitAWTEventListener(toolkitListener);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return;
			}
		}
		$SwingUtilities3::setDelegateRepaintManager(this->delegate, $$new($LWComponentPeer$1, this));
	}
}

$AWTEventListener* LWComponentPeer::getToolkitAWTEventListener() {
	$beforeCallerSensitive();
	return $cast($AWTEventListener, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($LWComponentPeer$2, this))));
}

void LWComponentPeer::setToolkitAWTEventListener($AWTEventListener* listener) {
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($LWComponentPeer$3, this, listener)));
}

$JComponent* LWComponentPeer::createDelegate() {
	return nullptr;
}

$JComponent* LWComponentPeer::getDelegate() {
	return this->delegate;
}

$Component* LWComponentPeer::getDelegateFocusOwner() {
	return getDelegate();
}

void LWComponentPeer::initialize() {
	$nc(this->platformComponent)->initialize($(getPlatformWindow()));
	initializeImpl();
	setVisible($nc(this->target)->isVisible());
}

void LWComponentPeer::initializeImpl() {
	$useLocalCurrentObjectStackCache();
	setBackground($($nc(this->target)->getBackground()));
	setForeground($($nc(this->target)->getForeground()));
	setFont($($nc(this->target)->getFont()));
	setBounds($($nc(this->target)->getBounds()));
	setEnabled($nc(this->target)->isEnabled());
}

void LWComponentPeer::resetColorsAndFont($Container* c) {
	$init(LWComponentPeer);
	$useLocalCurrentObjectStackCache();
	$nc(c)->setBackground(nullptr);
	c->setForeground(nullptr);
	c->setFont(nullptr);
	for (int32_t i = 0; i < c->getComponentCount(); ++i) {
		resetColorsAndFont($cast($Container, $(c->getComponent(i))));
	}
}

$Object* LWComponentPeer::getStateLock() {
	return $of(this->stateLock);
}

$Object* LWComponentPeer::getDelegateLock() {
	return $of($nc($(getTarget()))->getTreeLock());
}

$Object* LWComponentPeer::getPeerTreeLock() {
	$init(LWComponentPeer);
	return $of(LWComponentPeer::peerTreeLock);
}

$Component* LWComponentPeer::getTarget() {
	return this->target;
}

$LWWindowPeer* LWComponentPeer::getWindowPeer() {
	return this->windowPeer;
}

$LWWindowPeer* LWComponentPeer::getWindowPeerOrSelf() {
	return getWindowPeer();
}

$LWContainerPeer* LWComponentPeer::getContainerPeer() {
	return this->containerPeer;
}

$PlatformWindow* LWComponentPeer::getPlatformWindow() {
	$var($LWWindowPeer, windowPeer, getWindowPeer());
	return $nc(windowPeer)->getPlatformWindow();
}

$LWToolkit* LWComponentPeer::getLWToolkit() {
	return $LWToolkit::getLWToolkit();
}

void LWComponentPeer::dispose() {
	if ($nc(this->disposed)->compareAndSet(false, true)) {
		disposeImpl();
	}
}

void LWComponentPeer::disposeImpl() {
	$useLocalCurrentObjectStackCache();
	destroyBuffers();
	$var($LWContainerPeer, cp, getContainerPeer());
	if (cp != nullptr) {
		cp->removeChildPeer(this);
	}
	$nc(this->platformComponent)->dispose();
	$LWToolkit::targetDisposedPeer($(getTarget()), this);
}

bool LWComponentPeer::isDisposed() {
	return $nc(this->disposed)->get();
}

$GraphicsConfiguration* LWComponentPeer::getGraphicsConfiguration() {
	return $nc($(getWindowPeer()))->getGraphicsConfiguration();
}

$LWGraphicsConfig* LWComponentPeer::getLWGC() {
	return $cast($LWGraphicsConfig, getGraphicsConfiguration());
}

bool LWComponentPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	return false;
}

$Graphics* LWComponentPeer::getGraphics() {
	$var($Graphics, g, getOnscreenGraphics());
	if (g != nullptr) {
		$synchronized(getPeerTreeLock()) {
			applyConstrain(g);
		}
	}
	return g;
}

$Graphics* LWComponentPeer::getOnscreenGraphics() {
	$useLocalCurrentObjectStackCache();
	$var($LWWindowPeer, wp, getWindowPeerOrSelf());
	$var($Color, var$0, getForeground());
	$var($Color, var$1, getBackground());
	return $nc(wp)->getOnscreenGraphics(var$0, var$1, $(getFont()));
}

void LWComponentPeer::applyConstrain($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($SunGraphics2D, sg2d, $cast($SunGraphics2D, g));
	$var($Rectangle, size, localToWindow($(getSize())));
	$nc(sg2d)->constrain($nc(size)->x, size->y, size->width, size->height, $(getVisibleRegion()));
}

$Region* LWComponentPeer::getVisibleRegion() {
	return computeVisibleRect(this, $(getRegion()));
}

$Region* LWComponentPeer::computeVisibleRect(LWComponentPeer* c, $Region* region$renamed) {
	$init(LWComponentPeer);
	$useLocalCurrentObjectStackCache();
	$var($Region, region, region$renamed);
	$var($LWContainerPeer, p, $nc(c)->getContainerPeer());
	if (p != nullptr) {
		$var($Rectangle, r, c->getBounds());
		$assign(region, $nc(region)->getTranslatedRegion($nc(r)->x, r->y));
		$assign(region, region->getIntersection($(p->getRegion())));
		$assign(region, region->getIntersection($(p->getContentSize())));
		$assign(region, p->cutChildren(region, c));
		$assign(region, computeVisibleRect(p, region));
		$assign(region, region->getTranslatedRegion(-$nc(r)->x, -r->y));
	}
	return region;
}

$ColorModel* LWComponentPeer::getColorModel() {
	return $nc($(getGraphicsConfiguration()))->getColorModel();
}

bool LWComponentPeer::isTranslucent() {
	return false;
}

void LWComponentPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	$useLocalCurrentObjectStackCache();
	$nc($(getLWGC()))->assertOperationSupported(numBuffers, caps);
	$var($Image, buffer, $nc($(getLWGC()))->createBackBuffer(this));
	$synchronized(getStateLock()) {
		$set(this, backBuffer, buffer);
	}
}

$Image* LWComponentPeer::getBackBuffer() {
	$synchronized(getStateLock()) {
		if (this->backBuffer != nullptr) {
			return this->backBuffer;
		}
	}
	$throwNew($IllegalStateException, "Buffers have not been created"_s);
}

void LWComponentPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	$useLocalCurrentObjectStackCache();
	$nc($(getLWGC()))->flip(this, $(getBackBuffer()), x1, y1, x2, y2, flipAction);
}

void LWComponentPeer::destroyBuffers() {
	$useLocalCurrentObjectStackCache();
	$var($Image, oldBB, nullptr);
	$synchronized(getStateLock()) {
		$assign(oldBB, this->backBuffer);
		$set(this, backBuffer, nullptr);
	}
	$nc($(getLWGC()))->destroyBackBuffer(oldBB);
}

void LWComponentPeer::setBounds($Rectangle* r) {
	setBounds($nc(r)->x, r->y, r->width, r->height, $ComponentPeer::SET_BOUNDS);
}

void LWComponentPeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	setBounds(x, y, w, h, op, true, false);
}

void LWComponentPeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op, bool notify, bool updateTarget) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, oldBounds, nullptr);
	$synchronized(getStateLock()) {
		$assign(oldBounds, $new($Rectangle, this->bounds));
		if (((int32_t)(op & (uint32_t)($ComponentPeer::SET_LOCATION | $ComponentPeer::SET_BOUNDS))) != 0) {
			$nc(this->bounds)->x = x;
			$nc(this->bounds)->y = y;
		}
		if (((int32_t)(op & (uint32_t)($ComponentPeer::SET_SIZE | $ComponentPeer::SET_BOUNDS))) != 0) {
			$nc(this->bounds)->width = w;
			$nc(this->bounds)->height = h;
		}
	}
	bool moved = ($nc(oldBounds)->x != x) || ($nc(oldBounds)->y != y);
	bool resized = (oldBounds->width != w) || (oldBounds->height != h);
	if (!moved && !resized) {
		return;
	}
	$var($JComponent, delegate, getDelegate());
	if (delegate != nullptr) {
		$synchronized(getDelegateLock()) {
			$nc(this->delegateContainer)->setBounds(0, 0, w, h);
			delegate->setBounds($($nc(this->delegateContainer)->getBounds()));
			delegate->validate();
		}
	}
	$var($Point, locationInWindow, localToWindow(0, 0));
	$nc(this->platformComponent)->setBounds($nc(locationInWindow)->x, locationInWindow->y, w, h);
	if (notify) {
		repaintOldNewBounds(oldBounds);
		if (resized) {
			handleResize(w, h, updateTarget);
		}
		if (moved) {
			handleMove(x, y, updateTarget);
		}
	}
}

$Rectangle* LWComponentPeer::getBounds() {
	$synchronized(getStateLock()) {
		return $nc(this->bounds)->getBounds();
	}
}

$Rectangle* LWComponentPeer::getSize() {
	$synchronized(getStateLock()) {
		return $new($Rectangle, $nc(this->bounds)->width, $nc(this->bounds)->height);
	}
}

$Point* LWComponentPeer::getLocationOnScreen() {
	$useLocalCurrentObjectStackCache();
	$var($Point, windowLocation, $nc($(getWindowPeer()))->getLocationOnScreen());
	$var($Point, locationInWindow, localToWindow(0, 0));
	return $new($Point, $nc(windowLocation)->x + $nc(locationInWindow)->x, windowLocation->y + locationInWindow->y);
}

$Cursor* LWComponentPeer::getCursor($Point* p) {
	return $nc($(getTarget()))->getCursor();
}

void LWComponentPeer::setBackground($Color* c) {
	$useLocalCurrentObjectStackCache();
	$var($Color, oldBg, getBackground());
	if (oldBg == c || (oldBg != nullptr && oldBg->equals(c))) {
		return;
	}
	$synchronized(getStateLock()) {
		$set(this, background, c);
	}
	$var($JComponent, delegate, getDelegate());
	if (delegate != nullptr) {
		$synchronized(getDelegateLock()) {
			delegate->setBackground(c);
		}
	} else {
		repaintPeer();
	}
}

$Color* LWComponentPeer::getBackground() {
	$synchronized(getStateLock()) {
		return this->background;
	}
}

void LWComponentPeer::setForeground($Color* c) {
	$useLocalCurrentObjectStackCache();
	$var($Color, oldFg, getForeground());
	if (oldFg == c || (oldFg != nullptr && oldFg->equals(c))) {
		return;
	}
	$synchronized(getStateLock()) {
		$set(this, foreground, c);
	}
	$var($JComponent, delegate, getDelegate());
	if (delegate != nullptr) {
		$synchronized(getDelegateLock()) {
			delegate->setForeground(c);
		}
	} else {
		repaintPeer();
	}
}

$Color* LWComponentPeer::getForeground() {
	$synchronized(getStateLock()) {
		return this->foreground;
	}
}

void LWComponentPeer::setFont($Font* f) {
	$useLocalCurrentObjectStackCache();
	$var($Font, oldF, getFont());
	if (oldF == f || (oldF != nullptr && oldF->equals(f))) {
		return;
	}
	$synchronized(getStateLock()) {
		$set(this, font, f);
	}
	$var($JComponent, delegate, getDelegate());
	if (delegate != nullptr) {
		$synchronized(getDelegateLock()) {
			delegate->setFont(f);
		}
	} else {
		repaintPeer();
	}
}

$Font* LWComponentPeer::getFont() {
	$synchronized(getStateLock()) {
		return this->font;
	}
}

$FontMetrics* LWComponentPeer::getFontMetrics($Font* f) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, getOnscreenGraphics());
	if (g != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			$var($FontMetrics, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, g->getFontMetrics(f));
				return$1 = true;
				goto $finally;
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				g->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$synchronized(getDelegateLock()) {
		return $nc(this->delegateContainer)->getFontMetrics(f);
	}
}

void LWComponentPeer::setEnabled(bool e) {
	$useLocalCurrentObjectStackCache();
	bool status = e;
	$var(LWComponentPeer, cp, getContainerPeer());
	if (cp != nullptr) {
		status &= cp->isEnabled();
	}
	$synchronized(getStateLock()) {
		if (this->enabled == status) {
			return;
		}
		this->enabled = status;
	}
	$var($JComponent, delegate, getDelegate());
	if (delegate != nullptr) {
		$synchronized(getDelegateLock()) {
			delegate->setEnabled(status);
		}
	} else {
		repaintPeer();
	}
}

bool LWComponentPeer::isEnabled() {
	$synchronized(getStateLock()) {
		return this->enabled;
	}
}

void LWComponentPeer::setVisible(bool v) {
	$synchronized(getStateLock()) {
		if (this->visible == v) {
			return;
		}
		this->visible = v;
	}
	setVisibleImpl(v);
}

void LWComponentPeer::setVisibleImpl(bool v) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, delegate, getDelegate());
	if (delegate != nullptr) {
		$synchronized(getDelegateLock()) {
			delegate->setVisible(v);
		}
	}
	if (this->visible) {
		repaintPeer();
	} else {
		repaintParent($(getBounds()));
	}
}

bool LWComponentPeer::isVisible() {
	$synchronized(getStateLock()) {
		return this->visible;
	}
}

void LWComponentPeer::paint($Graphics* g) {
	$nc($(getTarget()))->paint(g);
}

void LWComponentPeer::print($Graphics* g) {
	$nc($(getTarget()))->print(g);
}

void LWComponentPeer::reparent($ContainerPeer* newContainer) {
	$throwNew($UnsupportedOperationException, "ComponentPeer.reparent()"_s);
}

bool LWComponentPeer::isReparentSupported() {
	return false;
}

void LWComponentPeer::setZOrder($ComponentPeer* above) {
	$var($LWContainerPeer, cp, getContainerPeer());
	$nc(cp)->setChildPeerZOrder(this, $cast(LWComponentPeer, above));
}

void LWComponentPeer::coalescePaintEvent($PaintEvent* e) {
	if (!($instanceOf($IgnorePaintEvent, e))) {
		$var($Rectangle, r, $nc(e)->getUpdateRect());
		if ((r != nullptr) && !r->isEmpty()) {
			$nc(this->targetPaintArea)->add(r, e->getID());
		}
	}
}

void LWComponentPeer::layout() {
}

bool LWComponentPeer::isObscured() {
	return false;
}

bool LWComponentPeer::canDetermineObscurity() {
	return false;
}

$Dimension* LWComponentPeer::getPreferredSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, nullptr);
	$synchronized(getDelegateLock()) {
		$assign(size, $nc($(getDelegate()))->getPreferredSize());
	}
	return validateSize(size);
}

$Dimension* LWComponentPeer::getMinimumSize() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, nullptr);
	$synchronized(getDelegateLock()) {
		$assign(size, $nc($(getDelegate()))->getMinimumSize());
	}
	return validateSize(size);
}

$Dimension* LWComponentPeer::validateSize($Dimension* size) {
	$useLocalCurrentObjectStackCache();
	if ($nc(size)->width == 0 || $nc(size)->height == 0) {
		$var($FontMetrics, fm, getFontMetrics($(getFont())));
		size->width = $nc(fm)->charWidth(LWComponentPeer::WIDE_CHAR);
		size->height = fm->getHeight();
	}
	return size;
}

void LWComponentPeer::updateCursorImmediately() {
	$useLocalCurrentObjectStackCache();
	$nc($($nc($(getLWToolkit()))->getCursorManager()))->updateCursor();
}

bool LWComponentPeer::isFocusable() {
	return false;
}

bool LWComponentPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(LWComponentPeer::focusLog)->isLoggable($PlatformLogger$Level::FINEST)) {
		$nc(LWComponentPeer::focusLog)->finest($$str({"lightweightChild="_s, lightweightChild, ", temporary="_s, $$str(temporary), ", focusedWindowChangeAllowed="_s, $$str(focusedWindowChangeAllowed), ", time= "_s, $$str(time), ", cause="_s, cause}));
	}
	if ($LWKeyboardFocusManagerPeer::processSynchronousLightweightTransfer($(getTarget()), lightweightChild, temporary, focusedWindowChangeAllowed, time)) {
		return true;
	}
	int32_t result = $LWKeyboardFocusManagerPeer::shouldNativelyFocusHeavyweight($(getTarget()), lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
	{
		$var($Window, parentWindow, nullptr)
		$var($LWWindowPeer, parentPeer, nullptr)
		bool res = false;
		$var($KeyboardFocusManagerPeer, kfmPeer, nullptr)
		$var($Component, focusOwner, nullptr)
		switch (result) {
		case $LWKeyboardFocusManagerPeer::SNFH_FAILURE:
			{
				return false;
			}
		case $LWKeyboardFocusManagerPeer::SNFH_SUCCESS_PROCEED:
			{
				$assign(parentWindow, $SunToolkit::getContainingWindow($(getTarget())));
				if (parentWindow == nullptr) {
					$nc(LWComponentPeer::focusLog)->fine("request rejected, parentWindow is null"_s);
					$LWKeyboardFocusManagerPeer::removeLastFocusRequest($(getTarget()));
					return false;
				}
				$assign(parentPeer, $cast($LWWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(parentWindow)));
				if (parentPeer == nullptr) {
					$nc(LWComponentPeer::focusLog)->fine("request rejected, parentPeer is null"_s);
					$LWKeyboardFocusManagerPeer::removeLastFocusRequest($(getTarget()));
					return false;
				}
				if (!focusedWindowChangeAllowed) {
					$var($LWWindowPeer, decoratedPeer, $nc(parentPeer)->isSimpleWindow() ? $LWWindowPeer::getOwnerFrameDialog(parentPeer) : parentPeer);
					if (decoratedPeer == nullptr || !$nc($($nc(decoratedPeer)->getPlatformWindow()))->isActive()) {
						if ($nc(LWComponentPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
							$nc(LWComponentPeer::focusLog)->fine($$str({"request rejected, focusedWindowChangeAllowed==false, decoratedPeer is inactive: "_s, decoratedPeer}));
						}
						$LWKeyboardFocusManagerPeer::removeLastFocusRequest($(getTarget()));
						return false;
					}
				}
				res = $nc(parentPeer)->requestWindowFocus(cause);
				if (!res || !$nc(parentWindow)->isFocused()) {
					if ($nc(LWComponentPeer::focusLog)->isLoggable($PlatformLogger$Level::FINE)) {
						$nc(LWComponentPeer::focusLog)->fine($$str({"request rejected, res= "_s, $$str(res), ", parentWindow.isFocused()="_s, $$str(parentWindow->isFocused())}));
					}
					$LWKeyboardFocusManagerPeer::removeLastFocusRequest($(getTarget()));
					return false;
				}
				$assign(kfmPeer, $LWKeyboardFocusManagerPeer::getInstance());
				$assign(focusOwner, $nc(kfmPeer)->getCurrentFocusOwner());
				return $LWKeyboardFocusManagerPeer::deliverFocus(lightweightChild, $(getTarget()), temporary, focusedWindowChangeAllowed, time, cause, focusOwner);
			}
		case $LWKeyboardFocusManagerPeer::SNFH_SUCCESS_HANDLED:
			{
				return true;
			}
		}
	}
	return false;
}

$Image* LWComponentPeer::createImage(int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	return $nc($(getLWGC()))->createAcceleratedImage($(getTarget()), width, height);
}

$VolatileImage* LWComponentPeer::createVolatileImage(int32_t w, int32_t h) {
	return $new($SunVolatileImage, $(getTarget()), w, h);
}

bool LWComponentPeer::handlesWheelScrolling() {
	return false;
}

void LWComponentPeer::applyShape($Region* shape) {
	$synchronized(getStateLock()) {
		if (this->region == shape || (this->region != nullptr && $nc(this->region)->equals(shape))) {
			return;
		}
	}
	applyShapeImpl(shape);
}

void LWComponentPeer::applyShapeImpl($Region* shape) {
	$synchronized(getStateLock()) {
		if (shape != nullptr) {
			$init($Region);
			$set(this, region, $nc($Region::WHOLE_REGION)->getIntersection(shape));
		} else {
			$set(this, region, nullptr);
		}
	}
	repaintParent($(getBounds()));
}

$Region* LWComponentPeer::getRegion() {
	$synchronized(getStateLock()) {
		return isShaped() ? this->region : $Region::getInstance($(getSize()));
	}
}

bool LWComponentPeer::isShaped() {
	$synchronized(getStateLock()) {
		return this->region != nullptr;
	}
}

void LWComponentPeer::addDropTarget($DropTarget* dt) {
	$useLocalCurrentObjectStackCache();
	$var($LWWindowPeer, winPeer, getWindowPeerOrSelf());
	if (winPeer != nullptr && !$equals(winPeer, this)) {
		winPeer->addDropTarget(dt);
	} else {
		$synchronized(this->dropTargetLock) {
			if (++this->fNumDropTargets == 1) {
				if (this->fDropTarget != nullptr) {
					$throwNew($IllegalStateException, "Current drop target is not null"_s);
				}
				$set(this, fDropTarget, $nc($($LWToolkit::getLWToolkit()))->createDropTarget(dt, this->target, this));
			}
		}
	}
}

void LWComponentPeer::removeDropTarget($DropTarget* dt) {
	$var($LWWindowPeer, winPeer, getWindowPeerOrSelf());
	if (winPeer != nullptr && !$equals(winPeer, this)) {
		winPeer->removeDropTarget(dt);
	} else {
		$synchronized(this->dropTargetLock) {
			if (--this->fNumDropTargets == 0) {
				if (this->fDropTarget != nullptr) {
					$nc(this->fDropTarget)->dispose();
					$set(this, fDropTarget, nullptr);
				} else {
					$nc($System::err)->println("CComponent.removeDropTarget(): current drop target is null."_s);
				}
			}
		}
	}
}

void LWComponentPeer::handleMove(int32_t x, int32_t y, bool updateTarget) {
	$useLocalCurrentObjectStackCache();
	if (updateTarget) {
		$nc($($AWTAccessor::getComponentAccessor()))->setLocation($(getTarget()), x, y);
		postEvent($$new($ComponentEvent, $(getTarget()), $ComponentEvent::COMPONENT_MOVED));
	}
}

void LWComponentPeer::handleResize(int32_t w, int32_t h, bool updateTarget) {
	$useLocalCurrentObjectStackCache();
	$var($Image, oldBB, nullptr);
	$synchronized(getStateLock()) {
		if (this->backBuffer != nullptr) {
			$assign(oldBB, this->backBuffer);
			$set(this, backBuffer, $nc($(getLWGC()))->createBackBuffer(this));
		}
	}
	$nc($(getLWGC()))->destroyBackBuffer(oldBB);
	if (updateTarget) {
		$nc($($AWTAccessor::getComponentAccessor()))->setSize($(getTarget()), w, h);
		postEvent($$new($ComponentEvent, $(getTarget()), $ComponentEvent::COMPONENT_RESIZED));
	}
}

void LWComponentPeer::repaintOldNewBounds($Rectangle* oldB) {
	repaintParent(oldB);
	repaintPeer($(getSize()));
}

void LWComponentPeer::repaintParent($Rectangle* oldB) {
	$useLocalCurrentObjectStackCache();
	$var($LWContainerPeer, cp, getContainerPeer());
	if (cp != nullptr) {
		cp->repaintPeer($($nc($(cp->getContentSize()))->intersection(oldB)));
	}
}

void LWComponentPeer::postEvent($AWTEvent* event) {
	$LWToolkit::postEvent(event);
}

void LWComponentPeer::postPaintEvent(int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($AWTAccessor::getComponentAccessor()))->getIgnoreRepaint(this->target)) {
		return;
	}
	$var($PaintEvent, event, $nc($($PaintEventDispatcher::getPaintEventDispatcher()))->createPaintEvent($(getTarget()), x, y, w, h));
	if (event != nullptr) {
		postEvent(event);
	}
}

void LWComponentPeer::handleEvent($AWTEvent* e) {
	if (($instanceOf($InputEvent, e)) && $nc(($cast($InputEvent, e)))->isConsumed()) {
		return;
	}
	switch ($nc(e)->getID()) {
	case $FocusEvent::FOCUS_GAINED:
		{}
	case $FocusEvent::FOCUS_LOST:
		{
			handleJavaFocusEvent($cast($FocusEvent, e));
			break;
		}
	case $PaintEvent::PAINT:
		{}
	case $PaintEvent::UPDATE:
		{
			handleJavaPaintEvent();
			break;
		}
	case $MouseEvent::MOUSE_PRESSED:
		{
			handleJavaMouseEvent($cast($MouseEvent, e));
		}
	}
	sendEventToDelegate(e);
}

void LWComponentPeer::sendEventToDelegate($AWTEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = getDelegate() == nullptr;
	bool var$0 = var$1 || !isShowing();
	if (var$0 || !isEnabled()) {
		return;
	}
	$synchronized(getDelegateLock()) {
		$var($AWTEvent, delegateEvent, createDelegateEvent(e));
		if (delegateEvent != nullptr) {
			$nc($($AWTAccessor::getComponentAccessor()))->processEvent($cast($Component, $(delegateEvent->getSource())), delegateEvent);
			if ($instanceOf($KeyEvent, delegateEvent)) {
				$var($KeyEvent, ke, $cast($KeyEvent, delegateEvent));
				$SwingUtilities::processKeyBindings(ke);
			}
		}
	}
}

$AWTEvent* LWComponentPeer::createDelegateEvent($AWTEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($AWTEvent, delegateEvent, nullptr);
	if ($instanceOf($MouseWheelEvent, e)) {
		$var($MouseWheelEvent, me, $cast($MouseWheelEvent, e));
		$var($Component, var$0, static_cast<$Component*>(this->delegate));
		int32_t var$1 = $nc(me)->getID();
		int64_t var$2 = me->getWhen();
		int32_t var$3 = me->getModifiers();
		int32_t var$4 = me->getX();
		int32_t var$5 = me->getY();
		int32_t var$6 = me->getXOnScreen();
		int32_t var$7 = me->getYOnScreen();
		int32_t var$8 = me->getClickCount();
		bool var$9 = me->isPopupTrigger();
		int32_t var$10 = me->getScrollType();
		int32_t var$11 = me->getScrollAmount();
		int32_t var$12 = me->getWheelRotation();
		$assign(delegateEvent, $new($MouseWheelEvent, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, var$11, var$12, me->getPreciseWheelRotation()));
	} else if ($instanceOf($MouseEvent, e)) {
		$var($MouseEvent, me, $cast($MouseEvent, e));
		$var($Component, var$13, static_cast<$Component*>(this->delegate));
		int32_t var$14 = $nc(me)->getX();
		$var($Component, eventTarget, $SwingUtilities::getDeepestComponentAt(var$13, var$14, me->getY()));
		if ($nc(me)->getID() == $MouseEvent::MOUSE_DRAGGED) {
			if (this->delegateDropTarget == nullptr) {
				$set(this, delegateDropTarget, eventTarget);
			} else {
				$assign(eventTarget, this->delegateDropTarget);
			}
		}
		if ($nc(me)->getID() == $MouseEvent::MOUSE_RELEASED && this->delegateDropTarget != nullptr) {
			$assign(eventTarget, this->delegateDropTarget);
			$set(this, delegateDropTarget, nullptr);
		}
		if (eventTarget == nullptr) {
			$assign(eventTarget, this->delegate);
		}
		$assign(delegateEvent, $SwingUtilities::convertMouseEvent($(getTarget()), me, eventTarget));
	} else if ($instanceOf($KeyEvent, e)) {
		$var($KeyEvent, ke, $cast($KeyEvent, e));
		$var($Component, var$15, getDelegateFocusOwner());
		int32_t var$16 = $nc(ke)->getID();
		int64_t var$17 = ke->getWhen();
		int32_t var$18 = ke->getModifiers();
		int32_t var$19 = ke->getKeyCode();
		char16_t var$20 = ke->getKeyChar();
		$assign(delegateEvent, $new($KeyEvent, var$15, var$16, var$17, var$18, var$19, var$20, ke->getKeyLocation()));
		$nc($($AWTAccessor::getKeyEventAccessor()))->setExtendedKeyCode($cast($KeyEvent, delegateEvent), $nc(ke)->getExtendedKeyCode());
	} else if ($instanceOf($FocusEvent, e)) {
		$var($FocusEvent, fe, $cast($FocusEvent, e));
		$var($Component, var$21, getDelegateFocusOwner());
		int32_t var$22 = $nc(fe)->getID();
		$assign(delegateEvent, $new($FocusEvent, var$21, var$22, fe->isTemporary()));
	}
	return delegateEvent;
}

void LWComponentPeer::handleJavaMouseEvent($MouseEvent* e) {
	$var($Component, target, getTarget());
	if (!LWComponentPeer::$assertionsDisabled && !($equals($nc(e)->getSource(), target))) {
		$throwNew($AssertionError);
	}
	bool var$0 = !$nc(target)->isFocusOwner();
	if (var$0 && $LWKeyboardFocusManagerPeer::shouldFocusOnClick(target)) {
		$init($FocusEvent$Cause);
		$LWKeyboardFocusManagerPeer::requestFocusFor(target, $FocusEvent$Cause::MOUSE_EVENT);
	}
}

void LWComponentPeer::handleJavaFocusEvent($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($KeyboardFocusManagerPeer, kfmPeer, $LWKeyboardFocusManagerPeer::getInstance());
	$nc(kfmPeer)->setCurrentFocusOwner($nc(e)->getID() == $FocusEvent::FOCUS_GAINED ? $(getTarget()) : ($Component*)nullptr);
}

bool LWComponentPeer::shouldClearRectBeforePaint() {
	return true;
}

void LWComponentPeer::handleJavaPaintEvent() {
	if (!isLayouting()) {
		$var($Object, var$0, $of(getTarget()));
		$nc(this->targetPaintArea)->paint(var$0, shouldClearRectBeforePaint());
	}
}

LWComponentPeer* LWComponentPeer::findPeerAt(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, r, getBounds());
	$var($Region, sh, getRegion());
	bool var$0 = isVisible();
	bool found = var$0 && $nc(sh)->contains(x - $nc(r)->x, y - r->y);
	return found ? this : (LWComponentPeer*)nullptr;
}

$Point* LWComponentPeer::windowToLocal(int32_t x, int32_t y, $LWWindowPeer* wp) {
	return windowToLocal($$new($Point, x, y), wp);
}

$Point* LWComponentPeer::windowToLocal($Point* p, $LWWindowPeer* wp) {
	$useLocalCurrentObjectStackCache();
	$var(LWComponentPeer, cp, this);
	while (!$equals(cp, wp)) {
		$var($Rectangle, cpb, $nc(cp)->getBounds());
		$nc(p)->x -= $nc(cpb)->x;
		p->y -= cpb->y;
		$assign(cp, cp->getContainerPeer());
	}
	return $new($Point, p);
}

$Rectangle* LWComponentPeer::windowToLocal($Rectangle* r, $LWWindowPeer* wp) {
	$useLocalCurrentObjectStackCache();
	$var($Point, p, windowToLocal($($nc(r)->getLocation()), wp));
	return $new($Rectangle, p, $($nc(r)->getSize()));
}

$Point* LWComponentPeer::localToWindow(int32_t x, int32_t y) {
	return localToWindow($$new($Point, x, y));
}

$Point* LWComponentPeer::localToWindow($Point* p) {
	$useLocalCurrentObjectStackCache();
	$var(LWComponentPeer, cp, getContainerPeer());
	$var($Rectangle, r, getBounds());
	while (cp != nullptr) {
		$nc(p)->x += $nc(r)->x;
		p->y += r->y;
		$assign(r, cp->getBounds());
		$assign(cp, cp->getContainerPeer());
	}
	return $new($Point, p);
}

$Rectangle* LWComponentPeer::localToWindow($Rectangle* r) {
	$useLocalCurrentObjectStackCache();
	$var($Point, p, localToWindow($($nc(r)->getLocation())));
	return $new($Rectangle, p, $($nc(r)->getSize()));
}

void LWComponentPeer::repaintPeer() {
	repaintPeer($(getSize()));
}

void LWComponentPeer::repaintPeer($Rectangle* r) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, toPaint, $nc($(getSize()))->intersection(r));
	bool var$0 = !isShowing();
	if (var$0 || $nc(toPaint)->isEmpty()) {
		return;
	}
	postPaintEvent($nc(toPaint)->x, toPaint->y, toPaint->width, toPaint->height);
}

bool LWComponentPeer::isShowing() {
	$synchronized(getPeerTreeLock()) {
		if (isVisible()) {
			$var($LWContainerPeer, container, getContainerPeer());
			return (container == nullptr) || $nc(container)->isShowing();
		}
	}
	return false;
}

void LWComponentPeer::paintPeer($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, delegate, getDelegate());
	if (delegate != nullptr) {
		if (!$SwingUtilities::isEventDispatchThread()) {
			$throwNew($InternalError, "Painting must be done on EDT"_s);
		}
		$synchronized(getDelegateLock()) {
			$nc($(getDelegate()))->print(g);
		}
	}
}

void LWComponentPeer::flushOnscreenGraphics() {
	$init(LWComponentPeer);
	$useLocalCurrentObjectStackCache();
	$var($RenderQueue, rq, $CGraphicsDevice::usingMetalPipeline() ? static_cast<$RenderQueue*>($MTLRenderQueue::getInstance()) : static_cast<$RenderQueue*>($OGLRenderQueue::getInstance()));
	$nc(rq)->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			rq->flushNow();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			rq->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void LWComponentPeer::setLayouting(bool isLayouting) {
	this->isLayouting$ = isLayouting;
}

bool LWComponentPeer::isLayouting() {
	return this->isLayouting$;
}

void clinit$LWComponentPeer($Class* class$) {
	LWComponentPeer::$assertionsDisabled = !LWComponentPeer::class$->desiredAssertionStatus();
	$assignStatic(LWComponentPeer::focusLog, $PlatformLogger::getLogger("sun.lwawt.focus.LWComponentPeer"_s));
	$assignStatic(LWComponentPeer::peerTreeLock, $new($Object));
}

LWComponentPeer::LWComponentPeer() {
}

$Class* LWComponentPeer::load$($String* name, bool initialize) {
	$loadClass(LWComponentPeer, name, initialize, &_LWComponentPeer_ClassInfo_, clinit$LWComponentPeer, allocate$LWComponentPeer);
	return class$;
}

$Class* LWComponentPeer::class$ = nullptr;

	} // lwawt
} // sun