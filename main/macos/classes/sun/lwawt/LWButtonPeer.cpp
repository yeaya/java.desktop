#include <sun/lwawt/LWButtonPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Button.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/lwawt/LWButtonPeer$JButtonDelegate.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/PlatformComponent.h>
#include <jcpp.h>

#undef ACTION_PERFORMED

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Button = ::java::awt::Button;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $Region = ::sun::java2d::pipe::Region;
using $LWButtonPeer$JButtonDelegate = ::sun::lwawt::LWButtonPeer$JButtonDelegate;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;

namespace sun {
	namespace lwawt {

$MethodInfo _LWButtonPeer_MethodInfo_[] = {
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
	{"<init>", "(Ljava/awt/Button;Lsun/lwawt/PlatformComponent;)V", nullptr, 0, $method(static_cast<void(LWButtonPeer::*)($Button*,$PlatformComponent*)>(&LWButtonPeer::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"createDelegate", "()Ljavax/swing/JButton;", nullptr, 0},
	{"initializeImpl", "()V", nullptr, 0},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWButtonPeer_InnerClassesInfo_[] = {
	{"sun.lwawt.LWButtonPeer$JButtonDelegate", "sun.lwawt.LWButtonPeer", "JButtonDelegate", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _LWButtonPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWButtonPeer",
	"sun.lwawt.LWComponentPeer",
	"java.awt.peer.ButtonPeer,java.awt.event.ActionListener",
	nullptr,
	_LWButtonPeer_MethodInfo_,
	"Lsun/lwawt/LWComponentPeer<Ljava/awt/Button;Ljavax/swing/JButton;>;Ljava/awt/peer/ButtonPeer;Ljava/awt/event/ActionListener;",
	nullptr,
	_LWButtonPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.LWButtonPeer$JButtonDelegate"
};

$Object* allocate$LWButtonPeer($Class* clazz) {
	return $of($alloc(LWButtonPeer));
}

void LWButtonPeer::dispose() {
	this->$LWComponentPeer::dispose();
}

$GraphicsConfiguration* LWButtonPeer::getGraphicsConfiguration() {
	 return this->$LWComponentPeer::getGraphicsConfiguration();
}

bool LWButtonPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$LWComponentPeer::updateGraphicsData(gc);
}

$Graphics* LWButtonPeer::getGraphics() {
	 return this->$LWComponentPeer::getGraphics();
}

$ColorModel* LWButtonPeer::getColorModel() {
	 return this->$LWComponentPeer::getColorModel();
}

void LWButtonPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$LWComponentPeer::createBuffers(numBuffers, caps);
}

$Image* LWButtonPeer::getBackBuffer() {
	 return this->$LWComponentPeer::getBackBuffer();
}

void LWButtonPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$LWComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

void LWButtonPeer::destroyBuffers() {
	this->$LWComponentPeer::destroyBuffers();
}

void LWButtonPeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	this->$LWComponentPeer::setBounds(x, y, w, h, op);
}

$Point* LWButtonPeer::getLocationOnScreen() {
	 return this->$LWComponentPeer::getLocationOnScreen();
}

void LWButtonPeer::setBackground($Color* c) {
	this->$LWComponentPeer::setBackground(c);
}

void LWButtonPeer::setForeground($Color* c) {
	this->$LWComponentPeer::setForeground(c);
}

void LWButtonPeer::setFont($Font* f) {
	this->$LWComponentPeer::setFont(f);
}

$FontMetrics* LWButtonPeer::getFontMetrics($Font* f) {
	 return this->$LWComponentPeer::getFontMetrics(f);
}

void LWButtonPeer::setEnabled(bool e) {
	this->$LWComponentPeer::setEnabled(e);
}

void LWButtonPeer::setVisible(bool v) {
	this->$LWComponentPeer::setVisible(v);
}

void LWButtonPeer::paint($Graphics* g) {
	this->$LWComponentPeer::paint(g);
}

void LWButtonPeer::print($Graphics* g) {
	this->$LWComponentPeer::print(g);
}

void LWButtonPeer::reparent($ContainerPeer* newContainer) {
	this->$LWComponentPeer::reparent(newContainer);
}

bool LWButtonPeer::isReparentSupported() {
	 return this->$LWComponentPeer::isReparentSupported();
}

void LWButtonPeer::setZOrder($ComponentPeer* above) {
	this->$LWComponentPeer::setZOrder(above);
}

void LWButtonPeer::coalescePaintEvent($PaintEvent* e) {
	this->$LWComponentPeer::coalescePaintEvent(e);
}

void LWButtonPeer::layout() {
	this->$LWComponentPeer::layout();
}

bool LWButtonPeer::isObscured() {
	 return this->$LWComponentPeer::isObscured();
}

bool LWButtonPeer::canDetermineObscurity() {
	 return this->$LWComponentPeer::canDetermineObscurity();
}

$Dimension* LWButtonPeer::getPreferredSize() {
	 return this->$LWComponentPeer::getPreferredSize();
}

$Dimension* LWButtonPeer::getMinimumSize() {
	 return this->$LWComponentPeer::getMinimumSize();
}

void LWButtonPeer::updateCursorImmediately() {
	this->$LWComponentPeer::updateCursorImmediately();
}

bool LWButtonPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$LWComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* LWButtonPeer::createImage(int32_t width, int32_t height) {
	 return this->$LWComponentPeer::createImage(width, height);
}

$VolatileImage* LWButtonPeer::createVolatileImage(int32_t w, int32_t h) {
	 return this->$LWComponentPeer::createVolatileImage(w, h);
}

bool LWButtonPeer::handlesWheelScrolling() {
	 return this->$LWComponentPeer::handlesWheelScrolling();
}

void LWButtonPeer::applyShape($Region* shape) {
	this->$LWComponentPeer::applyShape(shape);
}

void LWButtonPeer::handleEvent($AWTEvent* e) {
	this->$LWComponentPeer::handleEvent(e);
}

int32_t LWButtonPeer::hashCode() {
	 return this->$LWComponentPeer::hashCode();
}

bool LWButtonPeer::equals(Object$* arg0) {
	 return this->$LWComponentPeer::equals(arg0);
}

$Object* LWButtonPeer::clone() {
	 return this->$LWComponentPeer::clone();
}

$String* LWButtonPeer::toString() {
	 return this->$LWComponentPeer::toString();
}

void LWButtonPeer::finalize() {
	this->$LWComponentPeer::finalize();
}

void LWButtonPeer::init$($Button* target, $PlatformComponent* platformComponent) {
	$LWComponentPeer::init$(target, platformComponent);
}

$JComponent* LWButtonPeer::createDelegate() {
	return $new($LWButtonPeer$JButtonDelegate, this);
}

void LWButtonPeer::initializeImpl() {
	$useLocalCurrentObjectStackCache();
	$LWComponentPeer::initializeImpl();
	setLabel($($nc(($cast($Button, $(getTarget()))))->getLabel()));
	$synchronized(getDelegateLock()) {
		$nc(($cast($JButton, $(getDelegate()))))->addActionListener(this);
	}
}

void LWButtonPeer::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of(getTarget()));
	$var($String, var$1, $nc(($cast($Button, $(getTarget()))))->getActionCommand());
	int64_t var$2 = $nc(e)->getWhen();
	postEvent($$new($ActionEvent, var$0, $ActionEvent::ACTION_PERFORMED, var$1, var$2, e->getModifiers()));
}

void LWButtonPeer::setLabel($String* label) {
	$synchronized(getDelegateLock()) {
		$nc(($cast($JButton, $(getDelegate()))))->setText(label);
	}
}

bool LWButtonPeer::isFocusable() {
	return true;
}

LWButtonPeer::LWButtonPeer() {
}

$Class* LWButtonPeer::load$($String* name, bool initialize) {
	$loadClass(LWButtonPeer, name, initialize, &_LWButtonPeer_ClassInfo_, allocate$LWButtonPeer);
	return class$;
}

$Class* LWButtonPeer::class$ = nullptr;

	} // lwawt
} // sun