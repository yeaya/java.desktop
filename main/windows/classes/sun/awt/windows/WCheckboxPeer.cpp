#include <sun/awt/windows/WCheckboxPeer.h>

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
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <sun/awt/windows/WCheckboxPeer$1.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

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
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WCheckboxPeer$1 = ::sun::awt::windows::WCheckboxPeer$1;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WCheckboxPeer_MethodInfo_[] = {
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
	{"<init>", "(Ljava/awt/Checkbox;)V", nullptr, 0, $method(static_cast<void(WCheckboxPeer::*)($Checkbox*)>(&WCheckboxPeer::init$))},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $NATIVE},
	{"getCheckMarkSize", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&WCheckboxPeer::getCheckMarkSize))},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"handleAction", "(Z)V", nullptr, 0, $method(static_cast<void(WCheckboxPeer::*)(bool)>(&WCheckboxPeer::handleAction))},
	{"initialize", "()V", nullptr, 0},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setCheckboxGroup", "(Ljava/awt/CheckboxGroup;)V", nullptr, $PUBLIC | $NATIVE},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $NATIVE},
	{"setState", "(Z)V", nullptr, $PUBLIC | $NATIVE},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"shouldClearRectBeforePaint", "()Z", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_create 23
#define _METHOD_INDEX_getCheckMarkSize 24
#define _METHOD_INDEX_setCheckboxGroup 38
#define _METHOD_INDEX_setLabel 42
#define _METHOD_INDEX_setState 43

$InnerClassInfo _WCheckboxPeer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WCheckboxPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WCheckboxPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WCheckboxPeer",
	"sun.awt.windows.WComponentPeer",
	"java.awt.peer.CheckboxPeer",
	nullptr,
	_WCheckboxPeer_MethodInfo_,
	nullptr,
	nullptr,
	_WCheckboxPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WCheckboxPeer$1"
};

$Object* allocate$WCheckboxPeer($Class* clazz) {
	return $of($alloc(WCheckboxPeer));
}

bool WCheckboxPeer::isObscured() {
	 return this->$WComponentPeer::isObscured();
}

bool WCheckboxPeer::canDetermineObscurity() {
	 return this->$WComponentPeer::canDetermineObscurity();
}

$Point* WCheckboxPeer::getLocationOnScreen() {
	 return this->$WComponentPeer::getLocationOnScreen();
}

void WCheckboxPeer::setVisible(bool b) {
	this->$WComponentPeer::setVisible(b);
}

void WCheckboxPeer::setEnabled(bool b) {
	this->$WComponentPeer::setEnabled(b);
}

void WCheckboxPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WComponentPeer::setBounds(x, y, width, height, op);
}

void WCheckboxPeer::paint($Graphics* g) {
	this->$WComponentPeer::paint(g);
}

void WCheckboxPeer::print($Graphics* g) {
	this->$WComponentPeer::print(g);
}

void WCheckboxPeer::coalescePaintEvent($PaintEvent* e) {
	this->$WComponentPeer::coalescePaintEvent(e);
}

void WCheckboxPeer::handleEvent($AWTEvent* e) {
	this->$WComponentPeer::handleEvent(e);
}

$Dimension* WCheckboxPeer::getPreferredSize() {
	 return this->$WComponentPeer::getPreferredSize();
}

void WCheckboxPeer::layout() {
	this->$WComponentPeer::layout();
}

$GraphicsConfiguration* WCheckboxPeer::getGraphicsConfiguration() {
	 return this->$WComponentPeer::getGraphicsConfiguration();
}

bool WCheckboxPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WComponentPeer::updateGraphicsData(gc);
}

$ColorModel* WCheckboxPeer::getColorModel() {
	 return this->$WComponentPeer::getColorModel();
}

$Graphics* WCheckboxPeer::getGraphics() {
	 return this->$WComponentPeer::getGraphics();
}

$FontMetrics* WCheckboxPeer::getFontMetrics($Font* font) {
	 return this->$WComponentPeer::getFontMetrics(font);
}

void WCheckboxPeer::setForeground($Color* c) {
	this->$WComponentPeer::setForeground(c);
}

void WCheckboxPeer::setBackground($Color* c) {
	this->$WComponentPeer::setBackground(c);
}

void WCheckboxPeer::setFont($Font* f) {
	this->$WComponentPeer::setFont(f);
}

void WCheckboxPeer::updateCursorImmediately() {
	this->$WComponentPeer::updateCursorImmediately();
}

bool WCheckboxPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WCheckboxPeer::createImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createImage(width, height);
}

$VolatileImage* WCheckboxPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createVolatileImage(width, height);
}

$String* WCheckboxPeer::toString() {
	 return this->$WComponentPeer::toString();
}

bool WCheckboxPeer::handlesWheelScrolling() {
	 return this->$WComponentPeer::handlesWheelScrolling();
}

void WCheckboxPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WComponentPeer::createBuffers(numBuffers, caps);
}

void WCheckboxPeer::destroyBuffers() {
	this->$WComponentPeer::destroyBuffers();
}

void WCheckboxPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WCheckboxPeer::getBackBuffer() {
	 return this->$WComponentPeer::getBackBuffer();
}

void WCheckboxPeer::reparent($ContainerPeer* newNativeParent) {
	this->$WComponentPeer::reparent(newNativeParent);
}

bool WCheckboxPeer::isReparentSupported() {
	 return this->$WComponentPeer::isReparentSupported();
}

void WCheckboxPeer::applyShape($Region* shape) {
	this->$WComponentPeer::applyShape(shape);
}

void WCheckboxPeer::setZOrder($ComponentPeer* above) {
	this->$WComponentPeer::setZOrder(above);
}

void WCheckboxPeer::dispose() {
	this->$WComponentPeer::dispose();
}

int32_t WCheckboxPeer::hashCode() {
	 return this->$WComponentPeer::hashCode();
}

bool WCheckboxPeer::equals(Object$* arg0) {
	 return this->$WComponentPeer::equals(arg0);
}

$Object* WCheckboxPeer::clone() {
	 return this->$WComponentPeer::clone();
}

void WCheckboxPeer::finalize() {
	this->$WComponentPeer::finalize();
}

void WCheckboxPeer::setState(bool state) {
	$prepareNative(WCheckboxPeer, setState, void, bool state);
	$invokeNative(state);
	$finishNative();
}

void WCheckboxPeer::setCheckboxGroup($CheckboxGroup* g) {
	$prepareNative(WCheckboxPeer, setCheckboxGroup, void, $CheckboxGroup* g);
	$invokeNative(g);
	$finishNative();
}

void WCheckboxPeer::setLabel($String* label) {
	$prepareNative(WCheckboxPeer, setLabel, void, $String* label);
	$invokeNative(label);
	$finishNative();
}

int32_t WCheckboxPeer::getCheckMarkSize() {
	$init(WCheckboxPeer);
	int32_t $ret = 0;
	$prepareNativeStatic(WCheckboxPeer, getCheckMarkSize, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

$Dimension* WCheckboxPeer::getMinimumSize() {
	$useLocalCurrentObjectStackCache();
	$var($String, lbl, $nc(($cast($Checkbox, this->target)))->getLabel());
	int32_t marksize = getCheckMarkSize();
	if (lbl == nullptr) {
		$assign(lbl, ""_s);
	}
	$var($FontMetrics, fm, getFontMetrics($($nc(($cast($Checkbox, this->target)))->getFont())));
	int32_t var$0 = $nc(fm)->stringWidth(lbl) + marksize / 2 + marksize;
	return $new($Dimension, var$0, $Math::max(fm->getHeight() + 8, marksize));
}

bool WCheckboxPeer::isFocusable() {
	return true;
}

void WCheckboxPeer::init$($Checkbox* target) {
	$WComponentPeer::init$(target);
}

void WCheckboxPeer::create($WComponentPeer* parent) {
	$prepareNative(WCheckboxPeer, create, void, $WComponentPeer* parent);
	$invokeNative(parent);
	$finishNative();
}

void WCheckboxPeer::initialize() {
	$useLocalCurrentObjectStackCache();
	$var($Checkbox, t, $cast($Checkbox, this->target));
	setState($nc(t)->getState());
	setCheckboxGroup($($nc(t)->getCheckboxGroup()));
	$var($Color, bg, $nc(($cast($Component, this->target)))->getBackground());
	if (bg != nullptr) {
		setBackground(bg);
	}
	$WComponentPeer::initialize();
}

bool WCheckboxPeer::shouldClearRectBeforePaint() {
	return false;
}

void WCheckboxPeer::handleAction(bool state) {
	$useLocalCurrentObjectStackCache();
	$var($Checkbox, cb, $cast($Checkbox, this->target));
	$WToolkit::executeOnEventHandlerThread(cb, $$new($WCheckboxPeer$1, this, cb, state));
}

WCheckboxPeer::WCheckboxPeer() {
}

$Class* WCheckboxPeer::load$($String* name, bool initialize) {
	$loadClass(WCheckboxPeer, name, initialize, &_WCheckboxPeer_ClassInfo_, allocate$WCheckboxPeer);
	return class$;
}

$Class* WCheckboxPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun