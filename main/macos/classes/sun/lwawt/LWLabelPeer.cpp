#include <sun/lwawt/LWLabelPeer.h>

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
#include <java/awt/Label.h>
#include <java/awt/Point.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingConstants.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/PlatformComponent.h>
#include <jcpp.h>

#undef CENTER
#undef LEFT
#undef RIGHT

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
using $Label = ::java::awt::Label;
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
using $JLabel = ::javax::swing::JLabel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $Region = ::sun::java2d::pipe::Region;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;

namespace sun {
	namespace lwawt {

$MethodInfo _LWLabelPeer_MethodInfo_[] = {
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
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Label;Lsun/lwawt/PlatformComponent;)V", nullptr, 0, $method(static_cast<void(LWLabelPeer::*)($Label*,$PlatformComponent*)>(&LWLabelPeer::init$))},
	{"convertAlignment", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&LWLabelPeer::convertAlignment))},
	{"createDelegate", "()Ljavax/swing/JLabel;", nullptr, 0},
	{"initializeImpl", "()V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"setAlignment", "(I)V", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LWLabelPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWLabelPeer",
	"sun.lwawt.LWComponentPeer",
	"java.awt.peer.LabelPeer",
	nullptr,
	_LWLabelPeer_MethodInfo_,
	"Lsun/lwawt/LWComponentPeer<Ljava/awt/Label;Ljavax/swing/JLabel;>;Ljava/awt/peer/LabelPeer;"
};

$Object* allocate$LWLabelPeer($Class* clazz) {
	return $of($alloc(LWLabelPeer));
}

void LWLabelPeer::dispose() {
	this->$LWComponentPeer::dispose();
}

$GraphicsConfiguration* LWLabelPeer::getGraphicsConfiguration() {
	 return this->$LWComponentPeer::getGraphicsConfiguration();
}

bool LWLabelPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$LWComponentPeer::updateGraphicsData(gc);
}

$Graphics* LWLabelPeer::getGraphics() {
	 return this->$LWComponentPeer::getGraphics();
}

$ColorModel* LWLabelPeer::getColorModel() {
	 return this->$LWComponentPeer::getColorModel();
}

void LWLabelPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$LWComponentPeer::createBuffers(numBuffers, caps);
}

$Image* LWLabelPeer::getBackBuffer() {
	 return this->$LWComponentPeer::getBackBuffer();
}

void LWLabelPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$LWComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

void LWLabelPeer::destroyBuffers() {
	this->$LWComponentPeer::destroyBuffers();
}

void LWLabelPeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	this->$LWComponentPeer::setBounds(x, y, w, h, op);
}

$Point* LWLabelPeer::getLocationOnScreen() {
	 return this->$LWComponentPeer::getLocationOnScreen();
}

void LWLabelPeer::setBackground($Color* c) {
	this->$LWComponentPeer::setBackground(c);
}

void LWLabelPeer::setForeground($Color* c) {
	this->$LWComponentPeer::setForeground(c);
}

void LWLabelPeer::setFont($Font* f) {
	this->$LWComponentPeer::setFont(f);
}

$FontMetrics* LWLabelPeer::getFontMetrics($Font* f) {
	 return this->$LWComponentPeer::getFontMetrics(f);
}

void LWLabelPeer::setEnabled(bool e) {
	this->$LWComponentPeer::setEnabled(e);
}

void LWLabelPeer::setVisible(bool v) {
	this->$LWComponentPeer::setVisible(v);
}

void LWLabelPeer::paint($Graphics* g) {
	this->$LWComponentPeer::paint(g);
}

void LWLabelPeer::print($Graphics* g) {
	this->$LWComponentPeer::print(g);
}

void LWLabelPeer::reparent($ContainerPeer* newContainer) {
	this->$LWComponentPeer::reparent(newContainer);
}

bool LWLabelPeer::isReparentSupported() {
	 return this->$LWComponentPeer::isReparentSupported();
}

void LWLabelPeer::setZOrder($ComponentPeer* above) {
	this->$LWComponentPeer::setZOrder(above);
}

void LWLabelPeer::coalescePaintEvent($PaintEvent* e) {
	this->$LWComponentPeer::coalescePaintEvent(e);
}

void LWLabelPeer::layout() {
	this->$LWComponentPeer::layout();
}

bool LWLabelPeer::isObscured() {
	 return this->$LWComponentPeer::isObscured();
}

bool LWLabelPeer::canDetermineObscurity() {
	 return this->$LWComponentPeer::canDetermineObscurity();
}

$Dimension* LWLabelPeer::getPreferredSize() {
	 return this->$LWComponentPeer::getPreferredSize();
}

$Dimension* LWLabelPeer::getMinimumSize() {
	 return this->$LWComponentPeer::getMinimumSize();
}

void LWLabelPeer::updateCursorImmediately() {
	this->$LWComponentPeer::updateCursorImmediately();
}

bool LWLabelPeer::isFocusable() {
	 return this->$LWComponentPeer::isFocusable();
}

bool LWLabelPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$LWComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* LWLabelPeer::createImage(int32_t width, int32_t height) {
	 return this->$LWComponentPeer::createImage(width, height);
}

$VolatileImage* LWLabelPeer::createVolatileImage(int32_t w, int32_t h) {
	 return this->$LWComponentPeer::createVolatileImage(w, h);
}

bool LWLabelPeer::handlesWheelScrolling() {
	 return this->$LWComponentPeer::handlesWheelScrolling();
}

void LWLabelPeer::applyShape($Region* shape) {
	this->$LWComponentPeer::applyShape(shape);
}

void LWLabelPeer::handleEvent($AWTEvent* e) {
	this->$LWComponentPeer::handleEvent(e);
}

int32_t LWLabelPeer::hashCode() {
	 return this->$LWComponentPeer::hashCode();
}

bool LWLabelPeer::equals(Object$* arg0) {
	 return this->$LWComponentPeer::equals(arg0);
}

$Object* LWLabelPeer::clone() {
	 return this->$LWComponentPeer::clone();
}

$String* LWLabelPeer::toString() {
	 return this->$LWComponentPeer::toString();
}

void LWLabelPeer::finalize() {
	this->$LWComponentPeer::finalize();
}

void LWLabelPeer::init$($Label* target, $PlatformComponent* platformComponent) {
	$LWComponentPeer::init$(target, platformComponent);
}

$JComponent* LWLabelPeer::createDelegate() {
	return $new($JLabel);
}

void LWLabelPeer::initializeImpl() {
	$useLocalCurrentObjectStackCache();
	$LWComponentPeer::initializeImpl();
	setText($($nc(($cast($Label, $(getTarget()))))->getText()));
	setAlignment($nc(($cast($Label, $(getTarget()))))->getAlignment());
}

void LWLabelPeer::setText($String* label) {
	$synchronized(getDelegateLock()) {
		$nc(($cast($JLabel, $(getDelegate()))))->setText(label);
	}
}

void LWLabelPeer::setAlignment(int32_t alignment) {
	$synchronized(getDelegateLock()) {
		$nc(($cast($JLabel, $(getDelegate()))))->setHorizontalAlignment(convertAlignment(alignment));
	}
}

int32_t LWLabelPeer::convertAlignment(int32_t alignment) {
	$init(LWLabelPeer);
	switch (alignment) {
	case $Label::CENTER:
		{
			return $SwingConstants::CENTER;
		}
	case $Label::RIGHT:
		{
			return $SwingConstants::RIGHT;
		}
	default:
		{
			return $SwingConstants::LEFT;
		}
	}
}

LWLabelPeer::LWLabelPeer() {
}

$Class* LWLabelPeer::load$($String* name, bool initialize) {
	$loadClass(LWLabelPeer, name, initialize, &_LWLabelPeer_ClassInfo_, allocate$LWLabelPeer);
	return class$;
}

$Class* LWLabelPeer::class$ = nullptr;

	} // lwawt
} // sun