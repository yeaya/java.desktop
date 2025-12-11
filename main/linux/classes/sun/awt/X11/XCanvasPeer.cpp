#include <sun/awt/X11/XCanvasPeer.h>

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
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XCreateWindowParams.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/awt/X11GraphicsDevice.h>
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
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
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
using $SunToolkit = ::sun::awt::SunToolkit;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XCreateWindowParams = ::sun::awt::X11::XCreateWindowParams;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $X11GraphicsDevice = ::sun::awt::X11GraphicsDevice;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XCanvasPeer_FieldInfo_[] = {
	{"eraseBackgroundDisabled", "Z", nullptr, $PRIVATE, $field(XCanvasPeer, eraseBackgroundDisabled)},
	{}
};

$MethodInfo _XCanvasPeer_MethodInfo_[] = {
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
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XCanvasPeer::*)()>(&XCanvasPeer::init$))},
	{"<init>", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0, $method(static_cast<void(XCanvasPeer::*)($XCreateWindowParams*)>(&XCanvasPeer::init$))},
	{"<init>", "(Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(XCanvasPeer::*)($Component*)>(&XCanvasPeer::init$))},
	{"disableBackgroundErase", "()V", nullptr, $PUBLIC},
	{"doEraseBackground", "()Z", nullptr, $PROTECTED},
	{"getAppropriateGraphicsConfiguration", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"preInit", "(Lsun/awt/X11/XCreateWindowParams;)V", nullptr, 0},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"shouldFocusOnClick", "()Z", nullptr, $PROTECTED},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XCanvasPeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XCanvasPeer",
	"sun.awt.X11.XComponentPeer",
	"java.awt.peer.CanvasPeer",
	_XCanvasPeer_FieldInfo_,
	_XCanvasPeer_MethodInfo_
};

$Object* allocate$XCanvasPeer($Class* clazz) {
	return $of($alloc(XCanvasPeer));
}

void XCanvasPeer::reparent($ContainerPeer* newNativeParent) {
	this->$XComponentPeer::reparent(newNativeParent);
}

bool XCanvasPeer::isReparentSupported() {
	 return this->$XComponentPeer::isReparentSupported();
}

bool XCanvasPeer::isObscured() {
	 return this->$XComponentPeer::isObscured();
}

bool XCanvasPeer::canDetermineObscurity() {
	 return this->$XComponentPeer::canDetermineObscurity();
}

bool XCanvasPeer::isFocusable() {
	 return this->$XComponentPeer::isFocusable();
}

bool XCanvasPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void XCanvasPeer::setVisible(bool b) {
	this->$XComponentPeer::setVisible(b);
}

void XCanvasPeer::setEnabled(bool value) {
	this->$XComponentPeer::setEnabled(value);
}

void XCanvasPeer::paint($Graphics* g) {
	this->$XComponentPeer::paint(g);
}

$Graphics* XCanvasPeer::getGraphics() {
	 return this->$XComponentPeer::getGraphics();
}

void XCanvasPeer::print($Graphics* g) {
	this->$XComponentPeer::print(g);
}

void XCanvasPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$XComponentPeer::setBounds(x, y, width, height, op);
}

void XCanvasPeer::coalescePaintEvent($PaintEvent* e) {
	this->$XComponentPeer::coalescePaintEvent(e);
}

void XCanvasPeer::handleEvent($AWTEvent* e) {
	this->$XComponentPeer::handleEvent(e);
}

$Dimension* XCanvasPeer::getMinimumSize() {
	 return this->$XComponentPeer::getMinimumSize();
}

$Dimension* XCanvasPeer::getPreferredSize() {
	 return this->$XComponentPeer::getPreferredSize();
}

void XCanvasPeer::layout() {
	this->$XComponentPeer::layout();
}

void XCanvasPeer::setBackground($Color* c) {
	this->$XComponentPeer::setBackground(c);
}

void XCanvasPeer::setForeground($Color* c) {
	this->$XComponentPeer::setForeground(c);
}

$FontMetrics* XCanvasPeer::getFontMetrics($Font* font) {
	 return this->$XComponentPeer::getFontMetrics(font);
}

void XCanvasPeer::setFont($Font* f) {
	this->$XComponentPeer::setFont(f);
}

void XCanvasPeer::updateCursorImmediately() {
	this->$XComponentPeer::updateCursorImmediately();
}

$Image* XCanvasPeer::createImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createImage(width, height);
}

$VolatileImage* XCanvasPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createVolatileImage(width, height);
}

bool XCanvasPeer::handlesWheelScrolling() {
	 return this->$XComponentPeer::handlesWheelScrolling();
}

void XCanvasPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XComponentPeer::createBuffers(numBuffers, caps);
}

void XCanvasPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* XCanvasPeer::getBackBuffer() {
	 return this->$XComponentPeer::getBackBuffer();
}

void XCanvasPeer::destroyBuffers() {
	this->$XComponentPeer::destroyBuffers();
}

void XCanvasPeer::setZOrder($ComponentPeer* above) {
	this->$XComponentPeer::setZOrder(above);
}

void XCanvasPeer::applyShape($Region* shape) {
	this->$XComponentPeer::applyShape(shape);
}

bool XCanvasPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XComponentPeer::updateGraphicsData(gc);
}

$Point* XCanvasPeer::getLocationOnScreen() {
	 return this->$XComponentPeer::getLocationOnScreen();
}

void XCanvasPeer::dispose() {
	this->$XComponentPeer::dispose();
}

$ColorModel* XCanvasPeer::getColorModel() {
	 return this->$XComponentPeer::getColorModel();
}

$GraphicsConfiguration* XCanvasPeer::getGraphicsConfiguration() {
	 return this->$XComponentPeer::getGraphicsConfiguration();
}

$String* XCanvasPeer::toString() {
	 return this->$XComponentPeer::toString();
}

int32_t XCanvasPeer::hashCode() {
	 return this->$XComponentPeer::hashCode();
}

bool XCanvasPeer::equals(Object$* arg0) {
	 return this->$XComponentPeer::equals(arg0);
}

$Object* XCanvasPeer::clone() {
	 return this->$XComponentPeer::clone();
}

void XCanvasPeer::finalize() {
	this->$XComponentPeer::finalize();
}

void XCanvasPeer::init$() {
	$XComponentPeer::init$();
}

void XCanvasPeer::init$($XCreateWindowParams* params) {
	$XComponentPeer::init$(params);
}

void XCanvasPeer::init$($Component* target) {
	$XComponentPeer::init$(target);
}

void XCanvasPeer::preInit($XCreateWindowParams* params) {
	$XComponentPeer::preInit(params);
	if ($SunToolkit::getSunAwtNoerasebackground()) {
		disableBackgroundErase();
	}
}

$GraphicsConfiguration* XCanvasPeer::getAppropriateGraphicsConfiguration($GraphicsConfiguration* gc) {
	$useLocalCurrentObjectStackCache();
	if (this->graphicsConfig == nullptr || gc == nullptr) {
		return gc;
	}
	int32_t screenNum = $nc(($cast($X11GraphicsDevice, $($nc(gc)->getDevice()))))->getScreen();
	$var($X11GraphicsConfig, parentgc, nullptr);
	int32_t visual = $nc(this->graphicsConfig)->getVisual();
	$var($X11GraphicsDevice, newDev, $cast($X11GraphicsDevice, $nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getScreenDevices()))->get(screenNum)));
	for (int32_t i = 0; i < $nc(newDev)->getNumConfigs(screenNum); ++i) {
		if (visual == newDev->getConfigVisualId(i, screenNum)) {
			$set(this, graphicsConfig, $cast($X11GraphicsConfig, $nc($(newDev->getConfigurations()))->get(i)));
			break;
		}
	}
	if (this->graphicsConfig == nullptr) {
		$set(this, graphicsConfig, $cast($X11GraphicsConfig, $nc($nc($($nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getScreenDevices()))->get(screenNum))->getDefaultConfiguration()));
	}
	return this->graphicsConfig;
}

bool XCanvasPeer::shouldFocusOnClick() {
	return true;
}

void XCanvasPeer::disableBackgroundErase() {
	this->eraseBackgroundDisabled = true;
}

bool XCanvasPeer::doEraseBackground() {
	return !this->eraseBackgroundDisabled;
}

XCanvasPeer::XCanvasPeer() {
}

$Class* XCanvasPeer::load$($String* name, bool initialize) {
	$loadClass(XCanvasPeer, name, initialize, &_XCanvasPeer_ClassInfo_, allocate$XCanvasPeer);
	return class$;
}

$Class* XCanvasPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun