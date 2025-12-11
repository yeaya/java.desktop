#include <sun/lwawt/LWPanelPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Panel.h>
#include <java/awt/Point.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/lwawt/LWContainerPeer.h>
#include <sun/lwawt/PlatformComponent.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Panel = ::java::awt::Panel;
using $Point = ::java::awt::Point;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $Region = ::sun::java2d::pipe::Region;
using $LWContainerPeer = ::sun::lwawt::LWContainerPeer;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;

namespace sun {
	namespace lwawt {

$MethodInfo _LWPanelPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC | $FINAL},
	{"*beginLayout", "()V", nullptr, $PUBLIC | $FINAL},
	{"*beginValidate", "()V", nullptr, $PUBLIC | $FINAL},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC | $FINAL},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC | $FINAL},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC | $FINAL},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*endLayout", "()V", nullptr, $PUBLIC | $FINAL},
	{"*endValidate", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC | $FINAL},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"*getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $FINAL},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $FINAL},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Panel;Lsun/lwawt/PlatformComponent;)V", nullptr, 0, $method(static_cast<void(LWPanelPeer::*)($Panel*,$PlatformComponent*)>(&LWPanelPeer::init$))},
	{"createDelegate", "()Ljavax/swing/JPanel;", nullptr, 0},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $FINAL},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $FINAL},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
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

$ClassInfo _LWPanelPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWPanelPeer",
	"sun.lwawt.LWContainerPeer",
	"java.awt.peer.PanelPeer",
	nullptr,
	_LWPanelPeer_MethodInfo_,
	"Lsun/lwawt/LWContainerPeer<Ljava/awt/Panel;Ljavax/swing/JPanel;>;Ljava/awt/peer/PanelPeer;"
};

$Object* allocate$LWPanelPeer($Class* clazz) {
	return $of($alloc(LWPanelPeer));
}

$Insets* LWPanelPeer::getInsets() {
	 return this->$LWContainerPeer::getInsets();
}

void LWPanelPeer::beginValidate() {
	this->$LWContainerPeer::beginValidate();
}

void LWPanelPeer::endValidate() {
	this->$LWContainerPeer::endValidate();
}

void LWPanelPeer::beginLayout() {
	this->$LWContainerPeer::beginLayout();
}

void LWPanelPeer::endLayout() {
	this->$LWContainerPeer::endLayout();
}

void LWPanelPeer::setEnabled(bool e) {
	this->$LWContainerPeer::setEnabled(e);
}

void LWPanelPeer::setBackground($Color* c) {
	this->$LWContainerPeer::setBackground(c);
}

void LWPanelPeer::setForeground($Color* c) {
	this->$LWContainerPeer::setForeground(c);
}

void LWPanelPeer::setFont($Font* f) {
	this->$LWContainerPeer::setFont(f);
}

void LWPanelPeer::paint($Graphics* g) {
	this->$LWContainerPeer::paint(g);
}

void LWPanelPeer::print($Graphics* g) {
	this->$LWContainerPeer::print(g);
}

$Dimension* LWPanelPeer::getPreferredSize() {
	 return this->$LWContainerPeer::getPreferredSize();
}

$Dimension* LWPanelPeer::getMinimumSize() {
	 return this->$LWContainerPeer::getMinimumSize();
}

void LWPanelPeer::dispose() {
	this->$LWContainerPeer::dispose();
}

$GraphicsConfiguration* LWPanelPeer::getGraphicsConfiguration() {
	 return this->$LWContainerPeer::getGraphicsConfiguration();
}

bool LWPanelPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$LWContainerPeer::updateGraphicsData(gc);
}

$Graphics* LWPanelPeer::getGraphics() {
	 return this->$LWContainerPeer::getGraphics();
}

$ColorModel* LWPanelPeer::getColorModel() {
	 return this->$LWContainerPeer::getColorModel();
}

void LWPanelPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$LWContainerPeer::createBuffers(numBuffers, caps);
}

$Image* LWPanelPeer::getBackBuffer() {
	 return this->$LWContainerPeer::getBackBuffer();
}

void LWPanelPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$LWContainerPeer::flip(x1, y1, x2, y2, flipAction);
}

void LWPanelPeer::destroyBuffers() {
	this->$LWContainerPeer::destroyBuffers();
}

void LWPanelPeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	this->$LWContainerPeer::setBounds(x, y, w, h, op);
}

$Point* LWPanelPeer::getLocationOnScreen() {
	 return this->$LWContainerPeer::getLocationOnScreen();
}

$FontMetrics* LWPanelPeer::getFontMetrics($Font* f) {
	 return this->$LWContainerPeer::getFontMetrics(f);
}

void LWPanelPeer::setVisible(bool v) {
	this->$LWContainerPeer::setVisible(v);
}

void LWPanelPeer::reparent($ContainerPeer* newContainer) {
	this->$LWContainerPeer::reparent(newContainer);
}

bool LWPanelPeer::isReparentSupported() {
	 return this->$LWContainerPeer::isReparentSupported();
}

void LWPanelPeer::setZOrder($ComponentPeer* above) {
	this->$LWContainerPeer::setZOrder(above);
}

void LWPanelPeer::coalescePaintEvent($PaintEvent* e) {
	this->$LWContainerPeer::coalescePaintEvent(e);
}

void LWPanelPeer::layout() {
	this->$LWContainerPeer::layout();
}

bool LWPanelPeer::isObscured() {
	 return this->$LWContainerPeer::isObscured();
}

bool LWPanelPeer::canDetermineObscurity() {
	 return this->$LWContainerPeer::canDetermineObscurity();
}

void LWPanelPeer::updateCursorImmediately() {
	this->$LWContainerPeer::updateCursorImmediately();
}

bool LWPanelPeer::isFocusable() {
	 return this->$LWContainerPeer::isFocusable();
}

bool LWPanelPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$LWContainerPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* LWPanelPeer::createImage(int32_t width, int32_t height) {
	 return this->$LWContainerPeer::createImage(width, height);
}

$VolatileImage* LWPanelPeer::createVolatileImage(int32_t w, int32_t h) {
	 return this->$LWContainerPeer::createVolatileImage(w, h);
}

bool LWPanelPeer::handlesWheelScrolling() {
	 return this->$LWContainerPeer::handlesWheelScrolling();
}

void LWPanelPeer::applyShape($Region* shape) {
	this->$LWContainerPeer::applyShape(shape);
}

void LWPanelPeer::handleEvent($AWTEvent* e) {
	this->$LWContainerPeer::handleEvent(e);
}

int32_t LWPanelPeer::hashCode() {
	 return this->$LWContainerPeer::hashCode();
}

bool LWPanelPeer::equals(Object$* arg0) {
	 return this->$LWContainerPeer::equals(arg0);
}

$Object* LWPanelPeer::clone() {
	 return this->$LWContainerPeer::clone();
}

$String* LWPanelPeer::toString() {
	 return this->$LWContainerPeer::toString();
}

void LWPanelPeer::finalize() {
	this->$LWContainerPeer::finalize();
}

void LWPanelPeer::init$($Panel* target, $PlatformComponent* platformComponent) {
	$LWContainerPeer::init$(target, platformComponent);
}

$JComponent* LWPanelPeer::createDelegate() {
	return $new($JPanel);
}

LWPanelPeer::LWPanelPeer() {
}

$Class* LWPanelPeer::load$($String* name, bool initialize) {
	$loadClass(LWPanelPeer, name, initialize, &_LWPanelPeer_ClassInfo_, allocate$LWPanelPeer);
	return class$;
}

$Class* LWPanelPeer::class$ = nullptr;

	} // lwawt
} // sun