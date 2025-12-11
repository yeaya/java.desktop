#include <sun/awt/windows/WTextAreaPeer.h>

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
#include <java/awt/TextArea.h>
#include <java/awt/TextComponent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <sun/awt/windows/WComponentPeer.h>
#include <sun/awt/windows/WTextComponentPeer.h>
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
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $TextArea = ::java::awt::TextArea;
using $TextComponent = ::java::awt::TextComponent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WComponentPeer = ::sun::awt::windows::WComponentPeer;
using $WTextComponentPeer = ::sun::awt::windows::WTextComponentPeer;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WTextAreaPeer_MethodInfo_[] = {
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
	{"<init>", "(Ljava/awt/TextArea;)V", nullptr, 0, $method(static_cast<void(WTextAreaPeer::*)($TextArea*)>(&WTextAreaPeer::init$))},
	{"create", "(Lsun/awt/windows/WComponentPeer;)V", nullptr, $NATIVE},
	{"getInputMethodRequests", "()Ljava/awt/im/InputMethodRequests;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"insert", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"*isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC | $NATIVE},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"replaceRange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC | $NATIVE},
	{"*setEditable", "(Z)V", nullptr, $PUBLIC},
	{"*setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $NATIVE},
	{"*select", "(II)V", nullptr, $PUBLIC | $NATIVE},
	{"*setCaretPosition", "(I)V", nullptr, $PUBLIC},
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
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_create 27
#define _METHOD_INDEX_replaceRange 40

$ClassInfo _WTextAreaPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WTextAreaPeer",
	"sun.awt.windows.WTextComponentPeer",
	"java.awt.peer.TextAreaPeer",
	nullptr,
	_WTextAreaPeer_MethodInfo_
};

$Object* allocate$WTextAreaPeer($Class* clazz) {
	return $of($alloc(WTextAreaPeer));
}

void WTextAreaPeer::setEditable(bool editable) {
	this->$WTextComponentPeer::setEditable(editable);
}

$String* WTextAreaPeer::getText() {
	 return this->$WTextComponentPeer::getText();
}

void WTextAreaPeer::setText($String* text) {
	this->$WTextComponentPeer::setText(text);
}

int32_t WTextAreaPeer::getSelectionStart() {
	 return this->$WTextComponentPeer::getSelectionStart();
}

int32_t WTextAreaPeer::getSelectionEnd() {
	 return this->$WTextComponentPeer::getSelectionEnd();
}

void WTextAreaPeer::select(int32_t selStart, int32_t selEnd) {
	this->$WTextComponentPeer::select(selStart, selEnd);
}

bool WTextAreaPeer::isFocusable() {
	 return this->$WTextComponentPeer::isFocusable();
}

void WTextAreaPeer::setCaretPosition(int32_t pos) {
	this->$WTextComponentPeer::setCaretPosition(pos);
}

int32_t WTextAreaPeer::getCaretPosition() {
	 return this->$WTextComponentPeer::getCaretPosition();
}

bool WTextAreaPeer::isObscured() {
	 return this->$WTextComponentPeer::isObscured();
}

bool WTextAreaPeer::canDetermineObscurity() {
	 return this->$WTextComponentPeer::canDetermineObscurity();
}

$Point* WTextAreaPeer::getLocationOnScreen() {
	 return this->$WTextComponentPeer::getLocationOnScreen();
}

void WTextAreaPeer::setVisible(bool b) {
	this->$WTextComponentPeer::setVisible(b);
}

void WTextAreaPeer::setEnabled(bool b) {
	this->$WTextComponentPeer::setEnabled(b);
}

void WTextAreaPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	this->$WTextComponentPeer::setBounds(x, y, width, height, op);
}

void WTextAreaPeer::paint($Graphics* g) {
	this->$WTextComponentPeer::paint(g);
}

void WTextAreaPeer::print($Graphics* g) {
	this->$WTextComponentPeer::print(g);
}

void WTextAreaPeer::coalescePaintEvent($PaintEvent* e) {
	this->$WTextComponentPeer::coalescePaintEvent(e);
}

void WTextAreaPeer::handleEvent($AWTEvent* e) {
	this->$WTextComponentPeer::handleEvent(e);
}

$Dimension* WTextAreaPeer::getPreferredSize() {
	 return this->$WTextComponentPeer::getPreferredSize();
}

void WTextAreaPeer::layout() {
	this->$WTextComponentPeer::layout();
}

$GraphicsConfiguration* WTextAreaPeer::getGraphicsConfiguration() {
	 return this->$WTextComponentPeer::getGraphicsConfiguration();
}

bool WTextAreaPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$WTextComponentPeer::updateGraphicsData(gc);
}

$ColorModel* WTextAreaPeer::getColorModel() {
	 return this->$WTextComponentPeer::getColorModel();
}

$Graphics* WTextAreaPeer::getGraphics() {
	 return this->$WTextComponentPeer::getGraphics();
}

$FontMetrics* WTextAreaPeer::getFontMetrics($Font* font) {
	 return this->$WTextComponentPeer::getFontMetrics(font);
}

void WTextAreaPeer::setForeground($Color* c) {
	this->$WTextComponentPeer::setForeground(c);
}

void WTextAreaPeer::setBackground($Color* c) {
	this->$WTextComponentPeer::setBackground(c);
}

void WTextAreaPeer::setFont($Font* f) {
	this->$WTextComponentPeer::setFont(f);
}

void WTextAreaPeer::updateCursorImmediately() {
	this->$WTextComponentPeer::updateCursorImmediately();
}

bool WTextAreaPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$WTextComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* WTextAreaPeer::createImage(int32_t width, int32_t height) {
	 return this->$WTextComponentPeer::createImage(width, height);
}

$VolatileImage* WTextAreaPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$WTextComponentPeer::createVolatileImage(width, height);
}

$String* WTextAreaPeer::toString() {
	 return this->$WTextComponentPeer::toString();
}

bool WTextAreaPeer::handlesWheelScrolling() {
	 return this->$WTextComponentPeer::handlesWheelScrolling();
}

void WTextAreaPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$WTextComponentPeer::createBuffers(numBuffers, caps);
}

void WTextAreaPeer::destroyBuffers() {
	this->$WTextComponentPeer::destroyBuffers();
}

void WTextAreaPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$WTextComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* WTextAreaPeer::getBackBuffer() {
	 return this->$WTextComponentPeer::getBackBuffer();
}

void WTextAreaPeer::reparent($ContainerPeer* newNativeParent) {
	this->$WTextComponentPeer::reparent(newNativeParent);
}

bool WTextAreaPeer::isReparentSupported() {
	 return this->$WTextComponentPeer::isReparentSupported();
}

void WTextAreaPeer::applyShape($Region* shape) {
	this->$WTextComponentPeer::applyShape(shape);
}

void WTextAreaPeer::setZOrder($ComponentPeer* above) {
	this->$WTextComponentPeer::setZOrder(above);
}

void WTextAreaPeer::dispose() {
	this->$WTextComponentPeer::dispose();
}

int32_t WTextAreaPeer::hashCode() {
	 return this->$WTextComponentPeer::hashCode();
}

bool WTextAreaPeer::equals(Object$* arg0) {
	 return this->$WTextComponentPeer::equals(arg0);
}

$Object* WTextAreaPeer::clone() {
	 return this->$WTextComponentPeer::clone();
}

void WTextAreaPeer::finalize() {
	this->$WTextComponentPeer::finalize();
}

$Dimension* WTextAreaPeer::getMinimumSize() {
	return getMinimumSize(10, 60);
}

void WTextAreaPeer::insert($String* text, int32_t pos) {
	replaceRange(text, pos, pos);
}

void WTextAreaPeer::replaceRange($String* text, int32_t start, int32_t end) {
	$prepareNative(WTextAreaPeer, replaceRange, void, $String* text, int32_t start, int32_t end);
	$invokeNative(text, start, end);
	$finishNative();
}

$Dimension* WTextAreaPeer::getPreferredSize(int32_t rows, int32_t cols) {
	return getMinimumSize(rows, cols);
}

$Dimension* WTextAreaPeer::getMinimumSize(int32_t rows, int32_t cols) {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, getFontMetrics($($nc(($cast($TextArea, this->target)))->getFont())));
	int32_t var$0 = $nc(fm)->charWidth(u'0') * cols + 20;
	return $new($Dimension, var$0, fm->getHeight() * rows + 20);
}

$InputMethodRequests* WTextAreaPeer::getInputMethodRequests() {
	return nullptr;
}

void WTextAreaPeer::init$($TextArea* target) {
	$WTextComponentPeer::init$(target);
}

void WTextAreaPeer::create($WComponentPeer* parent) {
	$prepareNative(WTextAreaPeer, create, void, $WComponentPeer* parent);
	$invokeNative(parent);
	$finishNative();
}

WTextAreaPeer::WTextAreaPeer() {
}

$Class* WTextAreaPeer::load$($String* name, bool initialize) {
	$loadClass(WTextAreaPeer, name, initialize, &_WTextAreaPeer_ClassInfo_, allocate$WTextAreaPeer);
	return class$;
}

$Class* WTextAreaPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun