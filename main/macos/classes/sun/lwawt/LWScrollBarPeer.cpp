#include <sun/lwawt/LWScrollBarPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Adjustable.h>
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
#include <java/awt/Scrollbar.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/AdjustmentListener.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/PlatformComponent.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $AWTEvent = ::java::awt::AWTEvent;
using $Adjustable = ::java::awt::Adjustable;
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
using $Scrollbar = ::java::awt::Scrollbar;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $AdjustmentListener = ::java::awt::event::AdjustmentListener;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $Region = ::sun::java2d::pipe::Region;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;

namespace sun {
	namespace lwawt {

$FieldInfo _LWScrollBarPeer_FieldInfo_[] = {
	{"currentValue", "I", nullptr, $PRIVATE, $field(LWScrollBarPeer, currentValue)},
	{}
};

$MethodInfo _LWScrollBarPeer_MethodInfo_[] = {
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
	{"<init>", "(Ljava/awt/Scrollbar;Lsun/lwawt/PlatformComponent;)V", nullptr, 0, $method(static_cast<void(LWScrollBarPeer::*)($Scrollbar*,$PlatformComponent*)>(&LWScrollBarPeer::init$))},
	{"adjustmentValueChanged", "(Ljava/awt/event/AdjustmentEvent;)V", nullptr, $PUBLIC},
	{"createDelegate", "()Ljavax/swing/JScrollBar;", nullptr, 0},
	{"initializeImpl", "()V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
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
	{"setLineIncrement", "(I)V", nullptr, $PUBLIC},
	{"setPageIncrement", "(I)V", nullptr, $PUBLIC},
	{"setValues", "(IIII)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LWScrollBarPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWScrollBarPeer",
	"sun.lwawt.LWComponentPeer",
	"java.awt.peer.ScrollbarPeer,java.awt.event.AdjustmentListener",
	_LWScrollBarPeer_FieldInfo_,
	_LWScrollBarPeer_MethodInfo_,
	"Lsun/lwawt/LWComponentPeer<Ljava/awt/Scrollbar;Ljavax/swing/JScrollBar;>;Ljava/awt/peer/ScrollbarPeer;Ljava/awt/event/AdjustmentListener;"
};

$Object* allocate$LWScrollBarPeer($Class* clazz) {
	return $of($alloc(LWScrollBarPeer));
}

void LWScrollBarPeer::dispose() {
	this->$LWComponentPeer::dispose();
}

$GraphicsConfiguration* LWScrollBarPeer::getGraphicsConfiguration() {
	 return this->$LWComponentPeer::getGraphicsConfiguration();
}

bool LWScrollBarPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$LWComponentPeer::updateGraphicsData(gc);
}

$Graphics* LWScrollBarPeer::getGraphics() {
	 return this->$LWComponentPeer::getGraphics();
}

$ColorModel* LWScrollBarPeer::getColorModel() {
	 return this->$LWComponentPeer::getColorModel();
}

void LWScrollBarPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$LWComponentPeer::createBuffers(numBuffers, caps);
}

$Image* LWScrollBarPeer::getBackBuffer() {
	 return this->$LWComponentPeer::getBackBuffer();
}

void LWScrollBarPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$LWComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

void LWScrollBarPeer::destroyBuffers() {
	this->$LWComponentPeer::destroyBuffers();
}

void LWScrollBarPeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	this->$LWComponentPeer::setBounds(x, y, w, h, op);
}

$Point* LWScrollBarPeer::getLocationOnScreen() {
	 return this->$LWComponentPeer::getLocationOnScreen();
}

void LWScrollBarPeer::setBackground($Color* c) {
	this->$LWComponentPeer::setBackground(c);
}

void LWScrollBarPeer::setForeground($Color* c) {
	this->$LWComponentPeer::setForeground(c);
}

void LWScrollBarPeer::setFont($Font* f) {
	this->$LWComponentPeer::setFont(f);
}

$FontMetrics* LWScrollBarPeer::getFontMetrics($Font* f) {
	 return this->$LWComponentPeer::getFontMetrics(f);
}

void LWScrollBarPeer::setEnabled(bool e) {
	this->$LWComponentPeer::setEnabled(e);
}

void LWScrollBarPeer::setVisible(bool v) {
	this->$LWComponentPeer::setVisible(v);
}

void LWScrollBarPeer::paint($Graphics* g) {
	this->$LWComponentPeer::paint(g);
}

void LWScrollBarPeer::print($Graphics* g) {
	this->$LWComponentPeer::print(g);
}

void LWScrollBarPeer::reparent($ContainerPeer* newContainer) {
	this->$LWComponentPeer::reparent(newContainer);
}

bool LWScrollBarPeer::isReparentSupported() {
	 return this->$LWComponentPeer::isReparentSupported();
}

void LWScrollBarPeer::setZOrder($ComponentPeer* above) {
	this->$LWComponentPeer::setZOrder(above);
}

void LWScrollBarPeer::coalescePaintEvent($PaintEvent* e) {
	this->$LWComponentPeer::coalescePaintEvent(e);
}

void LWScrollBarPeer::layout() {
	this->$LWComponentPeer::layout();
}

bool LWScrollBarPeer::isObscured() {
	 return this->$LWComponentPeer::isObscured();
}

bool LWScrollBarPeer::canDetermineObscurity() {
	 return this->$LWComponentPeer::canDetermineObscurity();
}

$Dimension* LWScrollBarPeer::getPreferredSize() {
	 return this->$LWComponentPeer::getPreferredSize();
}

$Dimension* LWScrollBarPeer::getMinimumSize() {
	 return this->$LWComponentPeer::getMinimumSize();
}

void LWScrollBarPeer::updateCursorImmediately() {
	this->$LWComponentPeer::updateCursorImmediately();
}

bool LWScrollBarPeer::isFocusable() {
	 return this->$LWComponentPeer::isFocusable();
}

bool LWScrollBarPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$LWComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* LWScrollBarPeer::createImage(int32_t width, int32_t height) {
	 return this->$LWComponentPeer::createImage(width, height);
}

$VolatileImage* LWScrollBarPeer::createVolatileImage(int32_t w, int32_t h) {
	 return this->$LWComponentPeer::createVolatileImage(w, h);
}

bool LWScrollBarPeer::handlesWheelScrolling() {
	 return this->$LWComponentPeer::handlesWheelScrolling();
}

void LWScrollBarPeer::applyShape($Region* shape) {
	this->$LWComponentPeer::applyShape(shape);
}

void LWScrollBarPeer::handleEvent($AWTEvent* e) {
	this->$LWComponentPeer::handleEvent(e);
}

int32_t LWScrollBarPeer::hashCode() {
	 return this->$LWComponentPeer::hashCode();
}

bool LWScrollBarPeer::equals(Object$* arg0) {
	 return this->$LWComponentPeer::equals(arg0);
}

$Object* LWScrollBarPeer::clone() {
	 return this->$LWComponentPeer::clone();
}

$String* LWScrollBarPeer::toString() {
	 return this->$LWComponentPeer::toString();
}

void LWScrollBarPeer::finalize() {
	this->$LWComponentPeer::finalize();
}

void LWScrollBarPeer::init$($Scrollbar* target, $PlatformComponent* platformComponent) {
	$LWComponentPeer::init$(target, platformComponent);
}

$JComponent* LWScrollBarPeer::createDelegate() {
	return $new($JScrollBar);
}

void LWScrollBarPeer::initializeImpl() {
	$useLocalCurrentObjectStackCache();
	$LWComponentPeer::initializeImpl();
	$var($Scrollbar, target, $cast($Scrollbar, getTarget()));
	setLineIncrement($nc(target)->getUnitIncrement());
	setPageIncrement($nc(target)->getBlockIncrement());
	int32_t var$0 = $nc(target)->getValue();
	int32_t var$1 = target->getVisibleAmount();
	int32_t var$2 = target->getMinimum();
	setValues(var$0, var$1, var$2, target->getMaximum());
	int32_t orientation = $nc(target)->getOrientation();
	$var($JScrollBar, delegate, $cast($JScrollBar, getDelegate()));
	$synchronized(getDelegateLock()) {
		$nc(delegate)->setOrientation(orientation == $Scrollbar::HORIZONTAL ? $Adjustable::HORIZONTAL : $Adjustable::VERTICAL);
		delegate->addAdjustmentListener(this);
	}
}

void LWScrollBarPeer::setValues(int32_t value, int32_t visible, int32_t minimum, int32_t maximum) {
	$synchronized(getDelegateLock()) {
		this->currentValue = value;
		$nc(($cast($JScrollBar, $(getDelegate()))))->setValues(value, visible, minimum, maximum);
	}
}

void LWScrollBarPeer::setLineIncrement(int32_t l) {
	$synchronized(getDelegateLock()) {
		$nc(($cast($JScrollBar, $(getDelegate()))))->setUnitIncrement(l);
	}
}

void LWScrollBarPeer::setPageIncrement(int32_t l) {
	$synchronized(getDelegateLock()) {
		$nc(($cast($JScrollBar, $(getDelegate()))))->setBlockIncrement(l);
	}
}

void LWScrollBarPeer::adjustmentValueChanged($AdjustmentEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t value = $nc(e)->getValue();
	$synchronized(getDelegateLock()) {
		if (this->currentValue == value) {
			return;
		}
		this->currentValue = value;
	}
	$nc(($cast($Scrollbar, $(getTarget()))))->setValueIsAdjusting(e->getValueIsAdjusting());
	$nc(($cast($Scrollbar, $(getTarget()))))->setValue(value);
	$var($Adjustable, var$0, $cast($Adjustable, getTarget()));
	int32_t var$1 = e->getID();
	int32_t var$2 = e->getAdjustmentType();
	int32_t var$3 = value;
	postEvent($$new($AdjustmentEvent, var$0, var$1, var$2, var$3, e->getValueIsAdjusting()));
}

LWScrollBarPeer::LWScrollBarPeer() {
}

$Class* LWScrollBarPeer::load$($String* name, bool initialize) {
	$loadClass(LWScrollBarPeer, name, initialize, &_LWScrollBarPeer_ClassInfo_, allocate$LWScrollBarPeer);
	return class$;
}

$Class* LWScrollBarPeer::class$ = nullptr;

	} // lwawt
} // sun