#include <sun/awt/windows/WTextComponentPeer.h>

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
#include <java/awt/TextComponent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/event/TextEvent.h>
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

#undef TEXT_VALUE_CHANGED

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
using $TextComponent = ::java::awt::TextComponent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $TextEvent = ::java::awt::event::TextEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $TextComponentPeer = ::java::awt::peer::TextComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WTextComponentPeer_MethodInfo_[] = {
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
	{"<init>", "(Ljava/awt/TextComponent;)V", nullptr, 0, $method(static_cast<void(WTextComponentPeer::*)($TextComponent*)>(&WTextComponentPeer::init$))},
	{"enableEditing", "(Z)V", nullptr, $NATIVE},
	{"getCaretPosition", "()I", nullptr, $PUBLIC},
	{"getSelectionEnd", "()I", nullptr, $PUBLIC | $NATIVE},
	{"getSelectionStart", "()I", nullptr, $PUBLIC | $NATIVE},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $NATIVE},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&WTextComponentPeer::initIDs))},
	{"initialize", "()V", nullptr, 0},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"select", "(II)V", nullptr, $PUBLIC | $NATIVE},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setCaretPosition", "(I)V", nullptr, $PUBLIC},
	{"setEditable", "(Z)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $NATIVE},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"shouldClearRectBeforePaint", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"valueChanged", "()V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_enableEditing 24
#define _METHOD_INDEX_getSelectionEnd 26
#define _METHOD_INDEX_getSelectionStart 27
#define _METHOD_INDEX_getText 28
#define _METHOD_INDEX_initIDs 29
#define _METHOD_INDEX_select 39
#define _METHOD_INDEX_setText 47

$ClassInfo _WTextComponentPeer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.awt.windows.WTextComponentPeer",
	"sun.awt.windows.WComponentPeer",
	"java.awt.peer.TextComponentPeer",
	nullptr,
	_WTextComponentPeer_MethodInfo_
};

$Object* allocate$WTextComponentPeer($Class* clazz) {
	return $of($alloc(WTextComponentPeer));
}

bool WTextComponentPeer::isObscured() {
	 return this->$WComponentPeer::isObscured();
}

bool WTextComponentPeer::canDetermineObscurity() {
	 return this->$WComponentPeer::canDetermineObscurity();
}

$Point* WTextComponentPeer::getLocationOnScreen() {
	 return this->$WComponentPeer::getLocationOnScreen();
}

void WTextComponentPeer::setVisible(bool b) {
	this->$WComponentPeer::setVisible(b);
}

void WTextComponentPeer::setEnabled(bool b) {
	this->$WComponentPeer::setEnabled(b);
}

void WTextComponentPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WComponentPeer::setBounds(x, y, width, height, op);
}

void WTextComponentPeer::paint($Graphics* g) {
	this->$WComponentPeer::paint(g);
}

void WTextComponentPeer::print($Graphics* g) {
	this->$WComponentPeer::print(g);
}

void WTextComponentPeer::coalescePaintEvent($PaintEvent* e) {
	this->$WComponentPeer::coalescePaintEvent(e);
}

void WTextComponentPeer::handleEvent($AWTEvent* e) {
	this->$WComponentPeer::handleEvent(e);
}

$Dimension* WTextComponentPeer::getMinimumSize() {
	 return this->$WComponentPeer::getMinimumSize();
}

$Dimension* WTextComponentPeer::getPreferredSize() {
	 return this->$WComponentPeer::getPreferredSize();
}

void WTextComponentPeer::layout() {
	this->$WComponentPeer::layout();
}

$GraphicsConfiguration* WTextComponentPeer::getGraphicsConfiguration() {
	 return this->$WComponentPeer::getGraphicsConfiguration();
}

bool WTextComponentPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WComponentPeer::updateGraphicsData(gc);
}

$ColorModel* WTextComponentPeer::getColorModel() {
	 return this->$WComponentPeer::getColorModel();
}

$Graphics* WTextComponentPeer::getGraphics() {
	 return this->$WComponentPeer::getGraphics();
}

$FontMetrics* WTextComponentPeer::getFontMetrics($Font* font) {
	 return this->$WComponentPeer::getFontMetrics(font);
}

void WTextComponentPeer::setForeground($Color* c) {
	this->$WComponentPeer::setForeground(c);
}

void WTextComponentPeer::setBackground($Color* c) {
	this->$WComponentPeer::setBackground(c);
}

void WTextComponentPeer::setFont($Font* f) {
	this->$WComponentPeer::setFont(f);
}

void WTextComponentPeer::updateCursorImmediately() {
	this->$WComponentPeer::updateCursorImmediately();
}

bool WTextComponentPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WTextComponentPeer::createImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createImage(width, height);
}

$VolatileImage* WTextComponentPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WComponentPeer::createVolatileImage(width, height);
}

$String* WTextComponentPeer::toString() {
	 return this->$WComponentPeer::toString();
}

bool WTextComponentPeer::handlesWheelScrolling() {
	 return this->$WComponentPeer::handlesWheelScrolling();
}

void WTextComponentPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WComponentPeer::createBuffers(numBuffers, caps);
}

void WTextComponentPeer::destroyBuffers() {
	this->$WComponentPeer::destroyBuffers();
}

void WTextComponentPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WTextComponentPeer::getBackBuffer() {
	 return this->$WComponentPeer::getBackBuffer();
}

void WTextComponentPeer::reparent($ContainerPeer* newNativeParent) {
	this->$WComponentPeer::reparent(newNativeParent);
}

bool WTextComponentPeer::isReparentSupported() {
	 return this->$WComponentPeer::isReparentSupported();
}

void WTextComponentPeer::applyShape($Region* shape) {
	this->$WComponentPeer::applyShape(shape);
}

void WTextComponentPeer::setZOrder($ComponentPeer* above) {
	this->$WComponentPeer::setZOrder(above);
}

void WTextComponentPeer::dispose() {
	this->$WComponentPeer::dispose();
}

int32_t WTextComponentPeer::hashCode() {
	 return this->$WComponentPeer::hashCode();
}

bool WTextComponentPeer::equals(Object$* arg0) {
	 return this->$WComponentPeer::equals(arg0);
}

$Object* WTextComponentPeer::clone() {
	 return this->$WComponentPeer::clone();
}

void WTextComponentPeer::finalize() {
	this->$WComponentPeer::finalize();
}

void WTextComponentPeer::setEditable(bool editable) {
	enableEditing(editable);
	setBackground($($nc(($cast($TextComponent, this->target)))->getBackground()));
}

$String* WTextComponentPeer::getText() {
	$var($String, $ret, nullptr);
	$prepareNative(WTextComponentPeer, getText, $String*);
	$assign($ret, $invokeNative(WTextComponentPeer, getText));
	$finishNative();
	return $ret;
}

void WTextComponentPeer::setText($String* text) {
	$prepareNative(WTextComponentPeer, setText, void, $String* text);
	$invokeNative(WTextComponentPeer, setText, text);
	$finishNative();
}

int32_t WTextComponentPeer::getSelectionStart() {
	int32_t $ret = 0;
	$prepareNative(WTextComponentPeer, getSelectionStart, int32_t);
	$ret = $invokeNative(WTextComponentPeer, getSelectionStart);
	$finishNative();
	return $ret;
}

int32_t WTextComponentPeer::getSelectionEnd() {
	int32_t $ret = 0;
	$prepareNative(WTextComponentPeer, getSelectionEnd, int32_t);
	$ret = $invokeNative(WTextComponentPeer, getSelectionEnd);
	$finishNative();
	return $ret;
}

void WTextComponentPeer::select(int32_t selStart, int32_t selEnd) {
	$prepareNative(WTextComponentPeer, select, void, int32_t selStart, int32_t selEnd);
	$invokeNative(WTextComponentPeer, select, selStart, selEnd);
	$finishNative();
}

void WTextComponentPeer::init$($TextComponent* target) {
	$WComponentPeer::init$(target);
}

void WTextComponentPeer::initialize() {
	$var($TextComponent, tc, $cast($TextComponent, this->target));
	$var($String, text, $nc(tc)->getText());
	if (text != nullptr) {
		setText(text);
	}
	int32_t var$0 = tc->getSelectionStart();
	select(var$0, tc->getSelectionEnd());
	setEditable(tc->isEditable());
	$WComponentPeer::initialize();
}

void WTextComponentPeer::enableEditing(bool e) {
	$prepareNative(WTextComponentPeer, enableEditing, void, bool e);
	$invokeNative(WTextComponentPeer, enableEditing, e);
	$finishNative();
}

bool WTextComponentPeer::isFocusable() {
	return true;
}

void WTextComponentPeer::setCaretPosition(int32_t pos) {
	select(pos, pos);
}

int32_t WTextComponentPeer::getCaretPosition() {
	return getSelectionStart();
}

void WTextComponentPeer::valueChanged() {
	postEvent($$new($TextEvent, this->target, $TextEvent::TEXT_VALUE_CHANGED));
}

void WTextComponentPeer::initIDs() {
	$init(WTextComponentPeer);
	$prepareNativeStatic(WTextComponentPeer, initIDs, void);
	$invokeNativeStatic(WTextComponentPeer, initIDs);
	$finishNativeStatic();
}

bool WTextComponentPeer::shouldClearRectBeforePaint() {
	return false;
}

void clinit$WTextComponentPeer($Class* class$) {
	{
		WTextComponentPeer::initIDs();
	}
}

WTextComponentPeer::WTextComponentPeer() {
}

$Class* WTextComponentPeer::load$($String* name, bool initialize) {
	$loadClass(WTextComponentPeer, name, initialize, &_WTextComponentPeer_ClassInfo_, clinit$WTextComponentPeer, allocate$WTextComponentPeer);
	return class$;
}

$Class* WTextComponentPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun