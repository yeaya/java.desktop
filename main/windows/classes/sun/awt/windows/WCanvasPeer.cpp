#include <sun/awt/windows/WCanvasPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/PaintEventDispatcher.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/java2d/pipe/Region.h>
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
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $CanvasPeer = ::java::awt::peer::CanvasPeer;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PaintEventDispatcher = ::sun::awt::PaintEventDispatcher;
using $SunToolkit = ::sun::awt::SunToolkit;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WCanvasPeer_FieldInfo_[] = {
	{"eraseBackground", "Z", nullptr, $PRIVATE, $field(WCanvasPeer, eraseBackground)},
	{}
};

$MethodInfo _WCanvasPeer_MethodInfo_[] = {
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
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(WCanvasPeer::*)($Component*)>(&WCanvasPeer::init$))},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $NATIVE},
	{"disableBackgroundErase", "()V", nullptr, 0},
	{"getAppropriateGraphicsConfiguration", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"initialize", "()V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setNativeBackgroundErase", "(ZZ)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WCanvasPeer::*)(bool,bool)>(&WCanvasPeer::setNativeBackgroundErase))},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"shouldClearRectBeforePaint", "()Z", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_create 24
#define _METHOD_INDEX_setNativeBackgroundErase 41

$ClassInfo _WCanvasPeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WCanvasPeer",
	"sun.awt.windows.WComponentPeer",
	"java.awt.peer.CanvasPeer",
	_WCanvasPeer_FieldInfo_,
	_WCanvasPeer_MethodInfo_
};

$Object* allocate$WCanvasPeer($Class* clazz) {
	return $of($alloc(WCanvasPeer));
}

bool WCanvasPeer::isObscured() {
	 return this->$WComponentPeer::isObscured();
}

bool WCanvasPeer::canDetermineObscurity() {
	 return this->$WComponentPeer::canDetermineObscurity();
}

$Point* WCanvasPeer::getLocationOnScreen() {
	 return this->$WComponentPeer::getLocationOnScreen();
}

void WCanvasPeer::setVisible(bool b) {
	this->$WComponentPeer::setVisible(b);
}

void WCanvasPeer::setEnabled(bool b) {
	this->$WComponentPeer::setEnabled(b);
}

void WCanvasPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WComponentPeer::setBounds(x, y, width, height, op);
}

void WCanvasPeer::print($Graphics* g) {
	this->$WComponentPeer::print(g);
}

void WCanvasPeer::coalescePaintEvent($PaintEvent* e) {
	this->$WComponentPeer::coalescePaintEvent(e);
}

void WCanvasPeer::handleEvent($AWTEvent* e) {
	this->$WComponentPeer::handleEvent(e);
}

$Dimension* WCanvasPeer::getMinimumSize() {
	 return this->$WComponentPeer::getMinimumSize();
}

$Dimension* WCanvasPeer::getPreferredSize() {
	 return this->$WComponentPeer::getPreferredSize();
}

void WCanvasPeer::layout() {
	this->$WComponentPeer::layout();
}

bool WCanvasPeer::isFocusable() {
	 return this->$WComponentPeer::isFocusable();
}

$GraphicsConfiguration* WCanvasPeer::getGraphicsConfiguration() {
	 return this->$WComponentPeer::getGraphicsConfiguration();
}

bool WCanvasPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WComponentPeer::updateGraphicsData(gc);
}

$ColorModel* WCanvasPeer::getColorModel() {
	 return this->$WComponentPeer::getColorModel();
}

$Graphics* WCanvasPeer::getGraphics() {
	 return this->$WComponentPeer::getGraphics();
}

$FontMetrics* WCanvasPeer::getFontMetrics($Font* font) {
	 return this->$WComponentPeer::getFontMetrics(font);
}

void WCanvasPeer::setForeground($Color* c) {
	this->$WComponentPeer::setForeground(c);
}

void WCanvasPeer::setBackground($Color* c) {
	this->$WComponentPeer::setBackground(c);
}

void WCanvasPeer::setFont($Font* f) {
	this->$WComponentPeer::setFont(f);
}

void WCanvasPeer::updateCursorImmediately() {
	this->$WComponentPeer::updateCursorImmediately();
}

bool WCanvasPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WCanvasPeer::createImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createImage(width, height);
}

$VolatileImage* WCanvasPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createVolatileImage(width, height);
}

$String* WCanvasPeer::toString() {
	 return this->$WComponentPeer::toString();
}

bool WCanvasPeer::handlesWheelScrolling() {
	 return this->$WComponentPeer::handlesWheelScrolling();
}

void WCanvasPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WComponentPeer::createBuffers(numBuffers, caps);
}

void WCanvasPeer::destroyBuffers() {
	this->$WComponentPeer::destroyBuffers();
}

void WCanvasPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WCanvasPeer::getBackBuffer() {
	 return this->$WComponentPeer::getBackBuffer();
}

void WCanvasPeer::reparent($ContainerPeer* newNativeParent) {
	this->$WComponentPeer::reparent(newNativeParent);
}

bool WCanvasPeer::isReparentSupported() {
	 return this->$WComponentPeer::isReparentSupported();
}

void WCanvasPeer::applyShape($Region* shape) {
	this->$WComponentPeer::applyShape(shape);
}

void WCanvasPeer::setZOrder($ComponentPeer* above) {
	this->$WComponentPeer::setZOrder(above);
}

void WCanvasPeer::dispose() {
	this->$WComponentPeer::dispose();
}

int32_t WCanvasPeer::hashCode() {
	 return this->$WComponentPeer::hashCode();
}

bool WCanvasPeer::equals(Object$* arg0) {
	 return this->$WComponentPeer::equals(arg0);
}

$Object* WCanvasPeer::clone() {
	 return this->$WComponentPeer::clone();
}

void WCanvasPeer::finalize() {
	this->$WComponentPeer::finalize();
}

void WCanvasPeer::init$($Component* target) {
	$WComponentPeer::init$(target);
}

void WCanvasPeer::create($WComponentPeer* parent) {
	$prepareNative(WCanvasPeer, create, void, $WComponentPeer* parent);
	$invokeNative(WCanvasPeer, create, parent);
	$finishNative();
}

void WCanvasPeer::initialize() {
	$useLocalCurrentObjectStackCache();
	this->eraseBackground = !$SunToolkit::getSunAwtNoerasebackground();
	bool eraseBackgroundOnResize = $SunToolkit::getSunAwtErasebackgroundonresize();
	if (!$nc($($PaintEventDispatcher::getPaintEventDispatcher()))->shouldDoNativeBackgroundErase($cast($Component, this->target))) {
		this->eraseBackground = false;
	}
	setNativeBackgroundErase(this->eraseBackground, eraseBackgroundOnResize);
	$WComponentPeer::initialize();
	$var($Color, bg, $nc(($cast($Component, this->target)))->getBackground());
	if (bg != nullptr) {
		setBackground(bg);
	}
}

void WCanvasPeer::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, $nc(($cast($Component, this->target)))->getSize());
	if ($instanceOf($Graphics2D, g)) {
		$nc(g)->clearRect(0, 0, $nc(d)->width, d->height);
	} else {
		$nc(g)->setColor($($nc(($cast($Component, this->target)))->getBackground()));
		g->fillRect(0, 0, $nc(d)->width, d->height);
		g->setColor($($nc(($cast($Component, this->target)))->getForeground()));
	}
	$WComponentPeer::paint(g);
}

bool WCanvasPeer::shouldClearRectBeforePaint() {
	return this->eraseBackground;
}

void WCanvasPeer::disableBackgroundErase() {
	this->eraseBackground = false;
	setNativeBackgroundErase(false, false);
}

void WCanvasPeer::setNativeBackgroundErase(bool doErase, bool doEraseOnResize) {
	$prepareNative(WCanvasPeer, setNativeBackgroundErase, void, bool doErase, bool doEraseOnResize);
	$invokeNative(WCanvasPeer, setNativeBackgroundErase, doErase, doEraseOnResize);
	$finishNative();
}

$GraphicsConfiguration* WCanvasPeer::getAppropriateGraphicsConfiguration($GraphicsConfiguration* gc) {
	return gc;
}

WCanvasPeer::WCanvasPeer() {
}

$Class* WCanvasPeer::load$($String* name, bool initialize) {
	$loadClass(WCanvasPeer, name, initialize, &_WCanvasPeer_ClassInfo_, allocate$WCanvasPeer);
	return class$;
}

$Class* WCanvasPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun