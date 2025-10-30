#include <sun/awt/windows/WFramePeer.h>

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
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/IllegalStateException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/AWTAccessor$FrameAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/im/InputMethodManager.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WMenuBarPeer.h>
#include <sun/awt/windows/WMenuItemPeer.h>
#include <sun/awt/windows/WMenuPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WPanelPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef SET_BOUNDS

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
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
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$FrameAccessor = ::sun::awt::AWTAccessor$FrameAccessor;
using $InputMethodManager = ::sun::awt::im::InputMethodManager;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WMenuBarPeer = ::sun::awt::windows::WMenuBarPeer;
using $WMenuItemPeer = ::sun::awt::windows::WMenuItemPeer;
using $WMenuPeer = ::sun::awt::windows::WMenuPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WPanelPeer = ::sun::awt::windows::WPanelPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $Region = ::sun::java2d::pipe::Region;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WFramePeer_FieldInfo_[] = {
	{"keepOnMinimize", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WFramePeer, keepOnMinimize)},
	{}
};

$MethodInfo _WFramePeer_MethodInfo_[] = {
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
	{"*getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $NATIVE},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Frame;)V", nullptr, 0, $method(static_cast<void(WFramePeer::*)($Frame*)>(&WFramePeer::init$))},
	{"adjustMaximizedBounds", "(Ljava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(WFramePeer::*)($Rectangle*)>(&WFramePeer::adjustMaximizedBounds))},
	{"clearMaximizedBounds", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WFramePeer::*)()>(&WFramePeer::clearMaximizedBounds))},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, 0},
	{"createAwtFrame", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $NATIVE},
	{"emulateActivation", "(Z)V", nullptr, $PUBLIC},
	{"getBoundsPrivate", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getExtendedState", "()I", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $FINAL},
	{"getState", "()I", nullptr, $PUBLIC | $NATIVE},
	{"getSysMenuHeight", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&WFramePeer::getSysMenuHeight))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WFramePeer::initIDs))},
	{"initialize", "()V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"isTargetUndecorated", "()Z", nullptr, 0},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"notifyIMMOptionChange", "()V", nullptr, 0},
	{"pSetIMMOption", "(Ljava/lang/String;)V", nullptr, $NATIVE},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $SYNTHETIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*repositionSecurityWarning", "()V", nullptr, $PUBLIC | $NATIVE},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"reshape", "(IIII)V", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setBoundsPrivate", "(IIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setExtendedState", "(I)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setMaximizedBounds", "(IIII)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WFramePeer::*)(int32_t,int32_t,int32_t,int32_t)>(&WFramePeer::setMaximizedBounds))},
	{"setMaximizedBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $FINAL},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC},
	{"setMenuBar0", "(Lsun/awt/windows/WMenuBarPeer;)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WFramePeer::*)($WMenuBarPeer*)>(&WFramePeer::setMenuBar0))},
	{"*setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"*setOpacity", "(F)V", nullptr, $PUBLIC},
	{"*setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"*setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setState", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"*setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"synthesizeWmActivate", "(Z)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WFramePeer::*)(bool)>(&WFramePeer::synthesizeWmActivate))},
	{"*toBack", "()V", nullptr, $PUBLIC | $NATIVE},
	{"*toFront", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*updateAlwaysOnTopState", "()V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*updateMinimumSize", "()V", nullptr, $PUBLIC},
	{"*updateIconImages", "()V", nullptr, $PUBLIC},
	{"*updateWindow", "()V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_clearMaximizedBounds 29
#define _METHOD_INDEX_createAwtFrame 31
#define _METHOD_INDEX_getState 36
#define _METHOD_INDEX_getSysMenuHeight 37
#define _METHOD_INDEX_initIDs 38
#define _METHOD_INDEX_pSetIMMOption 46
#define _METHOD_INDEX_setMaximizedBounds 60
#define _METHOD_INDEX_setMenuBar0 63
#define _METHOD_INDEX_setState 68
#define _METHOD_INDEX_synthesizeWmActivate 72

$ClassInfo _WFramePeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WFramePeer",
	"sun.awt.windows.WWindowPeer",
	"java.awt.peer.FramePeer",
	_WFramePeer_FieldInfo_,
	_WFramePeer_MethodInfo_
};

$Object* allocate$WFramePeer($Class* clazz) {
	return $of($alloc(WFramePeer));
}

void WFramePeer::toFront() {
	this->$WWindowPeer::toFront();
}

void WFramePeer::toBack() {
	this->$WWindowPeer::toBack();
}

void WFramePeer::updateAlwaysOnTopState() {
	this->$WWindowPeer::updateAlwaysOnTopState();
}

void WFramePeer::updateFocusableWindowState() {
	this->$WWindowPeer::updateFocusableWindowState();
}

void WFramePeer::setTitle($String* title) {
	this->$WWindowPeer::setTitle(title);
}

void WFramePeer::setResizable(bool resizable) {
	this->$WWindowPeer::setResizable(resizable);
}

void WFramePeer::updateMinimumSize() {
	this->$WWindowPeer::updateMinimumSize();
}

void WFramePeer::updateIconImages() {
	this->$WWindowPeer::updateIconImages();
}

void WFramePeer::setModalBlocked($Dialog* dialog, bool blocked) {
	this->$WWindowPeer::setModalBlocked(dialog, blocked);
}

void WFramePeer::repositionSecurityWarning() {
	this->$WWindowPeer::repositionSecurityWarning();
}

void WFramePeer::print($Graphics* g) {
	this->$WWindowPeer::print(g);
}

void WFramePeer::setBackground($Color* c) {
	this->$WWindowPeer::setBackground(c);
}

void WFramePeer::setOpacity(float opacity) {
	this->$WWindowPeer::setOpacity(opacity);
}

void WFramePeer::setOpaque(bool isOpaque) {
	this->$WWindowPeer::setOpaque(isOpaque);
}

void WFramePeer::updateWindow() {
	this->$WWindowPeer::updateWindow();
}

$Insets* WFramePeer::getInsets() {
	 return this->$WWindowPeer::getInsets();
}

void WFramePeer::paint($Graphics* g) {
	this->$WWindowPeer::paint(g);
}

bool WFramePeer::isObscured() {
	 return this->$WWindowPeer::isObscured();
}

bool WFramePeer::canDetermineObscurity() {
	 return this->$WWindowPeer::canDetermineObscurity();
}

$Point* WFramePeer::getLocationOnScreen() {
	 return this->$WWindowPeer::getLocationOnScreen();
}

void WFramePeer::setVisible(bool b) {
	this->$WWindowPeer::setVisible(b);
}

void WFramePeer::setEnabled(bool b) {
	this->$WWindowPeer::setEnabled(b);
}

void WFramePeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WWindowPeer::setBounds(x, y, width, height, op);
}

void WFramePeer::coalescePaintEvent($PaintEvent* e) {
	this->$WWindowPeer::coalescePaintEvent(e);
}

void WFramePeer::handleEvent($AWTEvent* e) {
	this->$WWindowPeer::handleEvent(e);
}

$Dimension* WFramePeer::getPreferredSize() {
	 return this->$WWindowPeer::getPreferredSize();
}

void WFramePeer::layout() {
	this->$WWindowPeer::layout();
}

bool WFramePeer::isFocusable() {
	 return this->$WWindowPeer::isFocusable();
}

$GraphicsConfiguration* WFramePeer::getGraphicsConfiguration() {
	 return this->$WWindowPeer::getGraphicsConfiguration();
}

$ColorModel* WFramePeer::getColorModel() {
	 return this->$WWindowPeer::getColorModel();
}

$Graphics* WFramePeer::getGraphics() {
	 return this->$WWindowPeer::getGraphics();
}

$FontMetrics* WFramePeer::getFontMetrics($Font* font) {
	 return this->$WWindowPeer::getFontMetrics(font);
}

void WFramePeer::setForeground($Color* c) {
	this->$WWindowPeer::setForeground(c);
}

void WFramePeer::setFont($Font* f) {
	this->$WWindowPeer::setFont(f);
}

void WFramePeer::updateCursorImmediately() {
	this->$WWindowPeer::updateCursorImmediately();
}

bool WFramePeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WWindowPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WFramePeer::createImage(int32_t width, int32_t height) {
	 return this->$WWindowPeer::createImage(width, height);
}

$VolatileImage* WFramePeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WWindowPeer::createVolatileImage(width, height);
}

$String* WFramePeer::toString() {
	 return this->$WWindowPeer::toString();
}

void WFramePeer::beginLayout() {
	this->$WWindowPeer::beginLayout();
}

void WFramePeer::endLayout() {
	this->$WWindowPeer::endLayout();
}

void WFramePeer::beginValidate() {
	this->$WWindowPeer::beginValidate();
}

void WFramePeer::endValidate() {
	this->$WWindowPeer::endValidate();
}

bool WFramePeer::handlesWheelScrolling() {
	 return this->$WWindowPeer::handlesWheelScrolling();
}

void WFramePeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WWindowPeer::createBuffers(numBuffers, caps);
}

void WFramePeer::destroyBuffers() {
	this->$WWindowPeer::destroyBuffers();
}

void WFramePeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WWindowPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WFramePeer::getBackBuffer() {
	 return this->$WWindowPeer::getBackBuffer();
}

void WFramePeer::reparent($ContainerPeer* newNativeParent) {
	this->$WWindowPeer::reparent(newNativeParent);
}

bool WFramePeer::isReparentSupported() {
	 return this->$WWindowPeer::isReparentSupported();
}

void WFramePeer::applyShape($Region* shape) {
	this->$WWindowPeer::applyShape(shape);
}

void WFramePeer::setZOrder($ComponentPeer* above) {
	this->$WWindowPeer::setZOrder(above);
}

void WFramePeer::dispose() {
	this->$WWindowPeer::dispose();
}

int32_t WFramePeer::hashCode() {
	 return this->$WWindowPeer::hashCode();
}

bool WFramePeer::equals(Object$* arg0) {
	 return this->$WWindowPeer::equals(arg0);
}

$Object* WFramePeer::clone() {
	 return this->$WWindowPeer::clone();
}

void WFramePeer::finalize() {
	this->$WWindowPeer::finalize();
}

bool WFramePeer::keepOnMinimize = false;

void WFramePeer::initIDs() {
	$init(WFramePeer);
	$prepareNativeStatic(WFramePeer, initIDs, void);
	$invokeNativeStatic(WFramePeer, initIDs);
	$finishNativeStatic();
}

void WFramePeer::setState(int32_t state) {
	$prepareNative(WFramePeer, setState, void, int32_t state);
	$invokeNative(WFramePeer, setState, state);
	$finishNative();
}

int32_t WFramePeer::getState() {
	int32_t $ret = 0;
	$prepareNative(WFramePeer, getState, int32_t);
	$ret = $invokeNative(WFramePeer, getState);
	$finishNative();
	return $ret;
}

void WFramePeer::setExtendedState(int32_t state) {
	$nc($($AWTAccessor::getFrameAccessor()))->setExtendedState($cast($Frame, this->target), state);
}

int32_t WFramePeer::getExtendedState() {
	return $nc($($AWTAccessor::getFrameAccessor()))->getExtendedState($cast($Frame, this->target));
}

void WFramePeer::setMaximizedBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
	$prepareNative(WFramePeer, setMaximizedBounds, void, int32_t x, int32_t y, int32_t w, int32_t h);
	$invokeNative(WFramePeer, setMaximizedBounds, x, y, w, h);
	$finishNative();
}

void WFramePeer::clearMaximizedBounds() {
	$prepareNative(WFramePeer, clearMaximizedBounds, void);
	$invokeNative(WFramePeer, clearMaximizedBounds);
	$finishNative();
}

void WFramePeer::setMaximizedBounds($Rectangle* b$renamed) {
	$var($Rectangle, b, b$renamed);
	if (b == nullptr) {
		clearMaximizedBounds();
	} else {
		$assign(b, adjustMaximizedBounds(b));
		setMaximizedBounds($nc(b)->x, b->y, b->width, b->height);
	}
}

$Rectangle* WFramePeer::adjustMaximizedBounds($Rectangle* bounds$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, bounds, bounds$renamed);
	$assign(bounds, $SunGraphicsEnvironment::toDeviceSpaceAbs(bounds));
	$var($GraphicsConfiguration, gc, getGraphicsConfiguration());
	$var($Rectangle, currentDevBounds, $SunGraphicsEnvironment::getGCDeviceBounds(gc));
	$nc(bounds)->x -= $nc(currentDevBounds)->x;
	bounds->y -= currentDevBounds->y;
	return bounds;
}

bool WFramePeer::updateGraphicsData($GraphicsConfiguration* gc) {
	$useLocalCurrentObjectStackCache();
	bool result = $WWindowPeer::updateGraphicsData(gc);
	$var($Rectangle, bounds, $nc($($AWTAccessor::getFrameAccessor()))->getMaximizedBounds($cast($Frame, this->target)));
	if (bounds != nullptr) {
		setMaximizedBounds(bounds);
	}
	return result;
}

bool WFramePeer::isTargetUndecorated() {
	return $nc(($cast($Frame, this->target)))->isUndecorated();
}

void WFramePeer::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	if ($nc(($cast($Frame, this->target)))->isUndecorated()) {
		$WWindowPeer::reshape(x, y, width, height);
	} else {
		reshapeFrame(x, y, width, height);
	}
}

$Dimension* WFramePeer::getMinimumSize() {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsConfiguration, gc, getGraphicsConfiguration());
	$var($Dimension, d, $new($Dimension));
	if (!$nc(($cast($Frame, this->target)))->isUndecorated()) {
		$var($GraphicsConfiguration, var$0, gc);
		int32_t var$1 = getSysMinWidth();
		d->setSize($($SunGraphicsEnvironment::toUserSpace(var$0, var$1, getSysMinHeight())));
	}
	if ($nc(($cast($Frame, this->target)))->getMenuBar() != nullptr) {
		d->height += $nc($($SunGraphicsEnvironment::toUserSpace(gc, 0, getSysMenuHeight())))->height;
	}
	return d;
}

void WFramePeer::setMenuBar($MenuBar* mb) {
	$var($WMenuBarPeer, mbPeer, $cast($WMenuBarPeer, $WToolkit::targetToPeer(mb)));
	if (mbPeer != nullptr) {
		if (mbPeer->framePeer != this) {
			$nc(mb)->removeNotify();
			mb->addNotify();
			$assign(mbPeer, $cast($WMenuBarPeer, $WToolkit::targetToPeer(mb)));
			if (mbPeer != nullptr && mbPeer->framePeer != this) {
				$throwNew($IllegalStateException, "Wrong parent peer"_s);
			}
		}
		if (mbPeer != nullptr) {
			addChildPeer(mbPeer);
		}
	}
	setMenuBar0(mbPeer);
	updateInsets(this->insets_);
}

void WFramePeer::setMenuBar0($WMenuBarPeer* mbPeer) {
	$prepareNative(WFramePeer, setMenuBar0, void, $WMenuBarPeer* mbPeer);
	$invokeNative(WFramePeer, setMenuBar0, mbPeer);
	$finishNative();
}

void WFramePeer::init$($Frame* target) {
	$useLocalCurrentObjectStackCache();
	$WWindowPeer::init$(target);
	$var($InputMethodManager, imm, $InputMethodManager::getInstance());
	$var($String, menuString, $nc(imm)->getTriggerMenuString());
	if (menuString != nullptr) {
		pSetIMMOption(menuString);
	}
}

void WFramePeer::createAwtFrame($WComponentPeer* parent) {
	$prepareNative(WFramePeer, createAwtFrame, void, $WComponentPeer* parent);
	$invokeNative(WFramePeer, createAwtFrame, parent);
	$finishNative();
}

void WFramePeer::create($WComponentPeer* parent) {
	preCreate(parent);
	createAwtFrame(parent);
}

void WFramePeer::initialize() {
	$useLocalCurrentObjectStackCache();
	$WWindowPeer::initialize();
	$var($Frame, target, $cast($Frame, this->target));
	if ($nc(target)->getTitle() != nullptr) {
		setTitle($(target->getTitle()));
	}
	setResizable($nc(target)->isResizable());
	setState($nc(target)->getExtendedState());
}

int32_t WFramePeer::getSysMenuHeight() {
	$init(WFramePeer);
	int32_t $ret = 0;
	$prepareNativeStatic(WFramePeer, getSysMenuHeight, int32_t);
	$ret = $invokeNativeStatic(WFramePeer, getSysMenuHeight);
	$finishNativeStatic();
	return $ret;
}

void WFramePeer::pSetIMMOption($String* option) {
	$prepareNative(WFramePeer, pSetIMMOption, void, $String* option);
	$invokeNative(WFramePeer, pSetIMMOption, option);
	$finishNative();
}

void WFramePeer::notifyIMMOptionChange() {
	$nc($($InputMethodManager::getInstance()))->notifyChangeRequest($cast($Component, this->target));
}

void WFramePeer::setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) {
	setBounds(x, y, width, height, $ComponentPeer::SET_BOUNDS);
}

$Rectangle* WFramePeer::getBoundsPrivate() {
	return getBounds();
}

void WFramePeer::emulateActivation(bool activate) {
	synthesizeWmActivate(activate);
}

void WFramePeer::synthesizeWmActivate(bool activate) {
	$prepareNative(WFramePeer, synthesizeWmActivate, void, bool activate);
	$invokeNative(WFramePeer, synthesizeWmActivate, activate);
	$finishNative();
}

void clinit$WFramePeer($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	{
		WFramePeer::initIDs();
	}
	WFramePeer::keepOnMinimize = "true"_s->equals($($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.awt.keepWorkingSetOnMinimize"_s)))));
}

WFramePeer::WFramePeer() {
}

$Class* WFramePeer::load$($String* name, bool initialize) {
	$loadClass(WFramePeer, name, initialize, &_WFramePeer_ClassInfo_, clinit$WFramePeer, allocate$WFramePeer);
	return class$;
}

$Class* WFramePeer::class$ = nullptr;

		} // windows
	} // awt
} // sun