#include <sun/awt/windows/WButtonPeer.h>

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
#include <java/awt/Point.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WButtonPeer$1.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef KEY_RELEASED
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
using $Point = ::java::awt::Point;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ButtonPeer = ::java::awt::peer::ButtonPeer;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SunToolkit = ::sun::awt::SunToolkit;
using $WButtonPeer$1 = ::sun::awt::windows::WButtonPeer$1;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WButtonPeer_MethodInfo_[] = {
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
	{"<init>", "(Ljava/awt/Button;)V", nullptr, 0, $method(static_cast<void(WButtonPeer::*)($Button*)>(&WButtonPeer::init$))},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $NATIVE},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"handleAction", "(JI)V", nullptr, $PUBLIC, $method(static_cast<void(WButtonPeer::*)(int64_t,int32_t)>(&WButtonPeer::handleAction))},
	{"handleJavaKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WButtonPeer::initIDs))},
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
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $NATIVE},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"shouldClearRectBeforePaint", "()Z", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_create 23
#define _METHOD_INDEX_initIDs 27
#define _METHOD_INDEX_setLabel 41

$InnerClassInfo _WButtonPeer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WButtonPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WButtonPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WButtonPeer",
	"sun.awt.windows.WComponentPeer",
	"java.awt.peer.ButtonPeer",
	nullptr,
	_WButtonPeer_MethodInfo_,
	nullptr,
	nullptr,
	_WButtonPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WButtonPeer$1"
};

$Object* allocate$WButtonPeer($Class* clazz) {
	return $of($alloc(WButtonPeer));
}

bool WButtonPeer::isObscured() {
	 return this->$WComponentPeer::isObscured();
}

bool WButtonPeer::canDetermineObscurity() {
	 return this->$WComponentPeer::canDetermineObscurity();
}

$Point* WButtonPeer::getLocationOnScreen() {
	 return this->$WComponentPeer::getLocationOnScreen();
}

void WButtonPeer::setVisible(bool b) {
	this->$WComponentPeer::setVisible(b);
}

void WButtonPeer::setEnabled(bool b) {
	this->$WComponentPeer::setEnabled(b);
}

void WButtonPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WComponentPeer::setBounds(x, y, width, height, op);
}

void WButtonPeer::paint($Graphics* g) {
	this->$WComponentPeer::paint(g);
}

void WButtonPeer::print($Graphics* g) {
	this->$WComponentPeer::print(g);
}

void WButtonPeer::coalescePaintEvent($PaintEvent* e) {
	this->$WComponentPeer::coalescePaintEvent(e);
}

void WButtonPeer::handleEvent($AWTEvent* e) {
	this->$WComponentPeer::handleEvent(e);
}

$Dimension* WButtonPeer::getPreferredSize() {
	 return this->$WComponentPeer::getPreferredSize();
}

void WButtonPeer::layout() {
	this->$WComponentPeer::layout();
}

$GraphicsConfiguration* WButtonPeer::getGraphicsConfiguration() {
	 return this->$WComponentPeer::getGraphicsConfiguration();
}

bool WButtonPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WComponentPeer::updateGraphicsData(gc);
}

$ColorModel* WButtonPeer::getColorModel() {
	 return this->$WComponentPeer::getColorModel();
}

$Graphics* WButtonPeer::getGraphics() {
	 return this->$WComponentPeer::getGraphics();
}

$FontMetrics* WButtonPeer::getFontMetrics($Font* font) {
	 return this->$WComponentPeer::getFontMetrics(font);
}

void WButtonPeer::setForeground($Color* c) {
	this->$WComponentPeer::setForeground(c);
}

void WButtonPeer::setBackground($Color* c) {
	this->$WComponentPeer::setBackground(c);
}

void WButtonPeer::setFont($Font* f) {
	this->$WComponentPeer::setFont(f);
}

void WButtonPeer::updateCursorImmediately() {
	this->$WComponentPeer::updateCursorImmediately();
}

bool WButtonPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WButtonPeer::createImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createImage(width, height);
}

$VolatileImage* WButtonPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createVolatileImage(width, height);
}

$String* WButtonPeer::toString() {
	 return this->$WComponentPeer::toString();
}

bool WButtonPeer::handlesWheelScrolling() {
	 return this->$WComponentPeer::handlesWheelScrolling();
}

void WButtonPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WComponentPeer::createBuffers(numBuffers, caps);
}

void WButtonPeer::destroyBuffers() {
	this->$WComponentPeer::destroyBuffers();
}

void WButtonPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WButtonPeer::getBackBuffer() {
	 return this->$WComponentPeer::getBackBuffer();
}

void WButtonPeer::reparent($ContainerPeer* newNativeParent) {
	this->$WComponentPeer::reparent(newNativeParent);
}

bool WButtonPeer::isReparentSupported() {
	 return this->$WComponentPeer::isReparentSupported();
}

void WButtonPeer::applyShape($Region* shape) {
	this->$WComponentPeer::applyShape(shape);
}

void WButtonPeer::setZOrder($ComponentPeer* above) {
	this->$WComponentPeer::setZOrder(above);
}

void WButtonPeer::dispose() {
	this->$WComponentPeer::dispose();
}

int32_t WButtonPeer::hashCode() {
	 return this->$WComponentPeer::hashCode();
}

bool WButtonPeer::equals(Object$* arg0) {
	 return this->$WComponentPeer::equals(arg0);
}

$Object* WButtonPeer::clone() {
	 return this->$WComponentPeer::clone();
}

void WButtonPeer::finalize() {
	this->$WComponentPeer::finalize();
}

$Dimension* WButtonPeer::getMinimumSize() {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, getFontMetrics($($nc(($cast($Button, this->target)))->getFont())));
	$var($String, label, $nc(($cast($Button, this->target)))->getLabel());
	if (label == nullptr) {
		$assign(label, ""_s);
	}
	int32_t var$0 = $nc(fm)->stringWidth(label) + 14;
	return $new($Dimension, var$0, fm->getHeight() + 8);
}

bool WButtonPeer::isFocusable() {
	return true;
}

void WButtonPeer::setLabel($String* label) {
	$prepareNative(WButtonPeer, setLabel, void, $String* label);
	$invokeNative(WButtonPeer, setLabel, label);
	$finishNative();
}

void WButtonPeer::init$($Button* target) {
	$WComponentPeer::init$(target);
}

void WButtonPeer::create($WComponentPeer* peer) {
	$prepareNative(WButtonPeer, create, void, $WComponentPeer* peer);
	$invokeNative(WButtonPeer, create, peer);
	$finishNative();
}

void WButtonPeer::handleAction(int64_t when, int32_t modifiers) {
	$WToolkit::executeOnEventHandlerThread(this->target, $$new($WButtonPeer$1, this, when, modifiers), when);
}

bool WButtonPeer::shouldClearRectBeforePaint() {
	return false;
}

void WButtonPeer::initIDs() {
	$init(WButtonPeer);
	$prepareNativeStatic(WButtonPeer, initIDs, void);
	$invokeNativeStatic(WButtonPeer, initIDs);
	$finishNativeStatic();
}

bool WButtonPeer::handleJavaKeyEvent($KeyEvent* e) {
	switch ($nc(e)->getID()) {
	case $KeyEvent::KEY_RELEASED:
		{
			if (e->getKeyCode() == $KeyEvent::VK_SPACE) {
				int64_t var$0 = e->getWhen();
				handleAction(var$0, e->getModifiers());
			}
			break;
		}
	}
	return false;
}

void clinit$WButtonPeer($Class* class$) {
	{
		WButtonPeer::initIDs();
	}
}

WButtonPeer::WButtonPeer() {
}

$Class* WButtonPeer::load$($String* name, bool initialize) {
	$loadClass(WButtonPeer, name, initialize, &_WButtonPeer_ClassInfo_, clinit$WButtonPeer, allocate$WButtonPeer);
	return class$;
}

$Class* WButtonPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun