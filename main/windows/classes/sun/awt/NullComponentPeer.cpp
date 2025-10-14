#include <sun/awt/NullComponentPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTException.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Event.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $AWTException = ::java::awt::AWTException;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Event = ::java::awt::Event;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $CanvasPeer = ::java::awt::peer::CanvasPeer;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $PanelPeer = ::java::awt::peer::PanelPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {

$MethodInfo _NullComponentPeer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NullComponentPeer::*)()>(&NullComponentPeer::init$))},
	{"applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"beginLayout", "()V", nullptr, $PUBLIC},
	{"beginValidate", "()V", nullptr, $PUBLIC},
	{"canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"destroyBuffers", "()V", nullptr, $PUBLIC},
	{"disable", "()V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"enable", "()V", nullptr, $PUBLIC},
	{"endLayout", "()V", nullptr, $PUBLIC},
	{"endValidate", "()V", nullptr, $PUBLIC},
	{"flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"getAppropriateGraphicsConfiguration", "(Ljava/awt/GraphicsConfiguration;)Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"handleEvent", "(Ljava/awt/Event;)Z", nullptr, $PUBLIC},
	{"handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"hide", "()V", nullptr, $PUBLIC},
	{"insets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"isObscured", "()Z", nullptr, $PUBLIC},
	{"isPaintPending", "()Z", nullptr, $PUBLIC},
	{"isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"layout", "()V", nullptr, $PUBLIC},
	{"minimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"preferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"repaint", "(JIIII)V", nullptr, $PUBLIC},
	{"reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"reshape", "(IIII)V", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"show", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NullComponentPeer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.NullComponentPeer",
	"java.lang.Object",
	"java.awt.peer.LightweightPeer,java.awt.peer.CanvasPeer,java.awt.peer.PanelPeer",
	nullptr,
	_NullComponentPeer_MethodInfo_
};

$Object* allocate$NullComponentPeer($Class* clazz) {
	return $of($alloc(NullComponentPeer));
}

int32_t NullComponentPeer::hashCode() {
	 return this->$LightweightPeer::hashCode();
}

bool NullComponentPeer::equals(Object$* arg0) {
	 return this->$LightweightPeer::equals(arg0);
}

$Object* NullComponentPeer::clone() {
	 return this->$LightweightPeer::clone();
}

$String* NullComponentPeer::toString() {
	 return this->$LightweightPeer::toString();
}

void NullComponentPeer::finalize() {
	this->$LightweightPeer::finalize();
}

void NullComponentPeer::init$() {
}

bool NullComponentPeer::isObscured() {
	return false;
}

bool NullComponentPeer::canDetermineObscurity() {
	return false;
}

bool NullComponentPeer::isFocusable() {
	return false;
}

void NullComponentPeer::setVisible(bool b) {
}

void NullComponentPeer::show() {
}

void NullComponentPeer::hide() {
}

void NullComponentPeer::setEnabled(bool b) {
}

void NullComponentPeer::enable() {
}

void NullComponentPeer::disable() {
}

void NullComponentPeer::paint($Graphics* g) {
}

void NullComponentPeer::repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height) {
}

void NullComponentPeer::print($Graphics* g) {
}

void NullComponentPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
}

void NullComponentPeer::reshape(int32_t x, int32_t y, int32_t width, int32_t height) {
}

void NullComponentPeer::coalescePaintEvent($PaintEvent* e) {
}

bool NullComponentPeer::handleEvent($Event* e) {
	return false;
}

void NullComponentPeer::handleEvent($AWTEvent* arg0) {
}

$Dimension* NullComponentPeer::getPreferredSize() {
	return $new($Dimension, 1, 1);
}

$Dimension* NullComponentPeer::getMinimumSize() {
	return $new($Dimension, 1, 1);
}

$ColorModel* NullComponentPeer::getColorModel() {
	return nullptr;
}

$Graphics* NullComponentPeer::getGraphics() {
	return nullptr;
}

$GraphicsConfiguration* NullComponentPeer::getGraphicsConfiguration() {
	return nullptr;
}

$FontMetrics* NullComponentPeer::getFontMetrics($Font* font) {
	return nullptr;
}

void NullComponentPeer::dispose() {
}

void NullComponentPeer::setForeground($Color* c) {
}

void NullComponentPeer::setBackground($Color* c) {
}

void NullComponentPeer::setFont($Font* f) {
}

void NullComponentPeer::updateCursorImmediately() {
}

void NullComponentPeer::setCursor($Cursor* cursor) {
}

bool NullComponentPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	return false;
}

$Image* NullComponentPeer::createImage(int32_t width, int32_t height) {
	return nullptr;
}

$Dimension* NullComponentPeer::preferredSize() {
	return getPreferredSize();
}

$Dimension* NullComponentPeer::minimumSize() {
	return getMinimumSize();
}

$Point* NullComponentPeer::getLocationOnScreen() {
	return $new($Point, 0, 0);
}

$Insets* NullComponentPeer::getInsets() {
	return insets();
}

void NullComponentPeer::beginValidate() {
}

void NullComponentPeer::endValidate() {
}

$Insets* NullComponentPeer::insets() {
	return $new($Insets, 0, 0, 0, 0);
}

bool NullComponentPeer::isPaintPending() {
	return false;
}

bool NullComponentPeer::handlesWheelScrolling() {
	return false;
}

$VolatileImage* NullComponentPeer::createVolatileImage(int32_t width, int32_t height) {
	return nullptr;
}

void NullComponentPeer::beginLayout() {
}

void NullComponentPeer::endLayout() {
}

void NullComponentPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	$throwNew($AWTException, "Page-flipping is not allowed on a lightweight component"_s);
}

$Image* NullComponentPeer::getBackBuffer() {
	$throwNew($IllegalStateException, "Page-flipping is not allowed on a lightweight component"_s);
	$shouldNotReachHere();
}

void NullComponentPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	$throwNew($IllegalStateException, "Page-flipping is not allowed on a lightweight component"_s);
}

void NullComponentPeer::destroyBuffers() {
}

bool NullComponentPeer::isReparentSupported() {
	return false;
}

void NullComponentPeer::reparent($ContainerPeer* newNativeParent) {
	$throwNew($UnsupportedOperationException);
}

void NullComponentPeer::layout() {
}

$Rectangle* NullComponentPeer::getBounds() {
	return $new($Rectangle, 0, 0, 0, 0);
}

void NullComponentPeer::applyShape($Region* shape) {
}

void NullComponentPeer::setZOrder($ComponentPeer* above) {
}

bool NullComponentPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	return false;
}

$GraphicsConfiguration* NullComponentPeer::getAppropriateGraphicsConfiguration($GraphicsConfiguration* gc) {
	return gc;
}

NullComponentPeer::NullComponentPeer() {
}

$Class* NullComponentPeer::load$($String* name, bool initialize) {
	$loadClass(NullComponentPeer, name, initialize, &_NullComponentPeer_ClassInfo_, allocate$NullComponentPeer);
	return class$;
}

$Class* NullComponentPeer::class$ = nullptr;

	} // awt
} // sun