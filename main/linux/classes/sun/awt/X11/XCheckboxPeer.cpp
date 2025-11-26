#include <sun/awt/X11/XCheckboxPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Checkbox.h>
#include <java/awt/CheckboxGroup.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/Point.h>
#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/SystemColor.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/util/Objects.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XCheckboxPeer$1.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef DESELECTED
#undef FINER
#undef ITEM_STATE_CHANGED
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef KEY_TYPED
#undef MASTER_CHECKMARK
#undef MASTER_SIZE
#undef MOUSE_CLICKED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef SELECTED
#undef VK_SPACE

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Checkbox = ::java::awt::Checkbox;
using $CheckboxGroup = ::java::awt::CheckboxGroup;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $Point = ::java::awt::Point;
using $Polygon = ::java::awt::Polygon;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $SystemColor = ::java::awt::SystemColor;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $CheckboxPeer = ::java::awt::peer::CheckboxPeer;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $EventObject = ::java::util::EventObject;
using $Objects = ::java::util::Objects;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $SunToolkit = ::sun::awt::SunToolkit;
using $XCheckboxPeer$1 = ::sun::awt::X11::XCheckboxPeer$1;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $Region = ::sun::java2d::pipe::Region;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XCheckboxPeer_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XCheckboxPeer, log)},
	{"focusInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XCheckboxPeer, focusInsets)},
	{"borderInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XCheckboxPeer, borderInsets)},
	{"checkBoxInsetFromText", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XCheckboxPeer, checkBoxInsetFromText)},
	{"MASTER_SIZE", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XCheckboxPeer, MASTER_SIZE)},
	{"MASTER_CHECKMARK", "Ljava/awt/Polygon;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XCheckboxPeer, MASTER_CHECKMARK)},
	{"myCheckMark", "Ljava/awt/Shape;", nullptr, $PRIVATE, $field(XCheckboxPeer, myCheckMark)},
	{"focusColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(XCheckboxPeer, focusColor)},
	{"pressed", "Z", nullptr, $PRIVATE, $field(XCheckboxPeer, pressed)},
	{"armed", "Z", nullptr, $PRIVATE, $field(XCheckboxPeer, armed)},
	{"selected", "Z", nullptr, $PRIVATE, $field(XCheckboxPeer, selected)},
	{"textRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(XCheckboxPeer, textRect)},
	{"focusRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(XCheckboxPeer, focusRect)},
	{"checkBoxSize", "I", nullptr, $PRIVATE, $field(XCheckboxPeer, checkBoxSize)},
	{"cbX", "I", nullptr, $PRIVATE, $field(XCheckboxPeer, cbX)},
	{"cbY", "I", nullptr, $PRIVATE, $field(XCheckboxPeer, cbY)},
	{"label", "Ljava/lang/String;", nullptr, 0, $field(XCheckboxPeer, label)},
	{"checkBoxGroup", "Ljava/awt/CheckboxGroup;", nullptr, 0, $field(XCheckboxPeer, checkBoxGroup)},
	{}
};

$MethodInfo _XCheckboxPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC},
	{"*dispose", "()V", nullptr, $PUBLIC | $SYNTHETIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Checkbox;)V", nullptr, 0, $method(static_cast<void(XCheckboxPeer::*)($Checkbox*)>(&XCheckboxPeer::init$))},
	{"action", "(Z)V", nullptr, 0},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getCheckboxSize", "(Ljava/awt/FontMetrics;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(XCheckboxPeer::*)($FontMetrics*)>(&XCheckboxPeer::getCheckboxSize))},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"handleJavaKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"handleJavaMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"layout", "()V", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"notifyStateChanged", "(Z)V", nullptr, 0},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintCheckbox", "(Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintFocus", "(Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED},
	{"paintPeer", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"paintRadioButton", "(Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintText", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setCheckboxGroup", "(Ljava/awt/CheckboxGroup;)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setState", "(Z)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XCheckboxPeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XCheckboxPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XCheckboxPeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XCheckboxPeer",
	"sun.awt.X11.XComponentPeer",
	"java.awt.peer.CheckboxPeer",
	_XCheckboxPeer_FieldInfo_,
	_XCheckboxPeer_MethodInfo_,
	nullptr,
	nullptr,
	_XCheckboxPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XCheckboxPeer$1"
};

$Object* allocate$XCheckboxPeer($Class* clazz) {
	return $of($alloc(XCheckboxPeer));
}

void XCheckboxPeer::reparent($ContainerPeer* newNativeParent) {
	this->$XComponentPeer::reparent(newNativeParent);
}

bool XCheckboxPeer::isReparentSupported() {
	 return this->$XComponentPeer::isReparentSupported();
}

bool XCheckboxPeer::isObscured() {
	 return this->$XComponentPeer::isObscured();
}

bool XCheckboxPeer::canDetermineObscurity() {
	 return this->$XComponentPeer::canDetermineObscurity();
}

bool XCheckboxPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void XCheckboxPeer::setVisible(bool b) {
	this->$XComponentPeer::setVisible(b);
}

void XCheckboxPeer::setEnabled(bool value) {
	this->$XComponentPeer::setEnabled(value);
}

void XCheckboxPeer::paint($Graphics* g) {
	this->$XComponentPeer::paint(g);
}

$Graphics* XCheckboxPeer::getGraphics() {
	 return this->$XComponentPeer::getGraphics();
}

void XCheckboxPeer::print($Graphics* g) {
	this->$XComponentPeer::print(g);
}

void XCheckboxPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$XComponentPeer::setBounds(x, y, width, height, op);
}

void XCheckboxPeer::coalescePaintEvent($PaintEvent* e) {
	this->$XComponentPeer::coalescePaintEvent(e);
}

void XCheckboxPeer::handleEvent($AWTEvent* e) {
	this->$XComponentPeer::handleEvent(e);
}

$Dimension* XCheckboxPeer::getPreferredSize() {
	 return this->$XComponentPeer::getPreferredSize();
}

void XCheckboxPeer::setForeground($Color* c) {
	this->$XComponentPeer::setForeground(c);
}

$FontMetrics* XCheckboxPeer::getFontMetrics($Font* font) {
	 return this->$XComponentPeer::getFontMetrics(font);
}

void XCheckboxPeer::setFont($Font* f) {
	this->$XComponentPeer::setFont(f);
}

void XCheckboxPeer::updateCursorImmediately() {
	this->$XComponentPeer::updateCursorImmediately();
}

$Image* XCheckboxPeer::createImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createImage(width, height);
}

$VolatileImage* XCheckboxPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createVolatileImage(width, height);
}

bool XCheckboxPeer::handlesWheelScrolling() {
	 return this->$XComponentPeer::handlesWheelScrolling();
}

void XCheckboxPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XComponentPeer::createBuffers(numBuffers, caps);
}

void XCheckboxPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* XCheckboxPeer::getBackBuffer() {
	 return this->$XComponentPeer::getBackBuffer();
}

void XCheckboxPeer::destroyBuffers() {
	this->$XComponentPeer::destroyBuffers();
}

void XCheckboxPeer::setZOrder($ComponentPeer* above) {
	this->$XComponentPeer::setZOrder(above);
}

void XCheckboxPeer::applyShape($Region* shape) {
	this->$XComponentPeer::applyShape(shape);
}

bool XCheckboxPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XComponentPeer::updateGraphicsData(gc);
}

$Point* XCheckboxPeer::getLocationOnScreen() {
	 return this->$XComponentPeer::getLocationOnScreen();
}

void XCheckboxPeer::dispose() {
	this->$XComponentPeer::dispose();
}

$ColorModel* XCheckboxPeer::getColorModel() {
	 return this->$XComponentPeer::getColorModel();
}

$GraphicsConfiguration* XCheckboxPeer::getGraphicsConfiguration() {
	 return this->$XComponentPeer::getGraphicsConfiguration();
}

$String* XCheckboxPeer::toString() {
	 return this->$XComponentPeer::toString();
}

int32_t XCheckboxPeer::hashCode() {
	 return this->$XComponentPeer::hashCode();
}

bool XCheckboxPeer::equals(Object$* arg0) {
	 return this->$XComponentPeer::equals(arg0);
}

$Object* XCheckboxPeer::clone() {
	 return this->$XComponentPeer::clone();
}

void XCheckboxPeer::finalize() {
	this->$XComponentPeer::finalize();
}

$PlatformLogger* XCheckboxPeer::log = nullptr;
$Insets* XCheckboxPeer::focusInsets = nullptr;
$Insets* XCheckboxPeer::borderInsets = nullptr;
double XCheckboxPeer::MASTER_SIZE = 0.0;
$Polygon* XCheckboxPeer::MASTER_CHECKMARK = nullptr;

void XCheckboxPeer::init$($Checkbox* target) {
	$XComponentPeer::init$(static_cast<$Component*>(target));
	$init($SystemColor);
	$set(this, focusColor, $SystemColor::windowText);
	this->pressed = false;
	this->armed = false;
	this->selected = $nc(target)->getState();
	$set(this, label, target->getLabel());
	if (this->label == nullptr) {
		$set(this, label, ""_s);
	}
	$set(this, checkBoxGroup, target->getCheckboxGroup());
	updateMotifColors($(getPeerBackground()));
}

void XCheckboxPeer::preInit($XCreateWindowParams* params) {
	$set(this, textRect, $new($Rectangle));
	$set(this, focusRect, $new($Rectangle));
	$XComponentPeer::preInit(params);
}

bool XCheckboxPeer::isFocusable() {
	return true;
}

void XCheckboxPeer::focusGained($FocusEvent* e) {
	$XComponentPeer::focusGained(e);
	repaint();
}

void XCheckboxPeer::focusLost($FocusEvent* e) {
	$XComponentPeer::focusLost(e);
	repaint();
}

void XCheckboxPeer::handleJavaKeyEvent($KeyEvent* e) {
	int32_t i = $nc(e)->getID();
	switch (i) {
	case $KeyEvent::KEY_PRESSED:
		{
			keyPressed(e);
			break;
		}
	case $KeyEvent::KEY_RELEASED:
		{
			keyReleased(e);
			break;
		}
	case $KeyEvent::KEY_TYPED:
		{
			keyTyped(e);
			break;
		}
	}
}

void XCheckboxPeer::keyTyped($KeyEvent* e) {
}

void XCheckboxPeer::keyPressed($KeyEvent* e) {
	if ($nc(e)->getKeyCode() == $KeyEvent::VK_SPACE) {
		action(!this->selected);
	}
}

void XCheckboxPeer::keyReleased($KeyEvent* e) {
}

void XCheckboxPeer::setLabel($String* label$renamed) {
	$var($String, label, label$renamed);
	if (label == nullptr) {
		$assign(label, ""_s);
	}
	if (!$nc(label)->equals(this->label)) {
		$set(this, label, label);
		layout();
		repaint();
	}
}

void XCheckboxPeer::handleJavaMouseEvent($MouseEvent* e) {
	$XComponentPeer::handleJavaMouseEvent(e);
	int32_t i = $nc(e)->getID();
	switch (i) {
	case $MouseEvent::MOUSE_PRESSED:
		{
			mousePressed(e);
			break;
		}
	case $MouseEvent::MOUSE_RELEASED:
		{
			mouseReleased(e);
			break;
		}
	case $MouseEvent::MOUSE_ENTERED:
		{
			mouseEntered(e);
			break;
		}
	case $MouseEvent::MOUSE_EXITED:
		{
			mouseExited(e);
			break;
		}
	case $MouseEvent::MOUSE_CLICKED:
		{
			mouseClicked(e);
			break;
		}
	}
}

void XCheckboxPeer::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($XToolkit::isLeftMouseButton(e)) {
		$var($Checkbox, cb, $cast($Checkbox, $nc(e)->getSource()));
		int32_t var$0 = e->getX();
		if ($nc(cb)->contains(var$0, e->getY())) {
			$init($PlatformLogger$Level);
			if ($nc(XCheckboxPeer::log)->isLoggable($PlatformLogger$Level::FINER)) {
				$var($String, var$1, $$str({"mousePressed() on "_s, $($nc(this->target)->getName()), " : armed = "_s, $$str(this->armed), ", pressed = "_s, $$str(this->pressed), ", selected = "_s, $$str(this->selected), ", enabled = "_s}));
				$nc(XCheckboxPeer::log)->finer($$concat(var$1, $$str(isEnabled())));
			}
			if (!isEnabled()) {
				return;
			}
			if (!this->armed) {
				this->armed = true;
			}
			this->pressed = true;
			repaint();
		}
	}
}

void XCheckboxPeer::mouseReleased($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XCheckboxPeer::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$var($String, var$0, $$str({"mouseReleased() on "_s, $($nc(this->target)->getName()), ": armed = "_s, $$str(this->armed), ", pressed = "_s, $$str(this->pressed), ", selected = "_s, $$str(this->selected), ", enabled = "_s}));
		$nc(XCheckboxPeer::log)->finer($$concat(var$0, $$str(isEnabled())));
	}
	bool sendEvent = false;
	if ($XToolkit::isLeftMouseButton(e)) {
		if (this->armed) {
			sendEvent = true;
		}
		this->pressed = false;
		this->armed = false;
		if (sendEvent) {
			action(!this->selected);
		} else {
			repaint();
		}
	}
}

void XCheckboxPeer::mouseEntered($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XCheckboxPeer::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$var($String, var$0, $$str({"mouseEntered() on "_s, $($nc(this->target)->getName()), ": armed = "_s, $$str(this->armed), ", pressed = "_s, $$str(this->pressed), ", selected = "_s, $$str(this->selected), ", enabled = "_s}));
		$nc(XCheckboxPeer::log)->finer($$concat(var$0, $$str(isEnabled())));
	}
	if (this->pressed) {
		this->armed = true;
		repaint();
	}
}

void XCheckboxPeer::mouseExited($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$init($PlatformLogger$Level);
	if ($nc(XCheckboxPeer::log)->isLoggable($PlatformLogger$Level::FINER)) {
		$var($String, var$0, $$str({"mouseExited() on "_s, $($nc(this->target)->getName()), ": armed = "_s, $$str(this->armed), ", pressed = "_s, $$str(this->pressed), ", selected = "_s, $$str(this->selected), ", enabled = "_s}));
		$nc(XCheckboxPeer::log)->finer($$concat(var$0, $$str(isEnabled())));
	}
	if (this->armed) {
		this->armed = false;
		repaint();
	}
}

void XCheckboxPeer::mouseClicked($MouseEvent* e) {
}

$Dimension* XCheckboxPeer::getMinimumSize() {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, getFontMetrics($(getPeerFont())));
	int32_t var$0 = $nc(fm)->stringWidth(this->label);
	int32_t wdth = var$0 + getCheckboxSize(fm) + (2 * XCheckboxPeer::checkBoxInsetFromText) + 8;
	int32_t hght = $Math::max(fm->getHeight() + 8, 15);
	return $new($Dimension, wdth, hght);
}

int32_t XCheckboxPeer::getCheckboxSize($FontMetrics* fm) {
	return ($nc(fm)->getHeight() * 76 / 100) - 1;
}

void XCheckboxPeer::setBackground($Color* c) {
	updateMotifColors(c);
	$XComponentPeer::setBackground(c);
}

void XCheckboxPeer::layout() {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, getPeerSize());
	$var($Font, f, getPeerFont());
	$var($FontMetrics, fm, getFontMetrics(f));
	$var($String, text, this->label);
	this->checkBoxSize = getCheckboxSize(fm);
	this->cbX = $nc(XCheckboxPeer::borderInsets)->left + XCheckboxPeer::checkBoxInsetFromText;
	this->cbY = $nc(size)->height / 2 - this->checkBoxSize / 2;
	int32_t minTextX = $nc(XCheckboxPeer::borderInsets)->left + 2 * XCheckboxPeer::checkBoxInsetFromText + this->checkBoxSize;
	$nc(this->textRect)->width = $nc(fm)->stringWidth(text == nullptr ? ""_s : text);
	$nc(this->textRect)->height = fm->getHeight();
	$nc(this->textRect)->x = $Math::max(minTextX, size->width / 2 - $nc(this->textRect)->width / 2);
	$nc(this->textRect)->y = (size->height - $nc(this->textRect)->height) / 2;
	$nc(this->focusRect)->x = $nc(XCheckboxPeer::focusInsets)->left;
	$nc(this->focusRect)->y = $nc(XCheckboxPeer::focusInsets)->top;
	$nc(this->focusRect)->width = size->width - ($nc(XCheckboxPeer::focusInsets)->left + $nc(XCheckboxPeer::focusInsets)->right) - 1;
	$nc(this->focusRect)->height = size->height - ($nc(XCheckboxPeer::focusInsets)->top + $nc(XCheckboxPeer::focusInsets)->bottom) - 1;
	double fsize = (double)this->checkBoxSize;
	$set(this, myCheckMark, $nc($($AffineTransform::getScaleInstance($div(fsize, XCheckboxPeer::MASTER_SIZE), $div(fsize, XCheckboxPeer::MASTER_SIZE))))->createTransformedShape(XCheckboxPeer::MASTER_CHECKMARK));
}

void XCheckboxPeer::paintPeer($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, getPeerSize());
	$var($Font, f, getPeerFont());
	flush();
	$nc(g)->setColor($(getPeerBackground()));
	g->fillRect(0, 0, $nc(size)->width, size->height);
	if (this->label != nullptr) {
		g->setFont(f);
		paintText(g, this->textRect, this->label);
	}
	if (hasFocus()) {
		paintFocus(g, $nc(this->focusRect)->x, $nc(this->focusRect)->y, $nc(this->focusRect)->width, $nc(this->focusRect)->height);
	}
	if (this->checkBoxGroup == nullptr) {
		paintCheckbox(g, this->cbX, this->cbY, this->checkBoxSize, this->checkBoxSize);
	} else {
		paintRadioButton(g, this->cbX, this->cbY, this->checkBoxSize, this->checkBoxSize);
	}
	flush();
}

void XCheckboxPeer::paintCheckbox($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	bool useBufferedImage = false;
	$var($BufferedImage, buffer, nullptr);
	$var($Graphics2D, g2, nullptr);
	int32_t rx = x;
	int32_t ry = y;
	if (!($instanceOf($Graphics2D, g))) {
		$assign(buffer, $nc(this->graphicsConfig)->createCompatibleImage(w, h));
		$assign(g2, $nc(buffer)->createGraphics());
		useBufferedImage = true;
		rx = 0;
		ry = 0;
	} else {
		$assign(g2, $cast($Graphics2D, g));
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			drawMotif3DRect(g2, rx, ry, w - 1, h - 1, this->armed | this->selected);
			$nc(g2)->setColor((this->armed | this->selected) ? this->selectColor : $(getPeerBackground()));
			g2->fillRect(rx + 1, ry + 1, w - 2, h - 2);
			if (this->armed | this->selected) {
				g2->setColor($(getPeerForeground()));
				$var($AffineTransform, af, g2->getTransform());
				g2->setTransform($($AffineTransform::getTranslateInstance((double)rx, (double)ry)));
				g2->fill(this->myCheckMark);
				g2->setTransform(af);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (useBufferedImage) {
				$nc(g2)->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (useBufferedImage) {
		$nc(g)->drawImage(buffer, x, y, nullptr);
	}
}

void XCheckboxPeer::paintRadioButton($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(g)->setColor((this->armed | this->selected) ? this->darkShadow : this->lightShadow);
	g->drawArc(x - 1, y - 1, w + 2, h + 2, 45, 180);
	g->setColor((this->armed | this->selected) ? this->lightShadow : this->darkShadow);
	g->drawArc(x - 1, y - 1, w + 2, h + 2, 45, -180);
	if (this->armed | this->selected) {
		g->setColor(this->selectColor);
		g->fillArc(x + 1, y + 1, w - 1, h - 1, 0, 360);
	}
}

void XCheckboxPeer::paintText($Graphics* g, $Rectangle* textRect, $String* text) {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, $nc(g)->getFontMetrics());
	int32_t mnemonicIndex = -1;
	if (isEnabled()) {
		g->setColor($(getPeerForeground()));
		$BasicGraphicsUtils::drawStringUnderlineCharAt(g, text, mnemonicIndex, $nc(textRect)->x, textRect->y + $nc(fm)->getAscent());
	} else {
		g->setColor($($nc($(getPeerBackground()))->brighter()));
		$BasicGraphicsUtils::drawStringUnderlineCharAt(g, text, mnemonicIndex, $nc(textRect)->x, textRect->y + $nc(fm)->getAscent());
		g->setColor($($nc($(getPeerBackground()))->darker()));
		$BasicGraphicsUtils::drawStringUnderlineCharAt(g, text, mnemonicIndex, $nc(textRect)->x - 1, textRect->y + $nc(fm)->getAscent() - 1);
	}
}

void XCheckboxPeer::paintFocus($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(g)->setColor(this->focusColor);
	g->drawRect(x, y, w, h);
}

void XCheckboxPeer::setState(bool state) {
	if (this->selected != state) {
		this->selected = state;
		repaint();
	}
}

void XCheckboxPeer::setCheckboxGroup($CheckboxGroup* g) {
	if (!$Objects::equals(g, this->checkBoxGroup)) {
		$set(this, checkBoxGroup, g);
		repaint();
	}
}

void XCheckboxPeer::action(bool state) {
	$useLocalCurrentObjectStackCache();
	$var($Checkbox, cb, $cast($Checkbox, this->target));
	bool newState = state;
	$XToolkit::executeOnEventHandlerThread(cb, $$new($XCheckboxPeer$1, this, cb, newState));
}

void XCheckboxPeer::notifyStateChanged(bool state) {
	$useLocalCurrentObjectStackCache();
	$var($Checkbox, cb, $cast($Checkbox, this->target));
	$var($ItemEvent, e, $new($ItemEvent, cb, $ItemEvent::ITEM_STATE_CHANGED, $($nc(cb)->getLabel()), state ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED));
	postEvent(e);
}

void clinit$XCheckboxPeer($Class* class$) {
	$useLocalCurrentObjectStackCache();
	XCheckboxPeer::MASTER_SIZE = 128.0;
	$assignStatic(XCheckboxPeer::log, $PlatformLogger::getLogger("sun.awt.X11.XCheckboxPeer"_s));
	$assignStatic(XCheckboxPeer::focusInsets, $new($Insets, 0, 0, 0, 0));
	$assignStatic(XCheckboxPeer::borderInsets, $new($Insets, 2, 2, 2, 2));
	$assignStatic(XCheckboxPeer::MASTER_CHECKMARK, $new($Polygon, $$new($ints, {
		1,
		25,
		56,
		124,
		124,
		85,
		64
	}), $$new($ints, {
		59,
		35,
		67,
		0,
		12,
		66,
		123
	}), 7));
}

XCheckboxPeer::XCheckboxPeer() {
}

$Class* XCheckboxPeer::load$($String* name, bool initialize) {
	$loadClass(XCheckboxPeer, name, initialize, &_XCheckboxPeer_ClassInfo_, clinit$XCheckboxPeer, allocate$XCheckboxPeer);
	return class$;
}

$Class* XCheckboxPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun