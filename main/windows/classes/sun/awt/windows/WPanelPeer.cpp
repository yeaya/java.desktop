#include <sun/awt/windows/WPanelPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/SystemColor.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/SunGraphicsCallback$PaintHeavyweightComponentsCallback.h>
#include <sun/awt/SunGraphicsCallback$PrintHeavyweightComponentsCallback.h>
#include <sun/awt/SunGraphicsCallback.h>
#include <sun/awt/windows/WCanvasPeer.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef HEAVYWEIGHTS
#undef LIGHTWEIGHTS

using $ComponentArray = $Array<::java::awt::Component>;
using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $SystemColor = ::java::awt::SystemColor;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $PanelPeer = ::java::awt::peer::PanelPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphicsCallback = ::sun::awt::SunGraphicsCallback;
using $SunGraphicsCallback$PaintHeavyweightComponentsCallback = ::sun::awt::SunGraphicsCallback$PaintHeavyweightComponentsCallback;
using $SunGraphicsCallback$PrintHeavyweightComponentsCallback = ::sun::awt::SunGraphicsCallback$PrintHeavyweightComponentsCallback;
using $WCanvasPeer = ::sun::awt::windows::WCanvasPeer;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WPanelPeer_FieldInfo_[] = {
	{"insets_", "Ljava/awt/Insets;", nullptr, 0, $field(WPanelPeer, insets_)},
	{}
};

$MethodInfo _WPanelPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"*beginLayout", "()V", nullptr, $PUBLIC},
	{"*beginValidate", "()V", nullptr, $PUBLIC | $NATIVE},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*endLayout", "()V", nullptr, $PUBLIC},
	{"*endValidate", "()V", nullptr, $PUBLIC | $NATIVE},
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
	{"<init>", "(Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(WPanelPeer::*)($Component*)>(&WPanelPeer::init$))},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WPanelPeer::initIDs))},
	{"initialize", "()V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_initIDs 29

$ClassInfo _WPanelPeer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WPanelPeer",
	"sun.awt.windows.WCanvasPeer",
	"java.awt.peer.PanelPeer",
	_WPanelPeer_FieldInfo_,
	_WPanelPeer_MethodInfo_
};

$Object* allocate$WPanelPeer($Class* clazz) {
	return $of($alloc(WPanelPeer));
}

bool WPanelPeer::isObscured() {
	 return this->$WCanvasPeer::isObscured();
}

bool WPanelPeer::canDetermineObscurity() {
	 return this->$WCanvasPeer::canDetermineObscurity();
}

$Point* WPanelPeer::getLocationOnScreen() {
	 return this->$WCanvasPeer::getLocationOnScreen();
}

void WPanelPeer::setVisible(bool b) {
	this->$WCanvasPeer::setVisible(b);
}

void WPanelPeer::setEnabled(bool b) {
	this->$WCanvasPeer::setEnabled(b);
}

void WPanelPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WCanvasPeer::setBounds(x, y, width, height, op);
}

void WPanelPeer::coalescePaintEvent($PaintEvent* e) {
	this->$WCanvasPeer::coalescePaintEvent(e);
}

void WPanelPeer::handleEvent($AWTEvent* e) {
	this->$WCanvasPeer::handleEvent(e);
}

$Dimension* WPanelPeer::getMinimumSize() {
	 return this->$WCanvasPeer::getMinimumSize();
}

$Dimension* WPanelPeer::getPreferredSize() {
	 return this->$WCanvasPeer::getPreferredSize();
}

void WPanelPeer::layout() {
	this->$WCanvasPeer::layout();
}

bool WPanelPeer::isFocusable() {
	 return this->$WCanvasPeer::isFocusable();
}

$GraphicsConfiguration* WPanelPeer::getGraphicsConfiguration() {
	 return this->$WCanvasPeer::getGraphicsConfiguration();
}

bool WPanelPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WCanvasPeer::updateGraphicsData(gc);
}

$ColorModel* WPanelPeer::getColorModel() {
	 return this->$WCanvasPeer::getColorModel();
}

$Graphics* WPanelPeer::getGraphics() {
	 return this->$WCanvasPeer::getGraphics();
}

$FontMetrics* WPanelPeer::getFontMetrics($Font* font) {
	 return this->$WCanvasPeer::getFontMetrics(font);
}

void WPanelPeer::setForeground($Color* c) {
	this->$WCanvasPeer::setForeground(c);
}

void WPanelPeer::setBackground($Color* c) {
	this->$WCanvasPeer::setBackground(c);
}

void WPanelPeer::setFont($Font* f) {
	this->$WCanvasPeer::setFont(f);
}

void WPanelPeer::updateCursorImmediately() {
	this->$WCanvasPeer::updateCursorImmediately();
}

bool WPanelPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WCanvasPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WPanelPeer::createImage(int32_t width, int32_t height) {
	 return this->$WCanvasPeer::createImage(width, height);
}

$VolatileImage* WPanelPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WCanvasPeer::createVolatileImage(width, height);
}

$String* WPanelPeer::toString() {
	 return this->$WCanvasPeer::toString();
}

void WPanelPeer::beginLayout() {
	this->$WCanvasPeer::beginLayout();
}

void WPanelPeer::endLayout() {
	this->$WCanvasPeer::endLayout();
}

void WPanelPeer::beginValidate() {
	this->$WCanvasPeer::beginValidate();
}

void WPanelPeer::endValidate() {
	this->$WCanvasPeer::endValidate();
}

bool WPanelPeer::handlesWheelScrolling() {
	 return this->$WCanvasPeer::handlesWheelScrolling();
}

void WPanelPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WCanvasPeer::createBuffers(numBuffers, caps);
}

void WPanelPeer::destroyBuffers() {
	this->$WCanvasPeer::destroyBuffers();
}

void WPanelPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WCanvasPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WPanelPeer::getBackBuffer() {
	 return this->$WCanvasPeer::getBackBuffer();
}

void WPanelPeer::reparent($ContainerPeer* newNativeParent) {
	this->$WCanvasPeer::reparent(newNativeParent);
}

bool WPanelPeer::isReparentSupported() {
	 return this->$WCanvasPeer::isReparentSupported();
}

void WPanelPeer::applyShape($Region* shape) {
	this->$WCanvasPeer::applyShape(shape);
}

void WPanelPeer::setZOrder($ComponentPeer* above) {
	this->$WCanvasPeer::setZOrder(above);
}

void WPanelPeer::dispose() {
	this->$WCanvasPeer::dispose();
}

int32_t WPanelPeer::hashCode() {
	 return this->$WCanvasPeer::hashCode();
}

bool WPanelPeer::equals(Object$* arg0) {
	 return this->$WCanvasPeer::equals(arg0);
}

$Object* WPanelPeer::clone() {
	 return this->$WCanvasPeer::clone();
}

void WPanelPeer::finalize() {
	this->$WCanvasPeer::finalize();
}

void WPanelPeer::paint($Graphics* g) {
	$WCanvasPeer::paint(g);
	$nc($($SunGraphicsCallback$PaintHeavyweightComponentsCallback::getInstance()))->runComponents($($nc(($cast($Container, this->target)))->getComponents()), g, $SunGraphicsCallback::LIGHTWEIGHTS | $SunGraphicsCallback::HEAVYWEIGHTS);
}

void WPanelPeer::print($Graphics* g) {
	$WCanvasPeer::print(g);
	$nc($($SunGraphicsCallback$PrintHeavyweightComponentsCallback::getInstance()))->runComponents($($nc(($cast($Container, this->target)))->getComponents()), g, $SunGraphicsCallback::LIGHTWEIGHTS | $SunGraphicsCallback::HEAVYWEIGHTS);
}

$Insets* WPanelPeer::getInsets() {
	return this->insets_;
}

void WPanelPeer::initIDs() {
	$init(WPanelPeer);
	$prepareNativeStatic(WPanelPeer, initIDs, void);
	$invokeNativeStatic(WPanelPeer, initIDs);
	$finishNativeStatic();
}

void WPanelPeer::init$($Component* target) {
	$WCanvasPeer::init$(target);
}

void WPanelPeer::initialize() {
	$WCanvasPeer::initialize();
	$set(this, insets_, $new($Insets, 0, 0, 0, 0));
	$var($Color, c, $nc(($cast($Component, this->target)))->getBackground());
	if (c == nullptr) {
		$init($SystemColor);
		$assign(c, $SystemColor::window);
		$nc(($cast($Component, this->target)))->setBackground(c);
		setBackground(c);
	}
	$assign(c, $nc(($cast($Component, this->target)))->getForeground());
	if (c == nullptr) {
		$init($SystemColor);
		$assign(c, $SystemColor::windowText);
		$nc(($cast($Component, this->target)))->setForeground(c);
		setForeground(c);
	}
}

void clinit$WPanelPeer($Class* class$) {
	{
		WPanelPeer::initIDs();
	}
}

WPanelPeer::WPanelPeer() {
}

$Class* WPanelPeer::load$($String* name, bool initialize) {
	$loadClass(WPanelPeer, name, initialize, &_WPanelPeer_ClassInfo_, clinit$WPanelPeer, allocate$WPanelPeer);
	return class$;
}

$Class* WPanelPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun