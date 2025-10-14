#include <sun/awt/EmbeddedFrame$NullEmbeddedFramePeer.h>

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
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/EmbeddedFrame.h>
#include <sun/awt/NullComponentPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef NORMAL
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
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $FramePeer = ::java::awt::peer::FramePeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;
using $NullComponentPeer = ::sun::awt::NullComponentPeer;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {

$MethodInfo _EmbeddedFrame$NullEmbeddedFramePeer_MethodInfo_[] = {
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
	{"*dispose", "()V", nullptr, $PUBLIC},
	{"*endLayout", "()V", nullptr, $PUBLIC},
	{"*endValidate", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"*getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(EmbeddedFrame$NullEmbeddedFramePeer::*)()>(&EmbeddedFrame$NullEmbeddedFramePeer::init$))},
	{"emulateActivation", "(Z)V", nullptr, $PUBLIC},
	{"getBoundsPrivate", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getGlobalHeavyweightFocusOwner", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getState", "()I", nullptr, $PUBLIC},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"isRestackSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"repositionSecurityWarning", "()V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"requestWindowFocus", "()Z", nullptr, $PUBLIC},
	{"restack", "()V", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setBoundsPrivate", "(IIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setIconImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"setMaximizedBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC},
	{"setModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"setOpacity", "(F)V", nullptr, $PUBLIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setState", "(I)V", nullptr, $PUBLIC},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"toBack", "()V", nullptr, $PUBLIC},
	{"toFront", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateAlwaysOnTop", "()V", nullptr, $PUBLIC},
	{"updateAlwaysOnTopState", "()V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"updateFocusableWindowState", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"updateIconImages", "()V", nullptr, $PUBLIC},
	{"updateMinimumSize", "()V", nullptr, $PUBLIC},
	{"updateWindow", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _EmbeddedFrame$NullEmbeddedFramePeer_InnerClassesInfo_[] = {
	{"sun.awt.EmbeddedFrame$NullEmbeddedFramePeer", "sun.awt.EmbeddedFrame", "NullEmbeddedFramePeer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _EmbeddedFrame$NullEmbeddedFramePeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.EmbeddedFrame$NullEmbeddedFramePeer",
	"sun.awt.NullComponentPeer",
	"java.awt.peer.FramePeer",
	nullptr,
	_EmbeddedFrame$NullEmbeddedFramePeer_MethodInfo_,
	nullptr,
	nullptr,
	_EmbeddedFrame$NullEmbeddedFramePeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.EmbeddedFrame"
};

$Object* allocate$EmbeddedFrame$NullEmbeddedFramePeer($Class* clazz) {
	return $of($alloc(EmbeddedFrame$NullEmbeddedFramePeer));
}

bool EmbeddedFrame$NullEmbeddedFramePeer::isObscured() {
	 return this->$NullComponentPeer::isObscured();
}

bool EmbeddedFrame$NullEmbeddedFramePeer::canDetermineObscurity() {
	 return this->$NullComponentPeer::canDetermineObscurity();
}

bool EmbeddedFrame$NullEmbeddedFramePeer::isFocusable() {
	 return this->$NullComponentPeer::isFocusable();
}

void EmbeddedFrame$NullEmbeddedFramePeer::setVisible(bool b) {
	this->$NullComponentPeer::setVisible(b);
}

void EmbeddedFrame$NullEmbeddedFramePeer::setEnabled(bool b) {
	this->$NullComponentPeer::setEnabled(b);
}

void EmbeddedFrame$NullEmbeddedFramePeer::paint($Graphics* g) {
	this->$NullComponentPeer::paint(g);
}

void EmbeddedFrame$NullEmbeddedFramePeer::print($Graphics* g) {
	this->$NullComponentPeer::print(g);
}

void EmbeddedFrame$NullEmbeddedFramePeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$NullComponentPeer::setBounds(x, y, width, height, op);
}

void EmbeddedFrame$NullEmbeddedFramePeer::coalescePaintEvent($PaintEvent* e) {
	this->$NullComponentPeer::coalescePaintEvent(e);
}

void EmbeddedFrame$NullEmbeddedFramePeer::handleEvent($AWTEvent* arg0) {
	this->$NullComponentPeer::handleEvent(arg0);
}

$Dimension* EmbeddedFrame$NullEmbeddedFramePeer::getPreferredSize() {
	 return this->$NullComponentPeer::getPreferredSize();
}

$Dimension* EmbeddedFrame$NullEmbeddedFramePeer::getMinimumSize() {
	 return this->$NullComponentPeer::getMinimumSize();
}

$ColorModel* EmbeddedFrame$NullEmbeddedFramePeer::getColorModel() {
	 return this->$NullComponentPeer::getColorModel();
}

$Graphics* EmbeddedFrame$NullEmbeddedFramePeer::getGraphics() {
	 return this->$NullComponentPeer::getGraphics();
}

$GraphicsConfiguration* EmbeddedFrame$NullEmbeddedFramePeer::getGraphicsConfiguration() {
	 return this->$NullComponentPeer::getGraphicsConfiguration();
}

$FontMetrics* EmbeddedFrame$NullEmbeddedFramePeer::getFontMetrics($Font* font) {
	 return this->$NullComponentPeer::getFontMetrics(font);
}

void EmbeddedFrame$NullEmbeddedFramePeer::dispose() {
	this->$NullComponentPeer::dispose();
}

void EmbeddedFrame$NullEmbeddedFramePeer::setForeground($Color* c) {
	this->$NullComponentPeer::setForeground(c);
}

void EmbeddedFrame$NullEmbeddedFramePeer::setBackground($Color* c) {
	this->$NullComponentPeer::setBackground(c);
}

void EmbeddedFrame$NullEmbeddedFramePeer::setFont($Font* f) {
	this->$NullComponentPeer::setFont(f);
}

void EmbeddedFrame$NullEmbeddedFramePeer::updateCursorImmediately() {
	this->$NullComponentPeer::updateCursorImmediately();
}

bool EmbeddedFrame$NullEmbeddedFramePeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$NullComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* EmbeddedFrame$NullEmbeddedFramePeer::createImage(int32_t width, int32_t height) {
	 return this->$NullComponentPeer::createImage(width, height);
}

$Point* EmbeddedFrame$NullEmbeddedFramePeer::getLocationOnScreen() {
	 return this->$NullComponentPeer::getLocationOnScreen();
}

$Insets* EmbeddedFrame$NullEmbeddedFramePeer::getInsets() {
	 return this->$NullComponentPeer::getInsets();
}

void EmbeddedFrame$NullEmbeddedFramePeer::beginValidate() {
	this->$NullComponentPeer::beginValidate();
}

void EmbeddedFrame$NullEmbeddedFramePeer::endValidate() {
	this->$NullComponentPeer::endValidate();
}

bool EmbeddedFrame$NullEmbeddedFramePeer::handlesWheelScrolling() {
	 return this->$NullComponentPeer::handlesWheelScrolling();
}

$VolatileImage* EmbeddedFrame$NullEmbeddedFramePeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$NullComponentPeer::createVolatileImage(width, height);
}

void EmbeddedFrame$NullEmbeddedFramePeer::beginLayout() {
	this->$NullComponentPeer::beginLayout();
}

void EmbeddedFrame$NullEmbeddedFramePeer::endLayout() {
	this->$NullComponentPeer::endLayout();
}

void EmbeddedFrame$NullEmbeddedFramePeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$NullComponentPeer::createBuffers(numBuffers, caps);
}

$Image* EmbeddedFrame$NullEmbeddedFramePeer::getBackBuffer() {
	 return this->$NullComponentPeer::getBackBuffer();
}

void EmbeddedFrame$NullEmbeddedFramePeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$NullComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

void EmbeddedFrame$NullEmbeddedFramePeer::destroyBuffers() {
	this->$NullComponentPeer::destroyBuffers();
}

bool EmbeddedFrame$NullEmbeddedFramePeer::isReparentSupported() {
	 return this->$NullComponentPeer::isReparentSupported();
}

void EmbeddedFrame$NullEmbeddedFramePeer::reparent($ContainerPeer* newNativeParent) {
	this->$NullComponentPeer::reparent(newNativeParent);
}

void EmbeddedFrame$NullEmbeddedFramePeer::layout() {
	this->$NullComponentPeer::layout();
}

void EmbeddedFrame$NullEmbeddedFramePeer::applyShape($Region* shape) {
	this->$NullComponentPeer::applyShape(shape);
}

void EmbeddedFrame$NullEmbeddedFramePeer::setZOrder($ComponentPeer* above) {
	this->$NullComponentPeer::setZOrder(above);
}

bool EmbeddedFrame$NullEmbeddedFramePeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$NullComponentPeer::updateGraphicsData(gc);
}

int32_t EmbeddedFrame$NullEmbeddedFramePeer::hashCode() {
	 return this->$NullComponentPeer::hashCode();
}

bool EmbeddedFrame$NullEmbeddedFramePeer::equals(Object$* arg0) {
	 return this->$NullComponentPeer::equals(arg0);
}

$Object* EmbeddedFrame$NullEmbeddedFramePeer::clone() {
	 return this->$NullComponentPeer::clone();
}

$String* EmbeddedFrame$NullEmbeddedFramePeer::toString() {
	 return this->$NullComponentPeer::toString();
}

void EmbeddedFrame$NullEmbeddedFramePeer::finalize() {
	this->$NullComponentPeer::finalize();
}

void EmbeddedFrame$NullEmbeddedFramePeer::init$() {
	$NullComponentPeer::init$();
}

void EmbeddedFrame$NullEmbeddedFramePeer::setTitle($String* title) {
}

void EmbeddedFrame$NullEmbeddedFramePeer::setIconImage($Image* im) {
}

void EmbeddedFrame$NullEmbeddedFramePeer::updateIconImages() {
}

void EmbeddedFrame$NullEmbeddedFramePeer::setMenuBar($MenuBar* mb) {
}

void EmbeddedFrame$NullEmbeddedFramePeer::setResizable(bool resizeable) {
}

void EmbeddedFrame$NullEmbeddedFramePeer::setState(int32_t state) {
}

int32_t EmbeddedFrame$NullEmbeddedFramePeer::getState() {
	return $Frame::NORMAL;
}

void EmbeddedFrame$NullEmbeddedFramePeer::setMaximizedBounds($Rectangle* b) {
}

void EmbeddedFrame$NullEmbeddedFramePeer::toFront() {
}

void EmbeddedFrame$NullEmbeddedFramePeer::toBack() {
}

void EmbeddedFrame$NullEmbeddedFramePeer::updateFocusableWindowState() {
}

void EmbeddedFrame$NullEmbeddedFramePeer::updateAlwaysOnTop() {
}

void EmbeddedFrame$NullEmbeddedFramePeer::updateAlwaysOnTopState() {
}

$Component* EmbeddedFrame$NullEmbeddedFramePeer::getGlobalHeavyweightFocusOwner() {
	return nullptr;
}

void EmbeddedFrame$NullEmbeddedFramePeer::setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) {
	setBounds(x, y, width, height, $ComponentPeer::SET_BOUNDS);
}

$Rectangle* EmbeddedFrame$NullEmbeddedFramePeer::getBoundsPrivate() {
	return getBounds();
}

void EmbeddedFrame$NullEmbeddedFramePeer::setModalBlocked($Dialog* blocker, bool blocked) {
}

void EmbeddedFrame$NullEmbeddedFramePeer::restack() {
	$throwNew($UnsupportedOperationException);
}

bool EmbeddedFrame$NullEmbeddedFramePeer::isRestackSupported() {
	return false;
}

bool EmbeddedFrame$NullEmbeddedFramePeer::requestWindowFocus() {
	return false;
}

void EmbeddedFrame$NullEmbeddedFramePeer::updateMinimumSize() {
}

void EmbeddedFrame$NullEmbeddedFramePeer::setOpacity(float opacity) {
}

void EmbeddedFrame$NullEmbeddedFramePeer::setOpaque(bool isOpaque) {
}

void EmbeddedFrame$NullEmbeddedFramePeer::updateWindow() {
}

void EmbeddedFrame$NullEmbeddedFramePeer::repositionSecurityWarning() {
}

void EmbeddedFrame$NullEmbeddedFramePeer::emulateActivation(bool activate) {
}

EmbeddedFrame$NullEmbeddedFramePeer::EmbeddedFrame$NullEmbeddedFramePeer() {
}

$Class* EmbeddedFrame$NullEmbeddedFramePeer::load$($String* name, bool initialize) {
	$loadClass(EmbeddedFrame$NullEmbeddedFramePeer, name, initialize, &_EmbeddedFrame$NullEmbeddedFramePeer_ClassInfo_, allocate$EmbeddedFrame$NullEmbeddedFramePeer);
	return class$;
}

$Class* EmbeddedFrame$NullEmbeddedFramePeer::class$ = nullptr;

	} // awt
} // sun