#include <sun/lwawt/LWTextComponentPeer.h>

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
#include <java/awt/TextComponent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/InputMethodListener.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/event/TextEvent.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/PlatformComponent.h>
#include <jcpp.h>

#undef TEXT_VALUE_CHANGED
#undef WIDE_CHAR

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
using $TextComponent = ::java::awt::TextComponent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $InputMethodListener = ::java::awt::event::InputMethodListener;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $TextEvent = ::java::awt::event::TextEvent;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $Caret = ::javax::swing::text::Caret;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $Region = ::sun::java2d::pipe::Region;
using $LWComponentPeer = ::sun::lwawt::LWComponentPeer;
using $PlatformComponent = ::sun::lwawt::PlatformComponent;

namespace sun {
	namespace lwawt {

$FieldInfo _LWTextComponentPeer_FieldInfo_[] = {
	{"firstChangeSkipped", "Z", nullptr, $PRIVATE | $VOLATILE, $field(LWTextComponentPeer, firstChangeSkipped)},
	{}
};

$MethodInfo _LWTextComponentPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC | $FINAL},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC | $FINAL},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC | $FINAL},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC | $FINAL},
	{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC | $FINAL},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC | $FINAL},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"*getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/TextComponent;Lsun/lwawt/PlatformComponent;)V", "(TT;Lsun/lwawt/PlatformComponent;)V", 0, $method(static_cast<void(LWTextComponentPeer::*)($TextComponent*,$PlatformComponent*)>(&LWTextComponentPeer::init$))},
	{"caretPositionChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC | $FINAL},
	{"disposeImpl", "()V", nullptr, $PROTECTED | $FINAL},
	{"getCaretPosition", "()I", nullptr, $PUBLIC | $FINAL},
	{"getInputMethodRequests", "()Ljava/awt/im/InputMethodRequests;", nullptr, $PUBLIC | $FINAL},
	{"getMinimumSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSelectionEnd", "()I", nullptr, $PUBLIC | $FINAL},
	{"getSelectionStart", "()I", nullptr, $PUBLIC | $FINAL},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getTextComponent", "()Ljavax/swing/text/JTextComponent;", nullptr, $ABSTRACT},
	{"initializeImpl", "()V", nullptr, 0},
	{"inputMethodTextChanged", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC | $FINAL},
	{"isFocusable", "()Z", nullptr, $PUBLIC | $FINAL},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"postTextEvent", "()V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(LWTextComponentPeer::*)()>(&LWTextComponentPeer::postTextEvent))},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;)V", nullptr, $PUBLIC | $FINAL},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC},
	{"revalidate", "()V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(LWTextComponentPeer::*)()>(&LWTextComponentPeer::revalidate))},
	{"select", "(II)V", nullptr, $PUBLIC | $FINAL},
	{"*setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setCaretPosition", "(I)V", nullptr, $PUBLIC | $FINAL},
	{"setEditable", "(Z)V", nullptr, $PUBLIC | $FINAL},
	{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"*setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LWTextComponentPeer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.lwawt.LWTextComponentPeer",
	"sun.lwawt.LWComponentPeer",
	"javax.swing.event.DocumentListener,java.awt.peer.TextComponentPeer,java.awt.event.InputMethodListener",
	_LWTextComponentPeer_FieldInfo_,
	_LWTextComponentPeer_MethodInfo_,
	"<T:Ljava/awt/TextComponent;D:Ljavax/swing/JComponent;>Lsun/lwawt/LWComponentPeer<TT;TD;>;Ljavax/swing/event/DocumentListener;Ljava/awt/peer/TextComponentPeer;Ljava/awt/event/InputMethodListener;"
};

$Object* allocate$LWTextComponentPeer($Class* clazz) {
	return $of($alloc(LWTextComponentPeer));
}

void LWTextComponentPeer::dispose() {
	this->$LWComponentPeer::dispose();
}

$GraphicsConfiguration* LWTextComponentPeer::getGraphicsConfiguration() {
	 return this->$LWComponentPeer::getGraphicsConfiguration();
}

bool LWTextComponentPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$LWComponentPeer::updateGraphicsData(gc);
}

$Graphics* LWTextComponentPeer::getGraphics() {
	 return this->$LWComponentPeer::getGraphics();
}

$ColorModel* LWTextComponentPeer::getColorModel() {
	 return this->$LWComponentPeer::getColorModel();
}

void LWTextComponentPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$LWComponentPeer::createBuffers(numBuffers, caps);
}

$Image* LWTextComponentPeer::getBackBuffer() {
	 return this->$LWComponentPeer::getBackBuffer();
}

void LWTextComponentPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$LWComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

void LWTextComponentPeer::destroyBuffers() {
	this->$LWComponentPeer::destroyBuffers();
}

void LWTextComponentPeer::setBounds(int32_t x, int32_t y, int32_t w, int32_t h, int32_t op) {
	this->$LWComponentPeer::setBounds(x, y, w, h, op);
}

$Point* LWTextComponentPeer::getLocationOnScreen() {
	 return this->$LWComponentPeer::getLocationOnScreen();
}

void LWTextComponentPeer::setBackground($Color* c) {
	this->$LWComponentPeer::setBackground(c);
}

void LWTextComponentPeer::setForeground($Color* c) {
	this->$LWComponentPeer::setForeground(c);
}

void LWTextComponentPeer::setFont($Font* f) {
	this->$LWComponentPeer::setFont(f);
}

$FontMetrics* LWTextComponentPeer::getFontMetrics($Font* f) {
	 return this->$LWComponentPeer::getFontMetrics(f);
}

void LWTextComponentPeer::setEnabled(bool e) {
	this->$LWComponentPeer::setEnabled(e);
}

void LWTextComponentPeer::setVisible(bool v) {
	this->$LWComponentPeer::setVisible(v);
}

void LWTextComponentPeer::paint($Graphics* g) {
	this->$LWComponentPeer::paint(g);
}

void LWTextComponentPeer::print($Graphics* g) {
	this->$LWComponentPeer::print(g);
}

void LWTextComponentPeer::reparent($ContainerPeer* newContainer) {
	this->$LWComponentPeer::reparent(newContainer);
}

bool LWTextComponentPeer::isReparentSupported() {
	 return this->$LWComponentPeer::isReparentSupported();
}

void LWTextComponentPeer::setZOrder($ComponentPeer* above) {
	this->$LWComponentPeer::setZOrder(above);
}

void LWTextComponentPeer::coalescePaintEvent($PaintEvent* e) {
	this->$LWComponentPeer::coalescePaintEvent(e);
}

void LWTextComponentPeer::layout() {
	this->$LWComponentPeer::layout();
}

bool LWTextComponentPeer::isObscured() {
	 return this->$LWComponentPeer::isObscured();
}

bool LWTextComponentPeer::canDetermineObscurity() {
	 return this->$LWComponentPeer::canDetermineObscurity();
}

$Dimension* LWTextComponentPeer::getPreferredSize() {
	 return this->$LWComponentPeer::getPreferredSize();
}

$Dimension* LWTextComponentPeer::getMinimumSize() {
	 return this->$LWComponentPeer::getMinimumSize();
}

void LWTextComponentPeer::updateCursorImmediately() {
	this->$LWComponentPeer::updateCursorImmediately();
}

bool LWTextComponentPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$LWComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

$Image* LWTextComponentPeer::createImage(int32_t width, int32_t height) {
	 return this->$LWComponentPeer::createImage(width, height);
}

$VolatileImage* LWTextComponentPeer::createVolatileImage(int32_t w, int32_t h) {
	 return this->$LWComponentPeer::createVolatileImage(w, h);
}

bool LWTextComponentPeer::handlesWheelScrolling() {
	 return this->$LWComponentPeer::handlesWheelScrolling();
}

void LWTextComponentPeer::applyShape($Region* shape) {
	this->$LWComponentPeer::applyShape(shape);
}

void LWTextComponentPeer::handleEvent($AWTEvent* e) {
	this->$LWComponentPeer::handleEvent(e);
}

int32_t LWTextComponentPeer::hashCode() {
	 return this->$LWComponentPeer::hashCode();
}

bool LWTextComponentPeer::equals(Object$* arg0) {
	 return this->$LWComponentPeer::equals(arg0);
}

$Object* LWTextComponentPeer::clone() {
	 return this->$LWComponentPeer::clone();
}

$String* LWTextComponentPeer::toString() {
	 return this->$LWComponentPeer::toString();
}

void LWTextComponentPeer::finalize() {
	this->$LWComponentPeer::finalize();
}

void LWTextComponentPeer::init$($TextComponent* target, $PlatformComponent* platformComponent) {
	$useLocalCurrentObjectStackCache();
	$LWComponentPeer::init$(target, platformComponent);
	if (!$nc(($cast($TextComponent, $(getTarget()))))->isBackgroundSet()) {
		$init($SystemColor);
		$nc(($cast($TextComponent, $(getTarget()))))->setBackground($SystemColor::text);
	}
}

void LWTextComponentPeer::initializeImpl() {
	$useLocalCurrentObjectStackCache();
	$LWComponentPeer::initializeImpl();
	$synchronized(getDelegateLock()) {
		$nc($($nc($(getTextComponent()))->getDocument()))->addDocumentListener(this);
	}
	setEditable($nc(($cast($TextComponent, $(getTarget()))))->isEditable());
	setText($($nc(($cast($TextComponent, $(getTarget()))))->getText()));
	setCaretPosition($nc(($cast($TextComponent, $(getTarget()))))->getCaretPosition());
	$nc(($cast($TextComponent, $(getTarget()))))->addInputMethodListener(this);
	int32_t start = $nc(($cast($TextComponent, $(getTarget()))))->getSelectionStart();
	int32_t end = $nc(($cast($TextComponent, $(getTarget()))))->getSelectionEnd();
	if (end > start) {
		select(start, end);
	}
	this->firstChangeSkipped = true;
}

void LWTextComponentPeer::disposeImpl() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc($($nc($(getTextComponent()))->getCaret()))->setVisible(false);
	}
	$LWComponentPeer::disposeImpl();
}

$Dimension* LWTextComponentPeer::getMinimumSize(int32_t rows, int32_t columns) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, nullptr);
	$synchronized(getDelegateLock()) {
		$assign(insets, $nc($(getTextComponent()))->getInsets());
	}
	int32_t borderHeight = $nc(insets)->top + insets->bottom;
	int32_t borderWidth = insets->left + insets->right;
	$var($FontMetrics, fm, getFontMetrics($(getFont())));
	int32_t var$0 = $nc(fm)->charWidth($LWComponentPeer::WIDE_CHAR) * columns + borderWidth;
	return $new($Dimension, var$0, fm->getHeight() * rows + borderHeight);
}

void LWTextComponentPeer::setEditable(bool editable) {
	$synchronized(getDelegateLock()) {
		$nc($(getTextComponent()))->setEditable(editable);
	}
}

$String* LWTextComponentPeer::getText() {
	$synchronized(getDelegateLock()) {
		return $nc($(getTextComponent()))->getText();
	}
}

void LWTextComponentPeer::setText($String* text) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$var($Document, document, $nc($(getTextComponent()))->getDocument());
		$nc(document)->removeDocumentListener(this);
		$nc($(getTextComponent()))->setText(text);
		revalidate();
		if (this->firstChangeSkipped) {
			postEvent($$new($TextEvent, $(getTarget()), $TextEvent::TEXT_VALUE_CHANGED));
		}
		document->addDocumentListener(this);
	}
	repaintPeer();
}

int32_t LWTextComponentPeer::getSelectionStart() {
	$synchronized(getDelegateLock()) {
		return $nc($(getTextComponent()))->getSelectionStart();
	}
}

int32_t LWTextComponentPeer::getSelectionEnd() {
	$synchronized(getDelegateLock()) {
		return $nc($(getTextComponent()))->getSelectionEnd();
	}
}

void LWTextComponentPeer::select(int32_t selStart, int32_t selEnd) {
	$synchronized(getDelegateLock()) {
		$nc($(getTextComponent()))->select(selStart, selEnd);
	}
	repaintPeer();
}

void LWTextComponentPeer::setCaretPosition(int32_t pos) {
	$synchronized(getDelegateLock()) {
		$nc($(getTextComponent()))->setCaretPosition(pos);
	}
	repaintPeer();
}

int32_t LWTextComponentPeer::getCaretPosition() {
	$synchronized(getDelegateLock()) {
		return $nc($(getTextComponent()))->getCaretPosition();
	}
}

$InputMethodRequests* LWTextComponentPeer::getInputMethodRequests() {
	$synchronized(getDelegateLock()) {
		return $nc($(getTextComponent()))->getInputMethodRequests();
	}
}

bool LWTextComponentPeer::isFocusable() {
	return $nc(($cast($TextComponent, $(getTarget()))))->isFocusable();
}

void LWTextComponentPeer::revalidate() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc($(getTextComponent()))->invalidate();
		$nc($(getDelegate()))->validate();
	}
}

void LWTextComponentPeer::postTextEvent() {
	$useLocalCurrentObjectStackCache();
	postEvent($$new($TextEvent, $(getTarget()), $TextEvent::TEXT_VALUE_CHANGED));
	$synchronized(getDelegateLock()) {
		revalidate();
	}
}

void LWTextComponentPeer::changedUpdate($DocumentEvent* e) {
	postTextEvent();
}

void LWTextComponentPeer::insertUpdate($DocumentEvent* e) {
	postTextEvent();
}

void LWTextComponentPeer::removeUpdate($DocumentEvent* e) {
	postTextEvent();
}

void LWTextComponentPeer::inputMethodTextChanged($InputMethodEvent* event) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc($($AWTAccessor::getComponentAccessor()))->processEvent($(getTextComponent()), event);
	}
}

void LWTextComponentPeer::caretPositionChanged($InputMethodEvent* event) {
	$useLocalCurrentObjectStackCache();
	$synchronized(getDelegateLock()) {
		$nc($($AWTAccessor::getComponentAccessor()))->processEvent($(getTextComponent()), event);
	}
}

LWTextComponentPeer::LWTextComponentPeer() {
}

$Class* LWTextComponentPeer::load$($String* name, bool initialize) {
	$loadClass(LWTextComponentPeer, name, initialize, &_LWTextComponentPeer_ClassInfo_, allocate$LWTextComponentPeer);
	return class$;
}

$Class* LWTextComponentPeer::class$ = nullptr;

	} // lwawt
} // sun