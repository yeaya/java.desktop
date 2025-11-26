#include <sun/awt/X11/XTextFieldPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/SystemColor.h>
#include <java/awt/TextComponent.h>
#include <java/awt/TextField.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/PaintEvent.h>
#include <java/awt/event/TextEvent.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/VolatileImage.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/lang/Math.h>
#include <java/util/HashMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XTextFieldPeer$XAWTTextField.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/java2d/pipe/Region.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef FALSE
#undef FINE
#undef MOUSE_DRAGGED
#undef MOUSE_MOVED
#undef PADDING
#undef SET_BOUNDS
#undef TEXT_VALUE_CHANGED
#undef TRUE

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $SystemColor = ::java::awt::SystemColor;
using $TextComponent = ::java::awt::TextComponent;
using $TextField = ::java::awt::TextField;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $TextEvent = ::java::awt::event::TextEvent;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $TextFieldPeer = ::java::awt::peer::TextFieldPeer;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $JComponent = ::javax::swing::JComponent;
using $JPasswordField = ::javax::swing::JPasswordField;
using $JTextField = ::javax::swing::JTextField;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $Caret = ::javax::swing::text::Caret;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XTextFieldPeer$XAWTTextField = ::sun::awt::X11::XTextFieldPeer$XAWTTextField;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $Region = ::sun::java2d::pipe::Region;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextFieldPeer_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XTextFieldPeer, log)},
	{"text", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XTextFieldPeer, text)},
	{"xtext", "Lsun/awt/X11/XTextFieldPeer$XAWTTextField;", nullptr, $PRIVATE | $FINAL, $field(XTextFieldPeer, xtext)},
	{"firstChangeSkipped", "Z", nullptr, $PRIVATE | $FINAL, $field(XTextFieldPeer, firstChangeSkipped)},
	{"PADDING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XTextFieldPeer, PADDING)},
	{}
};

$MethodInfo _XTextFieldPeer_MethodInfo_[] = {
	{"*applyShape", "(Lsun/java2d/pipe/Region;)V", nullptr, $PUBLIC},
	{"*canDetermineObscurity", "()Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*coalescePaintEvent", "(Ljava/awt/event/PaintEvent;)V", nullptr, $PUBLIC},
	{"*createBuffers", "(ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC},
	{"*createImage", "(II)Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*createVolatileImage", "(II)Ljava/awt/image/VolatileImage;", nullptr, $PUBLIC},
	{"*destroyBuffers", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*flip", "(IIIILjava/awt/BufferCapabilities$FlipContents;)V", nullptr, $PUBLIC},
	{"*getBackBuffer", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"*getColorModel", "()Ljava/awt/image/ColorModel;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC},
	{"*getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"*getGraphicsConfiguration", "()Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $SYNTHETIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/TextField;)V", nullptr, 0, $method(static_cast<void(XTextFieldPeer::*)($TextField*)>(&XTextFieldPeer::init$))},
	{"action", "(JI)V", nullptr, $PUBLIC, $method(static_cast<void(XTextFieldPeer::*)(int64_t,int32_t)>(&XTextFieldPeer::action))},
	{"deselect", "()V", nullptr, $PUBLIC, $method(static_cast<void(XTextFieldPeer::*)()>(&XTextFieldPeer::deselect))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"disposeImpl", "()V", nullptr, $PROTECTED, $method(static_cast<void(XTextFieldPeer::*)()>(&XTextFieldPeer::disposeImpl))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getCaretPosition", "()I", nullptr, $PUBLIC},
	{"getInputMethodRequests", "()Ljava/awt/im/InputMethodRequests;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSelectionEnd", "()I", nullptr, $PUBLIC},
	{"getSelectionStart", "()I", nullptr, $PUBLIC},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"handleJavaInputMethodEvent", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, 0},
	{"handleJavaKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"handleJavaMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"initTextField", "()V", nullptr, 0, $method(static_cast<void(XTextFieldPeer::*)()>(&XTextFieldPeer::initTextField))},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintPeer", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"repaint", "()V", nullptr, $PUBLIC},
	{"repaintText", "()V", nullptr, 0, $method(static_cast<void(XTextFieldPeer::*)()>(&XTextFieldPeer::repaintText))},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"select", "(II)V", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setCaretPosition", "(I)V", nullptr, $PUBLIC},
	{"setEchoChar", "(C)V", nullptr, $PUBLIC},
	{"setEditable", "(Z)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"setXAWTTextField", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(XTextFieldPeer::*)($String*)>(&XTextFieldPeer::setXAWTTextField))},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTextFieldPeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextFieldPeer$XAWTTextField", "sun.awt.X11.XTextFieldPeer", "XAWTTextField", $FINAL},
	{"sun.awt.X11.XTextFieldPeer$AWTTextFieldUI", "sun.awt.X11.XTextFieldPeer", "AWTTextFieldUI", $FINAL},
	{}
};

$ClassInfo _XTextFieldPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XTextFieldPeer",
	"sun.awt.X11.XComponentPeer",
	"java.awt.peer.TextFieldPeer",
	_XTextFieldPeer_FieldInfo_,
	_XTextFieldPeer_MethodInfo_,
	nullptr,
	nullptr,
	_XTextFieldPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextFieldPeer$XAWTTextField,sun.awt.X11.XTextFieldPeer$AWTTextFieldUI"
};

$Object* allocate$XTextFieldPeer($Class* clazz) {
	return $of($alloc(XTextFieldPeer));
}

void XTextFieldPeer::reparent($ContainerPeer* newNativeParent) {
	this->$XComponentPeer::reparent(newNativeParent);
}

bool XTextFieldPeer::isReparentSupported() {
	 return this->$XComponentPeer::isReparentSupported();
}

bool XTextFieldPeer::isObscured() {
	 return this->$XComponentPeer::isObscured();
}

bool XTextFieldPeer::canDetermineObscurity() {
	 return this->$XComponentPeer::canDetermineObscurity();
}

bool XTextFieldPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void XTextFieldPeer::paint($Graphics* g) {
	this->$XComponentPeer::paint(g);
}

$Graphics* XTextFieldPeer::getGraphics() {
	 return this->$XComponentPeer::getGraphics();
}

void XTextFieldPeer::coalescePaintEvent($PaintEvent* e) {
	this->$XComponentPeer::coalescePaintEvent(e);
}

void XTextFieldPeer::handleEvent($AWTEvent* e) {
	this->$XComponentPeer::handleEvent(e);
}

void XTextFieldPeer::layout() {
	this->$XComponentPeer::layout();
}

$FontMetrics* XTextFieldPeer::getFontMetrics($Font* font) {
	 return this->$XComponentPeer::getFontMetrics(font);
}

void XTextFieldPeer::updateCursorImmediately() {
	this->$XComponentPeer::updateCursorImmediately();
}

$Image* XTextFieldPeer::createImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createImage(width, height);
}

$VolatileImage* XTextFieldPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createVolatileImage(width, height);
}

bool XTextFieldPeer::handlesWheelScrolling() {
	 return this->$XComponentPeer::handlesWheelScrolling();
}

void XTextFieldPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XComponentPeer::createBuffers(numBuffers, caps);
}

void XTextFieldPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* XTextFieldPeer::getBackBuffer() {
	 return this->$XComponentPeer::getBackBuffer();
}

void XTextFieldPeer::destroyBuffers() {
	this->$XComponentPeer::destroyBuffers();
}

void XTextFieldPeer::setZOrder($ComponentPeer* above) {
	this->$XComponentPeer::setZOrder(above);
}

void XTextFieldPeer::applyShape($Region* shape) {
	this->$XComponentPeer::applyShape(shape);
}

bool XTextFieldPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XComponentPeer::updateGraphicsData(gc);
}

$Point* XTextFieldPeer::getLocationOnScreen() {
	 return this->$XComponentPeer::getLocationOnScreen();
}

$ColorModel* XTextFieldPeer::getColorModel() {
	 return this->$XComponentPeer::getColorModel();
}

$GraphicsConfiguration* XTextFieldPeer::getGraphicsConfiguration() {
	 return this->$XComponentPeer::getGraphicsConfiguration();
}

$String* XTextFieldPeer::toString() {
	 return this->$XComponentPeer::toString();
}

int32_t XTextFieldPeer::hashCode() {
	 return this->$XComponentPeer::hashCode();
}

bool XTextFieldPeer::equals(Object$* arg0) {
	 return this->$XComponentPeer::equals(arg0);
}

$Object* XTextFieldPeer::clone() {
	 return this->$XComponentPeer::clone();
}

void XTextFieldPeer::finalize() {
	this->$XComponentPeer::finalize();
}

$PlatformLogger* XTextFieldPeer::log = nullptr;

void XTextFieldPeer::init$($TextField* target) {
	$useLocalCurrentObjectStackCache();
	$XComponentPeer::init$(static_cast<$Component*>(target));
	$set(this, text, $nc(target)->getText());
	$set(this, xtext, $new($XTextFieldPeer$XAWTTextField, this, this->text, this, $(target->getParent())));
	$nc($($nc(this->xtext)->getDocument()))->addDocumentListener(this->xtext);
	$nc(this->xtext)->setCursor($(target->getCursor()));
	$init($XToolkit);
	$nc($XToolkit::specialPeerMap)->put(this->xtext, this);
	initTextField();
	setText($(target->getText()));
	if (target->echoCharIsSet()) {
		setEchoChar(target->getEchoChar());
	} else {
		setEchoChar((char16_t)0);
	}
	int32_t start = target->getSelectionStart();
	int32_t end = target->getSelectionEnd();
	setCaretPosition($Math::min(end, $nc(this->text)->length()));
	if (end > start) {
		select(start, end);
	}
	setEditable(target->isEditable());
	this->firstChangeSkipped = true;
	$nc($($AWTAccessor::getComponentAccessor()))->setPeer(this->xtext, static_cast<$ComponentPeer*>(static_cast<$XComponentPeer*>(this)));
}

void XTextFieldPeer::dispose() {
	$init($XToolkit);
	$nc($XToolkit::specialPeerMap)->remove(this->xtext);
	$nc($($nc(this->xtext)->getCaret()))->setVisible(false);
	$XComponentPeer::dispose();
}

void XTextFieldPeer::initTextField() {
	setVisible($nc(this->target)->isVisible());
	setBounds(this->x, this->y, this->width, this->height, $ComponentPeer::SET_BOUNDS);
	$var($AWTAccessor$ComponentAccessor, compAccessor, $AWTAccessor::getComponentAccessor());
	$set(this, foreground, $nc(compAccessor)->getForeground(this->target));
	if (this->foreground == nullptr) {
		$init($SystemColor);
		$set(this, foreground, $SystemColor::textText);
	}
	setForeground(this->foreground);
	$set(this, background, compAccessor->getBackground(this->target));
	if (this->background == nullptr) {
		if ($nc(($cast($TextField, this->target)))->isEditable()) {
			$init($SystemColor);
			$set(this, background, $SystemColor::text);
		} else {
			$init($SystemColor);
			$set(this, background, $SystemColor::control);
		}
	}
	setBackground(this->background);
	if (!$nc(this->target)->isBackgroundSet()) {
		compAccessor->setBackground(this->target, this->background);
	}
	if (!$nc(this->target)->isForegroundSet()) {
		$init($SystemColor);
		$nc(this->target)->setForeground($SystemColor::textText);
	}
	setFont(this->font);
}

void XTextFieldPeer::setEditable(bool editable) {
	if (this->xtext != nullptr) {
		$nc(this->xtext)->setEditable(editable);
		$nc(this->xtext)->repaint();
	}
}

void XTextFieldPeer::setEnabled(bool enabled) {
	$XComponentPeer::setEnabled(enabled);
	if (this->xtext != nullptr) {
		$nc(this->xtext)->setEnabled(enabled);
		$nc(this->xtext)->repaint();
	}
}

$InputMethodRequests* XTextFieldPeer::getInputMethodRequests() {
	if (this->xtext != nullptr) {
		return $nc(this->xtext)->getInputMethodRequests();
	} else {
		return nullptr;
	}
}

void XTextFieldPeer::handleJavaInputMethodEvent($InputMethodEvent* e) {
	if (this->xtext != nullptr) {
		$nc(this->xtext)->processInputMethodEventImpl(e);
	}
}

void XTextFieldPeer::setEchoChar(char16_t c) {
	if (this->xtext != nullptr) {
		$nc(this->xtext)->setEchoChar(c);
		$init($Boolean);
		$nc(this->xtext)->putClientProperty("JPasswordField.cutCopyAllowed"_s, $nc(this->xtext)->echoCharIsSet() ? $Boolean::FALSE : $Boolean::TRUE);
	}
}

int32_t XTextFieldPeer::getSelectionStart() {
	return $nc(this->xtext)->getSelectionStart();
}

int32_t XTextFieldPeer::getSelectionEnd() {
	return $nc(this->xtext)->getSelectionEnd();
}

$String* XTextFieldPeer::getText() {
	return $nc(this->xtext)->getText();
}

void XTextFieldPeer::setText($String* text) {
	setXAWTTextField(text);
	repaint();
}

void XTextFieldPeer::setXAWTTextField($String* txt) {
	$useLocalCurrentObjectStackCache();
	$set(this, text, txt);
	if (this->xtext != nullptr) {
		$nc($($nc(this->xtext)->getDocument()))->removeDocumentListener(this->xtext);
		$nc(this->xtext)->setText(txt);
		if (this->firstChangeSkipped) {
			postEvent($$new($TextEvent, this->target, $TextEvent::TEXT_VALUE_CHANGED));
		}
		$nc($($nc(this->xtext)->getDocument()))->addDocumentListener(this->xtext);
		$nc(this->xtext)->setCaretPosition(0);
	}
}

void XTextFieldPeer::setCaretPosition(int32_t position) {
	if (this->xtext != nullptr) {
		$nc(this->xtext)->setCaretPosition(position);
	}
}

void XTextFieldPeer::repaintText() {
	$nc(this->xtext)->repaintNow();
}

void XTextFieldPeer::setBackground($Color* c) {
	$init($PlatformLogger$Level);
	if ($nc(XTextFieldPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(XTextFieldPeer::log)->fine($$str({"target="_s, this->target, ", old="_s, this->background, ", new="_s, c}));
	}
	$set(this, background, c);
	if (this->xtext != nullptr) {
		if ($nc(this->xtext)->getBackground() != c) {
			$nc(this->xtext)->setBackground(c);
		}
		$nc(this->xtext)->setSelectedTextColor(c);
	}
	repaintText();
}

void XTextFieldPeer::setForeground($Color* c) {
	$set(this, foreground, c);
	if (this->xtext != nullptr) {
		if ($nc(this->xtext)->getForeground() != c) {
			$nc(this->xtext)->setForeground(this->foreground);
		}
		$nc(this->xtext)->setSelectionColor(this->foreground);
		$nc(this->xtext)->setCaretColor(this->foreground);
	}
	repaintText();
}

void XTextFieldPeer::setFont($Font* f) {
	bool isChanged = false;
	$synchronized(getStateLock()) {
		$set(this, font, f);
		if (this->xtext != nullptr && $nc(this->xtext)->getFont() != f) {
			$nc(this->xtext)->setFont(this->font);
			isChanged = true;
		}
	}
	if (isChanged) {
		$nc(this->xtext)->validate();
	}
}

void XTextFieldPeer::deselect() {
	int32_t selStart = $nc(this->xtext)->getSelectionStart();
	int32_t selEnd = $nc(this->xtext)->getSelectionEnd();
	if (selStart != selEnd) {
		$nc(this->xtext)->select(selStart, selStart);
	}
}

int32_t XTextFieldPeer::getCaretPosition() {
	return $nc(this->xtext)->getCaretPosition();
}

void XTextFieldPeer::select(int32_t s, int32_t e) {
	$nc(this->xtext)->select(s, e);
	$nc(this->xtext)->repaint();
}

$Dimension* XTextFieldPeer::getMinimumSize() {
	return $nc(this->xtext)->getMinimumSize();
}

$Dimension* XTextFieldPeer::getPreferredSize() {
	return $nc(this->xtext)->getPreferredSize();
}

$Dimension* XTextFieldPeer::getPreferredSize(int32_t cols) {
	return getMinimumSize(cols);
}

$Dimension* XTextFieldPeer::getMinimumSize(int32_t cols) {
	$useLocalCurrentObjectStackCache();
	$var($Font, f, $nc(this->xtext)->getFont());
	$var($FontMetrics, fm, $nc(this->xtext)->getFontMetrics(f));
	int32_t var$0 = $nc(fm)->charWidth(u'0') * cols + 10;
	int32_t var$1 = fm->getMaxDescent();
	return $new($Dimension, var$0, var$1 + fm->getMaxAscent() + XTextFieldPeer::PADDING);
}

bool XTextFieldPeer::isFocusable() {
	return true;
}

void XTextFieldPeer::action(int64_t when, int32_t modifiers) {
	postEvent($$new($ActionEvent, this->target, $ActionEvent::ACTION_PERFORMED, this->text, when, modifiers));
}

void XTextFieldPeer::disposeImpl() {
}

void XTextFieldPeer::repaint() {
	if (this->xtext != nullptr) {
		$nc(this->xtext)->repaint();
	}
}

void XTextFieldPeer::paintPeer($Graphics* g) {
	if (this->xtext != nullptr) {
		$nc(this->xtext)->paint(g);
	}
}

void XTextFieldPeer::print($Graphics* g) {
	if (this->xtext != nullptr) {
		$nc(this->xtext)->print(g);
	}
}

void XTextFieldPeer::focusLost($FocusEvent* e) {
	$XComponentPeer::focusLost(e);
	$nc(this->xtext)->forwardFocusLost(e);
}

void XTextFieldPeer::focusGained($FocusEvent* e) {
	$XComponentPeer::focusGained(e);
	$nc(this->xtext)->forwardFocusGained(e);
}

void XTextFieldPeer::handleJavaKeyEvent($KeyEvent* e) {
	$nc($($AWTAccessor::getComponentAccessor()))->processEvent(this->xtext, e);
}

void XTextFieldPeer::handleJavaMouseEvent($MouseEvent* mouseEvent) {
	$XComponentPeer::handleJavaMouseEvent(mouseEvent);
	if (this->xtext != nullptr) {
		$nc(mouseEvent)->setSource(this->xtext);
		int32_t id = mouseEvent->getID();
		if (id == $MouseEvent::MOUSE_DRAGGED || id == $MouseEvent::MOUSE_MOVED) {
			$nc(this->xtext)->processMouseMotionEventImpl(mouseEvent);
		} else {
			$nc(this->xtext)->processMouseEventImpl(mouseEvent);
		}
	}
}

void XTextFieldPeer::setVisible(bool b) {
	$XComponentPeer::setVisible(b);
	if (this->xtext != nullptr) {
		$nc(this->xtext)->setVisible(b);
	}
}

void XTextFieldPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	$XComponentPeer::setBounds(x, y, width, height, op);
	if (this->xtext != nullptr) {
		int32_t childX = x;
		int32_t childY = y;
		$var($Component, parent, $nc(this->target)->getParent());
		while ($nc(parent)->isLightweight()) {
			childX -= parent->getX();
			childY -= parent->getY();
			$assign(parent, parent->getParent());
		}
		$nc(this->xtext)->setBounds(childX, childY, width, height);
		$nc(this->xtext)->validate();
	}
}

void clinit$XTextFieldPeer($Class* class$) {
	$assignStatic(XTextFieldPeer::log, $PlatformLogger::getLogger("sun.awt.X11.XTextField"_s));
}

XTextFieldPeer::XTextFieldPeer() {
}

$Class* XTextFieldPeer::load$($String* name, bool initialize) {
	$loadClass(XTextFieldPeer, name, initialize, &_XTextFieldPeer_ClassInfo_, clinit$XTextFieldPeer, allocate$XTextFieldPeer);
	return class$;
}

$Class* XTextFieldPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun