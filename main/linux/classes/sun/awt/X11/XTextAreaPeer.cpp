#include <sun/awt/X11/XTextAreaPeer.h>

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
#include <java/awt/TextArea.h>
#include <java/awt/TextComponent.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseWheelEvent.h>
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
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/GlobalCursorManager.h>
#include <sun/awt/X11/XComponentPeer.h>
#include <sun/awt/X11/XGlobalCursorManager.h>
#include <sun/awt/X11/XTextAreaPeer$AWTTextArea.h>
#include <sun/awt/X11/XTextAreaPeer$AWTTextPane.h>
#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XWindow.h>
#include <sun/java2d/pipe/Region.h>
#include <jcpp.h>

#undef HORIZONTAL_SCROLLBAR_ALWAYS
#undef HORIZONTAL_SCROLLBAR_NEVER
#undef SCROLLBARS_BOTH
#undef SCROLLBARS_HORIZONTAL_ONLY
#undef SCROLLBARS_NONE
#undef SCROLLBARS_VERTICAL_ONLY
#undef SET_BOUNDS
#undef TEXT_VALUE_CHANGED
#undef VERTICAL_SCROLLBAR_ALWAYS
#undef VERTICAL_SCROLLBAR_NEVER

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
using $TextArea = ::java::awt::TextArea;
using $TextComponent = ::java::awt::TextComponent;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $InputEvent = ::java::awt::event::InputEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseWheelEvent = ::java::awt::event::MouseWheelEvent;
using $PaintEvent = ::java::awt::event::PaintEvent;
using $TextEvent = ::java::awt::event::TextEvent;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $ColorModel = ::java::awt::image::ColorModel;
using $VolatileImage = ::java::awt::image::VolatileImage;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $TextAreaPeer = ::java::awt::peer::TextAreaPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $Caret = ::javax::swing::text::Caret;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $GlobalCursorManager = ::sun::awt::GlobalCursorManager;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;
using $XComponentPeer = ::sun::awt::X11::XComponentPeer;
using $XGlobalCursorManager = ::sun::awt::X11::XGlobalCursorManager;
using $XTextAreaPeer$AWTTextArea = ::sun::awt::X11::XTextAreaPeer$AWTTextArea;
using $XTextAreaPeer$AWTTextPane = ::sun::awt::X11::XTextAreaPeer$AWTTextPane;
using $XTextAreaPeer$JavaMouseEventHandler = ::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XWindow = ::sun::awt::X11::XWindow;
using $Region = ::sun::java2d::pipe::Region;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextAreaPeer_FieldInfo_[] = {
	{"textPane", "Lsun/awt/X11/XTextAreaPeer$AWTTextPane;", nullptr, $PRIVATE | $FINAL, $field(XTextAreaPeer, textPane)},
	{"jtext", "Lsun/awt/X11/XTextAreaPeer$AWTTextArea;", nullptr, $PRIVATE | $FINAL, $field(XTextAreaPeer, jtext)},
	{"firstChangeSkipped", "Z", nullptr, $PRIVATE | $FINAL, $field(XTextAreaPeer, firstChangeSkipped)},
	{"javaMouseEventHandler", "Lsun/awt/X11/XTextAreaPeer$JavaMouseEventHandler;", nullptr, $PRIVATE | $FINAL, $field(XTextAreaPeer, javaMouseEventHandler)},
	{}
};

$MethodInfo _XTextAreaPeer_MethodInfo_[] = {
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
	{"*getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*handleEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/TextArea;)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer::*)($TextArea*)>(&XTextAreaPeer::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getCaretPosition", "()I", nullptr, $PUBLIC},
	{"getInputMethodRequests", "()Ljava/awt/im/InputMethodRequests;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(II)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSelectionEnd", "()I", nullptr, $PUBLIC},
	{"getSelectionStart", "()I", nullptr, $PUBLIC},
	{"getText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"handleJavaInputMethodEvent", "(Ljava/awt/event/InputMethodEvent;)V", nullptr, 0},
	{"handleJavaKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"handleJavaMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"handleJavaMouseWheelEvent", "(Ljava/awt/event/MouseWheelEvent;)V", nullptr, 0},
	{"handlesWheelScrolling", "()Z", nullptr, $PUBLIC},
	{"insert", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"isFocusable", "()Z", nullptr, $PUBLIC},
	{"*isObscured", "()Z", nullptr, $PUBLIC},
	{"*isReparentSupported", "()Z", nullptr, $PUBLIC},
	{"*layout", "()V", nullptr, $PUBLIC},
	{"pSetCursor", "(Ljava/awt/Cursor;Z)V", nullptr, $PUBLIC},
	{"*paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintPeer", "(Ljava/awt/Graphics;)V", nullptr, 0},
	{"*print", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"repaint", "()V", nullptr, $PUBLIC},
	{"repaintText", "()V", nullptr, 0, $method(static_cast<void(XTextAreaPeer::*)()>(&XTextAreaPeer::repaintText))},
	{"*reparent", "(Ljava/awt/peer/ContainerPeer;)V", nullptr, $PUBLIC},
	{"replaceRange", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"*requestFocus", "(Ljava/awt/Component;ZZJLjava/awt/event/FocusEvent$Cause;)Z", nullptr, $PUBLIC | $FINAL},
	{"select", "(II)V", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBounds", "(IIIII)V", nullptr, $PUBLIC},
	{"setCaretPosition", "(I)V", nullptr, $PUBLIC},
	{"setEditable", "(Z)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setScrollBarVisibility", "()V", nullptr, $PRIVATE, $method(static_cast<void(XTextAreaPeer::*)()>(&XTextAreaPeer::setScrollBarVisibility))},
	{"setText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setTextImpl", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(XTextAreaPeer::*)($String*)>(&XTextAreaPeer::setTextImpl))},
	{"setVisible", "(Z)V", nullptr, $PUBLIC},
	{"*updateCursorImmediately", "()V", nullptr, $PUBLIC},
	{"*setZOrder", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"*updateGraphicsData", "(Ljava/awt/GraphicsConfiguration;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTextAreaPeer_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextAreaPeer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler", "sun.awt.X11.XTextAreaPeer", "JavaMouseEventHandler", $PRIVATE | $STATIC | $FINAL},
	{"sun.awt.X11.XTextAreaPeer$BevelBorder", "sun.awt.X11.XTextAreaPeer", "BevelBorder", $STATIC},
	{"sun.awt.X11.XTextAreaPeer$AWTTextPane", "sun.awt.X11.XTextAreaPeer", "AWTTextPane", $PRIVATE},
	{"sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI", "sun.awt.X11.XTextAreaPeer", "XAWTScrollPaneUI", $FINAL},
	{"sun.awt.X11.XTextAreaPeer$AWTTextArea", "sun.awt.X11.XTextAreaPeer", "AWTTextArea", $FINAL},
	{"sun.awt.X11.XTextAreaPeer$XAWTScrollBarUI", "sun.awt.X11.XTextAreaPeer", "XAWTScrollBarUI", $FINAL},
	{"sun.awt.X11.XTextAreaPeer$XAWTScrollBarButton", "sun.awt.X11.XTextAreaPeer", "XAWTScrollBarButton", $FINAL},
	{"sun.awt.X11.XTextAreaPeer$XAWTCaret", "sun.awt.X11.XTextAreaPeer", "XAWTCaret", $STATIC | $FINAL},
	{"sun.awt.X11.XTextAreaPeer$AWTTextAreaUI", "sun.awt.X11.XTextAreaPeer", "AWTTextAreaUI", $FINAL},
	{}
};

$ClassInfo _XTextAreaPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XTextAreaPeer",
	"sun.awt.X11.XComponentPeer",
	"java.awt.peer.TextAreaPeer",
	_XTextAreaPeer_FieldInfo_,
	_XTextAreaPeer_MethodInfo_,
	nullptr,
	nullptr,
	_XTextAreaPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextAreaPeer$1,sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler,sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler$Pointer,sun.awt.X11.XTextAreaPeer$JavaMouseEventHandler$Pointer$Type,sun.awt.X11.XTextAreaPeer$BevelBorder,sun.awt.X11.XTextAreaPeer$AWTTextPane,sun.awt.X11.XTextAreaPeer$AWTTextPane$XAWTScrollBar,sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI,sun.awt.X11.XTextAreaPeer$XAWTScrollPaneUI$1,sun.awt.X11.XTextAreaPeer$AWTTextArea,sun.awt.X11.XTextAreaPeer$XAWTScrollBarUI,sun.awt.X11.XTextAreaPeer$XAWTScrollBarButton,sun.awt.X11.XTextAreaPeer$XAWTCaret,sun.awt.X11.XTextAreaPeer$AWTTextAreaUI"
};

$Object* allocate$XTextAreaPeer($Class* clazz) {
	return $of($alloc(XTextAreaPeer));
}

void XTextAreaPeer::reparent($ContainerPeer* newNativeParent) {
	this->$XComponentPeer::reparent(newNativeParent);
}

bool XTextAreaPeer::isReparentSupported() {
	 return this->$XComponentPeer::isReparentSupported();
}

bool XTextAreaPeer::isObscured() {
	 return this->$XComponentPeer::isObscured();
}

bool XTextAreaPeer::canDetermineObscurity() {
	 return this->$XComponentPeer::canDetermineObscurity();
}

bool XTextAreaPeer::requestFocus($Component* lightweightChild, bool temporary, bool focusedWindowChangeAllowed, int64_t time, $FocusEvent$Cause* cause) {
	 return this->$XComponentPeer::requestFocus(lightweightChild, temporary, focusedWindowChangeAllowed, time, cause);
}

void XTextAreaPeer::paint($Graphics* g) {
	this->$XComponentPeer::paint(g);
}

$Graphics* XTextAreaPeer::getGraphics() {
	 return this->$XComponentPeer::getGraphics();
}

void XTextAreaPeer::print($Graphics* g) {
	this->$XComponentPeer::print(g);
}

void XTextAreaPeer::coalescePaintEvent($PaintEvent* e) {
	this->$XComponentPeer::coalescePaintEvent(e);
}

void XTextAreaPeer::handleEvent($AWTEvent* e) {
	this->$XComponentPeer::handleEvent(e);
}

$Dimension* XTextAreaPeer::getPreferredSize() {
	 return this->$XComponentPeer::getPreferredSize();
}

void XTextAreaPeer::layout() {
	this->$XComponentPeer::layout();
}

$FontMetrics* XTextAreaPeer::getFontMetrics($Font* font) {
	 return this->$XComponentPeer::getFontMetrics(font);
}

void XTextAreaPeer::updateCursorImmediately() {
	this->$XComponentPeer::updateCursorImmediately();
}

$Image* XTextAreaPeer::createImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createImage(width, height);
}

$VolatileImage* XTextAreaPeer::createVolatileImage(int32_t width, int32_t height) {
	 return this->$XComponentPeer::createVolatileImage(width, height);
}

void XTextAreaPeer::createBuffers(int32_t numBuffers, $BufferCapabilities* caps) {
	this->$XComponentPeer::createBuffers(numBuffers, caps);
}

void XTextAreaPeer::flip(int32_t x1, int32_t y1, int32_t x2, int32_t y2, $BufferCapabilities$FlipContents* flipAction) {
	this->$XComponentPeer::flip(x1, y1, x2, y2, flipAction);
}

$Image* XTextAreaPeer::getBackBuffer() {
	 return this->$XComponentPeer::getBackBuffer();
}

void XTextAreaPeer::destroyBuffers() {
	this->$XComponentPeer::destroyBuffers();
}

void XTextAreaPeer::setZOrder($ComponentPeer* above) {
	this->$XComponentPeer::setZOrder(above);
}

void XTextAreaPeer::applyShape($Region* shape) {
	this->$XComponentPeer::applyShape(shape);
}

bool XTextAreaPeer::updateGraphicsData($GraphicsConfiguration* gc) {
	 return this->$XComponentPeer::updateGraphicsData(gc);
}

$Point* XTextAreaPeer::getLocationOnScreen() {
	 return this->$XComponentPeer::getLocationOnScreen();
}

$ColorModel* XTextAreaPeer::getColorModel() {
	 return this->$XComponentPeer::getColorModel();
}

$GraphicsConfiguration* XTextAreaPeer::getGraphicsConfiguration() {
	 return this->$XComponentPeer::getGraphicsConfiguration();
}

$String* XTextAreaPeer::toString() {
	 return this->$XComponentPeer::toString();
}

int32_t XTextAreaPeer::hashCode() {
	 return this->$XComponentPeer::hashCode();
}

bool XTextAreaPeer::equals(Object$* arg0) {
	 return this->$XComponentPeer::equals(arg0);
}

$Object* XTextAreaPeer::clone() {
	 return this->$XComponentPeer::clone();
}

void XTextAreaPeer::finalize() {
	this->$XComponentPeer::finalize();
}

void XTextAreaPeer::init$($TextArea* target) {
	$useLocalCurrentObjectStackCache();
	$XComponentPeer::init$(static_cast<$Component*>(target));
	$set(this, javaMouseEventHandler, $new($XTextAreaPeer$JavaMouseEventHandler, this));
	$set(this, target, target);
	$var($String, text, $nc(target)->getText());
	$set(this, jtext, $new($XTextAreaPeer$AWTTextArea, this, text, this));
	$nc(this->jtext)->setWrapStyleWord(true);
	$nc($($nc(this->jtext)->getDocument()))->addDocumentListener(this->jtext);
	$init($XToolkit);
	$nc($XToolkit::specialPeerMap)->put(this->jtext, this);
	$set(this, textPane, $new($XTextAreaPeer$AWTTextPane, this, this->jtext, this, $(target->getParent())));
	setBounds(this->x, this->y, this->width, this->height, $ComponentPeer::SET_BOUNDS);
	$nc(this->textPane)->setVisible(true);
	$nc(this->textPane)->validate();
	$var($AWTAccessor$ComponentAccessor, compAccessor, $AWTAccessor::getComponentAccessor());
	$set(this, foreground, $nc(compAccessor)->getForeground(target));
	if (this->foreground == nullptr) {
		$init($SystemColor);
		$set(this, foreground, $SystemColor::textText);
	}
	setForeground(this->foreground);
	$set(this, background, compAccessor->getBackground(target));
	if (this->background == nullptr) {
		if (target->isEditable()) {
			$init($SystemColor);
			$set(this, background, $SystemColor::text);
		} else {
			$init($SystemColor);
			$set(this, background, $SystemColor::control);
		}
	}
	setBackground(this->background);
	if (!target->isBackgroundSet()) {
		compAccessor->setBackground(target, this->background);
	}
	if (!target->isForegroundSet()) {
		$init($SystemColor);
		target->setForeground($SystemColor::textText);
	}
	setFont(this->font);
	setTextImpl($(target->getText()));
	int32_t start = target->getSelectionStart();
	int32_t end = target->getSelectionEnd();
	setCaretPosition($Math::min(end, $nc(text)->length()));
	if (end > start) {
		select(start, end);
	}
	setEditable(target->isEditable());
	setScrollBarVisibility();
	this->firstChangeSkipped = true;
	compAccessor->setPeer(this->textPane, static_cast<$ComponentPeer*>(static_cast<$XComponentPeer*>(this)));
}

void XTextAreaPeer::dispose() {
	$init($XToolkit);
	$nc($XToolkit::specialPeerMap)->remove(this->jtext);
	$nc($($nc(this->jtext)->getCaret()))->setVisible(false);
	$nc(this->jtext)->removeNotify();
	$XComponentPeer::dispose();
}

void XTextAreaPeer::pSetCursor($Cursor* cursor, bool ignoreSubComponents) {
	$useLocalCurrentObjectStackCache();
	if (ignoreSubComponents || this->javaMouseEventHandler == nullptr) {
		$XComponentPeer::pSetCursor(cursor, true);
		return;
	}
	$var($Point, cursorPos, $new($Point));
	$nc(($cast($XGlobalCursorManager, $($XGlobalCursorManager::getCursorManager()))))->getCursorPos(cursorPos);
	$var($Point, onScreen, getLocationOnScreen());
	$var($Point, localPoint, $new($Point, cursorPos->x - $nc(onScreen)->x, cursorPos->y - onScreen->y));
	$nc(this->javaMouseEventHandler)->setPointerToUnderPoint(localPoint);
	$nc(this->javaMouseEventHandler)->setCursor();
}

void XTextAreaPeer::setScrollBarVisibility() {
	int32_t visibility = $nc(($cast($TextArea, this->target)))->getScrollbarVisibility();
	$nc(this->jtext)->setLineWrap(false);
	if (visibility == $TextArea::SCROLLBARS_NONE) {
		$nc(this->textPane)->setHorizontalScrollBarPolicy($JScrollPane::HORIZONTAL_SCROLLBAR_NEVER);
		$nc(this->textPane)->setVerticalScrollBarPolicy($JScrollPane::VERTICAL_SCROLLBAR_NEVER);
		$nc(this->jtext)->setLineWrap(true);
	} else if (visibility == $TextArea::SCROLLBARS_BOTH) {
		$nc(this->textPane)->setHorizontalScrollBarPolicy($JScrollPane::HORIZONTAL_SCROLLBAR_ALWAYS);
		$nc(this->textPane)->setVerticalScrollBarPolicy($JScrollPane::VERTICAL_SCROLLBAR_ALWAYS);
	} else if (visibility == $TextArea::SCROLLBARS_VERTICAL_ONLY) {
		$nc(this->textPane)->setHorizontalScrollBarPolicy($JScrollPane::HORIZONTAL_SCROLLBAR_NEVER);
		$nc(this->textPane)->setVerticalScrollBarPolicy($JScrollPane::VERTICAL_SCROLLBAR_ALWAYS);
		$nc(this->jtext)->setLineWrap(true);
	} else if (visibility == $TextArea::SCROLLBARS_HORIZONTAL_ONLY) {
		$nc(this->textPane)->setVerticalScrollBarPolicy($JScrollPane::VERTICAL_SCROLLBAR_NEVER);
		$nc(this->textPane)->setHorizontalScrollBarPolicy($JScrollPane::HORIZONTAL_SCROLLBAR_ALWAYS);
	}
}

$Dimension* XTextAreaPeer::getMinimumSize() {
	return getMinimumSize(10, 60);
}

$Dimension* XTextAreaPeer::getPreferredSize(int32_t rows, int32_t cols) {
	return getMinimumSize(rows, cols);
}

$Dimension* XTextAreaPeer::getMinimumSize(int32_t rows, int32_t cols) {
	$useLocalCurrentObjectStackCache();
	int32_t vsbwidth = 0;
	int32_t hsbheight = 0;
	$var($JScrollBar, vsb, $nc(this->textPane)->getVerticalScrollBar());
	if (vsb != nullptr) {
		vsbwidth = $nc($(vsb->getMinimumSize()))->width;
	}
	$var($JScrollBar, hsb, $nc(this->textPane)->getHorizontalScrollBar());
	if (hsb != nullptr) {
		hsbheight = $nc($(hsb->getMinimumSize()))->height;
	}
	$var($Font, f, $nc(this->jtext)->getFont());
	$var($FontMetrics, fm, $nc(this->jtext)->getFontMetrics(f));
	int32_t var$0 = $nc(fm)->charWidth(u'0') * cols + vsbwidth;
	return $new($Dimension, var$0, fm->getHeight() * rows + hsbheight);
}

bool XTextAreaPeer::isFocusable() {
	return true;
}

void XTextAreaPeer::setVisible(bool b) {
	$XComponentPeer::setVisible(b);
	if (this->textPane != nullptr) {
		$nc(this->textPane)->setVisible(b);
	}
}

void XTextAreaPeer::repaintText() {
	$nc(this->jtext)->repaintNow();
}

void XTextAreaPeer::focusGained($FocusEvent* e) {
	$XComponentPeer::focusGained(e);
	$nc(this->jtext)->forwardFocusGained(e);
}

void XTextAreaPeer::focusLost($FocusEvent* e) {
	$XComponentPeer::focusLost(e);
	$nc(this->jtext)->forwardFocusLost(e);
}

void XTextAreaPeer::repaint() {
	if (this->textPane != nullptr) {
		$nc(this->textPane)->repaint();
	}
}

void XTextAreaPeer::paintPeer($Graphics* g) {
	if (this->textPane != nullptr) {
		$nc(this->textPane)->paint(g);
	}
}

void XTextAreaPeer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height, int32_t op) {
	$XComponentPeer::setBounds(x, y, width, height, op);
	if (this->textPane != nullptr) {
		int32_t childX = x;
		int32_t childY = y;
		$var($Component, parent, $nc(this->target)->getParent());
		while ($nc(parent)->isLightweight()) {
			childX -= parent->getX();
			childY -= parent->getY();
			$assign(parent, parent->getParent());
		}
		$nc(this->textPane)->setBounds(childX, childY, width, height);
		$nc(this->textPane)->validate();
	}
}

void XTextAreaPeer::handleJavaKeyEvent($KeyEvent* e) {
	$nc($($AWTAccessor::getComponentAccessor()))->processEvent(this->jtext, e);
}

bool XTextAreaPeer::handlesWheelScrolling() {
	return true;
}

void XTextAreaPeer::handleJavaMouseWheelEvent($MouseWheelEvent* e) {
	$nc($($AWTAccessor::getComponentAccessor()))->processEvent(this->textPane, e);
}

void XTextAreaPeer::handleJavaMouseEvent($MouseEvent* e) {
	$XComponentPeer::handleJavaMouseEvent(e);
	$nc(this->javaMouseEventHandler)->handle(e);
}

void XTextAreaPeer::handleJavaInputMethodEvent($InputMethodEvent* e) {
	if (this->jtext != nullptr) {
		$nc(this->jtext)->processInputMethodEventPublic(e);
	}
}

void XTextAreaPeer::select(int32_t s, int32_t e) {
	$nc(this->jtext)->select(s, e);
	$nc(this->jtext)->repaint();
}

void XTextAreaPeer::setBackground($Color* c) {
	$XComponentPeer::setBackground(c);
	if (this->jtext != nullptr) {
		$nc(this->jtext)->setBackground(c);
		$nc(this->jtext)->setSelectedTextColor(c);
	}
}

void XTextAreaPeer::setForeground($Color* c) {
	$XComponentPeer::setForeground(c);
	if (this->jtext != nullptr) {
		$nc(this->jtext)->setForeground(this->foreground);
		$nc(this->jtext)->setSelectionColor(this->foreground);
		$nc(this->jtext)->setCaretColor(this->foreground);
	}
}

void XTextAreaPeer::setFont($Font* f) {
	$XComponentPeer::setFont(f);
	if (this->jtext != nullptr) {
		$nc(this->jtext)->setFont(this->font);
	}
	$nc(this->textPane)->validate();
}

void XTextAreaPeer::setEditable(bool editable) {
	if (this->jtext != nullptr) {
		$nc(this->jtext)->setEditable(editable);
	}
	repaintText();
}

void XTextAreaPeer::setEnabled(bool enabled) {
	$XComponentPeer::setEnabled(enabled);
	if (this->jtext != nullptr) {
		$nc(this->jtext)->setEnabled(enabled);
		$nc(this->jtext)->repaint();
	}
}

$InputMethodRequests* XTextAreaPeer::getInputMethodRequests() {
	if (this->jtext != nullptr) {
		return $nc(this->jtext)->getInputMethodRequests();
	} else {
		return nullptr;
	}
}

int32_t XTextAreaPeer::getSelectionStart() {
	return $nc(this->jtext)->getSelectionStart();
}

int32_t XTextAreaPeer::getSelectionEnd() {
	return $nc(this->jtext)->getSelectionEnd();
}

$String* XTextAreaPeer::getText() {
	return $nc(this->jtext)->getText();
}

void XTextAreaPeer::setText($String* text) {
	setTextImpl(text);
	repaintText();
}

void XTextAreaPeer::setTextImpl($String* txt) {
	$useLocalCurrentObjectStackCache();
	if (this->jtext != nullptr) {
		$nc($($nc(this->jtext)->getDocument()))->removeDocumentListener(this->jtext);
		$nc(this->jtext)->setText(txt);
		if (this->firstChangeSkipped) {
			postEvent($$new($TextEvent, this->target, $TextEvent::TEXT_VALUE_CHANGED));
		}
		$nc($($nc(this->jtext)->getDocument()))->addDocumentListener(this->jtext);
	}
}

void XTextAreaPeer::insert($String* txt, int32_t p) {
	$useLocalCurrentObjectStackCache();
	if (this->jtext != nullptr) {
		bool var$0 = p >= $nc($($nc(this->jtext)->getDocument()))->getLength();
		bool doScroll = (var$0 && $nc($($nc(this->jtext)->getDocument()))->getLength() != 0);
		$nc(this->jtext)->insert(txt, p);
		$nc(this->textPane)->validate();
		if (doScroll) {
			$var($JScrollBar, bar, $nc(this->textPane)->getVerticalScrollBar());
			if (bar != nullptr) {
				int32_t var$1 = bar->getMaximum();
				bar->setValue(var$1 - bar->getVisibleAmount());
			}
		}
	}
}

void XTextAreaPeer::replaceRange($String* txt, int32_t s, int32_t e) {
	$useLocalCurrentObjectStackCache();
	if (this->jtext != nullptr) {
		$nc($($nc(this->jtext)->getDocument()))->removeDocumentListener(this->jtext);
		$nc(this->jtext)->replaceRange(txt, s, e);
		postEvent($$new($TextEvent, this->target, $TextEvent::TEXT_VALUE_CHANGED));
		$nc($($nc(this->jtext)->getDocument()))->addDocumentListener(this->jtext);
	}
}

void XTextAreaPeer::setCaretPosition(int32_t position) {
	$nc(this->jtext)->setCaretPosition(position);
}

int32_t XTextAreaPeer::getCaretPosition() {
	return $nc(this->jtext)->getCaretPosition();
}

XTextAreaPeer::XTextAreaPeer() {
}

$Class* XTextAreaPeer::load$($String* name, bool initialize) {
	$loadClass(XTextAreaPeer, name, initialize, &_XTextAreaPeer_ClassInfo_, allocate$XTextAreaPeer);
	return class$;
}

$Class* XTextAreaPeer::class$ = nullptr;

		} // X11
	} // awt
} // sun