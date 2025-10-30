#include <sun/awt/windows/WChoicePeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Choice.h>
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
#include <java/awt/Window.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/windows/WChoicePeer$1.h>
#include <sun/awt/windows/WChoicePeer$2.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/awt/windows/WWindowPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Choice = ::java::awt::Choice;
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
using $Window = ::java::awt::Window;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ChoicePeer = ::java::awt::peer::ChoicePeer;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;
using $WChoicePeer$1 = ::sun::awt::windows::WChoicePeer$1;
using $WChoicePeer$2 = ::sun::awt::windows::WChoicePeer$2;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $WWindowPeer = ::sun::awt::windows::WWindowPeer;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WChoicePeer_FieldInfo_[] = {
	{"windowListener", "Ljava/awt/event/WindowListener;", nullptr, $PRIVATE, $field(WChoicePeer, windowListener)},
	{}
};

$MethodInfo _WChoicePeer_MethodInfo_[] = {
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
	{"<init>", "(Ljava/awt/Choice;)V", nullptr, 0, $method(static_cast<void(WChoicePeer::*)($Choice*)>(&WChoicePeer::init$))},
	{"add", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"addItems", "([Ljava/lang/String;I)V", nullptr, $PUBLIC | $NATIVE, $method(static_cast<void(WChoicePeer::*)($StringArray*,int32_t)>(&WChoicePeer::addItems))},
	{"closeList", "()V", nullptr, $NATIVE, $method(static_cast<void(WChoicePeer::*)()>(&WChoicePeer::closeList))},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $NATIVE},
	{"disposeImpl", "()V", nullptr, $PROTECTED},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"handleAction", "(I)V", nullptr, 0, $method(static_cast<void(WChoicePeer::*)(int32_t)>(&WChoicePeer::handleAction))},
	{"initialize", "()V", nullptr, 0},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"remove", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"removeAll", "()V", nullptr, $PUBLIC | $NATIVE},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"reshape", "(IIII)V", nullptr, $PUBLIC | $SYNCHRONIZED | $NATIVE},
	{"select", "(I)V", nullptr, $PUBLIC | $NATIVE},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"shouldClearRectBeforePaint", "()Z", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_addItems 24
#define _METHOD_INDEX_closeList 25
#define _METHOD_INDEX_create 26
#define _METHOD_INDEX_remove 37
#define _METHOD_INDEX_removeAll 38
#define _METHOD_INDEX_reshape 41
#define _METHOD_INDEX_select 42

$InnerClassInfo _WChoicePeer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WChoicePeer$2", nullptr, nullptr, 0},
	{"sun.awt.windows.WChoicePeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WChoicePeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WChoicePeer",
	"sun.awt.windows.WComponentPeer",
	"java.awt.peer.ChoicePeer",
	_WChoicePeer_FieldInfo_,
	_WChoicePeer_MethodInfo_,
	nullptr,
	nullptr,
	_WChoicePeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WChoicePeer$2,sun.awt.windows.WChoicePeer$1"
};

$Object* allocate$WChoicePeer($Class* clazz) {
	return $of($alloc(WChoicePeer));
}

bool WChoicePeer::isObscured() {
	 return this->$WComponentPeer::isObscured();
}

bool WChoicePeer::canDetermineObscurity() {
	 return this->$WComponentPeer::canDetermineObscurity();
}

$Point* WChoicePeer::getLocationOnScreen() {
	 return this->$WComponentPeer::getLocationOnScreen();
}

void WChoicePeer::setVisible(bool b) {
	this->$WComponentPeer::setVisible(b);
}

void WChoicePeer::setEnabled(bool b) {
	this->$WComponentPeer::setEnabled(b);
}

void WChoicePeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WComponentPeer::setBounds(x, y, width, height, op);
}

void WChoicePeer::paint($Graphics* g) {
	this->$WComponentPeer::paint(g);
}

void WChoicePeer::print($Graphics* g) {
	this->$WComponentPeer::print(g);
}

void WChoicePeer::coalescePaintEvent($PaintEvent* e) {
	this->$WComponentPeer::coalescePaintEvent(e);
}

void WChoicePeer::handleEvent($AWTEvent* e) {
	this->$WComponentPeer::handleEvent(e);
}

$Dimension* WChoicePeer::getPreferredSize() {
	 return this->$WComponentPeer::getPreferredSize();
}

void WChoicePeer::layout() {
	this->$WComponentPeer::layout();
}

$GraphicsConfiguration* WChoicePeer::getGraphicsConfiguration() {
	 return this->$WComponentPeer::getGraphicsConfiguration();
}

bool WChoicePeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WComponentPeer::updateGraphicsData(gc);
}

$ColorModel* WChoicePeer::getColorModel() {
	 return this->$WComponentPeer::getColorModel();
}

$Graphics* WChoicePeer::getGraphics() {
	 return this->$WComponentPeer::getGraphics();
}

$FontMetrics* WChoicePeer::getFontMetrics($Font* font) {
	 return this->$WComponentPeer::getFontMetrics(font);
}

void WChoicePeer::setForeground($Color* c) {
	this->$WComponentPeer::setForeground(c);
}

void WChoicePeer::setBackground($Color* c) {
	this->$WComponentPeer::setBackground(c);
}

void WChoicePeer::setFont($Font* f) {
	this->$WComponentPeer::setFont(f);
}

void WChoicePeer::updateCursorImmediately() {
	this->$WComponentPeer::updateCursorImmediately();
}

bool WChoicePeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WChoicePeer::createImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createImage(width, height);
}

$VolatileImage* WChoicePeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createVolatileImage(width, height);
}

$String* WChoicePeer::toString() {
	 return this->$WComponentPeer::toString();
}

bool WChoicePeer::handlesWheelScrolling() {
	 return this->$WComponentPeer::handlesWheelScrolling();
}

void WChoicePeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WComponentPeer::createBuffers(numBuffers, caps);
}

void WChoicePeer::destroyBuffers() {
	this->$WComponentPeer::destroyBuffers();
}

void WChoicePeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WChoicePeer::getBackBuffer() {
	 return this->$WComponentPeer::getBackBuffer();
}

void WChoicePeer::reparent($ContainerPeer* newNativeParent) {
	this->$WComponentPeer::reparent(newNativeParent);
}

bool WChoicePeer::isReparentSupported() {
	 return this->$WComponentPeer::isReparentSupported();
}

void WChoicePeer::applyShape($Region* shape) {
	this->$WComponentPeer::applyShape(shape);
}

void WChoicePeer::setZOrder($ComponentPeer* above) {
	this->$WComponentPeer::setZOrder(above);
}

void WChoicePeer::dispose() {
	this->$WComponentPeer::dispose();
}

int32_t WChoicePeer::hashCode() {
	 return this->$WComponentPeer::hashCode();
}

bool WChoicePeer::equals(Object$* arg0) {
	 return this->$WComponentPeer::equals(arg0);
}

$Object* WChoicePeer::clone() {
	 return this->$WComponentPeer::clone();
}

void WChoicePeer::finalize() {
	this->$WComponentPeer::finalize();
}

$Dimension* WChoicePeer::getMinimumSize() {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, getFontMetrics($($nc(($cast($Choice, this->target)))->getFont())));
	$var($Choice, c, $cast($Choice, this->target));
	int32_t w = 0;
	for (int32_t i = $nc(c)->getItemCount(); i-- > 0;) {
		w = $Math::max($nc(fm)->stringWidth($(c->getItem(i))), w);
	}
	return $new($Dimension, 28 + w, $Math::max($nc(fm)->getHeight() + 6, 15));
}

bool WChoicePeer::isFocusable() {
	return true;
}

void WChoicePeer::select(int32_t index) {
	$prepareNative(WChoicePeer, select, void, int32_t index);
	$invokeNative(WChoicePeer, select, index);
	$finishNative();
}

void WChoicePeer::add($String* item, int32_t index) {
	addItems($$new($StringArray, {item}), index);
}

bool WChoicePeer::shouldClearRectBeforePaint() {
	return false;
}

void WChoicePeer::removeAll() {
	$prepareNative(WChoicePeer, removeAll, void);
	$invokeNative(WChoicePeer, removeAll);
	$finishNative();
}

void WChoicePeer::remove(int32_t index) {
	$prepareNative(WChoicePeer, remove, void, int32_t index);
	$invokeNative(WChoicePeer, remove, index);
	$finishNative();
}

void WChoicePeer::addItems($StringArray* items, int32_t index) {
	$prepareNative(WChoicePeer, addItems, void, $StringArray* items, int32_t index);
	$invokeNative(WChoicePeer, addItems, items, index);
	$finishNative();
}

void WChoicePeer::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
	$prepareNative(WChoicePeer, reshape, void, int32_t x, int32_t y, int32_t width, int32_t height);
	$invokeNative(WChoicePeer, reshape, x, y, width, height);
	$finishNative();
}

void WChoicePeer::init$($Choice* target) {
	$WComponentPeer::init$(target);
}

void WChoicePeer::create($WComponentPeer* parent) {
	$prepareNative(WChoicePeer, create, void, $WComponentPeer* parent);
	$invokeNative(WChoicePeer, create, parent);
	$finishNative();
}

void WChoicePeer::initialize() {
	$useLocalCurrentObjectStackCache();
	$var($Choice, opt, $cast($Choice, this->target));
	int32_t itemCount = $nc(opt)->getItemCount();
	if (itemCount > 0) {
		$var($StringArray, items, $new($StringArray, itemCount));
		for (int32_t i = 0; i < itemCount; ++i) {
			items->set(i, $(opt->getItem(i)));
		}
		addItems(items, 0);
		if (opt->getSelectedIndex() >= 0) {
			select(opt->getSelectedIndex());
		}
	}
	$var($Window, parentWindow, $SunToolkit::getContainingWindow($cast($Component, this->target)));
	if (parentWindow != nullptr) {
		$var($WWindowPeer, wpeer, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(parentWindow)));
		if (wpeer != nullptr) {
			$set(this, windowListener, $new($WChoicePeer$1, this));
			wpeer->addWindowListener(this->windowListener);
		}
	}
	$WComponentPeer::initialize();
}

void WChoicePeer::disposeImpl() {
	$useLocalCurrentObjectStackCache();
	$var($Window, parentWindow, $SunToolkit::getContainingWindow($cast($Component, this->target)));
	if (parentWindow != nullptr) {
		$var($WWindowPeer, wpeer, $cast($WWindowPeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(parentWindow)));
		if (wpeer != nullptr) {
			wpeer->removeWindowListener(this->windowListener);
		}
	}
	$WComponentPeer::disposeImpl();
}

void WChoicePeer::handleAction(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($Choice, c, $cast($Choice, this->target));
	$WToolkit::executeOnEventHandlerThread(c, $$new($WChoicePeer$2, this, c, index));
}

void WChoicePeer::closeList() {
	$prepareNative(WChoicePeer, closeList, void);
	$invokeNative(WChoicePeer, closeList);
	$finishNative();
}

WChoicePeer::WChoicePeer() {
}

$Class* WChoicePeer::load$($String* name, bool initialize) {
	$loadClass(WChoicePeer, name, initialize, &_WChoicePeer_ClassInfo_, allocate$WChoicePeer);
	return class$;
}

$Class* WChoicePeer::class$ = nullptr;

		} // windows
	} // awt
} // sun