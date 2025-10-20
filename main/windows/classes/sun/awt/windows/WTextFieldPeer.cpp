#include <sun/awt/windows/WTextFieldPeer.h>

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
#include <java/awt/TextField.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/im/InputMethodRequests.h>
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
#include <sun/awt/windows/WTextComponentPeer.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef KEY_TYPED

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
using $TextField = ::java::awt::TextField;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $TextFieldPeer = ::java::awt::peer::TextFieldPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WObjectPeer = ::sun::awt::windows::WObjectPeer;
using $WTextComponentPeer = ::sun::awt::windows::WTextComponentPeer;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WTextFieldPeer_MethodInfo_[] = {
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
	{"*getCaretPosition", "()I", nullptr, $PUBLIC},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $NATIVE},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getSelectionEnd", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*getSelectionStart", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $NATIVE},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/TextField;)V", nullptr, 0, $method(static_cast<void(WTextFieldPeer::*)($TextField*)>(&WTextFieldPeer::init$))},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $NATIVE},
	{"getInputMethodRequests", "()Ljava/awt/im/InputMethodRequests;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"handleJavaKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC},
	{"initialize", "()V", nullptr, 0},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"*select", "(II)V", nullptr, $PUBLIC | $NATIVE},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"*setCaretPosition", "(I)V", nullptr, $PUBLIC},
	{"setEchoChar", "(C)V", nullptr, $PUBLIC | $NATIVE},
	{"*setEditable", "(Z)V", nullptr, $PUBLIC},
	{"*setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $NATIVE},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_create 27
#define _METHOD_INDEX_setEchoChar 46

$ClassInfo _WTextFieldPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WTextFieldPeer",
	"sun.awt.windows.WTextComponentPeer",
	"java.awt.peer.TextFieldPeer",
	nullptr,
	_WTextFieldPeer_MethodInfo_
};

$Object* allocate$WTextFieldPeer($Class* clazz) {
	return $of($alloc(WTextFieldPeer));
}

void WTextFieldPeer::setEditable(bool editable) {
	this->$WTextComponentPeer::setEditable(editable);
}

$String* WTextFieldPeer::getText() {
	 return this->$WTextComponentPeer::getText();
}

void WTextFieldPeer::setText($String* text) {
	this->$WTextComponentPeer::setText(text);
}

int32_t WTextFieldPeer::getSelectionStart() {
	 return this->$WTextComponentPeer::getSelectionStart();
}

int32_t WTextFieldPeer::getSelectionEnd() {
	 return this->$WTextComponentPeer::getSelectionEnd();
}

void WTextFieldPeer::select(int32_t selStart, int32_t selEnd) {
	this->$WTextComponentPeer::select(selStart, selEnd);
}

bool WTextFieldPeer::isFocusable() {
	 return this->$WTextComponentPeer::isFocusable();
}

void WTextFieldPeer::setCaretPosition(int32_t pos) {
	this->$WTextComponentPeer::setCaretPosition(pos);
}

int32_t WTextFieldPeer::getCaretPosition() {
	 return this->$WTextComponentPeer::getCaretPosition();
}

bool WTextFieldPeer::isObscured() {
	 return this->$WTextComponentPeer::isObscured();
}

bool WTextFieldPeer::canDetermineObscurity() {
	 return this->$WTextComponentPeer::canDetermineObscurity();
}

$Point* WTextFieldPeer::getLocationOnScreen() {
	 return this->$WTextComponentPeer::getLocationOnScreen();
}

void WTextFieldPeer::setVisible(bool b) {
	this->$WTextComponentPeer::setVisible(b);
}

void WTextFieldPeer::setEnabled(bool b) {
	this->$WTextComponentPeer::setEnabled(b);
}

void WTextFieldPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WTextComponentPeer::setBounds(x, y, width, height, op);
}

void WTextFieldPeer::paint($Graphics* g) {
	this->$WTextComponentPeer::paint(g);
}

void WTextFieldPeer::print($Graphics* g) {
	this->$WTextComponentPeer::print(g);
}

void WTextFieldPeer::coalescePaintEvent($PaintEvent* e) {
	this->$WTextComponentPeer::coalescePaintEvent(e);
}

void WTextFieldPeer::handleEvent($AWTEvent* e) {
	this->$WTextComponentPeer::handleEvent(e);
}

$Dimension* WTextFieldPeer::getPreferredSize() {
	 return this->$WTextComponentPeer::getPreferredSize();
}

void WTextFieldPeer::layout() {
	this->$WTextComponentPeer::layout();
}

$GraphicsConfiguration* WTextFieldPeer::getGraphicsConfiguration() {
	 return this->$WTextComponentPeer::getGraphicsConfiguration();
}

bool WTextFieldPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WTextComponentPeer::updateGraphicsData(gc);
}

$ColorModel* WTextFieldPeer::getColorModel() {
	 return this->$WTextComponentPeer::getColorModel();
}

$Graphics* WTextFieldPeer::getGraphics() {
	 return this->$WTextComponentPeer::getGraphics();
}

$FontMetrics* WTextFieldPeer::getFontMetrics($Font* font) {
	 return this->$WTextComponentPeer::getFontMetrics(font);
}

void WTextFieldPeer::setForeground($Color* c) {
	this->$WTextComponentPeer::setForeground(c);
}

void WTextFieldPeer::setBackground($Color* c) {
	this->$WTextComponentPeer::setBackground(c);
}

void WTextFieldPeer::setFont($Font* f) {
	this->$WTextComponentPeer::setFont(f);
}

void WTextFieldPeer::updateCursorImmediately() {
	this->$WTextComponentPeer::updateCursorImmediately();
}

bool WTextFieldPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WTextComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WTextFieldPeer::createImage(int32_t width, int32_t height) {
	 return this->$WTextComponentPeer::createImage(width, height);
}

$VolatileImage* WTextFieldPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WTextComponentPeer::createVolatileImage(width, height);
}

$String* WTextFieldPeer::toString() {
	 return this->$WTextComponentPeer::toString();
}

bool WTextFieldPeer::handlesWheelScrolling() {
	 return this->$WTextComponentPeer::handlesWheelScrolling();
}

void WTextFieldPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WTextComponentPeer::createBuffers(numBuffers, caps);
}

void WTextFieldPeer::destroyBuffers() {
	this->$WTextComponentPeer::destroyBuffers();
}

void WTextFieldPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WTextComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WTextFieldPeer::getBackBuffer() {
	 return this->$WTextComponentPeer::getBackBuffer();
}

void WTextFieldPeer::reparent($ContainerPeer* newNativeParent) {
	this->$WTextComponentPeer::reparent(newNativeParent);
}

bool WTextFieldPeer::isReparentSupported() {
	 return this->$WTextComponentPeer::isReparentSupported();
}

void WTextFieldPeer::applyShape($Region* shape) {
	this->$WTextComponentPeer::applyShape(shape);
}

void WTextFieldPeer::setZOrder($ComponentPeer* above) {
	this->$WTextComponentPeer::setZOrder(above);
}

void WTextFieldPeer::dispose() {
	this->$WTextComponentPeer::dispose();
}

int32_t WTextFieldPeer::hashCode() {
	 return this->$WTextComponentPeer::hashCode();
}

bool WTextFieldPeer::equals(Object$* arg0) {
	 return this->$WTextComponentPeer::equals(arg0);
}

$Object* WTextFieldPeer::clone() {
	 return this->$WTextComponentPeer::clone();
}

void WTextFieldPeer::finalize() {
	this->$WTextComponentPeer::finalize();
}

$Dimension* WTextFieldPeer::getMinimumSize() {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, getFontMetrics($($nc(($cast($TextField, this->target)))->getFont())));
	int32_t var$0 = $nc(fm)->stringWidth($(getText())) + 24;
	return $new($Dimension, var$0, fm->getHeight() + 8);
}

bool WTextFieldPeer::handleJavaKeyEvent($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	switch ($nc(e)->getID()) {
	case $KeyEvent::KEY_TYPED:
		{
			bool var$1 = (e->getKeyChar() == u'\n');
			bool var$0 = var$1 && !e->isAltDown();
			if (var$0 && !e->isControlDown()) {
				$var($Object, var$2, this->target);
				$var($String, var$3, getText());
				int64_t var$4 = e->getWhen();
				postEvent($$new($ActionEvent, var$2, $ActionEvent::ACTION_PERFORMED, var$3, var$4, e->getModifiers()));
				return true;
			}
			break;
		}
	}
	return false;
}

void WTextFieldPeer::setEchoChar(char16_t echoChar) {
	$prepareNative(WTextFieldPeer, setEchoChar, void, char16_t echoChar);
	$invokeNative(WTextFieldPeer, setEchoChar, echoChar);
	$finishNative();
}

$Dimension* WTextFieldPeer::getPreferredSize(int32_t cols) {
	return getMinimumSize(cols);
}

$Dimension* WTextFieldPeer::getMinimumSize(int32_t cols) {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, getFontMetrics($($nc(($cast($TextField, this->target)))->getFont())));
	int32_t var$0 = $nc(fm)->charWidth(u'0') * cols + 24;
	return $new($Dimension, var$0, fm->getHeight() + 8);
}

$InputMethodRequests* WTextFieldPeer::getInputMethodRequests() {
	return nullptr;
}

void WTextFieldPeer::init$($TextField* target) {
	$WTextComponentPeer::init$(target);
}

void WTextFieldPeer::create($WComponentPeer* parent) {
	$prepareNative(WTextFieldPeer, create, void, $WComponentPeer* parent);
	$invokeNative(WTextFieldPeer, create, parent);
	$finishNative();
}

void WTextFieldPeer::initialize() {
	$var($TextField, tf, $cast($TextField, this->target));
	if ($nc(tf)->echoCharIsSet()) {
		setEchoChar(tf->getEchoChar());
	}
	$WTextComponentPeer::initialize();
}

WTextFieldPeer::WTextFieldPeer() {
}

$Class* WTextFieldPeer::load$($String* name, bool initialize) {
	$loadClass(WTextFieldPeer, name, initialize, &_WTextFieldPeer_ClassInfo_, allocate$WTextFieldPeer);
	return class$;
}

$Class* WTextFieldPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun