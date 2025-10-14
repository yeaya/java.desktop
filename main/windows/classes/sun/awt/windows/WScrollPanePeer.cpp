#include <sun/awt/windows/WScrollPanePeer.h>

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
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/ScrollPane.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/PeerEvent.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WPanelPeer.h>
#include <sun/awt/windows/WScrollPanePeer$Adjustor.h>
#include <sun/awt/windows/WScrollPanePeer$ScrollEvent.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef VERTICAL

using $AWTEvent = ::java::awt::AWTEvent;
using $Adjustable = ::java::awt::Adjustable;
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
using $ScrollPane = ::java::awt::ScrollPane;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ScrollPanePeer = ::java::awt::peer::ScrollPanePeer;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PeerEvent = ::sun::awt::PeerEvent;
using $SunToolkit = ::sun::awt::SunToolkit;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WPanelPeer = ::sun::awt::windows::WPanelPeer;
using $WScrollPanePeer$Adjustor = ::sun::awt::windows::WScrollPanePeer$Adjustor;
using $WScrollPanePeer$ScrollEvent = ::sun::awt::windows::WScrollPanePeer$ScrollEvent;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $Region = ::sun::java2d::pipe::Region;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WScrollPanePeer_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WScrollPanePeer, log)},
	{"scrollbarWidth", "I", nullptr, 0, $field(WScrollPanePeer, scrollbarWidth)},
	{"scrollbarHeight", "I", nullptr, 0, $field(WScrollPanePeer, scrollbarHeight)},
	{"prevx", "I", nullptr, 0, $field(WScrollPanePeer, prevx)},
	{"prevy", "I", nullptr, 0, $field(WScrollPanePeer, prevy)},
	{}
};

$MethodInfo _WScrollPanePeer_MethodInfo_[] = {
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
	{"*getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $NATIVE},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(WScrollPanePeer::*)($Component*)>(&WScrollPanePeer::init$))},
	{"_getHScrollbarHeight", "()I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(WScrollPanePeer::*)()>(&WScrollPanePeer::_getHScrollbarHeight))},
	{"_getVScrollbarWidth", "()I", nullptr, $PRIVATE | $NATIVE, $method(static_cast<int32_t(WScrollPanePeer::*)()>(&WScrollPanePeer::_getVScrollbarWidth))},
	{"childResized", "(II)V", nullptr, $PUBLIC},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $NATIVE},
	{"getHScrollbarHeight", "()I", nullptr, $PUBLIC},
	{"getOffset", "(I)I", nullptr, $NATIVE, $method(static_cast<int32_t(WScrollPanePeer::*)(int32_t)>(&WScrollPanePeer::getOffset))},
	{"getScrollChild", "()Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(WScrollPanePeer::*)()>(&WScrollPanePeer::getScrollChild))},
	{"getScrollOffset", "()Ljava/awt/Point;", nullptr, $PUBLIC, $method(static_cast<$Point*(WScrollPanePeer::*)()>(&WScrollPanePeer::getScrollOffset))},
	{"getVScrollbarWidth", "()I", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WScrollPanePeer::initIDs))},
	{"initialize", "()V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"postScrollEvent", "(IIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(WScrollPanePeer::*)(int32_t,int32_t,int32_t,bool)>(&WScrollPanePeer::postScrollEvent))},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setInsets", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WScrollPanePeer::*)()>(&WScrollPanePeer::setInsets))},
	{"setScrollPosition", "(II)V", nullptr, $PUBLIC | $SYNCHRONIZED | $NATIVE},
	{"setSpans", "(IIII)V", nullptr, $SYNCHRONIZED | $NATIVE, $method(static_cast<void(WScrollPanePeer::*)(int32_t,int32_t,int32_t,int32_t)>(&WScrollPanePeer::setSpans))},
	{"setUnitIncrement", "(Ljava/awt/Adjustable;I)V", nullptr, $PUBLIC},
	{"setValue", "(Ljava/awt/Adjustable;I)V", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX__getHScrollbarHeight 29
#define _METHOD_INDEX__getVScrollbarWidth 30
#define _METHOD_INDEX_create 32
#define _METHOD_INDEX_getOffset 34
#define _METHOD_INDEX_initIDs 38
#define _METHOD_INDEX_setInsets 54
#define _METHOD_INDEX_setScrollPosition 55
#define _METHOD_INDEX_setSpans 56

$InnerClassInfo _WScrollPanePeer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WScrollPanePeer$Adjustor", "sun.awt.windows.WScrollPanePeer", "Adjustor", 0},
	{"sun.awt.windows.WScrollPanePeer$ScrollEvent", "sun.awt.windows.WScrollPanePeer", "ScrollEvent", 0},
	{}
};

$ClassInfo _WScrollPanePeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WScrollPanePeer",
	"sun.awt.windows.WPanelPeer",
	"java.awt.peer.ScrollPanePeer",
	_WScrollPanePeer_FieldInfo_,
	_WScrollPanePeer_MethodInfo_,
	nullptr,
	nullptr,
	_WScrollPanePeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WScrollPanePeer$Adjustor,sun.awt.windows.WScrollPanePeer$ScrollEvent"
};

$Object* allocate$WScrollPanePeer($Class* clazz) {
	return $of($alloc(WScrollPanePeer));
}

void WScrollPanePeer::paint($Graphics* g) {
	this->$WPanelPeer::paint(g);
}

void WScrollPanePeer::print($Graphics* g) {
	this->$WPanelPeer::print(g);
}

$Insets* WScrollPanePeer::getInsets() {
	 return this->$WPanelPeer::getInsets();
}

bool WScrollPanePeer::isObscured() {
	 return this->$WPanelPeer::isObscured();
}

bool WScrollPanePeer::canDetermineObscurity() {
	 return this->$WPanelPeer::canDetermineObscurity();
}

$Point* WScrollPanePeer::getLocationOnScreen() {
	 return this->$WPanelPeer::getLocationOnScreen();
}

void WScrollPanePeer::setVisible(bool b) {
	this->$WPanelPeer::setVisible(b);
}

void WScrollPanePeer::setEnabled(bool b) {
	this->$WPanelPeer::setEnabled(b);
}

void WScrollPanePeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WPanelPeer::setBounds(x, y, width, height, op);
}

void WScrollPanePeer::coalescePaintEvent($PaintEvent* e) {
	this->$WPanelPeer::coalescePaintEvent(e);
}

void WScrollPanePeer::handleEvent($AWTEvent* e) {
	this->$WPanelPeer::handleEvent(e);
}

$Dimension* WScrollPanePeer::getMinimumSize() {
	 return this->$WPanelPeer::getMinimumSize();
}

$Dimension* WScrollPanePeer::getPreferredSize() {
	 return this->$WPanelPeer::getPreferredSize();
}

void WScrollPanePeer::layout() {
	this->$WPanelPeer::layout();
}

bool WScrollPanePeer::isFocusable() {
	 return this->$WPanelPeer::isFocusable();
}

$GraphicsConfiguration* WScrollPanePeer::getGraphicsConfiguration() {
	 return this->$WPanelPeer::getGraphicsConfiguration();
}

bool WScrollPanePeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WPanelPeer::updateGraphicsData(gc);
}

$ColorModel* WScrollPanePeer::getColorModel() {
	 return this->$WPanelPeer::getColorModel();
}

$Graphics* WScrollPanePeer::getGraphics() {
	 return this->$WPanelPeer::getGraphics();
}

$FontMetrics* WScrollPanePeer::getFontMetrics($Font* font) {
	 return this->$WPanelPeer::getFontMetrics(font);
}

void WScrollPanePeer::setForeground($Color* c) {
	this->$WPanelPeer::setForeground(c);
}

void WScrollPanePeer::setBackground($Color* c) {
	this->$WPanelPeer::setBackground(c);
}

void WScrollPanePeer::setFont($Font* f) {
	this->$WPanelPeer::setFont(f);
}

void WScrollPanePeer::updateCursorImmediately() {
	this->$WPanelPeer::updateCursorImmediately();
}

bool WScrollPanePeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WPanelPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WScrollPanePeer::createImage(int32_t width, int32_t height) {
	 return this->$WPanelPeer::createImage(width, height);
}

$VolatileImage* WScrollPanePeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WPanelPeer::createVolatileImage(width, height);
}

$String* WScrollPanePeer::toString() {
	 return this->$WPanelPeer::toString();
}

void WScrollPanePeer::beginLayout() {
	this->$WPanelPeer::beginLayout();
}

void WScrollPanePeer::endLayout() {
	this->$WPanelPeer::endLayout();
}

void WScrollPanePeer::beginValidate() {
	this->$WPanelPeer::beginValidate();
}

void WScrollPanePeer::endValidate() {
	this->$WPanelPeer::endValidate();
}

bool WScrollPanePeer::handlesWheelScrolling() {
	 return this->$WPanelPeer::handlesWheelScrolling();
}

void WScrollPanePeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WPanelPeer::createBuffers(numBuffers, caps);
}

void WScrollPanePeer::destroyBuffers() {
	this->$WPanelPeer::destroyBuffers();
}

void WScrollPanePeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WPanelPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WScrollPanePeer::getBackBuffer() {
	 return this->$WPanelPeer::getBackBuffer();
}

void WScrollPanePeer::reparent($ContainerPeer* newNativeParent) {
	this->$WPanelPeer::reparent(newNativeParent);
}

bool WScrollPanePeer::isReparentSupported() {
	 return this->$WPanelPeer::isReparentSupported();
}

void WScrollPanePeer::applyShape($Region* shape) {
	this->$WPanelPeer::applyShape(shape);
}

void WScrollPanePeer::setZOrder($ComponentPeer* above) {
	this->$WPanelPeer::setZOrder(above);
}

void WScrollPanePeer::dispose() {
	this->$WPanelPeer::dispose();
}

int32_t WScrollPanePeer::hashCode() {
	 return this->$WPanelPeer::hashCode();
}

bool WScrollPanePeer::equals(Object$* arg0) {
	 return this->$WPanelPeer::equals(arg0);
}

$Object* WScrollPanePeer::clone() {
	 return this->$WPanelPeer::clone();
}

void WScrollPanePeer::finalize() {
	this->$WPanelPeer::finalize();
}

$PlatformLogger* WScrollPanePeer::log = nullptr;

void WScrollPanePeer::initIDs() {
	$init(WScrollPanePeer);
	$prepareNativeStatic(WScrollPanePeer, initIDs, void);
	$invokeNativeStatic(WScrollPanePeer, initIDs);
	$finishNativeStatic();
}

void WScrollPanePeer::create($WComponentPeer* parent) {
	$prepareNative(WScrollPanePeer, create, void, $WComponentPeer* parent);
	$invokeNative(WScrollPanePeer, create, parent);
	$finishNative();
}

int32_t WScrollPanePeer::getOffset(int32_t orient) {
	int32_t $ret = 0;
	$prepareNative(WScrollPanePeer, getOffset, int32_t, int32_t orient);
	$ret = $invokeNative(WScrollPanePeer, getOffset, orient);
	$finishNative();
	return $ret;
}

void WScrollPanePeer::init$($Component* target) {
	$WPanelPeer::init$(target);
	this->scrollbarWidth = _getVScrollbarWidth();
	this->scrollbarHeight = _getHScrollbarHeight();
}

void WScrollPanePeer::initialize() {
	$WPanelPeer::initialize();
	setInsets();
	$var($Insets, i, getInsets());
	setScrollPosition(-$nc(i)->left, -i->top);
}

void WScrollPanePeer::setUnitIncrement($Adjustable* adj, int32_t p) {
}

void WScrollPanePeer::setInsets() {
	$prepareNative(WScrollPanePeer, setInsets, void);
	$invokeNative(WScrollPanePeer, setInsets);
	$finishNative();
}

void WScrollPanePeer::setScrollPosition(int32_t x, int32_t y) {
	$prepareNative(WScrollPanePeer, setScrollPosition, void, int32_t x, int32_t y);
	$invokeNative(WScrollPanePeer, setScrollPosition, x, y);
	$finishNative();
}

int32_t WScrollPanePeer::getHScrollbarHeight() {
	return this->scrollbarHeight;
}

int32_t WScrollPanePeer::_getHScrollbarHeight() {
	int32_t $ret = 0;
	$prepareNative(WScrollPanePeer, _getHScrollbarHeight, int32_t);
	$ret = $invokeNative(WScrollPanePeer, _getHScrollbarHeight);
	$finishNative();
	return $ret;
}

int32_t WScrollPanePeer::getVScrollbarWidth() {
	return this->scrollbarWidth;
}

int32_t WScrollPanePeer::_getVScrollbarWidth() {
	int32_t $ret = 0;
	$prepareNative(WScrollPanePeer, _getVScrollbarWidth, int32_t);
	$ret = $invokeNative(WScrollPanePeer, _getVScrollbarWidth);
	$finishNative();
	return $ret;
}

$Point* WScrollPanePeer::getScrollOffset() {
	int32_t x = getOffset($Adjustable::HORIZONTAL);
	int32_t y = getOffset($Adjustable::VERTICAL);
	return $new($Point, x, y);
}

void WScrollPanePeer::childResized(int32_t width, int32_t height) {
	$var($ScrollPane, sp, $cast($ScrollPane, this->target));
	$var($Dimension, vs, $nc(sp)->getSize());
	setSpans($nc(vs)->width, vs->height, width, height);
	setInsets();
}

void WScrollPanePeer::setSpans(int32_t viewWidth, int32_t viewHeight, int32_t childWidth, int32_t childHeight) {
	$prepareNative(WScrollPanePeer, setSpans, void, int32_t viewWidth, int32_t viewHeight, int32_t childWidth, int32_t childHeight);
	$invokeNative(WScrollPanePeer, setSpans, viewWidth, viewHeight, childWidth, childHeight);
	$finishNative();
}

void WScrollPanePeer::setValue($Adjustable* adj, int32_t v) {
	$var($Component, c, getScrollChild());
	if (c == nullptr) {
		return;
	}
	$var($Point, p, $nc(c)->getLocation());
	switch ($nc(adj)->getOrientation()) {
	case $Adjustable::VERTICAL:
		{
			setScrollPosition(-($nc(p)->x), v);
			break;
		}
	case $Adjustable::HORIZONTAL:
		{
			setScrollPosition(v, -($nc(p)->y));
			break;
		}
	}
}

$Component* WScrollPanePeer::getScrollChild() {
	$var($ScrollPane, sp, $cast($ScrollPane, this->target));
	$var($Component, child, nullptr);
	try {
		$assign(child, $nc(sp)->getComponent(0));
	} catch ($ArrayIndexOutOfBoundsException&) {
		$catch();
	}
	return child;
}

void WScrollPanePeer::postScrollEvent(int32_t orient, int32_t type, int32_t pos, bool isAdjusting) {
	$var($Runnable, adjustor, $new($WScrollPanePeer$Adjustor, this, orient, type, pos, isAdjusting));
	$WToolkit::executeOnEventHandlerThread($$new($WScrollPanePeer$ScrollEvent, this, this->target, adjustor));
}

void clinit$WScrollPanePeer($Class* class$) {
	$assignStatic(WScrollPanePeer::log, $PlatformLogger::getLogger("sun.awt.windows.WScrollPanePeer"_s));
	{
		WScrollPanePeer::initIDs();
	}
}

WScrollPanePeer::WScrollPanePeer() {
}

$Class* WScrollPanePeer::load$($String* name, bool initialize) {
	$loadClass(WScrollPanePeer, name, initialize, &_WScrollPanePeer_ClassInfo_, clinit$WScrollPanePeer, allocate$WScrollPanePeer);
	return class$;
}

$Class* WScrollPanePeer::class$ = nullptr;

		} // windows
	} // awt
} // sun