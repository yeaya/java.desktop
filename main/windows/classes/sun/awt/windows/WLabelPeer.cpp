#include <sun/awt/windows/WLabelPeer.h>

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
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef LEFT

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
using $LabelPeer = ::java::awt::peer::LabelPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WLabelPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $NATIVE},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Label;)V", nullptr, 0, $method(static_cast<void(WLabelPeer::*)($Label*)>(&WLabelPeer::init$))},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $NATIVE},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"initialize", "()V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"lazyPaint", "()V", nullptr, $NATIVE, $method(static_cast<void(WLabelPeer::*)()>(&WLabelPeer::lazyPaint))},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"setAlignment", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $NATIVE},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"shouldClearRectBeforePaint", "()Z", nullptr, $PUBLIC},
	{"start", "()V", nullptr, $SYNCHRONIZED},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_create 23
#define _METHOD_INDEX_lazyPaint 30
#define _METHOD_INDEX_setAlignment 35
#define _METHOD_INDEX_setText 41

$ClassInfo _WLabelPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WLabelPeer",
	"sun.awt.windows.WComponentPeer",
	"java.awt.peer.LabelPeer",
	nullptr,
	_WLabelPeer_MethodInfo_
};

$Object* allocate$WLabelPeer($Class* clazz) {
	return $of($alloc(WLabelPeer));
}

bool WLabelPeer::isObscured() {
	 return this->$WComponentPeer::isObscured();
}

bool WLabelPeer::canDetermineObscurity() {
	 return this->$WComponentPeer::canDetermineObscurity();
}

$Point* WLabelPeer::getLocationOnScreen() {
	 return this->$WComponentPeer::getLocationOnScreen();
}

void WLabelPeer::setVisible(bool b) {
	this->$WComponentPeer::setVisible(b);
}

void WLabelPeer::setEnabled(bool b) {
	this->$WComponentPeer::setEnabled(b);
}

void WLabelPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WComponentPeer::setBounds(x, y, width, height, op);
}

void WLabelPeer::paint($Graphics* g) {
	this->$WComponentPeer::paint(g);
}

void WLabelPeer::print($Graphics* g) {
	this->$WComponentPeer::print(g);
}

void WLabelPeer::coalescePaintEvent($PaintEvent* e) {
	this->$WComponentPeer::coalescePaintEvent(e);
}

void WLabelPeer::handleEvent($AWTEvent* e) {
	this->$WComponentPeer::handleEvent(e);
}

$Dimension* WLabelPeer::getPreferredSize() {
	 return this->$WComponentPeer::getPreferredSize();
}

void WLabelPeer::layout() {
	this->$WComponentPeer::layout();
}

bool WLabelPeer::isFocusable() {
	 return this->$WComponentPeer::isFocusable();
}

$GraphicsConfiguration* WLabelPeer::getGraphicsConfiguration() {
	 return this->$WComponentPeer::getGraphicsConfiguration();
}

bool WLabelPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WComponentPeer::updateGraphicsData(gc);
}

$ColorModel* WLabelPeer::getColorModel() {
	 return this->$WComponentPeer::getColorModel();
}

$Graphics* WLabelPeer::getGraphics() {
	 return this->$WComponentPeer::getGraphics();
}

$FontMetrics* WLabelPeer::getFontMetrics($Font* font) {
	 return this->$WComponentPeer::getFontMetrics(font);
}

void WLabelPeer::setForeground($Color* c) {
	this->$WComponentPeer::setForeground(c);
}

void WLabelPeer::setBackground($Color* c) {
	this->$WComponentPeer::setBackground(c);
}

void WLabelPeer::setFont($Font* f) {
	this->$WComponentPeer::setFont(f);
}

void WLabelPeer::updateCursorImmediately() {
	this->$WComponentPeer::updateCursorImmediately();
}

bool WLabelPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WLabelPeer::createImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createImage(width, height);
}

$VolatileImage* WLabelPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createVolatileImage(width, height);
}

$String* WLabelPeer::toString() {
	 return this->$WComponentPeer::toString();
}

bool WLabelPeer::handlesWheelScrolling() {
	 return this->$WComponentPeer::handlesWheelScrolling();
}

void WLabelPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WComponentPeer::createBuffers(numBuffers, caps);
}

void WLabelPeer::destroyBuffers() {
	this->$WComponentPeer::destroyBuffers();
}

void WLabelPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WLabelPeer::getBackBuffer() {
	 return this->$WComponentPeer::getBackBuffer();
}

void WLabelPeer::reparent($ContainerPeer* newNativeParent) {
	this->$WComponentPeer::reparent(newNativeParent);
}

bool WLabelPeer::isReparentSupported() {
	 return this->$WComponentPeer::isReparentSupported();
}

void WLabelPeer::applyShape($Region* shape) {
	this->$WComponentPeer::applyShape(shape);
}

void WLabelPeer::setZOrder($ComponentPeer* above) {
	this->$WComponentPeer::setZOrder(above);
}

void WLabelPeer::dispose() {
	this->$WComponentPeer::dispose();
}

int32_t WLabelPeer::hashCode() {
	 return this->$WComponentPeer::hashCode();
}

bool WLabelPeer::equals(Object$* arg0) {
	 return this->$WComponentPeer::equals(arg0);
}

$Object* WLabelPeer::clone() {
	 return this->$WComponentPeer::clone();
}

void WLabelPeer::finalize() {
	this->$WComponentPeer::finalize();
}

$Dimension* WLabelPeer::getMinimumSize() {
	$var($FontMetrics, fm, getFontMetrics($($nc(($cast($Label, this->target)))->getFont())));
	$var($String, label, $nc(($cast($Label, this->target)))->getText());
	if (label == nullptr) {
		$assign(label, ""_s);
	}
	int32_t var$0 = $nc(fm)->stringWidth(label) + 14;
	return $new($Dimension, var$0, fm->getHeight() + 8);
}

void WLabelPeer::lazyPaint() {
	$prepareNative(WLabelPeer, lazyPaint, void);
	$invokeNative(WLabelPeer, lazyPaint);
	$finishNative();
}

void WLabelPeer::start() {
	$synchronized(this) {
		$WComponentPeer::start();
		lazyPaint();
	}
}

bool WLabelPeer::shouldClearRectBeforePaint() {
	return false;
}

void WLabelPeer::setText($String* label) {
	$prepareNative(WLabelPeer, setText, void, $String* label);
	$invokeNative(WLabelPeer, setText, label);
	$finishNative();
}

void WLabelPeer::setAlignment(int32_t alignment) {
	$prepareNative(WLabelPeer, setAlignment, void, int32_t alignment);
	$invokeNative(WLabelPeer, setAlignment, alignment);
	$finishNative();
}

void WLabelPeer::init$($Label* target) {
	$WComponentPeer::init$(target);
}

void WLabelPeer::create($WComponentPeer* parent) {
	$prepareNative(WLabelPeer, create, void, $WComponentPeer* parent);
	$invokeNative(WLabelPeer, create, parent);
	$finishNative();
}

void WLabelPeer::initialize() {
	$var($Label, l, $cast($Label, this->target));
	$var($String, txt, $nc(l)->getText());
	if (txt != nullptr) {
		setText(txt);
	}
	int32_t align = l->getAlignment();
	if (align != $Label::LEFT) {
		setAlignment(align);
	}
	$var($Color, bg, $nc(($cast($Component, this->target)))->getBackground());
	if (bg != nullptr) {
		setBackground(bg);
	}
	$WComponentPeer::initialize();
}

WLabelPeer::WLabelPeer() {
}

$Class* WLabelPeer::load$($String* name, bool initialize) {
	$loadClass(WLabelPeer, name, initialize, &_WLabelPeer_ClassInfo_, allocate$WLabelPeer);
	return class$;
}

$Class* WLabelPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun