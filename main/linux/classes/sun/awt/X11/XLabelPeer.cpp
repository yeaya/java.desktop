#include <sun/awt/X11/XLabelPeer.h>

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
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef CENTER
#undef LEFT
#undef RIGHT
#undef TEXT_XPAD
#undef TEXT_YPAD

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
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XLabelPeer_FieldInfo_[] = {
	{"TEXT_XPAD", "I", nullptr, $STATIC | $FINAL, $constField(XLabelPeer, TEXT_XPAD)},
	{"TEXT_YPAD", "I", nullptr, $STATIC | $FINAL, $constField(XLabelPeer, TEXT_YPAD)},
	{"label", "Ljava/lang/String;", nullptr, 0, $field(XLabelPeer, label)},
	{"alignment", "I", nullptr, 0, $field(XLabelPeer, alignment)},
	{"cachedFontMetrics", "Ljava/awt/FontMetrics;", nullptr, 0, $field(XLabelPeer, cachedFontMetrics)},
	{"oldfont", "Ljava/awt/Font;", nullptr, 0, $field(XLabelPeer, oldfont)},
	{}
};

$MethodInfo _XLabelPeer_MethodInfo_[] = {
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
	{"<init>", "(Ljava/awt/Label;)V", nullptr, 0, $method(static_cast<void(XLabelPeer::*)($Label*)>(&XLabelPeer::init$))},
	{"getFontMetrics", "()Ljava/awt/FontMetrics;", nullptr, 0},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintPeer", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"setAlignment", "(I)V", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XLabelPeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XLabelPeer",
	"sun.awt.X11.XComponentPeer",
	"java.awt.peer.LabelPeer",
	_XLabelPeer_FieldInfo_,
	_XLabelPeer_MethodInfo_
};

$Object* allocate$XLabelPeer($Class* clazz) {
	return $of($alloc(XLabelPeer));
}

void XLabelPeer::reparent($ContainerPeer* newNativeParent) {
	this->$XComponentPeer::reparent(newNativeParent);
}

bool XLabelPeer::isReparentSupported() {
	 return this->$XComponentPeer::isReparentSupported();
}

bool XLabelPeer::isObscured() {
	 return this->$XComponentPeer::isObscured();
}

bool XLabelPeer::canDetermineObscurity() {
	 return this->$XComponentPeer::canDetermineObscurity();
}

bool XLabelPeer::isFocusable() {
	 return this->$XComponentPeer::isFocusable();
}

bool XLabelPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void XLabelPeer::setVisible(bool b) {
	this->$XComponentPeer::setVisible(b);
}

void XLabelPeer::setEnabled(bool value) {
	this->$XComponentPeer::setEnabled(value);
}

void XLabelPeer::paint($Graphics* g) {
	this->$XComponentPeer::paint(g);
}

$Graphics* XLabelPeer::getGraphics() {
	 return this->$XComponentPeer::getGraphics();
}

void XLabelPeer::print($Graphics* g) {
	this->$XComponentPeer::print(g);
}

void XLabelPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$XComponentPeer::setBounds(x, y, width, height, op);
}

void XLabelPeer::coalescePaintEvent($PaintEvent* e) {
	this->$XComponentPeer::coalescePaintEvent(e);
}

void XLabelPeer::handleEvent($AWTEvent* e) {
	this->$XComponentPeer::handleEvent(e);
}

$Dimension* XLabelPeer::getPreferredSize() {
	 return this->$XComponentPeer::getPreferredSize();
}

void XLabelPeer::layout() {
	this->$XComponentPeer::layout();
}

void XLabelPeer::setBackground($Color* c) {
	this->$XComponentPeer::setBackground(c);
}

void XLabelPeer::setForeground($Color* c) {
	this->$XComponentPeer::setForeground(c);
}

$FontMetrics* XLabelPeer::getFontMetrics($Font* font) {
	 return this->$XComponentPeer::getFontMetrics(font);
}

void XLabelPeer::setFont($Font* f) {
	this->$XComponentPeer::setFont(f);
}

void XLabelPeer::updateCursorImmediately() {
	this->$XComponentPeer::updateCursorImmediately();
}

$Image* XLabelPeer::createImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createImage(width, height);
}

$VolatileImage* XLabelPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createVolatileImage(width, height);
}

bool XLabelPeer::handlesWheelScrolling() {
	 return this->$XComponentPeer::handlesWheelScrolling();
}

void XLabelPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XComponentPeer::createBuffers(numBuffers, caps);
}

void XLabelPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* XLabelPeer::getBackBuffer() {
	 return this->$XComponentPeer::getBackBuffer();
}

void XLabelPeer::destroyBuffers() {
	this->$XComponentPeer::destroyBuffers();
}

void XLabelPeer::setZOrder($ComponentPeer* above) {
	this->$XComponentPeer::setZOrder(above);
}

void XLabelPeer::applyShape($Region* shape) {
	this->$XComponentPeer::applyShape(shape);
}

bool XLabelPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XComponentPeer::updateGraphicsData(gc);
}

$Point* XLabelPeer::getLocationOnScreen() {
	 return this->$XComponentPeer::getLocationOnScreen();
}

void XLabelPeer::dispose() {
	this->$XComponentPeer::dispose();
}

$ColorModel* XLabelPeer::getColorModel() {
	 return this->$XComponentPeer::getColorModel();
}

$GraphicsConfiguration* XLabelPeer::getGraphicsConfiguration() {
	 return this->$XComponentPeer::getGraphicsConfiguration();
}

$String* XLabelPeer::toString() {
	 return this->$XComponentPeer::toString();
}

int32_t XLabelPeer::hashCode() {
	 return this->$XComponentPeer::hashCode();
}

bool XLabelPeer::equals(Object$* arg0) {
	 return this->$XComponentPeer::equals(arg0);
}

$Object* XLabelPeer::clone() {
	 return this->$XComponentPeer::clone();
}

void XLabelPeer::finalize() {
	this->$XComponentPeer::finalize();
}

$FontMetrics* XLabelPeer::getFontMetrics() {
	if (this->cachedFontMetrics != nullptr) {
		return this->cachedFontMetrics;
	} else {
		return getFontMetrics($(getPeerFont()));
	}
}

void XLabelPeer::preInit($XCreateWindowParams* params) {
	$XComponentPeer::preInit(params);
	$var($Label, target, $cast($Label, this->target));
	$set(this, label, $nc(target)->getText());
	if (this->label == nullptr) {
		$set(this, label, ""_s);
	}
	this->alignment = target->getAlignment();
}

void XLabelPeer::init$($Label* target) {
	$XComponentPeer::init$(static_cast<$Component*>(target));
}

$Dimension* XLabelPeer::getMinimumSize() {
	$var($FontMetrics, fm, getFontMetrics());
	int32_t w = 0;
	try {
		w = $nc(fm)->stringWidth(this->label);
	} catch ($NullPointerException& e) {
		w = 0;
	}
	int32_t var$0 = $nc(fm)->getAscent();
	return $new($Dimension, w + XLabelPeer::TEXT_XPAD, var$0 + fm->getMaxDescent() + XLabelPeer::TEXT_YPAD);
}

void XLabelPeer::paintPeer($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	int32_t textX = 0;
	int32_t textY = 0;
	$nc(g)->setColor($(getPeerBackground()));
	g->fillRect(0, 0, this->width, this->height);
	$var($Font, f, getPeerFont());
	g->setFont(f);
	$var($FontMetrics, fm, g->getFontMetrics());
	if (this->cachedFontMetrics == nullptr) {
		$set(this, cachedFontMetrics, fm);
	} else if (this->oldfont != f) {
		$set(this, cachedFontMetrics, fm);
	}
	switch (this->alignment) {
	case $Label::LEFT:
		{
			textX = 2;
			int32_t var$0 = this->height + $nc(fm)->getMaxAscent();
			textY = (var$0 - fm->getMaxDescent()) / 2;
			break;
		}
	case $Label::RIGHT:
		{
			textX = this->width - ($nc(fm)->stringWidth(this->label) + 2);
			int32_t var$1 = this->height + $nc(fm)->getMaxAscent();
			textY = (var$1 - fm->getMaxDescent()) / 2;
			break;
		}
	case $Label::CENTER:
		{
			textX = (this->width - $nc(fm)->stringWidth(this->label)) / 2;
			int32_t var$2 = this->height + $nc(fm)->getMaxAscent();
			textY = (var$2 - fm->getMaxDescent()) / 2;
			break;
		}
	}
	if (isEnabled()) {
		g->setColor($(getPeerForeground()));
		g->drawString(this->label, textX, textY);
	} else {
		g->setColor($($nc($(getPeerBackground()))->brighter()));
		g->drawString(this->label, textX, textY);
		g->setColor($($nc($(getPeerBackground()))->darker()));
		g->drawString(this->label, textX - 1, textY - 1);
	}
}

void XLabelPeer::setText($String* label$renamed) {
	$var($String, label, label$renamed);
	if (label == nullptr) {
		$assign(label, ""_s);
	}
	if (!$nc(label)->equals(this->label)) {
		$set(this, label, label);
		repaint();
	}
}

void XLabelPeer::setAlignment(int32_t alignment) {
	if (this->alignment != alignment) {
		this->alignment = alignment;
		repaint();
	}
}

XLabelPeer::XLabelPeer() {
}

$Class* XLabelPeer::load$($String* name, bool initialize) {
	$loadClass(XLabelPeer, name, initialize, &_XLabelPeer_ClassInfo_, allocate$XLabelPeer);
	return class$;
}

$Class* XLabelPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun