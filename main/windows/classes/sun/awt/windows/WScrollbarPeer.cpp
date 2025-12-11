#include <sun/awt/windows/WScrollbarPeer.h>

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
#include <java/awt/Point.h>
#include <java/awt/Scrollbar.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/Runnable.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WScrollbarPeer$1.h>
#include <sun/awt/windows/WScrollbarPeer$2.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef BLOCK_DECREMENT
#undef BLOCK_INCREMENT
#undef HORIZONTAL
#undef TRACK
#undef UNIT_DECREMENT
#undef UNIT_INCREMENT
#undef VERTICAL

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
using $Point = ::java::awt::Point;
using $Scrollbar = ::java::awt::Scrollbar;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WScrollbarPeer$1 = ::sun::awt::windows::WScrollbarPeer$1;
using $WScrollbarPeer$2 = ::sun::awt::windows::WScrollbarPeer$2;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WScrollbarPeer_FieldInfo_[] = {
	{"dragInProgress", "Z", nullptr, $PRIVATE, $field(WScrollbarPeer, dragInProgress)},
	{}
};

$MethodInfo _WScrollbarPeer_MethodInfo_[] = {
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
	{"<init>", "(Ljava/awt/Scrollbar;)V", nullptr, 0, $method(static_cast<void(WScrollbarPeer::*)($Scrollbar*)>(&WScrollbarPeer::init$))},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $NATIVE},
	{"drag", "(I)V", nullptr, 0, $method(static_cast<void(WScrollbarPeer::*)(int32_t)>(&WScrollbarPeer::drag))},
	{"dragEnd", "(I)V", nullptr, 0, $method(static_cast<void(WScrollbarPeer::*)(int32_t)>(&WScrollbarPeer::dragEnd))},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getScrollbarSize", "(I)I", nullptr, $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int32_t)>(&WScrollbarPeer::getScrollbarSize))},
	{"initialize", "()V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"lineDown", "(I)V", nullptr, 0, $method(static_cast<void(WScrollbarPeer::*)(int32_t)>(&WScrollbarPeer::lineDown))},
	{"lineUp", "(I)V", nullptr, 0, $method(static_cast<void(WScrollbarPeer::*)(int32_t)>(&WScrollbarPeer::lineUp))},
	{"pageDown", "(I)V", nullptr, 0, $method(static_cast<void(WScrollbarPeer::*)(int32_t)>(&WScrollbarPeer::pageDown))},
	{"pageUp", "(I)V", nullptr, 0, $method(static_cast<void(WScrollbarPeer::*)(int32_t)>(&WScrollbarPeer::pageUp))},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"postAdjustmentEvent", "(IIZ)V", nullptr, $PRIVATE, $method(static_cast<void(WScrollbarPeer::*)(int32_t,int32_t,bool)>(&WScrollbarPeer::postAdjustmentEvent))},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setLineIncrement", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"setPageIncrement", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"setValues", "(IIII)V", nullptr, $PUBLIC | $NATIVE},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"shouldClearRectBeforePaint", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"warp", "(I)V", nullptr, 0, $method(static_cast<void(WScrollbarPeer::*)(int32_t)>(&WScrollbarPeer::warp))},
	{}
};

#define _METHOD_INDEX_create 23
#define _METHOD_INDEX_getScrollbarSize 27
#define _METHOD_INDEX_setLineIncrement 47
#define _METHOD_INDEX_setPageIncrement 48
#define _METHOD_INDEX_setValues 49

$InnerClassInfo _WScrollbarPeer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WScrollbarPeer$2", nullptr, nullptr, 0},
	{"sun.awt.windows.WScrollbarPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WScrollbarPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WScrollbarPeer",
	"sun.awt.windows.WComponentPeer",
	"java.awt.peer.ScrollbarPeer",
	_WScrollbarPeer_FieldInfo_,
	_WScrollbarPeer_MethodInfo_,
	nullptr,
	nullptr,
	_WScrollbarPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WScrollbarPeer$2,sun.awt.windows.WScrollbarPeer$1"
};

$Object* allocate$WScrollbarPeer($Class* clazz) {
	return $of($alloc(WScrollbarPeer));
}

bool WScrollbarPeer::isObscured() {
	 return this->$WComponentPeer::isObscured();
}

bool WScrollbarPeer::canDetermineObscurity() {
	 return this->$WComponentPeer::canDetermineObscurity();
}

$Point* WScrollbarPeer::getLocationOnScreen() {
	 return this->$WComponentPeer::getLocationOnScreen();
}

void WScrollbarPeer::setVisible(bool b) {
	this->$WComponentPeer::setVisible(b);
}

void WScrollbarPeer::setEnabled(bool b) {
	this->$WComponentPeer::setEnabled(b);
}

void WScrollbarPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WComponentPeer::setBounds(x, y, width, height, op);
}

void WScrollbarPeer::paint($Graphics* g) {
	this->$WComponentPeer::paint(g);
}

void WScrollbarPeer::print($Graphics* g) {
	this->$WComponentPeer::print(g);
}

void WScrollbarPeer::coalescePaintEvent($PaintEvent* e) {
	this->$WComponentPeer::coalescePaintEvent(e);
}

void WScrollbarPeer::handleEvent($AWTEvent* e) {
	this->$WComponentPeer::handleEvent(e);
}

$Dimension* WScrollbarPeer::getPreferredSize() {
	 return this->$WComponentPeer::getPreferredSize();
}

void WScrollbarPeer::layout() {
	this->$WComponentPeer::layout();
}

bool WScrollbarPeer::isFocusable() {
	 return this->$WComponentPeer::isFocusable();
}

$GraphicsConfiguration* WScrollbarPeer::getGraphicsConfiguration() {
	 return this->$WComponentPeer::getGraphicsConfiguration();
}

bool WScrollbarPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WComponentPeer::updateGraphicsData(gc);
}

$ColorModel* WScrollbarPeer::getColorModel() {
	 return this->$WComponentPeer::getColorModel();
}

$Graphics* WScrollbarPeer::getGraphics() {
	 return this->$WComponentPeer::getGraphics();
}

$FontMetrics* WScrollbarPeer::getFontMetrics($Font* font) {
	 return this->$WComponentPeer::getFontMetrics(font);
}

void WScrollbarPeer::setForeground($Color* c) {
	this->$WComponentPeer::setForeground(c);
}

void WScrollbarPeer::setBackground($Color* c) {
	this->$WComponentPeer::setBackground(c);
}

void WScrollbarPeer::setFont($Font* f) {
	this->$WComponentPeer::setFont(f);
}

void WScrollbarPeer::updateCursorImmediately() {
	this->$WComponentPeer::updateCursorImmediately();
}

bool WScrollbarPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WScrollbarPeer::createImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createImage(width, height);
}

$VolatileImage* WScrollbarPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createVolatileImage(width, height);
}

$String* WScrollbarPeer::toString() {
	 return this->$WComponentPeer::toString();
}

bool WScrollbarPeer::handlesWheelScrolling() {
	 return this->$WComponentPeer::handlesWheelScrolling();
}

void WScrollbarPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WComponentPeer::createBuffers(numBuffers, caps);
}

void WScrollbarPeer::destroyBuffers() {
	this->$WComponentPeer::destroyBuffers();
}

void WScrollbarPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WScrollbarPeer::getBackBuffer() {
	 return this->$WComponentPeer::getBackBuffer();
}

void WScrollbarPeer::reparent($ContainerPeer* newNativeParent) {
	this->$WComponentPeer::reparent(newNativeParent);
}

bool WScrollbarPeer::isReparentSupported() {
	 return this->$WComponentPeer::isReparentSupported();
}

void WScrollbarPeer::applyShape($Region* shape) {
	this->$WComponentPeer::applyShape(shape);
}

void WScrollbarPeer::setZOrder($ComponentPeer* above) {
	this->$WComponentPeer::setZOrder(above);
}

void WScrollbarPeer::dispose() {
	this->$WComponentPeer::dispose();
}

int32_t WScrollbarPeer::hashCode() {
	 return this->$WComponentPeer::hashCode();
}

bool WScrollbarPeer::equals(Object$* arg0) {
	 return this->$WComponentPeer::equals(arg0);
}

$Object* WScrollbarPeer::clone() {
	 return this->$WComponentPeer::clone();
}

void WScrollbarPeer::finalize() {
	this->$WComponentPeer::finalize();
}

int32_t WScrollbarPeer::getScrollbarSize(int32_t orientation) {
	$init(WScrollbarPeer);
	int32_t $ret = 0;
	$prepareNativeStatic(WScrollbarPeer, getScrollbarSize, int32_t, int32_t orientation);
	$ret = $invokeNativeStatic(orientation);
	$finishNativeStatic();
	return $ret;
}

$Dimension* WScrollbarPeer::getMinimumSize() {
	if ($nc(($cast($Scrollbar, this->target)))->getOrientation() == $Scrollbar::VERTICAL) {
		return $new($Dimension, getScrollbarSize($Scrollbar::VERTICAL), 50);
	} else {
		return $new($Dimension, 50, getScrollbarSize($Scrollbar::HORIZONTAL));
	}
}

void WScrollbarPeer::setValues(int32_t value, int32_t visible, int32_t minimum, int32_t maximum) {
	$prepareNative(WScrollbarPeer, setValues, void, int32_t value, int32_t visible, int32_t minimum, int32_t maximum);
	$invokeNative(value, visible, minimum, maximum);
	$finishNative();
}

void WScrollbarPeer::setLineIncrement(int32_t l) {
	$prepareNative(WScrollbarPeer, setLineIncrement, void, int32_t l);
	$invokeNative(l);
	$finishNative();
}

void WScrollbarPeer::setPageIncrement(int32_t l) {
	$prepareNative(WScrollbarPeer, setPageIncrement, void, int32_t l);
	$invokeNative(l);
	$finishNative();
}

void WScrollbarPeer::init$($Scrollbar* target) {
	$WComponentPeer::init$(target);
	this->dragInProgress = false;
}

void WScrollbarPeer::create($WComponentPeer* parent) {
	$prepareNative(WScrollbarPeer, create, void, $WComponentPeer* parent);
	$invokeNative(parent);
	$finishNative();
}

void WScrollbarPeer::initialize() {
	$var($Scrollbar, sb, $cast($Scrollbar, this->target));
	int32_t var$0 = $nc(sb)->getValue();
	int32_t var$1 = sb->getVisibleAmount();
	int32_t var$2 = sb->getMinimum();
	setValues(var$0, var$1, var$2, sb->getMaximum());
	$WComponentPeer::initialize();
}

void WScrollbarPeer::postAdjustmentEvent(int32_t type, int32_t value, bool isAdjusting) {
	$useLocalCurrentObjectStackCache();
	$var($Scrollbar, sb, $cast($Scrollbar, this->target));
	$WToolkit::executeOnEventHandlerThread(sb, $$new($WScrollbarPeer$1, this, sb, isAdjusting, value, type));
}

void WScrollbarPeer::lineUp(int32_t value) {
	postAdjustmentEvent($AdjustmentEvent::UNIT_DECREMENT, value, false);
}

void WScrollbarPeer::lineDown(int32_t value) {
	postAdjustmentEvent($AdjustmentEvent::UNIT_INCREMENT, value, false);
}

void WScrollbarPeer::pageUp(int32_t value) {
	postAdjustmentEvent($AdjustmentEvent::BLOCK_DECREMENT, value, false);
}

void WScrollbarPeer::pageDown(int32_t value) {
	postAdjustmentEvent($AdjustmentEvent::BLOCK_INCREMENT, value, false);
}

void WScrollbarPeer::warp(int32_t value) {
	postAdjustmentEvent($AdjustmentEvent::TRACK, value, false);
}

void WScrollbarPeer::drag(int32_t value) {
	if (!this->dragInProgress) {
		this->dragInProgress = true;
	}
	postAdjustmentEvent($AdjustmentEvent::TRACK, value, true);
}

void WScrollbarPeer::dragEnd(int32_t value) {
	$useLocalCurrentObjectStackCache();
	$var($Scrollbar, sb, $cast($Scrollbar, this->target));
	if (!this->dragInProgress) {
		return;
	}
	this->dragInProgress = false;
	$WToolkit::executeOnEventHandlerThread(sb, $$new($WScrollbarPeer$2, this, sb, value));
}

bool WScrollbarPeer::shouldClearRectBeforePaint() {
	return false;
}

WScrollbarPeer::WScrollbarPeer() {
}

$Class* WScrollbarPeer::load$($String* name, bool initialize) {
	$loadClass(WScrollbarPeer, name, initialize, &_WScrollbarPeer_ClassInfo_, allocate$WScrollbarPeer);
	return class$;
}

$Class* WScrollbarPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun