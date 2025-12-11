#include <sun/lwawt/LWCheckboxPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Checkbox.h>
#include <java/awt/CheckboxGroup.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/Runnable.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/lwawt/LWCheckboxPeer$1.h>
#include <sun/lwawt/LWCheckboxPeer$CheckboxDelegate.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/PlatformComponent.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Checkbox = ::java::awt::Checkbox;
using $CheckboxGroup = ::java::awt::CheckboxGroup;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Region = ::sun::java2d::pipe::Region;
using $LWCheckboxPeer$1 = ::sun::lwawt::LWCheckboxPeer$1;
using $LWCheckboxPeer$CheckboxDelegate = ::sun::lwawt::LWCheckboxPeer$CheckboxDelegate;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;

namespace sun {
	namespace lwawt {

$MethodInfo _LWCheckboxPeer_MethodInfo_[] = {
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
	{"<init>", "(Ljava/awt/Checkbox;Lsun/lwawt/PlatformComponent;)V", nullptr, 0, $method(static_cast<void(LWCheckboxPeer::*)($Checkbox*,$PlatformComponent*)>(&LWCheckboxPeer::init$))},
	{"createDelegate", "()Lsun/lwawt/LWCheckboxPeer$CheckboxDelegate;", nullptr, 0},
	{"getDelegateFocusOwner", "()Ljava/awt/Component;", nullptr, 0},
	{"initializeImpl", "()V", nullptr, 0},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setCheckboxGroup", "(Ljava/awt/CheckboxGroup;)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setState", "(Z)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWCheckboxPeer_InnerClassesInfo_[] = {
	{"sun.lwawt.LWCheckboxPeer$CheckboxDelegate", "sun.lwawt.LWCheckboxPeer", "CheckboxDelegate", $FINAL},
	{"sun.lwawt.LWCheckboxPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWCheckboxPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWCheckboxPeer",
	"sun.lwawt.LWComponentPeer",
	"java.awt.peer.CheckboxPeer,java.awt.event.ItemListener",
	nullptr,
	_LWCheckboxPeer_MethodInfo_,
	"Lsun/lwawt/LWComponentPeer<Ljava/awt/Checkbox;Lsun/lwawt/LWCheckboxPeer$CheckboxDelegate;>;Ljava/awt/peer/CheckboxPeer;Ljava/awt/event/ItemListener;",
	nullptr,
	_LWCheckboxPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.LWCheckboxPeer$CheckboxDelegate,sun.lwawt.LWCheckboxPeer$CheckboxDelegate$2,sun.lwawt.LWCheckboxPeer$CheckboxDelegate$1,sun.lwawt.LWCheckboxPeer$1"
};

$Object* allocate$LWCheckboxPeer($Class* clazz) {
	return $of($alloc(LWCheckboxPeer));
}

void LWCheckboxPeer::dispose() {
	this->$LWComponentPeer::dispose();
}

$GraphicsConfiguration* LWCheckboxPeer::getGraphicsConfiguration() {
	 return this->$LWComponentPeer::getGraphicsConfiguration();
}

bool LWCheckboxPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$LWComponentPeer::updateGraphicsData(gc);
}

$Graphics* LWCheckboxPeer::getGraphics() {
	 return this->$LWComponentPeer::getGraphics();
}

$ColorModel* LWCheckboxPeer::getColorModel() {
	 return this->$LWComponentPeer::getColorModel();
}

void LWCheckboxPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$LWComponentPeer::createBuffers(numBuffers, caps);
}

$Image* LWCheckboxPeer::getBackBuffer() {
	 return this->$LWComponentPeer::getBackBuffer();
}

void LWCheckboxPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$LWComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

void LWCheckboxPeer::destroyBuffers() {
	this->$LWComponentPeer::destroyBuffers();
}

void LWCheckboxPeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	this->$LWComponentPeer::setBounds(x, y, w, h, op);
}

$Point* LWCheckboxPeer::getLocationOnScreen() {
	 return this->$LWComponentPeer::getLocationOnScreen();
}

void LWCheckboxPeer::setBackground($Color* c) {
	this->$LWComponentPeer::setBackground(c);
}

void LWCheckboxPeer::setForeground($Color* c) {
	this->$LWComponentPeer::setForeground(c);
}

void LWCheckboxPeer::setFont($Font* f) {
	this->$LWComponentPeer::setFont(f);
}

$FontMetrics* LWCheckboxPeer::getFontMetrics($Font* f) {
	 return this->$LWComponentPeer::getFontMetrics(f);
}

void LWCheckboxPeer::setEnabled(bool e) {
	this->$LWComponentPeer::setEnabled(e);
}

void LWCheckboxPeer::setVisible(bool v) {
	this->$LWComponentPeer::setVisible(v);
}

void LWCheckboxPeer::paint($Graphics* g) {
	this->$LWComponentPeer::paint(g);
}

void LWCheckboxPeer::print($Graphics* g) {
	this->$LWComponentPeer::print(g);
}

void LWCheckboxPeer::reparent($ContainerPeer* newContainer) {
	this->$LWComponentPeer::reparent(newContainer);
}

bool LWCheckboxPeer::isReparentSupported() {
	 return this->$LWComponentPeer::isReparentSupported();
}

void LWCheckboxPeer::setZOrder($ComponentPeer* above) {
	this->$LWComponentPeer::setZOrder(above);
}

void LWCheckboxPeer::coalescePaintEvent($PaintEvent* e) {
	this->$LWComponentPeer::coalescePaintEvent(e);
}

void LWCheckboxPeer::layout() {
	this->$LWComponentPeer::layout();
}

bool LWCheckboxPeer::isObscured() {
	 return this->$LWComponentPeer::isObscured();
}

bool LWCheckboxPeer::canDetermineObscurity() {
	 return this->$LWComponentPeer::canDetermineObscurity();
}

$Dimension* LWCheckboxPeer::getPreferredSize() {
	 return this->$LWComponentPeer::getPreferredSize();
}

$Dimension* LWCheckboxPeer::getMinimumSize() {
	 return this->$LWComponentPeer::getMinimumSize();
}

void LWCheckboxPeer::updateCursorImmediately() {
	this->$LWComponentPeer::updateCursorImmediately();
}

bool LWCheckboxPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$LWComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* LWCheckboxPeer::createImage(int32_t width, int32_t height) {
	 return this->$LWComponentPeer::createImage(width, height);
}

$VolatileImage* LWCheckboxPeer::createVolatileImage(int32_t w, int32_t h) {
	 return this->$LWComponentPeer::createVolatileImage(w, h);
}

bool LWCheckboxPeer::handlesWheelScrolling() {
	 return this->$LWComponentPeer::handlesWheelScrolling();
}

void LWCheckboxPeer::applyShape($Region* shape) {
	this->$LWComponentPeer::applyShape(shape);
}

void LWCheckboxPeer::handleEvent($AWTEvent* e) {
	this->$LWComponentPeer::handleEvent(e);
}

int32_t LWCheckboxPeer::hashCode() {
	 return this->$LWComponentPeer::hashCode();
}

bool LWCheckboxPeer::equals(Object$* arg0) {
	 return this->$LWComponentPeer::equals(arg0);
}

$Object* LWCheckboxPeer::clone() {
	 return this->$LWComponentPeer::clone();
}

$String* LWCheckboxPeer::toString() {
	 return this->$LWComponentPeer::toString();
}

void LWCheckboxPeer::finalize() {
	this->$LWComponentPeer::finalize();
}

void LWCheckboxPeer::init$($Checkbox* target, $PlatformComponent* platformComponent) {
	$LWComponentPeer::init$(target, platformComponent);
}

$JComponent* LWCheckboxPeer::createDelegate() {
	return $new($LWCheckboxPeer$CheckboxDelegate, this);
}

$Component* LWCheckboxPeer::getDelegateFocusOwner() {
	return $nc(($cast($LWCheckboxPeer$CheckboxDelegate, $(getDelegate()))))->getCurrentButton();
}

void LWCheckboxPeer::initializeImpl() {
	$useLocalCurrentObjectStackCache();
	$LWComponentPeer::initializeImpl();
	setLabel($($nc(($cast($Checkbox, $(getTarget()))))->getLabel()));
	setState($nc(($cast($Checkbox, $(getTarget()))))->getState());
	setCheckboxGroup($($nc(($cast($Checkbox, $(getTarget()))))->getCheckboxGroup()));
}

void LWCheckboxPeer::itemStateChanged($ItemEvent* e) {
	$SwingUtilities::invokeLater($$new($LWCheckboxPeer$1, this, e));
}

void LWCheckboxPeer::setCheckboxGroup($CheckboxGroup* g) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc($($nc(($cast($LWCheckboxPeer$CheckboxDelegate, $(getDelegate()))))->getCurrentButton()))->removeItemListener(this);
		$nc(($cast($LWCheckboxPeer$CheckboxDelegate, $(getDelegate()))))->setRadioButton(g != nullptr);
		$nc($($nc(($cast($LWCheckboxPeer$CheckboxDelegate, $(getDelegate()))))->getCurrentButton()))->addItemListener(this);
	}
	repaintPeer();
}

void LWCheckboxPeer::setLabel($String* label) {
	$synchronized(getDelegateLock()) {
		$nc(($cast($LWCheckboxPeer$CheckboxDelegate, $(getDelegate()))))->setText(label);
	}
}

void LWCheckboxPeer::setState(bool state) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc($($nc(($cast($LWCheckboxPeer$CheckboxDelegate, $(getDelegate()))))->getCurrentButton()))->removeItemListener(this);
		$nc(($cast($LWCheckboxPeer$CheckboxDelegate, $(getDelegate()))))->setSelected(state);
		$nc($($nc(($cast($LWCheckboxPeer$CheckboxDelegate, $(getDelegate()))))->getCurrentButton()))->addItemListener(this);
	}
	repaintPeer();
}

bool LWCheckboxPeer::isFocusable() {
	return true;
}

LWCheckboxPeer::LWCheckboxPeer() {
}

$Class* LWCheckboxPeer::load$($String* name, bool initialize) {
	$loadClass(LWCheckboxPeer, name, initialize, &_LWCheckboxPeer_ClassInfo_, allocate$LWCheckboxPeer);
	return class$;
}

$Class* LWCheckboxPeer::class$ = nullptr;

	} // lwawt
} // sun