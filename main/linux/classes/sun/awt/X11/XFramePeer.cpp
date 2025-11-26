#include <sun/awt/X11/XFramePeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/lang/Runnable.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <sun/awt/AWTAccessor$FrameAccessor.h>
#include <sun/awt/AWTAccessor$MenuComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/MWMConstants.h>
#include <sun/awt/X11/ToplevelStateListener.h>
#include <sun/awt/X11/WindowDimensions.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XContentWindow.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XDecoratedPeer.h>
#include <sun/awt/X11/XEvent.h>
#include <sun/awt/X11/XFramePeer$1.h>
#include <sun/awt/X11/XMenuBarPeer.h>
#include <sun/awt/X11/XNETProtocol.h>
#include <sun/awt/X11/XPropertyEvent.h>
#include <sun/awt/X11/XSizeHints.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XUtilConstants.h>
#include <sun/awt/X11/XWM.h>
#include <sun/awt/X11/XWMHints.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11/XWindowAttributesData.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <sun/awt/X11/XlibWrapper.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef AWT_DECOR_ALL
#undef AWT_DECOR_BORDER
#undef AWT_DECOR_MAXIMIZE
#undef AWT_DECOR_MENU
#undef AWT_DECOR_MINIMIZE
#undef AWT_DECOR_NONE
#undef AWT_DECOR_RESIZEH
#undef AWT_DECOR_TITLE
#undef BUTTON_H
#undef BUTTON_W
#undef BUTTON_Y
#undef CROSSHAIR_INSET
#undef FINE
#undef FINER
#undef HORIZ_RESIZE_INSET
#undef ICONIFIED
#undef MAXIMIZED_BOTH
#undef MAXIMIZED_HORIZ
#undef MAXIMIZED_VERT
#undef MAXIMIZE_CONTAINED_H
#undef MAXIMIZE_CONTAINED_W
#undef MAXIMIZE_CONTAINED_X_DIFF
#undef MAXIMIZE_CONTAINED_Y
#undef MAXIMIZE_X_DIFF
#undef MAX_VALUE
#undef MENUBAR_HEIGHT_IF_NO_MENUBAR
#undef MENUBAR_X
#undef MENUBAR_Y
#undef MINIMIZE_CONTAINED_H
#undef MINIMIZE_CONTAINED_W
#undef MINIMIZE_CONTAINED_X_DIFF
#undef MINIMIZE_CONTAINED_Y
#undef MINIMIZE_X_DIFF
#undef MWM_FUNC_ALL
#undef PLAIN
#undef SANS_SERIF
#undef SET_BOUNDS
#undef SYS_MENU_CONTAINED_H
#undef SYS_MENU_CONTAINED_W
#undef SYS_MENU_CONTAINED_X
#undef SYS_MENU_CONTAINED_Y
#undef SYS_MENU_X
#undef TITLE_MID_Y
#undef TITLE_W_DIFF
#undef TITLE_X
#undef VERT_RESIZE_INSET

using $AWTEvent = ::java::awt::AWTEvent;
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
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $MenuBar = ::java::awt::MenuBar;
using $MenuComponent = ::java::awt::MenuComponent;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $FramePeer = ::java::awt::peer::FramePeer;
using $MenuComponentPeer = ::java::awt::peer::MenuComponentPeer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$FrameAccessor = ::sun::awt::AWTAccessor$FrameAccessor;
using $AWTAccessor$MenuComponentAccessor = ::sun::awt::AWTAccessor$MenuComponentAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $MWMConstants = ::sun::awt::X11::MWMConstants;
using $ToplevelStateListener = ::sun::awt::X11::ToplevelStateListener;
using $WindowDimensions = ::sun::awt::X11::WindowDimensions;
using $XBaseMenuWindow = ::sun::awt::X11::XBaseMenuWindow;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XContentWindow = ::sun::awt::X11::XContentWindow;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XDecoratedPeer = ::sun::awt::X11::XDecoratedPeer;
using $XEvent = ::sun::awt::X11::XEvent;
using $XFramePeer$1 = ::sun::awt::X11::XFramePeer$1;
using $XMenuBarPeer = ::sun::awt::X11::XMenuBarPeer;
using $XNETProtocol = ::sun::awt::X11::XNETProtocol;
using $XPropertyEvent = ::sun::awt::X11::XPropertyEvent;
using $XSizeHints = ::sun::awt::X11::XSizeHints;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XUtilConstants = ::sun::awt::X11::XUtilConstants;
using $XWM = ::sun::awt::X11::XWM;
using $XWMHints = ::sun::awt::X11::XWMHints;
using $XWindow = ::sun::awt::X11::XWindow;
using $XWindowAttributesData = ::sun::awt::X11::XWindowAttributesData;
using $XWindowPeer = ::sun::awt::X11::XWindowPeer;
using $XlibWrapper = ::sun::awt::X11::XlibWrapper;
using $Region = ::sun::java2d::pipe::Region;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XFramePeer_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XFramePeer, log)},
	{"stateLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XFramePeer, stateLog)},
	{"insLog", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC, $staticField(XFramePeer, insLog)},
	{"menubarPeer", "Lsun/awt/X11/XMenuBarPeer;", nullptr, 0, $field(XFramePeer, menubarPeer)},
	{"menubar", "Ljava/awt/MenuBar;", nullptr, 0, $field(XFramePeer, menubar)},
	{"state", "I", nullptr, 0, $field(XFramePeer, state)},
	{"undecorated", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(XFramePeer, undecorated)},
	{"MENUBAR_HEIGHT_IF_NO_MENUBAR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XFramePeer, MENUBAR_HEIGHT_IF_NO_MENUBAR)},
	{"lastAppliedMenubarHeight", "I", nullptr, $PRIVATE, $field(XFramePeer, lastAppliedMenubarHeight)},
	{"CROSSHAIR_INSET", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, CROSSHAIR_INSET)},
	{"BUTTON_Y", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, BUTTON_Y)},
	{"BUTTON_W", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, BUTTON_W)},
	{"BUTTON_H", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, BUTTON_H)},
	{"SYS_MENU_X", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, SYS_MENU_X)},
	{"SYS_MENU_CONTAINED_X", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, SYS_MENU_CONTAINED_X)},
	{"SYS_MENU_CONTAINED_Y", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, SYS_MENU_CONTAINED_Y)},
	{"SYS_MENU_CONTAINED_W", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, SYS_MENU_CONTAINED_W)},
	{"SYS_MENU_CONTAINED_H", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, SYS_MENU_CONTAINED_H)},
	{"MAXIMIZE_X_DIFF", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, MAXIMIZE_X_DIFF)},
	{"MAXIMIZE_CONTAINED_X_DIFF", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, MAXIMIZE_CONTAINED_X_DIFF)},
	{"MAXIMIZE_CONTAINED_Y", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, MAXIMIZE_CONTAINED_Y)},
	{"MAXIMIZE_CONTAINED_W", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, MAXIMIZE_CONTAINED_W)},
	{"MAXIMIZE_CONTAINED_H", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, MAXIMIZE_CONTAINED_H)},
	{"MINIMIZE_X_DIFF", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, MINIMIZE_X_DIFF)},
	{"MINIMIZE_CONTAINED_X_DIFF", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, MINIMIZE_CONTAINED_X_DIFF)},
	{"MINIMIZE_CONTAINED_Y", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, MINIMIZE_CONTAINED_Y)},
	{"MINIMIZE_CONTAINED_W", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, MINIMIZE_CONTAINED_W)},
	{"MINIMIZE_CONTAINED_H", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, MINIMIZE_CONTAINED_H)},
	{"TITLE_X", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, TITLE_X)},
	{"TITLE_W_DIFF", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, TITLE_W_DIFF)},
	{"TITLE_MID_Y", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, TITLE_MID_Y)},
	{"MENUBAR_X", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, MENUBAR_X)},
	{"MENUBAR_Y", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, MENUBAR_Y)},
	{"HORIZ_RESIZE_INSET", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, HORIZ_RESIZE_INSET)},
	{"VERT_RESIZE_INSET", "I", nullptr, $STATIC | $FINAL, $constField(XFramePeer, VERT_RESIZE_INSET)},
	{}
};

$MethodInfo _XFramePeer_MethodInfo_[] = {
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
	{"*getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Frame;)V", nullptr, 0, $method(static_cast<void(XFramePeer::*)($Frame*)>(&XFramePeer::init$))},
	{"<init>", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0, $method(static_cast<void(XFramePeer::*)($XCreateWindowParams*)>(&XFramePeer::init$))},
	{"changeState", "(I)V", nullptr, 0},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"emulateActivation", "(Z)V", nullptr, $PUBLIC},
	{"getBoundsPrivate", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getMenuBarHeight", "()I", nullptr, 0},
	{"getMenubarPeer", "()Lsun/awt/X11/XMenuBarPeer;", nullptr, 0},
	{"getState", "()I", nullptr, $PUBLIC},
	{"handlePropertyNotify", "(Lsun/awt/X11/XEvent;)V", nullptr, $PUBLIC},
	{"handleStateChange", "(II)V", nullptr, $PUBLIC},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"isMaximized", "()Z", nullptr, 0},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"isTargetUndecorated", "()Z", nullptr, 0},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"postInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*repositionSecurityWarning", "()V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"reshapeMenubarPeer", "()V", nullptr, $FINAL, $method(static_cast<void(XFramePeer::*)()>(&XFramePeer::reshapeMenubarPeer))},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setBoundsPrivate", "(IIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setExtendedState", "(I)V", nullptr, 0},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setInitialState", "(I)V", nullptr, 0},
	{"setMaximizedBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC},
	{"*setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"*setOpacity", "(F)V", nullptr, $PUBLIC},
	{"*setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"*setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setState", "(I)V", nullptr, $PUBLIC},
	{"*setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"setupState", "(Z)V", nullptr, 0},
	{"*toBack", "()V", nullptr, $PUBLIC},
	{"*toFront", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*updateAlwaysOnTopState", "()V", nullptr, $PUBLIC},
	{"updateChildrenSizes", "()V", nullptr, 0},
	{"*updateMinimumSize", "()V", nullptr, $PUBLIC},
	{"*updateIconImages", "()V", nullptr, $PUBLIC},
	{"*updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"*updateWindow", "()V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XFramePeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XFramePeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XFramePeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XFramePeer",
	"sun.awt.X11.XDecoratedPeer",
	"java.awt.peer.FramePeer",
	_XFramePeer_FieldInfo_,
	_XFramePeer_MethodInfo_,
	nullptr,
	nullptr,
	_XFramePeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XFramePeer$1"
};

$Object* allocate$XFramePeer($Class* clazz) {
	return $of($alloc(XFramePeer));
}

void XFramePeer::updateMinimumSize() {
	this->$XDecoratedPeer::updateMinimumSize();
}

$Graphics* XFramePeer::getGraphics() {
	 return this->$XDecoratedPeer::getGraphics();
}

void XFramePeer::setTitle($String* title) {
	this->$XDecoratedPeer::setTitle(title);
}

$Insets* XFramePeer::getInsets() {
	 return this->$XDecoratedPeer::getInsets();
}

void XFramePeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$XDecoratedPeer::setBounds(x, y, width, height, op);
}

void XFramePeer::setResizable(bool resizable) {
	this->$XDecoratedPeer::setResizable(resizable);
}

$Point* XFramePeer::getLocationOnScreen() {
	 return this->$XDecoratedPeer::getLocationOnScreen();
}

void XFramePeer::updateIconImages() {
	this->$XDecoratedPeer::updateIconImages();
}

void XFramePeer::toFront() {
	this->$XDecoratedPeer::toFront();
}

void XFramePeer::toBack() {
	this->$XDecoratedPeer::toBack();
}

void XFramePeer::updateAlwaysOnTopState() {
	this->$XDecoratedPeer::updateAlwaysOnTopState();
}

void XFramePeer::repositionSecurityWarning() {
	this->$XDecoratedPeer::repositionSecurityWarning();
}

void XFramePeer::setModalBlocked($Dialog* d, bool blocked) {
	this->$XDecoratedPeer::setModalBlocked(d, blocked);
}

void XFramePeer::updateFocusableWindowState() {
	this->$XDecoratedPeer::updateFocusableWindowState();
}

void XFramePeer::setOpacity(float opacity) {
	this->$XDecoratedPeer::setOpacity(opacity);
}

void XFramePeer::setOpaque(bool isOpaque) {
	this->$XDecoratedPeer::setOpaque(isOpaque);
}

void XFramePeer::updateWindow() {
	this->$XDecoratedPeer::updateWindow();
}

void XFramePeer::paint($Graphics* g) {
	this->$XDecoratedPeer::paint(g);
}

void XFramePeer::setBackground($Color* c) {
	this->$XDecoratedPeer::setBackground(c);
}

void XFramePeer::setForeground($Color* c) {
	this->$XDecoratedPeer::setForeground(c);
}

void XFramePeer::reparent($ContainerPeer* newNativeParent) {
	this->$XDecoratedPeer::reparent(newNativeParent);
}

bool XFramePeer::isReparentSupported() {
	 return this->$XDecoratedPeer::isReparentSupported();
}

bool XFramePeer::isObscured() {
	 return this->$XDecoratedPeer::isObscured();
}

bool XFramePeer::canDetermineObscurity() {
	 return this->$XDecoratedPeer::canDetermineObscurity();
}

bool XFramePeer::isFocusable() {
	 return this->$XDecoratedPeer::isFocusable();
}

bool XFramePeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XDecoratedPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void XFramePeer::setEnabled(bool value) {
	this->$XDecoratedPeer::setEnabled(value);
}

void XFramePeer::coalescePaintEvent($PaintEvent* e) {
	this->$XDecoratedPeer::coalescePaintEvent(e);
}

void XFramePeer::handleEvent($AWTEvent* e) {
	this->$XDecoratedPeer::handleEvent(e);
}

$Dimension* XFramePeer::getMinimumSize() {
	 return this->$XDecoratedPeer::getMinimumSize();
}

$Dimension* XFramePeer::getPreferredSize() {
	 return this->$XDecoratedPeer::getPreferredSize();
}

void XFramePeer::layout() {
	this->$XDecoratedPeer::layout();
}

$FontMetrics* XFramePeer::getFontMetrics($Font* font) {
	 return this->$XDecoratedPeer::getFontMetrics(font);
}

void XFramePeer::setFont($Font* f) {
	this->$XDecoratedPeer::setFont(f);
}

void XFramePeer::updateCursorImmediately() {
	this->$XDecoratedPeer::updateCursorImmediately();
}

$Image* XFramePeer::createImage(int32_t width, int32_t height) {
	 return this->$XDecoratedPeer::createImage(width, height);
}

$VolatileImage* XFramePeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XDecoratedPeer::createVolatileImage(width, height);
}

void XFramePeer::beginValidate() {
	this->$XDecoratedPeer::beginValidate();
}

void XFramePeer::endValidate() {
	this->$XDecoratedPeer::endValidate();
}

bool XFramePeer::handlesWheelScrolling() {
	 return this->$XDecoratedPeer::handlesWheelScrolling();
}

void XFramePeer::beginLayout() {
	this->$XDecoratedPeer::beginLayout();
}

void XFramePeer::endLayout() {
	this->$XDecoratedPeer::endLayout();
}

void XFramePeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XDecoratedPeer::createBuffers(numBuffers, caps);
}

void XFramePeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XDecoratedPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* XFramePeer::getBackBuffer() {
	 return this->$XDecoratedPeer::getBackBuffer();
}

void XFramePeer::destroyBuffers() {
	this->$XDecoratedPeer::destroyBuffers();
}

void XFramePeer::setZOrder($ComponentPeer* above) {
	this->$XDecoratedPeer::setZOrder(above);
}

void XFramePeer::applyShape($Region* shape) {
	this->$XDecoratedPeer::applyShape(shape);
}

bool XFramePeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XDecoratedPeer::updateGraphicsData(gc);
}

$ColorModel* XFramePeer::getColorModel() {
	 return this->$XDecoratedPeer::getColorModel();
}

$GraphicsConfiguration* XFramePeer::getGraphicsConfiguration() {
	 return this->$XDecoratedPeer::getGraphicsConfiguration();
}

$String* XFramePeer::toString() {
	 return this->$XDecoratedPeer::toString();
}

int32_t XFramePeer::hashCode() {
	 return this->$XDecoratedPeer::hashCode();
}

bool XFramePeer::equals(Object$* arg0) {
	 return this->$XDecoratedPeer::equals(arg0);
}

$Object* XFramePeer::clone() {
	 return this->$XDecoratedPeer::clone();
}

void XFramePeer::finalize() {
	this->$XDecoratedPeer::finalize();
}

$PlatformLogger* XFramePeer::log = nullptr;
$PlatformLogger* XFramePeer::stateLog = nullptr;
$PlatformLogger* XFramePeer::insLog = nullptr;

void XFramePeer::init$($Frame* target) {
	$XDecoratedPeer::init$(static_cast<$Window*>(target));
	this->lastAppliedMenubarHeight = XFramePeer::MENUBAR_HEIGHT_IF_NO_MENUBAR;
}

void XFramePeer::init$($XCreateWindowParams* params) {
	$XDecoratedPeer::init$(params);
	this->lastAppliedMenubarHeight = XFramePeer::MENUBAR_HEIGHT_IF_NO_MENUBAR;
}

void XFramePeer::preInit($XCreateWindowParams* params) {
	$useLocalCurrentObjectStackCache();
	$XDecoratedPeer::preInit(params);
	$var($Frame, target, ($cast($Frame, this->target)));
	$nc(this->winAttr)->initialState = $nc(target)->getExtendedState();
	this->state = 0;
	$set(this, undecorated, $Boolean::valueOf(target->isUndecorated()));
	$nc(this->winAttr)->nativeDecor = !target->isUndecorated();
	if ($nc(this->winAttr)->nativeDecor) {
		$init($XWindowAttributesData);
		$nc(this->winAttr)->decorations = $XWindowAttributesData::AWT_DECOR_ALL;
	} else {
		$init($XWindowAttributesData);
		$nc(this->winAttr)->decorations = $XWindowAttributesData::AWT_DECOR_NONE;
	}
	$nc(this->winAttr)->functions = $MWMConstants::MWM_FUNC_ALL;
	$nc(this->winAttr)->isResizable = true;
	$set($nc(this->winAttr), title, target->getTitle());
	$nc(this->winAttr)->initialResizability = target->isResizable();
	$init($PlatformLogger$Level);
	if ($nc(XFramePeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XFramePeer::log)->fine("Frame\'\'s initial attributes: decor {0}, resizable {1}, undecorated {2}, initial state {3}"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf($nc(this->winAttr)->decorations))),
			$($of($Boolean::valueOf($nc(this->winAttr)->initialResizability))),
			$($of($Boolean::valueOf(!$nc(this->winAttr)->nativeDecor))),
			$($of($Integer::valueOf($nc(this->winAttr)->initialState)))
		}));
	}
}

void XFramePeer::postInit($XCreateWindowParams* params) {
	$XDecoratedPeer::postInit(params);
	setupState(true);
}

bool XFramePeer::isTargetUndecorated() {
	if (this->undecorated != nullptr) {
		return $nc(this->undecorated)->booleanValue();
	} else {
		return $nc(($cast($Frame, this->target)))->isUndecorated();
	}
}

void XFramePeer::setupState(bool onInit) {
	if (onInit) {
		this->state = $nc(this->winAttr)->initialState;
	}
	if (((int32_t)(this->state & (uint32_t)$Frame::ICONIFIED)) != 0) {
		setInitialState($XUtilConstants::IconicState);
	} else {
		setInitialState($XUtilConstants::NormalState);
	}
	setExtendedState(this->state);
}

void XFramePeer::setMenuBar($MenuBar* mb) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			$synchronized(getStateLock()) {
				if (mb == this->menubar) {
					return$1 = true;
					goto $finally;
				}
				if (mb == nullptr) {
					if (this->menubar != nullptr) {
						$nc(this->menubarPeer)->xSetVisible(false);
						$set(this, menubar, nullptr);
						$nc(this->menubarPeer)->dispose();
						$set(this, menubarPeer, nullptr);
					}
				} else {
					$set(this, menubar, mb);
					$set(this, menubarPeer, $cast($XMenuBarPeer, $nc($($AWTAccessor::getMenuComponentAccessor()))->getPeer(mb)));
					if (this->menubarPeer != nullptr) {
						$nc(this->menubarPeer)->init($cast($Frame, this->target));
					}
				}
			}
		} catch ($Throwable& var$2) {
			$assign(var$0, var$2);
		} $finally: {
			$XToolkit::awtUnlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
	reshapeMenubarPeer();
}

$XMenuBarPeer* XFramePeer::getMenubarPeer() {
	return this->menubarPeer;
}

int32_t XFramePeer::getMenuBarHeight() {
	if (this->menubarPeer != nullptr) {
		return $nc(this->menubarPeer)->getDesiredHeight();
	} else {
		return XFramePeer::MENUBAR_HEIGHT_IF_NO_MENUBAR;
	}
}

void XFramePeer::updateChildrenSizes() {
	$useLocalCurrentObjectStackCache();
	$XDecoratedPeer::updateChildrenSizes();
	int32_t height = getMenuBarHeight();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$synchronized(getStateLock()) {
				int32_t width = $nc($($nc(this->dimensions)->getClientSize()))->width;
				if (this->menubarPeer != nullptr) {
					$nc(this->menubarPeer)->reshape(0, 0, width, height);
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

void XFramePeer::reshapeMenubarPeer() {
	$XToolkit::executeOnEventHandlerThread(this->target, $$new($XFramePeer$1, this));
}

void XFramePeer::setMaximizedBounds($Rectangle* b) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XFramePeer::insLog)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XFramePeer::insLog)->fine($$str({"Setting maximized bounds to "_s, b}));
	}
	if (b == nullptr) {
		return;
	}
	$set(this, maxBounds, $new($Rectangle, b));
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($XSizeHints, hints, getHints());
			$nc(hints)->set_flags(hints->get_flags() | (int32_t)$XUtilConstants::PMaxSize);
			if ($nc(b)->width != $Integer::MAX_VALUE) {
				hints->set_max_width(b->width);
			} else {
				int64_t var$1 = $XToolkit::getDisplay();
				hints->set_max_width((int32_t)$XlibWrapper::DisplayWidth(var$1, $XlibWrapper::DefaultScreen($XToolkit::getDisplay())));
			}
			if ($nc(b)->height != $Integer::MAX_VALUE) {
				hints->set_max_height(b->height);
			} else {
				int64_t var$2 = $XToolkit::getDisplay();
				hints->set_max_height((int32_t)$XlibWrapper::DisplayHeight(var$2, $XlibWrapper::DefaultScreen($XToolkit::getDisplay())));
			}
			if ($nc(XFramePeer::insLog)->isLoggable($PlatformLogger$Level::FINER)) {
				$nc(XFramePeer::insLog)->finer($$str({"Setting hints, flags "_s, $($XlibWrapper::hintsToString(hints->get_flags()))}));
			}
			$XlibWrapper::XSetWMNormalHints($XToolkit::getDisplay(), this->window, hints->pData);
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

int32_t XFramePeer::getState() {
	$synchronized(getStateLock()) {
		return this->state;
	}
}

void XFramePeer::setState(int32_t newState) {
	$synchronized(getStateLock()) {
		if (!isShowing()) {
			$nc(XFramePeer::stateLog)->finer("Frame is not showing"_s);
			this->state = newState;
			return;
		}
	}
	changeState(newState);
}

void XFramePeer::changeState(int32_t newState) {
	$useLocalCurrentObjectStackCache();
	int32_t changed = this->state ^ newState;
	int32_t changeIconic = (int32_t)(changed & (uint32_t)$Frame::ICONIFIED);
	bool iconic = ((int32_t)(newState & (uint32_t)$Frame::ICONIFIED)) != 0;
	$init($PlatformLogger$Level);
	if ($nc(XFramePeer::stateLog)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XFramePeer::stateLog)->finer("Changing state, old state {0}, new state {1}(iconic {2})"_s, $$new($ObjectArray, {
			$($of($Integer::valueOf(this->state))),
			$($of($Integer::valueOf(newState))),
			$($of($Boolean::valueOf(iconic)))
		}));
	}
	if (changeIconic != 0 && iconic) {
		if ($nc(XFramePeer::stateLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$var($String, var$0, $$str({"Iconifying shell "_s, $$str(getShell()), ", this "_s, this, ", screen "_s}));
			$nc(XFramePeer::stateLog)->finer($$concat(var$0, $$str(getScreenNumber())));
		}
		$XToolkit::awtLock();
		{
			$var($Throwable, var$1, nullptr);
			try {
				int64_t var$2 = $XToolkit::getDisplay();
				int64_t var$3 = getShell();
				int32_t res = $XlibWrapper::XIconifyWindow(var$2, var$3, getScreenNumber());
				if ($nc(XFramePeer::stateLog)->isLoggable($PlatformLogger$Level::FINER)) {
					$nc(XFramePeer::stateLog)->finer($$str({"XIconifyWindow returned "_s, $$str(res)}));
				}
			} catch ($Throwable& var$4) {
				$assign(var$1, var$4);
			} /*finally*/ {
				$XToolkit::awtUnlock();
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	}
	if (((int32_t)(changed & (uint32_t)~$Frame::ICONIFIED)) != 0) {
		setExtendedState(newState);
	}
	if (changeIconic != 0 && !iconic) {
		if ($nc(XFramePeer::stateLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XFramePeer::stateLog)->finer($$str({"DeIconifying "_s, this}));
		}
		$var($XNETProtocol, net_protocol, $nc($($XWM::getWM()))->getNETProtocol());
		if (net_protocol != nullptr) {
			net_protocol->setActiveWindow(getWindow());
		}
		xSetVisible(true);
	}
}

void XFramePeer::setExtendedState(int32_t newState) {
	$nc($($XWM::getWM()))->setExtendedState(this, newState);
}

void XFramePeer::handlePropertyNotify($XEvent* xev) {
	$useLocalCurrentObjectStackCache();
	$XDecoratedPeer::handlePropertyNotify(xev);
	$var($XPropertyEvent, ev, $nc(xev)->get_xproperty());
	$init($PlatformLogger$Level);
	if ($nc(XFramePeer::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$nc(XFramePeer::log)->finer("Property change {0}"_s, $$new($ObjectArray, {$of(ev)}));
	}
	if (!$nc($($XWM::getWM()))->isStateChange(this, ev)) {
		$nc(XFramePeer::stateLog)->finer("either not a state atom or state has not been changed"_s);
		return;
	}
	int32_t newState = $nc($($XWM::getWM()))->getState(this);
	int32_t changed = this->state ^ newState;
	if (changed == 0) {
		if ($nc(XFramePeer::stateLog)->isLoggable($PlatformLogger$Level::FINER)) {
			$nc(XFramePeer::stateLog)->finer($$str({"State is the same: "_s, $$str(this->state)}));
		}
		return;
	}
	int32_t old_state = this->state;
	this->state = newState;
	$nc($($AWTAccessor::getFrameAccessor()))->setExtendedState($cast($Frame, this->target), this->state);
	if (((int32_t)(changed & (uint32_t)$Frame::ICONIFIED)) != 0) {
		if (((int32_t)(this->state & (uint32_t)$Frame::ICONIFIED)) != 0) {
			$nc(XFramePeer::stateLog)->finer("Iconified"_s);
			handleIconify();
		} else {
			$nc(XFramePeer::stateLog)->finer("DeIconified"_s);
			$nc(this->content)->purgeIconifiedExposeEvents();
			handleDeiconify();
		}
	}
	handleStateChange(old_state, this->state);
	if ((((int32_t)(changed & (uint32_t)$Frame::ICONIFIED)) != 0) && (((int32_t)(this->state & (uint32_t)$Frame::ICONIFIED)) == 0)) {
		repaint();
	}
}

void XFramePeer::handleStateChange(int32_t oldState, int32_t newState) {
	$useLocalCurrentObjectStackCache();
	$XDecoratedPeer::handleStateChange(oldState, newState);
	{
		$var($Iterator, i$, $nc(this->toplevelStateListeners)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ToplevelStateListener, topLevelListenerTmp, $cast($ToplevelStateListener, i$->next()));
			{
				$nc(topLevelListenerTmp)->stateChangedJava(oldState, newState);
			}
		}
	}
}

void XFramePeer::setVisible(bool vis) {
	if (vis) {
		setupState(false);
	} else if (((int32_t)(this->state & (uint32_t)$Frame::MAXIMIZED_BOTH)) != 0) {
		$nc($($XWM::getWM()))->setExtendedState(this, (int32_t)(this->state & (uint32_t)~$Frame::MAXIMIZED_BOTH));
	}
	$XDecoratedPeer::setVisible(vis);
	if (vis && this->maxBounds != nullptr) {
		setMaximizedBounds(this->maxBounds);
	}
}

void XFramePeer::setInitialState(int32_t wm_state) {
	$useLocalCurrentObjectStackCache();
	$XToolkit::awtLock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($XWMHints, hints, getWMHints());
			$nc(hints)->set_flags((int32_t)$XUtilConstants::StateHint | hints->get_flags());
			hints->set_initial_state(wm_state);
			$init($PlatformLogger$Level);
			if ($nc(XFramePeer::stateLog)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(XFramePeer::stateLog)->fine($$str({"Setting initial WM state on "_s, this, " to "_s, $$str(wm_state)}));
			}
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

void XFramePeer::dispose() {
	if (this->menubarPeer != nullptr) {
		$nc(this->menubarPeer)->dispose();
	}
	$XDecoratedPeer::dispose();
}

bool XFramePeer::isMaximized() {
	return ((int32_t)(this->state & (uint32_t)($Frame::MAXIMIZED_VERT | $Frame::MAXIMIZED_HORIZ))) != 0;
}

void XFramePeer::print($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$XDecoratedPeer::print(g);
	$var($Frame, f, $cast($Frame, this->target));
	$var($Insets, finsets, $nc(f)->getInsets());
	$var($Dimension, fsize, f->getSize());
	$var($Color, bg, f->getBackground());
	$var($Color, fg, f->getForeground());
	$var($Color, highlight, $nc(bg)->brighter());
	$var($Color, shadow, bg->darker());
	$init($XWindowAttributesData);
	if (hasDecorations($XWindowAttributesData::AWT_DECOR_BORDER)) {
		if ($nc(highlight)->equals($Color::white)) {
			$nc(g)->setColor($$new($Color, 230, 230, 230));
		} else {
			$nc(g)->setColor(highlight);
		}
		$nc(g)->drawLine(0, 0, $nc(fsize)->width, 0);
		g->drawLine(0, 1, $nc(fsize)->width - 1, 1);
		g->drawLine(0, 0, 0, $nc(fsize)->height);
		g->drawLine(1, 0, 1, $nc(fsize)->height - 1);
		g->setColor(highlight);
		g->drawLine(XFramePeer::CROSSHAIR_INSET + 1, $nc(fsize)->height - XFramePeer::CROSSHAIR_INSET, fsize->width - XFramePeer::CROSSHAIR_INSET, fsize->height - XFramePeer::CROSSHAIR_INSET);
		g->drawLine($nc(fsize)->width - XFramePeer::CROSSHAIR_INSET, XFramePeer::CROSSHAIR_INSET + 1, fsize->width - XFramePeer::CROSSHAIR_INSET, fsize->height - XFramePeer::CROSSHAIR_INSET);
		g->setColor(shadow);
		g->drawLine(1, $nc(fsize)->height, fsize->width, fsize->height);
		g->drawLine(2, $nc(fsize)->height - 1, fsize->width, fsize->height - 1);
		g->drawLine($nc(fsize)->width, 1, fsize->width, fsize->height);
		g->drawLine($nc(fsize)->width - 1, 2, fsize->width - 1, fsize->height);
		g->drawLine(XFramePeer::CROSSHAIR_INSET, XFramePeer::CROSSHAIR_INSET, $nc(fsize)->width - XFramePeer::CROSSHAIR_INSET, XFramePeer::CROSSHAIR_INSET);
		g->drawLine(XFramePeer::CROSSHAIR_INSET, XFramePeer::CROSSHAIR_INSET, XFramePeer::CROSSHAIR_INSET, $nc(fsize)->height - XFramePeer::CROSSHAIR_INSET);
	}
	if (hasDecorations($XWindowAttributesData::AWT_DECOR_TITLE)) {
		if (hasDecorations($XWindowAttributesData::AWT_DECOR_MENU)) {
			$nc(g)->setColor(bg);
			g->fill3DRect(XFramePeer::SYS_MENU_X, XFramePeer::BUTTON_Y, XFramePeer::BUTTON_W, XFramePeer::BUTTON_H, true);
			g->fill3DRect(XFramePeer::SYS_MENU_CONTAINED_X, XFramePeer::SYS_MENU_CONTAINED_Y, XFramePeer::SYS_MENU_CONTAINED_W, XFramePeer::SYS_MENU_CONTAINED_H, true);
		}
		$nc(g)->fill3DRect(XFramePeer::TITLE_X, XFramePeer::BUTTON_Y, $nc(fsize)->width - XFramePeer::TITLE_W_DIFF, XFramePeer::BUTTON_H, true);
		if (hasDecorations($XWindowAttributesData::AWT_DECOR_MINIMIZE)) {
			g->fill3DRect($nc(fsize)->width - XFramePeer::MINIMIZE_X_DIFF, XFramePeer::BUTTON_Y, XFramePeer::BUTTON_W, XFramePeer::BUTTON_H, true);
			g->fill3DRect($nc(fsize)->width - XFramePeer::MINIMIZE_CONTAINED_X_DIFF, XFramePeer::MINIMIZE_CONTAINED_Y, XFramePeer::MINIMIZE_CONTAINED_W, XFramePeer::MINIMIZE_CONTAINED_H, true);
		}
		if (hasDecorations($XWindowAttributesData::AWT_DECOR_MAXIMIZE)) {
			g->fill3DRect($nc(fsize)->width - XFramePeer::MAXIMIZE_X_DIFF, XFramePeer::BUTTON_Y, XFramePeer::BUTTON_W, XFramePeer::BUTTON_H, true);
			g->fill3DRect($nc(fsize)->width - XFramePeer::MAXIMIZE_CONTAINED_X_DIFF, XFramePeer::MAXIMIZE_CONTAINED_Y, XFramePeer::MAXIMIZE_CONTAINED_W, XFramePeer::MAXIMIZE_CONTAINED_H, true);
		}
		g->setColor(fg);
		$init($Font);
		$var($Font, sysfont, $new($Font, $Font::SANS_SERIF, $Font::PLAIN, 10));
		g->setFont(sysfont);
		$var($FontMetrics, sysfm, g->getFontMetrics());
		$var($String, ftitle, f->getTitle());
		$var($String, var$0, ftitle);
		int32_t var$1 = ((XFramePeer::TITLE_X + XFramePeer::TITLE_X + $nc(fsize)->width - XFramePeer::TITLE_W_DIFF) / 2) - ($nc(sysfm)->stringWidth(ftitle) / 2);
		g->drawString(var$0, var$1, XFramePeer::TITLE_MID_Y + sysfm->getMaxDescent());
	}
	bool var$2 = f->isResizable();
	if (var$2 && hasDecorations($XWindowAttributesData::AWT_DECOR_RESIZEH)) {
		$nc(g)->setColor(shadow);
		g->drawLine(1, XFramePeer::HORIZ_RESIZE_INSET, XFramePeer::CROSSHAIR_INSET, XFramePeer::HORIZ_RESIZE_INSET);
		g->drawLine(XFramePeer::VERT_RESIZE_INSET, 1, XFramePeer::VERT_RESIZE_INSET, XFramePeer::CROSSHAIR_INSET);
		g->drawLine($nc(fsize)->width - XFramePeer::CROSSHAIR_INSET + 1, XFramePeer::HORIZ_RESIZE_INSET, fsize->width, XFramePeer::HORIZ_RESIZE_INSET);
		g->drawLine($nc(fsize)->width - XFramePeer::VERT_RESIZE_INSET - 1, 2, fsize->width - XFramePeer::VERT_RESIZE_INSET - 1, XFramePeer::CROSSHAIR_INSET + 1);
		g->drawLine(1, $nc(fsize)->height - XFramePeer::HORIZ_RESIZE_INSET - 1, XFramePeer::CROSSHAIR_INSET, fsize->height - XFramePeer::HORIZ_RESIZE_INSET - 1);
		g->drawLine(XFramePeer::VERT_RESIZE_INSET, $nc(fsize)->height - XFramePeer::CROSSHAIR_INSET + 1, XFramePeer::VERT_RESIZE_INSET, fsize->height);
		g->drawLine($nc(fsize)->width - XFramePeer::CROSSHAIR_INSET + 1, fsize->height - XFramePeer::HORIZ_RESIZE_INSET - 1, fsize->width, fsize->height - XFramePeer::HORIZ_RESIZE_INSET - 1);
		g->drawLine($nc(fsize)->width - XFramePeer::VERT_RESIZE_INSET - 1, fsize->height - XFramePeer::CROSSHAIR_INSET + 1, fsize->width - XFramePeer::VERT_RESIZE_INSET - 1, fsize->height);
		g->setColor(highlight);
		g->drawLine(2, XFramePeer::HORIZ_RESIZE_INSET + 1, XFramePeer::CROSSHAIR_INSET, XFramePeer::HORIZ_RESIZE_INSET + 1);
		g->drawLine(XFramePeer::VERT_RESIZE_INSET + 1, 2, XFramePeer::VERT_RESIZE_INSET + 1, XFramePeer::CROSSHAIR_INSET);
		g->drawLine($nc(fsize)->width - XFramePeer::CROSSHAIR_INSET + 1, XFramePeer::HORIZ_RESIZE_INSET + 1, fsize->width - 1, XFramePeer::HORIZ_RESIZE_INSET + 1);
		g->drawLine($nc(fsize)->width - XFramePeer::VERT_RESIZE_INSET, 2, fsize->width - XFramePeer::VERT_RESIZE_INSET, XFramePeer::CROSSHAIR_INSET);
		g->drawLine(2, $nc(fsize)->height - XFramePeer::HORIZ_RESIZE_INSET, XFramePeer::CROSSHAIR_INSET, fsize->height - XFramePeer::HORIZ_RESIZE_INSET);
		g->drawLine(XFramePeer::VERT_RESIZE_INSET + 1, $nc(fsize)->height - XFramePeer::CROSSHAIR_INSET + 1, XFramePeer::VERT_RESIZE_INSET + 1, fsize->height - 1);
		g->drawLine($nc(fsize)->width - XFramePeer::CROSSHAIR_INSET + 1, fsize->height - XFramePeer::HORIZ_RESIZE_INSET, fsize->width - 1, fsize->height - XFramePeer::HORIZ_RESIZE_INSET);
		g->drawLine($nc(fsize)->width - XFramePeer::VERT_RESIZE_INSET, fsize->height - XFramePeer::CROSSHAIR_INSET + 1, fsize->width - XFramePeer::VERT_RESIZE_INSET, fsize->height - 1);
	}
	$var($XMenuBarPeer, peer, this->menubarPeer);
	if (peer != nullptr) {
		$var($Insets, insets, getInsets());
		$var($Graphics, ng, $nc(g)->create());
		int32_t menubarX = 0;
		int32_t menubarY = 0;
		if (hasDecorations($XWindowAttributesData::AWT_DECOR_BORDER)) {
			menubarX += XFramePeer::CROSSHAIR_INSET + 1;
			menubarY += XFramePeer::CROSSHAIR_INSET + 1;
		}
		if (hasDecorations($XWindowAttributesData::AWT_DECOR_TITLE)) {
			menubarY += XFramePeer::BUTTON_H;
		}
		{
			$var($Throwable, var$3, nullptr);
			try {
				$nc(ng)->translate(menubarX, menubarY);
				peer->print(ng);
			} catch ($Throwable& var$4) {
				$assign(var$3, var$4);
			} /*finally*/ {
				$nc(ng)->dispose();
			}
			if (var$3 != nullptr) {
				$throw(var$3);
			}
		}
	}
}

void XFramePeer::setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) {
	setBounds(x, y, width, height, $ComponentPeer::SET_BOUNDS);
}

$Rectangle* XFramePeer::getBoundsPrivate() {
	return getBounds();
}

void XFramePeer::emulateActivation(bool doActivate) {
	if (doActivate) {
		handleWindowFocusIn(0);
	} else {
		handleWindowFocusOut(nullptr, 0);
	}
}

void clinit$XFramePeer($Class* class$) {
	$assignStatic(XFramePeer::log, $PlatformLogger::getLogger("sun.awt.X11.XFramePeer"_s));
	$assignStatic(XFramePeer::stateLog, $PlatformLogger::getLogger("sun.awt.X11.states"_s));
	$assignStatic(XFramePeer::insLog, $PlatformLogger::getLogger("sun.awt.X11.insets.XFramePeer"_s));
}

XFramePeer::XFramePeer() {
}

$Class* XFramePeer::load$($String* name, bool initialize) {
	$loadClass(XFramePeer, name, initialize, &_XFramePeer_ClassInfo_, clinit$XFramePeer, allocate$XFramePeer);
	return class$;
}

$Class* XFramePeer::class$ = nullptr;

		} // X11
	} // awt
} // sun