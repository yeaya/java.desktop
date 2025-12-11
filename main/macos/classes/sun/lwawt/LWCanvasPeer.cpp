#include <sun/lwawt/LWCanvasPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/PlatformComponent.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Region = ::sun::java2d::pipe::Region;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;

namespace sun {
	namespace lwawt {

$MethodInfo _LWCanvasPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC | $FINAL},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC | $FINAL},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC | $FINAL},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC | $FINAL},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC | $FINAL},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Component;Lsun/lwawt/PlatformComponent;)V", "(TT;Lsun/lwawt/PlatformComponent;)V", 0, $method(static_cast<void(LWCanvasPeer::*)($Component*,$PlatformComponent*)>(&LWCanvasPeer::init$))},
	{"getAppropriateGraphicsConfiguration", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $FINAL},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $FINAL},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $FINAL},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LWCanvasPeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.LWCanvasPeer",
	"sun.lwawt.LWComponentPeer",
	"java.awt.peer.CanvasPeer",
	nullptr,
	_LWCanvasPeer_MethodInfo_,
	"<T:Ljava/awt/Component;D:Ljavax/swing/JComponent;>Lsun/lwawt/LWComponentPeer<TT;TD;>;Ljava/awt/peer/CanvasPeer;"
};

$Object* allocate$LWCanvasPeer($Class* clazz) {
	return $of($alloc(LWCanvasPeer));
}

void LWCanvasPeer::dispose() {
	this->$LWComponentPeer::dispose();
}

$GraphicsConfiguration* LWCanvasPeer::getGraphicsConfiguration() {
	 return this->$LWComponentPeer::getGraphicsConfiguration();
}

bool LWCanvasPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$LWComponentPeer::updateGraphicsData(gc);
}

$Graphics* LWCanvasPeer::getGraphics() {
	 return this->$LWComponentPeer::getGraphics();
}

$ColorModel* LWCanvasPeer::getColorModel() {
	 return this->$LWComponentPeer::getColorModel();
}

void LWCanvasPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$LWComponentPeer::createBuffers(numBuffers, caps);
}

$Image* LWCanvasPeer::getBackBuffer() {
	 return this->$LWComponentPeer::getBackBuffer();
}

void LWCanvasPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$LWComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

void LWCanvasPeer::destroyBuffers() {
	this->$LWComponentPeer::destroyBuffers();
}

void LWCanvasPeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	this->$LWComponentPeer::setBounds(x, y, w, h, op);
}

$Point* LWCanvasPeer::getLocationOnScreen() {
	 return this->$LWComponentPeer::getLocationOnScreen();
}

void LWCanvasPeer::setBackground($Color* c) {
	this->$LWComponentPeer::setBackground(c);
}

void LWCanvasPeer::setForeground($Color* c) {
	this->$LWComponentPeer::setForeground(c);
}

void LWCanvasPeer::setFont($Font* f) {
	this->$LWComponentPeer::setFont(f);
}

$FontMetrics* LWCanvasPeer::getFontMetrics($Font* f) {
	 return this->$LWComponentPeer::getFontMetrics(f);
}

void LWCanvasPeer::setEnabled(bool e) {
	this->$LWComponentPeer::setEnabled(e);
}

void LWCanvasPeer::setVisible(bool v) {
	this->$LWComponentPeer::setVisible(v);
}

void LWCanvasPeer::paint($Graphics* g) {
	this->$LWComponentPeer::paint(g);
}

void LWCanvasPeer::print($Graphics* g) {
	this->$LWComponentPeer::print(g);
}

void LWCanvasPeer::reparent($ContainerPeer* newContainer) {
	this->$LWComponentPeer::reparent(newContainer);
}

bool LWCanvasPeer::isReparentSupported() {
	 return this->$LWComponentPeer::isReparentSupported();
}

void LWCanvasPeer::setZOrder($ComponentPeer* above) {
	this->$LWComponentPeer::setZOrder(above);
}

void LWCanvasPeer::coalescePaintEvent($PaintEvent* e) {
	this->$LWComponentPeer::coalescePaintEvent(e);
}

void LWCanvasPeer::layout() {
	this->$LWComponentPeer::layout();
}

bool LWCanvasPeer::isObscured() {
	 return this->$LWComponentPeer::isObscured();
}

bool LWCanvasPeer::canDetermineObscurity() {
	 return this->$LWComponentPeer::canDetermineObscurity();
}

void LWCanvasPeer::updateCursorImmediately() {
	this->$LWComponentPeer::updateCursorImmediately();
}

bool LWCanvasPeer::isFocusable() {
	 return this->$LWComponentPeer::isFocusable();
}

bool LWCanvasPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$LWComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* LWCanvasPeer::createImage(int32_t width, int32_t height) {
	 return this->$LWComponentPeer::createImage(width, height);
}

$VolatileImage* LWCanvasPeer::createVolatileImage(int32_t w, int32_t h) {
	 return this->$LWComponentPeer::createVolatileImage(w, h);
}

bool LWCanvasPeer::handlesWheelScrolling() {
	 return this->$LWComponentPeer::handlesWheelScrolling();
}

void LWCanvasPeer::applyShape($Region* shape) {
	this->$LWComponentPeer::applyShape(shape);
}

void LWCanvasPeer::handleEvent($AWTEvent* e) {
	this->$LWComponentPeer::handleEvent(e);
}

int32_t LWCanvasPeer::hashCode() {
	 return this->$LWComponentPeer::hashCode();
}

bool LWCanvasPeer::equals(Object$* arg0) {
	 return this->$LWComponentPeer::equals(arg0);
}

$Object* LWCanvasPeer::clone() {
	 return this->$LWComponentPeer::clone();
}

$String* LWCanvasPeer::toString() {
	 return this->$LWComponentPeer::toString();
}

void LWCanvasPeer::finalize() {
	this->$LWComponentPeer::finalize();
}

void LWCanvasPeer::init$($Component* target, $PlatformComponent* platformComponent) {
	$LWComponentPeer::init$(target, platformComponent);
}

$GraphicsConfiguration* LWCanvasPeer::getAppropriateGraphicsConfiguration($GraphicsConfiguration* gc) {
	return gc;
}

$Dimension* LWCanvasPeer::getPreferredSize() {
	return getMinimumSize();
}

$Dimension* LWCanvasPeer::getMinimumSize() {
	return $nc($(getBounds()))->getSize();
}

LWCanvasPeer::LWCanvasPeer() {
}

$Class* LWCanvasPeer::load$($String* name, bool initialize) {
	$loadClass(LWCanvasPeer, name, initialize, &_LWCanvasPeer_ClassInfo_, allocate$LWCanvasPeer);
	return class$;
}

$Class* LWCanvasPeer::class$ = nullptr;

	} // lwawt
} // sun