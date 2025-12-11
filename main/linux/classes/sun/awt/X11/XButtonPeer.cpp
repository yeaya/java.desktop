#include <sun/awt/X11/XButtonPeer.h>

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
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/SystemColor.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <javax/swing/Icon.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef CENTER
#undef KEY_PRESSED
#undef KEY_RELEASED
#undef MOUSE_ENTERED
#undef MOUSE_EXITED
#undef MOUSE_PRESSED
#undef MOUSE_RELEASED
#undef VK_SPACE

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
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $SystemColor = ::java::awt::SystemColor;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XButtonPeer_FieldInfo_[] = {
	{"pressed", "Z", nullptr, $PRIVATE, $field(XButtonPeer, pressed)},
	{"armed", "Z", nullptr, $PRIVATE, $field(XButtonPeer, armed)},
	{"focusInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(XButtonPeer, focusInsets)},
	{"borderInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(XButtonPeer, borderInsets)},
	{"contentAreaInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(XButtonPeer, contentAreaInsets)},
	{"propertyPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XButtonPeer, propertyPrefix)},
	{"focusColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(XButtonPeer, focusColor)},
	{"disposed", "Z", nullptr, $PRIVATE, $field(XButtonPeer, disposed)},
	{"label", "Ljava/lang/String;", nullptr, 0, $field(XButtonPeer, label)},
	{}
};

$MethodInfo _XButtonPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC},
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
	{"<init>", "(Ljava/awt/Button;)V", nullptr, $PUBLIC, $method(static_cast<void(XButtonPeer::*)($Button*)>(&XButtonPeer::init$))},
	{"action", "(JI)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"handleJavaKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"handleJavaMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintButtonPressed", "(Ljava/awt/Graphics;Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"paintFocus", "(Ljava/awt/Graphics;IIII)V", nullptr, $PROTECTED},
	{"paintPeer", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"paintText", "(Ljava/awt/Graphics;Ljava/awt/Component;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XButtonPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XButtonPeer",
	"sun.awt.X11.XComponentPeer",
	"java.awt.peer.ButtonPeer",
	_XButtonPeer_FieldInfo_,
	_XButtonPeer_MethodInfo_
};

$Object* allocate$XButtonPeer($Class* clazz) {
	return $of($alloc(XButtonPeer));
}

void XButtonPeer::reparent($ContainerPeer* newNativeParent) {
	this->$XComponentPeer::reparent(newNativeParent);
}

bool XButtonPeer::isReparentSupported() {
	 return this->$XComponentPeer::isReparentSupported();
}

bool XButtonPeer::isObscured() {
	 return this->$XComponentPeer::isObscured();
}

bool XButtonPeer::canDetermineObscurity() {
	 return this->$XComponentPeer::canDetermineObscurity();
}

bool XButtonPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void XButtonPeer::setVisible(bool b) {
	this->$XComponentPeer::setVisible(b);
}

void XButtonPeer::setEnabled(bool value) {
	this->$XComponentPeer::setEnabled(value);
}

void XButtonPeer::paint($Graphics* g) {
	this->$XComponentPeer::paint(g);
}

$Graphics* XButtonPeer::getGraphics() {
	 return this->$XComponentPeer::getGraphics();
}

void XButtonPeer::print($Graphics* g) {
	this->$XComponentPeer::print(g);
}

void XButtonPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$XComponentPeer::setBounds(x, y, width, height, op);
}

void XButtonPeer::coalescePaintEvent($PaintEvent* e) {
	this->$XComponentPeer::coalescePaintEvent(e);
}

void XButtonPeer::handleEvent($AWTEvent* e) {
	this->$XComponentPeer::handleEvent(e);
}

$Dimension* XButtonPeer::getPreferredSize() {
	 return this->$XComponentPeer::getPreferredSize();
}

void XButtonPeer::layout() {
	this->$XComponentPeer::layout();
}

void XButtonPeer::setForeground($Color* c) {
	this->$XComponentPeer::setForeground(c);
}

$FontMetrics* XButtonPeer::getFontMetrics($Font* font) {
	 return this->$XComponentPeer::getFontMetrics(font);
}

void XButtonPeer::setFont($Font* f) {
	this->$XComponentPeer::setFont(f);
}

void XButtonPeer::updateCursorImmediately() {
	this->$XComponentPeer::updateCursorImmediately();
}

$Image* XButtonPeer::createImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createImage(width, height);
}

$VolatileImage* XButtonPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createVolatileImage(width, height);
}

bool XButtonPeer::handlesWheelScrolling() {
	 return this->$XComponentPeer::handlesWheelScrolling();
}

void XButtonPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XComponentPeer::createBuffers(numBuffers, caps);
}

void XButtonPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* XButtonPeer::getBackBuffer() {
	 return this->$XComponentPeer::getBackBuffer();
}

void XButtonPeer::destroyBuffers() {
	this->$XComponentPeer::destroyBuffers();
}

void XButtonPeer::setZOrder($ComponentPeer* above) {
	this->$XComponentPeer::setZOrder(above);
}

void XButtonPeer::applyShape($Region* shape) {
	this->$XComponentPeer::applyShape(shape);
}

bool XButtonPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XComponentPeer::updateGraphicsData(gc);
}

$Point* XButtonPeer::getLocationOnScreen() {
	 return this->$XComponentPeer::getLocationOnScreen();
}

$ColorModel* XButtonPeer::getColorModel() {
	 return this->$XComponentPeer::getColorModel();
}

$GraphicsConfiguration* XButtonPeer::getGraphicsConfiguration() {
	 return this->$XComponentPeer::getGraphicsConfiguration();
}

$String* XButtonPeer::toString() {
	 return this->$XComponentPeer::toString();
}

int32_t XButtonPeer::hashCode() {
	 return this->$XComponentPeer::hashCode();
}

bool XButtonPeer::equals(Object$* arg0) {
	 return this->$XComponentPeer::equals(arg0);
}

$Object* XButtonPeer::clone() {
	 return this->$XComponentPeer::clone();
}

void XButtonPeer::finalize() {
	this->$XComponentPeer::finalize();
}

$String* XButtonPeer::propertyPrefix = nullptr;

$String* XButtonPeer::getPropertyPrefix() {
	return XButtonPeer::propertyPrefix;
}

void XButtonPeer::preInit($XCreateWindowParams* params) {
	$XComponentPeer::preInit(params);
	$set(this, borderInsets, $new($Insets, 2, 2, 2, 2));
	$set(this, focusInsets, $new($Insets, 0, 0, 0, 0));
	$set(this, contentAreaInsets, $new($Insets, 3, 3, 3, 3));
}

void XButtonPeer::init$($Button* target) {
	$XComponentPeer::init$(static_cast<$Component*>(target));
	$init($SystemColor);
	$set(this, focusColor, $SystemColor::windowText);
	this->disposed = false;
	this->pressed = false;
	this->armed = false;
	$set(this, label, $nc(target)->getLabel());
	updateMotifColors($(getPeerBackground()));
}

void XButtonPeer::dispose() {
	$synchronized(this->target) {
		this->disposed = true;
	}
	$XComponentPeer::dispose();
}

bool XButtonPeer::isFocusable() {
	return true;
}

void XButtonPeer::setLabel($String* label$renamed) {
	$var($String, label, label$renamed);
	if (label == nullptr) {
		$assign(label, ""_s);
	}
	if (!$nc(label)->equals(this->label)) {
		$set(this, label, label);
		repaint();
	}
}

void XButtonPeer::setBackground($Color* c) {
	updateMotifColors(c);
	$XComponentPeer::setBackground(c);
}

void XButtonPeer::handleJavaMouseEvent($MouseEvent* e) {
	$XComponentPeer::handleJavaMouseEvent(e);
	int32_t id = $nc(e)->getID();
	switch (id) {
	case $MouseEvent::MOUSE_PRESSED:
		{
			if ($XToolkit::isLeftMouseButton(e)) {
				$var($Button, b, $cast($Button, e->getSource()));
				int32_t var$0 = e->getX();
				if ($nc(b)->contains(var$0, e->getY())) {
					if (!isEnabled()) {
						return;
					}
					this->pressed = true;
					this->armed = true;
					repaint();
				}
			}
			break;
		}
	case $MouseEvent::MOUSE_RELEASED:
		{
			if ($XToolkit::isLeftMouseButton(e)) {
				if (this->armed) {
					int32_t modifiers = e->getModifiers();
					action(e->getWhen(), modifiers);
				}
				this->pressed = false;
				this->armed = false;
				repaint();
			}
			break;
		}
	case $MouseEvent::MOUSE_ENTERED:
		{
			if (this->pressed) {
				this->armed = true;
			}
			break;
		}
	case $MouseEvent::MOUSE_EXITED:
		{
			this->armed = false;
			break;
		}
	}
}

void XButtonPeer::action(int64_t when, int32_t modifiers) {
	$useLocalCurrentObjectStackCache();
	postEvent($$new($ActionEvent, this->target, $ActionEvent::ACTION_PERFORMED, $($nc(($cast($Button, this->target)))->getActionCommand()), when, modifiers));
}

void XButtonPeer::focusGained($FocusEvent* e) {
	$XComponentPeer::focusGained(e);
	repaint();
}

void XButtonPeer::focusLost($FocusEvent* e) {
	$XComponentPeer::focusLost(e);
	repaint();
}

void XButtonPeer::handleJavaKeyEvent($KeyEvent* e) {
	int32_t id = $nc(e)->getID();
	switch (id) {
	case $KeyEvent::KEY_PRESSED:
		{
			if (e->getKeyCode() == $KeyEvent::VK_SPACE) {
				this->pressed = true;
				this->armed = true;
				repaint();
				int32_t modifiers = e->getModifiers();
				action(e->getWhen(), modifiers);
			}
			break;
		}
	case $KeyEvent::KEY_RELEASED:
		{
			if (e->getKeyCode() == $KeyEvent::VK_SPACE) {
				this->pressed = false;
				this->armed = false;
				repaint();
			}
			break;
		}
	}
}

$Dimension* XButtonPeer::getMinimumSize() {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, getFontMetrics($(getPeerFont())));
	if (this->label == nullptr) {
		$set(this, label, ""_s);
	}
	int32_t var$0 = $nc(fm)->stringWidth(this->label) + 14;
	return $new($Dimension, var$0, fm->getHeight() + 8);
}

void XButtonPeer::paintPeer($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (!this->disposed) {
		$var($Dimension, size, getPeerSize());
		$nc(g)->setColor($(getPeerBackground()));
		g->fillRect(0, 0, $nc(size)->width, size->height);
		paintBorder(g, $nc(this->borderInsets)->left, $nc(this->borderInsets)->top, $nc(size)->width - ($nc(this->borderInsets)->left + $nc(this->borderInsets)->right), size->height - ($nc(this->borderInsets)->top + $nc(this->borderInsets)->bottom));
		$var($FontMetrics, fm, g->getFontMetrics());
		$var($Rectangle, textRect, nullptr);
		$var($Rectangle, iconRect, nullptr);
		$var($Rectangle, viewRect, nullptr);
		$assign(textRect, $new($Rectangle));
		$assign(viewRect, $new($Rectangle));
		$assign(iconRect, $new($Rectangle));
		viewRect->width = $nc(size)->width - ($nc(this->contentAreaInsets)->left + $nc(this->contentAreaInsets)->right);
		viewRect->height = size->height - ($nc(this->contentAreaInsets)->top + $nc(this->contentAreaInsets)->bottom);
		viewRect->x = $nc(this->contentAreaInsets)->left;
		viewRect->y = $nc(this->contentAreaInsets)->top;
		$var($String, llabel, (this->label != nullptr) ? this->label : ""_s);
		$var($String, text, $SwingUtilities::layoutCompoundLabel(fm, llabel, nullptr, $SwingConstants::CENTER, $SwingConstants::CENTER, $SwingConstants::CENTER, $SwingConstants::CENTER, viewRect, iconRect, textRect, 0));
		$var($Font, f, getPeerFont());
		g->setFont(f);
		if (this->pressed && this->armed) {
			paintButtonPressed(g, this->target);
		}
		paintText(g, this->target, textRect, text);
		if (hasFocus()) {
			paintFocus(g, $nc(this->focusInsets)->left, $nc(this->focusInsets)->top, size->width - ($nc(this->focusInsets)->left + $nc(this->focusInsets)->right) - 1, size->height - ($nc(this->focusInsets)->top + $nc(this->focusInsets)->bottom) - 1);
		}
	}
	flush();
}

void XButtonPeer::paintBorder($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	drawMotif3DRect(g, x, y, w - 1, h - 1, this->pressed);
}

void XButtonPeer::paintFocus($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(g)->setColor(this->focusColor);
	g->drawRect(x, y, w, h);
}

void XButtonPeer::paintButtonPressed($Graphics* g, $Component* b) {
	$var($Dimension, size, getPeerSize());
	$nc(g)->setColor(this->selectColor);
	g->fillRect($nc(this->contentAreaInsets)->left, $nc(this->contentAreaInsets)->top, $nc(size)->width - ($nc(this->contentAreaInsets)->left + $nc(this->contentAreaInsets)->right), size->height - ($nc(this->contentAreaInsets)->top + $nc(this->contentAreaInsets)->bottom));
}

void XButtonPeer::paintText($Graphics* g, $Component* c, $Rectangle* textRect, $String* text) {
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

XButtonPeer::XButtonPeer() {
}

void clinit$XButtonPeer($Class* class$) {
	$assignStatic(XButtonPeer::propertyPrefix, "Button."_s);
}

$Class* XButtonPeer::load$($String* name, bool initialize) {
	$loadClass(XButtonPeer, name, initialize, &_XButtonPeer_ClassInfo_, clinit$XButtonPeer, allocate$XButtonPeer);
	return class$;
}

$Class* XButtonPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun